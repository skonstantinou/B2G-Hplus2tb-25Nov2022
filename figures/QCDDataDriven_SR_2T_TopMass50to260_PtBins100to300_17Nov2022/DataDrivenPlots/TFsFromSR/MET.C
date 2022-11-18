void MET()
{
//=========Macro generated from canvas: MET/MET
//=========  (Fri Nov 18 13:29:19 2022) by ROOT version 6.20/02
   TCanvas *MET = new TCanvas("MET", "MET",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MET->SetHighLightColor(2);
   MET->Range(0,0,1,1);
   MET->SetFillColor(0);
   MET->SetBorderMode(0);
   MET->SetBorderSize(2);
   MET->SetTickx(1);
   MET->SetTicky(1);
   MET->SetLeftMargin(0.16);
   MET->SetRightMargin(0.05);
   MET->SetTopMargin(0.06);
   MET->SetBottomMargin(0.13);
   MET->SetFrameFillStyle(0);
   MET->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MET_2
   TPad *MET_2 = new TPad("MET_2", "MET_2",0,0,1,0.304);
   MET_2->Draw();
   MET_2->cd();
   MET_2->Range(-60.75949,-0.428,318.9873,1.7);
   MET_2->SetFillColor(0);
   MET_2->SetFillStyle(4000);
   MET_2->SetBorderMode(0);
   MET_2->SetBorderSize(2);
   MET_2->SetTickx(1);
   MET_2->SetTicky(1);
   MET_2->SetLeftMargin(0.16);
   MET_2->SetRightMargin(0.05);
   MET_2->SetTopMargin(0);
   MET_2->SetBottomMargin(0.3421053);
   MET_2->SetFrameFillStyle(0);
   MET_2->SetFrameBorderMode(0);
   MET_2->SetFrameFillStyle(0);
   MET_2->SetFrameBorderMode(0);
   
   TH1F *hframe__918 = new TH1F("hframe__918","",1000,0,300);
   hframe__918->SetMinimum(0.3);
   hframe__918->SetMaximum(1.7);
   hframe__918->SetDirectory(0);
   hframe__918->SetStats(0);
   hframe__918->SetLineStyle(0);
   hframe__918->SetMarkerStyle(20);
   hframe__918->GetXaxis()->SetTitle("E_{T}^{miss} (GeV)");
   hframe__918->GetXaxis()->SetNdivisions(8);
   hframe__918->GetXaxis()->SetLabelFont(43);
   hframe__918->GetXaxis()->SetLabelOffset(0.007);
   hframe__918->GetXaxis()->SetLabelSize(27);
   hframe__918->GetXaxis()->SetTitleSize(33);
   hframe__918->GetXaxis()->SetTitleOffset(2.960526);
   hframe__918->GetXaxis()->SetTitleFont(43);
   hframe__918->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__918->GetYaxis()->SetNdivisions(505);
   hframe__918->GetYaxis()->SetLabelFont(43);
   hframe__918->GetYaxis()->SetLabelOffset(0.007);
   hframe__918->GetYaxis()->SetLabelSize(21);
   hframe__918->GetYaxis()->SetTitleSize(33);
   hframe__918->GetYaxis()->SetTitleOffset(1.5625);
   hframe__918->GetYaxis()->SetTitleFont(43);
   hframe__918->GetZaxis()->SetLabelFont(43);
   hframe__918->GetZaxis()->SetLabelOffset(0.007);
   hframe__918->GetZaxis()->SetLabelSize(27);
   hframe__918->GetZaxis()->SetTitleSize(33);
   hframe__918->GetZaxis()->SetTitleOffset(1);
   hframe__918->GetZaxis()->SetTitleFont(43);
   hframe__918->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3567[9] = {
   15,
   35,
   65,
   90,
   110,
   130,
   160,
   200,
   260};
   Double_t BackgroundStatSystError_fy3567[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3567[9] = {
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   20,
   40};
   Double_t BackgroundStatSystError_fely3567[9] = {
   0.01549915,
   0.01152061,
   0.0146489,
   0.02229772,
   0.0373527,
   0.06047762,
   0.1027111,
   0.1164982,
   0.1839064};
   Double_t BackgroundStatSystError_fehx3567[9] = {
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   20,
   40};
   Double_t BackgroundStatSystError_fehy3567[9] = {
   0.01549915,
   0.01152061,
   0.0146489,
   0.02229772,
   0.0373527,
   0.06047762,
   0.1027111,
   0.1164982,
   0.1839064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,BackgroundStatSystError_fx3567,BackgroundStatSystError_fy3567,BackgroundStatSystError_felx3567,BackgroundStatSystError_fehx3567,BackgroundStatSystError_fely3567,BackgroundStatSystError_fehy3567);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1355;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError355935633567 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError355935633567","Graph",100,0,329);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->SetMinimum(0.7793124);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->SetMaximum(1.220688);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError355935633567->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError355935633567);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3568[14] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   90,
   110,
   130,
   160,
   200,
   260};
   Double_t BackgroundStatError_fy3568[14] = {
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
   Double_t BackgroundStatError_felx3568[14] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   20,
   40};
   Double_t BackgroundStatError_fely3568[14] = {
   0,
   0.01549915,
   0,
   0.01152061,
   0,
   0,
   0.0146489,
   0,
   0.02229772,
   0.0373527,
   0.06047762,
   0.1027111,
   0.1164982,
   0.1839064};
   Double_t BackgroundStatError_fehx3568[14] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   20,
   40};
   Double_t BackgroundStatError_fehy3568[14] = {
   0,
   0.01549915,
   0,
   0.01152061,
   0,
   0,
   0.0146489,
   0,
   0.02229772,
   0.0373527,
   0.06047762,
   0.1027111,
   0.1164982,
   0.1839064};
   grae = new TGraphAsymmErrors(14,BackgroundStatError_fx3568,BackgroundStatError_fy3568,BackgroundStatError_felx3568,BackgroundStatError_fehx3568,BackgroundStatError_fely3568,BackgroundStatError_fehy3568);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1354;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError356035643568 = new TH1F("Graph_Graph_Graph_BackgroundStatError356035643568","Graph",100,0,330);
   Graph_Graph_Graph_BackgroundStatError356035643568->SetMinimum(0.7793124);
   Graph_Graph_Graph_BackgroundStatError356035643568->SetMaximum(1.220688);
   Graph_Graph_Graph_BackgroundStatError356035643568->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError356035643568->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError356035643568->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError356035643568->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError356035643568->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError356035643568->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError356035643568);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx132[2] = {
   0,
   300};
   Double_t Graph0_fy132[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx132,Graph0_fy132);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0130131132 = new TH1F("Graph_Graph_Graph_Graph0130131132","Graph",100,0,330);
   Graph_Graph_Graph_Graph0130131132->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0130131132->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0130131132->SetDirectory(0);
   Graph_Graph_Graph_Graph0130131132->SetStats(0);
   Graph_Graph_Graph_Graph0130131132->SetLineStyle(0);
   Graph_Graph_Graph_Graph0130131132->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0130131132->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0130131132->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0130131132->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0130131132->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0130131132->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0130131132->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0130131132->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0130131132->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0130131132->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0130131132->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0130131132->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0130131132->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0130131132->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0130131132->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0130131132->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0130131132->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0130131132->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0130131132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0130131132->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0130131132);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3569[9] = {
   15,
   35,
   65,
   90,
   110,
   130,
   160,
   200,
   260};
   Double_t Graph1_fy3569[9] = {
   0.9455267,
   0.9914668,
   1.05556,
   1.111828,
   1.028099,
   0.949557,
   0.9628319,
   0.9308412,
   1.276228};
   Double_t Graph1_felx3569[9] = {
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   20,
   40};
   Double_t Graph1_fely3569[9] = {
   0.01713484,
   0.01305013,
   0.0171032,
   0.02630856,
   0.04112396,
   0.06194227,
   0.106327,
   0.117275,
   0.1946229};
   Double_t Graph1_fehx3569[9] = {
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   20,
   40};
   Double_t Graph1_fehy3569[9] = {
   0.01713484,
   0.01305013,
   0.0171032,
   0.02630856,
   0.04112396,
   0.06194227,
   0.106327,
   0.117275,
   0.1946229};
   grae = new TGraphAsymmErrors(9,Graph1_fx3569,Graph1_fy3569,Graph1_felx3569,Graph1_fehx3569,Graph1_fely3569,Graph1_fehy3569);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1356135653569 = new TH1F("Graph_Graph_Graph_Graph1356135653569","Graph",100,0,329);
   Graph_Graph_Graph_Graph1356135653569->SetMinimum(0.7478378);
   Graph_Graph_Graph_Graph1356135653569->SetMaximum(1.536579);
   Graph_Graph_Graph_Graph1356135653569->SetDirectory(0);
   Graph_Graph_Graph_Graph1356135653569->SetStats(0);
   Graph_Graph_Graph_Graph1356135653569->SetLineStyle(0);
   Graph_Graph_Graph_Graph1356135653569->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1356135653569->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1356135653569->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1356135653569->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1356135653569->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1356135653569->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1356135653569->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1356135653569->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1356135653569->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1356135653569->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1356135653569->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1356135653569->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1356135653569->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1356135653569->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1356135653569->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1356135653569->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1356135653569->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1356135653569->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1356135653569->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1356135653569->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1356135653569->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1356135653569);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__919 = new TH1F("hframe_copy__919","",1000,0,300);
   hframe_copy__919->SetMinimum(0.3);
   hframe_copy__919->SetMaximum(1.7);
   hframe_copy__919->SetDirectory(0);
   hframe_copy__919->SetStats(0);
   hframe_copy__919->SetLineStyle(0);
   hframe_copy__919->SetMarkerStyle(20);
   hframe_copy__919->GetXaxis()->SetTitle("E_{T}^{miss} (GeV)");
   hframe_copy__919->GetXaxis()->SetNdivisions(8);
   hframe_copy__919->GetXaxis()->SetLabelFont(43);
   hframe_copy__919->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__919->GetXaxis()->SetLabelSize(27);
   hframe_copy__919->GetXaxis()->SetTitleSize(33);
   hframe_copy__919->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__919->GetXaxis()->SetTitleFont(43);
   hframe_copy__919->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__919->GetYaxis()->SetNdivisions(505);
   hframe_copy__919->GetYaxis()->SetLabelFont(43);
   hframe_copy__919->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__919->GetYaxis()->SetLabelSize(21);
   hframe_copy__919->GetYaxis()->SetTitleSize(33);
   hframe_copy__919->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__919->GetYaxis()->SetTitleFont(43);
   hframe_copy__919->GetZaxis()->SetLabelFont(43);
   hframe_copy__919->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__919->GetZaxis()->SetLabelSize(27);
   hframe_copy__919->GetZaxis()->SetTitleSize(33);
   hframe_copy__919->GetZaxis()->SetTitleOffset(1);
   hframe_copy__919->GetZaxis()->SetTitleFont(43);
   hframe_copy__919->Draw("sameaxis");
   MET_2->Modified();
   MET->cd();
  
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
   MET->cd();
  
// ------------>Primitives in pad: MET_1
   TPad *MET_1 = new TPad("MET_1", "MET_1",0,0.2897959,1,1);
   MET_1->Draw();
   MET_1->cd();
   MET_1->Range(-60.75949,-2.122068,318.9873,3.981324);
   MET_1->SetFillColor(0);
   MET_1->SetFillStyle(4000);
   MET_1->SetBorderMode(0);
   MET_1->SetBorderSize(2);
   MET_1->SetLogy();
   MET_1->SetTickx(1);
   MET_1->SetTicky(1);
   MET_1->SetLeftMargin(0.16);
   MET_1->SetRightMargin(0.05);
   MET_1->SetTopMargin(0.06);
   MET_1->SetBottomMargin(0.02);
   MET_1->SetFrameFillStyle(0);
   MET_1->SetFrameBorderMode(0);
   MET_1->SetFrameFillStyle(0);
   MET_1->SetFrameBorderMode(0);
   
   TH1F *hframe__920 = new TH1F("hframe__920","",1000,0,300);
   hframe__920->SetMinimum(0.01);
   hframe__920->SetMaximum(4122.123);
   hframe__920->SetDirectory(0);
   hframe__920->SetStats(0);
   hframe__920->SetLineStyle(0);
   hframe__920->SetMarkerStyle(20);
   hframe__920->GetXaxis()->SetNdivisions(8);
   hframe__920->GetXaxis()->SetLabelFont(43);
   hframe__920->GetXaxis()->SetLabelOffset(0.007);
   hframe__920->GetXaxis()->SetLabelSize(0);
   hframe__920->GetXaxis()->SetTitleSize(0);
   hframe__920->GetXaxis()->SetTitleOffset(0.9);
   hframe__920->GetXaxis()->SetTitleFont(43);
   hframe__920->GetYaxis()->SetTitle("< Events / 10-80 GeV >");
   hframe__920->GetYaxis()->SetLabelFont(43);
   hframe__920->GetYaxis()->SetLabelOffset(0.007);
   hframe__920->GetYaxis()->SetLabelSize(27);
   hframe__920->GetYaxis()->SetTitleSize(33);
   hframe__920->GetYaxis()->SetTitleOffset(1.5625);
   hframe__920->GetYaxis()->SetTitleFont(43);
   hframe__920->GetZaxis()->SetLabelFont(43);
   hframe__920->GetZaxis()->SetLabelOffset(0.007);
   hframe__920->GetZaxis()->SetLabelSize(27);
   hframe__920->GetZaxis()->SetTitleSize(33);
   hframe__920->GetZaxis()->SetTitleOffset(1);
   hframe__920->GetZaxis()->SetTitleFont(43);
   hframe__920->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis481[15] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 100, 120, 140, 180, 220, 300}; 
   
   TH1F *StackedMCstackHist_stack_130_stack_131_stack_132 = new TH1F("StackedMCstackHist_stack_130_stack_131_stack_132","StackedMCstackHist",14, xAxis481);
   StackedMCstackHist_stack_130_stack_131_stack_132->SetMinimum(0.2328671);
   StackedMCstackHist_stack_130_stack_131_stack_132->SetMaximum(931.4685);
   StackedMCstackHist_stack_130_stack_131_stack_132->SetDirectory(0);
   StackedMCstackHist_stack_130_stack_131_stack_132->SetStats(0);
   StackedMCstackHist_stack_130_stack_131_stack_132->SetLineStyle(0);
   StackedMCstackHist_stack_130_stack_131_stack_132->SetMarkerStyle(20);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_130_stack_131_stack_132->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_130_stack_131_stack_132);
   
   Double_t xAxis482[15] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 100, 120, 140, 180, 220, 300}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_METInclusive",14, xAxis482);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,11.88843);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,22.4057);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,13.95506);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,3.101897);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1.378415);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.552731);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.1045172);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.114592);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.02512371);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.4243012);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.5646617);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.4729727);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.1475428);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.09551084);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.0646612);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.01980748);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.0204317);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.003415951);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3777.446);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,40);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis483[15] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 100, 120, 140, 180, 220, 300}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_METInclusive",14, xAxis483);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,172.8674);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,295.1028);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,182.7211);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,37.15244);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,12.7231);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,4.664306);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,0.9758024);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,0.7324881);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.2194282);
   TT_stack_2_stack_2_stack_2->SetBinError(2,1.033145);
   TT_stack_2_stack_2_stack_2->SetBinError(4,1.352937);
   TT_stack_2_stack_2_stack_2->SetBinError(7,1.067114);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.3406096);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.1969055);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.1168588);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.03723857);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.0308156);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.01142362);
   TT_stack_2_stack_2_stack_2->SetEntries(118853.7);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,40);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis484[15] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 100, 120, 140, 180, 220, 300}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_METInclusive",14, xAxis484);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,137.2869);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,264.6593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,164.175);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,40.0638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,16.29439);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,7.157155);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1.048816);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,0.8449379);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,0.1766111);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,4.864826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,6.544738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,5.155591);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.752022);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.114078);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.7363478);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.2145798);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.1936184);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.07653131);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4071.037);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,40);
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
   Double_t xAxis485[15] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 100, 120, 140, 180, 220, 300}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__921 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__921","h_SR_METInclusive",14, xAxis485);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinContent(2,10.3986);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinContent(4,19.42115);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinContent(7,14.63249);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinContent(9,4.009593);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinContent(10,1.770978);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinContent(11,1.028025);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinContent(12,0.2304993);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinContent(13,0.239618);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinContent(14,0.05533671);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinError(2,0.2993461);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinError(4,0.4192987);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinError(7,0.373463);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinError(9,0.1403599);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinError(10,0.09965385);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinError(11,0.07039966);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinError(12,0.02583707);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinError(13,0.02467583);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetBinError(14,0.009810318);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetEntries(6083.228);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->GetXaxis()->SetRange(1,40);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__921->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3570[14] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   90,
   110,
   130,
   160,
   200,
   260};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3570[14] = {
   0,
   322.0427,
   0,
   582.1678,
   0,
   0,
   360.8511,
   0,
   80.31815,
   30.3959,
   12.37419,
   2.129136,
   1.692018,
   0.421163};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3570[14] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   20,
   40};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3570[14] = {
   0,
   4.991388,
   0,
   6.706928,
   0,
   0,
   5.286071,
   0,
   1.790911,
   1.135369,
   0.7483617,
   0.2186859,
   0.197117,
   0.07745456};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3570[14] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   20,
   40};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3570[14] = {
   0,
   4.991388,
   0,
   6.706928,
   0,
   0,
   5.286071,
   0,
   1.790911,
   1.135369,
   0.7483617,
   0.2186859,
   0.197117,
   0.07745456};
   grae = new TGraphAsymmErrors(14,BkgSum-SR-Inclusive_sum_errors_fx3570,BkgSum-SR-Inclusive_sum_errors_fy3570,BkgSum-SR-Inclusive_sum_errors_felx3570,BkgSum-SR-Inclusive_sum_errors_fehx3570,BkgSum-SR-Inclusive_sum_errors_fely3570,BkgSum-SR-Inclusive_sum_errors_fehy3570);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1353;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570","Graph",100,0,330);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->SetMinimum(0.6477622);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->SetMaximum(647.7622);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors356235663570->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors356235663570);
   
   grae->Draw("e2 ");
   Double_t xAxis486[15] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 100, 120, 140, 180, 220, 300}; 
   
   TH1F *Data__922 = new TH1F("Data__922","h_SR_METInclusive",14, xAxis486);
   Data__922->SetBinContent(2,304.5);
   Data__922->SetBinContent(4,577.2);
   Data__922->SetBinContent(7,380.9);
   Data__922->SetBinContent(9,89.3);
   Data__922->SetBinContent(10,31.25);
   Data__922->SetBinContent(11,11.75);
   Data__922->SetBinContent(12,2.05);
   Data__922->SetBinContent(13,1.575);
   Data__922->SetBinContent(14,0.5375);
   Data__922->SetBinError(2,5.518152);
   Data__922->SetBinError(4,7.597368);
   Data__922->SetBinError(7,6.17171);
   Data__922->SetBinError(9,2.113055);
   Data__922->SetBinError(10,1.25);
   Data__922->SetBinError(11,0.7664855);
   Data__922->SetBinError(12,0.2263846);
   Data__922->SetBinError(13,0.1984313);
   Data__922->SetBinError(14,0.08196798);
   Data__922->SetEntries(14720.17);
   Data__922->SetDirectory(0);
   Data__922->SetFillStyle(3001);
   Data__922->SetLineWidth(2);
   Data__922->SetMarkerStyle(20);
   Data__922->SetMarkerSize(1.2);
   Data__922->GetXaxis()->SetRange(1,40);
   Data__922->GetXaxis()->SetLabelFont(42);
   Data__922->GetXaxis()->SetTitleOffset(1);
   Data__922->GetXaxis()->SetTitleFont(42);
   Data__922->GetYaxis()->SetLabelFont(42);
   Data__922->GetYaxis()->SetTitleFont(42);
   Data__922->GetZaxis()->SetLabelFont(42);
   Data__922->GetZaxis()->SetTitleOffset(1);
   Data__922->GetZaxis()->SetTitleFont(42);
   Data__922->Draw("EP same");
   
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

   ci = 1353;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1353;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__923 = new TH1F("hframe_copy__923","",1000,0,300);
   hframe_copy__923->SetMinimum(0.01);
   hframe_copy__923->SetMaximum(4122.123);
   hframe_copy__923->SetDirectory(0);
   hframe_copy__923->SetStats(0);
   hframe_copy__923->SetLineStyle(0);
   hframe_copy__923->SetMarkerStyle(20);
   hframe_copy__923->GetXaxis()->SetNdivisions(8);
   hframe_copy__923->GetXaxis()->SetLabelFont(43);
   hframe_copy__923->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__923->GetXaxis()->SetLabelSize(0);
   hframe_copy__923->GetXaxis()->SetTitleSize(0);
   hframe_copy__923->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__923->GetXaxis()->SetTitleFont(43);
   hframe_copy__923->GetYaxis()->SetTitle("< Events / 10-80 GeV >");
   hframe_copy__923->GetYaxis()->SetLabelFont(43);
   hframe_copy__923->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__923->GetYaxis()->SetLabelSize(27);
   hframe_copy__923->GetYaxis()->SetTitleSize(33);
   hframe_copy__923->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__923->GetYaxis()->SetTitleFont(43);
   hframe_copy__923->GetZaxis()->SetLabelFont(43);
   hframe_copy__923->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__923->GetZaxis()->SetLabelSize(27);
   hframe_copy__923->GetZaxis()->SetTitleSize(33);
   hframe_copy__923->GetZaxis()->SetTitleOffset(1);
   hframe_copy__923->GetZaxis()->SetTitleFont(43);
   hframe_copy__923->Draw("sameaxis");
   
   TH1F *hframe_copy__924 = new TH1F("hframe_copy__924","",1000,0,300);
   hframe_copy__924->SetMinimum(0.01);
   hframe_copy__924->SetMaximum(4122.123);
   hframe_copy__924->SetDirectory(0);
   hframe_copy__924->SetStats(0);
   hframe_copy__924->SetLineStyle(0);
   hframe_copy__924->SetMarkerStyle(20);
   hframe_copy__924->GetXaxis()->SetNdivisions(8);
   hframe_copy__924->GetXaxis()->SetLabelFont(43);
   hframe_copy__924->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__924->GetXaxis()->SetLabelSize(0);
   hframe_copy__924->GetXaxis()->SetTitleSize(0);
   hframe_copy__924->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__924->GetXaxis()->SetTitleFont(43);
   hframe_copy__924->GetYaxis()->SetTitle("< Events / 10-80 GeV >");
   hframe_copy__924->GetYaxis()->SetLabelFont(43);
   hframe_copy__924->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__924->GetYaxis()->SetLabelSize(27);
   hframe_copy__924->GetYaxis()->SetTitleSize(33);
   hframe_copy__924->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__924->GetYaxis()->SetTitleFont(43);
   hframe_copy__924->GetZaxis()->SetLabelFont(43);
   hframe_copy__924->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__924->GetZaxis()->SetLabelSize(27);
   hframe_copy__924->GetZaxis()->SetTitleSize(33);
   hframe_copy__924->GetZaxis()->SetTitleOffset(1);
   hframe_copy__924->GetZaxis()->SetTitleFont(43);
   hframe_copy__924->Draw("sameaxis");
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
   MET_1->Modified();
   MET->cd();
   MET->Modified();
   MET->cd();
   MET->SetSelected(MET);
}
