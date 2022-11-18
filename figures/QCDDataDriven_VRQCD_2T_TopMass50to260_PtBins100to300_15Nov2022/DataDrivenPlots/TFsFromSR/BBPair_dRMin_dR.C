void BBPair_dRMin_dR()
{
//=========Macro generated from canvas: BBPair_dRMin_dR/BBPair_dRMin_dR
//=========  (Fri Nov 18 13:10:23 2022) by ROOT version 6.20/02
   TCanvas *BBPair_dRMin_dR = new TCanvas("BBPair_dRMin_dR", "BBPair_dRMin_dR",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   BBPair_dRMin_dR->SetHighLightColor(2);
   BBPair_dRMin_dR->Range(0,0,1,1);
   BBPair_dRMin_dR->SetFillColor(0);
   BBPair_dRMin_dR->SetBorderMode(0);
   BBPair_dRMin_dR->SetBorderSize(2);
   BBPair_dRMin_dR->SetTickx(1);
   BBPair_dRMin_dR->SetTicky(1);
   BBPair_dRMin_dR->SetLeftMargin(0.16);
   BBPair_dRMin_dR->SetRightMargin(0.05);
   BBPair_dRMin_dR->SetTopMargin(0.06);
   BBPair_dRMin_dR->SetBottomMargin(0.13);
   BBPair_dRMin_dR->SetFrameFillStyle(0);
   BBPair_dRMin_dR->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: BBPair_dRMin_dR_2
   TPad *BBPair_dRMin_dR_2 = new TPad("BBPair_dRMin_dR_2", "BBPair_dRMin_dR_2",0,0,1,0.304);
   BBPair_dRMin_dR_2->Draw();
   BBPair_dRMin_dR_2->cd();
   BBPair_dRMin_dR_2->Range(-1.21519,-0.428,6.379747,1.7);
   BBPair_dRMin_dR_2->SetFillColor(0);
   BBPair_dRMin_dR_2->SetFillStyle(4000);
   BBPair_dRMin_dR_2->SetBorderMode(0);
   BBPair_dRMin_dR_2->SetBorderSize(2);
   BBPair_dRMin_dR_2->SetTickx(1);
   BBPair_dRMin_dR_2->SetTicky(1);
   BBPair_dRMin_dR_2->SetLeftMargin(0.16);
   BBPair_dRMin_dR_2->SetRightMargin(0.05);
   BBPair_dRMin_dR_2->SetTopMargin(0);
   BBPair_dRMin_dR_2->SetBottomMargin(0.3421053);
   BBPair_dRMin_dR_2->SetFrameFillStyle(0);
   BBPair_dRMin_dR_2->SetFrameBorderMode(0);
   BBPair_dRMin_dR_2->SetFrameFillStyle(0);
   BBPair_dRMin_dR_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1254 = new TH1F("hframe__1254","",1000,0,6);
   hframe__1254->SetMinimum(0.3);
   hframe__1254->SetMaximum(1.7);
   hframe__1254->SetDirectory(0);
   hframe__1254->SetStats(0);
   hframe__1254->SetLineStyle(0);
   hframe__1254->SetMarkerStyle(20);
   hframe__1254->GetXaxis()->SetNdivisions(8);
   hframe__1254->GetXaxis()->SetLabelFont(43);
   hframe__1254->GetXaxis()->SetLabelOffset(0.007);
   hframe__1254->GetXaxis()->SetLabelSize(27);
   hframe__1254->GetXaxis()->SetTitleSize(33);
   hframe__1254->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1254->GetXaxis()->SetTitleFont(43);
   hframe__1254->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1254->GetYaxis()->SetNdivisions(505);
   hframe__1254->GetYaxis()->SetLabelFont(43);
   hframe__1254->GetYaxis()->SetLabelOffset(0.007);
   hframe__1254->GetYaxis()->SetLabelSize(21);
   hframe__1254->GetYaxis()->SetTitleSize(33);
   hframe__1254->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1254->GetYaxis()->SetTitleFont(43);
   hframe__1254->GetZaxis()->SetLabelFont(43);
   hframe__1254->GetZaxis()->SetLabelOffset(0.007);
   hframe__1254->GetZaxis()->SetLabelSize(27);
   hframe__1254->GetZaxis()->SetTitleSize(33);
   hframe__1254->GetZaxis()->SetTitleOffset(1);
   hframe__1254->GetZaxis()->SetTitleFont(43);
   hframe__1254->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3759[6] = {
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85};
   Double_t BackgroundStatSystError_fy3759[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3759[6] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fely3759[6] = {
   -2.544762,
   0.02681929,
   0.01782931,
   0.01724048,
   0.0171691,
   0.01734456};
   Double_t BackgroundStatSystError_fehx3759[6] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fehy3759[6] = {
   -2.544762,
   0.02681929,
   0.01782931,
   0.01724048,
   0.0171691,
   0.01734456};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,BackgroundStatSystError_fx3759,BackgroundStatSystError_fy3759,BackgroundStatSystError_felx3759,BackgroundStatSystError_fehx3759,BackgroundStatSystError_fely3759,BackgroundStatSystError_fehy3759);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1403;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError375137553759 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError375137553759","Graph",100,0.24,0.96);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->SetMinimum(0.9678168);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->SetMaximum(1.032183);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError375137553759->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError375137553759);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3760[60] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.05,
   3.15,
   3.25,
   3.35,
   3.45,
   3.55,
   3.65,
   3.75,
   3.85,
   3.95,
   4.05,
   4.15,
   4.25,
   4.35,
   4.45,
   4.55,
   4.65,
   4.75,
   4.85,
   4.95,
   5.05,
   5.15,
   5.25,
   5.35,
   5.45,
   5.55,
   5.65,
   5.75,
   5.85,
   5.95};
   Double_t BackgroundStatError_fy3760[60] = {
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
   Double_t BackgroundStatError_felx3760[60] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatError_fely3760[60] = {
   0,
   0,
   0,
   -2.544762,
   0.02681929,
   0.01782931,
   0.01724048,
   0.0171691,
   0.01734456,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BackgroundStatError_fehx3760[60] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatError_fehy3760[60] = {
   0,
   0,
   0,
   -2.544762,
   0.02681929,
   0.01782931,
   0.01724048,
   0.0171691,
   0.01734456,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(60,BackgroundStatError_fx3760,BackgroundStatError_fy3760,BackgroundStatError_felx3760,BackgroundStatError_fehx3760,BackgroundStatError_fely3760,BackgroundStatError_fehy3760);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1402;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError375237563760 = new TH1F("Graph_Graph_Graph_BackgroundStatError375237563760","Graph",100,0,6.6);
   Graph_Graph_Graph_BackgroundStatError375237563760->SetMinimum(0.9678168);
   Graph_Graph_Graph_BackgroundStatError375237563760->SetMaximum(1.032183);
   Graph_Graph_Graph_BackgroundStatError375237563760->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError375237563760->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError375237563760->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError375237563760->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError375237563760->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError375237563760->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError375237563760);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx180[2] = {
   0,
   6};
   Double_t Graph0_fy180[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx180,Graph0_fy180);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0178179180 = new TH1F("Graph_Graph_Graph_Graph0178179180","Graph",100,0,6.6);
   Graph_Graph_Graph_Graph0178179180->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0178179180->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0178179180->SetDirectory(0);
   Graph_Graph_Graph_Graph0178179180->SetStats(0);
   Graph_Graph_Graph_Graph0178179180->SetLineStyle(0);
   Graph_Graph_Graph_Graph0178179180->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0178179180->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0178179180->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0178179180->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0178179180->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0178179180->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0178179180->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0178179180->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0178179180->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0178179180->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0178179180->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0178179180->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0178179180->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0178179180->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0178179180->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0178179180->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0178179180->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0178179180->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0178179180->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0178179180->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0178179180);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3761[6] = {
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85};
   Double_t Graph1_fy3761[6] = {
   -23.39259,
   0.915537,
   0.9676939,
   0.9918641,
   0.9269682,
   0.9255755};
   Double_t Graph1_felx3761[6] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fely3761[6] = {
   -16.54106,
   0.02543158,
   0.01773571,
   0.01757233,
   0.0171046,
   0.01783585};
   Double_t Graph1_fehx3761[6] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fehy3761[6] = {
   -16.54106,
   0.02543158,
   0.01773571,
   0.01757233,
   0.0171046,
   0.01783585};
   grae = new TGraphAsymmErrors(6,Graph1_fx3761,Graph1_fy3761,Graph1_felx3761,Graph1_fehx3761,Graph1_fely3761,Graph1_fehy3761);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1375337573761 = new TH1F("Graph_Graph_Graph_Graph1375337573761","Graph",100,0.24,0.96);
   Graph_Graph_Graph_Graph1375337573761->SetMinimum(-25.8328);
   Graph_Graph_Graph_Graph1375337573761->SetMaximum(3.449639);
   Graph_Graph_Graph_Graph1375337573761->SetDirectory(0);
   Graph_Graph_Graph_Graph1375337573761->SetStats(0);
   Graph_Graph_Graph_Graph1375337573761->SetLineStyle(0);
   Graph_Graph_Graph_Graph1375337573761->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1375337573761->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1375337573761->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1375337573761->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1375337573761->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1375337573761->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1375337573761->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1375337573761->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1375337573761->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1375337573761->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1375337573761->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1375337573761->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1375337573761->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1375337573761->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1375337573761->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1375337573761->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1375337573761->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1375337573761->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1375337573761->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1375337573761->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1375337573761->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1375337573761);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1255 = new TH1F("hframe_copy__1255","",1000,0,6);
   hframe_copy__1255->SetMinimum(0.3);
   hframe_copy__1255->SetMaximum(1.7);
   hframe_copy__1255->SetDirectory(0);
   hframe_copy__1255->SetStats(0);
   hframe_copy__1255->SetLineStyle(0);
   hframe_copy__1255->SetMarkerStyle(20);
   hframe_copy__1255->GetXaxis()->SetNdivisions(8);
   hframe_copy__1255->GetXaxis()->SetLabelFont(43);
   hframe_copy__1255->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1255->GetXaxis()->SetLabelSize(27);
   hframe_copy__1255->GetXaxis()->SetTitleSize(33);
   hframe_copy__1255->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1255->GetXaxis()->SetTitleFont(43);
   hframe_copy__1255->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1255->GetYaxis()->SetNdivisions(505);
   hframe_copy__1255->GetYaxis()->SetLabelFont(43);
   hframe_copy__1255->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1255->GetYaxis()->SetLabelSize(21);
   hframe_copy__1255->GetYaxis()->SetTitleSize(33);
   hframe_copy__1255->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1255->GetYaxis()->SetTitleFont(43);
   hframe_copy__1255->GetZaxis()->SetLabelFont(43);
   hframe_copy__1255->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1255->GetZaxis()->SetLabelSize(27);
   hframe_copy__1255->GetZaxis()->SetTitleSize(33);
   hframe_copy__1255->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1255->GetZaxis()->SetTitleFont(43);
   hframe_copy__1255->Draw("sameaxis");
   BBPair_dRMin_dR_2->Modified();
   BBPair_dRMin_dR->cd();
  
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
   BBPair_dRMin_dR->cd();
  
// ------------>Primitives in pad: BBPair_dRMin_dR_1
   TPad *BBPair_dRMin_dR_1 = new TPad("BBPair_dRMin_dR_1", "BBPair_dRMin_dR_1",0,0.2897959,1,1);
   BBPair_dRMin_dR_1->Draw();
   BBPair_dRMin_dR_1->cd();
   BBPair_dRMin_dR_1->Range(-1.21519,-1.215524,6.379747,4.715156);
   BBPair_dRMin_dR_1->SetFillColor(0);
   BBPair_dRMin_dR_1->SetFillStyle(4000);
   BBPair_dRMin_dR_1->SetBorderMode(0);
   BBPair_dRMin_dR_1->SetBorderSize(2);
   BBPair_dRMin_dR_1->SetLogy();
   BBPair_dRMin_dR_1->SetTickx(1);
   BBPair_dRMin_dR_1->SetTicky(1);
   BBPair_dRMin_dR_1->SetLeftMargin(0.16);
   BBPair_dRMin_dR_1->SetRightMargin(0.05);
   BBPair_dRMin_dR_1->SetTopMargin(0.06);
   BBPair_dRMin_dR_1->SetBottomMargin(0.02);
   BBPair_dRMin_dR_1->SetFrameFillStyle(0);
   BBPair_dRMin_dR_1->SetFrameBorderMode(0);
   BBPair_dRMin_dR_1->SetFrameFillStyle(0);
   BBPair_dRMin_dR_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1256 = new TH1F("hframe__1256","",1000,0,6);
   hframe__1256->SetMinimum(0.08);
   hframe__1256->SetMaximum(22872.59);
   hframe__1256->SetDirectory(0);
   hframe__1256->SetStats(0);
   hframe__1256->SetLineStyle(0);
   hframe__1256->SetMarkerStyle(20);
   hframe__1256->GetXaxis()->SetNdivisions(8);
   hframe__1256->GetXaxis()->SetLabelFont(43);
   hframe__1256->GetXaxis()->SetLabelOffset(0.007);
   hframe__1256->GetXaxis()->SetLabelSize(0);
   hframe__1256->GetXaxis()->SetTitleSize(0);
   hframe__1256->GetXaxis()->SetTitleOffset(0.9);
   hframe__1256->GetXaxis()->SetTitleFont(43);
   hframe__1256->GetYaxis()->SetTitle("Events / 0");
   hframe__1256->GetYaxis()->SetLabelFont(43);
   hframe__1256->GetYaxis()->SetLabelOffset(0.007);
   hframe__1256->GetYaxis()->SetLabelSize(27);
   hframe__1256->GetYaxis()->SetTitleSize(33);
   hframe__1256->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1256->GetYaxis()->SetTitleFont(43);
   hframe__1256->GetZaxis()->SetLabelFont(43);
   hframe__1256->GetZaxis()->SetLabelOffset(0.007);
   hframe__1256->GetZaxis()->SetLabelSize(27);
   hframe__1256->GetZaxis()->SetTitleSize(33);
   hframe__1256->GetZaxis()->SetTitleOffset(1);
   hframe__1256->GetZaxis()->SetTitleFont(43);
   hframe__1256->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_178_stack_179_stack_180 = new TH1F("StackedMCstackHist_stack_178_stack_179_stack_180","StackedMCstackHist",60,0,6);
   StackedMCstackHist_stack_178_stack_179_stack_180->SetMinimum(1.284854);
   StackedMCstackHist_stack_178_stack_179_stack_180->SetMaximum(5139.414);
   StackedMCstackHist_stack_178_stack_179_stack_180->SetDirectory(0);
   StackedMCstackHist_stack_178_stack_179_stack_180->SetStats(0);
   StackedMCstackHist_stack_178_stack_179_stack_180->SetLineStyle(0);
   StackedMCstackHist_stack_178_stack_179_stack_180->SetMarkerStyle(20);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_178_stack_179_stack_180->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_178_stack_179_stack_180);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_BBPair_dRMin_dRInclusive",60,0,6);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,-0.1096867);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,24.34921);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,55.19752);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,65.46412);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,67.57581);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,72.98594);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.1164533);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.132144);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,3.275913);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,4.119799);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,3.950612);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,4.172736);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,60);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_BBPair_dRMin_dRInclusive",60,0,6);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,0.3094077);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,296.4436);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,701.0383);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,887.0919);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1005.199);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1069.376);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1310139);
   TT_stack_2_stack_2_stack_2->SetBinError(5,4.216595);
   TT_stack_2_stack_2_stack_2->SetBinError(6,6.441716);
   TT_stack_2_stack_2_stack_2->SetBinError(7,7.236719);
   TT_stack_2_stack_2_stack_2->SetBinError(8,7.698232);
   TT_stack_2_stack_2_stack_2->SetBinError(9,7.937122);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,60);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_BBPair_dRMin_dRInclusive",60,0,6);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,-0.2852182);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,1094.77);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,2320.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,2259.578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2095.619);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1767.179);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.1288823);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,37.66921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,54.37166);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,54.74906);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,53.70589);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,49.66164);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7515.689);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,60);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1257 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1257","h_SR_BBPair_dRMin_dRInclusive",60,0,6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinContent(5,1.842773);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinContent(6,4.55906);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinContent(7,3.984993);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinContent(8,5.667839);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinContent(9,5.206154);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinError(5,0.5428482);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinError(6,0.7622463);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinError(7,0.8513382);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinError(8,0.8659365);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetBinError(9,0.8827815);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetEntries(4205);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->GetXaxis()->SetRange(1,60);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1257->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3762[60] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.05,
   3.15,
   3.25,
   3.35,
   3.45,
   3.55,
   3.65,
   3.75,
   3.85,
   3.95,
   4.05,
   4.15,
   4.25,
   4.35,
   4.45,
   4.55,
   4.65,
   4.75,
   4.85,
   4.95,
   5.05,
   5.15,
   5.25,
   5.35,
   5.45,
   5.55,
   5.65,
   5.75,
   5.85,
   5.95};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3762[60] = {
   0,
   0,
   0,
   -0.08549715,
   1415.563,
   3076.386,
   3212.134,
   3168.394,
   2909.541,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3762[60] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3762[60] = {
   0,
   0,
   0,
   0.2175699,
   37.96439,
   54.84983,
   55.37871,
   54.39846,
   50.46472,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3762[60] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3762[60] = {
   0,
   0,
   0,
   0.2175699,
   37.96439,
   54.84983,
   55.37871,
   54.39846,
   50.46472,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(60,BkgSum-SR-Inclusive_sum_errors_fx3762,BkgSum-SR-Inclusive_sum_errors_fy3762,BkgSum-SR-Inclusive_sum_errors_felx3762,BkgSum-SR-Inclusive_sum_errors_fehx3762,BkgSum-SR-Inclusive_sum_errors_fely3762,BkgSum-SR-Inclusive_sum_errors_fehy3762);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1401;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762","Graph",100,0,6.6);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->SetMinimum(3.594272);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->SetMaximum(3594.272);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors375437583762->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors375437583762);
   
   grae->Draw("e2 ");
   
   TH1F *Data__1258 = new TH1F("Data__1258","h_SR_BBPair_dRMin_dRInclusive",60,0,6);
   Data__1258->SetBinContent(4,2);
   Data__1258->SetBinContent(5,1296);
   Data__1258->SetBinContent(6,2977);
   Data__1258->SetBinContent(7,3186);
   Data__1258->SetBinContent(8,2937);
   Data__1258->SetBinContent(9,2693);
   Data__1258->SetBinError(4,1.414214);
   Data__1258->SetBinError(5,36);
   Data__1258->SetBinError(6,54.56189);
   Data__1258->SetBinError(7,56.44466);
   Data__1258->SetBinError(8,54.1941);
   Data__1258->SetBinError(9,51.89412);
   Data__1258->SetEntries(13095);
   Data__1258->SetDirectory(0);
   Data__1258->SetFillStyle(3001);
   Data__1258->SetLineWidth(2);
   Data__1258->SetMarkerStyle(20);
   Data__1258->SetMarkerSize(1.2);
   Data__1258->GetXaxis()->SetRange(1,60);
   Data__1258->GetXaxis()->SetLabelFont(42);
   Data__1258->GetXaxis()->SetTitleOffset(1);
   Data__1258->GetXaxis()->SetTitleFont(42);
   Data__1258->GetYaxis()->SetLabelFont(42);
   Data__1258->GetYaxis()->SetTitleFont(42);
   Data__1258->GetZaxis()->SetLabelFont(42);
   Data__1258->GetZaxis()->SetTitleOffset(1);
   Data__1258->GetZaxis()->SetTitleFont(42);
   Data__1258->Draw("EP same");
   
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

   ci = 1401;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1401;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1259 = new TH1F("hframe_copy__1259","",1000,0,6);
   hframe_copy__1259->SetMinimum(0.08);
   hframe_copy__1259->SetMaximum(22872.59);
   hframe_copy__1259->SetDirectory(0);
   hframe_copy__1259->SetStats(0);
   hframe_copy__1259->SetLineStyle(0);
   hframe_copy__1259->SetMarkerStyle(20);
   hframe_copy__1259->GetXaxis()->SetNdivisions(8);
   hframe_copy__1259->GetXaxis()->SetLabelFont(43);
   hframe_copy__1259->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1259->GetXaxis()->SetLabelSize(0);
   hframe_copy__1259->GetXaxis()->SetTitleSize(0);
   hframe_copy__1259->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1259->GetXaxis()->SetTitleFont(43);
   hframe_copy__1259->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1259->GetYaxis()->SetLabelFont(43);
   hframe_copy__1259->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1259->GetYaxis()->SetLabelSize(27);
   hframe_copy__1259->GetYaxis()->SetTitleSize(33);
   hframe_copy__1259->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1259->GetYaxis()->SetTitleFont(43);
   hframe_copy__1259->GetZaxis()->SetLabelFont(43);
   hframe_copy__1259->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1259->GetZaxis()->SetLabelSize(27);
   hframe_copy__1259->GetZaxis()->SetTitleSize(33);
   hframe_copy__1259->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1259->GetZaxis()->SetTitleFont(43);
   hframe_copy__1259->Draw("sameaxis");
   
   TH1F *hframe_copy__1260 = new TH1F("hframe_copy__1260","",1000,0,6);
   hframe_copy__1260->SetMinimum(0.08);
   hframe_copy__1260->SetMaximum(22872.59);
   hframe_copy__1260->SetDirectory(0);
   hframe_copy__1260->SetStats(0);
   hframe_copy__1260->SetLineStyle(0);
   hframe_copy__1260->SetMarkerStyle(20);
   hframe_copy__1260->GetXaxis()->SetNdivisions(8);
   hframe_copy__1260->GetXaxis()->SetLabelFont(43);
   hframe_copy__1260->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1260->GetXaxis()->SetLabelSize(0);
   hframe_copy__1260->GetXaxis()->SetTitleSize(0);
   hframe_copy__1260->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1260->GetXaxis()->SetTitleFont(43);
   hframe_copy__1260->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1260->GetYaxis()->SetLabelFont(43);
   hframe_copy__1260->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1260->GetYaxis()->SetLabelSize(27);
   hframe_copy__1260->GetYaxis()->SetTitleSize(33);
   hframe_copy__1260->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1260->GetYaxis()->SetTitleFont(43);
   hframe_copy__1260->GetZaxis()->SetLabelFont(43);
   hframe_copy__1260->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1260->GetZaxis()->SetLabelSize(27);
   hframe_copy__1260->GetZaxis()->SetTitleSize(33);
   hframe_copy__1260->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1260->GetZaxis()->SetTitleFont(43);
   hframe_copy__1260->Draw("sameaxis");
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
   BBPair_dRMin_dR_1->Modified();
   BBPair_dRMin_dR->cd();
   BBPair_dRMin_dR->Modified();
   BBPair_dRMin_dR->cd();
   BBPair_dRMin_dR->SetSelected(BBPair_dRMin_dR);
}
