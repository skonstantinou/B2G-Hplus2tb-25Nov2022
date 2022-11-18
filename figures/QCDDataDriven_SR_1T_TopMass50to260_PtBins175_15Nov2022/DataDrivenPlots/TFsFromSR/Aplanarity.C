void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Fri Nov 18 13:29:40 2022) by ROOT version 6.20/02
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
   0.02984104,
   0.02347047,
   0.02565837,
   0.02937126,
   0.03296836,
   0.03828918,
   0.04671658,
   0.05371741,
   0.065396,
   0.08052316,
   0.09493458,
   0.1033138,
   0.127412,
   0.149503,
   0.2260544,
   0.2381312,
   0.289835,
   0.4498415,
   0.6487015,
   1.218733,
   -0.7997484,
   0.7509608,
   -1.03345};
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
   0.02984104,
   0.02347047,
   0.02565837,
   0.02937126,
   0.03296836,
   0.03828918,
   0.04671658,
   0.05371741,
   0.065396,
   0.08052316,
   0.09493458,
   0.1033138,
   0.127412,
   0.149503,
   0.2260544,
   0.2381312,
   0.289835,
   0.4498415,
   0.6487015,
   1.218733,
   -0.7997484,
   0.7509608,
   -1.03345};
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
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMinimum(-0.46248);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMaximum(2.46248);
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
   0.02984104,
   0.02347047,
   0.02565837,
   0.02937126,
   0.03296836,
   0.03828918,
   0.04671658,
   0.05371741,
   0.065396,
   0.08052316,
   0.09493458,
   0.1033138,
   0.127412,
   0.149503,
   0.2260544,
   0.2381312,
   0.289835,
   0.4498415,
   0.6487015,
   1.218733,
   -0.7997484,
   0.7509608,
   -1.03345,
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
   0.02984104,
   0.02347047,
   0.02565837,
   0.02937126,
   0.03296836,
   0.03828918,
   0.04671658,
   0.05371741,
   0.065396,
   0.08052316,
   0.09493458,
   0.1033138,
   0.127412,
   0.149503,
   0.2260544,
   0.2381312,
   0.289835,
   0.4498415,
   0.6487015,
   1.218733,
   -0.7997484,
   0.7509608,
   -1.03345,
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
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMinimum(-0.46248);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMaximum(2.46248);
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
   
   Double_t Graph1_fx3677[20] = {
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
   0.39};
   Double_t Graph1_fy3677[20] = {
   1.079345,
   1.005413,
   1.028956,
   1.122044,
   1.013748,
   0.9561388,
   1.081431,
   1.147834,
   0.944128,
   1.211258,
   0.979978,
   0.8372782,
   0.8503631,
   1.079818,
   2.391531,
   0.389555,
   1.462925,
   1.388554,
   0.9046098,
   1.198806};
   Double_t Graph1_felx3677[20] = {
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
   Double_t Graph1_fely3677[20] = {
   0.03397934,
   0.02557053,
   0.02802541,
   0.03367817,
   0.03622839,
   0.03980458,
   0.05233409,
   0.06197721,
   0.06726634,
   0.09289921,
   0.1005436,
   0.09867419,
   0.1227393,
   0.1627886,
   0.3781342,
   0.1472379,
   0.3777257,
   0.524824,
   0.6396557,
   1.198806};
   Double_t Graph1_fehx3677[20] = {
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
   Double_t Graph1_fehy3677[20] = {
   0.03397934,
   0.02557053,
   0.02802541,
   0.03367817,
   0.03622839,
   0.03980458,
   0.05233409,
   0.06197721,
   0.06726634,
   0.09289921,
   0.1005436,
   0.09867419,
   0.1227393,
   0.1627886,
   0.3781342,
   0.1472379,
   0.3777257,
   0.524824,
   0.6396557,
   1.198806};
   grae = new TGraphAsymmErrors(20,Graph1_fx3677,Graph1_fy3677,Graph1_felx3677,Graph1_fehx3677,Graph1_fely3677,Graph1_fehy3677);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1366936733677 = new TH1F("Graph_Graph_Graph_Graph1366936733677","Graph",100,0,0.44);
   Graph_Graph_Graph_Graph1366936733677->SetMinimum(0);
   Graph_Graph_Graph_Graph1366936733677->SetMaximum(3.046632);
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
   Aplanarity_1->Range(-0.1012658,-1.208626,0.5316456,4.377187);
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
   hframe__1109->SetMaximum(11016.36);
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
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMinimum(0.6150706);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMaximum(2460.282);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,24.89672);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,41.98779);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,36.0835);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,29.21682);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,24.31506);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,15.49769);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,10.24125);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,7.91728);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,4.826825);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,4.255729);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,3.410079);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,2.296354);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,1.335569);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1.224843);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.4686752);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.2156655);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.4704725);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.3195686);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.03561023);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.04481839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.03339839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.004726946);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.0016245);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,2.095408);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.688579);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.428437);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.168128);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.932518);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.411906);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.9674688);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.8701778);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.5693115);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.5227493);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.5199305);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.3394364);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.2736191);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.3005677);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.09360374);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.1279902);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.1762816);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.23856);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.01233117);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.01094276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.02964395);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.003408831);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.0016245);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(105982);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,258.7068);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,467.2816);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,436.179);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,357.4731);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,282.7007);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,206.7394);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,154.9795);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,112.5497);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,81.53468);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,59.72588);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,41.65433);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,28.89008);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,20.60344);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,13.6218);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,9.829854);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,6.116231);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,3.984291);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1.642776);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.9881492);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.4013658);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.06048745);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.2284777);
   TT_stack_2_stack_2_stack_2->SetBinError(1,4.083422);
   TT_stack_2_stack_2_stack_2->SetBinError(2,5.470462);
   TT_stack_2_stack_2_stack_2->SetBinError(3,5.277647);
   TT_stack_2_stack_2_stack_2->SetBinError(4,4.760469);
   TT_stack_2_stack_2_stack_2->SetBinError(5,4.23644);
   TT_stack_2_stack_2_stack_2->SetBinError(6,3.632721);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.130748);
   TT_stack_2_stack_2_stack_2->SetBinError(8,2.661765);
   TT_stack_2_stack_2_stack_2->SetBinError(9,2.269021);
   TT_stack_2_stack_2_stack_2->SetBinError(10,1.925203);
   TT_stack_2_stack_2_stack_2->SetBinError(11,1.636997);
   TT_stack_2_stack_2_stack_2->SetBinError(12,1.345351);
   TT_stack_2_stack_2_stack_2->SetBinError(13,1.136971);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.9367819);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.7744476);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.6225423);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.5080539);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.3225442);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.244161);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.1537323);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.06048745);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.1178469);
   TT_stack_2_stack_2_stack_2->SetEntries(42874);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,651.2223);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1028.407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,837.803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,602.5758);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,465.3657);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,381.2318);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,229.6266);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,178.3568);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,122.2966);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,76.36841);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,51.87654);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,54.80648);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,34.50747);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,25.90098);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,6.427159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,11.63733);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,5.798666);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,3.078872);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1.187139);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.3879789);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,-0.2612033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,-0.06039206);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,-0.05096322);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,27.51602);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,35.57152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,33.1083);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,28.58124);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,25.03479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,22.77526);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,18.15253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,15.80587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,13.44338);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,11.12396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,9.04135);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,8.775235);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,7.096246);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,6.011925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,3.699567);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,4.231569);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,2.922742);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,2.23198);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,1.413223);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,1.004872);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.1156206);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.0542417);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.05096323);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3687.029);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(1,16.94928);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(2,45.42451);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(3,39.68555);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(4,29.59903);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(5,17.60375);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(6,10.34547);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(7,5.451252);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(8,5.564947);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(9,2.532638);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(10,3.610319);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(11,1.76269);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(12,1.13011);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(13,0.4998182);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(14,0.2864749);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(15,-0.003534451);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(16,0.3535288);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(17,0.04827581);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(18,0.1551652);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(19,0.02031916);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(20,0.0570126);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(1,1.305518);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(2,2.048357);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(3,1.94172);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(4,1.647113);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(5,1.337292);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(6,1.086502);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(7,0.8978842);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(8,0.7162778);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(9,0.5809871);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(10,0.5017919);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(11,0.4016829);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(12,0.3457965);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(13,0.2699319);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(14,0.2099705);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(15,0.1404019);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(16,0.1406481);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(17,0.09542035);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(18,0.08215503);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(19,0.06462743);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(20,0.04043034);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetEntries(35807);
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
   934.8258,
   1537.676,
   1310.065,
   989.2657,
   772.3815,
   603.4689,
   394.8474,
   298.8237,
   208.6581,
   140.35,
   96.94095,
   85.99292,
   56.44648,
   40.74762,
   16.72569,
   17.96922,
   10.25343,
   5.041216,
   2.210898,
   0.834163,
   -0.1673175,
   0.1728126,
   -0.04933872,
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
   27.89617,
   36.08999,
   33.61414,
   29.05599,
   25.46415,
   23.10633,
   18.44592,
   16.05204,
   13.64541,
   11.30143,
   9.203048,
   8.884253,
   7.191959,
   6.091892,
   3.780916,
   4.279032,
   2.971803,
   2.267748,
   1.434213,
   1.016622,
   0.1338119,
   0.1297755,
   0.05098911,
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
   27.89617,
   36.08999,
   33.61414,
   29.05599,
   25.46415,
   23.10633,
   18.44592,
   16.05204,
   13.64541,
   11.30143,
   9.203048,
   8.884253,
   7.191959,
   6.091892,
   3.780916,
   4.279032,
   2.971803,
   2.267748,
   1.434213,
   1.016622,
   0.1338119,
   0.1297755,
   0.05098911,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMinimum(1.731149);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMaximum(1731.149);
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
   Data__1111->SetBinContent(1,1009);
   Data__1111->SetBinContent(2,1546);
   Data__1111->SetBinContent(3,1348);
   Data__1111->SetBinContent(4,1110);
   Data__1111->SetBinContent(5,783);
   Data__1111->SetBinContent(6,577);
   Data__1111->SetBinContent(7,427);
   Data__1111->SetBinContent(8,343);
   Data__1111->SetBinContent(9,197);
   Data__1111->SetBinContent(10,170);
   Data__1111->SetBinContent(11,95);
   Data__1111->SetBinContent(12,72);
   Data__1111->SetBinContent(13,48);
   Data__1111->SetBinContent(14,44);
   Data__1111->SetBinContent(15,40);
   Data__1111->SetBinContent(16,7);
   Data__1111->SetBinContent(17,15);
   Data__1111->SetBinContent(18,7);
   Data__1111->SetBinContent(19,2);
   Data__1111->SetBinContent(20,1);
   Data__1111->SetBinError(1,31.76476);
   Data__1111->SetBinError(2,39.31921);
   Data__1111->SetBinError(3,36.71512);
   Data__1111->SetBinError(4,33.31666);
   Data__1111->SetBinError(5,27.98214);
   Data__1111->SetBinError(6,24.02082);
   Data__1111->SetBinError(7,20.66398);
   Data__1111->SetBinError(8,18.52026);
   Data__1111->SetBinError(9,14.03567);
   Data__1111->SetBinError(10,13.0384);
   Data__1111->SetBinError(11,9.746794);
   Data__1111->SetBinError(12,8.485281);
   Data__1111->SetBinError(13,6.928203);
   Data__1111->SetBinError(14,6.63325);
   Data__1111->SetBinError(15,6.324555);
   Data__1111->SetBinError(16,2.645751);
   Data__1111->SetBinError(17,3.872983);
   Data__1111->SetBinError(18,2.645751);
   Data__1111->SetBinError(19,1.414214);
   Data__1111->SetBinError(20,1);
   Data__1111->SetEntries(7845);
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
   hframe_copy__1112->SetMaximum(11016.36);
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
   hframe_copy__1113->SetMaximum(11016.36);
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
