void DPtSumPt_tH_bH()
{
//=========Macro generated from canvas: DPtSumPt_tH_bH/DPtSumPt_tH_bH
//=========  (Fri Nov 18 13:29:33 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3591[20] = {
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
   Double_t BackgroundStatSystError_fy3591[20] = {
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
   Double_t BackgroundStatSystError_felx3591[20] = {
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
   Double_t BackgroundStatSystError_fely3591[20] = {
   0.03892226,
   0.03848618,
   0.03711401,
   0.03782413,
   0.03488018,
   0.03496152,
   0.03318103,
   0.03140081,
   0.02850115,
   0.02633026,
   0.02454729,
   0.02364668,
   0.02174713,
   0.02180036,
   0.02417374,
   0.03205766,
   0.05383679,
   0.1864517,
   -1.034364,
   0.999493};
   Double_t BackgroundStatSystError_fehx3591[20] = {
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
   Double_t BackgroundStatSystError_fehy3591[20] = {
   0.03892226,
   0.03848618,
   0.03711401,
   0.03782413,
   0.03488018,
   0.03496152,
   0.03318103,
   0.03140081,
   0.02850115,
   0.02633026,
   0.02454729,
   0.02364668,
   0.02174713,
   0.02180036,
   0.02417374,
   0.03205766,
   0.05383679,
   0.1864517,
   -1.034364,
   0.999493};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3591,BackgroundStatSystError_fy3591,BackgroundStatSystError_felx3591,BackgroundStatSystError_fehx3591,BackgroundStatSystError_fely3591,BackgroundStatSystError_fehy3591);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError358335873591 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError358335873591","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMinimum(0.0004563293);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMaximum(2.199392);
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
   0.03892226,
   0.03848618,
   0.03711401,
   0.03782413,
   0.03488018,
   0.03496152,
   0.03318103,
   0.03140081,
   0.02850115,
   0.02633026,
   0.02454729,
   0.02364668,
   0.02174713,
   0.02180036,
   0.02417374,
   0.03205766,
   0.05383679,
   0.1864517,
   -1.034364,
   0.999493};
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
   0.03892226,
   0.03848618,
   0.03711401,
   0.03782413,
   0.03488018,
   0.03496152,
   0.03318103,
   0.03140081,
   0.02850115,
   0.02633026,
   0.02454729,
   0.02364668,
   0.02174713,
   0.02180036,
   0.02417374,
   0.03205766,
   0.05383679,
   0.1864517,
   -1.034364,
   0.999493};
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
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMinimum(0.0004563293);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMaximum(2.199392);
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
   
   Double_t Graph1_fx3593[18] = {
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
   0.875};
   Double_t Graph1_fy3593[18] = {
   0.9495432,
   1.087298,
   0.8748563,
   1.099439,
   0.9399837,
   1.039737,
   1.043715,
   1.005504,
   0.99784,
   0.8824046,
   0.9754651,
   1.07931,
   0.981279,
   1.067708,
   1.060277,
   1.078447,
   1.00643,
   1.237803};
   Double_t Graph1_felx3593[18] = {
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
   Double_t Graph1_fely3593[18] = {
   0.03984195,
   0.04238729,
   0.03661159,
   0.04269867,
   0.03727278,
   0.03781486,
   0.03622788,
   0.03448852,
   0.03220515,
   0.02749471,
   0.02785906,
   0.02835384,
   0.02532807,
   0.02713731,
   0.03018294,
   0.04019136,
   0.06551299,
   0.2526656};
   Double_t Graph1_fehx3593[18] = {
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
   Double_t Graph1_fehy3593[18] = {
   0.03984195,
   0.04238729,
   0.03661159,
   0.04269867,
   0.03727278,
   0.03781486,
   0.03622788,
   0.03448852,
   0.03220515,
   0.02749471,
   0.02785906,
   0.02835384,
   0.02532807,
   0.02713731,
   0.03018294,
   0.04019136,
   0.06551299,
   0.2526656};
   grae = new TGraphAsymmErrors(18,Graph1_fx3593,Graph1_fy3593,Graph1_felx3593,Graph1_fehx3593,Graph1_fely3593,Graph1_fehy3593);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1358535893593 = new TH1F("Graph_Graph_Graph_Graph1358535893593","Graph",100,0,0.99);
   Graph_Graph_Graph_Graph1358535893593->SetMinimum(0.7730222);
   Graph_Graph_Graph_Graph1358535893593->SetMaximum(1.555691);
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
   DPtSumPt_tH_bH_1->Range(-0.2025316,-2.131283,1.063291,4.432879);
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
   hframe__962->SetMaximum(10940.31);
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
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMinimum(0.6118545);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMaximum(2447.418);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,22.76814);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,24.60664);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,25.65514);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,26.83253);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,27.80861);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,32.89267);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,28.5587);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,33.31357);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,39.44381);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,45.5357);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,49.576);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,48.66897);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,52.96088);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,59.20784);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,42.63661);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,23.30806);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,8.405704);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,1.746164);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.0002791992);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.001038877);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.789711);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.958303);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.813045);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.051627);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.445558);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.220839);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.933707);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.201475);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.156535);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.441207);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.463023);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.55248);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.655654);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,3.339339);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,2.586736);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.041011);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.076983);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.4602303);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.0001654292);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.001038877);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,247.8806);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,254.6851);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,267.0214);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,278.5085);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,290.6637);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,328.8188);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,358.6227);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,404.9453);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,471.3988);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,552.275);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,649.3618);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,718.6671);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,818.4816);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,808.1726);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,672.2484);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,401.6051);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,147.6436);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,12.58299);
   TT_stack_2_stack_2_stack_2->SetBinError(1,3.822976);
   TT_stack_2_stack_2_stack_2->SetBinError(2,3.876031);
   TT_stack_2_stack_2_stack_2->SetBinError(3,4.005115);
   TT_stack_2_stack_2_stack_2->SetBinError(4,4.07689);
   TT_stack_2_stack_2_stack_2->SetBinError(5,4.189643);
   TT_stack_2_stack_2_stack_2->SetBinError(6,4.461093);
   TT_stack_2_stack_2_stack_2->SetBinError(7,4.678033);
   TT_stack_2_stack_2_stack_2->SetBinError(8,5.005917);
   TT_stack_2_stack_2_stack_2->SetBinError(9,5.394771);
   TT_stack_2_stack_2_stack_2->SetBinError(10,5.862754);
   TT_stack_2_stack_2_stack_2->SetBinError(11,6.377268);
   TT_stack_2_stack_2_stack_2->SetBinError(12,6.701214);
   TT_stack_2_stack_2_stack_2->SetBinError(13,7.173003);
   TT_stack_2_stack_2_stack_2->SetBinError(14,7.140221);
   TT_stack_2_stack_2_stack_2->SetBinError(15,6.485287);
   TT_stack_2_stack_2_stack_2->SetBinError(16,5.015145);
   TT_stack_2_stack_2_stack_2->SetBinError(17,3.072641);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.8776881);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,327.5337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,325.8782);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,360.0021);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,297.6938);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,358.1352);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,365.3956);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,408.0549);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,407.0879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,451.2355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,569.4543);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,557.8986);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,575.1887);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,658.1938);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,582.4547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,448.9623);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,242.7134);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,78.44306);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,5.060033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,-0.03784519);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2.047333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,22.89676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,22.88225);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,23.82123);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,22.34799);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,23.09622);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,24.92754);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,25.89667);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,25.97516);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,26.79777);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,30.0711);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,30.08496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,30.92576);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,32.3739);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,30.60824);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,27.2544);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,20.70631);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,12.19722);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,3.476656);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.03885655);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,2.047333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4622.139);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(1,65.36492);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(2,60.45256);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(3,61.94419);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(4,61.18268);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(5,47.78416);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(6,39.46542);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(7,33.06303);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(8,30.10672);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(9,29.08538);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(10,25.14045);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(11,26.38361);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(12,25.42753);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(13,24.60001);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(14,22.1287);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(15,23.94418);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(16,19.41426);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(17,8.146298);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(18,0.292515);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(1,2.429628);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(2,2.408504);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(3,2.365681);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(4,2.290881);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(5,2.116711);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(6,1.966829);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(7,1.837346);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(8,1.715264);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(9,1.622468);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(10,1.538054);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(11,1.552102);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(12,1.533565);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(13,1.57766);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(14,1.584393);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(15,1.512886);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(16,1.355876);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(17,0.9072484);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(18,0.2427689);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetEntries(120993);
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
   598.1824,
   605.1699,
   652.6786,
   603.0349,
   676.6075,
   727.1071,
   795.2363,
   845.3468,
   962.0781,
   1167.265,
   1256.836,
   1342.525,
   1529.636,
   1449.835,
   1163.847,
   667.6265,
   234.4923,
   19.38918,
   -0.03756599,
   2.048372};
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
   23.28261,
   23.29068,
   24.22352,
   22.80927,
   23.60019,
   25.42077,
   26.38676,
   26.54457,
   27.42033,
   30.73439,
   30.85192,
   31.74625,
   33.2652,
   31.60693,
   28.13454,
   21.40254,
   12.62431,
   3.615146,
   0.0388569,
   2.047333};
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
   23.28261,
   23.29068,
   24.22352,
   22.80927,
   23.60019,
   25.42077,
   26.38676,
   26.54457,
   27.42033,
   30.73439,
   30.85192,
   31.74625,
   33.2652,
   31.60693,
   28.13454,
   21.40254,
   12.62431,
   3.615146,
   0.0388569,
   2.047333};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMinimum(1.719193);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMaximum(1719.193);
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
   Data__964->SetBinContent(1,568);
   Data__964->SetBinContent(2,658);
   Data__964->SetBinContent(3,571);
   Data__964->SetBinContent(4,663);
   Data__964->SetBinContent(5,636);
   Data__964->SetBinContent(6,756);
   Data__964->SetBinContent(7,830);
   Data__964->SetBinContent(8,850);
   Data__964->SetBinContent(9,960);
   Data__964->SetBinContent(10,1030);
   Data__964->SetBinContent(11,1226);
   Data__964->SetBinContent(12,1449);
   Data__964->SetBinContent(13,1501);
   Data__964->SetBinContent(14,1548);
   Data__964->SetBinContent(15,1234);
   Data__964->SetBinContent(16,720);
   Data__964->SetBinContent(17,236);
   Data__964->SetBinContent(18,24);
   Data__964->SetBinError(1,23.83275);
   Data__964->SetBinError(2,25.65151);
   Data__964->SetBinError(3,23.89561);
   Data__964->SetBinError(4,25.74879);
   Data__964->SetBinError(5,25.21904);
   Data__964->SetBinError(6,27.49545);
   Data__964->SetBinError(7,28.80972);
   Data__964->SetBinError(8,29.15476);
   Data__964->SetBinError(9,30.98387);
   Data__964->SetBinError(10,32.09361);
   Data__964->SetBinError(11,35.01428);
   Data__964->SetBinError(12,38.06573);
   Data__964->SetBinError(13,38.74274);
   Data__964->SetBinError(14,39.34463);
   Data__964->SetBinError(15,35.12834);
   Data__964->SetBinError(16,26.83282);
   Data__964->SetBinError(17,15.36229);
   Data__964->SetBinError(18,4.898979);
   Data__964->SetEntries(15464);
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
   hframe_copy__965->SetMaximum(10940.31);
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
   hframe_copy__966->SetMaximum(10940.31);
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
