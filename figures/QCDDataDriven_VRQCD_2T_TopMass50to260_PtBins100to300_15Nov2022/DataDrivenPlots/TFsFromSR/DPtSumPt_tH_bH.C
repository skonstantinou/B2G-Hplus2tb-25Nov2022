void DPtSumPt_tH_bH()
{
//=========Macro generated from canvas: DPtSumPt_tH_bH/DPtSumPt_tH_bH
//=========  (Fri Nov 18 13:31:56 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3591[18] = {
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
   Double_t BackgroundStatSystError_fy3591[18] = {
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
   Double_t BackgroundStatSystError_felx3591[18] = {
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
   Double_t BackgroundStatSystError_fely3591[18] = {
   0.03214877,
   0.03214287,
   0.03230166,
   0.03121381,
   0.03189987,
   0.03288734,
   0.0329425,
   0.03273855,
   0.03104279,
   0.03121549,
   0.03061732,
   0.02906802,
   0.02935275,
   0.03071079,
   0.03469143,
   0.0482552,
   0.08373676,
   0.2892601};
   Double_t BackgroundStatSystError_fehx3591[18] = {
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
   Double_t BackgroundStatSystError_fehy3591[18] = {
   0.03214877,
   0.03214287,
   0.03230166,
   0.03121381,
   0.03189987,
   0.03288734,
   0.0329425,
   0.03273855,
   0.03104279,
   0.03121549,
   0.03061732,
   0.02906802,
   0.02935275,
   0.03071079,
   0.03469143,
   0.0482552,
   0.08373676,
   0.2892601};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,BackgroundStatSystError_fx3591,BackgroundStatSystError_fy3591,BackgroundStatSystError_felx3591,BackgroundStatSystError_fehx3591,BackgroundStatSystError_fely3591,BackgroundStatSystError_fehy3591);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError358335873591 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError358335873591","Graph",100,0,0.99);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMinimum(0.6528879);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMaximum(1.347112);
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
   0.03214877,
   0.03214287,
   0.03230166,
   0.03121381,
   0.03189987,
   0.03288734,
   0.0329425,
   0.03273855,
   0.03104279,
   0.03121549,
   0.03061732,
   0.02906802,
   0.02935275,
   0.03071079,
   0.03469143,
   0.0482552,
   0.08373676,
   0.2892601,
   0,
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
   0.03214877,
   0.03214287,
   0.03230166,
   0.03121381,
   0.03189987,
   0.03288734,
   0.0329425,
   0.03273855,
   0.03104279,
   0.03121549,
   0.03061732,
   0.02906802,
   0.02935275,
   0.03071079,
   0.03469143,
   0.0482552,
   0.08373676,
   0.2892601,
   0,
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
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMinimum(0.6528879);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMaximum(1.347112);
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
   1.058564,
   1.057529,
   1.035405,
   1.019595,
   0.9823499,
   0.964913,
   1.095459,
   0.9715314,
   0.9259861,
   0.9076921,
   0.9574159,
   0.9319857,
   0.9568094,
   1.103701,
   1.00503,
   1.176405,
   1.054589,
   1.226964};
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
   0.03308014,
   0.03293539,
   0.03361065,
   0.03235586,
   0.03242238,
   0.03339219,
   0.03647481,
   0.03398958,
   0.03284134,
   0.03312216,
   0.03366095,
   0.0323692,
   0.03441404,
   0.03959504,
   0.04394691,
   0.07042951,
   0.1194087,
   0.4637486};
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
   0.03308014,
   0.03293539,
   0.03361065,
   0.03235586,
   0.03242238,
   0.03339219,
   0.03647481,
   0.03398958,
   0.03284134,
   0.03312216,
   0.03366095,
   0.0323692,
   0.03441404,
   0.03959504,
   0.04394691,
   0.07042951,
   0.1194087,
   0.4637486};
   grae = new TGraphAsymmErrors(18,Graph1_fx3593,Graph1_fy3593,Graph1_felx3593,Graph1_fehx3593,Graph1_fely3593,Graph1_fehy3593);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1358535893593 = new TH1F("Graph_Graph_Graph_Graph1358535893593","Graph",100,0,0.99);
   Graph_Graph_Graph_Graph1358535893593->SetMinimum(0.6704652);
   Graph_Graph_Graph_Graph1358535893593->SetMaximum(1.783462);
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
   DPtSumPt_tH_bH_1->Range(-0.2025316,-2.127356,1.063291,4.240423);
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
   hframe__962->SetMaximum(7217);
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
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMinimum(0.3899658);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMaximum(1559.863);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,14.77617);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,16.29393);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,20.90559);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,20.11428);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,19.09246);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,14.70208);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,18.07677);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,17.1024);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,19.45354);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,18.95109);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,19.1295);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,22.93147);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,22.22897);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,16.88772);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,15.55508);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,6.390662);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,2.83264);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.03856002);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.685152);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.444249);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.522778);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.890506);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.845077);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.650571);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.288648);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.880731);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.308331);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.003055);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.819638);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.274888);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.183256);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.95196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.831489);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.177478);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.6732049);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.1707342);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,204.5157);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,207.9719);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,206.4519);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,220.1623);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,216.9684);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,226.6459);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,238.6822);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,231.6378);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,256.6432);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,270.9399);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,286.6462);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,311.0849);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,335.0078);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,316.9807);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,241.1665);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,137.8084);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,45.41042);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,4.737096);
   TT_stack_2_stack_2_stack_2->SetBinError(1,3.483502);
   TT_stack_2_stack_2_stack_2->SetBinError(2,3.50985);
   TT_stack_2_stack_2_stack_2->SetBinError(3,3.490736);
   TT_stack_2_stack_2_stack_2->SetBinError(4,3.619046);
   TT_stack_2_stack_2_stack_2->SetBinError(5,3.590239);
   TT_stack_2_stack_2_stack_2->SetBinError(6,3.675043);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.783642);
   TT_stack_2_stack_2_stack_2->SetBinError(8,3.723751);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.929807);
   TT_stack_2_stack_2_stack_2->SetBinError(10,4.029647);
   TT_stack_2_stack_2_stack_2->SetBinError(11,4.140515);
   TT_stack_2_stack_2_stack_2->SetBinError(12,4.287566);
   TT_stack_2_stack_2_stack_2->SetBinError(13,4.447232);
   TT_stack_2_stack_2_stack_2->SetBinError(14,4.281785);
   TT_stack_2_stack_2_stack_2->SetBinError(15,3.718358);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.777243);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.577736);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.5100121);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,748.0559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,750.6486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,689.1925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,733.6397);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,698.4331);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,624.015);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,566.6398);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,592.2003);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,582.4474);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,537.482);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,539.2072);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,555.4823);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,450.6566);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,370.1268);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,263.6607);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,92.96418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,25.7194);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.9294847);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,30.85735);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,31.04329);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,29.29113);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,30.12418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,29.53567);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,28.17289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,26.76195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,27.21327);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,26.25903);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,25.43179);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,25.47272);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,25.39631);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,23.19061);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,21.10193);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,17.57052);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,11.03965);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,5.951089);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,1.560169);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7515.688);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(1,1.660263);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(2,1.202089);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(3,1.111208);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(4,2.110803);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(5,1.724993);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(6,1.072746);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(7,1.079066);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(8,0.9569706);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(9,1.575219);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(10,1.507406);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(11,1.256143);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(12,0.6853945);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(13,1.496845);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(14,1.071632);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(15,1.116403);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(16,1.162523);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(17,0.451302);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(18,0.01981581);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(1,0.4658339);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(2,0.4631935);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(3,0.4828158);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(4,0.4811794);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(5,0.4717459);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(6,0.4614678);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(7,0.4441105);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(8,0.4436516);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(9,0.467597);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(10,0.4347694);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(11,0.4247554);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(12,0.4168286);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(13,0.4386604);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(14,0.3840704);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(15,0.3799127);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(16,0.3336484);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(17,0.2146223);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(18,0.01981581);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetEntries(4205);
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
   967.3478,
   974.9144,
   916.55,
   973.9163,
   934.494,
   865.363,
   823.3988,
   840.9404,
   858.5442,
   827.373,
   844.9828,
   889.4987,
   807.8934,
   703.9952,
   520.3823,
   237.1633,
   73.96246,
   5.705141,
   0,
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
   31.09904,
   31.33655,
   29.60608,
   30.39964,
   29.81023,
   28.45948,
   27.12482,
   27.53117,
   26.65161,
   25.82685,
   25.87111,
   25.85597,
   23.7139,
   21.62025,
   18.0528,
   11.44436,
   6.193377,
   1.65027,
   0,
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
   31.09904,
   31.33655,
   29.60608,
   30.39964,
   29.81023,
   28.45948,
   27.12482,
   27.53117,
   26.65161,
   25.82685,
   25.87111,
   25.85597,
   23.7139,
   21.62025,
   18.0528,
   11.44436,
   6.193377,
   1.65027,
   0,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMinimum(1.106876);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMaximum(1106.876);
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
   Data__964->SetBinContent(1,1024);
   Data__964->SetBinContent(2,1031);
   Data__964->SetBinContent(3,949);
   Data__964->SetBinContent(4,993);
   Data__964->SetBinContent(5,918);
   Data__964->SetBinContent(6,835);
   Data__964->SetBinContent(7,902);
   Data__964->SetBinContent(8,817);
   Data__964->SetBinContent(9,795);
   Data__964->SetBinContent(10,751);
   Data__964->SetBinContent(11,809);
   Data__964->SetBinContent(12,829);
   Data__964->SetBinContent(13,773);
   Data__964->SetBinContent(14,777);
   Data__964->SetBinContent(15,523);
   Data__964->SetBinContent(16,279);
   Data__964->SetBinContent(17,78);
   Data__964->SetBinContent(18,7);
   Data__964->SetBinContent(20,1);
   Data__964->SetBinError(1,32);
   Data__964->SetBinError(2,32.10919);
   Data__964->SetBinError(3,30.80584);
   Data__964->SetBinError(4,31.5119);
   Data__964->SetBinError(5,30.29851);
   Data__964->SetBinError(6,28.89637);
   Data__964->SetBinError(7,30.03331);
   Data__964->SetBinError(8,28.58321);
   Data__964->SetBinError(9,28.19574);
   Data__964->SetBinError(10,27.40438);
   Data__964->SetBinError(11,28.44293);
   Data__964->SetBinError(12,28.79236);
   Data__964->SetBinError(13,27.80288);
   Data__964->SetBinError(14,27.87472);
   Data__964->SetBinError(15,22.86919);
   Data__964->SetBinError(16,16.70329);
   Data__964->SetBinError(17,8.831761);
   Data__964->SetBinError(18,2.645751);
   Data__964->SetBinError(20,1);
   Data__964->SetEntries(13095);
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
   hframe_copy__965->SetMaximum(7217);
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
   hframe_copy__966->SetMaximum(7217);
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
