void DPtSumPt_tH_bH()
{
//=========Macro generated from canvas: DPtSumPt_tH_bH/DPtSumPt_tH_bH
//=========  (Fri Nov 18 13:31:48 2022) by ROOT version 6.20/02
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
   0.01578012,
   0.01526169,
   0.01515762,
   0.01483395,
   0.01471079,
   0.01386486,
   0.01343082,
   0.01279255,
   0.01206942,
   0.01112788,
   0.01048779,
   0.009769093,
   0.009118688,
   0.008801742,
   0.009526846,
   0.01237214,
   0.02206035,
   0.1002305,
   -1.496853};
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
   0.01578012,
   0.01526169,
   0.01515762,
   0.01483395,
   0.01471079,
   0.01386486,
   0.01343082,
   0.01279255,
   0.01206942,
   0.01112788,
   0.01048779,
   0.009769093,
   0.009118688,
   0.008801742,
   0.009526846,
   0.01237214,
   0.02206035,
   0.1002305,
   -1.496853};
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
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMinimum(0.8797234);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMaximum(1.120277);
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
   0.01578012,
   0.01526169,
   0.01515762,
   0.01483395,
   0.01471079,
   0.01386486,
   0.01343082,
   0.01279255,
   0.01206942,
   0.01112788,
   0.01048779,
   0.009769093,
   0.009118688,
   0.008801742,
   0.009526846,
   0.01237214,
   0.02206035,
   0.1002305,
   -1.496853,
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
   0.01578012,
   0.01526169,
   0.01515762,
   0.01483395,
   0.01471079,
   0.01386486,
   0.01343082,
   0.01279255,
   0.01206942,
   0.01112788,
   0.01048779,
   0.009769093,
   0.009118688,
   0.008801742,
   0.009526846,
   0.01237214,
   0.02206035,
   0.1002305,
   -1.496853,
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
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMinimum(0.8797234);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMaximum(1.120277);
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
   0.9370996,
   1.038828,
   0.9700453,
   0.9532907,
   0.9777009,
   0.933817,
   0.9477207,
   0.9164177,
   0.9238054,
   0.9487056,
   0.9185809,
   0.9377081,
   0.9301478,
   0.9082874,
   0.9544054,
   0.9561899,
   0.9952844,
   0.7573765};
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
   0.02046869,
   0.0215768,
   0.02060664,
   0.02007484,
   0.02038647,
   0.01921825,
   0.01903453,
   0.01806297,
   0.01756208,
   0.01699818,
   0.01603179,
   0.0156524,
   0.01512286,
   0.014908,
   0.01678274,
   0.02234601,
   0.04228558,
   0.1485338};
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
   0.02046869,
   0.0215768,
   0.02060664,
   0.02007484,
   0.02038647,
   0.01921825,
   0.01903453,
   0.01806297,
   0.01756208,
   0.01699818,
   0.01603179,
   0.0156524,
   0.01512286,
   0.014908,
   0.01678274,
   0.02234601,
   0.04228558,
   0.1485338};
   grae = new TGraphAsymmErrors(18,Graph1_fx3593,Graph1_fy3593,Graph1_felx3593,Graph1_fehx3593,Graph1_fely3593,Graph1_fehy3593);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1358535893593 = new TH1F("Graph_Graph_Graph_Graph1358535893593","Graph",100,0,0.99);
   Graph_Graph_Graph_Graph1358535893593->SetMinimum(0.5636865);
   Graph_Graph_Graph_Graph1358535893593->SetMaximum(1.105561);
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
   DPtSumPt_tH_bH_1->Range(-0.2025316,-2.140441,1.063291,4.881612);
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
   hframe__962->SetMaximum(28859.48);
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
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMinimum(1.634725);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMaximum(6538.899);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,61.27619);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,58.40233);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,68.4593);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,60.69898);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,67.77367);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,64.17886);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,74.95442);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,74.24303);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,76.45934);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,79.51339);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,82.94696);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,95.42998);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,97.53435);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,89.1244);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,75.65314);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,42.33617);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,12.18886);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.3619763);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,4.106848);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,3.415198);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,3.55134);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,3.470163);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,3.558385);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,3.526338);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,3.790259);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,3.64576);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,4.610363);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,3.854394);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,4.752357);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,5.106034);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,4.59808);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,4.845948);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,4.185694);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,3.644276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.852032);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.5272856);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(189561);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1602.169);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1634.403);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1671.951);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1744.254);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1779.89);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1898.665);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2036.319);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2221.515);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2441.359);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2706.487);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3006.647);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3307.86);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,3580.096);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,3661.356);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,3000.974);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1742.678);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,521.6847);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,30.41083);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.01684733);
   TT_stack_2_stack_2_stack_2->SetBinError(1,9.333978);
   TT_stack_2_stack_2_stack_2->SetBinError(2,9.442149);
   TT_stack_2_stack_2_stack_2->SetBinError(3,9.55257);
   TT_stack_2_stack_2_stack_2->SetBinError(4,9.790514);
   TT_stack_2_stack_2_stack_2->SetBinError(5,9.893391);
   TT_stack_2_stack_2_stack_2->SetBinError(6,10.24132);
   TT_stack_2_stack_2_stack_2->SetBinError(7,10.62541);
   TT_stack_2_stack_2_stack_2->SetBinError(8,11.10667);
   TT_stack_2_stack_2_stack_2->SetBinError(9,11.66502);
   TT_stack_2_stack_2_stack_2->SetBinError(10,12.28024);
   TT_stack_2_stack_2_stack_2->SetBinError(11,12.96322);
   TT_stack_2_stack_2_stack_2->SetBinError(12,13.57139);
   TT_stack_2_stack_2_stack_2->SetBinError(13,14.08633);
   TT_stack_2_stack_2_stack_2->SetBinError(14,14.18419);
   TT_stack_2_stack_2_stack_2->SetBinError(15,12.75066);
   TT_stack_2_stack_2_stack_2->SetBinError(16,9.604244);
   TT_stack_2_stack_2_stack_2->SetBinError(17,5.243307);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.285203);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.05109999);
   TT_stack_2_stack_2_stack_2->SetEntries(739478);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,573.2433);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,538.5545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,544.0189);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,560.5378);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,504.7938);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,565.4891);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,504.4759);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,513.0049);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,477.4014);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,497.421);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,484.3973);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,424.1273);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,389.4655);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,336.331);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,311.8702);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,129.8778);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,22.7513);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,3.556228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,-0.08060803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,33.78999);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,32.54043);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,33.09279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,33.51689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,32.97072);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,33.33963);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,33.27114);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,33.97652);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,33.90479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,34.19547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,34.84775);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,34.46429);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,33.99775);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,32.69928);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,29.35998);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,21.34843);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,10.94805);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,3.147926);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.08060803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3287.287);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(1,8.878401);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(2,7.683199);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(3,8.244917);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(4,7.996334);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(5,6.358707);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(6,5.517278);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(7,5.303814);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(8,6.86909);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(9,7.250361);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(10,7.198376);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(11,6.345183);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(12,5.555451);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(13,6.706464);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(14,6.646702);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(15,4.835109);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(16,4.141313);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(17,1.006206);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(18,0.1482796);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(1,1.109491);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(2,1.07389);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(3,1.063714);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(4,1.018889);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(5,0.9863422);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(6,0.9773957);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(7,0.9170702);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(8,0.8904758);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(9,0.8806134);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(10,0.8708222);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(11,0.8741398);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(12,0.8226951);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(13,0.8112242);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(14,0.7934201);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(15,0.7673276);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(16,0.6272478);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(17,0.3703457);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(18,0.0740121);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetEntries(19326);
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
   2236.689,
   2231.36,
   2284.429,
   2365.49,
   2352.458,
   2528.333,
   2615.75,
   2808.763,
   2995.219,
   3283.421,
   3573.991,
   3827.417,
   4067.095,
   4086.812,
   3388.497,
   1914.892,
   556.6248,
   34.32903,
   -0.0637607,
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
   35.29522,
   34.05433,
   34.62652,
   35.08957,
   34.6065,
   35.05497,
   35.13167,
   35.93124,
   36.15056,
   36.53752,
   37.48327,
   37.39039,
   37.08657,
   35.97107,
   32.28169,
   23.6913,
   12.27934,
   3.440816,
   0.09544037,
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
   35.29522,
   34.05433,
   34.62652,
   35.08957,
   34.6065,
   35.05497,
   35.13167,
   35.93124,
   36.15056,
   36.53752,
   37.48327,
   37.39039,
   37.08657,
   35.97107,
   32.28169,
   23.6913,
   12.27934,
   3.440816,
   0.09544037,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMinimum(4.535064);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMaximum(4535.064);
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
   Data__964->SetBinContent(1,2096);
   Data__964->SetBinContent(2,2318);
   Data__964->SetBinContent(3,2216);
   Data__964->SetBinContent(4,2255);
   Data__964->SetBinContent(5,2300);
   Data__964->SetBinContent(6,2361);
   Data__964->SetBinContent(7,2479);
   Data__964->SetBinContent(8,2574);
   Data__964->SetBinContent(9,2767);
   Data__964->SetBinContent(10,3115);
   Data__964->SetBinContent(11,3283);
   Data__964->SetBinContent(12,3589);
   Data__964->SetBinContent(13,3783);
   Data__964->SetBinContent(14,3712);
   Data__964->SetBinContent(15,3234);
   Data__964->SetBinContent(16,1831);
   Data__964->SetBinContent(17,554);
   Data__964->SetBinContent(18,26);
   Data__964->SetBinError(1,45.78209);
   Data__964->SetBinError(2,48.14561);
   Data__964->SetBinError(3,47.07441);
   Data__964->SetBinError(4,47.48684);
   Data__964->SetBinError(5,47.95832);
   Data__964->SetBinError(6,48.59012);
   Data__964->SetBinError(7,49.78956);
   Data__964->SetBinError(8,50.7346);
   Data__964->SetBinError(9,52.60228);
   Data__964->SetBinError(10,55.81219);
   Data__964->SetBinError(11,57.29747);
   Data__964->SetBinError(12,59.90826);
   Data__964->SetBinError(13,61.5061);
   Data__964->SetBinError(14,60.92618);
   Data__964->SetBinError(15,56.86827);
   Data__964->SetBinError(16,42.79019);
   Data__964->SetBinError(17,23.5372);
   Data__964->SetBinError(18,5.09902);
   Data__964->SetEntries(44497);
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
   hframe_copy__965->SetMaximum(28859.48);
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
   hframe_copy__966->SetMaximum(28859.48);
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
