void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Fri Nov 18 13:34:02 2022) by ROOT version 6.20/02
   TCanvas *Aplanarity = new TCanvas("Aplanarity", "Aplanarity",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Aplanarity->SetHighLightColor(2);
   Aplanarity->Range(0,0,1,1);
   Aplanarity->SetFillColor(0);
   Aplanarity->SetBorderMode(0);
   Aplanarity->SetBorderSize(2);
   Aplanarity->SetTickx(1);
   Aplanarity->SetTicky(1);
   Aplanarity->SetLeftMargin(0.16);
   Aplanarity->SetRightMargin(0.05);
   Aplanarity->SetTopMargin(0.06);
   Aplanarity->SetBottomMargin(0.13);
   Aplanarity->SetFrameFillStyle(0);
   Aplanarity->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Aplanarity_2
   TPad *Aplanarity_2 = new TPad("Aplanarity_2", "Aplanarity_2",0,0,1,0.304);
   Aplanarity_2->Draw();
   Aplanarity_2->cd();
   Aplanarity_2->Range(-0.1012658,-0.428,0.5316456,1.7);
   Aplanarity_2->SetFillColor(0);
   Aplanarity_2->SetFillStyle(4000);
   Aplanarity_2->SetBorderMode(0);
   Aplanarity_2->SetBorderSize(2);
   Aplanarity_2->SetTickx(1);
   Aplanarity_2->SetTicky(1);
   Aplanarity_2->SetLeftMargin(0.16);
   Aplanarity_2->SetRightMargin(0.05);
   Aplanarity_2->SetTopMargin(0);
   Aplanarity_2->SetBottomMargin(0.3421053);
   Aplanarity_2->SetFrameFillStyle(0);
   Aplanarity_2->SetFrameBorderMode(0);
   Aplanarity_2->SetFrameFillStyle(0);
   Aplanarity_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1107 = new TH1F("hframe__1107","",1000,0,0.5);
   hframe__1107->SetMinimum(0.3);
   hframe__1107->SetMaximum(1.7);
   hframe__1107->SetDirectory(0);
   hframe__1107->SetStats(0);
   hframe__1107->SetLineStyle(0);
   hframe__1107->SetMarkerStyle(20);
   hframe__1107->GetXaxis()->SetTitle("Aplanarity");
   hframe__1107->GetXaxis()->SetNdivisions(8);
   hframe__1107->GetXaxis()->SetLabelFont(43);
   hframe__1107->GetXaxis()->SetLabelOffset(0.007);
   hframe__1107->GetXaxis()->SetLabelSize(27);
   hframe__1107->GetXaxis()->SetTitleSize(33);
   hframe__1107->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1107->GetXaxis()->SetTitleFont(43);
   hframe__1107->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1107->GetYaxis()->SetNdivisions(505);
   hframe__1107->GetYaxis()->SetLabelFont(43);
   hframe__1107->GetYaxis()->SetLabelOffset(0.007);
   hframe__1107->GetYaxis()->SetLabelSize(21);
   hframe__1107->GetYaxis()->SetTitleSize(33);
   hframe__1107->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1107->GetYaxis()->SetTitleFont(43);
   hframe__1107->GetZaxis()->SetLabelFont(43);
   hframe__1107->GetZaxis()->SetLabelOffset(0.007);
   hframe__1107->GetZaxis()->SetLabelSize(27);
   hframe__1107->GetZaxis()->SetTitleSize(33);
   hframe__1107->GetZaxis()->SetTitleOffset(1);
   hframe__1107->GetZaxis()->SetTitleFont(43);
   hframe__1107->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3675[23] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45};
   Double_t BackgroundStatSystError_fy3675[23] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3675[23] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BackgroundStatSystError_fely3675[23] = {
   0.02224759,
   0.01796755,
   0.01933324,
   0.02185619,
   0.02491983,
   0.02994325,
   0.03625725,
   0.04262183,
   0.04870347,
   0.05775164,
   0.06880069,
   0.08113233,
   0.1092719,
   0.1175863,
   0.1506004,
   0.2004259,
   0.2306097,
   0.3127702,
   0.3849561,
   0.3810017,
   2.059806,
   0.5895819,
   1.002463};
   Double_t BackgroundStatSystError_fehx3675[23] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BackgroundStatSystError_fehy3675[23] = {
   0.02224759,
   0.01796755,
   0.01933324,
   0.02185619,
   0.02491983,
   0.02994325,
   0.03625725,
   0.04262183,
   0.04870347,
   0.05775164,
   0.06880069,
   0.08113233,
   0.1092719,
   0.1175863,
   0.1506004,
   0.2004259,
   0.2306097,
   0.3127702,
   0.3849561,
   0.3810017,
   2.059806,
   0.5895819,
   1.002463};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,BackgroundStatSystError_fx3675,BackgroundStatSystError_fy3675,BackgroundStatSystError_felx3675,BackgroundStatSystError_fehx3675,BackgroundStatSystError_fely3675,BackgroundStatSystError_fehy3675);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1382;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError366736713675 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError366736713675","Graph",100,0,0.506);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMinimum(-1.471767);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMaximum(3.471767);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError366736713675);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3676[25] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49};
   Double_t BackgroundStatError_fy3676[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3676[25] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BackgroundStatError_fely3676[25] = {
   0.02224759,
   0.01796755,
   0.01933324,
   0.02185619,
   0.02491983,
   0.02994325,
   0.03625725,
   0.04262183,
   0.04870347,
   0.05775164,
   0.06880069,
   0.08113233,
   0.1092719,
   0.1175863,
   0.1506004,
   0.2004259,
   0.2306097,
   0.3127702,
   0.3849561,
   0.3810017,
   2.059806,
   0.5895819,
   1.002463,
   0,
   0};
   Double_t BackgroundStatError_fehx3676[25] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BackgroundStatError_fehy3676[25] = {
   0.02224759,
   0.01796755,
   0.01933324,
   0.02185619,
   0.02491983,
   0.02994325,
   0.03625725,
   0.04262183,
   0.04870347,
   0.05775164,
   0.06880069,
   0.08113233,
   0.1092719,
   0.1175863,
   0.1506004,
   0.2004259,
   0.2306097,
   0.3127702,
   0.3849561,
   0.3810017,
   2.059806,
   0.5895819,
   1.002463,
   0,
   0};
   grae = new TGraphAsymmErrors(25,BackgroundStatError_fx3676,BackgroundStatError_fy3676,BackgroundStatError_felx3676,BackgroundStatError_fehx3676,BackgroundStatError_fely3676,BackgroundStatError_fehy3676);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1381;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError366836723676 = new TH1F("Graph_Graph_Graph_BackgroundStatError366836723676","Graph",100,0,0.55);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMinimum(-1.471767);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMaximum(3.471767);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError366836723676);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx159[2] = {
   0,
   0.5};
   Double_t Graph0_fy159[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx159,Graph0_fy159);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0157158159 = new TH1F("Graph_Graph_Graph_Graph0157158159","Graph",100,0,0.55);
   Graph_Graph_Graph_Graph0157158159->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0157158159->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0157158159->SetDirectory(0);
   Graph_Graph_Graph_Graph0157158159->SetStats(0);
   Graph_Graph_Graph_Graph0157158159->SetLineStyle(0);
   Graph_Graph_Graph_Graph0157158159->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0157158159);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3677[21] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.45};
   Double_t Graph1_fy3677[21] = {
   1.013352,
   0.953788,
   1.033004,
   1.001851,
   0.9451504,
   0.9869216,
   1.113714,
   1.079122,
   1.064699,
   1.063167,
   0.8995529,
   0.8878741,
   1.257645,
   1.017829,
   1.074567,
   1.111595,
   0.568968,
   0.5800148,
   1.546937,
   3.889655,
   20.04734};
   Double_t Graph1_felx3677[21] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph1_fely3677[21] = {
   0.02387167,
   0.01880686,
   0.02126405,
   0.0238064,
   0.02652156,
   0.03215564,
   0.04165054,
   0.04855202,
   0.05412168,
   0.06543343,
   0.07067555,
   0.08389622,
   0.1364107,
   0.1292644,
   0.1678192,
   0.2317835,
   0.1799235,
   0.219225,
   0.5469248,
   2.245693,
   20.04734};
   Double_t Graph1_fehx3677[21] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph1_fehy3677[21] = {
   0.02387167,
   0.01880686,
   0.02126405,
   0.0238064,
   0.02652156,
   0.03215564,
   0.04165054,
   0.04855202,
   0.05412168,
   0.06543343,
   0.07067555,
   0.08389622,
   0.1364107,
   0.1292644,
   0.1678192,
   0.2317835,
   0.1799235,
   0.219225,
   0.5469248,
   2.245693,
   20.04734};
   grae = new TGraphAsymmErrors(21,Graph1_fx3677,Graph1_fy3677,Graph1_felx3677,Graph1_fehx3677,Graph1_fely3677,Graph1_fehy3677);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1366936733677 = new TH1F("Graph_Graph_Graph_Graph1366936733677","Graph",100,0,0.506);
   Graph_Graph_Graph_Graph1366936733677->SetMinimum(0);
   Graph_Graph_Graph_Graph1366936733677->SetMaximum(44.10415);
   Graph_Graph_Graph_Graph1366936733677->SetDirectory(0);
   Graph_Graph_Graph_Graph1366936733677->SetStats(0);
   Graph_Graph_Graph_Graph1366936733677->SetLineStyle(0);
   Graph_Graph_Graph_Graph1366936733677->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1366936733677);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1108 = new TH1F("hframe_copy__1108","",1000,0,0.5);
   hframe_copy__1108->SetMinimum(0.3);
   hframe_copy__1108->SetMaximum(1.7);
   hframe_copy__1108->SetDirectory(0);
   hframe_copy__1108->SetStats(0);
   hframe_copy__1108->SetLineStyle(0);
   hframe_copy__1108->SetMarkerStyle(20);
   hframe_copy__1108->GetXaxis()->SetTitle("Aplanarity");
   hframe_copy__1108->GetXaxis()->SetNdivisions(8);
   hframe_copy__1108->GetXaxis()->SetLabelFont(43);
   hframe_copy__1108->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1108->GetXaxis()->SetLabelSize(27);
   hframe_copy__1108->GetXaxis()->SetTitleSize(33);
   hframe_copy__1108->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1108->GetXaxis()->SetTitleFont(43);
   hframe_copy__1108->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1108->GetYaxis()->SetNdivisions(505);
   hframe_copy__1108->GetYaxis()->SetLabelFont(43);
   hframe_copy__1108->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1108->GetYaxis()->SetLabelSize(21);
   hframe_copy__1108->GetYaxis()->SetTitleSize(33);
   hframe_copy__1108->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1108->GetYaxis()->SetTitleFont(43);
   hframe_copy__1108->GetZaxis()->SetLabelFont(43);
   hframe_copy__1108->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1108->GetZaxis()->SetLabelSize(27);
   hframe_copy__1108->GetZaxis()->SetTitleSize(33);
   hframe_copy__1108->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1108->GetZaxis()->SetTitleFont(43);
   hframe_copy__1108->Draw("sameaxis");
   Aplanarity_2->Modified();
   Aplanarity->cd();
  
// ------------>Primitives in pad: coverpad
   TPad *coverpad = new TPad("coverpad", "coverpad",0.065,0.285,0.158,0.33);
   coverpad->Draw();
   coverpad->cd();
   coverpad->Range(0,0,1,1);
   coverpad->SetFillColor(0);
   coverpad->SetBorderMode(0);
   coverpad->SetBorderSize(2);
   coverpad->SetTickx(1);
   coverpad->SetTicky(1);
   coverpad->SetLeftMargin(0.16);
   coverpad->SetRightMargin(0.05);
   coverpad->SetTopMargin(0.06);
   coverpad->SetBottomMargin(0.13);
   coverpad->SetFrameFillStyle(0);
   coverpad->SetFrameBorderMode(0);
   coverpad->Modified();
   Aplanarity->cd();
  
// ------------>Primitives in pad: Aplanarity_1
   TPad *Aplanarity_1 = new TPad("Aplanarity_1", "Aplanarity_1",0,0.2897959,1,1);
   Aplanarity_1->Draw();
   Aplanarity_1->cd();
   Aplanarity_1->Range(-0.1012658,-1.213879,0.5316456,4.634557);
   Aplanarity_1->SetFillColor(0);
   Aplanarity_1->SetFillStyle(4000);
   Aplanarity_1->SetBorderMode(0);
   Aplanarity_1->SetBorderSize(2);
   Aplanarity_1->SetLogy();
   Aplanarity_1->SetTickx(1);
   Aplanarity_1->SetTicky(1);
   Aplanarity_1->SetLeftMargin(0.16);
   Aplanarity_1->SetRightMargin(0.05);
   Aplanarity_1->SetTopMargin(0.06);
   Aplanarity_1->SetBottomMargin(0.02);
   Aplanarity_1->SetFrameFillStyle(0);
   Aplanarity_1->SetFrameBorderMode(0);
   Aplanarity_1->SetFrameFillStyle(0);
   Aplanarity_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1109 = new TH1F("hframe__1109","",1000,0,0.5);
   hframe__1109->SetMinimum(0.08);
   hframe__1109->SetMaximum(19215.47);
   hframe__1109->SetDirectory(0);
   hframe__1109->SetStats(0);
   hframe__1109->SetLineStyle(0);
   hframe__1109->SetMarkerStyle(20);
   hframe__1109->GetXaxis()->SetNdivisions(8);
   hframe__1109->GetXaxis()->SetLabelFont(43);
   hframe__1109->GetXaxis()->SetLabelOffset(0.007);
   hframe__1109->GetXaxis()->SetLabelSize(0);
   hframe__1109->GetXaxis()->SetTitleSize(0);
   hframe__1109->GetXaxis()->SetTitleOffset(0.9);
   hframe__1109->GetXaxis()->SetTitleFont(43);
   hframe__1109->GetYaxis()->SetTitle("Events / 0");
   hframe__1109->GetYaxis()->SetLabelFont(43);
   hframe__1109->GetYaxis()->SetLabelOffset(0.007);
   hframe__1109->GetYaxis()->SetLabelSize(27);
   hframe__1109->GetYaxis()->SetTitleSize(33);
   hframe__1109->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1109->GetYaxis()->SetTitleFont(43);
   hframe__1109->GetZaxis()->SetLabelFont(43);
   hframe__1109->GetZaxis()->SetLabelOffset(0.007);
   hframe__1109->GetZaxis()->SetLabelSize(27);
   hframe__1109->GetZaxis()->SetTitleSize(33);
   hframe__1109->GetZaxis()->SetTitleOffset(1);
   hframe__1109->GetZaxis()->SetTitleFont(43);
   hframe__1109->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_157_stack_158_stack_159 = new TH1F("StackedMCstackHist_stack_157_stack_158_stack_159","StackedMCstackHist",25,0,0.5);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMinimum(1.078646);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMaximum(4314.586);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetDirectory(0);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetStats(0);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetLineStyle(0);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMarkerStyle(20);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_157_stack_158_stack_159);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_AplanarityInclusive",25,0,0.5);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,35.15936);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,57.19758);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,54.19001);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,38.75548);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,27.68356);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,21.06325);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,15.92002);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,8.917384);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,6.802139);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,4.999656);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,6.142254);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.672905);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,2.540203);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,2.418041);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.8025584);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.1088597);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.8041183);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.1258322);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.03492385);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.1211874);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.001407434);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.00219845);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,3.00219);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,3.351284);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,3.718838);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.699117);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.346791);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.038029);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.286261);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.324956);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.182457);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.9714588);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.837807);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.4784677);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.6623612);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.7250245);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.2754103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.1426576);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.5031596);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.05839699);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.01055337);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.1206715);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.006135837);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.002128497);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(45451);
   tEWttX_stack_1_stack_1_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#4c7eff");
   tEWttX_stack_1_stack_1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#4c7eff");
   tEWttX_stack_1_stack_1_stack_1->SetLineColor(ci);
   tEWttX_stack_1_stack_1_stack_1->SetLineWidth(2);

   ci = TColor::GetColor("#4c7eff");
   tEWttX_stack_1_stack_1_stack_1->SetMarkerColor(ci);
   tEWttX_stack_1_stack_1_stack_1->SetMarkerStyle(25);
   tEWttX_stack_1_stack_1_stack_1->SetMarkerSize(1.2);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,50);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_AplanarityInclusive",25,0,0.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,383.9865);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,727.0448);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,684.4182);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,560.1194);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,434.115);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,323.565);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,244.6204);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,180.7776);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,131.4889);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,94.22809);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,64.29852);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,47.24858);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,30.52041);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,20.55927);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,14.16708);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,8.342835);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,4.7787);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,2.173877);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1.603749);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.9134814);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.2792017);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.1626061);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.05000461);
   TT_stack_2_stack_2_stack_2->SetBinError(1,4.737212);
   TT_stack_2_stack_2_stack_2->SetBinError(2,6.534158);
   TT_stack_2_stack_2_stack_2->SetBinError(3,6.348199);
   TT_stack_2_stack_2_stack_2->SetBinError(4,5.747377);
   TT_stack_2_stack_2_stack_2->SetBinError(5,5.068668);
   TT_stack_2_stack_2_stack_2->SetBinError(6,4.38215);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.81648);
   TT_stack_2_stack_2_stack_2->SetBinError(8,3.287065);
   TT_stack_2_stack_2_stack_2->SetBinError(9,2.809251);
   TT_stack_2_stack_2_stack_2->SetBinError(10,2.371565);
   TT_stack_2_stack_2_stack_2->SetBinError(11,1.9563);
   TT_stack_2_stack_2_stack_2->SetBinError(12,1.681878);
   TT_stack_2_stack_2_stack_2->SetBinError(13,1.350843);
   TT_stack_2_stack_2_stack_2->SetBinError(14,1.113368);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.9286296);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.701157);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.5383698);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.369131);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.3020708);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.2322328);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.1280376);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.09721817);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.05000461);
   TT_stack_2_stack_2_stack_2->SetEntries(70981);
   TT_stack_2_stack_2_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#993399");
   TT_stack_2_stack_2_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#993399");
   TT_stack_2_stack_2_stack_2->SetLineColor(ci);
   TT_stack_2_stack_2_stack_2->SetLineWidth(2);

   ci = TColor::GetColor("#993399");
   TT_stack_2_stack_2_stack_2->SetMarkerColor(ci);
   TT_stack_2_stack_2_stack_2->SetMarkerStyle(21);
   TT_stack_2_stack_2_stack_2->SetMarkerSize(1.2);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,50);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_AplanarityInclusive",25,0,0.5);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1359.111);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1912.374);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,1545.991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,1168.854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,881.903);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,609.8549);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,381.4556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,268.0844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,225.1921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,149.0869);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,109.6487);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,77.22253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,34.52603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,37.93668);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,23.18525);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,12.2393);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,11.99286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,9.768948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,3.532837);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,-0.2633921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,-0.1964032);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.0001285009);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,-0.0001226856);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,39.16239);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,47.89186);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,43.55163);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,38.11049);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,33.01567);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,28.16875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,22.8479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,19.18682);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,17.43852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,14.10972);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,12.09605);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,10.08387);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,7.230453);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,7.038347);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,5.663917);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,4.084818);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,3.985572);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,3.75617);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,1.967726);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.1336363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.1168458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.0001285009);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.0001226856);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7515.687);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#ffcd4c");
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffcd4c");
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetLineColor(ci);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetLineWidth(2);

   ci = TColor::GetColor("#ffcd4c");
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetMarkerColor(ci);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetMarkerStyle(22);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetMarkerSize(1.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,50);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetLabelFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetTitleOffset(1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetTitleFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetYaxis()->SetLabelFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetYaxis()->SetTitleFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetZaxis()->SetLabelFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetZaxis()->SetTitleOffset(1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(BkgSum-SR-Inclusive_stack_3_stack_3_stack_3,"");
   StackedMCstackHist->Draw("hist same");
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1110 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1110","h_SR_AplanarityInclusive",25,0,0.5);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(1,1.868663);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(2,5.307988);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(3,4.23239);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(4,4.273564);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(5,2.298264);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(6,0.6326631);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(7,0.7848589);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(8,0.2926811);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(9,0.5449025);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(10,0.5125079);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(11,0.2449966);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(12,-0.2315547);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(13,0.1638128);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(14,0.2326691);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(15,-0.06913002);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(16,0.06845123);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(17,0.06685872);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(18,0.03623273);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(1,0.5019594);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(2,0.8389391);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(3,0.8133643);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(4,0.7019403);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(5,0.5798648);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(6,0.486731);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(7,0.362843);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(8,0.3221392);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(9,0.2495373);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(10,0.2553528);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(11,0.1737811);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(12,0.1237291);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(13,0.08834821);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(14,0.1079317);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(15,0.1116513);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(16,0.05017899);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(17,0.0474628);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(18,0.03623273);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetEntries(4205);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetXaxis()->SetRange(1,50);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3678[25] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3678[25] = {
   1778.257,
   2696.616,
   2284.6,
   1767.729,
   1343.702,
   954.4832,
   641.996,
   457.7794,
   363.4831,
   248.3146,
   180.0895,
   126.144,
   67.58665,
   60.91398,
   38.15489,
   20.691,
   17.57568,
   12.06866,
   5.17151,
   0.7712766,
   0.08420598,
   0.1649331,
   0.04988192,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3678[25] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3678[25] = {
   39.56194,
   48.45159,
   44.1687,
   38.63582,
   33.48482,
   28.58033,
   23.27701,
   19.51139,
   17.70289,
   14.34058,
   12.39028,
   10.23436,
   7.38532,
   7.162652,
   5.746143,
   4.147012,
   4.053122,
   3.774716,
   1.990804,
   0.2938577,
   0.173448,
   0.09724155,
   0.05000476,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3678[25] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3678[25] = {
   39.56194,
   48.45159,
   44.1687,
   38.63582,
   33.48482,
   28.58033,
   23.27701,
   19.51139,
   17.70289,
   14.34058,
   12.39028,
   10.23436,
   7.38532,
   7.162652,
   5.746143,
   4.147012,
   4.053122,
   3.774716,
   1.990804,
   0.2938577,
   0.173448,
   0.09724155,
   0.05000476,
   0,
   0};
   grae = new TGraphAsymmErrors(25,BkgSum-SR-Inclusive_sum_errors_fx3678,BkgSum-SR-Inclusive_sum_errors_fy3678,BkgSum-SR-Inclusive_sum_errors_felx3678,BkgSum-SR-Inclusive_sum_errors_fehx3678,BkgSum-SR-Inclusive_sum_errors_fely3678,BkgSum-SR-Inclusive_sum_errors_fehy3678);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1380;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678","Graph",100,0,0.55);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMinimum(3.019574);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMaximum(3019.574);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors367036743678);
   
   grae->Draw("e2 ");
   
   TH1F *Data__1111 = new TH1F("Data__1111","h_SR_AplanarityInclusive",25,0,0.5);
   Data__1111->SetBinContent(1,1802);
   Data__1111->SetBinContent(2,2572);
   Data__1111->SetBinContent(3,2360);
   Data__1111->SetBinContent(4,1771);
   Data__1111->SetBinContent(5,1270);
   Data__1111->SetBinContent(6,942);
   Data__1111->SetBinContent(7,715);
   Data__1111->SetBinContent(8,494);
   Data__1111->SetBinContent(9,387);
   Data__1111->SetBinContent(10,264);
   Data__1111->SetBinContent(11,162);
   Data__1111->SetBinContent(12,112);
   Data__1111->SetBinContent(13,85);
   Data__1111->SetBinContent(14,62);
   Data__1111->SetBinContent(15,41);
   Data__1111->SetBinContent(16,23);
   Data__1111->SetBinContent(17,10);
   Data__1111->SetBinContent(18,7);
   Data__1111->SetBinContent(19,8);
   Data__1111->SetBinContent(20,3);
   Data__1111->SetBinContent(23,1);
   Data__1111->SetBinError(1,42.44997);
   Data__1111->SetBinError(2,50.71489);
   Data__1111->SetBinError(3,48.57983);
   Data__1111->SetBinError(4,42.08325);
   Data__1111->SetBinError(5,35.63706);
   Data__1111->SetBinError(6,30.69202);
   Data__1111->SetBinError(7,26.73948);
   Data__1111->SetBinError(8,22.22611);
   Data__1111->SetBinError(9,19.67232);
   Data__1111->SetBinError(10,16.24808);
   Data__1111->SetBinError(11,12.72792);
   Data__1111->SetBinError(12,10.58301);
   Data__1111->SetBinError(13,9.219544);
   Data__1111->SetBinError(14,7.874008);
   Data__1111->SetBinError(15,6.403124);
   Data__1111->SetBinError(16,4.795832);
   Data__1111->SetBinError(17,3.162278);
   Data__1111->SetBinError(18,2.645751);
   Data__1111->SetBinError(19,2.828427);
   Data__1111->SetBinError(20,1.732051);
   Data__1111->SetBinError(23,1);
   Data__1111->SetEntries(13095);
   Data__1111->SetDirectory(0);
   Data__1111->SetFillStyle(3001);
   Data__1111->SetLineWidth(2);
   Data__1111->SetMarkerStyle(20);
   Data__1111->SetMarkerSize(1.2);
   Data__1111->GetXaxis()->SetRange(1,50);
   Data__1111->GetXaxis()->SetLabelFont(42);
   Data__1111->GetXaxis()->SetTitleOffset(1);
   Data__1111->GetXaxis()->SetTitleFont(42);
   Data__1111->GetYaxis()->SetLabelFont(42);
   Data__1111->GetYaxis()->SetTitleFont(42);
   Data__1111->GetZaxis()->SetLabelFont(42);
   Data__1111->GetZaxis()->SetTitleOffset(1);
   Data__1111->GetZaxis()->SetTitleFont(42);
   Data__1111->Draw("EP same");
   
   TLegend *leg = new TLegend(0.65,0.51,0.85,0.91,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(4000);
   TLegendEntry *entry=leg->AddEntry("Data","Data","peL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ChargedHiggs_HplusTBHplusToTB_M_800","H^{#pm} (0.8 TeV, 1 pb)","L");
   entry->SetLineColor(93);
   entry->SetLineStyle(6);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("BkgSum-SR-Inclusive_forLegend","QCD multijet","F");

   ci = TColor::GetColor("#ffcd4c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcd4c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TT_forLegend","t#bar{t}","F");

   ci = TColor::GetColor("#993399");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#993399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("tEWttX_forLegend","t, t#bar{t} + X, EW","F");

   ci = TColor::GetColor("#4c7eff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#4c7eff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("BkgSum-SR-Inclusive_sum_errors_forLegend","Bkg. stat.","F");

   ci = 1380;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1380;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1112 = new TH1F("hframe_copy__1112","",1000,0,0.5);
   hframe_copy__1112->SetMinimum(0.08);
   hframe_copy__1112->SetMaximum(19215.47);
   hframe_copy__1112->SetDirectory(0);
   hframe_copy__1112->SetStats(0);
   hframe_copy__1112->SetLineStyle(0);
   hframe_copy__1112->SetMarkerStyle(20);
   hframe_copy__1112->GetXaxis()->SetNdivisions(8);
   hframe_copy__1112->GetXaxis()->SetLabelFont(43);
   hframe_copy__1112->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1112->GetXaxis()->SetLabelSize(0);
   hframe_copy__1112->GetXaxis()->SetTitleSize(0);
   hframe_copy__1112->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1112->GetXaxis()->SetTitleFont(43);
   hframe_copy__1112->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1112->GetYaxis()->SetLabelFont(43);
   hframe_copy__1112->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1112->GetYaxis()->SetLabelSize(27);
   hframe_copy__1112->GetYaxis()->SetTitleSize(33);
   hframe_copy__1112->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1112->GetYaxis()->SetTitleFont(43);
   hframe_copy__1112->GetZaxis()->SetLabelFont(43);
   hframe_copy__1112->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1112->GetZaxis()->SetLabelSize(27);
   hframe_copy__1112->GetZaxis()->SetTitleSize(33);
   hframe_copy__1112->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1112->GetZaxis()->SetTitleFont(43);
   hframe_copy__1112->Draw("sameaxis");
   
   TH1F *hframe_copy__1113 = new TH1F("hframe_copy__1113","",1000,0,0.5);
   hframe_copy__1113->SetMinimum(0.08);
   hframe_copy__1113->SetMaximum(19215.47);
   hframe_copy__1113->SetDirectory(0);
   hframe_copy__1113->SetStats(0);
   hframe_copy__1113->SetLineStyle(0);
   hframe_copy__1113->SetMarkerStyle(20);
   hframe_copy__1113->GetXaxis()->SetNdivisions(8);
   hframe_copy__1113->GetXaxis()->SetLabelFont(43);
   hframe_copy__1113->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1113->GetXaxis()->SetLabelSize(0);
   hframe_copy__1113->GetXaxis()->SetTitleSize(0);
   hframe_copy__1113->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1113->GetXaxis()->SetTitleFont(43);
   hframe_copy__1113->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1113->GetYaxis()->SetLabelFont(43);
   hframe_copy__1113->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1113->GetYaxis()->SetLabelSize(27);
   hframe_copy__1113->GetYaxis()->SetTitleSize(33);
   hframe_copy__1113->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1113->GetYaxis()->SetTitleFont(43);
   hframe_copy__1113->GetZaxis()->SetLabelFont(43);
   hframe_copy__1113->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1113->GetZaxis()->SetLabelSize(27);
   hframe_copy__1113->GetZaxis()->SetTitleSize(33);
   hframe_copy__1113->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1113->GetZaxis()->SetTitleFont(43);
   hframe_copy__1113->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.95,0.952,"59.8 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(43);
   tex->SetTextSize(24);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.952,"CMS");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(30);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2706,0.952,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(53);
   tex->SetTextSize(22.8);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_1->Modified();
   Aplanarity->cd();
   Aplanarity->Modified();
   Aplanarity->cd();
   Aplanarity->SetSelected(Aplanarity);
}
