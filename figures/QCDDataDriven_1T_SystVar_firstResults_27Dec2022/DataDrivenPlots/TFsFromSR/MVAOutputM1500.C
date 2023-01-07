void MVAOutputM1500()
{
//=========Macro generated from canvas: MVAOutputM1500/MVAOutputM1500
//=========  (Tue Dec 27 11:55:11 2022) by ROOT version 6.20/02
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
   0.01545581,
   0.02839152,
   0.03664151,
   0.04430497,
   0.05424524,
   0.06325464,
   0.07108591,
   0.07702025,
   0.09141,
   0.1018603,
   0.0947049,
   0.106906,
   0.1139448,
   0.1042819,
   0.111324,
   0.114555,
   0.1218111,
   0.1019136,
   0.09482363,
   0.1022022};
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
   0.01545581,
   0.02839152,
   0.03664151,
   0.04430497,
   0.05424524,
   0.06325464,
   0.07108591,
   0.07702025,
   0.09141,
   0.1018603,
   0.0947049,
   0.106906,
   0.1139448,
   0.1042819,
   0.111324,
   0.114555,
   0.1218111,
   0.1019136,
   0.09482363,
   0.1022022};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3153,BackgroundStatSystError_fy3153,BackgroundStatSystError_felx3153,BackgroundStatSystError_fehx3153,BackgroundStatSystError_fely3153,BackgroundStatSystError_fehy3153);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1249;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError314531493153 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError314531493153","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMinimum(0.8538267);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMaximum(1.146173);
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
   0.01545581,
   0.02839152,
   0.03664151,
   0.04430497,
   0.05424524,
   0.06325464,
   0.07108591,
   0.07702025,
   0.09141,
   0.1018603,
   0.0947049,
   0.106906,
   0.1139448,
   0.1042819,
   0.111324,
   0.114555,
   0.1218111,
   0.1019136,
   0.09482363,
   0.1022022};
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
   0.01545581,
   0.02839152,
   0.03664151,
   0.04430497,
   0.05424524,
   0.06325464,
   0.07108591,
   0.07702025,
   0.09141,
   0.1018603,
   0.0947049,
   0.106906,
   0.1139448,
   0.1042819,
   0.111324,
   0.114555,
   0.1218111,
   0.1019136,
   0.09482363,
   0.1022022};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3154,BackgroundStatError_fy3154,BackgroundStatError_felx3154,BackgroundStatError_fehx3154,BackgroundStatError_fely3154,BackgroundStatError_fehy3154);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1248;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError314631503154 = new TH1F("Graph_Graph_Graph_BackgroundStatError314631503154","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMinimum(0.8538267);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMaximum(1.146173);
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
   
   Double_t Graph1_fx3155[8] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.975};
   Double_t Graph1_fy3155[8] = {
   1.062793,
   1.044307,
   0.9855707,
   0.9181593,
   1.009933,
   0.9624631,
   0.07917371,
   0.05476115};
   Double_t Graph1_felx3155[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3155[8] = {
   0.01698568,
   0.03144419,
   0.03948605,
   0.04568013,
   0.05930529,
   0.06805642,
   0.02195884,
   0.02738057};
   Double_t Graph1_fehx3155[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3155[8] = {
   0.01698568,
   0.03144419,
   0.03948605,
   0.04568013,
   0.05930529,
   0.06805642,
   0.02195884,
   0.02738057};
   grae = new TGraphAsymmErrors(8,Graph1_fx3155,Graph1_fy3155,Graph1_felx3155,Graph1_fehx3155,Graph1_fely3155,Graph1_fehy3155);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1314731513155 = new TH1F("Graph_Graph_Graph_Graph1314731513155","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1314731513155->SetMinimum(0.02464252);
   Graph_Graph_Graph_Graph1314731513155->SetMaximum(1.185019);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   MVAOutputM1500_1->Range(-0.204557,-2.168236,1.073924,6.243568);
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
   hframe__269->SetMaximum(548100);
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
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMinimum(3.44799);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMaximum(130589.4);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1904.058);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,474.7491);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,337.5543);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,248.4069);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,184.472);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,167.8978);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,131.6201);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,106.361);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,76.42113);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,47.28036);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,39.92209);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,42.93333);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,19.09174);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,53.83774);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,31.11282);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,37.43858);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,51.65837);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,67.49311);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,48.87491);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,71.68615);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,70.13691);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,34.17382);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,31.81832);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,28.10895);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,28.09412);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,22.3959);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,20.23935);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,22.74368);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,17.83228);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,8.982805);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,11.80214);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,10.09721);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,7.86148);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,13.07871);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,11.29974);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,12.02054);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,14.26224);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,16.55298);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,13.99774);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,13.95687);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1416.07);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,26454.17);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,6613.901);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3824.036);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2369.901);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1741.543);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1352.617);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1060.038);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,883.0069);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,688.0503);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,598.9197);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,565.9888);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,506.3344);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,451.115);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,419.9275);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,369.4793);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,397.9093);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,441.5157);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,512.4326);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,507.8584);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,498.0709);
   TT_stack_2_stack_2_stack_2->SetBinError(1,181.8747);
   TT_stack_2_stack_2_stack_2->SetBinError(2,91.43661);
   TT_stack_2_stack_2_stack_2->SetBinError(3,69.69648);
   TT_stack_2_stack_2_stack_2->SetBinError(4,54.77724);
   TT_stack_2_stack_2_stack_2->SetBinError(5,47.10605);
   TT_stack_2_stack_2_stack_2->SetBinError(6,41.62893);
   TT_stack_2_stack_2_stack_2->SetBinError(7,36.46607);
   TT_stack_2_stack_2_stack_2->SetBinError(8,33.65015);
   TT_stack_2_stack_2_stack_2->SetBinError(9,29.4202);
   TT_stack_2_stack_2_stack_2->SetBinError(10,27.62808);
   TT_stack_2_stack_2_stack_2->SetBinError(11,26.92454);
   TT_stack_2_stack_2_stack_2->SetBinError(12,25.49746);
   TT_stack_2_stack_2_stack_2->SetBinError(13,23.81053);
   TT_stack_2_stack_2_stack_2->SetBinError(14,23.30409);
   TT_stack_2_stack_2_stack_2->SetBinError(15,21.58372);
   TT_stack_2_stack_2_stack_2->SetBinError(16,22.75026);
   TT_stack_2_stack_2_stack_2->SetBinError(17,23.66188);
   TT_stack_2_stack_2_stack_2->SetBinError(18,25.54033);
   TT_stack_2_stack_2_stack_2->SetBinError(19,25.47963);
   TT_stack_2_stack_2_stack_2->SetBinError(20,24.64362);
   TT_stack_2_stack_2_stack_2->SetEntries(39915.52);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,45315.55);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,14035.41);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,8480.831);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,6181.907);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,3816.941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,2635.489);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,2092.26);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,1738.913);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1254.653);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,886.8848);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1221.598);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,839.876);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,770.1594);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1077.191);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,945.758);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,830.2607);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,540.3063);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,974.6262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1325.848);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,891.1328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1121.879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,591.7471);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,456.8576);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,385.0014);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,306.6618);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,258.6015);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,229.6845);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,206.1704);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,181.3336);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,153.4343);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,170.559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,145.9537);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,139.0912);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,159.5136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,147.8878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,142.6802);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,122.8203);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,155.4792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,176.1301);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,146.5954);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3664.316);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(1,317.3089);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(2,383.6694);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(3,412.4196);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(4,330.1076);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(5,309.2958);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(6,269.9633);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(7,206.5922);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(8,183.3845);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(9,195.6308);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(10,154.0913);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(11,123.0394);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(12,119.357);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(13,97.15018);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(14,45.35435);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(15,64.68851);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(16,107.5594);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(17,67.68056);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(18,60.29623);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(19,62.04287);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(20,74.38681);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(1,25.60785);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(2,26.39953);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(3,26.6032);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(4,25.06728);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(5,24.09894);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(6,22.27956);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(7,20.27944);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(8,19.47162);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(9,17.90499);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(10,16.7854);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(11,15.94316);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(12,14.64487);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(13,14.21512);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(14,13.35372);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(15,12.77264);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(16,12.87648);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(17,12.28321);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(18,12.20927);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(19,12.84267);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(20,13.48803);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetEntries(1839.371);
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
   73673.77,
   21124.06,
   12642.42,
   8800.216,
   5742.957,
   4156.003,
   3283.918,
   2728.281,
   2019.124,
   1533.085,
   1827.508,
   1389.144,
   1240.366,
   1550.956,
   1346.35,
   1265.609,
   1033.48,
   1554.552,
   1882.581,
   1460.89};
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
   1138.688,
   599.7442,
   463.2374,
   389.8933,
   311.5281,
   262.8865,
   233.4403,
   210.1329,
   184.5681,
   156.1605,
   173.074,
   148.5078,
   141.3333,
   161.7366,
   149.8811,
   144.9818,
   125.8894,
   158.43,
   178.5132,
   149.3061};
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
   1138.688,
   599.7442,
   463.2374,
   389.8933,
   311.5281,
   262.8865,
   233.4403,
   210.1329,
   184.5681,
   156.1605,
   173.074,
   148.5078,
   141.3333,
   161.7366,
   149.8811,
   144.9818,
   125.8894,
   158.43,
   178.5132,
   149.3061};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3156,BkgSum-SR-Inclusive_sum_errors_fy3156,BkgSum-SR-Inclusive_sum_errors_felx3156,BkgSum-SR-Inclusive_sum_errors_fehx3156,BkgSum-SR-Inclusive_sum_errors_fely3156,BkgSum-SR-Inclusive_sum_errors_fehy3156);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1247;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMinimum(816.8319);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMaximum(82202.95);
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
   Data__271->SetBinContent(1,78300);
   Data__271->SetBinContent(2,22060);
   Data__271->SetBinContent(3,12460);
   Data__271->SetBinContent(4,8080);
   Data__271->SetBinContent(5,5800);
   Data__271->SetBinContent(6,4000);
   Data__271->SetBinContent(7,260);
   Data__271->SetBinContent(20,80);
   Data__271->SetBinError(1,1251.399);
   Data__271->SetBinError(2,664.2289);
   Data__271->SetBinError(3,499.1994);
   Data__271->SetBinError(4,401.995);
   Data__271->SetBinError(5,340.5877);
   Data__271->SetBinError(6,282.8427);
   Data__271->SetBinError(7,72.11103);
   Data__271->SetBinError(20,40);
   Data__271->SetEntries(6552);
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
      tex = new TLatex(0.19,0.885,"Data blinded in signal region");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
   
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

   ci = 1247;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1247;
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
   hframe_copy__272->SetMaximum(548100);
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
   hframe_copy__273->SetMaximum(548100);
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
      tex = new TLatex(0.95,0.952,"59.8 fb^{-1} (13 TeV)");
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
