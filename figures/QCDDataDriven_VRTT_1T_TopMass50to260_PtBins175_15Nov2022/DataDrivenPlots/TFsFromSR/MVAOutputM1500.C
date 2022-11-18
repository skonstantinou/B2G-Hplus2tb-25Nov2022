void MVAOutputM1500()
{
//=========Macro generated from canvas: MVAOutputM1500/MVAOutputM1500
//=========  (Fri Nov 18 13:27:31 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM1500 = new TCanvas("MVAOutputM1500", "MVAOutputM1500",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM1500->SetHighLightColor(2);
   MVAOutputM1500->Range(0,0,1,1);
   MVAOutputM1500->SetFillColor(0);
   MVAOutputM1500->SetBorderMode(0);
   MVAOutputM1500->SetBorderSize(2);
   MVAOutputM1500->SetTickx(1);
   MVAOutputM1500->SetTicky(1);
   MVAOutputM1500->SetLeftMargin(0.16);
   MVAOutputM1500->SetRightMargin(0.05);
   MVAOutputM1500->SetTopMargin(0.06);
   MVAOutputM1500->SetBottomMargin(0.13);
   MVAOutputM1500->SetFrameFillStyle(0);
   MVAOutputM1500->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM1500_2
   TPad *MVAOutputM1500_2 = new TPad("MVAOutputM1500_2", "MVAOutputM1500_2",0,0,1,0.304);
   MVAOutputM1500_2->Draw();
   MVAOutputM1500_2->cd();
   MVAOutputM1500_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM1500_2->SetFillColor(0);
   MVAOutputM1500_2->SetFillStyle(4000);
   MVAOutputM1500_2->SetBorderMode(0);
   MVAOutputM1500_2->SetBorderSize(2);
   MVAOutputM1500_2->SetTickx(1);
   MVAOutputM1500_2->SetTicky(1);
   MVAOutputM1500_2->SetLeftMargin(0.16);
   MVAOutputM1500_2->SetRightMargin(0.05);
   MVAOutputM1500_2->SetTopMargin(0);
   MVAOutputM1500_2->SetBottomMargin(0.3421053);
   MVAOutputM1500_2->SetFrameFillStyle(0);
   MVAOutputM1500_2->SetFrameBorderMode(0);
   MVAOutputM1500_2->SetFrameFillStyle(0);
   MVAOutputM1500_2->SetFrameBorderMode(0);
   
   TH1F *hframe__267 = new TH1F("hframe__267","",1000,0,1.01);
   hframe__267->SetMinimum(0.3);
   hframe__267->SetMaximum(1.7);
   hframe__267->SetDirectory(0);
   hframe__267->SetStats(0);
   hframe__267->SetLineStyle(0);
   hframe__267->SetMarkerStyle(20);
   hframe__267->GetXaxis()->SetTitle("DNN Output");
   hframe__267->GetXaxis()->SetLabelFont(43);
   hframe__267->GetXaxis()->SetLabelOffset(0.007);
   hframe__267->GetXaxis()->SetLabelSize(27);
   hframe__267->GetXaxis()->SetTitleSize(33);
   hframe__267->GetXaxis()->SetTitleOffset(2.960526);
   hframe__267->GetXaxis()->SetTitleFont(43);
   hframe__267->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__267->GetYaxis()->SetNdivisions(505);
   hframe__267->GetYaxis()->SetLabelFont(43);
   hframe__267->GetYaxis()->SetLabelOffset(0.007);
   hframe__267->GetYaxis()->SetLabelSize(21);
   hframe__267->GetYaxis()->SetTitleSize(33);
   hframe__267->GetYaxis()->SetTitleOffset(1.5625);
   hframe__267->GetYaxis()->SetTitleFont(43);
   hframe__267->GetZaxis()->SetLabelFont(43);
   hframe__267->GetZaxis()->SetLabelOffset(0.007);
   hframe__267->GetZaxis()->SetLabelSize(27);
   hframe__267->GetZaxis()->SetTitleSize(33);
   hframe__267->GetZaxis()->SetTitleOffset(1);
   hframe__267->GetZaxis()->SetTitleFont(43);
   hframe__267->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3153[20] = {
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
   Double_t BackgroundStatSystError_fy3153[20] = {
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
   Double_t BackgroundStatSystError_felx3153[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3153[20] = {
   0.009870866,
   0.01737937,
   0.02036085,
   0.02284002,
   0.02594611,
   0.02857808,
   0.03105601,
   0.03622519,
   0.03863095,
   0.04274425,
   0.04895617,
   0.05418941,
   0.05832133,
   0.06625326,
   0.06931904,
   0.08027312,
   0.08830491,
   0.08264409,
   0.08918213,
   0.0828322};
   Double_t BackgroundStatSystError_fehx3153[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3153[20] = {
   0.009870866,
   0.01737937,
   0.02036085,
   0.02284002,
   0.02594611,
   0.02857808,
   0.03105601,
   0.03622519,
   0.03863095,
   0.04274425,
   0.04895617,
   0.05418941,
   0.05832133,
   0.06625326,
   0.06931904,
   0.08027312,
   0.08830491,
   0.08264409,
   0.08918213,
   0.0828322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3153,BackgroundStatSystError_fy3153,BackgroundStatSystError_felx3153,BackgroundStatSystError_fehx3153,BackgroundStatSystError_fely3153,BackgroundStatSystError_fehy3153);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1248;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError314531493153 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError314531493153","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMinimum(0.8929814);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMaximum(1.107019);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError314531493153);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3154[20] = {
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
   Double_t BackgroundStatError_fy3154[20] = {
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
   Double_t BackgroundStatError_felx3154[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3154[20] = {
   0.009870866,
   0.01737937,
   0.02036085,
   0.02284002,
   0.02594611,
   0.02857808,
   0.03105601,
   0.03622519,
   0.03863095,
   0.04274425,
   0.04895617,
   0.05418941,
   0.05832133,
   0.06625326,
   0.06931904,
   0.08027312,
   0.08830491,
   0.08264409,
   0.08918213,
   0.0828322};
   Double_t BackgroundStatError_fehx3154[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3154[20] = {
   0.009870866,
   0.01737937,
   0.02036085,
   0.02284002,
   0.02594611,
   0.02857808,
   0.03105601,
   0.03622519,
   0.03863095,
   0.04274425,
   0.04895617,
   0.05418941,
   0.05832133,
   0.06625326,
   0.06931904,
   0.08027312,
   0.08830491,
   0.08264409,
   0.08918213,
   0.0828322};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3154,BackgroundStatError_fy3154,BackgroundStatError_felx3154,BackgroundStatError_fehx3154,BackgroundStatError_fely3154,BackgroundStatError_fehy3154);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1247;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError314631503154 = new TH1F("Graph_Graph_Graph_BackgroundStatError314631503154","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMinimum(0.8929814);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMaximum(1.107019);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError314631503154);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx39[2] = {
   0,
   1.01};
   Double_t Graph0_fy39[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx39,Graph0_fy39);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0373839 = new TH1F("Graph_Graph_Graph_Graph0373839","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0373839->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0373839->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0373839->SetDirectory(0);
   Graph_Graph_Graph_Graph0373839->SetStats(0);
   Graph_Graph_Graph_Graph0373839->SetLineStyle(0);
   Graph_Graph_Graph_Graph0373839->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0373839);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3155[20] = {
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
   Double_t Graph1_fy3155[20] = {
   0.9294231,
   1.003476,
   1.015396,
   1.002394,
   1.00641,
   0.9604512,
   1.003451,
   0.9656305,
   1.01266,
   1.115853,
   1.095729,
   1.114365,
   1.066198,
   1.148287,
   1.226169,
   1.04936,
   1.076588,
   0.8611346,
   1.220527,
   0.8166661};
   Double_t Graph1_felx3155[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3155[20] = {
   0.01155924,
   0.0217787,
   0.02581607,
   0.02894868,
   0.03238072,
   0.03490819,
   0.03811797,
   0.04366732,
   0.04731851,
   0.0553108,
   0.06233384,
   0.07005953,
   0.07340012,
   0.08631051,
   0.0969372,
   0.09871548,
   0.1141181,
   0.09285853,
   0.1245695,
   0.08910558};
   Double_t Graph1_fehx3155[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3155[20] = {
   0.01155924,
   0.0217787,
   0.02581607,
   0.02894868,
   0.03238072,
   0.03490819,
   0.03811797,
   0.04366732,
   0.04731851,
   0.0553108,
   0.06233384,
   0.07005953,
   0.07340012,
   0.08631051,
   0.0969372,
   0.09871548,
   0.1141181,
   0.09285853,
   0.1245695,
   0.08910558};
   grae = new TGraphAsymmErrors(20,Graph1_fx3155,Graph1_fy3155,Graph1_felx3155,Graph1_fehx3155,Graph1_fely3155,Graph1_fehy3155);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1314731513155 = new TH1F("Graph_Graph_Graph_Graph1314731513155","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1314731513155->SetMinimum(0.6658069);
   Graph_Graph_Graph_Graph1314731513155->SetMaximum(1.40685);
   Graph_Graph_Graph_Graph1314731513155->SetDirectory(0);
   Graph_Graph_Graph_Graph1314731513155->SetStats(0);
   Graph_Graph_Graph_Graph1314731513155->SetLineStyle(0);
   Graph_Graph_Graph_Graph1314731513155->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1314731513155);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__268 = new TH1F("hframe_copy__268","",1000,0,1.01);
   hframe_copy__268->SetMinimum(0.3);
   hframe_copy__268->SetMaximum(1.7);
   hframe_copy__268->SetDirectory(0);
   hframe_copy__268->SetStats(0);
   hframe_copy__268->SetLineStyle(0);
   hframe_copy__268->SetMarkerStyle(20);
   hframe_copy__268->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__268->GetXaxis()->SetLabelFont(43);
   hframe_copy__268->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__268->GetXaxis()->SetLabelSize(27);
   hframe_copy__268->GetXaxis()->SetTitleSize(33);
   hframe_copy__268->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__268->GetXaxis()->SetTitleFont(43);
   hframe_copy__268->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__268->GetYaxis()->SetNdivisions(505);
   hframe_copy__268->GetYaxis()->SetLabelFont(43);
   hframe_copy__268->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__268->GetYaxis()->SetLabelSize(21);
   hframe_copy__268->GetYaxis()->SetTitleSize(33);
   hframe_copy__268->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__268->GetYaxis()->SetTitleFont(43);
   hframe_copy__268->GetZaxis()->SetLabelFont(43);
   hframe_copy__268->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__268->GetZaxis()->SetLabelSize(27);
   hframe_copy__268->GetZaxis()->SetTitleSize(33);
   hframe_copy__268->GetZaxis()->SetTitleOffset(1);
   hframe_copy__268->GetZaxis()->SetTitleFont(43);
   hframe_copy__268->Draw("sameaxis");
   MVAOutputM1500_2->Modified();
   MVAOutputM1500->cd();
  
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
   MVAOutputM1500->cd();
  
// ------------>Primitives in pad: MVAOutputM1500_1
   TPad *MVAOutputM1500_1 = new TPad("MVAOutputM1500_1", "MVAOutputM1500_1",0,0.2897959,1,1);
   MVAOutputM1500_1->Draw();
   MVAOutputM1500_1->cd();
   MVAOutputM1500_1->Range(-0.204557,-2.173755,1.073924,6.514015);
   MVAOutputM1500_1->SetFillColor(0);
   MVAOutputM1500_1->SetFillStyle(4000);
   MVAOutputM1500_1->SetBorderMode(0);
   MVAOutputM1500_1->SetBorderSize(2);
   MVAOutputM1500_1->SetLogy();
   MVAOutputM1500_1->SetTickx(1);
   MVAOutputM1500_1->SetTicky(1);
   MVAOutputM1500_1->SetLeftMargin(0.16);
   MVAOutputM1500_1->SetRightMargin(0.05);
   MVAOutputM1500_1->SetTopMargin(0.06);
   MVAOutputM1500_1->SetBottomMargin(0.02);
   MVAOutputM1500_1->SetFrameFillStyle(0);
   MVAOutputM1500_1->SetFrameBorderMode(0);
   MVAOutputM1500_1->SetFrameFillStyle(0);
   MVAOutputM1500_1->SetFrameBorderMode(0);
   
   TH1F *hframe__269 = new TH1F("hframe__269","",1000,0,1.01);
   hframe__269->SetMinimum(0.01);
   hframe__269->SetMaximum(983442.5);
   hframe__269->SetDirectory(0);
   hframe__269->SetStats(0);
   hframe__269->SetLineStyle(0);
   hframe__269->SetMarkerStyle(20);
   hframe__269->GetXaxis()->SetLabelFont(43);
   hframe__269->GetXaxis()->SetLabelOffset(0.007);
   hframe__269->GetXaxis()->SetLabelSize(0);
   hframe__269->GetXaxis()->SetTitleSize(0);
   hframe__269->GetXaxis()->SetTitleOffset(0.9);
   hframe__269->GetXaxis()->SetTitleFont(43);
   hframe__269->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__269->GetYaxis()->SetLabelFont(43);
   hframe__269->GetYaxis()->SetLabelOffset(0.007);
   hframe__269->GetYaxis()->SetLabelSize(27);
   hframe__269->GetYaxis()->SetTitleSize(33);
   hframe__269->GetYaxis()->SetTitleOffset(1.5625);
   hframe__269->GetYaxis()->SetTitleFont(43);
   hframe__269->GetZaxis()->SetLabelFont(43);
   hframe__269->GetZaxis()->SetLabelOffset(0.007);
   hframe__269->GetZaxis()->SetLabelSize(27);
   hframe__269->GetZaxis()->SetTitleSize(33);
   hframe__269->GetZaxis()->SetTitleOffset(1);
   hframe__269->GetZaxis()->SetTitleFont(43);
   hframe__269->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis229[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_37_stack_38_stack_39 = new TH1F("StackedMCstackHist_stack_37_stack_38_stack_39","StackedMCstackHist",20, xAxis229);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMinimum(10.37546);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMaximum(241356.3);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetDirectory(0);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetStats(0);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetLineStyle(0);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMarkerStyle(20);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_37_stack_38_stack_39);
   
   Double_t xAxis230[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM1500Inclusive",20, xAxis230);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,3291.65);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1140.94);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,702.9754);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,718.7238);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,421.8132);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,475.6512);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,352.0036);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,351.4924);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,207.5297);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,195.6687);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,148.6528);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,139.6673);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,114.2063);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,84.23794);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,50.00562);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,60.64396);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,71.60287);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,76.10143);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,80.16251);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,82.66315);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,132.0321);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,91.53685);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,54.38241);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,50.97141);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,43.84703);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,41.73873);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,35.10314);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,38.55778);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,30.90276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,24.88245);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,22.49563);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,22.94148);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,24.64676);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,18.94086);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,17.29709);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,14.97264);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,13.19619);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,14.16239);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,17.49506);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,18.3062);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1792.93);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,200);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis231[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1500Inclusive",20, xAxis231);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,89509.56);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,25077.91);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,18325.86);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,14438.15);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,11469.27);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,9286.375);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,7668.887);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5982.525);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,5001.583);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4172.208);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3382.4);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2772.354);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2325.989);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1826.323);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1606.939);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1247.11);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1070.205);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,956.1359);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1028.566);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,965.9361);
   TT_stack_2_stack_2_stack_2->SetBinError(1,323.5266);
   TT_stack_2_stack_2_stack_2->SetBinError(2,171.5405);
   TT_stack_2_stack_2_stack_2->SetBinError(3,146.8607);
   TT_stack_2_stack_2_stack_2->SetBinError(4,130.8093);
   TT_stack_2_stack_2_stack_2->SetBinError(5,116.7155);
   TT_stack_2_stack_2_stack_2->SetBinError(6,105.0789);
   TT_stack_2_stack_2_stack_2->SetBinError(7,95.3707);
   TT_stack_2_stack_2_stack_2->SetBinError(8,84.54701);
   TT_stack_2_stack_2_stack_2->SetBinError(9,77.03845);
   TT_stack_2_stack_2_stack_2->SetBinError(10,70.20812);
   TT_stack_2_stack_2_stack_2->SetBinError(11,63.44754);
   TT_stack_2_stack_2_stack_2->SetBinError(12,57.64975);
   TT_stack_2_stack_2_stack_2->SetBinError(13,52.36551);
   TT_stack_2_stack_2_stack_2->SetBinError(14,46.57836);
   TT_stack_2_stack_2_stack_2->SetBinError(15,43.61485);
   TT_stack_2_stack_2_stack_2->SetBinError(16,38.4465);
   TT_stack_2_stack_2_stack_2->SetBinError(17,35.65417);
   TT_stack_2_stack_2_stack_2->SetBinError(18,33.70547);
   TT_stack_2_stack_2_stack_2->SetBinError(19,34.91298);
   TT_stack_2_stack_2_stack_2->SetBinError(20,33.94978);
   TT_stack_2_stack_2_stack_2->SetEntries(176805.9);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,200);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis232[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1500Inclusive",20, xAxis232);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,46317.34);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16094.08);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11442.04);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8765.854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7305.861);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6001.398);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,5791.438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3794.081);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,3836.369);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,2926.989);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2109.029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1628.68);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1517.792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1172.292);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,952.8092);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,845.9395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,511.564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,965.1276);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,464.3628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1008.545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1328.019);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,709.2017);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,600.3223);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,528.0521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,482.2288);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,436.0689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,416.7437);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,354.9297);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,339.4337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,302.786);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,267.785);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,238.1065);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,223.462);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,197.9631);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,174.7152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,167.8883);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,140.9641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,160.9708);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,134.7469);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,165.975);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3626.225);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,200);
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
   Double_t xAxis233[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__270 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__270","h_SR_MVAOutputM1500Inclusive",20, xAxis233);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(1,87.89487);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(2,52.34059);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(3,66.53791);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(4,57.73967);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(5,60.65173);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(6,55.78642);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(7,49.32819);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(8,56.21606);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(9,30.17387);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(10,34.19331);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(11,15.42338);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(12,17.53443);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(13,5.609846);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(14,19.96688);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(15,12.68191);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(16,6.802989);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(17,5.484076);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(18,9.815413);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(19,6.535482);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(20,3.646234);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(1,13.70791);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(2,11.60035);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(3,12.12859);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(4,12.44278);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(5,12.05126);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(6,11.66913);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(7,10.80173);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(8,9.938291);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(9,9.495741);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(10,9.527355);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(11,8.529214);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(12,7.71703);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(13,7.831057);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(14,6.626695);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(15,6.095255);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(16,5.994623);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(17,5.635572);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(18,5.010637);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(19,4.184317);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(20,5.04583);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetEntries(250.0168);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3156[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3156[20] = {
   139118.6,
   42312.93,
   30470.88,
   23922.73,
   19196.94,
   15763.42,
   13812.33,
   10128.1,
   9045.48,
   7294.865,
   5640.082,
   4540.702,
   3957.988,
   3082.854,
   2609.754,
   2153.694,
   1653.371,
   1997.365,
   1573.091,
   2057.144};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3156[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3156[20] = {
   1373.221,
   735.3721,
   620.4131,
   546.3957,
   498.0861,
   450.4884,
   428.9558,
   366.8923,
   349.4355,
   311.8135,
   276.1168,
   246.058,
   230.8351,
   204.2491,
   180.9056,
   172.8837,
   146.0008,
   165.0704,
   140.2916,
   170.3978};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3156[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3156[20] = {
   1373.221,
   735.3721,
   620.4131,
   546.3957,
   498.0861,
   450.4884,
   428.9558,
   366.8923,
   349.4355,
   311.8135,
   276.1168,
   246.058,
   230.8351,
   204.2491,
   180.9056,
   172.8837,
   146.0008,
   165.0704,
   140.2916,
   170.3978};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3156,BkgSum-SR-Inclusive_sum_errors_fy3156,BkgSum-SR-Inclusive_sum_errors_felx3156,BkgSum-SR-Inclusive_sum_errors_fehx3156,BkgSum-SR-Inclusive_sum_errors_fely3156,BkgSum-SR-Inclusive_sum_errors_fehy3156);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1246;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMinimum(1289.519);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMaximum(154397.7);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors314831523156);
   
   grae->Draw("e2 ");
   Double_t xAxis234[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__271 = new TH1F("Data__271","h_SR_MVAOutputM1500Inclusive",20, xAxis234);
   Data__271->SetBinContent(1,129300);
   Data__271->SetBinContent(2,42460);
   Data__271->SetBinContent(3,30940);
   Data__271->SetBinContent(4,23980);
   Data__271->SetBinContent(5,19320);
   Data__271->SetBinContent(6,15140);
   Data__271->SetBinContent(7,13860);
   Data__271->SetBinContent(8,9780);
   Data__271->SetBinContent(9,9160);
   Data__271->SetBinContent(10,8140);
   Data__271->SetBinContent(11,6180);
   Data__271->SetBinContent(12,5060);
   Data__271->SetBinContent(13,4220);
   Data__271->SetBinContent(14,3540);
   Data__271->SetBinContent(15,3200);
   Data__271->SetBinContent(16,2260);
   Data__271->SetBinContent(17,1780);
   Data__271->SetBinContent(18,1720);
   Data__271->SetBinContent(19,1920);
   Data__271->SetBinContent(20,1680);
   Data__271->SetBinError(1,1608.104);
   Data__271->SetBinError(2,921.5205);
   Data__271->SetBinError(3,786.6384);
   Data__271->SetBinError(4,692.5316);
   Data__271->SetBinError(5,621.6108);
   Data__271->SetBinError(6,550.2727);
   Data__271->SetBinError(7,526.4979);
   Data__271->SetBinError(8,442.2669);
   Data__271->SetBinError(9,428.0187);
   Data__271->SetBinError(10,403.4848);
   Data__271->SetBinError(11,351.5679);
   Data__271->SetBinError(12,318.1195);
   Data__271->SetBinError(13,290.5168);
   Data__271->SetBinError(14,266.0827);
   Data__271->SetBinError(15,252.9822);
   Data__271->SetBinError(16,212.6029);
   Data__271->SetBinError(17,188.6796);
   Data__271->SetBinError(18,185.4724);
   Data__271->SetBinError(19,195.9592);
   Data__271->SetBinError(20,183.303);
   Data__271->SetEntries(16682);
   Data__271->SetDirectory(0);
   Data__271->SetFillStyle(3001);
   Data__271->SetLineWidth(2);
   Data__271->SetMarkerStyle(20);
   Data__271->SetMarkerSize(1.2);
   Data__271->GetXaxis()->SetRange(1,200);
   Data__271->GetXaxis()->SetLabelFont(42);
   Data__271->GetXaxis()->SetTitleOffset(1);
   Data__271->GetXaxis()->SetTitleFont(42);
   Data__271->GetYaxis()->SetLabelFont(42);
   Data__271->GetYaxis()->SetTitleFont(42);
   Data__271->GetZaxis()->SetLabelFont(42);
   Data__271->GetZaxis()->SetTitleOffset(1);
   Data__271->GetZaxis()->SetTitleFont(42);
   Data__271->Draw("EP same");
   
   TLegend *leg = new TLegend(0.39,0.76,0.92,0.91,NULL,"brNDC");
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

   ci = 1246;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1246;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__272 = new TH1F("hframe_copy__272","",1000,0,1.01);
   hframe_copy__272->SetMinimum(0.01);
   hframe_copy__272->SetMaximum(983442.5);
   hframe_copy__272->SetDirectory(0);
   hframe_copy__272->SetStats(0);
   hframe_copy__272->SetLineStyle(0);
   hframe_copy__272->SetMarkerStyle(20);
   hframe_copy__272->GetXaxis()->SetLabelFont(43);
   hframe_copy__272->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__272->GetXaxis()->SetLabelSize(0);
   hframe_copy__272->GetXaxis()->SetTitleSize(0);
   hframe_copy__272->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__272->GetXaxis()->SetTitleFont(43);
   hframe_copy__272->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__272->GetYaxis()->SetLabelFont(43);
   hframe_copy__272->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__272->GetYaxis()->SetLabelSize(27);
   hframe_copy__272->GetYaxis()->SetTitleSize(33);
   hframe_copy__272->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__272->GetYaxis()->SetTitleFont(43);
   hframe_copy__272->GetZaxis()->SetLabelFont(43);
   hframe_copy__272->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__272->GetZaxis()->SetLabelSize(27);
   hframe_copy__272->GetZaxis()->SetTitleSize(33);
   hframe_copy__272->GetZaxis()->SetTitleOffset(1);
   hframe_copy__272->GetZaxis()->SetTitleFont(43);
   hframe_copy__272->Draw("sameaxis");
   
   TH1F *hframe_copy__273 = new TH1F("hframe_copy__273","",1000,0,1.01);
   hframe_copy__273->SetMinimum(0.01);
   hframe_copy__273->SetMaximum(983442.5);
   hframe_copy__273->SetDirectory(0);
   hframe_copy__273->SetStats(0);
   hframe_copy__273->SetLineStyle(0);
   hframe_copy__273->SetMarkerStyle(20);
   hframe_copy__273->GetXaxis()->SetLabelFont(43);
   hframe_copy__273->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__273->GetXaxis()->SetLabelSize(0);
   hframe_copy__273->GetXaxis()->SetTitleSize(0);
   hframe_copy__273->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__273->GetXaxis()->SetTitleFont(43);
   hframe_copy__273->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__273->GetYaxis()->SetLabelFont(43);
   hframe_copy__273->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__273->GetYaxis()->SetLabelSize(27);
   hframe_copy__273->GetYaxis()->SetTitleSize(33);
   hframe_copy__273->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__273->GetYaxis()->SetTitleFont(43);
   hframe_copy__273->GetZaxis()->SetLabelFont(43);
   hframe_copy__273->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__273->GetZaxis()->SetLabelSize(27);
   hframe_copy__273->GetZaxis()->SetTitleSize(33);
   hframe_copy__273->GetZaxis()->SetTitleOffset(1);
   hframe_copy__273->GetZaxis()->SetTitleFont(43);
   hframe_copy__273->Draw("sameaxis");
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
   MVAOutputM1500_1->Modified();
   MVAOutputM1500->cd();
   MVAOutputM1500->Modified();
   MVAOutputM1500->cd();
   MVAOutputM1500->SetSelected(MVAOutputM1500);
}
