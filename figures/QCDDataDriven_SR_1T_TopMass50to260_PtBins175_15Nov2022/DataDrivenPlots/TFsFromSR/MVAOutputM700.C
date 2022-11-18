void MVAOutputM700()
{
//=========Macro generated from canvas: MVAOutputM700/MVAOutputM700
//=========  (Fri Nov 18 13:27:17 2022) by ROOT version 6.20/02
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
   0.04599064,
   0.02951359,
   0.02919965,
   0.03219239,
   0.0365009,
   0.04056825,
   0.0425713,
   0.04921772,
   0.0518833,
   0.05297555,
   0.05617945,
   0.05936299,
   0.06149572,
   0.06875212,
   0.06977497,
   0.07755752,
   0.07878034,
   0.07774588,
   0.08250119,
   0.1433977};
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
   0.04599064,
   0.02951359,
   0.02919965,
   0.03219239,
   0.0365009,
   0.04056825,
   0.0425713,
   0.04921772,
   0.0518833,
   0.05297555,
   0.05617945,
   0.05936299,
   0.06149572,
   0.06875212,
   0.06977497,
   0.07755752,
   0.07878034,
   0.07774588,
   0.08250119,
   0.1433977};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3105,BackgroundStatSystError_fy3105,BackgroundStatSystError_felx3105,BackgroundStatSystError_fehx3105,BackgroundStatSystError_fely3105,BackgroundStatSystError_fehy3105);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1236;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError309731013105 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError309731013105","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMinimum(0.8279228);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMaximum(1.172077);
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
   0.04599064,
   0.02951359,
   0.02919965,
   0.03219239,
   0.0365009,
   0.04056825,
   0.0425713,
   0.04921772,
   0.0518833,
   0.05297555,
   0.05617945,
   0.05936299,
   0.06149572,
   0.06875212,
   0.06977497,
   0.07755752,
   0.07878034,
   0.07774588,
   0.08250119,
   0.1433977};
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
   0.04599064,
   0.02951359,
   0.02919965,
   0.03219239,
   0.0365009,
   0.04056825,
   0.0425713,
   0.04921772,
   0.0518833,
   0.05297555,
   0.05617945,
   0.05936299,
   0.06149572,
   0.06875212,
   0.06977497,
   0.07755752,
   0.07878034,
   0.07774588,
   0.08250119,
   0.1433977};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3106,BackgroundStatError_fy3106,BackgroundStatError_felx3106,BackgroundStatError_fehx3106,BackgroundStatError_fely3106,BackgroundStatError_fehy3106);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1235;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError309831023106 = new TH1F("Graph_Graph_Graph_BackgroundStatError309831023106","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMinimum(0.8279228);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMaximum(1.172077);
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
   1.002418,
   1.058733,
   1.068739,
   1.032548,
   1.089254,
   1.093608,
   0.1083915};
   Double_t Graph1_felx3107[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3107[7] = {
   0.04822884,
   0.03227605,
   0.03249061,
   0.03558394,
   0.04134753,
   0.04637932,
   0.01517785};
   Double_t Graph1_fehx3107[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3107[7] = {
   0.04822884,
   0.03227605,
   0.03249061,
   0.03558394,
   0.04134753,
   0.04637932,
   0.01517785};
   grae = new TGraphAsymmErrors(7,Graph1_fx3107,Graph1_fy3107,Graph1_felx3107,Graph1_fehx3107,Graph1_fely3107,Graph1_fehy3107);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1309931033107 = new TH1F("Graph_Graph_Graph_Graph1309931033107","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1309931033107->SetMinimum(0.0838923);
   Graph_Graph_Graph_Graph1309931033107->SetMaximum(1.244665);
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
   MVAOutputM700_1->Range(-0.204557,-2.156095,1.073924,5.648639);
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
   hframe__185->SetMaximum(151480);
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
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMinimum(10.2828);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMaximum(32140.68);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,196.4648);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,499.7234);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,429.8366);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,477.7429);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,346.0599);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,279.1749);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,240.1335);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,261.8291);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,196.7821);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,174.4642);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,111.0673);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,180.5633);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,107.0932);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,120.7278);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,106.5447);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,122.9458);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,95.13747);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,98.85953);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,95.7586);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,41.09233);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,20.27258);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,36.79064);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,30.79813);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,40.06462);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,32.33187);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,32.51196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,27.80491);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,26.01683);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,21.88412);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,22.95024);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,18.53423);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,26.67937);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,17.53371);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,16.67805);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,16.46547);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,20.02154);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,16.65748);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,17.90027);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,20.06832);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,13.06469);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1414.932);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,3146.792);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,6940.156);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,6947.861);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,5814.226);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4523.928);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3770.007);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,3029.686);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2505.039);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2176.929);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2004.377);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1645.025);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1501.962);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1223.167);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1164.906);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1057.642);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,900.268);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,869.5146);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,825.3689);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,671.1077);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,199.8714);
   TT_stack_2_stack_2_stack_2->SetBinError(1,63.27153);
   TT_stack_2_stack_2_stack_2->SetBinError(2,94.31344);
   TT_stack_2_stack_2_stack_2->SetBinError(3,94.0408);
   TT_stack_2_stack_2_stack_2->SetBinError(4,86.11032);
   TT_stack_2_stack_2_stack_2->SetBinError(5,76.57271);
   TT_stack_2_stack_2_stack_2->SetBinError(6,69.23108);
   TT_stack_2_stack_2_stack_2->SetBinError(7,62.05679);
   TT_stack_2_stack_2_stack_2->SetBinError(8,56.76782);
   TT_stack_2_stack_2_stack_2->SetBinError(9,52.63717);
   TT_stack_2_stack_2_stack_2->SetBinError(10,50.38789);
   TT_stack_2_stack_2_stack_2->SetBinError(11,45.36797);
   TT_stack_2_stack_2_stack_2->SetBinError(12,43.71585);
   TT_stack_2_stack_2_stack_2->SetBinError(13,39.49217);
   TT_stack_2_stack_2_stack_2->SetBinError(14,38.1325);
   TT_stack_2_stack_2_stack_2->SetBinError(15,36.66817);
   TT_stack_2_stack_2_stack_2->SetBinError(16,33.70713);
   TT_stack_2_stack_2_stack_2->SetBinError(17,32.81299);
   TT_stack_2_stack_2_stack_2->SetBinError(18,32.11251);
   TT_stack_2_stack_2_stack_2->SetBinError(19,28.74644);
   TT_stack_2_stack_2_stack_2->SetBinError(20,15.81495);
   TT_stack_2_stack_2_stack_2->SetEntries(39982.09);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,5275.905);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,12886.3);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,12870.47);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10017.21);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7872.676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6118.994);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,6140.512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,4213.342);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4010.795);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3819.215);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3504.658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2973.527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3288.096);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2238.27);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2332.639);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1879.562);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1770.018);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1949.038);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1650.326);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,558.2507);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,390.7932);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,591.2948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,582.8996);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,516.3698);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,457.6315);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,405.3523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,394.7964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,337.8271);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,326.3074);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,312.8892);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,291.4545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,271.611);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,280.7029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,238.6741);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,240.6573);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,221.6922);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,212.2721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,220.3385);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,196.3154);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,112.7547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3633.413);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(1,16.20468);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(2,50.45089);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(3,79.0024);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(4,78.86926);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(5,118.3815);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(6,107.1824);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(7,108.3761);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(8,134.6016);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(9,141.3079);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(10,148.4739);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(11,139.6732);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(12,187.728);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(13,210.0748);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(14,196.9542);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(15,200.3788);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(16,269.0707);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(17,365.5356);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(18,433.4386);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(19,449.3402);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(20,186.4876);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(1,6.543427);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(2,9.939811);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(3,12.80136);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(4,13.94997);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(5,14.83743);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(6,15.23062);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(7,15.47349);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(8,15.99612);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(9,16.52281);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(10,16.91197);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(11,17.43629);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(12,18.60657);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(13,18.87236);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(14,20.13896);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(15,21.23717);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(16,23.22894);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(17,25.30354);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(18,27.97089);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(19,29.42013);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(20,19.76494);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetEntries(1850.394);
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
   8619.162,
   20326.18,
   20248.17,
   16309.17,
   12742.66,
   10168.18,
   9410.331,
   6980.211,
   6384.506,
   5998.057,
   5260.75,
   4656.052,
   4618.356,
   3523.904,
   3496.826,
   2902.776,
   2734.67,
   2873.267,
   2417.192,
   799.2145};
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
   396.4008,
   599.8984,
   591.2395,
   525.0313,
   465.1186,
   412.5051,
   400.61,
   343.5501,
   331.2493,
   317.7504,
   295.5461,
   276.3972,
   284.0091,
   242.2759,
   243.9909,
   225.1321,
   215.4382,
   223.3846,
   199.4212,
   114.6055};
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
   396.4008,
   599.8984,
   591.2395,
   525.0313,
   465.1186,
   412.5051,
   400.61,
   343.5501,
   331.2493,
   317.7504,
   295.5461,
   276.3972,
   284.0091,
   242.2759,
   243.9909,
   225.1321,
   215.4382,
   223.3846,
   199.4212,
   114.6055};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3108,BkgSum-SR-Inclusive_sum_errors_fy3108,BkgSum-SR-Inclusive_sum_errors_felx3108,BkgSum-SR-Inclusive_sum_errors_fehx3108,BkgSum-SR-Inclusive_sum_errors_fely3108,BkgSum-SR-Inclusive_sum_errors_fehy3108);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1234;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMinimum(616.1481);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMaximum(22950.22);
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
   Data__187->SetBinContent(1,8640);
   Data__187->SetBinContent(2,21520);
   Data__187->SetBinContent(3,21640);
   Data__187->SetBinContent(4,16840);
   Data__187->SetBinContent(5,13880);
   Data__187->SetBinContent(6,11120);
   Data__187->SetBinContent(7,1020);
   Data__187->SetBinError(1,415.6922);
   Data__187->SetBinError(2,656.0488);
   Data__187->SetBinError(3,657.8754);
   Data__187->SetBinError(4,580.3447);
   Data__187->SetBinError(5,526.8776);
   Data__187->SetBinError(6,471.593);
   Data__187->SetBinError(7,142.8286);
   Data__187->SetEntries(4733);
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
      tex = new TLatex(0.19,0.885,"Data blinded in");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.19,0.85,"signal region");
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

   ci = 1234;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1234;
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
   hframe_copy__188->SetMaximum(151480);
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
   hframe_copy__189->SetMaximum(151480);
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
