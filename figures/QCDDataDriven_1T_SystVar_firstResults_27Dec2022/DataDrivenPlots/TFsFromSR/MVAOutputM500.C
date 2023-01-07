void MVAOutputM500()
{
//=========Macro generated from canvas: MVAOutputM500/MVAOutputM500
//=========  (Tue Dec 27 11:55:05 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM500 = new TCanvas("MVAOutputM500", "MVAOutputM500",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM500->SetHighLightColor(2);
   MVAOutputM500->Range(0,0,1,1);
   MVAOutputM500->SetFillColor(0);
   MVAOutputM500->SetBorderMode(0);
   MVAOutputM500->SetBorderSize(2);
   MVAOutputM500->SetTickx(1);
   MVAOutputM500->SetTicky(1);
   MVAOutputM500->SetLeftMargin(0.16);
   MVAOutputM500->SetRightMargin(0.05);
   MVAOutputM500->SetTopMargin(0.06);
   MVAOutputM500->SetBottomMargin(0.13);
   MVAOutputM500->SetFrameFillStyle(0);
   MVAOutputM500->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM500_2
   TPad *MVAOutputM500_2 = new TPad("MVAOutputM500_2", "MVAOutputM500_2",0,0,1,0.304);
   MVAOutputM500_2->Draw();
   MVAOutputM500_2->cd();
   MVAOutputM500_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM500_2->SetFillColor(0);
   MVAOutputM500_2->SetFillStyle(4000);
   MVAOutputM500_2->SetBorderMode(0);
   MVAOutputM500_2->SetBorderSize(2);
   MVAOutputM500_2->SetTickx(1);
   MVAOutputM500_2->SetTicky(1);
   MVAOutputM500_2->SetLeftMargin(0.16);
   MVAOutputM500_2->SetRightMargin(0.05);
   MVAOutputM500_2->SetTopMargin(0);
   MVAOutputM500_2->SetBottomMargin(0.3421053);
   MVAOutputM500_2->SetFrameFillStyle(0);
   MVAOutputM500_2->SetFrameBorderMode(0);
   MVAOutputM500_2->SetFrameFillStyle(0);
   MVAOutputM500_2->SetFrameBorderMode(0);
   
   TH1F *hframe__141 = new TH1F("hframe__141","",1000,0,1.01);
   hframe__141->SetMinimum(0.3);
   hframe__141->SetMaximum(1.7);
   hframe__141->SetDirectory(0);
   hframe__141->SetStats(0);
   hframe__141->SetLineStyle(0);
   hframe__141->SetMarkerStyle(20);
   hframe__141->GetXaxis()->SetTitle("DNN Output");
   hframe__141->GetXaxis()->SetLabelFont(43);
   hframe__141->GetXaxis()->SetLabelOffset(0.007);
   hframe__141->GetXaxis()->SetLabelSize(27);
   hframe__141->GetXaxis()->SetTitleSize(33);
   hframe__141->GetXaxis()->SetTitleOffset(2.960526);
   hframe__141->GetXaxis()->SetTitleFont(43);
   hframe__141->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__141->GetYaxis()->SetNdivisions(505);
   hframe__141->GetYaxis()->SetLabelFont(43);
   hframe__141->GetYaxis()->SetLabelOffset(0.007);
   hframe__141->GetYaxis()->SetLabelSize(21);
   hframe__141->GetYaxis()->SetTitleSize(33);
   hframe__141->GetYaxis()->SetTitleOffset(1.5625);
   hframe__141->GetYaxis()->SetTitleFont(43);
   hframe__141->GetZaxis()->SetLabelFont(43);
   hframe__141->GetZaxis()->SetLabelOffset(0.007);
   hframe__141->GetZaxis()->SetLabelSize(27);
   hframe__141->GetZaxis()->SetTitleSize(33);
   hframe__141->GetZaxis()->SetTitleOffset(1);
   hframe__141->GetZaxis()->SetTitleFont(43);
   hframe__141->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3081[19] = {
   0.05,
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
   Double_t BackgroundStatSystError_fy3081[19] = {
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
   Double_t BackgroundStatSystError_felx3081[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3081[19] = {
   0.06608051,
   0.04288377,
   0.03553013,
   0.03446868,
   0.03335512,
   0.03453523,
   0.03582021,
   0.03852966,
   0.04126263,
   0.04293105,
   0.04412909,
   0.0497525,
   0.0521397,
   0.05847573,
   0.06319109,
   0.08437766,
   0.1491591,
   0.5718546,
   0.6070286};
   Double_t BackgroundStatSystError_fehx3081[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3081[19] = {
   0.06608051,
   0.04288377,
   0.03553013,
   0.03446868,
   0.03335512,
   0.03453523,
   0.03582021,
   0.03852966,
   0.04126263,
   0.04293105,
   0.04412909,
   0.0497525,
   0.0521397,
   0.05847573,
   0.06319109,
   0.08437766,
   0.1491591,
   0.5718546,
   0.6070286};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3081,BackgroundStatSystError_fy3081,BackgroundStatSystError_felx3081,BackgroundStatSystError_fehx3081,BackgroundStatSystError_fely3081,BackgroundStatSystError_fehy3081);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1231;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError307330773081 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError307330773081","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMinimum(0.2715657);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMaximum(1.728434);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError307330773081);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3082[19] = {
   0.05,
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
   Double_t BackgroundStatError_fy3082[19] = {
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
   Double_t BackgroundStatError_felx3082[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3082[19] = {
   0.06608051,
   0.04288377,
   0.03553013,
   0.03446868,
   0.03335512,
   0.03453523,
   0.03582021,
   0.03852966,
   0.04126263,
   0.04293105,
   0.04412909,
   0.0497525,
   0.0521397,
   0.05847573,
   0.06319109,
   0.08437766,
   0.1491591,
   0.5718546,
   0.6070286};
   Double_t BackgroundStatError_fehx3082[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3082[19] = {
   0.06608051,
   0.04288377,
   0.03553013,
   0.03446868,
   0.03335512,
   0.03453523,
   0.03582021,
   0.03852966,
   0.04126263,
   0.04293105,
   0.04412909,
   0.0497525,
   0.0521397,
   0.05847573,
   0.06319109,
   0.08437766,
   0.1491591,
   0.5718546,
   0.6070286};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3082,BackgroundStatError_fy3082,BackgroundStatError_felx3082,BackgroundStatError_fehx3082,BackgroundStatError_fely3082,BackgroundStatError_fehy3082);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1230;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError307430783082 = new TH1F("Graph_Graph_Graph_BackgroundStatError307430783082","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMinimum(0.2715657);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMaximum(1.728434);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError307430783082);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx21[2] = {
   0,
   1.01};
   Double_t Graph0_fy21[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx21,Graph0_fy21);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0192021 = new TH1F("Graph_Graph_Graph_Graph0192021","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0192021->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0192021->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0192021->SetDirectory(0);
   Graph_Graph_Graph_Graph0192021->SetStats(0);
   Graph_Graph_Graph_Graph0192021->SetLineStyle(0);
   Graph_Graph_Graph_Graph0192021->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0192021);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3083[6] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3083[6] = {
   1.002007,
   1.063238,
   1.030115,
   1.123915,
   1.000234,
   0.105219};
   Double_t Graph1_felx3083[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3083[6] = {
   0.0696443,
   0.04698894,
   0.03882393,
   0.03934489,
   0.03616354,
   0.01214964};
   Double_t Graph1_fehx3083[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3083[6] = {
   0.0696443,
   0.04698894,
   0.03882393,
   0.03934489,
   0.03616354,
   0.01214964};
   grae = new TGraphAsymmErrors(6,Graph1_fx3083,Graph1_fy3083,Graph1_felx3083,Graph1_fehx3083,Graph1_fely3083,Graph1_fehy3083);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1307530793083 = new TH1F("Graph_Graph_Graph_Graph1307530793083","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1307530793083->SetMinimum(0.08376242);
   Graph_Graph_Graph_Graph1307530793083->SetMaximum(1.270279);
   Graph_Graph_Graph_Graph1307530793083->SetDirectory(0);
   Graph_Graph_Graph_Graph1307530793083->SetStats(0);
   Graph_Graph_Graph_Graph1307530793083->SetLineStyle(0);
   Graph_Graph_Graph_Graph1307530793083->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1307530793083);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__142 = new TH1F("hframe_copy__142","",1000,0,1.01);
   hframe_copy__142->SetMinimum(0.3);
   hframe_copy__142->SetMaximum(1.7);
   hframe_copy__142->SetDirectory(0);
   hframe_copy__142->SetStats(0);
   hframe_copy__142->SetLineStyle(0);
   hframe_copy__142->SetMarkerStyle(20);
   hframe_copy__142->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__142->GetXaxis()->SetLabelFont(43);
   hframe_copy__142->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__142->GetXaxis()->SetLabelSize(27);
   hframe_copy__142->GetXaxis()->SetTitleSize(33);
   hframe_copy__142->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__142->GetXaxis()->SetTitleFont(43);
   hframe_copy__142->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__142->GetYaxis()->SetNdivisions(505);
   hframe_copy__142->GetYaxis()->SetLabelFont(43);
   hframe_copy__142->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__142->GetYaxis()->SetLabelSize(21);
   hframe_copy__142->GetYaxis()->SetTitleSize(33);
   hframe_copy__142->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__142->GetYaxis()->SetTitleFont(43);
   hframe_copy__142->GetZaxis()->SetLabelFont(43);
   hframe_copy__142->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__142->GetZaxis()->SetLabelSize(27);
   hframe_copy__142->GetZaxis()->SetTitleSize(33);
   hframe_copy__142->GetZaxis()->SetTitleOffset(1);
   hframe_copy__142->GetZaxis()->SetTitleFont(43);
   hframe_copy__142->Draw("sameaxis");
   MVAOutputM500_2->Modified();
   MVAOutputM500->cd();
  
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
   MVAOutputM500->cd();
  
// ------------>Primitives in pad: MVAOutputM500_1
   TPad *MVAOutputM500_1 = new TPad("MVAOutputM500_1", "MVAOutputM500_1",0,0.2897959,1,1);
   MVAOutputM500_1->Draw();
   MVAOutputM500_1->cd();
   MVAOutputM500_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM500_1->SetFillColor(0);
   MVAOutputM500_1->SetFillStyle(4000);
   MVAOutputM500_1->SetBorderMode(0);
   MVAOutputM500_1->SetBorderSize(2);
   MVAOutputM500_1->SetLogy();
   MVAOutputM500_1->SetTickx(1);
   MVAOutputM500_1->SetTicky(1);
   MVAOutputM500_1->SetLeftMargin(0.16);
   MVAOutputM500_1->SetRightMargin(0.05);
   MVAOutputM500_1->SetTopMargin(0.06);
   MVAOutputM500_1->SetBottomMargin(0.02);
   MVAOutputM500_1->SetFrameFillStyle(0);
   MVAOutputM500_1->SetFrameBorderMode(0);
   MVAOutputM500_1->SetFrameFillStyle(0);
   MVAOutputM500_1->SetFrameBorderMode(0);
   
   TH1F *hframe__143 = new TH1F("hframe__143","",1000,0,1.01);
   hframe__143->SetMinimum(0.01);
   hframe__143->SetMaximum(500000);
   hframe__143->SetDirectory(0);
   hframe__143->SetStats(0);
   hframe__143->SetLineStyle(0);
   hframe__143->SetMarkerStyle(20);
   hframe__143->GetXaxis()->SetLabelFont(43);
   hframe__143->GetXaxis()->SetLabelOffset(0.007);
   hframe__143->GetXaxis()->SetLabelSize(0);
   hframe__143->GetXaxis()->SetTitleSize(0);
   hframe__143->GetXaxis()->SetTitleOffset(0.9);
   hframe__143->GetXaxis()->SetTitleFont(43);
   hframe__143->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__143->GetYaxis()->SetLabelFont(43);
   hframe__143->GetYaxis()->SetLabelOffset(0.007);
   hframe__143->GetYaxis()->SetLabelSize(27);
   hframe__143->GetYaxis()->SetTitleSize(33);
   hframe__143->GetYaxis()->SetTitleOffset(1.5625);
   hframe__143->GetYaxis()->SetTitleFont(43);
   hframe__143->GetZaxis()->SetLabelFont(43);
   hframe__143->GetZaxis()->SetLabelOffset(0.007);
   hframe__143->GetZaxis()->SetLabelSize(27);
   hframe__143->GetZaxis()->SetTitleSize(33);
   hframe__143->GetZaxis()->SetTitleOffset(1);
   hframe__143->GetZaxis()->SetTitleFont(43);
   hframe__143->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis121[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_19_stack_20_stack_21 = new TH1F("StackedMCstackHist_stack_19_stack_20_stack_21","StackedMCstackHist",19, xAxis121);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMinimum(6.118568);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMaximum(24474.27);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetDirectory(0);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetStats(0);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetLineStyle(0);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMarkerStyle(20);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_19_stack_20_stack_21);
   
   Double_t xAxis122[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM500Inclusive",19, xAxis122);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,32.43639);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,168.508);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,267.5158);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,352.9829);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,412.7695);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,384.7622);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,397.0175);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,305.7314);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,280.1921);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,298.2369);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,249.3849);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,262.9927);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,236.9009);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,186.7313);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,145.2125);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,110.372);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,17.16686);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,1.512346);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.006412686);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,6.84751);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,20.19926);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,28.70985);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,32.02579);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,35.95252);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,33.79192);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,37.3331);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,28.24282);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,28.59343);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,28.53094);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,23.90614);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,29.45192);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,24.847);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,24.95569);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,20.99997);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,16.33313);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,5.4378);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.018558);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.003892684);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1410.351);
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
   Double_t xAxis123[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM500Inclusive",19, xAxis123);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,592.5181);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,2959.619);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4401.78);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,5095.432);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,5168.291);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4964.986);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,4523.47);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3969.79);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,3588.93);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,3121.056);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2700.74);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2338.144);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2059.258);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1730.638);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1373.895);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,831.7449);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,225.764);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,18.23834);
   TT_stack_2_stack_2_stack_2->SetBinError(1,19.22663);
   TT_stack_2_stack_2_stack_2->SetBinError(2,60.56727);
   TT_stack_2_stack_2_stack_2->SetBinError(3,74.48804);
   TT_stack_2_stack_2_stack_2->SetBinError(4,80.36935);
   TT_stack_2_stack_2_stack_2->SetBinError(5,81.00949);
   TT_stack_2_stack_2_stack_2->SetBinError(6,79.44341);
   TT_stack_2_stack_2_stack_2->SetBinError(7,75.55143);
   TT_stack_2_stack_2_stack_2->SetBinError(8,71.03181);
   TT_stack_2_stack_2_stack_2->SetBinError(9,67.32635);
   TT_stack_2_stack_2_stack_2->SetBinError(10,62.49231);
   TT_stack_2_stack_2_stack_2->SetBinError(11,58.55928);
   TT_stack_2_stack_2_stack_2->SetBinError(12,54.12451);
   TT_stack_2_stack_2_stack_2->SetBinError(13,50.33732);
   TT_stack_2_stack_2_stack_2->SetBinError(14,46.26201);
   TT_stack_2_stack_2_stack_2->SetBinError(15,41.22167);
   TT_stack_2_stack_2_stack_2->SetBinError(16,32.04267);
   TT_stack_2_stack_2_stack_2->SetBinError(17,16.62174);
   TT_stack_2_stack_2_stack_2->SetBinError(18,4.712512);
   TT_stack_2_stack_2_stack_2->SetEntries(39675.21);
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
   Double_t xAxis124[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM500Inclusive",19, xAxis124);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1440.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,6502.828);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,8999.079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9072.259);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9715.36);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,8906.233);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,8271.884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,7285.998);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,6315.454);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,5766.853);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,6019.198);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,4380.275);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3960.815);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3110.572);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2700.061);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1445.995);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,513.5129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,7.422113);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,134.9784);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,408.0468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,479.0331);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,492.9744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,502.4571);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,484.7052);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,464.9785);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,438.8538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,413.8276);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,388.3414);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,390.7216);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,341.8334);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,321.3708);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,289.2757);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,262.5695);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,198.2677);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,111.4669);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,14.772);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3634.196);
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
   Double_t xAxis125[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__144 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__144","h_SR_MVAOutputM500Inclusive",19, xAxis125);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(1,1.626749);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(2,34.92081);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(3,68.49379);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(4,82.39162);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(5,123.0397);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(6,157.4177);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(7,213.7664);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(8,313.7114);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(9,314.8286);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(10,417.4942);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(11,358.9729);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(12,384.7029);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(13,350.2873);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(14,294.2339);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(15,258.5807);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(16,174.627);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(17,30.67146);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(18,3.011186);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(19,-0.3863584);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(1,2.046354);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(2,7.561505);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(3,10.38216);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(4,13.08246);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(5,15.97755);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(6,18.62189);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(7,21.11497);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(8,23.37917);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(9,25.61806);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(10,27.10216);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(11,27.73825);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(12,27.21563);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(13,26.39322);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(14,24.387);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(15,21.69018);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(16,16.55111);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(17,9.565467);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(18,2.797337);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(19,0.3863584);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetEntries(1841.014);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3084[19] = {
   0.05,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3084[19] = {
   2065.854,
   9630.955,
   13668.38,
   14520.67,
   15296.42,
   14255.98,
   13192.37,
   11561.52,
   10184.58,
   9186.146,
   8969.323,
   6981.412,
   6256.974,
   5027.941,
   4219.169,
   2388.112,
   756.4437,
   27.1728,
   0.006412686};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3084[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3084[19] = {
   136.5127,
   413.0116,
   485.6392,
   500.5084,
   510.2139,
   492.3335,
   472.5535,
   445.4614,
   420.2425,
   394.3709,
   395.8081,
   347.3427,
   326.2368,
   294.0125,
   266.6139,
   201.5033,
   112.8305,
   15.53889,
   0.003892684};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3084[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3084[19] = {
   136.5127,
   413.0116,
   485.6392,
   500.5084,
   510.2139,
   492.3335,
   472.5535,
   445.4614,
   420.2425,
   394.3709,
   395.8081,
   347.3427,
   326.2368,
   294.0125,
   266.6139,
   201.5033,
   112.8305,
   15.53889,
   0.003892684};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3084,BkgSum-SR-Inclusive_sum_errors_fy3084,BkgSum-SR-Inclusive_sum_errors_felx3084,BkgSum-SR-Inclusive_sum_errors_fehx3084,BkgSum-SR-Inclusive_sum_errors_fely3084,BkgSum-SR-Inclusive_sum_errors_fehy3084);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1229;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMinimum(0.002268002);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMaximum(17387.3);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors307630803084);
   
   grae->Draw("e2 ");
   Double_t xAxis126[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__145 = new TH1F("Data__145","h_SR_MVAOutputM500Inclusive",19, xAxis126);
   Data__145->SetBinContent(1,2070);
   Data__145->SetBinContent(2,10240);
   Data__145->SetBinContent(3,14080);
   Data__145->SetBinContent(4,16320);
   Data__145->SetBinContent(5,15300);
   Data__145->SetBinContent(6,1500);
   Data__145->SetBinError(1,143.8749);
   Data__145->SetBinError(2,452.5483);
   Data__145->SetBinError(3,530.66);
   Data__145->SetBinError(4,571.3143);
   Data__145->SetBinError(5,553.1727);
   Data__145->SetBinError(6,173.2051);
   Data__145->SetEntries(3028.166);
   Data__145->SetDirectory(0);
   Data__145->SetFillStyle(3001);
   Data__145->SetLineWidth(2);
   Data__145->SetMarkerStyle(20);
   Data__145->SetMarkerSize(1.2);
   Data__145->GetXaxis()->SetRange(1,200);
   Data__145->GetXaxis()->SetLabelFont(42);
   Data__145->GetXaxis()->SetTitleOffset(1);
   Data__145->GetXaxis()->SetTitleFont(42);
   Data__145->GetYaxis()->SetLabelFont(42);
   Data__145->GetYaxis()->SetTitleFont(42);
   Data__145->GetZaxis()->SetLabelFont(42);
   Data__145->GetZaxis()->SetTitleOffset(1);
   Data__145->GetZaxis()->SetTitleFont(42);
   Data__145->Draw("EP same");
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

   ci = 1229;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1229;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__146 = new TH1F("hframe_copy__146","",1000,0,1.01);
   hframe_copy__146->SetMinimum(0.01);
   hframe_copy__146->SetMaximum(500000);
   hframe_copy__146->SetDirectory(0);
   hframe_copy__146->SetStats(0);
   hframe_copy__146->SetLineStyle(0);
   hframe_copy__146->SetMarkerStyle(20);
   hframe_copy__146->GetXaxis()->SetLabelFont(43);
   hframe_copy__146->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__146->GetXaxis()->SetLabelSize(0);
   hframe_copy__146->GetXaxis()->SetTitleSize(0);
   hframe_copy__146->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__146->GetXaxis()->SetTitleFont(43);
   hframe_copy__146->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__146->GetYaxis()->SetLabelFont(43);
   hframe_copy__146->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__146->GetYaxis()->SetLabelSize(27);
   hframe_copy__146->GetYaxis()->SetTitleSize(33);
   hframe_copy__146->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__146->GetYaxis()->SetTitleFont(43);
   hframe_copy__146->GetZaxis()->SetLabelFont(43);
   hframe_copy__146->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__146->GetZaxis()->SetLabelSize(27);
   hframe_copy__146->GetZaxis()->SetTitleSize(33);
   hframe_copy__146->GetZaxis()->SetTitleOffset(1);
   hframe_copy__146->GetZaxis()->SetTitleFont(43);
   hframe_copy__146->Draw("sameaxis");
   
   TH1F *hframe_copy__147 = new TH1F("hframe_copy__147","",1000,0,1.01);
   hframe_copy__147->SetMinimum(0.01);
   hframe_copy__147->SetMaximum(500000);
   hframe_copy__147->SetDirectory(0);
   hframe_copy__147->SetStats(0);
   hframe_copy__147->SetLineStyle(0);
   hframe_copy__147->SetMarkerStyle(20);
   hframe_copy__147->GetXaxis()->SetLabelFont(43);
   hframe_copy__147->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__147->GetXaxis()->SetLabelSize(0);
   hframe_copy__147->GetXaxis()->SetTitleSize(0);
   hframe_copy__147->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__147->GetXaxis()->SetTitleFont(43);
   hframe_copy__147->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__147->GetYaxis()->SetLabelFont(43);
   hframe_copy__147->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__147->GetYaxis()->SetLabelSize(27);
   hframe_copy__147->GetYaxis()->SetTitleSize(33);
   hframe_copy__147->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__147->GetYaxis()->SetTitleFont(43);
   hframe_copy__147->GetZaxis()->SetLabelFont(43);
   hframe_copy__147->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__147->GetZaxis()->SetLabelSize(27);
   hframe_copy__147->GetZaxis()->SetTitleSize(33);
   hframe_copy__147->GetZaxis()->SetTitleOffset(1);
   hframe_copy__147->GetZaxis()->SetTitleFont(43);
   hframe_copy__147->Draw("sameaxis");
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
   MVAOutputM500_1->Modified();
   MVAOutputM500->cd();
   MVAOutputM500->Modified();
   MVAOutputM500->cd();
   MVAOutputM500->SetSelected(MVAOutputM500);
}
