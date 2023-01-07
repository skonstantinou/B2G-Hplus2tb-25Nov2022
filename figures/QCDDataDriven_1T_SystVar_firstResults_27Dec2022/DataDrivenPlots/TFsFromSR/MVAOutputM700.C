void MVAOutputM700()
{
//=========Macro generated from canvas: MVAOutputM700/MVAOutputM700
//=========  (Tue Dec 27 11:55:07 2022) by ROOT version 6.20/02
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
   0.03519584,
   0.02923591,
   0.0307874,
   0.0356318,
   0.03700169,
   0.04148967,
   0.04495676,
   0.04852701,
   0.05052112,
   0.05330142,
   0.05611404,
   0.05885436,
   0.06225345,
   0.07027329,
   0.06996733,
   0.0668531,
   0.07303473,
   0.07625982,
   0.1055706,
   0.3315127};
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
   0.03519584,
   0.02923591,
   0.0307874,
   0.0356318,
   0.03700169,
   0.04148967,
   0.04495676,
   0.04852701,
   0.05052112,
   0.05330142,
   0.05611404,
   0.05885436,
   0.06225345,
   0.07027329,
   0.06996733,
   0.0668531,
   0.07303473,
   0.07625982,
   0.1055706,
   0.3315127};
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
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMinimum(0.6021848);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMaximum(1.397815);
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
   0.03519584,
   0.02923591,
   0.0307874,
   0.0356318,
   0.03700169,
   0.04148967,
   0.04495676,
   0.04852701,
   0.05052112,
   0.05330142,
   0.05611404,
   0.05885436,
   0.06225345,
   0.07027329,
   0.06996733,
   0.0668531,
   0.07303473,
   0.07625982,
   0.1055706,
   0.3315127};
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
   0.03519584,
   0.02923591,
   0.0307874,
   0.0356318,
   0.03700169,
   0.04148967,
   0.04495676,
   0.04852701,
   0.05052112,
   0.05330142,
   0.05611404,
   0.05885436,
   0.06225345,
   0.07027329,
   0.06996733,
   0.0668531,
   0.07303473,
   0.07625982,
   0.1055706,
   0.3315127};
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
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMinimum(0.6021848);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMaximum(1.397815);
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
   1.050153,
   1.082941,
   1.060402,
   1.135093,
   0.9985707,
   0.9836458,
   0.1446322};
   Double_t Graph1_felx3107[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3107[7] = {
   0.03799321,
   0.03215869,
   0.03420652,
   0.04117417,
   0.04000689,
   0.04443659,
   0.01867194};
   Double_t Graph1_fehx3107[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3107[7] = {
   0.03799321,
   0.03215869,
   0.03420652,
   0.04117417,
   0.04000689,
   0.04443659,
   0.01867194};
   grae = new TGraphAsymmErrors(7,Graph1_fx3107,Graph1_fy3107,Graph1_felx3107,Graph1_fehx3107,Graph1_fely3107,Graph1_fehy3107);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1309931033107 = new TH1F("Graph_Graph_Graph_Graph1309931033107","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1309931033107->SetMinimum(0.02092955);
   Graph_Graph_Graph_Graph1309931033107->SetMaximum(1.281298);
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
   MVAOutputM700_1->Range(-0.204557,-2.156538,1.073924,5.670355);
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
   hframe__185->SetMaximum(158760);
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
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMinimum(0.3385147);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMaximum(38927.07);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,343.145);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,468.0233);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,421.1383);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,368.1147);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,283.6803);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,230.9782);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,218.8474);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,252.7022);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,200.6027);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,178.1611);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,159.4477);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,135.991);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,136.3672);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,116.728);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,127.9572);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,147.6119);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,136.7481);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,151.7046);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,62.7187);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,2.201504);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,29.63537);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,33.71935);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,34.53639);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,32.51487);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,28.53831);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,24.78422);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,25.34977);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,26.0682);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,24.33161);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,24.74617);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,23.83572);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,20.09798);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,24.85115);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,18.91149);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,19.04248);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,19.91229);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,20.65079);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,22.41262);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,16.23909);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,1.017907);
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
   Double_t xAxis159[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM700Inclusive",20, xAxis159);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,5229.786);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,6983.947);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,6202.252);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4866.202);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3896.891);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3222.418);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2837.532);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2384.52);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2127.266);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1917.698);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1710.561);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1525.667);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1435.634);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1264.524);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1172.608);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1059.932);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1039.795);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,889.8205);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,456.2652);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,33.49429);
   TT_stack_2_stack_2_stack_2->SetBinError(1,80.5899);
   TT_stack_2_stack_2_stack_2->SetBinError(2,93.31859);
   TT_stack_2_stack_2_stack_2->SetBinError(3,88.46081);
   TT_stack_2_stack_2_stack_2->SetBinError(4,78.59268);
   TT_stack_2_stack_2_stack_2->SetBinError(5,70.16672);
   TT_stack_2_stack_2_stack_2->SetBinError(6,63.95215);
   TT_stack_2_stack_2_stack_2->SetBinError(7,60.13323);
   TT_stack_2_stack_2_stack_2->SetBinError(8,54.91192);
   TT_stack_2_stack_2_stack_2->SetBinError(9,52.39957);
   TT_stack_2_stack_2_stack_2->SetBinError(10,49.28302);
   TT_stack_2_stack_2_stack_2->SetBinError(11,46.71761);
   TT_stack_2_stack_2_stack_2->SetBinError(12,43.8629);
   TT_stack_2_stack_2_stack_2->SetBinError(13,42.82717);
   TT_stack_2_stack_2_stack_2->SetBinError(14,39.47966);
   TT_stack_2_stack_2_stack_2->SetBinError(15,38.40403);
   TT_stack_2_stack_2_stack_2->SetBinError(16,36.07182);
   TT_stack_2_stack_2_stack_2->SetBinError(17,35.90647);
   TT_stack_2_stack_2_stack_2->SetBinError(18,32.989);
   TT_stack_2_stack_2_stack_2->SetBinError(19,23.60656);
   TT_stack_2_stack_2_stack_2->SetBinError(20,6.545761);
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
   Double_t xAxis160[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM700Inclusive",20, xAxis160);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,8977.328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,13490.99);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11501.81);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8156.651);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8297.264);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6509.539);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,5240.527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,4571.476);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4237.115);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3735.327);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3413.777);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3205.083);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2894.602);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2018.663);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2189.766);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2569.074);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1957.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1737.565);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1049.637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,101.9443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,504.8585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,604.1934);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,549.888);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,469.5026);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,455.4449);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,407.629);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,367.2491);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,344.4949);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,326.5998);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,305.879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,291.819);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,282.3361);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,273.6173);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,234.8787);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,240.4176);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,249.0939);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,225.112);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,208.1465);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,163.1027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,45.146);
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
   Double_t xAxis161[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__186 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__186","h_SR_MVAOutputM700Inclusive",20, xAxis161);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(1,19.16725);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(2,33.92603);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(3,69.98069);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(4,70.36564);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(5,77.9818);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(6,108.1392);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(7,87.80054);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(8,118.1909);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(9,122.6916);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(10,112.8638);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(11,147.1339);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(12,157.2652);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(13,168.1285);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(14,200.0688);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(15,281.1804);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(16,350.6193);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(17,470.2902);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(18,531.9746);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(19,432.0097);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(20,24.24081);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(1,5.478651);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(2,9.379976);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(3,11.55075);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(4,12.18531);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(5,12.97511);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(6,13.95304);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(7,14.19807);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(8,15.00824);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(9,16.08333);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(10,16.17062);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(11,17.10871);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(12,17.65473);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(13,18.70268);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(14,20.20411);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(15,22.25416);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(16,25.25885);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(17,28.83336);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(18,32.99615);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(19,28.34146);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(20,7.38465);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetEntries(1839.371);
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
   14550.26,
   20942.96,
   18125.2,
   13390.97,
   12477.83,
   9962.936,
   8296.906,
   7208.698,
   6564.983,
   5831.186,
   5283.786,
   4866.741,
   4466.603,
   3399.915,
   3490.332,
   3776.617,
   3134.003,
   2779.09,
   1568.621,
   137.6401};
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
   512.1085,
   612.2867,
   558.0277,
   477.1443,
   461.701,
   413.3589,
   373.002,
   349.8165,
   331.6703,
   310.8105,
   296.4945,
   286.4289,
   278.0614,
   238.9232,
   244.2092,
   252.4786,
   228.8911,
   211.9329,
   165.6003,
   45.62943};
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
   512.1085,
   612.2867,
   558.0277,
   477.1443,
   461.701,
   413.3589,
   373.002,
   349.8165,
   331.6703,
   310.8105,
   296.4945,
   286.4289,
   278.0614,
   238.9232,
   244.2092,
   252.4786,
   228.8911,
   211.9329,
   165.6003,
   45.62943};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMinimum(82.80958);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMaximum(23701.58);
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
   Data__187->SetBinContent(1,15280);
   Data__187->SetBinContent(2,22680);
   Data__187->SetBinContent(3,19220);
   Data__187->SetBinContent(4,15200);
   Data__187->SetBinContent(5,12460);
   Data__187->SetBinContent(6,9800);
   Data__187->SetBinContent(7,1200);
   Data__187->SetBinError(1,552.811);
   Data__187->SetBinError(2,673.4983);
   Data__187->SetBinError(3,620);
   Data__187->SetBinError(4,551.362);
   Data__187->SetBinError(5,499.1994);
   Data__187->SetBinError(6,442.7189);
   Data__187->SetBinError(7,154.9193);
   Data__187->SetEntries(4792);
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
   hframe_copy__188->SetMaximum(158760);
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
   hframe_copy__189->SetMaximum(158760);
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
