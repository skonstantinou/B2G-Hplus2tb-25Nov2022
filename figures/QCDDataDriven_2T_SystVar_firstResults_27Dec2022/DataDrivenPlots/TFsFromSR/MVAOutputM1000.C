void MVAOutputM1000()
{
//=========Macro generated from canvas: MVAOutputM1000/MVAOutputM1000
//=========  (Tue Dec 27 11:52:10 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM1000 = new TCanvas("MVAOutputM1000", "MVAOutputM1000",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM1000->SetHighLightColor(2);
   MVAOutputM1000->Range(0,0,1,1);
   MVAOutputM1000->SetFillColor(0);
   MVAOutputM1000->SetBorderMode(0);
   MVAOutputM1000->SetBorderSize(2);
   MVAOutputM1000->SetTickx(1);
   MVAOutputM1000->SetTicky(1);
   MVAOutputM1000->SetLeftMargin(0.16);
   MVAOutputM1000->SetRightMargin(0.05);
   MVAOutputM1000->SetTopMargin(0.06);
   MVAOutputM1000->SetBottomMargin(0.13);
   MVAOutputM1000->SetFrameFillStyle(0);
   MVAOutputM1000->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM1000_2
   TPad *MVAOutputM1000_2 = new TPad("MVAOutputM1000_2", "MVAOutputM1000_2",0,0,1,0.304);
   MVAOutputM1000_2->Draw();
   MVAOutputM1000_2->cd();
   MVAOutputM1000_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM1000_2->SetFillColor(0);
   MVAOutputM1000_2->SetFillStyle(4000);
   MVAOutputM1000_2->SetBorderMode(0);
   MVAOutputM1000_2->SetBorderSize(2);
   MVAOutputM1000_2->SetTickx(1);
   MVAOutputM1000_2->SetTicky(1);
   MVAOutputM1000_2->SetLeftMargin(0.16);
   MVAOutputM1000_2->SetRightMargin(0.05);
   MVAOutputM1000_2->SetTopMargin(0);
   MVAOutputM1000_2->SetBottomMargin(0.3421053);
   MVAOutputM1000_2->SetFrameFillStyle(0);
   MVAOutputM1000_2->SetFrameBorderMode(0);
   MVAOutputM1000_2->SetFrameFillStyle(0);
   MVAOutputM1000_2->SetFrameBorderMode(0);
   
   TH1F *hframe__225 = new TH1F("hframe__225","",1000,0,1.01);
   hframe__225->SetMinimum(0.3);
   hframe__225->SetMaximum(1.7);
   hframe__225->SetDirectory(0);
   hframe__225->SetStats(0);
   hframe__225->SetLineStyle(0);
   hframe__225->SetMarkerStyle(20);
   hframe__225->GetXaxis()->SetTitle("DNN Output");
   hframe__225->GetXaxis()->SetLabelFont(43);
   hframe__225->GetXaxis()->SetLabelOffset(0.007);
   hframe__225->GetXaxis()->SetLabelSize(27);
   hframe__225->GetXaxis()->SetTitleSize(33);
   hframe__225->GetXaxis()->SetTitleOffset(2.960526);
   hframe__225->GetXaxis()->SetTitleFont(43);
   hframe__225->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__225->GetYaxis()->SetNdivisions(505);
   hframe__225->GetYaxis()->SetLabelFont(43);
   hframe__225->GetYaxis()->SetLabelOffset(0.007);
   hframe__225->GetYaxis()->SetLabelSize(21);
   hframe__225->GetYaxis()->SetTitleSize(33);
   hframe__225->GetYaxis()->SetTitleOffset(1.5625);
   hframe__225->GetYaxis()->SetTitleFont(43);
   hframe__225->GetZaxis()->SetLabelFont(43);
   hframe__225->GetZaxis()->SetLabelOffset(0.007);
   hframe__225->GetZaxis()->SetLabelSize(27);
   hframe__225->GetZaxis()->SetTitleSize(33);
   hframe__225->GetZaxis()->SetTitleOffset(1);
   hframe__225->GetZaxis()->SetTitleFont(43);
   hframe__225->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3129[20] = {
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
   Double_t BackgroundStatSystError_fy3129[20] = {
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
   Double_t BackgroundStatSystError_felx3129[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3129[20] = {
   0.01494004,
   0.0182584,
   0.02285569,
   0.02727313,
   0.02975912,
   0.03357559,
   0.03620467,
   0.04027976,
   0.03951453,
   0.0430801,
   0.04472368,
   0.04401109,
   0.04578554,
   0.04826959,
   0.04843992,
   0.04726171,
   0.05143296,
   0.05016238,
   0.05094859,
   0.0682474};
   Double_t BackgroundStatSystError_fehx3129[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3129[20] = {
   0.01494004,
   0.0182584,
   0.02285569,
   0.02727313,
   0.02975912,
   0.03357559,
   0.03620467,
   0.04027976,
   0.03951453,
   0.0430801,
   0.04472368,
   0.04401109,
   0.04578554,
   0.04826959,
   0.04843992,
   0.04726171,
   0.05143296,
   0.05016238,
   0.05094859,
   0.0682474};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3129,BackgroundStatSystError_fy3129,BackgroundStatSystError_felx3129,BackgroundStatSystError_fehx3129,BackgroundStatSystError_fely3129,BackgroundStatSystError_fehy3129);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1243;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError312131253129 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError312131253129","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMinimum(0.9181031);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMaximum(1.081897);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError312131253129);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3130[20] = {
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
   Double_t BackgroundStatError_fy3130[20] = {
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
   Double_t BackgroundStatError_felx3130[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3130[20] = {
   0.01494004,
   0.0182584,
   0.02285569,
   0.02727313,
   0.02975912,
   0.03357559,
   0.03620467,
   0.04027976,
   0.03951453,
   0.0430801,
   0.04472368,
   0.04401109,
   0.04578554,
   0.04826959,
   0.04843992,
   0.04726171,
   0.05143296,
   0.05016238,
   0.05094859,
   0.0682474};
   Double_t BackgroundStatError_fehx3130[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3130[20] = {
   0.01494004,
   0.0182584,
   0.02285569,
   0.02727313,
   0.02975912,
   0.03357559,
   0.03620467,
   0.04027976,
   0.03951453,
   0.0430801,
   0.04472368,
   0.04401109,
   0.04578554,
   0.04826959,
   0.04843992,
   0.04726171,
   0.05143296,
   0.05016238,
   0.05094859,
   0.0682474};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3130,BackgroundStatError_fy3130,BackgroundStatError_felx3130,BackgroundStatError_fehx3130,BackgroundStatError_fely3130,BackgroundStatError_fehy3130);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1242;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError312231263130 = new TH1F("Graph_Graph_Graph_BackgroundStatError312231263130","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMinimum(0.9181031);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMaximum(1.081897);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError312231263130);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx33[2] = {
   0,
   1.01};
   Double_t Graph0_fy33[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx33,Graph0_fy33);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0313233 = new TH1F("Graph_Graph_Graph_Graph0313233","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0313233->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0313233->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0313233->SetDirectory(0);
   Graph_Graph_Graph_Graph0313233->SetStats(0);
   Graph_Graph_Graph_Graph0313233->SetLineStyle(0);
   Graph_Graph_Graph_Graph0313233->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0313233);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3131[7] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3131[7] = {
   1.028824,
   0.9676367,
   1.01388,
   1.033856,
   0.9817764,
   1.02616,
   0.1157284};
   Double_t Graph1_felx3131[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3131[7] = {
   0.01652316,
   0.02026048,
   0.02614343,
   0.03122877,
   0.03381418,
   0.03979276,
   0.01413848};
   Double_t Graph1_fehx3131[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3131[7] = {
   0.01652316,
   0.02026048,
   0.02614343,
   0.03122877,
   0.03381418,
   0.03979276,
   0.01413848};
   grae = new TGraphAsymmErrors(7,Graph1_fx3131,Graph1_fy3131,Graph1_felx3131,Graph1_fehx3131,Graph1_fely3131,Graph1_fehy3131);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1312331273131 = new TH1F("Graph_Graph_Graph_Graph1312331273131","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1312331273131->SetMinimum(0.00515372);
   Graph_Graph_Graph_Graph1312331273131->SetMaximum(1.162389);
   Graph_Graph_Graph_Graph1312331273131->SetDirectory(0);
   Graph_Graph_Graph_Graph1312331273131->SetStats(0);
   Graph_Graph_Graph_Graph1312331273131->SetLineStyle(0);
   Graph_Graph_Graph_Graph1312331273131->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1312331273131);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__226 = new TH1F("hframe_copy__226","",1000,0,1.01);
   hframe_copy__226->SetMinimum(0.3);
   hframe_copy__226->SetMaximum(1.7);
   hframe_copy__226->SetDirectory(0);
   hframe_copy__226->SetStats(0);
   hframe_copy__226->SetLineStyle(0);
   hframe_copy__226->SetMarkerStyle(20);
   hframe_copy__226->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__226->GetXaxis()->SetLabelFont(43);
   hframe_copy__226->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetXaxis()->SetLabelSize(27);
   hframe_copy__226->GetXaxis()->SetTitleSize(33);
   hframe_copy__226->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__226->GetXaxis()->SetTitleFont(43);
   hframe_copy__226->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__226->GetYaxis()->SetNdivisions(505);
   hframe_copy__226->GetYaxis()->SetLabelFont(43);
   hframe_copy__226->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetYaxis()->SetLabelSize(21);
   hframe_copy__226->GetYaxis()->SetTitleSize(33);
   hframe_copy__226->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__226->GetYaxis()->SetTitleFont(43);
   hframe_copy__226->GetZaxis()->SetLabelFont(43);
   hframe_copy__226->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetZaxis()->SetLabelSize(27);
   hframe_copy__226->GetZaxis()->SetTitleSize(33);
   hframe_copy__226->GetZaxis()->SetTitleOffset(1);
   hframe_copy__226->GetZaxis()->SetTitleFont(43);
   hframe_copy__226->Draw("sameaxis");
   MVAOutputM1000_2->Modified();
   MVAOutputM1000->cd();
  
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
   MVAOutputM1000->cd();
  
// ------------>Primitives in pad: MVAOutputM1000_1
   TPad *MVAOutputM1000_1 = new TPad("MVAOutputM1000_1", "MVAOutputM1000_1",0,0.2897959,1,1);
   MVAOutputM1000_1->Draw();
   MVAOutputM1000_1->cd();
   MVAOutputM1000_1->Range(-0.204557,-2.168144,1.073924,6.239056);
   MVAOutputM1000_1->SetFillColor(0);
   MVAOutputM1000_1->SetFillStyle(4000);
   MVAOutputM1000_1->SetBorderMode(0);
   MVAOutputM1000_1->SetBorderSize(2);
   MVAOutputM1000_1->SetLogy();
   MVAOutputM1000_1->SetTickx(1);
   MVAOutputM1000_1->SetTicky(1);
   MVAOutputM1000_1->SetLeftMargin(0.16);
   MVAOutputM1000_1->SetRightMargin(0.05);
   MVAOutputM1000_1->SetTopMargin(0.06);
   MVAOutputM1000_1->SetBottomMargin(0.02);
   MVAOutputM1000_1->SetFrameFillStyle(0);
   MVAOutputM1000_1->SetFrameBorderMode(0);
   MVAOutputM1000_1->SetFrameFillStyle(0);
   MVAOutputM1000_1->SetFrameBorderMode(0);
   
   TH1F *hframe__227 = new TH1F("hframe__227","",1000,0,1.01);
   hframe__227->SetMinimum(0.01);
   hframe__227->SetMaximum(542780);
   hframe__227->SetDirectory(0);
   hframe__227->SetStats(0);
   hframe__227->SetLineStyle(0);
   hframe__227->SetMarkerStyle(20);
   hframe__227->GetXaxis()->SetLabelFont(43);
   hframe__227->GetXaxis()->SetLabelOffset(0.007);
   hframe__227->GetXaxis()->SetLabelSize(0);
   hframe__227->GetXaxis()->SetTitleSize(0);
   hframe__227->GetXaxis()->SetTitleOffset(0.9);
   hframe__227->GetXaxis()->SetTitleFont(43);
   hframe__227->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__227->GetYaxis()->SetLabelFont(43);
   hframe__227->GetYaxis()->SetLabelOffset(0.007);
   hframe__227->GetYaxis()->SetLabelSize(27);
   hframe__227->GetYaxis()->SetTitleSize(33);
   hframe__227->GetYaxis()->SetTitleOffset(1.5625);
   hframe__227->GetYaxis()->SetTitleFont(43);
   hframe__227->GetZaxis()->SetLabelFont(43);
   hframe__227->GetZaxis()->SetLabelOffset(0.007);
   hframe__227->GetZaxis()->SetLabelSize(27);
   hframe__227->GetZaxis()->SetTitleSize(33);
   hframe__227->GetZaxis()->SetTitleOffset(1);
   hframe__227->GetZaxis()->SetTitleFont(43);
   hframe__227->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis193[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_31_stack_32_stack_33 = new TH1F("StackedMCstackHist_stack_31_stack_32_stack_33","StackedMCstackHist",20, xAxis193);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMinimum(72.11537);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMaximum(115350.2);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetDirectory(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetStats(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetLineStyle(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMarkerStyle(20);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_31_stack_32_stack_33);
   
   Double_t xAxis194[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM1000Inclusive",20, xAxis194);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2629.304);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1625.781);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1088.18);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,751.6365);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,634.9216);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,568.5858);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,448.4975);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,410.3059);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,410.4563);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,305.8923);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,215.1087);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,315.5741);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,359.2687);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,257.9807);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,315.511);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,332.5714);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,299.7484);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,293.6252);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,297.1434);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,214.1422);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,81.03882);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,70.23253);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,51.9093);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,42.93239);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,41.58192);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,44.6513);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,37.58955);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,35.46982);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,35.52933);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,31.51215);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,24.78794);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,31.68405);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,36.73811);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,30.18785);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,28.09604);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,33.08853);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,29.74519);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,29.88051);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,29.90254);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,27.744);
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
   Double_t xAxis195[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1000Inclusive",20, xAxis195);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,38068.29);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,23466.76);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,14575.74);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,10172.22);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,8223.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,6848.545);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5632.422);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5079.604);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,4466.59);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4109.295);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3789.17);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3776.821);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,3588.181);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,3298.788);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,3312.873);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,3190.465);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,2938.665);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,2999.121);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,2878.637);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1620.437);
   TT_stack_2_stack_2_stack_2->SetBinError(1,215.5624);
   TT_stack_2_stack_2_stack_2->SetBinError(2,170.6957);
   TT_stack_2_stack_2_stack_2->SetBinError(3,134.9758);
   TT_stack_2_stack_2_stack_2->SetBinError(4,112.8122);
   TT_stack_2_stack_2_stack_2->SetBinError(5,101.4632);
   TT_stack_2_stack_2_stack_2->SetBinError(6,92.37609);
   TT_stack_2_stack_2_stack_2->SetBinError(7,83.751);
   TT_stack_2_stack_2_stack_2->SetBinError(8,79.45789);
   TT_stack_2_stack_2_stack_2->SetBinError(9,74.79053);
   TT_stack_2_stack_2_stack_2->SetBinError(10,71.59482);
   TT_stack_2_stack_2_stack_2->SetBinError(11,68.2484);
   TT_stack_2_stack_2_stack_2->SetBinError(12,68.44173);
   TT_stack_2_stack_2_stack_2->SetBinError(13,66.35637);
   TT_stack_2_stack_2_stack_2->SetBinError(14,63.7809);
   TT_stack_2_stack_2_stack_2->SetBinError(15,63.66831);
   TT_stack_2_stack_2_stack_2->SetBinError(16,62.19548);
   TT_stack_2_stack_2_stack_2->SetBinError(17,59.50255);
   TT_stack_2_stack_2_stack_2->SetBinError(18,59.75609);
   TT_stack_2_stack_2_stack_2->SetBinError(19,58.25892);
   TT_stack_2_stack_2_stack_2->SetBinError(20,43.2598);
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
   Double_t xAxis196[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1000Inclusive",20, xAxis196);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,34670.04);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,22053.25);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,14004.29);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10278.31);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8314.531);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,5543.815);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,5497.913);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3830.72);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4637.637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4283.882);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3879.593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3572.238);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3443.091);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3265.145);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2798.419);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2781.951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2551.706);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2483.476);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,2243.456);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1591.926);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1102.194);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,840.7847);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,662.4872);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,565.5111);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,499.1496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,422.9031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,409.0329);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,365.2097);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,366.7371);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,366.5022);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,345.0384);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,328.7896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,329.7698);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,321.6415);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,303.4358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,289.5369);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,290.278);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,281.9412);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,268.2243);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,228.1331);
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
   Double_t xAxis197[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__228 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__228","h_SR_MVAOutputM1000Inclusive",20, xAxis197);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(1,176.505);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(2,339.083);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(3,353.0353);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(4,364.8595);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(5,363.2504);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(6,352.7711);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(7,368.8143);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(8,352.4687);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(9,437.1219);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(10,442.6918);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(11,468.2728);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(12,459.0521);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(13,603.1309);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(14,554.9405);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(15,724.7456);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(16,843.4875);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(17,1167.211);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(18,1265.367);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(19,1388.207);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(20,980.7345);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(1,19.91808);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(2,24.94745);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(3,25.4217);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(4,26.12676);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(5,26.19372);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(6,25.73314);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(7,25.97305);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(8,26.86785);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(9,27.53131);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(10,28.15195);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(11,29.11496);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(12,30.52095);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(13,32.28539);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(14,34.0362);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(15,36.66555);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(16,39.87775);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(17,43.88093);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(18,48.47446);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(19,52.94218);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(20,44.15266);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetEntries(6381.876);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3132[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3132[20] = {
   75367.63,
   47145.79,
   29668.21,
   21202.17,
   17172.95,
   12960.95,
   11578.83,
   9320.631,
   9514.683,
   8699.069,
   7883.872,
   7664.633,
   7390.541,
   6821.914,
   6426.803,
   6304.987,
   5790.12,
   5776.222,
   5419.236,
   3426.505};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3132[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3132[20] = {
   1125.995,
   860.8069,
   678.0873,
   578.2496,
   511.052,
   435.1714,
   419.2077,
   375.4328,
   375.9682,
   374.7568,
   352.5957,
   337.3289,
   338.3799,
   329.291,
   311.3138,
   297.9845,
   297.803,
   289.749,
   276.1024,
   233.8501};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3132[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3132[20] = {
   1125.995,
   860.8069,
   678.0873,
   578.2496,
   511.052,
   435.1714,
   419.2077,
   375.4328,
   375.9682,
   374.7568,
   352.5957,
   337.3289,
   338.3799,
   329.291,
   311.3138,
   297.9845,
   297.803,
   289.749,
   276.1024,
   233.8501};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3132,BkgSum-SR-Inclusive_sum_errors_fy3132,BkgSum-SR-Inclusive_sum_errors_felx3132,BkgSum-SR-Inclusive_sum_errors_fehx3132,BkgSum-SR-Inclusive_sum_errors_fely3132,BkgSum-SR-Inclusive_sum_errors_fehy3132);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1241;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMinimum(2873.389);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMaximum(83823.73);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors312431283132);
   
   grae->Draw("e2 ");
   Double_t xAxis198[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__229 = new TH1F("Data__229","h_SR_MVAOutputM1000Inclusive",20, xAxis198);
   Data__229->SetBinContent(1,77540);
   Data__229->SetBinContent(2,45620);
   Data__229->SetBinContent(3,30080);
   Data__229->SetBinContent(4,21920);
   Data__229->SetBinContent(5,16860);
   Data__229->SetBinContent(6,13300);
   Data__229->SetBinContent(7,1340);
   Data__229->SetBinError(1,1245.311);
   Data__229->SetBinError(2,955.1963);
   Data__229->SetBinError(3,775.6288);
   Data__229->SetBinError(4,662.1178);
   Data__229->SetBinError(5,580.6892);
   Data__229->SetBinError(6,515.7519);
   Data__229->SetBinError(7,163.7071);
   Data__229->SetEntries(10333);
   Data__229->SetDirectory(0);
   Data__229->SetFillStyle(3001);
   Data__229->SetLineWidth(2);
   Data__229->SetMarkerStyle(20);
   Data__229->SetMarkerSize(1.2);
   Data__229->GetXaxis()->SetRange(1,200);
   Data__229->GetXaxis()->SetLabelFont(42);
   Data__229->GetXaxis()->SetTitleOffset(1);
   Data__229->GetXaxis()->SetTitleFont(42);
   Data__229->GetYaxis()->SetLabelFont(42);
   Data__229->GetYaxis()->SetTitleFont(42);
   Data__229->GetZaxis()->SetLabelFont(42);
   Data__229->GetZaxis()->SetTitleOffset(1);
   Data__229->GetZaxis()->SetTitleFont(42);
   Data__229->Draw("EP same");
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

   ci = 1241;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1241;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__230 = new TH1F("hframe_copy__230","",1000,0,1.01);
   hframe_copy__230->SetMinimum(0.01);
   hframe_copy__230->SetMaximum(542780);
   hframe_copy__230->SetDirectory(0);
   hframe_copy__230->SetStats(0);
   hframe_copy__230->SetLineStyle(0);
   hframe_copy__230->SetMarkerStyle(20);
   hframe_copy__230->GetXaxis()->SetLabelFont(43);
   hframe_copy__230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetXaxis()->SetLabelSize(0);
   hframe_copy__230->GetXaxis()->SetTitleSize(0);
   hframe_copy__230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__230->GetXaxis()->SetTitleFont(43);
   hframe_copy__230->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__230->GetYaxis()->SetLabelFont(43);
   hframe_copy__230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetYaxis()->SetLabelSize(27);
   hframe_copy__230->GetYaxis()->SetTitleSize(33);
   hframe_copy__230->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__230->GetYaxis()->SetTitleFont(43);
   hframe_copy__230->GetZaxis()->SetLabelFont(43);
   hframe_copy__230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetZaxis()->SetLabelSize(27);
   hframe_copy__230->GetZaxis()->SetTitleSize(33);
   hframe_copy__230->GetZaxis()->SetTitleOffset(1);
   hframe_copy__230->GetZaxis()->SetTitleFont(43);
   hframe_copy__230->Draw("sameaxis");
   
   TH1F *hframe_copy__231 = new TH1F("hframe_copy__231","",1000,0,1.01);
   hframe_copy__231->SetMinimum(0.01);
   hframe_copy__231->SetMaximum(542780);
   hframe_copy__231->SetDirectory(0);
   hframe_copy__231->SetStats(0);
   hframe_copy__231->SetLineStyle(0);
   hframe_copy__231->SetMarkerStyle(20);
   hframe_copy__231->GetXaxis()->SetLabelFont(43);
   hframe_copy__231->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetXaxis()->SetLabelSize(0);
   hframe_copy__231->GetXaxis()->SetTitleSize(0);
   hframe_copy__231->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__231->GetXaxis()->SetTitleFont(43);
   hframe_copy__231->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__231->GetYaxis()->SetLabelFont(43);
   hframe_copy__231->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetYaxis()->SetLabelSize(27);
   hframe_copy__231->GetYaxis()->SetTitleSize(33);
   hframe_copy__231->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__231->GetYaxis()->SetTitleFont(43);
   hframe_copy__231->GetZaxis()->SetLabelFont(43);
   hframe_copy__231->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetZaxis()->SetLabelSize(27);
   hframe_copy__231->GetZaxis()->SetTitleSize(33);
   hframe_copy__231->GetZaxis()->SetTitleOffset(1);
   hframe_copy__231->GetZaxis()->SetTitleFont(43);
   hframe_copy__231->Draw("sameaxis");
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
   MVAOutputM1000_1->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->SetSelected(MVAOutputM1000);
}
