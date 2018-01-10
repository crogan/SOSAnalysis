#ifndef ReducedNtuple_h
#define ReducedNtuple_h

#include "NtupleBase.hh"
#include "SOSInputTree.hh"
#include "RestFrames/RestFrames.hh"

using namespace RestFrames;

class ReducedNtuple : public NtupleBase<SOSInputTree> {

public:
  ReducedNtuple(TTree* tree = 0);
  virtual ~ReducedNtuple();

private:
  void InitOutputTree();
  void FillOutputTree();

  double m_MET;
  double m_MET_phi;

  double m_HT;

  int m_nEl;
  int m_nMu;
  int m_nBjet;
  
  double m_pT_1lep;
  int m_id_1lep;
  double m_pT_2lep;
  int m_id_2lep;
  double m_pT_3lep;
  int m_id_3lep;
  
  // common variables for output tree
  double m_weight;

  bool m_Is_SF;

  int m_NjS;
  int m_NjISR;
  
  // compressed observables
  // common to all trees
  double m_PTISR_comb;
  double m_PTCM_comb;
  double m_RISR_comb;
  double m_cosCM_comb;
  double m_cosS_comb;
  double m_MISR_comb;
  double m_MS_comb;
  double m_dphiCMI_comb;
  double m_dphiSI_comb;
  double m_dphiISRI_comb;

  double m_PTISR_fix;
  double m_PTCM_fix;
  double m_RISR_fix;
  double m_cosCM_fix;
  double m_cosS_fix;
  double m_MISR_fix;
  double m_MS_fix;
  double m_dphiCMI_fix;
  double m_dphiSI_fix;
  double m_dphiISRI_fix;

  double m_MZ;
  double m_cosZ;


  // RestFrames frames and friends

  // combinatoric (transverse) tree
  // for jet assignment
  LabRecoFrame*        LAB_comb;
  DecayRecoFrame*      CM_comb;
  DecayRecoFrame*      S_comb;
  VisibleRecoFrame*    ISR_comb;
  VisibleRecoFrame*    J_comb;
  VisibleRecoFrame*    L_comb;
  InvisibleRecoFrame*  I_comb;
  InvisibleGroup*      INV_comb;
  SetMassInvJigsaw*    InvMass_comb;
  CombinatoricGroup*   JETS_comb;
  MinMassesCombJigsaw* SplitJETS_comb;

  // OS 2L tree w/ fixed jet assign.
  LabRecoFrame*        LAB_fix;
  DecayRecoFrame*      CM_fix;
  DecayRecoFrame*      S_fix;
  VisibleRecoFrame*    ISR_fix;

  DecayRecoFrame*      L_fix;  
  VisibleRecoFrame*    L1_fix;
  VisibleRecoFrame*    L2_fix;
 
  InvisibleRecoFrame*  I_fix;

  InvisibleGroup*       INV_fix;
  SetMassInvJigsaw*     InvMass_fix;
  SetRapidityInvJigsaw* InvRapidity_fix;


};

#endif
