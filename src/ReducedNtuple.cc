#include "ReducedNtuple.hh"

using namespace RestFrames;

ReducedNtuple::ReducedNtuple(TTree* tree)
  : NtupleBase<SOSInputTree>(tree)
{
  // RestFrames stuff

  // combinatoric (transverse) tree
  // for jet assignment
  LAB_comb = new LabRecoFrame("LAB_comb","LAB");
  CM_comb  = new DecayRecoFrame("CM_comb","CM");
  S_comb   = new DecayRecoFrame("S_comb","S");
  ISR_comb = new VisibleRecoFrame("ISR_comb","ISR");
  J_comb   = new VisibleRecoFrame("J_comb","Jets");
  L_comb   = new VisibleRecoFrame("L_comb","#it{l}'s");
  I_comb   = new InvisibleRecoFrame("I_comb","Inv");
  
  LAB_comb->SetChildFrame(*CM_comb);
  CM_comb->AddChildFrame(*ISR_comb);
  CM_comb->AddChildFrame(*S_comb);
  S_comb->AddChildFrame(*L_comb);
  S_comb->AddChildFrame(*J_comb);
  S_comb->AddChildFrame(*I_comb);
  
  LAB_comb->InitializeTree();

  // OS 2L tree w/ fixed jet assign.
  LAB_fix = new LabRecoFrame("LAB_fix","LAB");
  CM_fix  = new DecayRecoFrame("CM_fix","CM");
  S_fix   = new DecayRecoFrame("S_fix","S");
  ISR_fix = new VisibleRecoFrame("ISR_fix","ISR");
  L_fix   = new DecayRecoFrame("L_fix","#it{ll}");
  L1_fix  = new VisibleRecoFrame("L1_fix","#it{l}_{1}");
  L2_fix  = new VisibleRecoFrame("L2_fix","#it{l}_{2}");
  I_fix   = new InvisibleRecoFrame("I_fix","I");

  LAB_fix->SetChildFrame(*CM_fix);
  CM_fix->AddChildFrame(*ISR_fix);
  CM_fix->AddChildFrame(*S_fix);
  S_fix->AddChildFrame(*L_fix);
  S_fix->AddChildFrame(*I_fix);
  L_fix->AddChildFrame(*L1_fix);
  L_fix->AddChildFrame(*L2_fix);
  
  LAB_fix->InitializeTree();

   ////////////// Jigsaw rules set-up /////////////////

  // combinatoric (transverse) tree
  // for jet assignment
  INV_comb = new InvisibleGroup("INV_comb","Invisible System");
  INV_comb->AddFrame(*I_comb);
  
  InvMass_comb = new SetMassInvJigsaw("InvMass_comb", "Invisible system mass Jigsaw");
  INV_comb->AddJigsaw(*InvMass_comb);
  
  JETS_comb = new CombinatoricGroup("JETS_comb","Jets System");
  JETS_comb->AddFrame(*ISR_comb);
  JETS_comb->SetNElementsForFrame(*ISR_comb, 1);
  JETS_comb->AddFrame(*J_comb);
  JETS_comb->SetNElementsForFrame(*J_comb, 0);
  
  SplitJETS_comb = new MinMassesCombJigsaw("SplitJETS_comb", "Minimize M_{ISR} and M_{S} Jigsaw");
  JETS_comb->AddJigsaw(*SplitJETS_comb);
  SplitJETS_comb->AddCombFrame(*ISR_comb, 0);
  SplitJETS_comb->AddCombFrame(*J_comb, 1);
  SplitJETS_comb->AddObjectFrame(*ISR_comb,0);
  SplitJETS_comb->AddObjectFrame(*S_comb,1);

  if(!LAB_comb->InitializeAnalysis()){
    cout << "Problem initializing \"comb\" analysis" << endl;
  }

  // OS 2L tree w/ fixed jet assign.
  INV_fix = new InvisibleGroup("INV_fix","Invisible System");
  INV_fix->AddFrame(*I_fix);
  
  InvMass_fix = new SetMassInvJigsaw("InvMass_fix", "Invisible system mass Jigsaw");
  INV_fix->AddJigsaw(*InvMass_fix);
  InvRapidity_fix = new SetRapidityInvJigsaw("InvRapidity_fix", "Set inv. system rapidity");
  INV_fix->AddJigsaw(*InvRapidity_fix);
  InvRapidity_fix->AddVisibleFrames(S_fix->GetListVisibleFrames());

  if(!LAB_fix->InitializeAnalysis()){
    cout << "Problem initializing \"fix\" analysis" << endl;
  }
}

ReducedNtuple::~ReducedNtuple() {
  // combinatoric (transverse) tree
  // for jet assignment
  delete LAB_comb;
  delete CM_comb;
  delete S_comb;
  delete ISR_comb;
  delete J_comb;
  delete L_comb;
  delete I_comb;
  delete INV_comb;
  delete InvMass_comb;
  delete JETS_comb;
  delete SplitJETS_comb;

  // OS 2L tree w/ fixed jet assign.
  delete LAB_fix;
  delete CM_fix;
  delete S_fix;
  delete ISR_fix;

  delete L_fix;  
  delete L1_fix;
  delete L2_fix;
 
  delete I_fix;

  delete INV_fix;
  delete InvMass_fix;
  delete InvRapidity_fix;
}

void ReducedNtuple::InitOutputTree(){
  if(m_Tree)
    delete m_Tree;

  string name = string(fChain->GetName());

  m_Tree = (TTree*) new TTree("SOSAnalysis", "SOSAnalysis");

  m_Tree->Branch("weight", &m_weight);
  
  m_Tree->Branch("MET", &m_MET);
  m_Tree->Branch("MET_phi", &m_MET_phi);
  m_Tree->Branch("HT", &m_HT);

  // SF?
  m_Tree->Branch("Is_SF", &m_Is_SF);

  // pre-computed lepton variables
  m_Tree->Branch("nEl", &m_nEl);
  m_Tree->Branch("nMu", &m_nMu);
  m_Tree->Branch("nBjet", &m_nBjet);
 
  m_Tree->Branch("pT_1lep", &m_pT_1lep);
  m_Tree->Branch("id_1lep", &m_id_1lep);
  m_Tree->Branch("pT_2lep", &m_pT_2lep);
  m_Tree->Branch("id_2lep", &m_id_2lep);
  m_Tree->Branch("pT_3lep", &m_pT_3lep);
  m_Tree->Branch("id_3lep", &m_id_3lep);

  m_Tree->Branch("NjS", &m_NjS);
  m_Tree->Branch("NjISR", &m_NjISR);

  m_Tree->Branch("PTCM_comb", &m_PTCM_comb);
  m_Tree->Branch("PTISR_comb", &m_PTISR_comb);
  m_Tree->Branch("RISR_comb", &m_RISR_comb);
  m_Tree->Branch("cosCM_comb", &m_cosCM_comb);
  m_Tree->Branch("cosS_comb", &m_cosS_comb);
  m_Tree->Branch("MISR_comb", &m_MISR_comb);
  m_Tree->Branch("MS_comb", &m_MS_comb);
  m_Tree->Branch("dphiCMI_comb", &m_dphiCMI_comb);
  m_Tree->Branch("dphiSI_comb", &m_dphiSI_comb);
  m_Tree->Branch("dphiISRI_comb", &m_dphiISRI_comb);

  m_Tree->Branch("PTCM_fix", &m_PTCM_fix);
  m_Tree->Branch("PTISR_fix", &m_PTISR_fix);
  m_Tree->Branch("RISR_fix", &m_RISR_fix);
  m_Tree->Branch("cosCM_fix", &m_cosCM_fix);
  m_Tree->Branch("cosS_fix", &m_cosS_fix);
  m_Tree->Branch("MISR_fix", &m_MISR_fix);
  m_Tree->Branch("MS_fix", &m_MS_fix);
  m_Tree->Branch("dphiCMI_fix", &m_dphiCMI_fix);
  m_Tree->Branch("dphiSI_fix", &m_dphiSI_fix);
  m_Tree->Branch("dphiISRI_fix", &m_dphiISRI_fix);

  m_Tree->Branch("MZ", &m_MZ);
  m_Tree->Branch("cosZ", &m_cosZ);

}

void ReducedNtuple::FillOutputTree(){

  m_weight = GetEventWeight();

  vector<TLorentzVector> Jets; 
  GetJets(Jets, 25., 2.4); 
  
  // need at least one jet to play
  if(Jets.size() < 1) 
    return; 
  
  TVector3 ETMiss = GetMET();

  if(ETMiss.Mag() < 125.)
    return;
      
  vector<TLorentzVector> Leptons;
  vector<int> LepIDs;
  GetLeptons(Leptons, LepIDs, 3.5, 2.4);
  
  if(Leptons.size() != 2) // exactly 2 OS muons for now
    return;

  if(LepIDs[0]+LepIDs[1] != 0) // OS
    return;

  if(Leptons[0].Pt() < 5. && Leptons[1].Pt() < 5.) // lead muon greater than 5 GeV in Pt
    return;

  // if(Leptons[0].Pt() > 30. || Leptons[1].Pt() > 30.) // muon pT's less than 30
  //   return;

  m_weight = GetEventWeight();
  
  m_MET     = ETMiss.Pt();
  m_MET_phi = ETMiss.Phi();

  //m_nBjet = nBJet30_MV2c10;

  
  m_pT_1lep = Leptons[0].Pt();
  m_id_1lep = LepIDs[0];
  
  m_pT_2lep = Leptons[1].Pt();
  m_id_2lep = LepIDs[1];
 
  m_pT_3lep = 0.;
  m_id_3lep = 0;

  // first - analyze jet combinatoric tree
  // (regardless of later tree)
  LAB_comb->ClearEvent();

  TLorentzVector JetTOT(0.,0.,0.,0.);
  m_HT = 0.;
  
  vector<RFKey> jetID; 
  for(int i = 0; i < int(Jets.size()); i++){
    TLorentzVector jet = Jets[i];
    m_HT += jet.Pt();
    JetTOT += jet;
    
    // transverse view of jet 4-vectors
    jet.SetPtEtaPhiM(jet.Pt(),0.0,jet.Phi(),jet.M());
    jetID.push_back(JETS_comb->AddLabFrameFourVector(jet));
  }

  TLorentzVector lepSys(0.,0.,0.,0.);
  for(int i = 0; i < int(Leptons.size()); i++){
    TLorentzVector lep1;
    // transverse view of mu 4-vectors
    lep1.SetPtEtaPhiM(Leptons[i].Pt(),0.0,Leptons[i].Phi(),Leptons[i].M());
    lepSys = lepSys + lep1;
  }  
  L_comb->SetLabFrameFourVector(lepSys);

  INV_comb->SetLabFrameThreeVector(ETMiss);
  if(!LAB_comb->AnalyzeEvent())
    cout << "Something went wrong with \"comb\" tree event analysis" << endl;


  // Jet counting from comb tree
  m_NjS   = 0;
  m_NjISR = 0;
 
  for(int i = 0; i < int(Jets.size()); i++){
    if(JETS_comb->GetFrame(jetID[i]) == *J_comb){ // sparticle group
      m_NjS++;
    } else {
      m_NjISR++;
    }
  }


  // fixed tree analysis
  LAB_fix->ClearEvent();


  ISR_fix->SetLabFrameFourVector(JetTOT);
  // put leptons in their place
  L1_fix->SetLabFrameFourVector(Leptons[0]);
  L2_fix->SetLabFrameFourVector(Leptons[1]);

  INV_fix->SetLabFrameThreeVector(ETMiss);
    
  if(!LAB_fix->AnalyzeEvent())
    cout << "Something went wrong with \"fix\" tree event analysis" << endl;

   
  m_cosCM_comb = CM_comb->GetCosDecayAngle();
  m_cosS_comb  = S_comb->GetCosDecayAngle();
  m_MISR_comb = ISR_comb->GetMass();
  m_MS_comb   = S_comb->GetCosDecayAngle();
  m_dphiCMI_comb = acos(-1.)-fabs(CM_comb->GetDeltaPhiBoostVisible());
  m_dphiSI_comb  = acos(-1.)-fabs(S_comb->GetDeltaPhiBoostVisible());

  m_cosCM_fix = CM_fix->GetCosDecayAngle();
  m_cosS_fix  = S_fix->GetCosDecayAngle();
  m_MISR_fix = ISR_fix->GetMass();
  m_MS_fix   = S_fix->GetCosDecayAngle();
  m_dphiCMI_fix = acos(-1.)-fabs(CM_fix->GetDeltaPhiBoostVisible());
  m_dphiSI_fix  = acos(-1.)-fabs(S_fix->GetDeltaPhiBoostVisible());

  m_MZ = L_fix->GetMass();
  m_cosZ = L_fix->GetCosDecayAngle();
  for(;;){ //comb tree
    TLorentzVector vP_CM  = CM_comb->GetFourVector();
    TLorentzVector vP_ISR = ISR_comb->GetFourVector();
    TLorentzVector vP_I   = I_comb->GetFourVector();
    
    m_PTCM_comb = vP_CM.Pt();
    
    TVector3 boostZ = vP_CM.BoostVector();
    boostZ.SetX(0.);
    boostZ.SetY(0.);
    
    vP_CM.Boost(-boostZ);
    vP_ISR.Boost(-boostZ);
    vP_I.Boost(-boostZ);
    
    TVector3 boostT = vP_CM.BoostVector();
    vP_ISR.Boost(-boostT);
    vP_I.Boost(-boostT);
    
    TVector3 vPt_ISR = vP_ISR.Vect();
    TVector3 vPt_I   = vP_I.Vect();
    vPt_ISR -= vPt_ISR.Dot(boostZ.Unit())*boostZ.Unit();
    vPt_I   -= vPt_I.Dot(boostZ.Unit())*boostZ.Unit();
    
    m_PTISR_comb =  vPt_ISR.Mag();
    m_RISR_comb  = -vPt_I.Dot(vPt_ISR.Unit()) / m_PTISR_comb;
    m_dphiISRI_comb = fabs(vPt_ISR.Angle(vPt_I));

    break;
  }

  for(;;){ // fixed jet tree
    TLorentzVector vP_CM  = CM_fix->GetFourVector();
    TLorentzVector vP_ISR = ISR_fix->GetFourVector();
    TLorentzVector vP_I   = I_fix->GetFourVector();
    
    m_PTCM_fix = vP_CM.Pt();
    
    TVector3 boostZ = vP_CM.BoostVector();
    boostZ.SetX(0.);
    boostZ.SetY(0.);
    
    vP_CM.Boost(-boostZ);
    vP_ISR.Boost(-boostZ);
    vP_I.Boost(-boostZ);
    
    TVector3 boostT = vP_CM.BoostVector();
    vP_ISR.Boost(-boostT);
    vP_I.Boost(-boostT);
    
    TVector3 vPt_ISR = vP_ISR.Vect();
    TVector3 vPt_I   = vP_I.Vect();
    vPt_ISR -= vPt_ISR.Dot(boostZ.Unit())*boostZ.Unit();
    vPt_I   -= vPt_I.Dot(boostZ.Unit())*boostZ.Unit();
    
    m_PTISR_fix =  vPt_ISR.Mag();
    m_RISR_fix  = -vPt_I.Dot(vPt_ISR.Unit()) / m_PTISR_fix;
    m_dphiISRI_fix = fabs(vPt_ISR.Angle(vPt_I));

    break;
  }

  if(m_Tree)
    m_Tree->Fill();
  
}
