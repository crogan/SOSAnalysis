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
#include <TColor.h>
#include <TColorWheel.h>
#include <TH1D.h>
#include <TStyle.h>
#include <TLorentzVector.h>

#include "../include/ReducedBase.hh"


using namespace std;

string g_Path;
vector<string> g_File;
vector<string> g_Tree;
vector<int> g_Hist;
vector<string> g_Title;
vector<bool> g_Bkg;
double g_Lumi;
string g_PlotTitle;
string g_Xname;
double g_Xmin;
double g_Xmax;
int g_NX;

TColor *icolor[9][2];
int color_list[4][10];
int style_list[4][10];

void setstyle(int istyle);

void Plot_1D(){
  setstyle(0);

  //g_PlotTitle = "Baseline Selection";
  g_PlotTitle = "Region D Selection";

  int ihist = 0;

  // g_File.push_back("BKG/DYJetsToLL_M50_HT100to200.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M5to50_HT200to400.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M50_HT1200to2500.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M5to50_HT400to600.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M50_HT200to400.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M5to50_HT600toInf.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M50_HT2500toInf.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M50_HT400to600.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M50_HT600to800.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M50_HT70to100.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M50_HT800to1200.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/DYJetsToLL_M5to50_HT100to200.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("Z/#gamma* + jets");
  // g_Bkg.push_back(true);
  // ihist++;

  // g_File.push_back("BKG/VVTo2L2Nu.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/WZTo1L1Nu2Q.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/WZTo1L3Nu.root");
  // g_Hist.push_back(ihist);
  // g_File.push_back("BKG/WZTo3LNu.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("VV + jets");
  // g_Bkg.push_back(true);
  // ihist++;
  
  // g_File.push_back("BKG/TTJets_DiLepton.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("t #bar{t} (2L)");
  // g_Bkg.push_back(true);
  // ihist++;

  // g_File.push_back("SIG/TChiWZ_300_1.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 1");
  // g_Bkg.push_back(false);
  // ihist++;
  
  // g_File.push_back("SIG/TChiWZ_300_290.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 290");
  // g_Bkg.push_back(false);
  // ihist++;

  // g_File.push_back("SIG/T2tt_500_490.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("T2tt 400, 390");
  // g_Bkg.push_back(false);
  // ihist++;

  // g_File.push_back("SIG/TChiWZ_300_260.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 260");
  // g_Bkg.push_back(false);
  // ihist++;
  //  g_File.push_back("SIG/TChiWZ_300_270.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 270");
  // g_Bkg.push_back(false);
  // ihist++;
  //  g_File.push_back("SIG/TChiWZ_300_270.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 270");
  // g_Bkg.push_back(false);
  // ihist++;
  //  g_File.push_back("SIG/TChiWZ_300_280.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 280");
  // g_Bkg.push_back(false);
  // ihist++;
  //  g_File.push_back("SIG/TChiWZ_300_290.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 290");
  // g_Bkg.push_back(false);
  // ihist++;
  // g_File.push_back("SIG/TChiWZ_300_293.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 293");
  // g_Bkg.push_back(false);
  // ihist++;

  g_File.push_back("SIG/TChiWZ_300_1.root");
  g_Hist.push_back(ihist);
  g_Title.push_back("TChiWZ 300, 1");
  g_Bkg.push_back(false);
  ihist++;
   g_File.push_back("SIG/TChiWZ_300_100.root");
  g_Hist.push_back(ihist);
  g_Title.push_back("TChiWZ 300, 100");
  g_Bkg.push_back(false);
  ihist++;
   g_File.push_back("SIG/TChiWZ_300_125.root");
  g_Hist.push_back(ihist);
  g_Title.push_back("TChiWZ 300, 125");
  g_Bkg.push_back(false);
  ihist++;
   g_File.push_back("SIG/TChiWZ_300_160.root");
  g_Hist.push_back(ihist);
  g_Title.push_back("TChiWZ 300, 160");
  g_Bkg.push_back(false);
  ihist++;
  //  g_File.push_back("SIG/TChiWZ_300_150.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 150");
  // g_Bkg.push_back(false);
  // ihist++;
  // g_File.push_back("SIG/TChiWZ_300_200.root");
  // g_Hist.push_back(ihist);
  // g_Title.push_back("TChiWZ 300, 200");
  // g_Bkg.push_back(false);
  // ihist++;
  

  int Nsample = g_File.size();
  int Nhist = ihist;

  g_Path = "/Users/crogan/Dropbox/SAMPLES/SOS/NTUPLES_2J/";
  
  //g_Xname = "N_{jet}^{ V_{S}}";
  g_Xname = "RISR";
  g_Xmin = 0.;
  g_Xmax = 350.;
  g_NX = 25;


  TH1D* hist[Nhist];
  for(int i = 0; i < Nhist; i++)
    hist[i] = new TH1D(("h"+to_string(i)).c_str(),
		       ("h"+to_string(i)).c_str(),
		       g_NX,g_Xmin,g_Xmax);

  for(int s = 0; s < Nsample; s++){
    TChain* chain = new TChain("SOSAnalysis");
    chain->Add((g_Path+g_File[s]).c_str());

    ReducedBase* base = new ReducedBase(chain);

    int Nentry = base->fChain->GetEntries();

    cout << "Sample " << s << " | " << Nsample << endl;
    for(int e = 0; e < Nentry; e++){
      base->GetEntry(e);
      if(e%(max(1,Nentry/10)) == 0)
	cout << "event " << e << " | " << Nentry << endl;

      // if(!base->Is_2LNJ)
      // 	continue;
      if(!base->Is_2L1L)
      	continue;

      // if(base->MET < 200.)
      // 	continue;

      // if(base->PTISR_comb < 250.)
      // 	continue;
 
      // if(base->Nj < 1)
      // 	continue;

      // if(base->RISR_comb < 0.9)
      // 	continue;

      // if(base->MJ < 65. || base->MJ > 105. || base->Nj < 2 )
      // 	continue;

      // if(base->MZ < 80. || base->MZ > 100.)
      // 	continue;

      // if(base->H11S/base->HN2S < 0.6)
      // 	continue;

      // double mymin = min(base->H11Ca/base->HN1Ca,base->H11Cb/base->HN1Cb);

      if(base->H11Ca/base->HN1Ca < 0.8)
      	continue;
      
      hist[g_Hist[s]]->Fill(base->H11Ca, base->weight);
     
    }

    delete base;
    delete chain;
  }
  
  double max = -1.;
  int imax = -1;
  for(int i = 0; i < Nhist; i++){
    cout << hist[i]->Integral() << " bla" << endl;
    hist[i]->Scale(1./hist[i]->Integral());
    //hist[i]->Scale(1./hist[i]->GetMaximum());
    if(hist[i]->GetMaximum() > max){
      max = hist[i]->GetMaximum();
      imax = i;
    }
  }
  
  float width = hist[0]->GetBinWidth(1);
  char *yaxis = new char[100];
  sprintf(yaxis,"Events / %f", width);

  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(11111111);
  TCanvas* can = (TCanvas*) new TCanvas("can","can",600.,500);

  can->SetLeftMargin(0.13);
  can->SetRightMargin(0.04);
  can->SetBottomMargin(0.15);
  can->SetTopMargin(0.085);
  can->SetGridx();
  can->SetGridy();
  can->Draw();
  can->cd();
  // for(int i = 0; i < hist[imax]->GetNbinsX(); i++){
  //   char* sbin = new char[20];
  //   sprintf(sbin,"#geq %d", i);
  //   hist[imax]->GetXaxis()->SetBinLabel(i+1,sbin);
  // }
  hist[imax]->Draw("hist");
  hist[imax]->GetXaxis()->CenterTitle();
  hist[imax]->GetXaxis()->SetTitleFont(42);
  hist[imax]->GetXaxis()->SetTitleSize(0.06);
  hist[imax]->GetXaxis()->SetTitleOffset(1.06);
  hist[imax]->GetXaxis()->SetLabelFont(42);
  hist[imax]->GetXaxis()->SetLabelSize(0.05);
  hist[imax]->GetXaxis()->SetTitle(g_Xname.c_str());
  hist[imax]->GetYaxis()->CenterTitle();
  hist[imax]->GetYaxis()->SetTitleFont(42);
  hist[imax]->GetYaxis()->SetTitleSize(0.06);
  hist[imax]->GetYaxis()->SetTitleOffset(1.);
  hist[imax]->GetYaxis()->SetLabelFont(42);
  hist[imax]->GetYaxis()->SetLabelSize(0.05);
  hist[imax]->GetYaxis()->SetTitle("a. u.");
  hist[imax]->GetYaxis()->SetRangeUser(0., hist[imax]->GetMaximum()*1.1);
  //hist[imax]->GetYaxis()->SetTitle(yaxis);
  //hist[imax]->GetYaxis()->SetTitle("N_{evt} / fb^{-1}");
  int Ntype[3];

  int mycolor[6];
  mycolor[0] = kBlue+2;
  mycolor[1] = kGreen+3;
  mycolor[2] = kRed+1;
  mycolor[3] = kYellow+2;
  mycolor[4] = kMagenta+1;
  mycolor[5] = kCyan+2;
  
  Ntype[0] = 0;
  for(int i = 0; i < Nhist; i++){
    hist[i]->SetLineColor(1393+2*Ntype[0]);
    hist[i]->SetLineColor(mycolor[i]);
    hist[i]->SetLineWidth(3);
    hist[i]->SetMarkerColor(1393+2*Ntype[0]);
    hist[i]->SetMarkerColor(mycolor[i]);
    hist[i]->SetMarkerSize(0);
    hist[i]->SetFillColor(kWhite);
    Ntype[0]++;
    hist[i]->Draw("hist SAME");
  }

  TLegend* leg = new TLegend(0.688,0.22,0.93,0.42);
  leg->SetTextFont(42);
  leg->SetTextSize(0.045);
  leg->SetFillColor(kWhite);
  leg->SetLineColor(kWhite);
  leg->SetShadowColor(kWhite);
  for(int i = 0; i < Nhist; i++)
    leg->AddEntry(hist[i],g_Title[i].c_str());
  leg->SetLineColor(kWhite);
  leg->SetFillColor(kWhite);
  leg->SetShadowColor(kWhite);
  leg->Draw("SAME");

  TLatex l;
  l.SetTextFont(132);
  l.SetNDC();
  l.SetTextSize(0.045);
  l.SetTextFont(42);
  // l.DrawLatex(0.17,0.855,g_PlotTitle.c_str());
  l.DrawLatex(0.6,0.943,g_PlotTitle.c_str());
  l.SetTextSize(0.045);
  l.SetTextFont(42);
  l.DrawLatex(0.135,0.943,"#bf{CMS} Simulation Preliminary");	

  // l.SetTextSize(0.045);
  // l.SetTextFont(132);
  // string bla = "#scale[0.6]{#int} #it{L dt} = "+to_string(int(g_lumi))+" fb^{-1},  #Delta_{N#scale[0.8]{bkg}} = ";
  // bla += to_string(int(g_deltaNbkg))+" %";
  // l.DrawLatex(0.61,0.943,bla.c_str());


}

void setstyle(int istyle) {
	
  // For the canvas:
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetCanvasColor(kWhite);
  gStyle->SetCanvasDefH(300); //Height of canvas
  gStyle->SetCanvasDefW(600); //Width of canvas
  gStyle->SetCanvasDefX(0);   //POsition on screen
  gStyle->SetCanvasDefY(0);
	
  // For the Pad:
  gStyle->SetPadBorderMode(0);
  // gStyle->SetPadBorderSize(Width_t size = 1);
  gStyle->SetPadColor(kWhite);
  gStyle->SetPadGridX(false);
  gStyle->SetPadGridY(false);
  gStyle->SetGridColor(0);
  gStyle->SetGridStyle(3);
  gStyle->SetGridWidth(1);
	
  // For the frame:
  gStyle->SetFrameBorderMode(0);
  gStyle->SetFrameBorderSize(1);
  gStyle->SetFrameFillColor(0);
  gStyle->SetFrameFillStyle(0);
  gStyle->SetFrameLineColor(1);
  gStyle->SetFrameLineStyle(1);
  gStyle->SetFrameLineWidth(1);
	
  // set the paper & margin sizes
  gStyle->SetPaperSize(20,26);
  gStyle->SetPadTopMargin(0.065);
  gStyle->SetPadRightMargin(0.065);
  gStyle->SetPadBottomMargin(0.15);
  gStyle->SetPadLeftMargin(0.17);
	
  // use large Times-Roman fonts
  gStyle->SetTitleFont(132,"xyz");  // set the all 3 axes title font
  gStyle->SetTitleFont(132," ");    // set the pad title font
  gStyle->SetTitleSize(0.06,"xyz"); // set the 3 axes title size
  gStyle->SetTitleSize(0.06," ");   // set the pad title size
  gStyle->SetLabelFont(132,"xyz");
  gStyle->SetLabelSize(0.05,"xyz");
  gStyle->SetLabelColor(1,"xyz");
  gStyle->SetTextFont(132);
  gStyle->SetTextSize(0.08);
  gStyle->SetStatFont(132);
	
  // use bold lines and markers
  gStyle->SetMarkerStyle(8);
  gStyle->SetHistLineWidth(1.85);
  gStyle->SetLineStyleString(2,"[12 12]"); // postscript dashes
	
  //..Get rid of X error bars
  gStyle->SetErrorX(0.001);
	
  // do not display any of the standard histogram decorations
  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(11111111);
	
  // put tick marks on top and RHS of plots
  gStyle->SetPadTickX(1);
  gStyle->SetPadTickY(1);
	
  // set a decent palette
  gStyle->SetPalette(1);
	
  gStyle->cd();
	
  TColorWheel *w = new TColorWheel();
	
  icolor[0][1] = new TColor(1390, 0.90, 0.60, 0.60, ""); //red
  icolor[0][0] = new TColor(1391, 0.70, 0.25, 0.25, "");
  icolor[1][1] = new TColor(1392, 0.87, 0.87, 0.91, ""); //blue
  icolor[1][0] = new TColor(1393, 0.59, 0.58, 0.91, "");
  icolor[2][1] = new TColor(1394, 0.65, 0.55, 0.85, ""); //violet (gamma)
  icolor[2][0] = new TColor(1395, 0.49, 0.26, 0.64, "");
  icolor[8][1] = new TColor(1406, 0.95, 0.95, 0.60, ""); // yellow (alpha)
  icolor[8][0] = new TColor(1407, 0.95, 0.95, 0.00, "");
  icolor[3][1] = new TColor(1396, 0.75, 0.92, 0.68, ""); //green (2beta+gamma)
  icolor[3][0] = new TColor(1397, 0.36, 0.57, 0.30, "");
  icolor[4][1] = new TColor(1398, 0.97, 0.50, 0.09, ""); // orange
  icolor[4][0] = new TColor(1399, 0.76, 0.34, 0.09, "");
  icolor[5][1] = new TColor(1400, 0.97, 0.52, 0.75, ""); // pink
  icolor[5][0] = new TColor(1401, 0.76, 0.32, 0.51, "");
  icolor[6][1] = new TColor(1402, 0.49, 0.60, 0.82, ""); // dark blue (kpnn)
  icolor[6][0] = new TColor(1403, 0.43, 0.48, 0.52, "");
  icolor[7][1] = new TColor(1404, 0.70, 0.70, 0.70, "");  // black
  icolor[7][0] = new TColor(1405, 0.40, 0.40, 0.40, "");
	
	
  if(istyle == 0){
		
    //SM MC
    color_list[3][0] = kCyan+3;
		
    //DATA
    color_list[0][0] = 1;
    color_list[0][1] = 2;
    color_list[0][2] = 4;
    style_list[0][0] = 20;
    style_list[0][1] = 23;
		
    //BKG MC
    color_list[1][0] = 0;
    color_list[1][3] = kGreen-9; //Light green
    color_list[1][5] = kOrange-2; //dark blue
    color_list[1][4] = kGreen+3; //yellow
    color_list[1][1] = kBlue-10; //light blue
    color_list[1][2] = kBlue+4; //dark green
    style_list[1][0] = 1001;
    style_list[1][1] = 1001;
    style_list[1][2] = 3002;
    style_list[1][3] = 1001;
    style_list[1][4] = 1001;
    style_list[1][5] = 1001;
		
    //SIG MC
    color_list[2][0] = 1;
    color_list[2][1] = 1;
    color_list[2][2] = 1;
    style_list[2][0] = 2;
    style_list[2][1] = 5;
  }
  if(istyle == 1){
		
    //SM MC
    color_list[3][0] = kSpring+4;
		
    //DATA
    color_list[0][0] = 1;
    color_list[0][1] = 2;
    color_list[0][2] = 4;
    style_list[0][0] = 20;
    style_list[0][1] = 23;
		
    //BKG MC
    color_list[1][0] = 0;
    color_list[1][1] = kGreen-9; //Light green
    color_list[1][2] = kGreen+3; //dark blue
    color_list[1][3] = kYellow-7; //yellow
    color_list[1][4] = kBlue-10; //light blue
    color_list[1][5] = kBlue+4; //dark blue
    style_list[1][0] = 1001;
    style_list[1][1] = 1001;
    style_list[1][2] = 3002;
    style_list[1][3] = 1001;
    style_list[1][4] = 1001;
    style_list[1][5] = 1001;
		
    //SIG MC
    color_list[2][0] = 1;
    color_list[2][1] = 1;
    color_list[2][2] = 1;
    style_list[2][0] = 2;
    style_list[2][1] = 5;
  }
  if(istyle == 2){
		
    //SM MC
    color_list[3][0] = kMagenta+2;
		
    //DATA
    color_list[0][0] = 1;
    color_list[0][1] = 2;
    color_list[0][2] = 4;
    style_list[0][0] = 20;
    style_list[0][1] = 23;
		
    //BKG MC
    color_list[1][0] = 0;
    color_list[1][3] = kRed-9; //Light green
    color_list[1][5] = kRed+3; //dark blue
    color_list[1][4] = kYellow-7; //yellow
    color_list[1][1] = kMagenta-10; //light blue
    color_list[1][2] = kMagenta+4; //dark green
    style_list[1][0] = 1001;
    style_list[1][1] = 1001;
    style_list[1][2] = 3002;
    style_list[1][3] = 1001;
    style_list[1][4] = 1001;
    style_list[1][5] = 1001;
		
    //SIG MC
    color_list[2][0] = 1;
    color_list[2][1] = 1;
    color_list[2][2] = 1;
    style_list[2][0] = 2;
    style_list[2][1] = 5;
  }
	
}
