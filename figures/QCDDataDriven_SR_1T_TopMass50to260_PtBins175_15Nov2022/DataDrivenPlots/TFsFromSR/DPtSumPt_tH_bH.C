void DPtSumPt_tH_bH()
{
//=========Macro generated from canvas: DPtSumPt_tH_bH/DPtSumPt_tH_bH
//=========  (Fri Nov 18 13:28:56 2022) by ROOT version 6.20/02
   TCanvas *DPtSumPt_tH_bH = new TCanvas("DPtSumPt_tH_bH", "DPtSumPt_tH_bH",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   DPtSumPt_tH_bH->SetHighLightColor(2);
   DPtSumPt_tH_bH->Range(0,0,1,1);
   DPtSumPt_tH_bH->SetFillColor(0);
   DPtSumPt_tH_bH->SetBorderMode(0);
   DPtSumPt_tH_bH->SetBorderSize(2);
   DPtSumPt_tH_bH->SetTickx(1);
   DPtSumPt_tH_bH->SetTicky(1);
   DPtSumPt_tH_bH->SetLeftMargin(0.16);
   DPtSumPt_tH_bH->SetRightMargin(0.05);
   DPtSumPt_tH_bH->SetTopMargin(0.06);
   DPtSumPt_tH_bH->SetBottomMargin(0.13);
   DPtSumPt_tH_bH->SetFrameFillStyle(0);
   DPtSumPt_tH_bH->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: DPtSumPt_tH_bH_2
   TPad *DPtSumPt_tH_bH_2 = new TPad("DPtSumPt_tH_bH_2", "DPtSumPt_tH_bH_2",0,0,1,0.304);
   DPtSumPt_tH_bH_2->Draw();
   DPtSumPt_tH_bH_2->cd();
   DPtSumPt_tH_bH_2->Range(-0.2025316,-0.428,1.063291,1.7);
   DPtSumPt_tH_bH_2->SetFillColor(0);
   DPtSumPt_tH_bH_2->SetFillStyle(4000);
   DPtSumPt_tH_bH_2->SetBorderMode(0);
   DPtSumPt_tH_bH_2->SetBorderSize(2);
   DPtSumPt_tH_bH_2->SetTickx(1);
   DPtSumPt_tH_bH_2->SetTicky(1);
   DPtSumPt_tH_bH_2->SetLeftMargin(0.16);
   DPtSumPt_tH_bH_2->SetRightMargin(0.05);
   DPtSumPt_tH_bH_2->SetTopMargin(0);
   DPtSumPt_tH_bH_2->SetBottomMargin(0.3421053);
   DPtSumPt_tH_bH_2->SetFrameFillStyle(0);
   DPtSumPt_tH_bH_2->SetFrameBorderMode(0);
   DPtSumPt_tH_bH_2->SetFrameFillStyle(0);
   DPtSumPt_tH_bH_2->SetFrameBorderMode(0);
   
   TH1F *hframe__960 = new TH1F("hframe__960","",1000,0,1);
   hframe__960->SetMinimum(0.3);
   hframe__960->SetMaximum(1.7);
   hframe__960->SetDirectory(0);
   hframe__960->SetStats(0);
   hframe__960->SetLineStyle(0);
   hframe__960->SetMarkerStyle(20);
   hframe__960->GetXaxis()->SetTitle("p_{T}^{assym}(t^{res}_{H^{#pm}}, b_{H^{#pm}})");
   hframe__960->GetXaxis()->SetNdivisions(8);
   hframe__960->GetXaxis()->SetLabelFont(43);
   hframe__960->GetXaxis()->SetLabelOffset(0.007);
   hframe__960->GetXaxis()->SetLabelSize(27);
   hframe__960->GetXaxis()->SetTitleSize(33);
   hframe__960->GetXaxis()->SetTitleOffset(2.960526);
   hframe__960->GetXaxis()->SetTitleFont(43);
   hframe__960->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__960->GetYaxis()->SetNdivisions(505);
   hframe__960->GetYaxis()->SetLabelFont(43);
   hframe__960->GetYaxis()->SetLabelOffset(0.007);
   hframe__960->GetYaxis()->SetLabelSize(21);
   hframe__960->GetYaxis()->SetTitleSize(33);
   hframe__960->GetYaxis()->SetTitleOffset(1.5625);
   hframe__960->GetYaxis()->SetTitleFont(43);
   hframe__960->GetZaxis()->SetLabelFont(43);
   hframe__960->GetZaxis()->SetLabelOffset(0.007);
   hframe__960->GetZaxis()->SetLabelSize(27);
   hframe__960->GetZaxis()->SetTitleSize(33);
   hframe__960->GetZaxis()->SetTitleOffset(1);
   hframe__960->GetZaxis()->SetTitleFont(43);
   hframe__960->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3591[19] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925};
   Double_t BackgroundStatSystError_fy3591[19] = {
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
   Double_t BackgroundStatSystError_felx3591[19] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3591[19] = {
   0.04271465,
   0.04220953,
   0.04505824,
   0.04194399,
   0.04401344,
   0.04264471,
   0.04297469,
   0.04417312,
   0.04230395,
   0.03954813,
   0.03850757,
   0.03765061,
   0.03735182,
   0.04258278,
   0.04955818,
   0.07169743,
   0.1546228,
   0.4761536,
   -1};
   Double_t BackgroundStatSystError_fehx3591[19] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3591[19] = {
   0.04271465,
   0.04220953,
   0.04505824,
   0.04194399,
   0.04401344,
   0.04264471,
   0.04297469,
   0.04417312,
   0.04230395,
   0.03954813,
   0.03850757,
   0.03765061,
   0.03735182,
   0.04258278,
   0.04955818,
   0.07169743,
   0.1546228,
   0.4761536,
   -1};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3591,BackgroundStatSystError_fy3591,BackgroundStatSystError_felx3591,BackgroundStatSystError_fehx3591,BackgroundStatSystError_fely3591,BackgroundStatSystError_fehy3591);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1361;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError358335873591 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError358335873591","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMinimum(0.4286157);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMaximum(1.571384);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError358335873591);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3592[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BackgroundStatError_fy3592[20] = {
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
   Double_t BackgroundStatError_felx3592[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fely3592[20] = {
   0.04271465,
   0.04220953,
   0.04505824,
   0.04194399,
   0.04401344,
   0.04264471,
   0.04297469,
   0.04417312,
   0.04230395,
   0.03954813,
   0.03850757,
   0.03765061,
   0.03735182,
   0.04258278,
   0.04955818,
   0.07169743,
   0.1546228,
   0.4761536,
   -1,
   0};
   Double_t BackgroundStatError_fehx3592[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fehy3592[20] = {
   0.04271465,
   0.04220953,
   0.04505824,
   0.04194399,
   0.04401344,
   0.04264471,
   0.04297469,
   0.04417312,
   0.04230395,
   0.03954813,
   0.03850757,
   0.03765061,
   0.03735182,
   0.04258278,
   0.04955818,
   0.07169743,
   0.1546228,
   0.4761536,
   -1,
   0};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3592,BackgroundStatError_fy3592,BackgroundStatError_felx3592,BackgroundStatError_fehx3592,BackgroundStatError_fely3592,BackgroundStatError_fehy3592);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1360;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError358435883592 = new TH1F("Graph_Graph_Graph_BackgroundStatError358435883592","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMinimum(0.4286157);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMaximum(1.571384);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError358435883592);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx138[2] = {
   0,
   1};
   Double_t Graph0_fy138[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx138,Graph0_fy138);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0136137138 = new TH1F("Graph_Graph_Graph_Graph0136137138","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph0136137138->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0136137138->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0136137138->SetDirectory(0);
   Graph_Graph_Graph_Graph0136137138->SetStats(0);
   Graph_Graph_Graph_Graph0136137138->SetLineStyle(0);
   Graph_Graph_Graph_Graph0136137138->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0136137138);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3593[19] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925};
   Double_t Graph1_fy3593[19] = {
   1.094272,
   1.105408,
   1.180894,
   0.9890801,
   1.094307,
   0.9845593,
   0.9856541,
   1.162042,
   1.018639,
   0.959678,
   1.026868,
   1.014722,
   0.9820445,
   1.14732,
   0.9972165,
   0.908752,
   0.9609057,
   0.7193311,
   -22.39344};
   Double_t Graph1_felx3593[19] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3593[19] = {
   0.04859833,
   0.04810671,
   0.0526012,
   0.04472775,
   0.04923519,
   0.04522231,
   0.04556188,
   0.05086118,
   0.04546407,
   0.04133626,
   0.04188681,
   0.04105124,
   0.03999194,
   0.05075443,
   0.05557271,
   0.07909671,
   0.1725838,
   0.5086439,
   -22.39344};
   Double_t Graph1_fehx3593[19] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3593[19] = {
   0.04859833,
   0.04810671,
   0.0526012,
   0.04472775,
   0.04923519,
   0.04522231,
   0.04556188,
   0.05086118,
   0.04546407,
   0.04133626,
   0.04188681,
   0.04105124,
   0.03999194,
   0.05075443,
   0.05557271,
   0.07909671,
   0.1725838,
   0.5086439,
   -22.39344};
   grae = new TGraphAsymmErrors(19,Graph1_fx3593,Graph1_fy3593,Graph1_felx3593,Graph1_fehx3593,Graph1_fely3593,Graph1_fehy3593);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1358535893593 = new TH1F("Graph_Graph_Graph_Graph1358535893593","Graph",100,0,1.045);
   Graph_Graph_Graph_Graph1358535893593->SetMinimum(-24.75614);
   Graph_Graph_Graph_Graph1358535893593->SetMaximum(3.596189);
   Graph_Graph_Graph_Graph1358535893593->SetDirectory(0);
   Graph_Graph_Graph_Graph1358535893593->SetStats(0);
   Graph_Graph_Graph_Graph1358535893593->SetLineStyle(0);
   Graph_Graph_Graph_Graph1358535893593->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1358535893593);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__961 = new TH1F("hframe_copy__961","",1000,0,1);
   hframe_copy__961->SetMinimum(0.3);
   hframe_copy__961->SetMaximum(1.7);
   hframe_copy__961->SetDirectory(0);
   hframe_copy__961->SetStats(0);
   hframe_copy__961->SetLineStyle(0);
   hframe_copy__961->SetMarkerStyle(20);
   hframe_copy__961->GetXaxis()->SetTitle("p_{T}^{assym}(t^{res}_{H^{#pm}}, b_{H^{#pm}})");
   hframe_copy__961->GetXaxis()->SetNdivisions(8);
   hframe_copy__961->GetXaxis()->SetLabelFont(43);
   hframe_copy__961->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__961->GetXaxis()->SetLabelSize(27);
   hframe_copy__961->GetXaxis()->SetTitleSize(33);
   hframe_copy__961->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__961->GetXaxis()->SetTitleFont(43);
   hframe_copy__961->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__961->GetYaxis()->SetNdivisions(505);
   hframe_copy__961->GetYaxis()->SetLabelFont(43);
   hframe_copy__961->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__961->GetYaxis()->SetLabelSize(21);
   hframe_copy__961->GetYaxis()->SetTitleSize(33);
   hframe_copy__961->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__961->GetYaxis()->SetTitleFont(43);
   hframe_copy__961->GetZaxis()->SetLabelFont(43);
   hframe_copy__961->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__961->GetZaxis()->SetLabelSize(27);
   hframe_copy__961->GetZaxis()->SetTitleSize(33);
   hframe_copy__961->GetZaxis()->SetTitleOffset(1);
   hframe_copy__961->GetZaxis()->SetTitleFont(43);
   hframe_copy__961->Draw("sameaxis");
   DPtSumPt_tH_bH_2->Modified();
   DPtSumPt_tH_bH->cd();
  
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
   DPtSumPt_tH_bH->cd();
  
// ------------>Primitives in pad: DPtSumPt_tH_bH_1
   TPad *DPtSumPt_tH_bH_1 = new TPad("DPtSumPt_tH_bH_1", "DPtSumPt_tH_bH_1",0,0.2897959,1,1);
   DPtSumPt_tH_bH_1->Draw();
   DPtSumPt_tH_bH_1->cd();
   DPtSumPt_tH_bH_1->Range(-0.2025316,-2.122809,1.063291,4.017637);
   DPtSumPt_tH_bH_1->SetFillColor(0);
   DPtSumPt_tH_bH_1->SetFillStyle(4000);
   DPtSumPt_tH_bH_1->SetBorderMode(0);
   DPtSumPt_tH_bH_1->SetBorderSize(2);
   DPtSumPt_tH_bH_1->SetLogy();
   DPtSumPt_tH_bH_1->SetTickx(1);
   DPtSumPt_tH_bH_1->SetTicky(1);
   DPtSumPt_tH_bH_1->SetLeftMargin(0.16);
   DPtSumPt_tH_bH_1->SetRightMargin(0.05);
   DPtSumPt_tH_bH_1->SetTopMargin(0.06);
   DPtSumPt_tH_bH_1->SetBottomMargin(0.02);
   DPtSumPt_tH_bH_1->SetFrameFillStyle(0);
   DPtSumPt_tH_bH_1->SetFrameBorderMode(0);
   DPtSumPt_tH_bH_1->SetFrameFillStyle(0);
   DPtSumPt_tH_bH_1->SetFrameBorderMode(0);
   
   TH1F *hframe__962 = new TH1F("hframe__962","",1000,0,1);
   hframe__962->SetMinimum(0.01);
   hframe__962->SetMaximum(4458.721);
   hframe__962->SetDirectory(0);
   hframe__962->SetStats(0);
   hframe__962->SetLineStyle(0);
   hframe__962->SetMarkerStyle(20);
   hframe__962->GetXaxis()->SetNdivisions(8);
   hframe__962->GetXaxis()->SetLabelFont(43);
   hframe__962->GetXaxis()->SetLabelOffset(0.007);
   hframe__962->GetXaxis()->SetLabelSize(0);
   hframe__962->GetXaxis()->SetTitleSize(0);
   hframe__962->GetXaxis()->SetTitleOffset(0.9);
   hframe__962->GetXaxis()->SetTitleFont(43);
   hframe__962->GetYaxis()->SetTitle("Events / 0.05");
   hframe__962->GetYaxis()->SetLabelFont(43);
   hframe__962->GetYaxis()->SetLabelOffset(0.007);
   hframe__962->GetYaxis()->SetLabelSize(27);
   hframe__962->GetYaxis()->SetTitleSize(33);
   hframe__962->GetYaxis()->SetTitleOffset(1.5625);
   hframe__962->GetYaxis()->SetTitleFont(43);
   hframe__962->GetZaxis()->SetLabelFont(43);
   hframe__962->GetZaxis()->SetLabelOffset(0.007);
   hframe__962->GetZaxis()->SetLabelSize(27);
   hframe__962->GetZaxis()->SetTitleSize(33);
   hframe__962->GetZaxis()->SetTitleOffset(1);
   hframe__962->GetZaxis()->SetTitleFont(43);
   hframe__962->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_136_stack_137_stack_138 = new TH1F("StackedMCstackHist_stack_136_stack_137_stack_138","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMinimum(0.2456101);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMaximum(982.4402);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetDirectory(0);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetStats(0);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetLineStyle(0);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMarkerStyle(20);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_136_stack_137_stack_138);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_DPtSumPt_tH_bHInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,14.24096);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,16.01144);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,11.73554);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,15.10153);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,13.86195);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,14.75544);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,13.14776);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,13.04488);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,14.03437);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,12.20935);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,13.60934);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,15.41651);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,13.83477);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,11.6176);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,10.86465);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,3.942045);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,1.365193);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.3067331);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.536984);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.611842);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.232342);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.623311);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.49733);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.599254);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.273183);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.267691);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.503125);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.245445);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.331033);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.574953);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.231718);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.105042);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.405886);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.8911624);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.4089599);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.1427675);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,100);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_DPtSumPt_tH_bHInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,152.8045);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,151.8214);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,145.2591);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,149.1795);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,146.7385);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,150.464);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,152.4244);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,162.716);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,172.1467);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,188.5215);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,203.2766);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,208.9428);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,201.5242);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,172.5754);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,118.033);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,54.11841);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,13.89547);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1.45016);
   TT_stack_2_stack_2_stack_2->SetBinError(1,3.08193);
   TT_stack_2_stack_2_stack_2->SetBinError(2,3.083185);
   TT_stack_2_stack_2_stack_2->SetBinError(3,3.011903);
   TT_stack_2_stack_2_stack_2->SetBinError(4,3.064383);
   TT_stack_2_stack_2_stack_2->SetBinError(5,3.023683);
   TT_stack_2_stack_2_stack_2->SetBinError(6,3.076189);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.10389);
   TT_stack_2_stack_2_stack_2->SetBinError(8,3.219122);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.321047);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.493878);
   TT_stack_2_stack_2_stack_2->SetBinError(11,3.602959);
   TT_stack_2_stack_2_stack_2->SetBinError(12,3.682958);
   TT_stack_2_stack_2_stack_2->SetBinError(13,3.607841);
   TT_stack_2_stack_2_stack_2->SetBinError(14,3.333331);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.775499);
   TT_stack_2_stack_2_stack_2->SetBinError(16,1.858877);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.9448523);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.2858141);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,100);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_DPtSumPt_tH_bHInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,296.2762);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,309.8188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,269.8006);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,330.1177);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,290.8269);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,316.2142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,309.2394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,273.4485);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,306.6335);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,360.9159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,368.3889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,377.7764);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,398.6662);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,261.1928);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,194.0011);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,87.1937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,17.00057);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1.023467);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,-0.04465593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,19.48867);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,19.85901);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,18.9533);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,20.44505);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,19.58028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,20.23573);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,20.1272);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,19.53904);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,20.52682);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,21.90018);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,22.20781);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,22.31411);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,22.61589);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,18.63782);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,15.69691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,10.20828);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,4.880917);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,1.28475);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.04465593);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,100);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__963 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__963","h_SR_DPtSumPt_tH_bHInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(1,25.79352);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(2,26.07723);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(3,24.67922);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(4,18.88845);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(5,15.11525);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(6,14.01827);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(7,9.255338);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(8,6.935301);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(9,6.905027);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(10,5.842407);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(11,4.436764);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(12,5.157067);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(13,4.90309);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(14,4.940021);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(15,4.197807);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(16,2.82007);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(17,0.9811129);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(18,0.1306654);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(1,1.611026);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(2,1.5405);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(3,1.487862);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(4,1.358086);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(5,1.247424);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(6,1.120638);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(7,1.015397);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(8,0.8809365);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(9,0.826296);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(10,0.7464528);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(11,0.7295664);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(12,0.7052035);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(13,0.708616);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(14,0.6867717);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(15,0.6338428);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(16,0.5557842);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(17,0.3400748);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(18,0.06766978);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetEntries(35807);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3594[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3594[20] = {
   463.3217,
   477.6516,
   426.7953,
   494.3988,
   451.4273,
   481.4337,
   474.8116,
   449.2094,
   492.8146,
   561.6467,
   585.2749,
   602.1356,
   614.0251,
   445.3859,
   322.8988,
   145.2542,
   32.26123,
   2.780361,
   -0.04465593,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3594[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3594[20] = {
   19.79062,
   20.16145,
   19.23065,
   20.73706,
   19.86887,
   20.5306,
   20.40488,
   19.84298,
   20.848,
   22.21208,
   22.53752,
   22.67077,
   22.93496,
   18.96577,
   16.00228,
   10.41435,
   4.988321,
   1.323879,
   0.04465593,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3594[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3594[20] = {
   19.79062,
   20.16145,
   19.23065,
   20.73706,
   19.86887,
   20.5306,
   20.40488,
   19.84298,
   20.848,
   22.21208,
   22.53752,
   22.67077,
   22.93496,
   18.96577,
   16.00228,
   10.41435,
   4.988321,
   1.323879,
   0.04465593,
   0};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3594,BkgSum-SR-Inclusive_sum_errors_fy3594,BkgSum-SR-Inclusive_sum_errors_felx3594,BkgSum-SR-Inclusive_sum_errors_fehx3594,BkgSum-SR-Inclusive_sum_errors_fely3594,BkgSum-SR-Inclusive_sum_errors_fehy3594);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1359;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMinimum(0.7006576);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMaximum(700.6576);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors358635903594);
   
   grae->Draw("e2 ");
   
   TH1F *Data__964 = new TH1F("Data__964","h_SR_DPtSumPt_tH_bHInclusive",20,0,1);
   Data__964->SetBinContent(1,507);
   Data__964->SetBinContent(2,528);
   Data__964->SetBinContent(3,504);
   Data__964->SetBinContent(4,489);
   Data__964->SetBinContent(5,494);
   Data__964->SetBinContent(6,474);
   Data__964->SetBinContent(7,468);
   Data__964->SetBinContent(8,522);
   Data__964->SetBinContent(9,502);
   Data__964->SetBinContent(10,539);
   Data__964->SetBinContent(11,601);
   Data__964->SetBinContent(12,611);
   Data__964->SetBinContent(13,603);
   Data__964->SetBinContent(14,511);
   Data__964->SetBinContent(15,322);
   Data__964->SetBinContent(16,132);
   Data__964->SetBinContent(17,31);
   Data__964->SetBinContent(18,2);
   Data__964->SetBinContent(19,1);
   Data__964->SetBinError(1,22.51666);
   Data__964->SetBinError(2,22.97825);
   Data__964->SetBinError(3,22.44994);
   Data__964->SetBinError(4,22.11334);
   Data__964->SetBinError(5,22.22611);
   Data__964->SetBinError(6,21.77154);
   Data__964->SetBinError(7,21.63331);
   Data__964->SetBinError(8,22.84732);
   Data__964->SetBinError(9,22.40536);
   Data__964->SetBinError(10,23.21637);
   Data__964->SetBinError(11,24.5153);
   Data__964->SetBinError(12,24.71841);
   Data__964->SetBinError(13,24.55606);
   Data__964->SetBinError(14,22.60531);
   Data__964->SetBinError(15,17.94436);
   Data__964->SetBinError(16,11.48913);
   Data__964->SetBinError(17,5.567764);
   Data__964->SetBinError(18,1.414214);
   Data__964->SetBinError(19,1);
   Data__964->SetEntries(7845);
   Data__964->SetDirectory(0);
   Data__964->SetFillStyle(3001);
   Data__964->SetLineWidth(2);
   Data__964->SetMarkerStyle(20);
   Data__964->SetMarkerSize(1.2);
   Data__964->GetXaxis()->SetRange(1,100);
   Data__964->GetXaxis()->SetLabelFont(42);
   Data__964->GetXaxis()->SetTitleOffset(1);
   Data__964->GetXaxis()->SetTitleFont(42);
   Data__964->GetYaxis()->SetLabelFont(42);
   Data__964->GetYaxis()->SetTitleFont(42);
   Data__964->GetZaxis()->SetLabelFont(42);
   Data__964->GetZaxis()->SetTitleOffset(1);
   Data__964->GetZaxis()->SetTitleFont(42);
   Data__964->Draw("EP same");
   
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

   ci = 1359;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1359;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__965 = new TH1F("hframe_copy__965","",1000,0,1);
   hframe_copy__965->SetMinimum(0.01);
   hframe_copy__965->SetMaximum(4458.721);
   hframe_copy__965->SetDirectory(0);
   hframe_copy__965->SetStats(0);
   hframe_copy__965->SetLineStyle(0);
   hframe_copy__965->SetMarkerStyle(20);
   hframe_copy__965->GetXaxis()->SetNdivisions(8);
   hframe_copy__965->GetXaxis()->SetLabelFont(43);
   hframe_copy__965->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__965->GetXaxis()->SetLabelSize(0);
   hframe_copy__965->GetXaxis()->SetTitleSize(0);
   hframe_copy__965->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__965->GetXaxis()->SetTitleFont(43);
   hframe_copy__965->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__965->GetYaxis()->SetLabelFont(43);
   hframe_copy__965->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__965->GetYaxis()->SetLabelSize(27);
   hframe_copy__965->GetYaxis()->SetTitleSize(33);
   hframe_copy__965->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__965->GetYaxis()->SetTitleFont(43);
   hframe_copy__965->GetZaxis()->SetLabelFont(43);
   hframe_copy__965->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__965->GetZaxis()->SetLabelSize(27);
   hframe_copy__965->GetZaxis()->SetTitleSize(33);
   hframe_copy__965->GetZaxis()->SetTitleOffset(1);
   hframe_copy__965->GetZaxis()->SetTitleFont(43);
   hframe_copy__965->Draw("sameaxis");
   
   TH1F *hframe_copy__966 = new TH1F("hframe_copy__966","",1000,0,1);
   hframe_copy__966->SetMinimum(0.01);
   hframe_copy__966->SetMaximum(4458.721);
   hframe_copy__966->SetDirectory(0);
   hframe_copy__966->SetStats(0);
   hframe_copy__966->SetLineStyle(0);
   hframe_copy__966->SetMarkerStyle(20);
   hframe_copy__966->GetXaxis()->SetNdivisions(8);
   hframe_copy__966->GetXaxis()->SetLabelFont(43);
   hframe_copy__966->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__966->GetXaxis()->SetLabelSize(0);
   hframe_copy__966->GetXaxis()->SetTitleSize(0);
   hframe_copy__966->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__966->GetXaxis()->SetTitleFont(43);
   hframe_copy__966->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__966->GetYaxis()->SetLabelFont(43);
   hframe_copy__966->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__966->GetYaxis()->SetLabelSize(27);
   hframe_copy__966->GetYaxis()->SetTitleSize(33);
   hframe_copy__966->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__966->GetYaxis()->SetTitleFont(43);
   hframe_copy__966->GetZaxis()->SetLabelFont(43);
   hframe_copy__966->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__966->GetZaxis()->SetLabelSize(27);
   hframe_copy__966->GetZaxis()->SetTitleSize(33);
   hframe_copy__966->GetZaxis()->SetTitleOffset(1);
   hframe_copy__966->GetZaxis()->SetTitleFont(43);
   hframe_copy__966->Draw("sameaxis");
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
   DPtSumPt_tH_bH_1->Modified();
   DPtSumPt_tH_bH->cd();
   DPtSumPt_tH_bH->Modified();
   DPtSumPt_tH_bH->cd();
   DPtSumPt_tH_bH->SetSelected(DPtSumPt_tH_bH);
}
