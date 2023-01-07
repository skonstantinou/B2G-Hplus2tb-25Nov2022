void MVAOutputM700()
{
//=========Macro generated from canvas: MVAOutputM700/MVAOutputM700
//=========  (Tue Dec 27 11:52:07 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM700 = new TCanvas("MVAOutputM700", "MVAOutputM700",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM700->SetHighLightColor(2);
   MVAOutputM700->Range(0,0,1,1);
   MVAOutputM700->SetFillColor(0);
   MVAOutputM700->SetBorderMode(0);
   MVAOutputM700->SetBorderSize(2);
   MVAOutputM700->SetTickx(1);
   MVAOutputM700->SetTicky(1);
   MVAOutputM700->SetLeftMargin(0.16);
   MVAOutputM700->SetRightMargin(0.05);
   MVAOutputM700->SetTopMargin(0.06);
   MVAOutputM700->SetBottomMargin(0.13);
   MVAOutputM700->SetFrameFillStyle(0);
   MVAOutputM700->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM700_2
   TPad *MVAOutputM700_2 = new TPad("MVAOutputM700_2", "MVAOutputM700_2",0,0,1,0.304);
   MVAOutputM700_2->Draw();
   MVAOutputM700_2->cd();
   MVAOutputM700_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM700_2->SetFillColor(0);
   MVAOutputM700_2->SetFillStyle(4000);
   MVAOutputM700_2->SetBorderMode(0);
   MVAOutputM700_2->SetBorderSize(2);
   MVAOutputM700_2->SetTickx(1);
   MVAOutputM700_2->SetTicky(1);
   MVAOutputM700_2->SetLeftMargin(0.16);
   MVAOutputM700_2->SetRightMargin(0.05);
   MVAOutputM700_2->SetTopMargin(0);
   MVAOutputM700_2->SetBottomMargin(0.3421053);
   MVAOutputM700_2->SetFrameFillStyle(0);
   MVAOutputM700_2->SetFrameBorderMode(0);
   MVAOutputM700_2->SetFrameFillStyle(0);
   MVAOutputM700_2->SetFrameBorderMode(0);
   
   TH1F *hframe__183 = new TH1F("hframe__183","",1000,0,1.01);
   hframe__183->SetMinimum(0.3);
   hframe__183->SetMaximum(1.7);
   hframe__183->SetDirectory(0);
   hframe__183->SetStats(0);
   hframe__183->SetLineStyle(0);
   hframe__183->SetMarkerStyle(20);
   hframe__183->GetXaxis()->SetTitle("DNN Output");
   hframe__183->GetXaxis()->SetLabelFont(43);
   hframe__183->GetXaxis()->SetLabelOffset(0.007);
   hframe__183->GetXaxis()->SetLabelSize(27);
   hframe__183->GetXaxis()->SetTitleSize(33);
   hframe__183->GetXaxis()->SetTitleOffset(2.960526);
   hframe__183->GetXaxis()->SetTitleFont(43);
   hframe__183->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__183->GetYaxis()->SetNdivisions(505);
   hframe__183->GetYaxis()->SetLabelFont(43);
   hframe__183->GetYaxis()->SetLabelOffset(0.007);
   hframe__183->GetYaxis()->SetLabelSize(21);
   hframe__183->GetYaxis()->SetTitleSize(33);
   hframe__183->GetYaxis()->SetTitleOffset(1.5625);
   hframe__183->GetYaxis()->SetTitleFont(43);
   hframe__183->GetZaxis()->SetLabelFont(43);
   hframe__183->GetZaxis()->SetLabelOffset(0.007);
   hframe__183->GetZaxis()->SetLabelSize(27);
   hframe__183->GetZaxis()->SetTitleSize(33);
   hframe__183->GetZaxis()->SetTitleOffset(1);
   hframe__183->GetZaxis()->SetTitleFont(43);
   hframe__183->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3105[20] = {
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
   Double_t BackgroundStatSystError_fy3105[20] = {
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
   Double_t BackgroundStatSystError_felx3105[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3105[20] = {
   0.03074916,
   0.0227783,
   0.02257287,
   0.0244221,
   0.025711,
   0.02686153,
   0.02864122,
   0.0293935,
   0.03090219,
   0.03277001,
   0.03376967,
   0.03570027,
   0.03766843,
   0.03939816,
   0.04135718,
   0.04284977,
   0.04403278,
   0.04267592,
   0.05059809,
   0.144427};
   Double_t BackgroundStatSystError_fehx3105[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3105[20] = {
   0.03074916,
   0.0227783,
   0.02257287,
   0.0244221,
   0.025711,
   0.02686153,
   0.02864122,
   0.0293935,
   0.03090219,
   0.03277001,
   0.03376967,
   0.03570027,
   0.03766843,
   0.03939816,
   0.04135718,
   0.04284977,
   0.04403278,
   0.04267592,
   0.05059809,
   0.144427};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3105,BackgroundStatSystError_fy3105,BackgroundStatSystError_felx3105,BackgroundStatSystError_fehx3105,BackgroundStatSystError_fely3105,BackgroundStatSystError_fehy3105);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1237;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError309731013105 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError309731013105","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMinimum(0.8266876);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMaximum(1.173312);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError309731013105);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3106[20] = {
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
   Double_t BackgroundStatError_fy3106[20] = {
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
   Double_t BackgroundStatError_felx3106[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3106[20] = {
   0.03074916,
   0.0227783,
   0.02257287,
   0.0244221,
   0.025711,
   0.02686153,
   0.02864122,
   0.0293935,
   0.03090219,
   0.03277001,
   0.03376967,
   0.03570027,
   0.03766843,
   0.03939816,
   0.04135718,
   0.04284977,
   0.04403278,
   0.04267592,
   0.05059809,
   0.144427};
   Double_t BackgroundStatError_fehx3106[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3106[20] = {
   0.03074916,
   0.0227783,
   0.02257287,
   0.0244221,
   0.025711,
   0.02686153,
   0.02864122,
   0.0293935,
   0.03090219,
   0.03277001,
   0.03376967,
   0.03570027,
   0.03766843,
   0.03939816,
   0.04135718,
   0.04284977,
   0.04403278,
   0.04267592,
   0.05059809,
   0.144427};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3106,BackgroundStatError_fy3106,BackgroundStatError_felx3106,BackgroundStatError_fehx3106,BackgroundStatError_fely3106,BackgroundStatError_fehy3106);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1236;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError309831023106 = new TH1F("Graph_Graph_Graph_BackgroundStatError309831023106","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMinimum(0.8266876);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMaximum(1.173312);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError309831023106);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx27[2] = {
   0,
   1.01};
   Double_t Graph0_fy27[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx27,Graph0_fy27);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0252627 = new TH1F("Graph_Graph_Graph_Graph0252627","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0252627->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0252627->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0252627->SetDirectory(0);
   Graph_Graph_Graph_Graph0252627->SetStats(0);
   Graph_Graph_Graph_Graph0252627->SetLineStyle(0);
   Graph_Graph_Graph_Graph0252627->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0252627);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3107[7] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3107[7] = {
   1.005825,
   0.9905833,
   1.024737,
   1.024721,
   1.036479,
   0.9368671,
   0.1071144};
   Double_t Graph1_felx3107[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3107[7] = {
   0.03204824,
   0.02433491,
   0.02588677,
   0.02830116,
   0.02980901,
   0.02973058,
   0.0107654};
   Double_t Graph1_fehx3107[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3107[7] = {
   0.03204824,
   0.02433491,
   0.02588677,
   0.02830116,
   0.02980901,
   0.02973058,
   0.0107654};
   grae = new TGraphAsymmErrors(7,Graph1_fx3107,Graph1_fy3107,Graph1_felx3107,Graph1_fehx3107,Graph1_fely3107,Graph1_fehy3107);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1309931033107 = new TH1F("Graph_Graph_Graph_Graph1309931033107","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1309931033107->SetMinimum(0.08671408);
   Graph_Graph_Graph_Graph1309931033107->SetMaximum(1.163282);
   Graph_Graph_Graph_Graph1309931033107->SetDirectory(0);
   Graph_Graph_Graph_Graph1309931033107->SetStats(0);
   Graph_Graph_Graph_Graph1309931033107->SetLineStyle(0);
   Graph_Graph_Graph_Graph1309931033107->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1309931033107);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__184 = new TH1F("hframe_copy__184","",1000,0,1.01);
   hframe_copy__184->SetMinimum(0.3);
   hframe_copy__184->SetMaximum(1.7);
   hframe_copy__184->SetDirectory(0);
   hframe_copy__184->SetStats(0);
   hframe_copy__184->SetLineStyle(0);
   hframe_copy__184->SetMarkerStyle(20);
   hframe_copy__184->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__184->GetXaxis()->SetLabelFont(43);
   hframe_copy__184->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__184->GetXaxis()->SetLabelSize(27);
   hframe_copy__184->GetXaxis()->SetTitleSize(33);
   hframe_copy__184->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__184->GetXaxis()->SetTitleFont(43);
   hframe_copy__184->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__184->GetYaxis()->SetNdivisions(505);
   hframe_copy__184->GetYaxis()->SetLabelFont(43);
   hframe_copy__184->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__184->GetYaxis()->SetLabelSize(21);
   hframe_copy__184->GetYaxis()->SetTitleSize(33);
   hframe_copy__184->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__184->GetYaxis()->SetTitleFont(43);
   hframe_copy__184->GetZaxis()->SetLabelFont(43);
   hframe_copy__184->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__184->GetZaxis()->SetLabelSize(27);
   hframe_copy__184->GetZaxis()->SetTitleSize(33);
   hframe_copy__184->GetZaxis()->SetTitleOffset(1);
   hframe_copy__184->GetZaxis()->SetTitleFont(43);
   hframe_copy__184->Draw("sameaxis");
   MVAOutputM700_2->Modified();
   MVAOutputM700->cd();
  
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
   MVAOutputM700->cd();
  
// ------------>Primitives in pad: MVAOutputM700_1
   TPad *MVAOutputM700_1 = new TPad("MVAOutputM700_1", "MVAOutputM700_1",0,0.2897959,1,1);
   MVAOutputM700_1->Draw();
   MVAOutputM700_1->cd();
   MVAOutputM700_1->Range(-0.204557,-2.16042,1.073924,5.860602);
   MVAOutputM700_1->SetFillColor(0);
   MVAOutputM700_1->SetFillStyle(4000);
   MVAOutputM700_1->SetBorderMode(0);
   MVAOutputM700_1->SetBorderSize(2);
   MVAOutputM700_1->SetLogy();
   MVAOutputM700_1->SetTickx(1);
   MVAOutputM700_1->SetTicky(1);
   MVAOutputM700_1->SetLeftMargin(0.16);
   MVAOutputM700_1->SetRightMargin(0.05);
   MVAOutputM700_1->SetTopMargin(0.06);
   MVAOutputM700_1->SetBottomMargin(0.02);
   MVAOutputM700_1->SetFrameFillStyle(0);
   MVAOutputM700_1->SetFrameBorderMode(0);
   MVAOutputM700_1->SetFrameFillStyle(0);
   MVAOutputM700_1->SetFrameBorderMode(0);
   
   TH1F *hframe__185 = new TH1F("hframe__185","",1000,0,1.01);
   hframe__185->SetMinimum(0.01);
   hframe__185->SetMaximum(239519.6);
   hframe__185->SetDirectory(0);
   hframe__185->SetStats(0);
   hframe__185->SetLineStyle(0);
   hframe__185->SetMarkerStyle(20);
   hframe__185->GetXaxis()->SetLabelFont(43);
   hframe__185->GetXaxis()->SetLabelOffset(0.007);
   hframe__185->GetXaxis()->SetLabelSize(0);
   hframe__185->GetXaxis()->SetTitleSize(0);
   hframe__185->GetXaxis()->SetTitleOffset(0.9);
   hframe__185->GetXaxis()->SetTitleFont(43);
   hframe__185->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__185->GetYaxis()->SetLabelFont(43);
   hframe__185->GetYaxis()->SetLabelOffset(0.007);
   hframe__185->GetYaxis()->SetLabelSize(27);
   hframe__185->GetYaxis()->SetTitleSize(33);
   hframe__185->GetYaxis()->SetTitleOffset(1.5625);
   hframe__185->GetYaxis()->SetTitleFont(43);
   hframe__185->GetZaxis()->SetLabelFont(43);
   hframe__185->GetZaxis()->SetLabelOffset(0.007);
   hframe__185->GetZaxis()->SetLabelSize(27);
   hframe__185->GetZaxis()->SetTitleSize(33);
   hframe__185->GetZaxis()->SetTitleOffset(1);
   hframe__185->GetZaxis()->SetTitleFont(43);
   hframe__185->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis157[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_25_stack_26_stack_27 = new TH1F("StackedMCstackHist_stack_25_stack_26_stack_27","StackedMCstackHist",20, xAxis157);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMinimum(16.84728);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMaximum(52912.83);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetDirectory(0);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetStats(0);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetLineStyle(0);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMarkerStyle(20);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_25_stack_26_stack_27);
   
   Double_t xAxis158[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM700Inclusive",20, xAxis158);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,646.6542);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1021.963);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,983.2974);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1079.254);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,798.6422);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,751.7094);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,584.95);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,696.1819);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,577.3969);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,576.1016);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,473.4012);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,535.2842);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,476.59);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,508.0216);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,439.3667);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,420.212);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,380.4794);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,429.4948);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,334.0417);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,61.1941);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,37.73855);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,55.33449);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,49.45732);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,60.74067);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,49.66375);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,42.64635);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,43.08517);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,44.49169);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,39.8422);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,38.26957);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,41.59424);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,40.2028);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,35.11783);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,38.81893);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,33.42316);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,33.8829);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,34.74602);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,36.50686);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,31.19163);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,15.25669);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4090.428);
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
   Double_t xAxis159[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM700Inclusive",20, xAxis159);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,9501.019);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,15541.8);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,15254.57);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,13032.31);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,11942.89);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,10657.7);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,9532.676);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,8567.619);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,7895.695);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,7242.497);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,6628.818);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,6050.522);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,5552.312);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,4948.002);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,4526.777);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,4072.001);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,3962.496);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,3917.745);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,2875.782);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,332.9014);
   TT_stack_2_stack_2_stack_2->SetBinError(1,106.9535);
   TT_stack_2_stack_2_stack_2->SetBinError(2,137.9113);
   TT_stack_2_stack_2_stack_2->SetBinError(3,137.3385);
   TT_stack_2_stack_2_stack_2->SetBinError(4,127.0247);
   TT_stack_2_stack_2_stack_2->SetBinError(5,122.481);
   TT_stack_2_stack_2_stack_2->SetBinError(6,115.2751);
   TT_stack_2_stack_2_stack_2->SetBinError(7,109.2579);
   TT_stack_2_stack_2_stack_2->SetBinError(8,103.8661);
   TT_stack_2_stack_2_stack_2->SetBinError(9,99.37181);
   TT_stack_2_stack_2_stack_2->SetBinError(10,94.66803);
   TT_stack_2_stack_2_stack_2->SetBinError(11,90.66236);
   TT_stack_2_stack_2_stack_2->SetBinError(12,86.55832);
   TT_stack_2_stack_2_stack_2->SetBinError(13,82.62889);
   TT_stack_2_stack_2_stack_2->SetBinError(14,77.88141);
   TT_stack_2_stack_2_stack_2->SetBinError(15,74.4429);
   TT_stack_2_stack_2_stack_2->SetBinError(16,70.08686);
   TT_stack_2_stack_2_stack_2->SetBinError(17,68.91486);
   TT_stack_2_stack_2_stack_2->SetBinError(18,68.23464);
   TT_stack_2_stack_2_stack_2->SetBinError(19,58.1439);
   TT_stack_2_stack_2_stack_2->SetBinError(20,19.59264);
   TT_stack_2_stack_2_stack_2->SetEntries(123255.8);
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
   Double_t xAxis160[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM700Inclusive",20, xAxis160);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,9438.243);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16891.28);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,14345.59);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11475.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,10587.44);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9788.905);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,8367.289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,7953.686);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,7537.462);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,5677.402);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,6221.478);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,5094.739);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5113.758);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,4692.937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,3979.186);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,4237.662);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,4027.135);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,3652.551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,2207.854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,434.9019);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,591.4747);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,747.4203);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,674.7474);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,608.8304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,585.0689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,555.9955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,516.2393);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,493.3068);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,483.0388);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,430.315);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,438.7407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,405.9301);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,410.0116);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,390.2665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,360.8419);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,365.8831);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,360.3878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,332.512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,266.0647);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,117.1262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4384.702);
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
   Double_t xAxis161[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__186 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__186","h_SR_MVAOutputM700Inclusive",20, xAxis161);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(1,15.70522);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(2,78.34773);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(3,139.2583);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(4,151.4731);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(5,180.6402);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(6,270.3365);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(7,311.9341);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(8,312.0327);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(9,366.0856);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(10,431.8834);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(11,461.263);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(12,545.4736);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(13,602.0458);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(14,666.2775);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(15,803.8743);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(16,979.6372);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(17,1233.94);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(18,1924.247);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(19,2250.357);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(20,280.9372);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(1,6.806952);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(2,12.57737);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(3,15.78588);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(4,18.17127);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(5,19.98134);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(6,22.37048);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(7,23.03016);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(8,25.12598);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(9,26.59712);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(10,28.18573);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(11,29.89103);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(12,32.13796);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(13,34.16431);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(14,35.48569);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(15,38.61983);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(16,42.46426);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(17,48.49011);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(18,59.84459);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(19,63.93098);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(20,23.89721);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetEntries(6381.877);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3108[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3108[20] = {
   19585.92,
   33455.04,
   30583.46,
   25587.46,
   23328.97,
   21198.31,
   18484.91,
   17217.49,
   16010.55,
   13496,
   13323.7,
   11680.55,
   11142.66,
   10148.96,
   8945.33,
   8729.874,
   8370.11,
   7999.792,
   5417.678,
   828.9973};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3108[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3108[20] = {
   602.2504,
   762.0489,
   690.3564,
   624.8993,
   599.8113,
   569.4191,
   529.4305,
   506.0822,
   494.7612,
   442.2641,
   449.9368,
   416.9987,
   419.7265,
   399.8504,
   369.9536,
   374.0731,
   368.5592,
   341.3985,
   274.1242,
   119.7296};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3108[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3108[20] = {
   602.2504,
   762.0489,
   690.3564,
   624.8993,
   599.8113,
   569.4191,
   529.4305,
   506.0822,
   494.7612,
   442.2641,
   449.9368,
   416.9987,
   419.7265,
   399.8504,
   369.9536,
   374.0731,
   368.5592,
   341.3985,
   274.1242,
   119.7296};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3108,BkgSum-SR-Inclusive_sum_errors_fy3108,BkgSum-SR-Inclusive_sum_errors_felx3108,BkgSum-SR-Inclusive_sum_errors_fehx3108,BkgSum-SR-Inclusive_sum_errors_fely3108,BkgSum-SR-Inclusive_sum_errors_fehy3108);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1235;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMinimum(638.3409);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMaximum(37567.87);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors310031043108);
   
   grae->Draw("e2 ");
   Double_t xAxis162[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__187 = new TH1F("Data__187","h_SR_MVAOutputM700Inclusive",20, xAxis162);
   Data__187->SetBinContent(1,19700);
   Data__187->SetBinContent(2,33140);
   Data__187->SetBinContent(3,31340);
   Data__187->SetBinContent(4,26220);
   Data__187->SetBinContent(5,24180);
   Data__187->SetBinContent(6,19860);
   Data__187->SetBinContent(7,1980);
   Data__187->SetBinError(1,627.6942);
   Data__187->SetBinError(2,814.1253);
   Data__187->SetBinError(3,791.707);
   Data__187->SetBinError(4,724.1547);
   Data__187->SetBinError(5,695.4135);
   Data__187->SetBinError(6,630.2381);
   Data__187->SetBinError(7,198.9975);
   Data__187->SetEntries(7821);
   Data__187->SetDirectory(0);
   Data__187->SetFillStyle(3001);
   Data__187->SetLineWidth(2);
   Data__187->SetMarkerStyle(20);
   Data__187->SetMarkerSize(1.2);
   Data__187->GetXaxis()->SetRange(1,200);
   Data__187->GetXaxis()->SetLabelFont(42);
   Data__187->GetXaxis()->SetTitleOffset(1);
   Data__187->GetXaxis()->SetTitleFont(42);
   Data__187->GetYaxis()->SetLabelFont(42);
   Data__187->GetYaxis()->SetTitleFont(42);
   Data__187->GetZaxis()->SetLabelFont(42);
   Data__187->GetZaxis()->SetTitleOffset(1);
   Data__187->GetZaxis()->SetTitleFont(42);
   Data__187->Draw("EP same");
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

   ci = 1235;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1235;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__188 = new TH1F("hframe_copy__188","",1000,0,1.01);
   hframe_copy__188->SetMinimum(0.01);
   hframe_copy__188->SetMaximum(239519.6);
   hframe_copy__188->SetDirectory(0);
   hframe_copy__188->SetStats(0);
   hframe_copy__188->SetLineStyle(0);
   hframe_copy__188->SetMarkerStyle(20);
   hframe_copy__188->GetXaxis()->SetLabelFont(43);
   hframe_copy__188->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__188->GetXaxis()->SetLabelSize(0);
   hframe_copy__188->GetXaxis()->SetTitleSize(0);
   hframe_copy__188->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__188->GetXaxis()->SetTitleFont(43);
   hframe_copy__188->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__188->GetYaxis()->SetLabelFont(43);
   hframe_copy__188->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__188->GetYaxis()->SetLabelSize(27);
   hframe_copy__188->GetYaxis()->SetTitleSize(33);
   hframe_copy__188->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__188->GetYaxis()->SetTitleFont(43);
   hframe_copy__188->GetZaxis()->SetLabelFont(43);
   hframe_copy__188->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__188->GetZaxis()->SetLabelSize(27);
   hframe_copy__188->GetZaxis()->SetTitleSize(33);
   hframe_copy__188->GetZaxis()->SetTitleOffset(1);
   hframe_copy__188->GetZaxis()->SetTitleFont(43);
   hframe_copy__188->Draw("sameaxis");
   
   TH1F *hframe_copy__189 = new TH1F("hframe_copy__189","",1000,0,1.01);
   hframe_copy__189->SetMinimum(0.01);
   hframe_copy__189->SetMaximum(239519.6);
   hframe_copy__189->SetDirectory(0);
   hframe_copy__189->SetStats(0);
   hframe_copy__189->SetLineStyle(0);
   hframe_copy__189->SetMarkerStyle(20);
   hframe_copy__189->GetXaxis()->SetLabelFont(43);
   hframe_copy__189->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__189->GetXaxis()->SetLabelSize(0);
   hframe_copy__189->GetXaxis()->SetTitleSize(0);
   hframe_copy__189->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__189->GetXaxis()->SetTitleFont(43);
   hframe_copy__189->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__189->GetYaxis()->SetLabelFont(43);
   hframe_copy__189->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__189->GetYaxis()->SetLabelSize(27);
   hframe_copy__189->GetYaxis()->SetTitleSize(33);
   hframe_copy__189->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__189->GetYaxis()->SetTitleFont(43);
   hframe_copy__189->GetZaxis()->SetLabelFont(43);
   hframe_copy__189->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__189->GetZaxis()->SetLabelSize(27);
   hframe_copy__189->GetZaxis()->SetTitleSize(33);
   hframe_copy__189->GetZaxis()->SetTitleOffset(1);
   hframe_copy__189->GetZaxis()->SetTitleFont(43);
   hframe_copy__189->Draw("sameaxis");
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
   MVAOutputM700_1->Modified();
   MVAOutputM700->cd();
   MVAOutputM700->Modified();
   MVAOutputM700->cd();
   MVAOutputM700->SetSelected(MVAOutputM700);
}
