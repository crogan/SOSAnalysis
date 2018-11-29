#include <iostream>
#include <string>

#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TAxis.h>
#include <TCanvas.h>
#include <TMath.h>
#include <TLegend.h>
#include <TLatex.h>
#include <TH2D.h>
#include <TStyle.h>

#include "RestFrames/RestFrames.hh"
#include "../include/ReducedBase.hh"

using namespace std;


string g_Path;
vector<string> g_File;
vector<string> g_Tree;
vector<string> g_Title;
string g_PlotTitle;
string g_Xname;
double g_Xmin;
double g_Xmax;
double g_NX;
string g_Yname;
double g_Ymin;
double g_Ymax;
double g_NY;


void Plot_2D(){
  RestFrames::SetStyle();
  
  // g_File.push_back("BKG/DYJetsToLL_M50_HT100to200.root");
  // g_File.push_back("BKG/DYJetsToLL_M5to50_HT200to400.root");
  // g_File.push_back("BKG/DYJetsToLL_M50_HT1200to2500.root");
  // g_File.push_back("BKG/DYJetsToLL_M5to50_HT400to600.root");
  // g_File.push_back("BKG/DYJetsToLL_M50_HT200to400.root");
  // g_File.push_back("BKG/DYJetsToLL_M5to50_HT600toInf.root");
  // g_File.push_back("BKG/DYJetsToLL_M50_HT2500toInf.root");
  // g_File.push_back("BKG/DYJetsToLL_M50_HT400to600.root");
  // g_File.push_back("BKG/DYJetsToLL_M50_HT600to800.root");
  // g_File.push_back("BKG/DYJetsToLL_M50_HT70to100.root");
  // g_File.push_back("BKG/DYJetsToLL_M50_HT800to1200.root");
  // g_File.push_back("BKG/DYJetsToLL_M5to50_HT100to200.root");
  // g_PlotTitle = "Z/#gamma* + jets";
  

  g_File.push_back("BKG/VVTo2L2Nu.root");
  g_File.push_back("BKG/WZTo1L1Nu2Q.root");
  g_File.push_back("BKG/WZTo1L3Nu.root");
  g_File.push_back("BKG/WZTo3LNu.root");
  g_PlotTitle = "VV + jets";
 
  
  // g_File.push_back("BKG/TTJets_DiLepton.root");
  // g_PlotTitle = "t #bar{t} + jets";
  

  // g_File.push_back("SIG/TChiWZ_300_290.root");
  // g_PlotTitle = "#tilde{#chi}_{2}^{0} #tilde{#chi}_{1}^{#pm} #rightarrow Z #tilde{#chi}_{1}^{0} W #tilde{#chi}_{1}^{0}; m_{#tilde{#chi}_{2}^{0},#tilde{#chi}_{1}^{#pm}} = 300, m_{#tilde{#chi}_{1}^{0}} = 290 GeV";
  
  // g_File.push_back("SIG/T2tt_400_390.root");
  // g_PlotTitle = "TChiWZ 300, 1";
 

  int Nsample = g_File.size();

  g_Path = "/Users/crogan/Dropbox/SAMPLES/SOS/NTUPLES_2J/";
  
  //string g_Label = "No selection";
  string g_Label = "Region D";


  g_Xname = "R_{ISR}";
  g_Xmin = 0.2;
  g_Xmax = 1.2; 
  g_NX = 50;
  g_Yname = "p_{T}^{ISR} [GeV]";
  g_Ymin = 50.;
  g_Ymax = 900.;
  g_NY = 50;

  TH2D* hist = new TH2D("hist","hist",
			g_NX,g_Xmin,g_Xmax,
			g_NY,g_Ymin,g_Ymax);

  for(int s = 0; s < Nsample; s++){
    TChain* chain = new TChain("SOSAnalysis");
    chain->Add((g_Path+g_File[s]).c_str());

    ReducedBase* base = new ReducedBase(chain);

    int Nentry = base->fChain->GetEntries();
    for(int e = 0; e < Nentry; e++){
      base->GetEntry(e);
      
      if(!base->Is_2LNJ)
      	continue;
      // if(!base->Is_2L1L)
      // 	continue;

      // if(base->MET < 200.)
      // 	continue;

      // if(base->PTISR_comb < 250.)
      // 	continue;

      // if(base->Nj < 1)
      // 	continue;

      // if(base->RISR_comb < 0.9)
      // 	continue;

      // if(base->MJ < 65. || base->MJ > 100. || base->Nj < 2)
      // 	continue;

      // if(base->MZ < 80. || base->MZ > 100.)
      // 	continue;

      // if(base->H11S/base->HN2S < 0.7)
      // 	continue;

      double mymin = min(base->H11Ca/base->HN1Ca,base->H11Cb/base->HN1Cb);
      
      hist->Fill(base->RISR_comb, base->PTISR_comb , base->weight);
    }

    delete base;
    delete chain;
  }

  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(11111111);
  TCanvas* can = (TCanvas*) new TCanvas("can","can",700.,600);

  can->SetLeftMargin(0.15);
  can->SetRightMargin(0.18);
  can->SetBottomMargin(0.15);
  can->SetGridx();
  can->SetGridy();
  can->SetLogz();
  can->Draw();
  can->cd();
  hist->Draw("COLZ");
  hist->GetXaxis()->CenterTitle();
  hist->GetXaxis()->SetTitleFont(42);
  hist->GetXaxis()->SetTitleSize(0.06);
  hist->GetXaxis()->SetTitleOffset(1.06);
  hist->GetXaxis()->SetLabelFont(42);
  hist->GetXaxis()->SetLabelSize(0.05);
  hist->GetXaxis()->SetTitle(g_Xname.c_str());
  hist->GetYaxis()->CenterTitle();
  hist->GetYaxis()->SetTitleFont(42);
  hist->GetYaxis()->SetTitleSize(0.06);
  hist->GetYaxis()->SetTitleOffset(1.12);
  hist->GetYaxis()->SetLabelFont(42);
  hist->GetYaxis()->SetLabelSize(0.05);
  hist->GetYaxis()->SetTitle(g_Yname.c_str());
  hist->GetZaxis()->CenterTitle();
  hist->GetZaxis()->SetTitleFont(42);
  hist->GetZaxis()->SetTitleSize(0.06);
  hist->GetZaxis()->SetTitleOffset(1.);
  hist->GetZaxis()->SetLabelFont(42);
  hist->GetZaxis()->SetLabelSize(0.05);
  hist->GetZaxis()->SetTitle("a. u.");
  hist->GetZaxis()->SetRangeUser(0.9*hist->GetMinimum(0.0),1.1*hist->GetMaximum());

  TLatex l;
  l.SetTextFont(42);
  l.SetNDC();
  l.SetTextSize(0.035);
  l.SetTextFont(42);
  // l.DrawLatex(0.17,0.855,g_PlotTitle.c_str());
  l.DrawLatex(0.41,0.943,g_PlotTitle.c_str());
  l.SetTextSize(0.04);
  l.SetTextFont(42);
  l.DrawLatex(0.01,0.943,"#bf{CMS} Simulation Preliminary");

  // l.SetTextSize(0.04);
  // l.SetTextFont(132);
  // l.DrawLatex(0.74,0.04,g_Label.c_str());


}
