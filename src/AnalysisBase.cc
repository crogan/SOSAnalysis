#include <TH1D.h>
#include <iostream>

#include "AnalysisBase.hh"
#include "SOSInputTree.hh"
#include "TMatrixDSym.h"
#include "TVectorD.h"

using namespace std;

template <class Base>
AnalysisBase<Base>::AnalysisBase(TTree* tree)
  : Base(tree)
{
  m_CurrentFile = -1;
  m_DSID = -1;
  m_Nevent = 0.;
  m_Label  = "";
  m_XSEC = 0.;
  InitXSECmap();
}

template <class Base>
AnalysisBase<Base>::~AnalysisBase() {}

template <class Base>
Int_t AnalysisBase<Base>::GetEntry(Long64_t entry){
  if (!Base::fChain) return 0;
  
  Int_t ret = Base::fChain->GetEntry(entry);
 
  // if(Base::fChain->GetTreeNumber() != m_CurrentFile)
  //   NewFile();

  return ret;
}

template <class Base>
void AnalysisBase<Base>::AddLabel(string& label){
  m_Label = label;
  m_XSEC = m_IDtoXSEC[m_Label];
  return;
}

template <class Base>
void AnalysisBase<Base>::AddNevent(double nevt){
  m_Nevent = nevt;
  return;
}

template <class Base>
void AnalysisBase<Base>::NewFile(){
  // m_CurrentFile = Base::fChain->GetTreeNumber();

  // TFile* F = ((TChain*)Base::fChain)->GetFile();
  // if(!F) return;

  // char *p, *q;
  // char fname[256];
  // sprintf(fname,"%s",F->GetName());
  // p = strtok(fname, "/");

  // q = p;
  // while(p){
  //   q = p;
  //   p = strtok(NULL,"/");
  // }
  // m_DSID = atoi(strtok(q,"."));

  // TH1D* h_counter = (TH1D*) F->Get("Counter_JobBookeeping_JobBookeeping");
  // int nevt_wgt = h_counter->GetBinContent(2);
  // m_IDtoNEVT[m_DSID] = nevt_wgt;

  // cout << "Initialized file " << F->GetName() << ": ";
  // cout << "   DSID   = " << m_DSID << endl;
  // cout << "   XSEC   = " << m_IDtoXSEC[m_DSID] << endl;
  // cout << "   Nevt^W = " << m_IDtoNEVT[m_DSID] << endl;
}

template <class Base>
double AnalysisBase<Base>::DeltaPhiMin(const vector<TLorentzVector>& JETs, const TVector3& MET, int N){
  double dphimin = acos(-1);
  int Njet = JETs.size();
  for(int i = 0; i < Njet; i++){
    if(N > 0 && i >= N) break;
    if(fabs(JETs[i].Vect().DeltaPhi(MET)) < dphimin) dphimin = fabs(JETs[i].Vect().DeltaPhi(MET));
  }
  return dphimin;
}

template <class Base>
double AnalysisBase<Base>::DeltaPhiMin(const vector<pair<TLorentzVector, bool> >& JETs, const TVector3& MET, int N){
  double dphimin = acos(-1);
  int Njet = JETs.size();
  for(int i = 0; i < Njet; i++){
    if(N > 0 && i >= N) break;
    if(fabs(JETs[i].first.Vect().DeltaPhi(MET)) < dphimin) dphimin = fabs(JETs[i].first.Vect().DeltaPhi(MET));
  }
  return dphimin;
}

template <class Base>
void AnalysisBase<Base>::InitXSECmap() {}

template <class Base>
double AnalysisBase<Base>::GetEventWeight(){
  return 0;
}

template <class Base>
TVector3 AnalysisBase<Base>::GetMET(){
  return TVector3(0.,0.,0.);
}

template <class Base>
int AnalysisBase<Base>::GetJets(vector<TLorentzVector>& JETs, double pt_cut, double eta_cut) {
  return 0.;
}

template <class Base>
int AnalysisBase<Base>::GetLargeRJets(vector<TLorentzVector>& JETs, double pt_cut, double eta_cut) {
  return 0.;
}

template <class Base>
void AnalysisBase<Base>::MomTensorCalc(vector<TLorentzVector>& input, vector<double>& eigenvalues, double power, bool threeD){

  eigenvalues.clear();
  
  int N = input.size();

  if(threeD){
    if(N <= 0){
      for(int i = 0; i < 3; i++) eigenvalues.push_back(0.);
      return;
    }
    if(N == 1){
      eigenvalues.push_back(1.);
      for(int i = 0; i < 2; i++) eigenvalues.push_back(0.);
      return;
    }
    
    TMatrixDSym momTensor(3);
    momTensor.Zero();

    double norm = 0.;
    double P = 0.;
    double pnorm = 0.;
    for(int i = 0; i < N; i++){
      P = input[i].P();
      if( P > 0. ){
	norm += pow(P, power);
	pnorm = pow(P, power - 2.);
	momTensor(0,0) += pnorm*input[i].Px()*input[i].Px();
	momTensor(0,1) += pnorm*input[i].Px()*input[i].Py();
	momTensor(0,2) += pnorm*input[i].Px()*input[i].Pz();
	momTensor(1,0) += pnorm*input[i].Py()*input[i].Px();
	momTensor(1,1) += pnorm*input[i].Py()*input[i].Py();
	momTensor(1,2) += pnorm*input[i].Py()*input[i].Pz();
	momTensor(2,0) += pnorm*input[i].Pz()*input[i].Px();
	momTensor(2,1) += pnorm*input[i].Pz()*input[i].Py();
	momTensor(2,2) += pnorm*input[i].Pz()*input[i].Pz();
      }
    }
    if(norm > 0.){
      momTensor = (1./norm)*momTensor;
      TVectorD evalues(3);
      momTensor.EigenVectors(evalues);
      for(int i = 0; i < 3; i++) eigenvalues.push_back(evalues(i));
      return;
    } else {
      for(int i = 0; i < 3; i++) eigenvalues.push_back(0.);
      return;
    }

  } else { // transverse
    if(N <= 0){
      for(int i = 0; i < 2; i++) eigenvalues.push_back(0.);
      return;
    }
    if(N == 1){
      eigenvalues.push_back(1.);
      eigenvalues.push_back(0.);
      return;
    }

    TMatrixDSym momTensor(2);
    momTensor.Zero();

    double norm = 0.;
    double P = 0.;
    double pnorm = 0.;
    for(int i = 0; i < N; i++){
      P = input[i].Pt();
      if( P > 0. ){
	norm += pow(P, power);
	pnorm = pow(P, power - 2.);
	momTensor(0,0) += pnorm*input[i].Px()*input[i].Px();
	momTensor(0,1) += pnorm*input[i].Px()*input[i].Py();
	momTensor(1,0) += pnorm*input[i].Py()*input[i].Px();
	momTensor(1,1) += pnorm*input[i].Py()*input[i].Py();
      }
    }
    if(norm > 0.){
      momTensor = (1./norm)*momTensor;
      TVectorD evalues(2);
      momTensor.EigenVectors(evalues);
      for(int i = 0; i < 2; i++) eigenvalues.push_back(evalues(i));
      return;
    } else{
      for(int i = 0; i < 2; i++) eigenvalues.push_back(0.);
      return;
    }

  }
} 



// template <>
// double AnalysisBase<InputTreeBase>::GetEventWeight(){
//   if(m_Nevent > 0.){
//     double ret = 1000.*m_XSEC*SelectedEvent_EvtWeight*SelectedEvent_EvtWtPV/m_Nevent;
//     return ret;
//   }
//   else
//     return 0.;
// }

// template <>
// TVector3 AnalysisBase<ZeroLeptonBase>::GetMET(){
//   TVector3 met;
//   met.SetPtEtaPhi(NTVars_met,0.0,NTVars_metPhi);
//   return met;
// }

// template <>
// int AnalysisBase<InputTreeBase>::GetJets(vector<TLorentzVector>& JETs, double pt_cut, double eta_cut){

//   int Njet = ptAK4->size();
//   for(int i = 0; i < Njet; i++){
//     if((ptAK4->at(i) >= pt_cut) && (fabs(etaAK4->at(i)) < eta_cut || eta_cut < 0)){
//       TLorentzVector JET;
//       float mass = MAK4->at(i);
//       if(std::isnan(mass))
// 	mass = 0;
//       if(std::isinf(mass))
// 	mass = 0;
//       if(mass < 0.)
// 	mass = 0.;
//       JET.SetPtEtaPhiM( ptAK4->at(i), etaAK4->at(i), phiAK4->at(i), mass );
//       JETs.push_back(JET);
//     }
//   }
//   return 0.;

// }

// template<>
// int AnalysisBase<InputTreeBase>::GetLargeRJets(vector<TLorentzVector>& JETs, double pt_cut, double eta_cut){
  
//   int Njet = ptAK8->size();
//   for(int i = 0; i < Njet; i++){
//     if((ptAK8->at(i) >= pt_cut) && (fabs(etaAK8->at(i)) < eta_cut || eta_cut < 0)){
//       TLorentzVector JET;
//       float mass = MAK8->at(i);
//       if(std::isnan(mass))
// 	mass = 0;
//       if(std::isinf(mass))
// 	mass = 0;
//       if(mass < 0.)
// 	mass = 0.;
//       JET.SetPtEtaPhiM( ptAK8->at(i), etaAK8->at(i), phiAK8->at(i), mass );
//       JETs.push_back(JET);
//     }
//   }
//   return 0.;

// }

template class AnalysisBase<SOSInputTree>;

