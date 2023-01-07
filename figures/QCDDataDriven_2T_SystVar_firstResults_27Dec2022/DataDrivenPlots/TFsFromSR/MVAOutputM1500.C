void MVAOutputM1500()
{
//=========Macro generated from canvas: MVAOutputM1500/MVAOutputM1500
//=========  (Tue Dec 27 11:52:13 2022) by ROOT version 6.20/02
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
   0.01071802,
   0.01975933,
   0.0260876,
   0.03031704,
   0.03590717,
   0.03956507,
   0.04333433,
   0.04695955,
   0.05070379,
   0.05346645,
   0.05661747,
   0.06251067,
   0.05899448,
   0.06497818,
   0.06601879,
   0.06602115,
   0.06676667,
   0.06803483,
   0.06207307,
   0.06429904};
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
   0.01071802,
   0.01975933,
   0.0260876,
   0.03031704,
   0.03590717,
   0.03956507,
   0.04333433,
   0.04695955,
   0.05070379,
   0.05346645,
   0.05661747,
   0.06251067,
   0.05899448,
   0.06497818,
   0.06601879,
   0.06602115,
   0.06676667,
   0.06803483,
   0.06207307,
   0.06429904};
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
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMinimum(0.9183582);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMaximum(1.081642);
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
   0.01071802,
   0.01975933,
   0.0260876,
   0.03031704,
   0.03590717,
   0.03956507,
   0.04333433,
   0.04695955,
   0.05070379,
   0.05346645,
   0.05661747,
   0.06251067,
   0.05899448,
   0.06497818,
   0.06601879,
   0.06602115,
   0.06676667,
   0.06803483,
   0.06207307,
   0.06429904};
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
   0.01071802,
   0.01975933,
   0.0260876,
   0.03031704,
   0.03590717,
   0.03956507,
   0.04333433,
   0.04695955,
   0.05070379,
   0.05346645,
   0.05661747,
   0.06251067,
   0.05899448,
   0.06497818,
   0.06601879,
   0.06602115,
   0.06676667,
   0.06803483,
   0.06207307,
   0.06429904};
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
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMinimum(0.9183582);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMaximum(1.081642);
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
   1.012687,
   0.9792112,
   1.095318,
   0.9406197,
   1.002268,
   1.001045,
   0.08353426,
   0.05080738};
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
   0.01209961,
   0.02181418,
   0.03040204,
   0.0337012,
   0.04048123,
   0.04522262,
   0.01411987,
   0.01693579};
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
   0.01209961,
   0.02181418,
   0.03040204,
   0.0337012,
   0.04048123,
   0.04522262,
   0.01411987,
   0.01693579};
   grae = new TGraphAsymmErrors(8,Graph1_fx3155,Graph1_fy3155,Graph1_felx3155,Graph1_fehx3155,Graph1_fely3155,Graph1_fehy3155);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1314731513155 = new TH1F("Graph_Graph_Graph_Graph1314731513155","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1314731513155->SetMinimum(0.03048443);
   Graph_Graph_Graph_Graph1314731513155->SetMaximum(1.234904);
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
   MVAOutputM1500_1->Range(-0.204557,-2.173729,1.073924,6.512723);
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
   hframe__269->SetMaximum(980700);
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
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMinimum(41.2841);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMaximum(224593.9);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,4983.552);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1440.841);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,880.1147);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,682.6524);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,484.3362);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,445.1155);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,350.822);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,287.2274);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,304.764);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,168.4047);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,201.6963);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,167.8297);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,192.8);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,155.3891);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,152.3597);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,139.47);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,165.4631);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,187.9049);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,162.9369);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,220.5555);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,115.7018);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,63.9147);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,50.18383);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,45.76632);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,35.48501);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,36.4782);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,32.0699);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,29.64991);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,30.03332);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,24.61106);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,24.93138);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,23.07124);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,29.74353);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,22.02819);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,20.96412);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,22.10439);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,21.69241);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,24.44336);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,22.05352);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,28.20617);
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
   Double_t xAxis231[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1500Inclusive",20, xAxis231);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,72070.43);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,19141.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,10990.36);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,7806.018);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,5843.87);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4654.18);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,4008.92);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3306.397);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2947.32);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2658.847);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2289.939);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2021.134);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2010.311);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1870.266);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1768.46);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1681.257);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1661.688);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1719.916);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1779.541);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1805.921);
   TT_stack_2_stack_2_stack_2->SetBinError(1,297.9599);
   TT_stack_2_stack_2_stack_2->SetBinError(2,154.4306);
   TT_stack_2_stack_2_stack_2->SetBinError(3,116.7775);
   TT_stack_2_stack_2_stack_2->SetBinError(4,98.28644);
   TT_stack_2_stack_2_stack_2->SetBinError(5,85.0918);
   TT_stack_2_stack_2_stack_2->SetBinError(6,75.7224);
   TT_stack_2_stack_2_stack_2->SetBinError(7,70.8322);
   TT_stack_2_stack_2_stack_2->SetBinError(8,64.064);
   TT_stack_2_stack_2_stack_2->SetBinError(9,60.30659);
   TT_stack_2_stack_2_stack_2->SetBinError(10,57.03749);
   TT_stack_2_stack_2_stack_2->SetBinError(11,53.27382);
   TT_stack_2_stack_2_stack_2->SetBinError(12,49.93954);
   TT_stack_2_stack_2_stack_2->SetBinError(13,49.48465);
   TT_stack_2_stack_2_stack_2->SetBinError(14,48.16098);
   TT_stack_2_stack_2_stack_2->SetBinError(15,46.97537);
   TT_stack_2_stack_2_stack_2->SetBinError(16,45.08163);
   TT_stack_2_stack_2_stack_2->SetBinError(17,44.62581);
   TT_stack_2_stack_2_stack_2->SetBinError(18,45.67212);
   TT_stack_2_stack_2_stack_2->SetBinError(19,45.91077);
   TT_stack_2_stack_2_stack_2->SetBinError(20,45.82562);
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
   Double_t xAxis232[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1500Inclusive",20, xAxis232);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,61290.8);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,20573.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11830.42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8074.878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,5904.048);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,4690.47);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,4020.053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3350.065);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,2752.019);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,2406.438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2333.164);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1505.243);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2085.543);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1730.476);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1692.523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1735.29);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1421.821);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1085.389);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1727.053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1516.316);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1447.922);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,795.8462);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,605.094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,490.3139);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,429.4407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,378.1034);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,354.7108);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,318.3394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,296.8824);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,272.8444);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,266.7603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,224.2793);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,246.3312);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,238.2515);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,232.9361);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,229.3405);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,211.1719);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,196.9438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,222.0116);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,221.3513);
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
   Double_t xAxis233[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__270 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__270","h_SR_MVAOutputM1500Inclusive",20, xAxis233);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(1,898.8129);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(2,875.056);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(3,863.0163);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(4,822.2548);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(5,768.6443);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(6,778.7825);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(7,720.6573);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(8,701.2885);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(9,684.359);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(10,564.8918);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(11,570.3707);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(12,540.9624);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(13,493.689);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(14,407.5026);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(15,410.8908);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(16,421.439);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(17,395.1115);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(18,375.938);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(19,295.2428);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(20,416.8392);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(1,41.32864);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(2,39.858);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(3,39.03187);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(4,37.72662);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(5,37.48817);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(6,36.63118);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(7,35.93428);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(8,34.90743);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(9,34.28285);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(10,33.01891);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(11,32.24228);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(12,31.60969);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(13,31.4018);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(14,29.95724);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(15,29.37146);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(16,28.36691);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(17,28.13413);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(18,27.60845);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(19,28.35965);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(20,29.52656);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetEntries(6381.876);
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
   138344.8,
   41155.57,
   23700.89,
   16563.55,
   12232.25,
   9789.766,
   8379.795,
   6943.689,
   6004.102,
   5233.689,
   4824.8,
   3694.207,
   4288.653,
   3756.131,
   3613.343,
   3556.017,
   3248.972,
   2993.21,
   3669.531,
   3542.792};
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
   1482.783,
   813.2067,
   618.2994,
   502.1578,
   439.2256,
   387.3328,
   363.1328,
   326.0725,
   304.4307,
   279.8268,
   273.1679,
   230.9273,
   253.0069,
   244.0666,
   238.5485,
   234.7723,
   216.923,
   203.6426,
   227.779,
   227.7981};
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
   1482.783,
   813.2067,
   618.2994,
   502.1578,
   439.2256,
   387.3328,
   363.1328,
   326.0725,
   304.4307,
   279.8268,
   273.1679,
   230.9273,
   253.0069,
   244.0666,
   238.5485,
   234.7723,
   216.923,
   203.6426,
   227.779,
   227.7981};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMinimum(2510.611);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMaximum(153531.3);
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
   Data__271->SetBinContent(1,140100);
   Data__271->SetBinContent(2,40300);
   Data__271->SetBinContent(3,25960);
   Data__271->SetBinContent(4,15580);
   Data__271->SetBinContent(5,12260);
   Data__271->SetBinContent(6,9800);
   Data__271->SetBinContent(7,700);
   Data__271->SetBinContent(20,180);
   Data__271->SetBinError(1,1673.918);
   Data__271->SetBinError(2,897.775);
   Data__271->SetBinError(3,720.5553);
   Data__271->SetBinError(4,558.2114);
   Data__271->SetBinError(5,495.1767);
   Data__271->SetBinError(6,442.7189);
   Data__271->SetBinError(7,118.3216);
   Data__271->SetBinError(20,60);
   Data__271->SetEntries(12244);
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
   hframe_copy__272->SetMaximum(980700);
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
   hframe_copy__273->SetMaximum(980700);
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
