//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jan  9 18:57:06 2018 by ROOT version 5.34/34
// from TTree tree/treeProducerSusyMultilepton
// found on file: WZTo1L1Nu2Q_treeProducerSusyMultilepton_tree.root
//////////////////////////////////////////////////////////

#ifndef SOSInputTree_h
#define SOSInputTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class SOSInputTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          lumi;
   ULong64_t       evt;
   Int_t           isData;
   Float_t         xsec;
   Float_t         puWeight;
   Float_t         nTrueInt;
   Float_t         genWeight;
   Int_t           Flag_badMuonMoriond2017;
   Int_t           Flag_badCloneMuonMoriond2017;
   Float_t         badCloneMuonMoriond2017_maxPt;
   Float_t         badNotCloneMuonMoriond2017_maxPt;
   Float_t         rho;
   Float_t         rhoCN;
   Int_t           nVert;
   Int_t           nJet25;
   Int_t           nJet25a;
   Int_t           nBJetLoose25;
   Int_t           nBJetMedium25;
   Int_t           nBJetTight25;
   Int_t           nJet30;
   Int_t           nJet30a;
   Int_t           nBJetLoose30;
   Int_t           nBJetMedium30;
   Int_t           nBJetTight30;
   Int_t           nJet40;
   Int_t           nJet40a;
   Int_t           nBJetLoose40;
   Int_t           nBJetMedium40;
   Int_t           nBJetTight40;
   Int_t           nLepGood20;
   Int_t           nLepGood15;
   Int_t           nLepGood10;
   Int_t           GenSusyMScan1;
   Int_t           GenSusyMScan2;
   Int_t           GenSusyMScan3;
   Int_t           GenSusyMScan4;
   Int_t           GenSusyMGluino;
   Int_t           GenSusyMGravitino;
   Int_t           GenSusyMStop;
   Int_t           GenSusyMSbottom;
   Int_t           GenSusyMStop2;
   Int_t           GenSusyMSbottom2;
   Int_t           GenSusyMSquark;
   Int_t           GenSusyMNeutralino;
   Int_t           GenSusyMNeutralino2;
   Int_t           GenSusyMNeutralino3;
   Int_t           GenSusyMNeutralino4;
   Int_t           GenSusyMChargino;
   Int_t           GenSusyMChargino2;
   Float_t         lheHT;
   Float_t         lheHTIncoming;
   Float_t         htJet25;
   Float_t         mhtJet25;
   Float_t         htJet40j;
   Float_t         htJet40ja;
   Float_t         htJet40;
   Float_t         htJet40a;
   Float_t         mhtJet40;
   Float_t         mhtJet40a;
   Int_t           nJet25NoTau;
   Int_t           nBJetLoose25NoTau;
   Int_t           nBJetMedium25NoTau;
   Int_t           nBJetCMVALoose25;
   Int_t           nBJetCMVAMedium25;
   Int_t           nBJetCMVATight25;
   Int_t           nSoftBLoose25;
   Int_t           nSoftBMedium25;
   Int_t           nSoftBTight25;
   Int_t           nJet30NoTau;
   Int_t           nBJetLoose30NoTau;
   Int_t           nBJetMedium30NoTau;
   Int_t           nJet40NoTau;
   Int_t           nBJetLoose40NoTau;
   Int_t           nBJetMedium40NoTau;
   Int_t           nBJetCMVALoose40;
   Int_t           nBJetCMVAMedium40;
   Int_t           nBJetCMVATight40;
   Float_t         mZ1;
   Float_t         mZ1SFSS;
   Float_t         minMllSFOS;
   Float_t         maxMllSFOS;
   Float_t         minMllAFOS;
   Float_t         maxMllAFOS;
   Float_t         minMllAFSS;
   Float_t         maxMllAFSS;
   Float_t         minMllAFAS;
   Float_t         maxMllAFAS;
   Float_t         m2l;
   Float_t         minDrllAFSS;
   Float_t         maxDrllAFSS;
   Float_t         minDrllAFOS;
   Float_t         maxDrllAFOS;
   Float_t         mZ2;
   Float_t         m3l;
   Float_t         m4l;
   Float_t         pt2l;
   Float_t         pt3l;
   Float_t         pt4l;
   Float_t         ht3l;
   Float_t         ht4l;
   Int_t           q3l;
   Int_t           q4l;
   Int_t           minMWjj;
   Int_t           minMWjjPt;
   Int_t           bestMWjj;
   Int_t           bestMWjjPt;
   Int_t           bestMTopHad;
   Int_t           bestMTopHadPt;
   Int_t           GenHiggsDecayMode;
   Float_t         pvXpos;
   Float_t         pvYpos;
   Float_t         pvZpos;
   Float_t         pvXerrPos;
   Float_t         pvYerrPos;
   Float_t         pvZerrPos;
   Float_t         Flag_badChargedHadronFilter;
   Float_t         Flag_badMuonFilter;
   Int_t           hbheFilterNew50ns;
   Int_t           hbheFilterNew25ns;
   Int_t           hbheFilterIso;
   Float_t         met_trkPt;
   Float_t         met_trkPhi;
   Int_t           nISR;
  
   Float_t         met_pt;
   Float_t         met_eta;
   Float_t         met_phi;
   Float_t         met_mass;
   Float_t         met_sumEt;
   Float_t         met_rawPt;
   Float_t         met_rawPhi;
   Float_t         met_rawSumEt;
   Float_t         met_genPt;
   Float_t         met_genPhi;
   Float_t         met_genEta;
   Float_t         met_jecUp_pt;
   Float_t         met_jecUp_eta;
   Float_t         met_jecUp_phi;
   Float_t         met_jecUp_mass;
   Float_t         met_jecUp_sumEt;
   Float_t         met_jecUp_rawPt;
   Float_t         met_jecUp_rawPhi;
   Float_t         met_jecUp_rawSumEt;
   Float_t         met_jecUp_genPt;
   Float_t         met_jecUp_genPhi;
   Float_t         met_jecUp_genEta;
   Float_t         met_jecDown_pt;
   Float_t         met_jecDown_eta;
   Float_t         met_jecDown_phi;
   Float_t         met_jecDown_mass;
   Float_t         met_jecDown_sumEt;
   Float_t         met_jecDown_rawPt;
   Float_t         met_jecDown_rawPhi;
   Float_t         met_jecDown_rawSumEt;
   Float_t         met_jecDown_genPt;
   Float_t         met_jecDown_genPhi;
   Float_t         met_jecDown_genEta;
 
   Int_t           nLepGood;
   Float_t         LepGood_mvaIdSpring15[20];   //[nLepGood]
   Float_t         LepGood_mvaTTH[20];   //[nLepGood]
   Float_t         LepGood_mvaSUSY[20];   //[nLepGood]
   Float_t         LepGood_jetPtRatiov1[20];   //[nLepGood]
   Float_t         LepGood_jetPtRelv1[20];   //[nLepGood]
   Float_t         LepGood_jetPtRatiov2[20];   //[nLepGood]
   Float_t         LepGood_jetPtRelv2[20];   //[nLepGood]
   Float_t         LepGood_jetBTagCSV[20];   //[nLepGood]
   Float_t         LepGood_jetBTagCMVA[20];   //[nLepGood]
   Float_t         LepGood_jetDR[20];   //[nLepGood]
   Float_t         LepGood_r9[20];   //[nLepGood]
   Float_t         LepGood_softMuonId2016[20];   //[nLepGood]
   Float_t         LepGood_mediumMuonID2016[20];   //[nLepGood]
   Int_t           LepGood_tightChargeFix[20];   //[nLepGood]
   Int_t           LepGood_muonTrackType[20];   //[nLepGood]
   Int_t           LepGood_chargeConsistency[20];   //[nLepGood]
   Float_t         LepGood_ptErrTk[20];   //[nLepGood]
   Float_t         LepGood_mvaIdSpring16HZZ[20];   //[nLepGood]
   Float_t         LepGood_mvaIdSpring16GP[20];   //[nLepGood]
   Int_t           LepGood_charge[20];   //[nLepGood]
   Int_t           LepGood_tightId[20];   //[nLepGood]
   Int_t           LepGood_hltId[20];   //[nLepGood]
   Int_t           LepGood_eleCutIdCSA14_25ns_v1[20];   //[nLepGood]
   Int_t           LepGood_eleCutIdCSA14_50ns_v1[20];   //[nLepGood]
   Int_t           LepGood_eleCutIdSpring15_25ns_v1[20];   //[nLepGood]
   Float_t         LepGood_dxy[20];   //[nLepGood]
   Float_t         LepGood_dz[20];   //[nLepGood]
   Float_t         LepGood_edxy[20];   //[nLepGood]
   Float_t         LepGood_edz[20];   //[nLepGood]
   Float_t         LepGood_ip3d[20];   //[nLepGood]
   Float_t         LepGood_sip3d[20];   //[nLepGood]
   Int_t           LepGood_convVeto[20];   //[nLepGood]
   Int_t           LepGood_lostHits[20];   //[nLepGood]
   Float_t         LepGood_relIso03[20];   //[nLepGood]
   Float_t         LepGood_relIso04[20];   //[nLepGood]
   Float_t         LepGood_miniRelIso[20];   //[nLepGood]
   Float_t         LepGood_relIsoAn04[20];   //[nLepGood]
   Int_t           LepGood_tightCharge[20];   //[nLepGood]
   Int_t           LepGood_mcMatchId[20];   //[nLepGood]
   Int_t           LepGood_mcMatchAny[20];   //[nLepGood]
   Int_t           LepGood_mcMatchTau[20];   //[nLepGood]
   Float_t         LepGood_mcPt[20];   //[nLepGood]
   Int_t           LepGood_mediumMuonId[20];   //[nLepGood]
   Int_t           LepGood_ICHEPsoftMuonId[20];   //[nLepGood]
   Int_t           LepGood_ICHEPmediumMuonId[20];   //[nLepGood]
   Int_t           LepGood_pdgId[20];   //[nLepGood]
   Float_t         LepGood_pt[20];   //[nLepGood]
   Float_t         LepGood_eta[20];   //[nLepGood]
   Float_t         LepGood_phi[20];   //[nLepGood]
   Float_t         LepGood_mass[20];   //[nLepGood]
   Int_t           LepGood_looseIdOnly[20];   //[nLepGood]
   Float_t         LepGood_chargedHadRelIso03[20];   //[nLepGood]
   Float_t         LepGood_chargedHadRelIso04[20];   //[nLepGood]
   Int_t           LepGood_softMuonId[20];   //[nLepGood]
   Int_t           LepGood_pfMuonId[20];   //[nLepGood]
   Int_t           LepGood_eleCutId2012[20];   //[nLepGood]
   Int_t           LepGood_trackerLayers[20];   //[nLepGood]
   Int_t           LepGood_pixelLayers[20];   //[nLepGood]
   Int_t           LepGood_trackerHits[20];   //[nLepGood]
   Int_t           LepGood_lostOuterHits[20];   //[nLepGood]
   Float_t         LepGood_innerTrackValidHitFraction[20];   //[nLepGood]
   Float_t         LepGood_innerTrackChi2[20];   //[nLepGood]
   Float_t         LepGood_nStations[20];   //[nLepGood]
   Float_t         LepGood_caloCompatibility[20];   //[nLepGood]
   Float_t         LepGood_globalTrackChi2[20];   //[nLepGood]
   Float_t         LepGood_trkKink[20];   //[nLepGood]
   Float_t         LepGood_segmentCompatibility[20];   //[nLepGood]
   Float_t         LepGood_chi2LocalPosition[20];   //[nLepGood]
   Float_t         LepGood_chi2LocalMomentum[20];   //[nLepGood]
   Float_t         LepGood_glbTrackProbability[20];   //[nLepGood]
   Int_t           LepGood_TMOneStationTightMuonId[20];   //[nLepGood]
   Int_t           LepGood_trackHighPurityMuon[20];   //[nLepGood]
   Int_t           LepGood_isGlobalMuon[20];   //[nLepGood]
   Int_t           LepGood_isTrackerMuon[20];   //[nLepGood]
   Float_t         LepGood_sigmaIEtaIEta[20];   //[nLepGood]
   Float_t         LepGood_dEtaScTrkIn[20];   //[nLepGood]
   Float_t         LepGood_dPhiScTrkIn[20];   //[nLepGood]
   Float_t         LepGood_hadronicOverEm[20];   //[nLepGood]
   Float_t         LepGood_eInvMinusPInv[20];   //[nLepGood]
   Float_t         LepGood_eInvMinusPInv_tkMom[20];   //[nLepGood]
   Float_t         LepGood_etaSc[20];   //[nLepGood]
   Int_t           LepGood_mcMatchPdgId[20];   //[nLepGood]
   Float_t         LepGood_miniRelIsoCharged[20];   //[nLepGood]
   Float_t         LepGood_miniRelIsoNeutral[20];   //[nLepGood]
   Float_t         LepGood_jetNDauChargedMVASel[20];   //[nLepGood]
   Float_t         LepGood_jetCorrFactor_L1[20];   //[nLepGood]
   Float_t         LepGood_jetCorrFactor_L1L2[20];   //[nLepGood]
   Float_t         LepGood_jetCorrFactor_L1L2L3[20];   //[nLepGood]
   Float_t         LepGood_jetCorrFactor_L1L2L3Res[20];   //[nLepGood]
   Float_t         LepGood_ecalPFClusterIso[20];   //[nLepGood]
   Float_t         LepGood_hcalPFClusterIso[20];   //[nLepGood]
   Float_t         LepGood_dr03TkSumPt[20];   //[nLepGood]
   Float_t         LepGood_trackIso[20];   //[nLepGood]
   Float_t         LepGood_idEmuTTH[20];   //[nLepGood]
   Float_t         LepGood_idEmuRA5[20];   //[nLepGood]
   Float_t         LepGood_idIsoEmuRA5[20];   //[nLepGood]
   Int_t           LepGood_mcPrompt[20];   //[nLepGood]
   Int_t           LepGood_mcPromptTau[20];   //[nLepGood]
   Int_t           LepGood_mcPromptGamma[20];   //[nLepGood]
   Int_t           LepGood_mcGamma[20];   //[nLepGood]
   Float_t         LepGood_RelIsoMIV03[20];   //[nLepGood]
   Float_t         LepGood_RelIsoMIVCharged03[20];   //[nLepGood]
   Float_t         LepGood_RelIsoMIVNeutral03[20];   //[nLepGood]
   Float_t         LepGood_RelIsoMIV04[20];   //[nLepGood]
   Float_t         LepGood_RelIsoMIVCharged04[20];   //[nLepGood]
   Float_t         LepGood_RelIsoMIVNeutral04[20];   //[nLepGood]
   Float_t         LepGood_jetPtRelHv2[20];   //[nLepGood]
   Float_t         LepGood_isoRelH04[20];   //[nLepGood]
   Float_t         LepGood_jetBasedRelIsoCharged[20];   //[nLepGood]
   Int_t           LepGood_hasSV[20];   //[nLepGood]
   Float_t         LepGood_svSip3d[20];   //[nLepGood]
   Float_t         LepGood_svRedPt[20];   //[nLepGood]
   Float_t         LepGood_svMass[20];   //[nLepGood]
   Float_t         LepGood_svNTracks[20];   //[nLepGood]
   Float_t         LepGood_energySc[20];   //[nLepGood]
   Float_t         LepGood_vx[20];   //[nLepGood]
   Float_t         LepGood_vy[20];   //[nLepGood]
   Float_t         LepGood_vz[20];   //[nLepGood]
   Float_t         LepGood_mcvx[20];   //[nLepGood]
   Float_t         LepGood_mcvy[20];   //[nLepGood]
   Float_t         LepGood_mcvz[20];   //[nLepGood]
   Float_t         LepGood_mvaSoftT2tt[20];   //[nLepGood]
   Float_t         LepGood_mvaSoftEWK[20];   //[nLepGood]
   Float_t         LepGood_minDCALep[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertChi2[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertDOF[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertSigPV[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertErrPV[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertXpos[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertYpos[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertZpos[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertXerrPos[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertYerrPos[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertZerrPos[20];   //[nLepGood]
   Float_t         LepGood_twoLepVertPairID[20];   //[nLepGood]
   Float_t         LepGood_jetLepAwareJEC_pt[20];   //[nLepGood]
   Float_t         LepGood_jetLepAwareJEC_eta[20];   //[nLepGood]
   Float_t         LepGood_jetLepAwareJEC_phi[20];   //[nLepGood]
   Float_t         LepGood_jetLepAwareJEC_energy[20];   //[nLepGood]
  
   Int_t           nJet;
   Int_t           Jet_mcMatchFlav[30];   //[nJet]
   Float_t         Jet_charge[30];   //[nJet]
   Float_t         Jet_ctagCsvL[30];   //[nJet]
   Float_t         Jet_ctagCsvB[30];   //[nJet]
   Float_t         Jet_area[30];   //[nJet]
   Float_t         Jet_qgl[30];   //[nJet]
   Float_t         Jet_ptd[30];   //[nJet]
   Float_t         Jet_axis2[30];   //[nJet]
   Int_t           Jet_mult[30];   //[nJet]
   Int_t           Jet_partonId[30];   //[nJet]
   Int_t           Jet_partonMotherId[30];   //[nJet]
   Float_t         Jet_nLeptons[30];   //[nJet]
   Int_t           Jet_id[30];   //[nJet]
   Int_t           Jet_puId[30];   //[nJet]
   Float_t         Jet_btagCSV[30];   //[nJet]
   Float_t         Jet_btagCMVA[30];   //[nJet]
   Float_t         Jet_rawPt[30];   //[nJet]
   Float_t         Jet_mcPt[30];   //[nJet]
   Int_t           Jet_mcFlavour[30];   //[nJet]
   Int_t           Jet_partonFlavour[30];   //[nJet]
   Int_t           Jet_hadronFlavour[30];   //[nJet]
   Int_t           Jet_mcMatchId[30];   //[nJet]
   Float_t         Jet_corr_JECUp[30];   //[nJet]
   Float_t         Jet_corr_JECDown[30];   //[nJet]
   Float_t         Jet_corr[30];   //[nJet]
   Float_t         Jet_corr_JERUp[30];   //[nJet]
   Float_t         Jet_corr_JERDown[30];   //[nJet]
   Float_t         Jet_corr_JER[30];   //[nJet]
   Float_t         Jet_pt[30];   //[nJet]
   Float_t         Jet_eta[30];   //[nJet]
   Float_t         Jet_phi[30];   //[nJet]
   Float_t         Jet_mass[30];   //[nJet]
   Float_t         Jet_CorrFactor_L1[30];   //[nJet]
   Float_t         Jet_CorrFactor_L1L2[30];   //[nJet]
   Float_t         Jet_CorrFactor_L1L2L3[30];   //[nJet]
   Float_t         Jet_CorrFactor_L1L2L3Res[30];   //[nJet]
   Float_t         Jet_chHEF[30];   //[nJet]
   Float_t         Jet_neHEF[30];   //[nJet]
   

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_isData;   //!
   TBranch        *b_xsec;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_nTrueInt;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_Flag_badMuonMoriond2017;   //!
   TBranch        *b_Flag_badCloneMuonMoriond2017;   //!
   TBranch        *b_badCloneMuonMoriond2017_maxPt;   //!
   TBranch        *b_badNotCloneMuonMoriond2017_maxPt;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_rhoCN;   //!
   TBranch        *b_nVert;   //!
   TBranch        *b_nJet25;   //!
   TBranch        *b_nJet25a;   //!
   TBranch        *b_nBJetLoose25;   //!
   TBranch        *b_nBJetMedium25;   //!
   TBranch        *b_nBJetTight25;   //!
   TBranch        *b_nJet30;   //!
   TBranch        *b_nJet30a;   //!
   TBranch        *b_nBJetLoose30;   //!
   TBranch        *b_nBJetMedium30;   //!
   TBranch        *b_nBJetTight30;   //!
   TBranch        *b_nJet40;   //!
   TBranch        *b_nJet40a;   //!
   TBranch        *b_nBJetLoose40;   //!
   TBranch        *b_nBJetMedium40;   //!
   TBranch        *b_nBJetTight40;   //!
   TBranch        *b_nLepGood20;   //!
   TBranch        *b_nLepGood15;   //!
   TBranch        *b_nLepGood10;   //!
   TBranch        *b_GenSusyMScan1;   //!
   TBranch        *b_GenSusyMScan2;   //!
   TBranch        *b_GenSusyMScan3;   //!
   TBranch        *b_GenSusyMScan4;   //!
   TBranch        *b_GenSusyMGluino;   //!
   TBranch        *b_GenSusyMGravitino;   //!
   TBranch        *b_GenSusyMStop;   //!
   TBranch        *b_GenSusyMSbottom;   //!
   TBranch        *b_GenSusyMStop2;   //!
   TBranch        *b_GenSusyMSbottom2;   //!
   TBranch        *b_GenSusyMSquark;   //!
   TBranch        *b_GenSusyMNeutralino;   //!
   TBranch        *b_GenSusyMNeutralino2;   //!
   TBranch        *b_GenSusyMNeutralino3;   //!
   TBranch        *b_GenSusyMNeutralino4;   //!
   TBranch        *b_GenSusyMChargino;   //!
   TBranch        *b_GenSusyMChargino2;   //!
   TBranch        *b_lheHT;   //!
   TBranch        *b_lheHTIncoming;   //!
   TBranch        *b_htJet25;   //!
   TBranch        *b_mhtJet25;   //!
   TBranch        *b_htJet40j;   //!
   TBranch        *b_htJet40ja;   //!
   TBranch        *b_htJet40;   //!
   TBranch        *b_htJet40a;   //!
   TBranch        *b_mhtJet40;   //!
   TBranch        *b_mhtJet40a;   //!
   TBranch        *b_nJet25NoTau;   //!
   TBranch        *b_nBJetLoose25NoTau;   //!
   TBranch        *b_nBJetMedium25NoTau;   //!
   TBranch        *b_nBJetCMVALoose25;   //!
   TBranch        *b_nBJetCMVAMedium25;   //!
   TBranch        *b_nBJetCMVATight25;   //!
   TBranch        *b_nSoftBLoose25;   //!
   TBranch        *b_nSoftBMedium25;   //!
   TBranch        *b_nSoftBTight25;   //!
   TBranch        *b_nJet30NoTau;   //!
   TBranch        *b_nBJetLoose30NoTau;   //!
   TBranch        *b_nBJetMedium30NoTau;   //!
   TBranch        *b_nJet40NoTau;   //!
   TBranch        *b_nBJetLoose40NoTau;   //!
   TBranch        *b_nBJetMedium40NoTau;   //!
   TBranch        *b_nBJetCMVALoose40;   //!
   TBranch        *b_nBJetCMVAMedium40;   //!
   TBranch        *b_nBJetCMVATight40;   //!
   TBranch        *b_mZ1;   //!
   TBranch        *b_mZ1SFSS;   //!
   TBranch        *b_minMllSFOS;   //!
   TBranch        *b_maxMllSFOS;   //!
   TBranch        *b_minMllAFOS;   //!
   TBranch        *b_maxMllAFOS;   //!
   TBranch        *b_minMllAFSS;   //!
   TBranch        *b_maxMllAFSS;   //!
   TBranch        *b_minMllAFAS;   //!
   TBranch        *b_maxMllAFAS;   //!
   TBranch        *b_m2l;   //!
   TBranch        *b_minDrllAFSS;   //!
   TBranch        *b_maxDrllAFSS;   //!
   TBranch        *b_minDrllAFOS;   //!
   TBranch        *b_maxDrllAFOS;   //!
   TBranch        *b_mZ2;   //!
   TBranch        *b_m3l;   //!
   TBranch        *b_m4l;   //!
   TBranch        *b_pt2l;   //!
   TBranch        *b_pt3l;   //!
   TBranch        *b_pt4l;   //!
   TBranch        *b_ht3l;   //!
   TBranch        *b_ht4l;   //!
   TBranch        *b_q3l;   //!
   TBranch        *b_q4l;   //!
   TBranch        *b_minMWjj;   //!
   TBranch        *b_minMWjjPt;   //!
   TBranch        *b_bestMWjj;   //!
   TBranch        *b_bestMWjjPt;   //!
   TBranch        *b_bestMTopHad;   //!
   TBranch        *b_bestMTopHadPt;   //!
   TBranch        *b_GenHiggsDecayMode;   //!
   TBranch        *b_pvXpos;   //!
   TBranch        *b_pvYpos;   //!
   TBranch        *b_pvZpos;   //!
   TBranch        *b_pvXerrPos;   //!
   TBranch        *b_pvYerrPos;   //!
   TBranch        *b_pvZerrPos;   //!
   TBranch        *b_Flag_badChargedHadronFilter;   //!
   TBranch        *b_Flag_badMuonFilter;   //!
   TBranch        *b_hbheFilterNew50ns;   //!
   TBranch        *b_hbheFilterNew25ns;   //!
   TBranch        *b_hbheFilterIso;   //!
   TBranch        *b_met_trkPt;   //!
   TBranch        *b_met_trkPhi;   //!
   TBranch        *b_nISR;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu19_eta2p1_LooseIsoPFTau20_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu19_eta2p1_LooseIsoPFTau20_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu19_eta2p1_LooseIsoPFTau20_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau30_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau30_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau30_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Ele36_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele36_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele36_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg_v_Prescale;   //!
   TBranch        *b_HLT_LepTau;   //!
   TBranch        *b_HLT_LepTau_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_v_Prescale;   //!
   TBranch        *b_HLT_DoubleElHT;   //!
   TBranch        *b_HLT_DoubleElHT_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_v_Prescale;   //!
   TBranch        *b_HLT_TripleEl;   //!
   TBranch        *b_HLT_TripleEl_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_v_Prescale;   //!
   TBranch        *b_HLT_MuEGHT;   //!
   TBranch        *b_HLT_MuEGHT_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu20_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu20_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu20_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu20_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu20_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu20_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu22_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu22_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu22_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu22_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu22_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu22_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu24_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu24_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_IsoMu24_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu24_v;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu24_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_IsoTkMu24_v_Prescale;   //!
   TBranch        *b_HLT_SingleMu;   //!
   TBranch        *b_HLT_SingleMu_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_v;   //!
   TBranch        *b_HLT_BIT_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_v_Prescale;   //!
   TBranch        *b_HLT_DoubleMuEl;   //!
   TBranch        *b_HLT_DoubleMuEl_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_12_10_5_v;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_12_10_5_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_12_10_5_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_5_3_3_v;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_5_3_3_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_5_3_3_v_Prescale;   //!
   TBranch        *b_HLT_TripleMu;   //!
   TBranch        *b_HLT_TripleMu_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_v_Prescale;   //!
   TBranch        *b_HLT_DoubleElMu;   //!
   TBranch        *b_HLT_DoubleElMu_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu30_TkMu11_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu30_TkMu11_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu30_TkMu11_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu27_TkMu8_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu27_TkMu8_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu27_TkMu8_v_Prescale;   //!
   TBranch        *b_HLT_DoubleMuNoIso;   //!
   TBranch        *b_HLT_DoubleMuNoIso_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_Mu8_SameSign_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_Mu8_SameSign_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_Mu8_SameSign_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_Mu8_SameSign_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_Mu8_SameSign_DZ_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_Mu8_SameSign_DZ_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu20_Mu10_SameSign_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu20_Mu10_SameSign_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu20_Mu10_SameSign_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu20_Mu10_SameSign_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu20_Mu10_SameSign_DZ_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu20_Mu10_SameSign_DZ_v_Prescale;   //!
   TBranch        *b_HLT_DoubleMuSS;   //!
   TBranch        *b_HLT_DoubleMuSS_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT300_PFMET110_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT300_PFMET110_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT300_PFMET110_v_Prescale;   //!
   TBranch        *b_HLT_MET;   //!
   TBranch        *b_HLT_MET_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele25_WPTight_Gsf_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele25_WPTight_Gsf_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele25_WPTight_Gsf_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Ele25_eta2p1_WPLoose_Gsf_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele25_eta2p1_WPLoose_Gsf_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele25_eta2p1_WPLoose_Gsf_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Ele25_eta2p1_WPTight_Gsf_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele25_eta2p1_WPTight_Gsf_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele25_eta2p1_WPTight_Gsf_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_WPTight_Gsf_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_WPTight_Gsf_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_WPTight_Gsf_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_eta2p1_WPLoose_Gsf_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_eta2p1_WPLoose_Gsf_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele27_eta2p1_WPLoose_Gsf_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Ele45_WPLoose_Gsf_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele45_WPLoose_Gsf_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele45_WPLoose_Gsf_v_Prescale;   //!
   TBranch        *b_HLT_SingleEl;   //!
   TBranch        *b_HLT_SingleEl_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx_v;   //!
   TBranch        *b_HLT_BIT_HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx_v_Prescale;   //!
   TBranch        *b_HLT_TripleMuA;   //!
   TBranch        *b_HLT_TripleMuA_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET90_PFMHT90_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET90_PFMHT90_IDTight_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET90_PFMHT90_IDTight_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET100_PFMHT100_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET100_PFMHT100_IDTight_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET100_PFMHT100_IDTight_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET110_PFMHT110_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET110_PFMHT110_IDTight_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET110_PFMHT110_IDTight_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET120_PFMHT120_IDTight_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET120_PFMHT120_IDTight_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFMET120_PFMHT120_IDTight_v_Prescale;   //!
   TBranch        *b_HLT_SOSHighMET;   //!
   TBranch        *b_HLT_SOSHighMET_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_5_3_3;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_5_3_3_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_5_3_3_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_5_3_3_DZ_Mass3p8_v1;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_5_3_3_DZ_Mass3p8_v1_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_TripleMu_5_3_3_DZ_Mass3p8_v1_Prescale;   //!
   TBranch        *b_HLT_SOSTripleMu;   //!
   TBranch        *b_HLT_SOSTripleMu_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleMu3_PFMET50_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleMu3_PFMET50_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleMu3_PFMET50_v_Prescale;   //!
   TBranch        *b_HLT_SOSDoubleMuLowMET;   //!
   TBranch        *b_HLT_SOSDoubleMuLowMET_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL_v_Prescale;   //!
   TBranch        *b_HLT_MuEG;   //!
   TBranch        *b_HLT_MuEG_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleMu8_Mass8_PFHT300_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleMu8_Mass8_PFHT300_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleMu8_Mass8_PFHT300_v_Prescale;   //!
   TBranch        *b_HLT_DoubleMuHT;   //!
   TBranch        *b_HLT_DoubleMuHT_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW_v;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW_v_Prescale;   //!
   TBranch        *b_HLT_DoubleEl;   //!
   TBranch        *b_HLT_DoubleEl_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v_Prescale;   //!
   TBranch        *b_HLT_DoubleMu;   //!
   TBranch        *b_HLT_DoubleMu_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT200_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT200_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT200_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT250_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT250_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT250_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT300_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT300_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT300_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT350_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT350_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT350_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT400_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT400_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT400_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT475_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT475_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT475_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT600_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT600_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT600_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT650_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT650_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT650_v_Prescale;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT800_v;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT800_v_isUnprescaled;   //!
   TBranch        *b_HLT_BIT_HLT_PFHT800_v_Prescale;   //!
   TBranch        *b_HLT_HT;   //!
   TBranch        *b_HLT_HT_isUnprescaled;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_trackingFailureFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_Flag_CSCTightHalo2016Filter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_met_pt;   //!
   TBranch        *b_met_eta;   //!
   TBranch        *b_met_phi;   //!
   TBranch        *b_met_mass;   //!
   TBranch        *b_met_sumEt;   //!
   TBranch        *b_met_rawPt;   //!
   TBranch        *b_met_rawPhi;   //!
   TBranch        *b_met_rawSumEt;   //!
   TBranch        *b_met_genPt;   //!
   TBranch        *b_met_genPhi;   //!
   TBranch        *b_met_genEta;   //!
   TBranch        *b_met_jecUp_pt;   //!
   TBranch        *b_met_jecUp_eta;   //!
   TBranch        *b_met_jecUp_phi;   //!
   TBranch        *b_met_jecUp_mass;   //!
   TBranch        *b_met_jecUp_sumEt;   //!
   TBranch        *b_met_jecUp_rawPt;   //!
   TBranch        *b_met_jecUp_rawPhi;   //!
   TBranch        *b_met_jecUp_rawSumEt;   //!
   TBranch        *b_met_jecUp_genPt;   //!
   TBranch        *b_met_jecUp_genPhi;   //!
   TBranch        *b_met_jecUp_genEta;   //!
   TBranch        *b_met_jecDown_pt;   //!
   TBranch        *b_met_jecDown_eta;   //!
   TBranch        *b_met_jecDown_phi;   //!
   TBranch        *b_met_jecDown_mass;   //!
   TBranch        *b_met_jecDown_sumEt;   //!
   TBranch        *b_met_jecDown_rawPt;   //!
   TBranch        *b_met_jecDown_rawPhi;   //!
   TBranch        *b_met_jecDown_rawSumEt;   //!
   TBranch        *b_met_jecDown_genPt;   //!
   TBranch        *b_met_jecDown_genPhi;   //!
   TBranch        *b_met_jecDown_genEta;   //!
   TBranch        *b_nSV;   //!
   TBranch        *b_SV_pt;   //!
   TBranch        *b_SV_eta;   //!
   TBranch        *b_SV_phi;   //!
   TBranch        *b_SV_mass;   //!
   TBranch        *b_SV_charge;   //!
   TBranch        *b_SV_ntracks;   //!
   TBranch        *b_SV_chi2;   //!
   TBranch        *b_SV_ndof;   //!
   TBranch        *b_SV_dxy;   //!
   TBranch        *b_SV_edxy;   //!
   TBranch        *b_SV_ip3d;   //!
   TBranch        *b_SV_eip3d;   //!
   TBranch        *b_SV_sip3d;   //!
   TBranch        *b_SV_cosTheta;   //!
   TBranch        *b_SV_mva;   //!
   TBranch        *b_SV_jetPt;   //!
   TBranch        *b_SV_jetEta;   //!
   TBranch        *b_SV_jetDR;   //!
   TBranch        *b_SV_jetBTagCSV;   //!
   TBranch        *b_SV_jetBTagCMVA;   //!
   TBranch        *b_SV_mcMatchNTracks;   //!
   TBranch        *b_SV_mcMatchNTracksHF;   //!
   TBranch        *b_SV_mcMatchFraction;   //!
   TBranch        *b_SV_mcFlavFirst;   //!
   TBranch        *b_SV_mcFlavHeaviest;   //!
   TBranch        *b_SV_maxDxyTracks;   //!
   TBranch        *b_SV_secDxyTracks;   //!
   TBranch        *b_SV_maxD3dTracks;   //!
   TBranch        *b_SV_secD3dTracks;   //!
   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_motherId;   //!
   TBranch        *b_GenPart_grandmotherId;   //!
   TBranch        *b_GenPart_sourceId;   //!
   TBranch        *b_GenPart_charge;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_isPromptHard;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_pt;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_motherIndex;   //!
   TBranch        *b_nDiscJet;   //!
   TBranch        *b_DiscJet_mcMatchFlav;   //!
   TBranch        *b_DiscJet_charge;   //!
   TBranch        *b_DiscJet_ctagCsvL;   //!
   TBranch        *b_DiscJet_ctagCsvB;   //!
   TBranch        *b_DiscJet_area;   //!
   TBranch        *b_DiscJet_qgl;   //!
   TBranch        *b_DiscJet_ptd;   //!
   TBranch        *b_DiscJet_axis2;   //!
   TBranch        *b_DiscJet_mult;   //!
   TBranch        *b_DiscJet_partonId;   //!
   TBranch        *b_DiscJet_partonMotherId;   //!
   TBranch        *b_DiscJet_nLeptons;   //!
   TBranch        *b_DiscJet_id;   //!
   TBranch        *b_DiscJet_puId;   //!
   TBranch        *b_DiscJet_btagCSV;   //!
   TBranch        *b_DiscJet_btagCMVA;   //!
   TBranch        *b_DiscJet_rawPt;   //!
   TBranch        *b_DiscJet_mcPt;   //!
   TBranch        *b_DiscJet_mcFlavour;   //!
   TBranch        *b_DiscJet_partonFlavour;   //!
   TBranch        *b_DiscJet_hadronFlavour;   //!
   TBranch        *b_DiscJet_mcMatchId;   //!
   TBranch        *b_DiscJet_corr_JECUp;   //!
   TBranch        *b_DiscJet_corr_JECDown;   //!
   TBranch        *b_DiscJet_corr;   //!
   TBranch        *b_DiscJet_corr_JERUp;   //!
   TBranch        *b_DiscJet_corr_JERDown;   //!
   TBranch        *b_DiscJet_corr_JER;   //!
   TBranch        *b_DiscJet_pt;   //!
   TBranch        *b_DiscJet_eta;   //!
   TBranch        *b_DiscJet_phi;   //!
   TBranch        *b_DiscJet_mass;   //!
   TBranch        *b_DiscJet_CorrFactor_L1;   //!
   TBranch        *b_DiscJet_CorrFactor_L1L2;   //!
   TBranch        *b_DiscJet_CorrFactor_L1L2L3;   //!
   TBranch        *b_DiscJet_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_DiscJet_chHEF;   //!
   TBranch        *b_DiscJet_neHEF;   //!
   TBranch        *b_nTauOther;   //!
   TBranch        *b_TauOther_charge;   //!
   TBranch        *b_TauOther_decayMode;   //!
   TBranch        *b_TauOther_idDecayMode;   //!
   TBranch        *b_TauOther_idDecayModeNewDMs;   //!
   TBranch        *b_TauOther_dxy;   //!
   TBranch        *b_TauOther_dz;   //!
   TBranch        *b_TauOther_idMVA;   //!
   TBranch        *b_TauOther_idMVANewDM;   //!
   TBranch        *b_TauOther_idCI3hit;   //!
   TBranch        *b_TauOther_idAntiMu;   //!
   TBranch        *b_TauOther_idAntiE;   //!
   TBranch        *b_TauOther_isoCI3hit;   //!
   TBranch        *b_TauOther_mcMatchId;   //!
   TBranch        *b_TauOther_pdgId;   //!
   TBranch        *b_TauOther_pt;   //!
   TBranch        *b_TauOther_eta;   //!
   TBranch        *b_TauOther_phi;   //!
   TBranch        *b_TauOther_mass;   //!
   TBranch        *b_TauOther_idMVAdR03;   //!
   TBranch        *b_nLepGood;   //!
   TBranch        *b_LepGood_mvaIdSpring15;   //!
   TBranch        *b_LepGood_mvaTTH;   //!
   TBranch        *b_LepGood_mvaSUSY;   //!
   TBranch        *b_LepGood_jetPtRatiov1;   //!
   TBranch        *b_LepGood_jetPtRelv1;   //!
   TBranch        *b_LepGood_jetPtRatiov2;   //!
   TBranch        *b_LepGood_jetPtRelv2;   //!
   TBranch        *b_LepGood_jetBTagCSV;   //!
   TBranch        *b_LepGood_jetBTagCMVA;   //!
   TBranch        *b_LepGood_jetDR;   //!
   TBranch        *b_LepGood_r9;   //!
   TBranch        *b_LepGood_softMuonId2016;   //!
   TBranch        *b_LepGood_mediumMuonID2016;   //!
   TBranch        *b_LepGood_tightChargeFix;   //!
   TBranch        *b_LepGood_muonTrackType;   //!
   TBranch        *b_LepGood_chargeConsistency;   //!
   TBranch        *b_LepGood_ptErrTk;   //!
   TBranch        *b_LepGood_mvaIdSpring16HZZ;   //!
   TBranch        *b_LepGood_mvaIdSpring16GP;   //!
   TBranch        *b_LepGood_charge;   //!
   TBranch        *b_LepGood_tightId;   //!
   TBranch        *b_LepGood_hltId;   //!
   TBranch        *b_LepGood_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_LepGood_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_LepGood_eleCutIdSpring15_25ns_v1;   //!
   TBranch        *b_LepGood_dxy;   //!
   TBranch        *b_LepGood_dz;   //!
   TBranch        *b_LepGood_edxy;   //!
   TBranch        *b_LepGood_edz;   //!
   TBranch        *b_LepGood_ip3d;   //!
   TBranch        *b_LepGood_sip3d;   //!
   TBranch        *b_LepGood_convVeto;   //!
   TBranch        *b_LepGood_lostHits;   //!
   TBranch        *b_LepGood_relIso03;   //!
   TBranch        *b_LepGood_relIso04;   //!
   TBranch        *b_LepGood_miniRelIso;   //!
   TBranch        *b_LepGood_relIsoAn04;   //!
   TBranch        *b_LepGood_tightCharge;   //!
   TBranch        *b_LepGood_mcMatchId;   //!
   TBranch        *b_LepGood_mcMatchAny;   //!
   TBranch        *b_LepGood_mcMatchTau;   //!
   TBranch        *b_LepGood_mcPt;   //!
   TBranch        *b_LepGood_mediumMuonId;   //!
   TBranch        *b_LepGood_ICHEPsoftMuonId;   //!
   TBranch        *b_LepGood_ICHEPmediumMuonId;   //!
   TBranch        *b_LepGood_pdgId;   //!
   TBranch        *b_LepGood_pt;   //!
   TBranch        *b_LepGood_eta;   //!
   TBranch        *b_LepGood_phi;   //!
   TBranch        *b_LepGood_mass;   //!
   TBranch        *b_LepGood_looseIdOnly;   //!
   TBranch        *b_LepGood_chargedHadRelIso03;   //!
   TBranch        *b_LepGood_chargedHadRelIso04;   //!
   TBranch        *b_LepGood_softMuonId;   //!
   TBranch        *b_LepGood_pfMuonId;   //!
   TBranch        *b_LepGood_eleCutId2012;   //!
   TBranch        *b_LepGood_trackerLayers;   //!
   TBranch        *b_LepGood_pixelLayers;   //!
   TBranch        *b_LepGood_trackerHits;   //!
   TBranch        *b_LepGood_lostOuterHits;   //!
   TBranch        *b_LepGood_innerTrackValidHitFraction;   //!
   TBranch        *b_LepGood_innerTrackChi2;   //!
   TBranch        *b_LepGood_nStations;   //!
   TBranch        *b_LepGood_caloCompatibility;   //!
   TBranch        *b_LepGood_globalTrackChi2;   //!
   TBranch        *b_LepGood_trkKink;   //!
   TBranch        *b_LepGood_segmentCompatibility;   //!
   TBranch        *b_LepGood_chi2LocalPosition;   //!
   TBranch        *b_LepGood_chi2LocalMomentum;   //!
   TBranch        *b_LepGood_glbTrackProbability;   //!
   TBranch        *b_LepGood_TMOneStationTightMuonId;   //!
   TBranch        *b_LepGood_trackHighPurityMuon;   //!
   TBranch        *b_LepGood_isGlobalMuon;   //!
   TBranch        *b_LepGood_isTrackerMuon;   //!
   TBranch        *b_LepGood_sigmaIEtaIEta;   //!
   TBranch        *b_LepGood_dEtaScTrkIn;   //!
   TBranch        *b_LepGood_dPhiScTrkIn;   //!
   TBranch        *b_LepGood_hadronicOverEm;   //!
   TBranch        *b_LepGood_eInvMinusPInv;   //!
   TBranch        *b_LepGood_eInvMinusPInv_tkMom;   //!
   TBranch        *b_LepGood_etaSc;   //!
   TBranch        *b_LepGood_mcMatchPdgId;   //!
   TBranch        *b_LepGood_miniRelIsoCharged;   //!
   TBranch        *b_LepGood_miniRelIsoNeutral;   //!
   TBranch        *b_LepGood_jetNDauChargedMVASel;   //!
   TBranch        *b_LepGood_jetCorrFactor_L1;   //!
   TBranch        *b_LepGood_jetCorrFactor_L1L2;   //!
   TBranch        *b_LepGood_jetCorrFactor_L1L2L3;   //!
   TBranch        *b_LepGood_jetCorrFactor_L1L2L3Res;   //!
   TBranch        *b_LepGood_ecalPFClusterIso;   //!
   TBranch        *b_LepGood_hcalPFClusterIso;   //!
   TBranch        *b_LepGood_dr03TkSumPt;   //!
   TBranch        *b_LepGood_trackIso;   //!
   TBranch        *b_LepGood_idEmuTTH;   //!
   TBranch        *b_LepGood_idEmuRA5;   //!
   TBranch        *b_LepGood_idIsoEmuRA5;   //!
   TBranch        *b_LepGood_mcPrompt;   //!
   TBranch        *b_LepGood_mcPromptTau;   //!
   TBranch        *b_LepGood_mcPromptGamma;   //!
   TBranch        *b_LepGood_mcGamma;   //!
   TBranch        *b_LepGood_RelIsoMIV03;   //!
   TBranch        *b_LepGood_RelIsoMIVCharged03;   //!
   TBranch        *b_LepGood_RelIsoMIVNeutral03;   //!
   TBranch        *b_LepGood_RelIsoMIV04;   //!
   TBranch        *b_LepGood_RelIsoMIVCharged04;   //!
   TBranch        *b_LepGood_RelIsoMIVNeutral04;   //!
   TBranch        *b_LepGood_jetPtRelHv2;   //!
   TBranch        *b_LepGood_isoRelH04;   //!
   TBranch        *b_LepGood_jetBasedRelIsoCharged;   //!
   TBranch        *b_LepGood_hasSV;   //!
   TBranch        *b_LepGood_svSip3d;   //!
   TBranch        *b_LepGood_svRedPt;   //!
   TBranch        *b_LepGood_svMass;   //!
   TBranch        *b_LepGood_svNTracks;   //!
   TBranch        *b_LepGood_energySc;   //!
   TBranch        *b_LepGood_vx;   //!
   TBranch        *b_LepGood_vy;   //!
   TBranch        *b_LepGood_vz;   //!
   TBranch        *b_LepGood_mcvx;   //!
   TBranch        *b_LepGood_mcvy;   //!
   TBranch        *b_LepGood_mcvz;   //!
   TBranch        *b_LepGood_mvaSoftT2tt;   //!
   TBranch        *b_LepGood_mvaSoftEWK;   //!
   TBranch        *b_LepGood_minDCALep;   //!
   TBranch        *b_LepGood_twoLepVertChi2;   //!
   TBranch        *b_LepGood_twoLepVertDOF;   //!
   TBranch        *b_LepGood_twoLepVertSigPV;   //!
   TBranch        *b_LepGood_twoLepVertErrPV;   //!
   TBranch        *b_LepGood_twoLepVertXpos;   //!
   TBranch        *b_LepGood_twoLepVertYpos;   //!
   TBranch        *b_LepGood_twoLepVertZpos;   //!
   TBranch        *b_LepGood_twoLepVertXerrPos;   //!
   TBranch        *b_LepGood_twoLepVertYerrPos;   //!
   TBranch        *b_LepGood_twoLepVertZerrPos;   //!
   TBranch        *b_LepGood_twoLepVertPairID;   //!
   TBranch        *b_LepGood_jetLepAwareJEC_pt;   //!
   TBranch        *b_LepGood_jetLepAwareJEC_eta;   //!
   TBranch        *b_LepGood_jetLepAwareJEC_phi;   //!
   TBranch        *b_LepGood_jetLepAwareJEC_energy;   //!
   TBranch        *b_nJet_jecUp;   //!
   TBranch        *b_Jet_jecUp_mcMatchFlav;   //!
   TBranch        *b_Jet_jecUp_charge;   //!
   TBranch        *b_Jet_jecUp_ctagCsvL;   //!
   TBranch        *b_Jet_jecUp_ctagCsvB;   //!
   TBranch        *b_Jet_jecUp_area;   //!
   TBranch        *b_Jet_jecUp_qgl;   //!
   TBranch        *b_Jet_jecUp_ptd;   //!
   TBranch        *b_Jet_jecUp_axis2;   //!
   TBranch        *b_Jet_jecUp_mult;   //!
   TBranch        *b_Jet_jecUp_partonId;   //!
   TBranch        *b_Jet_jecUp_partonMotherId;   //!
   TBranch        *b_Jet_jecUp_nLeptons;   //!
   TBranch        *b_Jet_jecUp_id;   //!
   TBranch        *b_Jet_jecUp_puId;   //!
   TBranch        *b_Jet_jecUp_btagCSV;   //!
   TBranch        *b_Jet_jecUp_btagCMVA;   //!
   TBranch        *b_Jet_jecUp_rawPt;   //!
   TBranch        *b_Jet_jecUp_mcPt;   //!
   TBranch        *b_Jet_jecUp_mcFlavour;   //!
   TBranch        *b_Jet_jecUp_partonFlavour;   //!
   TBranch        *b_Jet_jecUp_hadronFlavour;   //!
   TBranch        *b_Jet_jecUp_mcMatchId;   //!
   TBranch        *b_Jet_jecUp_corr_JECUp;   //!
   TBranch        *b_Jet_jecUp_corr_JECDown;   //!
   TBranch        *b_Jet_jecUp_corr;   //!
   TBranch        *b_Jet_jecUp_corr_JERUp;   //!
   TBranch        *b_Jet_jecUp_corr_JERDown;   //!
   TBranch        *b_Jet_jecUp_corr_JER;   //!
   TBranch        *b_Jet_jecUp_pt;   //!
   TBranch        *b_Jet_jecUp_eta;   //!
   TBranch        *b_Jet_jecUp_phi;   //!
   TBranch        *b_Jet_jecUp_mass;   //!
   TBranch        *b_Jet_jecUp_CorrFactor_L1;   //!
   TBranch        *b_Jet_jecUp_CorrFactor_L1L2;   //!
   TBranch        *b_Jet_jecUp_CorrFactor_L1L2L3;   //!
   TBranch        *b_Jet_jecUp_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_Jet_jecUp_chHEF;   //!
   TBranch        *b_Jet_jecUp_neHEF;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_Jet_mcMatchFlav;   //!
   TBranch        *b_Jet_charge;   //!
   TBranch        *b_Jet_ctagCsvL;   //!
   TBranch        *b_Jet_ctagCsvB;   //!
   TBranch        *b_Jet_area;   //!
   TBranch        *b_Jet_qgl;   //!
   TBranch        *b_Jet_ptd;   //!
   TBranch        *b_Jet_axis2;   //!
   TBranch        *b_Jet_mult;   //!
   TBranch        *b_Jet_partonId;   //!
   TBranch        *b_Jet_partonMotherId;   //!
   TBranch        *b_Jet_nLeptons;   //!
   TBranch        *b_Jet_id;   //!
   TBranch        *b_Jet_puId;   //!
   TBranch        *b_Jet_btagCSV;   //!
   TBranch        *b_Jet_btagCMVA;   //!
   TBranch        *b_Jet_rawPt;   //!
   TBranch        *b_Jet_mcPt;   //!
   TBranch        *b_Jet_mcFlavour;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_Jet_mcMatchId;   //!
   TBranch        *b_Jet_corr_JECUp;   //!
   TBranch        *b_Jet_corr_JECDown;   //!
   TBranch        *b_Jet_corr;   //!
   TBranch        *b_Jet_corr_JERUp;   //!
   TBranch        *b_Jet_corr_JERDown;   //!
   TBranch        *b_Jet_corr_JER;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_CorrFactor_L1;   //!
   TBranch        *b_Jet_CorrFactor_L1L2;   //!
   TBranch        *b_Jet_CorrFactor_L1L2L3;   //!
   TBranch        *b_Jet_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_Jet_chHEF;   //!
   TBranch        *b_Jet_neHEF;   //!
   TBranch        *b_ngenLep;   //!
   TBranch        *b_genLep_motherId;   //!
   TBranch        *b_genLep_grandmotherId;   //!
   TBranch        *b_genLep_sourceId;   //!
   TBranch        *b_genLep_charge;   //!
   TBranch        *b_genLep_status;   //!
   TBranch        *b_genLep_isPromptHard;   //!
   TBranch        *b_genLep_pdgId;   //!
   TBranch        *b_genLep_pt;   //!
   TBranch        *b_genLep_eta;   //!
   TBranch        *b_genLep_phi;   //!
   TBranch        *b_genLep_mass;   //!
   TBranch        *b_genLep_motherIndex;   //!
   TBranch        *b_nTauGood;   //!
   TBranch        *b_TauGood_charge;   //!
   TBranch        *b_TauGood_decayMode;   //!
   TBranch        *b_TauGood_idDecayMode;   //!
   TBranch        *b_TauGood_idDecayModeNewDMs;   //!
   TBranch        *b_TauGood_dxy;   //!
   TBranch        *b_TauGood_dz;   //!
   TBranch        *b_TauGood_idMVA;   //!
   TBranch        *b_TauGood_idMVANewDM;   //!
   TBranch        *b_TauGood_idCI3hit;   //!
   TBranch        *b_TauGood_idAntiMu;   //!
   TBranch        *b_TauGood_idAntiE;   //!
   TBranch        *b_TauGood_isoCI3hit;   //!
   TBranch        *b_TauGood_mcMatchId;   //!
   TBranch        *b_TauGood_pdgId;   //!
   TBranch        *b_TauGood_pt;   //!
   TBranch        *b_TauGood_eta;   //!
   TBranch        *b_TauGood_phi;   //!
   TBranch        *b_TauGood_mass;   //!
   TBranch        *b_TauGood_idMVAdR03;   //!
   TBranch        *b_nDiscJet_jecDown;   //!
   TBranch        *b_DiscJet_jecDown_mcMatchFlav;   //!
   TBranch        *b_DiscJet_jecDown_charge;   //!
   TBranch        *b_DiscJet_jecDown_ctagCsvL;   //!
   TBranch        *b_DiscJet_jecDown_ctagCsvB;   //!
   TBranch        *b_DiscJet_jecDown_area;   //!
   TBranch        *b_DiscJet_jecDown_qgl;   //!
   TBranch        *b_DiscJet_jecDown_ptd;   //!
   TBranch        *b_DiscJet_jecDown_axis2;   //!
   TBranch        *b_DiscJet_jecDown_mult;   //!
   TBranch        *b_DiscJet_jecDown_partonId;   //!
   TBranch        *b_DiscJet_jecDown_partonMotherId;   //!
   TBranch        *b_DiscJet_jecDown_nLeptons;   //!
   TBranch        *b_DiscJet_jecDown_id;   //!
   TBranch        *b_DiscJet_jecDown_puId;   //!
   TBranch        *b_DiscJet_jecDown_btagCSV;   //!
   TBranch        *b_DiscJet_jecDown_btagCMVA;   //!
   TBranch        *b_DiscJet_jecDown_rawPt;   //!
   TBranch        *b_DiscJet_jecDown_mcPt;   //!
   TBranch        *b_DiscJet_jecDown_mcFlavour;   //!
   TBranch        *b_DiscJet_jecDown_partonFlavour;   //!
   TBranch        *b_DiscJet_jecDown_hadronFlavour;   //!
   TBranch        *b_DiscJet_jecDown_mcMatchId;   //!
   TBranch        *b_DiscJet_jecDown_corr_JECUp;   //!
   TBranch        *b_DiscJet_jecDown_corr_JECDown;   //!
   TBranch        *b_DiscJet_jecDown_corr;   //!
   TBranch        *b_DiscJet_jecDown_corr_JERUp;   //!
   TBranch        *b_DiscJet_jecDown_corr_JERDown;   //!
   TBranch        *b_DiscJet_jecDown_corr_JER;   //!
   TBranch        *b_DiscJet_jecDown_pt;   //!
   TBranch        *b_DiscJet_jecDown_eta;   //!
   TBranch        *b_DiscJet_jecDown_phi;   //!
   TBranch        *b_DiscJet_jecDown_mass;   //!
   TBranch        *b_DiscJet_jecDown_CorrFactor_L1;   //!
   TBranch        *b_DiscJet_jecDown_CorrFactor_L1L2;   //!
   TBranch        *b_DiscJet_jecDown_CorrFactor_L1L2L3;   //!
   TBranch        *b_DiscJet_jecDown_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_DiscJet_jecDown_chHEF;   //!
   TBranch        *b_DiscJet_jecDown_neHEF;   //!
   TBranch        *b_ngenTau;   //!
   TBranch        *b_genTau_motherId;   //!
   TBranch        *b_genTau_grandmotherId;   //!
   TBranch        *b_genTau_sourceId;   //!
   TBranch        *b_genTau_charge;   //!
   TBranch        *b_genTau_status;   //!
   TBranch        *b_genTau_isPromptHard;   //!
   TBranch        *b_genTau_pdgId;   //!
   TBranch        *b_genTau_pt;   //!
   TBranch        *b_genTau_eta;   //!
   TBranch        *b_genTau_phi;   //!
   TBranch        *b_genTau_mass;   //!
   TBranch        *b_genTau_motherIndex;   //!
   TBranch        *b_nJet_jecDown;   //!
   TBranch        *b_Jet_jecDown_mcMatchFlav;   //!
   TBranch        *b_Jet_jecDown_charge;   //!
   TBranch        *b_Jet_jecDown_ctagCsvL;   //!
   TBranch        *b_Jet_jecDown_ctagCsvB;   //!
   TBranch        *b_Jet_jecDown_area;   //!
   TBranch        *b_Jet_jecDown_qgl;   //!
   TBranch        *b_Jet_jecDown_ptd;   //!
   TBranch        *b_Jet_jecDown_axis2;   //!
   TBranch        *b_Jet_jecDown_mult;   //!
   TBranch        *b_Jet_jecDown_partonId;   //!
   TBranch        *b_Jet_jecDown_partonMotherId;   //!
   TBranch        *b_Jet_jecDown_nLeptons;   //!
   TBranch        *b_Jet_jecDown_id;   //!
   TBranch        *b_Jet_jecDown_puId;   //!
   TBranch        *b_Jet_jecDown_btagCSV;   //!
   TBranch        *b_Jet_jecDown_btagCMVA;   //!
   TBranch        *b_Jet_jecDown_rawPt;   //!
   TBranch        *b_Jet_jecDown_mcPt;   //!
   TBranch        *b_Jet_jecDown_mcFlavour;   //!
   TBranch        *b_Jet_jecDown_partonFlavour;   //!
   TBranch        *b_Jet_jecDown_hadronFlavour;   //!
   TBranch        *b_Jet_jecDown_mcMatchId;   //!
   TBranch        *b_Jet_jecDown_corr_JECUp;   //!
   TBranch        *b_Jet_jecDown_corr_JECDown;   //!
   TBranch        *b_Jet_jecDown_corr;   //!
   TBranch        *b_Jet_jecDown_corr_JERUp;   //!
   TBranch        *b_Jet_jecDown_corr_JERDown;   //!
   TBranch        *b_Jet_jecDown_corr_JER;   //!
   TBranch        *b_Jet_jecDown_pt;   //!
   TBranch        *b_Jet_jecDown_eta;   //!
   TBranch        *b_Jet_jecDown_phi;   //!
   TBranch        *b_Jet_jecDown_mass;   //!
   TBranch        *b_Jet_jecDown_CorrFactor_L1;   //!
   TBranch        *b_Jet_jecDown_CorrFactor_L1L2;   //!
   TBranch        *b_Jet_jecDown_CorrFactor_L1L2L3;   //!
   TBranch        *b_Jet_jecDown_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_Jet_jecDown_chHEF;   //!
   TBranch        *b_Jet_jecDown_neHEF;   //!
   TBranch        *b_nGenTop;   //!
   TBranch        *b_GenTop_pdgId;   //!
   TBranch        *b_GenTop_pt;   //!
   TBranch        *b_GenTop_eta;   //!
   TBranch        *b_GenTop_phi;   //!
   TBranch        *b_GenTop_mass;   //!
   TBranch        *b_GenTop_charge;   //!
   TBranch        *b_GenTop_status;   //!
   TBranch        *b_GenTop_isPromptHard;   //!
   TBranch        *b_nLepOther;   //!
   TBranch        *b_LepOther_charge;   //!
   TBranch        *b_LepOther_tightId;   //!
   TBranch        *b_LepOther_hltId;   //!
   TBranch        *b_LepOther_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_LepOther_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_LepOther_eleCutIdSpring15_25ns_v1;   //!
   TBranch        *b_LepOther_dxy;   //!
   TBranch        *b_LepOther_dz;   //!
   TBranch        *b_LepOther_edxy;   //!
   TBranch        *b_LepOther_edz;   //!
   TBranch        *b_LepOther_ip3d;   //!
   TBranch        *b_LepOther_sip3d;   //!
   TBranch        *b_LepOther_convVeto;   //!
   TBranch        *b_LepOther_lostHits;   //!
   TBranch        *b_LepOther_relIso03;   //!
   TBranch        *b_LepOther_relIso04;   //!
   TBranch        *b_LepOther_miniRelIso;   //!
   TBranch        *b_LepOther_relIsoAn04;   //!
   TBranch        *b_LepOther_tightCharge;   //!
   TBranch        *b_LepOther_mcMatchId;   //!
   TBranch        *b_LepOther_mcMatchAny;   //!
   TBranch        *b_LepOther_mcMatchTau;   //!
   TBranch        *b_LepOther_mcPt;   //!
   TBranch        *b_LepOther_mediumMuonId;   //!
   TBranch        *b_LepOther_ICHEPsoftMuonId;   //!
   TBranch        *b_LepOther_ICHEPmediumMuonId;   //!
   TBranch        *b_LepOther_pdgId;   //!
   TBranch        *b_LepOther_pt;   //!
   TBranch        *b_LepOther_eta;   //!
   TBranch        *b_LepOther_phi;   //!
   TBranch        *b_LepOther_mass;   //!
   TBranch        *b_LepOther_mvaIdSpring15;   //!
   TBranch        *b_LepOther_mvaTTH;   //!
   TBranch        *b_LepOther_mvaSUSY;   //!
   TBranch        *b_LepOther_jetPtRatiov1;   //!
   TBranch        *b_LepOther_jetPtRelv1;   //!
   TBranch        *b_LepOther_jetPtRatiov2;   //!
   TBranch        *b_LepOther_jetPtRelv2;   //!
   TBranch        *b_LepOther_jetBTagCSV;   //!
   TBranch        *b_LepOther_jetBTagCMVA;   //!
   TBranch        *b_LepOther_jetDR;   //!
   TBranch        *b_LepOther_r9;   //!
   TBranch        *b_LepOther_softMuonId2016;   //!
   TBranch        *b_LepOther_mediumMuonID2016;   //!
   TBranch        *b_LepOther_tightChargeFix;   //!
   TBranch        *b_LepOther_muonTrackType;   //!
   TBranch        *b_LepOther_chargeConsistency;   //!
   TBranch        *b_LepOther_ptErrTk;   //!
   TBranch        *b_LepOther_mvaIdSpring16HZZ;   //!
   TBranch        *b_LepOther_mvaIdSpring16GP;   //!
   TBranch        *b_nDiscJet_jecUp;   //!
   TBranch        *b_DiscJet_jecUp_mcMatchFlav;   //!
   TBranch        *b_DiscJet_jecUp_charge;   //!
   TBranch        *b_DiscJet_jecUp_ctagCsvL;   //!
   TBranch        *b_DiscJet_jecUp_ctagCsvB;   //!
   TBranch        *b_DiscJet_jecUp_area;   //!
   TBranch        *b_DiscJet_jecUp_qgl;   //!
   TBranch        *b_DiscJet_jecUp_ptd;   //!
   TBranch        *b_DiscJet_jecUp_axis2;   //!
   TBranch        *b_DiscJet_jecUp_mult;   //!
   TBranch        *b_DiscJet_jecUp_partonId;   //!
   TBranch        *b_DiscJet_jecUp_partonMotherId;   //!
   TBranch        *b_DiscJet_jecUp_nLeptons;   //!
   TBranch        *b_DiscJet_jecUp_id;   //!
   TBranch        *b_DiscJet_jecUp_puId;   //!
   TBranch        *b_DiscJet_jecUp_btagCSV;   //!
   TBranch        *b_DiscJet_jecUp_btagCMVA;   //!
   TBranch        *b_DiscJet_jecUp_rawPt;   //!
   TBranch        *b_DiscJet_jecUp_mcPt;   //!
   TBranch        *b_DiscJet_jecUp_mcFlavour;   //!
   TBranch        *b_DiscJet_jecUp_partonFlavour;   //!
   TBranch        *b_DiscJet_jecUp_hadronFlavour;   //!
   TBranch        *b_DiscJet_jecUp_mcMatchId;   //!
   TBranch        *b_DiscJet_jecUp_corr_JECUp;   //!
   TBranch        *b_DiscJet_jecUp_corr_JECDown;   //!
   TBranch        *b_DiscJet_jecUp_corr;   //!
   TBranch        *b_DiscJet_jecUp_corr_JERUp;   //!
   TBranch        *b_DiscJet_jecUp_corr_JERDown;   //!
   TBranch        *b_DiscJet_jecUp_corr_JER;   //!
   TBranch        *b_DiscJet_jecUp_pt;   //!
   TBranch        *b_DiscJet_jecUp_eta;   //!
   TBranch        *b_DiscJet_jecUp_phi;   //!
   TBranch        *b_DiscJet_jecUp_mass;   //!
   TBranch        *b_DiscJet_jecUp_CorrFactor_L1;   //!
   TBranch        *b_DiscJet_jecUp_CorrFactor_L1L2;   //!
   TBranch        *b_DiscJet_jecUp_CorrFactor_L1L2L3;   //!
   TBranch        *b_DiscJet_jecUp_CorrFactor_L1L2L3Res;   //!
   TBranch        *b_DiscJet_jecUp_chHEF;   //!
   TBranch        *b_DiscJet_jecUp_neHEF;   //!
   TBranch        *b_ngenLepFromTau;   //!
   TBranch        *b_genLepFromTau_motherId;   //!
   TBranch        *b_genLepFromTau_grandmotherId;   //!
   TBranch        *b_genLepFromTau_sourceId;   //!
   TBranch        *b_genLepFromTau_charge;   //!
   TBranch        *b_genLepFromTau_status;   //!
   TBranch        *b_genLepFromTau_isPromptHard;   //!
   TBranch        *b_genLepFromTau_pdgId;   //!
   TBranch        *b_genLepFromTau_pt;   //!
   TBranch        *b_genLepFromTau_eta;   //!
   TBranch        *b_genLepFromTau_phi;   //!
   TBranch        *b_genLepFromTau_mass;   //!
   TBranch        *b_genLepFromTau_motherIndex;   //!
   TBranch        *b_nJetFwd;   //!
   TBranch        *b_JetFwd_area;   //!
   TBranch        *b_JetFwd_qgl;   //!
   TBranch        *b_JetFwd_ptd;   //!
   TBranch        *b_JetFwd_axis2;   //!
   TBranch        *b_JetFwd_mult;   //!
   TBranch        *b_JetFwd_partonId;   //!
   TBranch        *b_JetFwd_partonMotherId;   //!
   TBranch        *b_JetFwd_nLeptons;   //!
   TBranch        *b_JetFwd_id;   //!
   TBranch        *b_JetFwd_puId;   //!
   TBranch        *b_JetFwd_btagCSV;   //!
   TBranch        *b_JetFwd_btagCMVA;   //!
   TBranch        *b_JetFwd_rawPt;   //!
   TBranch        *b_JetFwd_mcPt;   //!
   TBranch        *b_JetFwd_mcFlavour;   //!
   TBranch        *b_JetFwd_partonFlavour;   //!
   TBranch        *b_JetFwd_hadronFlavour;   //!
   TBranch        *b_JetFwd_mcMatchId;   //!
   TBranch        *b_JetFwd_corr_JECUp;   //!
   TBranch        *b_JetFwd_corr_JECDown;   //!
   TBranch        *b_JetFwd_corr;   //!
   TBranch        *b_JetFwd_corr_JERUp;   //!
   TBranch        *b_JetFwd_corr_JERDown;   //!
   TBranch        *b_JetFwd_corr_JER;   //!
   TBranch        *b_JetFwd_pt;   //!
   TBranch        *b_JetFwd_eta;   //!
   TBranch        *b_JetFwd_phi;   //!
   TBranch        *b_JetFwd_mass;   //!
   TBranch        *b_JetFwd_mcMatchFlav;   //!
   TBranch        *b_JetFwd_charge;   //!
   TBranch        *b_JetFwd_ctagCsvL;   //!
   TBranch        *b_JetFwd_ctagCsvB;   //!

   SOSInputTree(TTree *tree=0);
   virtual ~SOSInputTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

inline SOSInputTree::SOSInputTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("WZTo1L1Nu2Q_treeProducerSusyMultilepton_tree.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("WZTo1L1Nu2Q_treeProducerSusyMultilepton_tree.root");
      }
      f->GetObject("tree",tree);

   }
   Init(tree);
}

inline SOSInputTree::~SOSInputTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

inline Int_t SOSInputTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
inline Long64_t SOSInputTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

inline void SOSInputTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchStatus("*", 0);

   fChain->SetBranchStatus("xsec", 1);
   fChain->SetBranchStatus("puWeight", 1);
   fChain->SetBranchStatus("genWeight", 1);
   fChain->SetBranchStatus("nJet25", 1);
   fChain->SetBranchStatus("htJet25", 1);
   fChain->SetBranchStatus("met_pt", 1);
   fChain->SetBranchStatus("met_phi", 1);
   
   fChain->SetBranchAddress("xsec", &xsec, &b_xsec);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("nJet25", &nJet25, &b_nJet25);
   fChain->SetBranchAddress("htJet25", &htJet25, &b_htJet25);
   fChain->SetBranchAddress("met_pt", &met_pt, &b_met_pt);
   fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);

   fChain->SetBranchStatus("nLepGood", 1);
   fChain->SetBranchStatus("LepGood_*", 1);
   fChain->SetBranchAddress("nLepGood", &nLepGood, &b_nLepGood);
   fChain->SetBranchAddress("LepGood_mvaIdSpring15", LepGood_mvaIdSpring15, &b_LepGood_mvaIdSpring15);
   fChain->SetBranchAddress("LepGood_mvaTTH", LepGood_mvaTTH, &b_LepGood_mvaTTH);
   fChain->SetBranchAddress("LepGood_mvaSUSY", LepGood_mvaSUSY, &b_LepGood_mvaSUSY);
   fChain->SetBranchAddress("LepGood_jetPtRatiov1", LepGood_jetPtRatiov1, &b_LepGood_jetPtRatiov1);
   fChain->SetBranchAddress("LepGood_jetPtRelv1", LepGood_jetPtRelv1, &b_LepGood_jetPtRelv1);
   fChain->SetBranchAddress("LepGood_jetPtRatiov2", LepGood_jetPtRatiov2, &b_LepGood_jetPtRatiov2);
   fChain->SetBranchAddress("LepGood_jetPtRelv2", LepGood_jetPtRelv2, &b_LepGood_jetPtRelv2);
   fChain->SetBranchAddress("LepGood_jetBTagCSV", LepGood_jetBTagCSV, &b_LepGood_jetBTagCSV);
   fChain->SetBranchAddress("LepGood_jetBTagCMVA", LepGood_jetBTagCMVA, &b_LepGood_jetBTagCMVA);
   fChain->SetBranchAddress("LepGood_jetDR", LepGood_jetDR, &b_LepGood_jetDR);
   fChain->SetBranchAddress("LepGood_r9", LepGood_r9, &b_LepGood_r9);
   fChain->SetBranchAddress("LepGood_softMuonId2016", LepGood_softMuonId2016, &b_LepGood_softMuonId2016);
   fChain->SetBranchAddress("LepGood_mediumMuonID2016", LepGood_mediumMuonID2016, &b_LepGood_mediumMuonID2016);
   fChain->SetBranchAddress("LepGood_tightChargeFix", LepGood_tightChargeFix, &b_LepGood_tightChargeFix);
   fChain->SetBranchAddress("LepGood_muonTrackType", LepGood_muonTrackType, &b_LepGood_muonTrackType);
   fChain->SetBranchAddress("LepGood_chargeConsistency", LepGood_chargeConsistency, &b_LepGood_chargeConsistency);
   fChain->SetBranchAddress("LepGood_ptErrTk", LepGood_ptErrTk, &b_LepGood_ptErrTk);
   fChain->SetBranchAddress("LepGood_mvaIdSpring16HZZ", LepGood_mvaIdSpring16HZZ, &b_LepGood_mvaIdSpring16HZZ);
   fChain->SetBranchAddress("LepGood_mvaIdSpring16GP", LepGood_mvaIdSpring16GP, &b_LepGood_mvaIdSpring16GP);
   fChain->SetBranchAddress("LepGood_charge", LepGood_charge, &b_LepGood_charge);
   fChain->SetBranchAddress("LepGood_tightId", LepGood_tightId, &b_LepGood_tightId);
   fChain->SetBranchAddress("LepGood_hltId", LepGood_hltId, &b_LepGood_hltId);
   fChain->SetBranchAddress("LepGood_eleCutIdCSA14_25ns_v1", LepGood_eleCutIdCSA14_25ns_v1, &b_LepGood_eleCutIdCSA14_25ns_v1);
   fChain->SetBranchAddress("LepGood_eleCutIdCSA14_50ns_v1", LepGood_eleCutIdCSA14_50ns_v1, &b_LepGood_eleCutIdCSA14_50ns_v1);
   fChain->SetBranchAddress("LepGood_eleCutIdSpring15_25ns_v1", LepGood_eleCutIdSpring15_25ns_v1, &b_LepGood_eleCutIdSpring15_25ns_v1);
   fChain->SetBranchAddress("LepGood_dxy", LepGood_dxy, &b_LepGood_dxy);
   fChain->SetBranchAddress("LepGood_dz", LepGood_dz, &b_LepGood_dz);
   fChain->SetBranchAddress("LepGood_edxy", LepGood_edxy, &b_LepGood_edxy);
   fChain->SetBranchAddress("LepGood_edz", LepGood_edz, &b_LepGood_edz);
   fChain->SetBranchAddress("LepGood_ip3d", LepGood_ip3d, &b_LepGood_ip3d);
   fChain->SetBranchAddress("LepGood_sip3d", LepGood_sip3d, &b_LepGood_sip3d);
   fChain->SetBranchAddress("LepGood_convVeto", LepGood_convVeto, &b_LepGood_convVeto);
   fChain->SetBranchAddress("LepGood_lostHits", LepGood_lostHits, &b_LepGood_lostHits);
   fChain->SetBranchAddress("LepGood_relIso03", LepGood_relIso03, &b_LepGood_relIso03);
   fChain->SetBranchAddress("LepGood_relIso04", LepGood_relIso04, &b_LepGood_relIso04);
   fChain->SetBranchAddress("LepGood_miniRelIso", LepGood_miniRelIso, &b_LepGood_miniRelIso);
   fChain->SetBranchAddress("LepGood_relIsoAn04", LepGood_relIsoAn04, &b_LepGood_relIsoAn04);
   fChain->SetBranchAddress("LepGood_tightCharge", LepGood_tightCharge, &b_LepGood_tightCharge);
   fChain->SetBranchAddress("LepGood_mcMatchId", LepGood_mcMatchId, &b_LepGood_mcMatchId);
   fChain->SetBranchAddress("LepGood_mcMatchAny", LepGood_mcMatchAny, &b_LepGood_mcMatchAny);
   fChain->SetBranchAddress("LepGood_mcMatchTau", LepGood_mcMatchTau, &b_LepGood_mcMatchTau);
   fChain->SetBranchAddress("LepGood_mcPt", LepGood_mcPt, &b_LepGood_mcPt);
   fChain->SetBranchAddress("LepGood_mediumMuonId", LepGood_mediumMuonId, &b_LepGood_mediumMuonId);
   fChain->SetBranchAddress("LepGood_ICHEPsoftMuonId", LepGood_ICHEPsoftMuonId, &b_LepGood_ICHEPsoftMuonId);
   fChain->SetBranchAddress("LepGood_ICHEPmediumMuonId", LepGood_ICHEPmediumMuonId, &b_LepGood_ICHEPmediumMuonId);
   fChain->SetBranchAddress("LepGood_pdgId", LepGood_pdgId, &b_LepGood_pdgId);
   fChain->SetBranchAddress("LepGood_pt", LepGood_pt, &b_LepGood_pt);
   fChain->SetBranchAddress("LepGood_eta", LepGood_eta, &b_LepGood_eta);
   fChain->SetBranchAddress("LepGood_phi", LepGood_phi, &b_LepGood_phi);
   fChain->SetBranchAddress("LepGood_mass", LepGood_mass, &b_LepGood_mass);
   fChain->SetBranchAddress("LepGood_looseIdOnly", LepGood_looseIdOnly, &b_LepGood_looseIdOnly);
   fChain->SetBranchAddress("LepGood_chargedHadRelIso03", LepGood_chargedHadRelIso03, &b_LepGood_chargedHadRelIso03);
   fChain->SetBranchAddress("LepGood_chargedHadRelIso04", LepGood_chargedHadRelIso04, &b_LepGood_chargedHadRelIso04);
   fChain->SetBranchAddress("LepGood_softMuonId", LepGood_softMuonId, &b_LepGood_softMuonId);
   fChain->SetBranchAddress("LepGood_pfMuonId", LepGood_pfMuonId, &b_LepGood_pfMuonId);
   fChain->SetBranchAddress("LepGood_eleCutId2012", LepGood_eleCutId2012, &b_LepGood_eleCutId2012);
   fChain->SetBranchAddress("LepGood_trackerLayers", LepGood_trackerLayers, &b_LepGood_trackerLayers);
   fChain->SetBranchAddress("LepGood_pixelLayers", LepGood_pixelLayers, &b_LepGood_pixelLayers);
   fChain->SetBranchAddress("LepGood_trackerHits", LepGood_trackerHits, &b_LepGood_trackerHits);
   fChain->SetBranchAddress("LepGood_lostOuterHits", LepGood_lostOuterHits, &b_LepGood_lostOuterHits);
   fChain->SetBranchAddress("LepGood_innerTrackValidHitFraction", LepGood_innerTrackValidHitFraction, &b_LepGood_innerTrackValidHitFraction);
   fChain->SetBranchAddress("LepGood_innerTrackChi2", LepGood_innerTrackChi2, &b_LepGood_innerTrackChi2);
   fChain->SetBranchAddress("LepGood_nStations", LepGood_nStations, &b_LepGood_nStations);
   fChain->SetBranchAddress("LepGood_caloCompatibility", LepGood_caloCompatibility, &b_LepGood_caloCompatibility);
   fChain->SetBranchAddress("LepGood_globalTrackChi2", LepGood_globalTrackChi2, &b_LepGood_globalTrackChi2);
   fChain->SetBranchAddress("LepGood_trkKink", LepGood_trkKink, &b_LepGood_trkKink);
   fChain->SetBranchAddress("LepGood_segmentCompatibility", LepGood_segmentCompatibility, &b_LepGood_segmentCompatibility);
   fChain->SetBranchAddress("LepGood_chi2LocalPosition", LepGood_chi2LocalPosition, &b_LepGood_chi2LocalPosition);
   fChain->SetBranchAddress("LepGood_chi2LocalMomentum", LepGood_chi2LocalMomentum, &b_LepGood_chi2LocalMomentum);
   fChain->SetBranchAddress("LepGood_glbTrackProbability", LepGood_glbTrackProbability, &b_LepGood_glbTrackProbability);
   fChain->SetBranchAddress("LepGood_TMOneStationTightMuonId", LepGood_TMOneStationTightMuonId, &b_LepGood_TMOneStationTightMuonId);
   fChain->SetBranchAddress("LepGood_trackHighPurityMuon", LepGood_trackHighPurityMuon, &b_LepGood_trackHighPurityMuon);
   fChain->SetBranchAddress("LepGood_isGlobalMuon", LepGood_isGlobalMuon, &b_LepGood_isGlobalMuon);
   fChain->SetBranchAddress("LepGood_isTrackerMuon", LepGood_isTrackerMuon, &b_LepGood_isTrackerMuon);
   fChain->SetBranchAddress("LepGood_sigmaIEtaIEta", LepGood_sigmaIEtaIEta, &b_LepGood_sigmaIEtaIEta);
   fChain->SetBranchAddress("LepGood_dEtaScTrkIn", LepGood_dEtaScTrkIn, &b_LepGood_dEtaScTrkIn);
   fChain->SetBranchAddress("LepGood_dPhiScTrkIn", LepGood_dPhiScTrkIn, &b_LepGood_dPhiScTrkIn);
   fChain->SetBranchAddress("LepGood_hadronicOverEm", LepGood_hadronicOverEm, &b_LepGood_hadronicOverEm);
   fChain->SetBranchAddress("LepGood_eInvMinusPInv", LepGood_eInvMinusPInv, &b_LepGood_eInvMinusPInv);
   fChain->SetBranchAddress("LepGood_eInvMinusPInv_tkMom", LepGood_eInvMinusPInv_tkMom, &b_LepGood_eInvMinusPInv_tkMom);
   fChain->SetBranchAddress("LepGood_etaSc", LepGood_etaSc, &b_LepGood_etaSc);
   fChain->SetBranchAddress("LepGood_mcMatchPdgId", LepGood_mcMatchPdgId, &b_LepGood_mcMatchPdgId);
   fChain->SetBranchAddress("LepGood_miniRelIsoCharged", LepGood_miniRelIsoCharged, &b_LepGood_miniRelIsoCharged);
   fChain->SetBranchAddress("LepGood_miniRelIsoNeutral", LepGood_miniRelIsoNeutral, &b_LepGood_miniRelIsoNeutral);
   fChain->SetBranchAddress("LepGood_jetNDauChargedMVASel", LepGood_jetNDauChargedMVASel, &b_LepGood_jetNDauChargedMVASel);
   fChain->SetBranchAddress("LepGood_jetCorrFactor_L1", LepGood_jetCorrFactor_L1, &b_LepGood_jetCorrFactor_L1);
   fChain->SetBranchAddress("LepGood_jetCorrFactor_L1L2", LepGood_jetCorrFactor_L1L2, &b_LepGood_jetCorrFactor_L1L2);
   fChain->SetBranchAddress("LepGood_jetCorrFactor_L1L2L3", LepGood_jetCorrFactor_L1L2L3, &b_LepGood_jetCorrFactor_L1L2L3);
   fChain->SetBranchAddress("LepGood_jetCorrFactor_L1L2L3Res", LepGood_jetCorrFactor_L1L2L3Res, &b_LepGood_jetCorrFactor_L1L2L3Res);
   fChain->SetBranchAddress("LepGood_ecalPFClusterIso", LepGood_ecalPFClusterIso, &b_LepGood_ecalPFClusterIso);
   fChain->SetBranchAddress("LepGood_hcalPFClusterIso", LepGood_hcalPFClusterIso, &b_LepGood_hcalPFClusterIso);
   fChain->SetBranchAddress("LepGood_dr03TkSumPt", LepGood_dr03TkSumPt, &b_LepGood_dr03TkSumPt);
   fChain->SetBranchAddress("LepGood_trackIso", LepGood_trackIso, &b_LepGood_trackIso);
   fChain->SetBranchAddress("LepGood_idEmuTTH", LepGood_idEmuTTH, &b_LepGood_idEmuTTH);
   fChain->SetBranchAddress("LepGood_idEmuRA5", LepGood_idEmuRA5, &b_LepGood_idEmuRA5);
   fChain->SetBranchAddress("LepGood_idIsoEmuRA5", LepGood_idIsoEmuRA5, &b_LepGood_idIsoEmuRA5);
   fChain->SetBranchAddress("LepGood_mcPrompt", LepGood_mcPrompt, &b_LepGood_mcPrompt);
   fChain->SetBranchAddress("LepGood_mcPromptTau", LepGood_mcPromptTau, &b_LepGood_mcPromptTau);
   fChain->SetBranchAddress("LepGood_mcPromptGamma", LepGood_mcPromptGamma, &b_LepGood_mcPromptGamma);
   fChain->SetBranchAddress("LepGood_mcGamma", LepGood_mcGamma, &b_LepGood_mcGamma);
   fChain->SetBranchAddress("LepGood_RelIsoMIV03", LepGood_RelIsoMIV03, &b_LepGood_RelIsoMIV03);
   fChain->SetBranchAddress("LepGood_RelIsoMIVCharged03", LepGood_RelIsoMIVCharged03, &b_LepGood_RelIsoMIVCharged03);
   fChain->SetBranchAddress("LepGood_RelIsoMIVNeutral03", LepGood_RelIsoMIVNeutral03, &b_LepGood_RelIsoMIVNeutral03);
   fChain->SetBranchAddress("LepGood_RelIsoMIV04", LepGood_RelIsoMIV04, &b_LepGood_RelIsoMIV04);
   fChain->SetBranchAddress("LepGood_RelIsoMIVCharged04", LepGood_RelIsoMIVCharged04, &b_LepGood_RelIsoMIVCharged04);
   fChain->SetBranchAddress("LepGood_RelIsoMIVNeutral04", LepGood_RelIsoMIVNeutral04, &b_LepGood_RelIsoMIVNeutral04);
   fChain->SetBranchAddress("LepGood_jetPtRelHv2", LepGood_jetPtRelHv2, &b_LepGood_jetPtRelHv2);
   fChain->SetBranchAddress("LepGood_isoRelH04", LepGood_isoRelH04, &b_LepGood_isoRelH04);
   fChain->SetBranchAddress("LepGood_jetBasedRelIsoCharged", LepGood_jetBasedRelIsoCharged, &b_LepGood_jetBasedRelIsoCharged);
   fChain->SetBranchAddress("LepGood_hasSV", LepGood_hasSV, &b_LepGood_hasSV);
   fChain->SetBranchAddress("LepGood_svSip3d", LepGood_svSip3d, &b_LepGood_svSip3d);
   fChain->SetBranchAddress("LepGood_svRedPt", LepGood_svRedPt, &b_LepGood_svRedPt);
   fChain->SetBranchAddress("LepGood_svMass", LepGood_svMass, &b_LepGood_svMass);
   fChain->SetBranchAddress("LepGood_svNTracks", LepGood_svNTracks, &b_LepGood_svNTracks);
   fChain->SetBranchAddress("LepGood_energySc", LepGood_energySc, &b_LepGood_energySc);
   fChain->SetBranchAddress("LepGood_vx", LepGood_vx, &b_LepGood_vx);
   fChain->SetBranchAddress("LepGood_vy", LepGood_vy, &b_LepGood_vy);
   fChain->SetBranchAddress("LepGood_vz", LepGood_vz, &b_LepGood_vz);
   fChain->SetBranchAddress("LepGood_mcvx", LepGood_mcvx, &b_LepGood_mcvx);
   fChain->SetBranchAddress("LepGood_mcvy", LepGood_mcvy, &b_LepGood_mcvy);
   fChain->SetBranchAddress("LepGood_mcvz", LepGood_mcvz, &b_LepGood_mcvz);
   fChain->SetBranchAddress("LepGood_mvaSoftT2tt", LepGood_mvaSoftT2tt, &b_LepGood_mvaSoftT2tt);
   fChain->SetBranchAddress("LepGood_mvaSoftEWK", LepGood_mvaSoftEWK, &b_LepGood_mvaSoftEWK);
   fChain->SetBranchAddress("LepGood_minDCALep", LepGood_minDCALep, &b_LepGood_minDCALep);
   fChain->SetBranchAddress("LepGood_twoLepVertChi2", LepGood_twoLepVertChi2, &b_LepGood_twoLepVertChi2);
   fChain->SetBranchAddress("LepGood_twoLepVertDOF", LepGood_twoLepVertDOF, &b_LepGood_twoLepVertDOF);
   fChain->SetBranchAddress("LepGood_twoLepVertSigPV", LepGood_twoLepVertSigPV, &b_LepGood_twoLepVertSigPV);
   fChain->SetBranchAddress("LepGood_twoLepVertErrPV", LepGood_twoLepVertErrPV, &b_LepGood_twoLepVertErrPV);
   fChain->SetBranchAddress("LepGood_twoLepVertXpos", LepGood_twoLepVertXpos, &b_LepGood_twoLepVertXpos);
   fChain->SetBranchAddress("LepGood_twoLepVertYpos", LepGood_twoLepVertYpos, &b_LepGood_twoLepVertYpos);
   fChain->SetBranchAddress("LepGood_twoLepVertZpos", LepGood_twoLepVertZpos, &b_LepGood_twoLepVertZpos);
   fChain->SetBranchAddress("LepGood_twoLepVertXerrPos", LepGood_twoLepVertXerrPos, &b_LepGood_twoLepVertXerrPos);
   fChain->SetBranchAddress("LepGood_twoLepVertYerrPos", LepGood_twoLepVertYerrPos, &b_LepGood_twoLepVertYerrPos);
   fChain->SetBranchAddress("LepGood_twoLepVertZerrPos", LepGood_twoLepVertZerrPos, &b_LepGood_twoLepVertZerrPos);
   fChain->SetBranchAddress("LepGood_twoLepVertPairID", LepGood_twoLepVertPairID, &b_LepGood_twoLepVertPairID);
   fChain->SetBranchAddress("LepGood_jetLepAwareJEC_pt", LepGood_jetLepAwareJEC_pt, &b_LepGood_jetLepAwareJEC_pt);
   fChain->SetBranchAddress("LepGood_jetLepAwareJEC_eta", LepGood_jetLepAwareJEC_eta, &b_LepGood_jetLepAwareJEC_eta);
   fChain->SetBranchAddress("LepGood_jetLepAwareJEC_phi", LepGood_jetLepAwareJEC_phi, &b_LepGood_jetLepAwareJEC_phi);
   fChain->SetBranchAddress("LepGood_jetLepAwareJEC_energy", LepGood_jetLepAwareJEC_energy, &b_LepGood_jetLepAwareJEC_energy);

   fChain->SetBranchStatus("nJet", 1);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);

   fChain->SetBranchStatus("Jet_pt", 1);
   fChain->SetBranchStatus("Jet_eta", 1);
   fChain->SetBranchStatus("Jet_phi", 1);
   fChain->SetBranchStatus("Jet_mass", 1);
   
   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
   
   Notify();
}

inline Bool_t SOSInputTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

inline void SOSInputTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
inline Int_t SOSInputTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
