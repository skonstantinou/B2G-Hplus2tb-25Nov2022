void MVAOutputM1500()
{
//=========Macro generated from canvas: MVAOutputM1500/MVAOutputM1500
//=========  (Fri Nov 18 13:27:39 2022) by ROOT version 6.20/02
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
   0.004588102,
   0.008580506,
   0.01103607,
   0.01272304,
   0.0139792,
   0.01493403,
   0.01613021,
   0.01688845,
   0.01799801,
   0.01907567,
   0.02042843,
   0.02148736,
   0.0225957,
   0.02348538,
   0.02550271,
   0.02771418,
   0.02935183,
   0.03316116,
   0.03331216,
   0.0318606};
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
   0.004588102,
   0.008580506,
   0.01103607,
   0.01272304,
   0.0139792,
   0.01493403,
   0.01613021,
   0.01688845,
   0.01799801,
   0.01907567,
   0.02042843,
   0.02148736,
   0.0225957,
   0.02348538,
   0.02550271,
   0.02771418,
   0.02935183,
   0.03316116,
   0.03331216,
   0.0318606};
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
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMinimum(0.9600254);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMaximum(1.039975);
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
   0.004588102,
   0.008580506,
   0.01103607,
   0.01272304,
   0.0139792,
   0.01493403,
   0.01613021,
   0.01688845,
   0.01799801,
   0.01907567,
   0.02042843,
   0.02148736,
   0.0225957,
   0.02348538,
   0.02550271,
   0.02771418,
   0.02935183,
   0.03316116,
   0.03331216,
   0.0318606};
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
   0.004588102,
   0.008580506,
   0.01103607,
   0.01272304,
   0.0139792,
   0.01493403,
   0.01613021,
   0.01688845,
   0.01799801,
   0.01907567,
   0.02042843,
   0.02148736,
   0.0225957,
   0.02348538,
   0.02550271,
   0.02771418,
   0.02935183,
   0.03316116,
   0.03331216,
   0.0318606};
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
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMinimum(0.9600254);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMaximum(1.039975);
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
   0.9010664,
   0.966894,
   0.950743,
   0.940965,
   0.993928,
   0.9964119,
   0.9501616,
   0.922833,
   0.9705035,
   1.052487,
   1.046183,
   0.9584342,
   0.9988554,
   0.9733825,
   1.003482,
   1.026915,
   1.035928,
   0.9420569,
   0.9322272,
   0.9148529};
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
   0.006874565,
   0.01367258,
   0.0165478,
   0.01868156,
   0.0210665,
   0.02261654,
   0.02365079,
   0.02434416,
   0.02628749,
   0.02948709,
   0.03128865,
   0.03141141,
   0.03473361,
   0.03521574,
   0.03792805,
   0.04220594,
   0.0460982,
   0.04669603,
   0.05011684,
   0.04416952};
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
   0.006874565,
   0.01367258,
   0.0165478,
   0.01868156,
   0.0210665,
   0.02261654,
   0.02365079,
   0.02434416,
   0.02628749,
   0.02948709,
   0.03128865,
   0.03141141,
   0.03473361,
   0.03521574,
   0.03792805,
   0.04220594,
   0.0460982,
   0.04669603,
   0.05011684,
   0.04416952};
   grae = new TGraphAsymmErrors(20,Graph1_fx3155,Graph1_fy3155,Graph1_felx3155,Graph1_fehx3155,Graph1_fely3155,Graph1_fehy3155);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1314731513155 = new TH1F("Graph_Graph_Graph_Graph1314731513155","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1314731513155->SetMinimum(0.8495491);
   Graph_Graph_Graph_Graph1314731513155->SetMaximum(1.103161);
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
   MVAOutputM1500_1->Range(-0.204557,-2.183226,1.073924,6.97806);
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
   hframe__269->SetMaximum(2681529);
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
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMinimum(96.51792);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMaximum(624087.7);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,8421.444);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,2362.118);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1647.753);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1340.765);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1118.064);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1190.1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,861.8585);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,904.0541);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,837.3181);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,703.5281);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,608.2205);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,487.9516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,516.7665);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,479.5042);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,487.0705);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,321.207);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,332.6307);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,323.1948);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,312.8597);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,374.2967);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,198.6433);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,99.36349);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,92.13889);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,73.26077);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,69.4341);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,80.54448);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,77.14266);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,60.84339);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,57.53565);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,53.15773);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,51.20001);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,43.83392);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,48.41031);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,47.78065);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,43.95812);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,36.19042);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,36.92177);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,36.35784);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,34.93491);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,36.51019);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5173.507);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,323322.3);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,87209.7);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,55177.27);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,42700.69);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,35462.86);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,30706.19);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,27049.84);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,24137.83);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,21537.28);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,19079.12);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,16814.15);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,15316.1);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,13553.8);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,12088.42);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,10862.16);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,9155.539);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,7981.567);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,6487.593);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,6079.765);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,7052.951);
   TT_stack_2_stack_2_stack_2->SetBinError(1,596.7246);
   TT_stack_2_stack_2_stack_2->SetBinError(2,310.4765);
   TT_stack_2_stack_2_stack_2->SetBinError(3,246.4556);
   TT_stack_2_stack_2_stack_2->SetBinError(4,216.7839);
   TT_stack_2_stack_2_stack_2->SetBinError(5,197.4583);
   TT_stack_2_stack_2_stack_2->SetBinError(6,183.5282);
   TT_stack_2_stack_2_stack_2->SetBinError(7,172.6787);
   TT_stack_2_stack_2_stack_2->SetBinError(8,162.9572);
   TT_stack_2_stack_2_stack_2->SetBinError(9,154.1174);
   TT_stack_2_stack_2_stack_2->SetBinError(10,144.7479);
   TT_stack_2_stack_2_stack_2->SetBinError(11,136.3097);
   TT_stack_2_stack_2_stack_2->SetBinError(12,129.9128);
   TT_stack_2_stack_2_stack_2->SetBinError(13,122.274);
   TT_stack_2_stack_2_stack_2->SetBinError(14,115.3843);
   TT_stack_2_stack_2_stack_2->SetBinError(15,109.3199);
   TT_stack_2_stack_2_stack_2->SetBinError(16,100.2499);
   TT_stack_2_stack_2_stack_2->SetBinError(17,93.73347);
   TT_stack_2_stack_2_stack_2->SetBinError(18,84.45787);
   TT_stack_2_stack_2_stack_2->SetBinError(19,81.81897);
   TT_stack_2_stack_2_stack_2->SetBinError(20,87.97507);
   TT_stack_2_stack_2_stack_2->SetEntries(700718.8);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,49582.19);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,13872.82);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,12615.41);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9881.914);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8211.053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,7063.499);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,6061.465);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,6101.344);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,5713.918);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4426.685);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3950.556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3623.465);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2488.388);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3129.915);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2602.188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2052.934);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1435.512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1829.88);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1030.458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1951.308);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1632.614);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,825.5774);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,719.765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,646.7832);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,590.1358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,546.2165);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,514.3236);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,496.3645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,478.0224);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,435.3046);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,411.6204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,394.2873);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,350.2886);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,346.8729);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,335.7229);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,301.2361);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,267.8528);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,271.3799);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,230.7208);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,283.2185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3154.254);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(1,243.4874);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(2,165.7615);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(3,140.7824);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(4,126.9523);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(5,118.7231);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(6,140.7808);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(7,102.6335);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(8,92.07662);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(9,117.1748);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(10,122.3842);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(11,100.9839);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(12,96.47297);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(13,136.8884);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(14,109.3535);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(15,89.62547);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(16,76.75263);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(17,45.57003);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(18,51.12487);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(19,18.79037);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(20,37.38503);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(1,23.10392);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(2,18.88042);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(3,17.63206);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(4,16.58402);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(5,16.76619);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(6,17.29674);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(7,16.76418);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(8,17.06582);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(9,17.11888);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(10,17.47405);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(11,16.26283);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(12,16.64336);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(13,16.43914);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(14,16.04329);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(15,15.11772);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(16,14.80526);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(17,13.94648);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(18,13.30518);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(19,11.46826);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(20,12.41887);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetEntries(842.8916);
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
   381326,
   103444.6,
   69440.43,
   53923.37,
   44791.98,
   38959.79,
   33973.17,
   31143.23,
   28088.51,
   24209.33,
   21372.93,
   19427.52,
   16558.95,
   15697.84,
   13951.42,
   11529.68,
   9749.711,
   8640.667,
   7423.083,
   9378.557};
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
   1749.562,
   887.6074,
   766.3495,
   686.0692,
   626.1558,
   581.8269,
   547.9942,
   525.9607,
   505.5373,
   461.8092,
   436.6155,
   417.4461,
   374.1611,
   368.6696,
   355.7991,
   319.5356,
   286.1718,
   286.5346,
   247.2789,
   298.8065};
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
   1749.562,
   887.6074,
   766.3495,
   686.0692,
   626.1558,
   581.8269,
   547.9942,
   525.9607,
   505.5373,
   461.8092,
   436.6155,
   417.4461,
   374.1611,
   368.6696,
   355.7991,
   319.5356,
   286.1718,
   286.5346,
   247.2789,
   298.8065};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMinimum(6458.224);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMaximum(420665.5);
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
   Data__271->SetBinContent(1,343600);
   Data__271->SetBinContent(2,100020);
   Data__271->SetBinContent(3,66020);
   Data__271->SetBinContent(4,50740);
   Data__271->SetBinContent(5,44520);
   Data__271->SetBinContent(6,38820);
   Data__271->SetBinContent(7,32280);
   Data__271->SetBinContent(8,28740);
   Data__271->SetBinContent(9,27260);
   Data__271->SetBinContent(10,25480);
   Data__271->SetBinContent(11,22360);
   Data__271->SetBinContent(12,18620);
   Data__271->SetBinContent(13,16540);
   Data__271->SetBinContent(14,15280);
   Data__271->SetBinContent(15,14000);
   Data__271->SetBinContent(16,11840);
   Data__271->SetBinContent(17,10100);
   Data__271->SetBinContent(18,8140);
   Data__271->SetBinContent(19,6920);
   Data__271->SetBinContent(20,8580);
   Data__271->SetBinError(1,2621.45);
   Data__271->SetBinError(2,1414.355);
   Data__271->SetBinError(3,1149.087);
   Data__271->SetBinError(4,1007.373);
   Data__271->SetBinError(5,943.6101);
   Data__271->SetBinError(6,881.1356);
   Data__271->SetBinError(7,803.4924);
   Data__271->SetBinError(8,758.1557);
   Data__271->SetBinError(9,738.3766);
   Data__271->SetBinError(10,713.8627);
   Data__271->SetBinError(11,668.7301);
   Data__271->SetBinError(12,610.2459);
   Data__271->SetBinError(13,575.1522);
   Data__271->SetBinError(14,552.811);
   Data__271->SetBinError(15,529.1503);
   Data__271->SetBinError(16,486.621);
   Data__271->SetBinError(17,449.4441);
   Data__271->SetBinError(18,403.4848);
   Data__271->SetBinError(19,372.0215);
   Data__271->SetBinError(20,414.2463);
   Data__271->SetEntries(44493);
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
   hframe_copy__272->SetMaximum(2681529);
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
   hframe_copy__273->SetMaximum(2681529);
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
