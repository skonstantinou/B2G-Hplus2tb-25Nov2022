void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Fri Nov 18 13:30:32 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3675[24] = {
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
   0.47};
   Double_t BackgroundStatSystError_fy3675[24] = {
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
   Double_t BackgroundStatSystError_felx3675[24] = {
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
   Double_t BackgroundStatSystError_fely3675[24] = {
   0.02198653,
   0.01593789,
   0.01681979,
   0.01882962,
   0.02192956,
   0.0257269,
   0.03015721,
   0.03634405,
   0.04319264,
   0.05102507,
   0.06349662,
   0.0664167,
   0.08988015,
   0.1040287,
   0.1221898,
   0.1830565,
   0.2198074,
   0.346508,
   0.320392,
   1.559653,
   0.9569978,
   0.743873,
   -0.7717045,
   0.9508638};
   Double_t BackgroundStatSystError_fehx3675[24] = {
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
   Double_t BackgroundStatSystError_fehy3675[24] = {
   0.02198653,
   0.01593789,
   0.01681979,
   0.01882962,
   0.02192956,
   0.0257269,
   0.03015721,
   0.03634405,
   0.04319264,
   0.05102507,
   0.06349662,
   0.0664167,
   0.08988015,
   0.1040287,
   0.1221898,
   0.1830565,
   0.2198074,
   0.346508,
   0.320392,
   1.559653,
   0.9569978,
   0.743873,
   -0.7717045,
   0.9508638};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,BackgroundStatSystError_fx3675,BackgroundStatSystError_fy3675,BackgroundStatSystError_felx3675,BackgroundStatSystError_fehx3675,BackgroundStatSystError_fely3675,BackgroundStatSystError_fehy3675);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError366736713675 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError366736713675","Graph",100,0,0.528);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMinimum(-0.871583);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMaximum(2.871583);
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
   0.02198653,
   0.01593789,
   0.01681979,
   0.01882962,
   0.02192956,
   0.0257269,
   0.03015721,
   0.03634405,
   0.04319264,
   0.05102507,
   0.06349662,
   0.0664167,
   0.08988015,
   0.1040287,
   0.1221898,
   0.1830565,
   0.2198074,
   0.346508,
   0.320392,
   1.559653,
   0.9569978,
   0.743873,
   -0.7717045,
   0.9508638,
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
   0.02198653,
   0.01593789,
   0.01681979,
   0.01882962,
   0.02192956,
   0.0257269,
   0.03015721,
   0.03634405,
   0.04319264,
   0.05102507,
   0.06349662,
   0.0664167,
   0.08988015,
   0.1040287,
   0.1221898,
   0.1830565,
   0.2198074,
   0.346508,
   0.320392,
   1.559653,
   0.9569978,
   0.743873,
   -0.7717045,
   0.9508638,
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
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMinimum(-0.871583);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMaximum(2.871583);
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
   0.41};
   Double_t Graph1_fy3677[21] = {
   0.9918563,
   0.9851246,
   1.005325,
   0.9878347,
   1.014161,
   1.044858,
   1.040285,
   1.07305,
   1.054172,
   1.134149,
   1.04231,
   0.9056762,
   1.306264,
   0.9654907,
   0.9470337,
   1.398351,
   0.7969794,
   0.944947,
   0.7017545,
   10.18857,
   3.088377};
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
   0.02390189,
   0.0177536,
   0.0191291,
   0.02145946,
   0.0252126,
   0.03011231,
   0.03524872,
   0.042922,
   0.05008524,
   0.06106053,
   0.07158611,
   0.07137728,
   0.1268755,
   0.1107494,
   0.1366925,
   0.2363644,
   0.2130017,
   0.2988185,
   0.3508773,
   5.882372,
   1.783075};
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
   0.02390189,
   0.0177536,
   0.0191291,
   0.02145946,
   0.0252126,
   0.03011231,
   0.03524872,
   0.042922,
   0.05008524,
   0.06106053,
   0.07158611,
   0.07137728,
   0.1268755,
   0.1107494,
   0.1366925,
   0.2363644,
   0.2130017,
   0.2988185,
   0.3508773,
   5.882372,
   1.783075};
   grae = new TGraphAsymmErrors(21,Graph1_fx3677,Graph1_fy3677,Graph1_felx3677,Graph1_fehx3677,Graph1_fely3677,Graph1_fehy3677);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1366936733677 = new TH1F("Graph_Graph_Graph_Graph1366936733677","Graph",100,0,0.462);
   Graph_Graph_Graph_Graph1366936733677->SetMinimum(0.3157895);
   Graph_Graph_Graph_Graph1366936733677->SetMaximum(17.64294);
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
   Aplanarity_1->Range(-0.1012658,-1.215253,0.5316456,4.701914);
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
   hframe__1109->SetMaximum(22227.15);
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
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMinimum(1.250197);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMaximum(5000.789);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,62.04451);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,108.6751);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,98.74319);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,78.58093);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,61.65111);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,50.28223);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,36.2757);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,28.51289);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,21.01321);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,14.84228);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,11.56433);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,7.056047);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,5.536472);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,3.585069);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,2.928433);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,1.156733);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.7016249);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.3121664);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.3231175);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.09386126);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.03219737);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.005504885);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.008790523);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.001649037);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,3.252639);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,4.155128);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,3.902766);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,3.342);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.811333);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.946071);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.08082);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.736283);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.231189);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.123273);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.044897);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.966708);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.6410276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.5614707);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.6031931);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.185143);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.1434887);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.1941823);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.1871369);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.01727845);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.009001902);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.003096601);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.003967655);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.001568009);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(451608);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,704.775);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1446.542);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1362.431);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1116.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,861.6787);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,623.9054);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,466.5984);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,333.4365);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,240.4308);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,168.4007);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,118.7804);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,84.88165);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,56.42773);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,37.51249);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,26.21408);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,15.84652);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,9.046624);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,4.417686);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,3.352234);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1.486045);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.7661208);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.3139962);
   TT_stack_2_stack_2_stack_2->SetBinError(1,6.626119);
   TT_stack_2_stack_2_stack_2->SetBinError(2,9.462578);
   TT_stack_2_stack_2_stack_2->SetBinError(3,9.189631);
   TT_stack_2_stack_2_stack_2->SetBinError(4,8.318384);
   TT_stack_2_stack_2_stack_2->SetBinError(5,7.292493);
   TT_stack_2_stack_2_stack_2->SetBinError(6,6.199017);
   TT_stack_2_stack_2_stack_2->SetBinError(7,5.362048);
   TT_stack_2_stack_2_stack_2->SetBinError(8,4.545635);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.861119);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.230082);
   TT_stack_2_stack_2_stack_2->SetBinError(11,2.696216);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.30091);
   TT_stack_2_stack_2_stack_2->SetBinError(13,1.85585);
   TT_stack_2_stack_2_stack_2->SetBinError(14,1.526654);
   TT_stack_2_stack_2_stack_2->SetBinError(15,1.273916);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.9966441);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.7552104);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.5216342);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.443135);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.3018176);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.214463);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.1443429);
   TT_stack_2_stack_2_stack_2->SetEntries(133616);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,969.319);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1570.276);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,1286.197);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,950.1747);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,672.0775);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,478.1219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,334.3962);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,220.5025);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,158.7909);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,120.9499);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,73.04976);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,85.83003);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,19.18328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,37.61889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,21.54206);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,8.026235);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,7.818078);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,5.852753);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,2.024647);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,-1.285458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,0.1730658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.8614944);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,-0.1041745);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,37.45117);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,48.72991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,45.11877);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,39.38394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,34.10244);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,28.8399);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,24.58593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,20.60181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,17.59473);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,15.14003);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,12.58699);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,11.53995);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,7.024296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,8.025583);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,6.030608);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,4.468267);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,3.783913);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,3.624468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,1.761744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.3456955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.9044908);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.8665658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.07350125);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4622.14);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(1,50.17905);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(2,129.8816);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(3,129.041);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(4,92.08701);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(5,64.28851);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(6,45.71204);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(7,29.68228);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(8,20.63796);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(9,12.10451);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(10,9.301391);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(11,7.840901);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(12,3.723254);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(13,3.310486);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(14,2.265169);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(15,1.742046);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(16,0.8892066);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(17,0.7664009);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(18,0.1457826);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(19,0.2576204);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(20,0.0135899);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(21,0.05295091);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(22,0.02445864);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(23,-0.020558);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(1,2.082951);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(2,3.386877);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(3,3.363377);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(4,2.966507);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(5,2.499637);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(6,2.128262);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(7,1.79891);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(8,1.499864);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(9,1.240822);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(10,1.039631);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(11,0.8687675);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(12,0.6982211);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(13,0.5925479);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(14,0.4778339);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(15,0.390343);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(16,0.2959805);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(17,0.2354597);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(18,0.1696258);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(19,0.1266799);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(20,0.08894686);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(21,0.07309481);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(22,0.03637167);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(23,0.020558);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetEntries(120993);
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
   1736.139,
   3125.493,
   2747.371,
   2145.096,
   1595.407,
   1152.31,
   837.2703,
   582.4518,
   420.2349,
   304.1928,
   203.3945,
   177.7677,
   81.14748,
   78.71645,
   50.68457,
   25.02949,
   17.56633,
   10.5826,
   5.699999,
   0.2944477,
   0.9713839,
   1.180995,
   -0.095384,
   0.001649037,
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
   38.17166,
   49.81375,
   46.21022,
   40.39133,
   34.98658,
   29.64536,
   25.24974,
   21.16866,
   18.15106,
   15.52146,
   12.91486,
   11.80675,
   7.293547,
   8.188767,
   6.193136,
   4.581811,
   3.861209,
   3.666957,
   1.826234,
   0.4592361,
   0.9296123,
   0.8785106,
   0.07360826,
   0.001568009,
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
   38.17166,
   49.81375,
   46.21022,
   40.39133,
   34.98658,
   29.64536,
   25.24974,
   21.16866,
   18.15106,
   15.52146,
   12.91486,
   11.80675,
   7.293547,
   8.188767,
   6.193136,
   4.581811,
   3.861209,
   3.666957,
   1.826234,
   0.4592361,
   0.9296123,
   0.8785106,
   0.07360826,
   0.001568009,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMinimum(3.492841);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMaximum(3492.841);
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
   Data__1111->SetBinContent(1,1722);
   Data__1111->SetBinContent(2,3079);
   Data__1111->SetBinContent(3,2762);
   Data__1111->SetBinContent(4,2119);
   Data__1111->SetBinContent(5,1618);
   Data__1111->SetBinContent(6,1204);
   Data__1111->SetBinContent(7,871);
   Data__1111->SetBinContent(8,625);
   Data__1111->SetBinContent(9,443);
   Data__1111->SetBinContent(10,345);
   Data__1111->SetBinContent(11,212);
   Data__1111->SetBinContent(12,161);
   Data__1111->SetBinContent(13,106);
   Data__1111->SetBinContent(14,76);
   Data__1111->SetBinContent(15,48);
   Data__1111->SetBinContent(16,35);
   Data__1111->SetBinContent(17,14);
   Data__1111->SetBinContent(18,10);
   Data__1111->SetBinContent(19,4);
   Data__1111->SetBinContent(20,3);
   Data__1111->SetBinContent(21,3);
   Data__1111->SetBinError(1,41.49699);
   Data__1111->SetBinError(2,55.48874);
   Data__1111->SetBinError(3,52.55473);
   Data__1111->SetBinError(4,46.0326);
   Data__1111->SetBinError(5,40.22437);
   Data__1111->SetBinError(6,34.6987);
   Data__1111->SetBinError(7,29.51271);
   Data__1111->SetBinError(8,25);
   Data__1111->SetBinError(9,21.04757);
   Data__1111->SetBinError(10,18.57418);
   Data__1111->SetBinError(11,14.56022);
   Data__1111->SetBinError(12,12.68858);
   Data__1111->SetBinError(13,10.29563);
   Data__1111->SetBinError(14,8.717798);
   Data__1111->SetBinError(15,6.928203);
   Data__1111->SetBinError(16,5.91608);
   Data__1111->SetBinError(17,3.741657);
   Data__1111->SetBinError(18,3.162278);
   Data__1111->SetBinError(19,2);
   Data__1111->SetBinError(20,1.732051);
   Data__1111->SetBinError(21,1.732051);
   Data__1111->SetEntries(15464);
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
   hframe_copy__1112->SetMaximum(22227.15);
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
   hframe_copy__1113->SetMaximum(22227.15);
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
