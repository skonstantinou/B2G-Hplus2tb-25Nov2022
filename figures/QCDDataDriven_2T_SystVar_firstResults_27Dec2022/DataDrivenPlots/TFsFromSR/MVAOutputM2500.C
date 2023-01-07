void MVAOutputM2500()
{
//=========Macro generated from canvas: MVAOutputM2500/MVAOutputM2500
//=========  (Tue Dec 27 11:52:19 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM2500 = new TCanvas("MVAOutputM2500", "MVAOutputM2500",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM2500->SetHighLightColor(2);
   MVAOutputM2500->Range(0,0,1,1);
   MVAOutputM2500->SetFillColor(0);
   MVAOutputM2500->SetBorderMode(0);
   MVAOutputM2500->SetBorderSize(2);
   MVAOutputM2500->SetTickx(1);
   MVAOutputM2500->SetTicky(1);
   MVAOutputM2500->SetLeftMargin(0.16);
   MVAOutputM2500->SetRightMargin(0.05);
   MVAOutputM2500->SetTopMargin(0.06);
   MVAOutputM2500->SetBottomMargin(0.13);
   MVAOutputM2500->SetFrameFillStyle(0);
   MVAOutputM2500->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM2500_2
   TPad *MVAOutputM2500_2 = new TPad("MVAOutputM2500_2", "MVAOutputM2500_2",0,0,1,0.304);
   MVAOutputM2500_2->Draw();
   MVAOutputM2500_2->cd();
   MVAOutputM2500_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM2500_2->SetFillColor(0);
   MVAOutputM2500_2->SetFillStyle(4000);
   MVAOutputM2500_2->SetBorderMode(0);
   MVAOutputM2500_2->SetBorderSize(2);
   MVAOutputM2500_2->SetTickx(1);
   MVAOutputM2500_2->SetTicky(1);
   MVAOutputM2500_2->SetLeftMargin(0.16);
   MVAOutputM2500_2->SetRightMargin(0.05);
   MVAOutputM2500_2->SetTopMargin(0);
   MVAOutputM2500_2->SetBottomMargin(0.3421053);
   MVAOutputM2500_2->SetFrameFillStyle(0);
   MVAOutputM2500_2->SetFrameBorderMode(0);
   MVAOutputM2500_2->SetFrameFillStyle(0);
   MVAOutputM2500_2->SetFrameBorderMode(0);
   
   TH1F *hframe__330 = new TH1F("hframe__330","",1000,0,1.01);
   hframe__330->SetMinimum(0.3);
   hframe__330->SetMaximum(1.7);
   hframe__330->SetDirectory(0);
   hframe__330->SetStats(0);
   hframe__330->SetLineStyle(0);
   hframe__330->SetMarkerStyle(20);
   hframe__330->GetXaxis()->SetTitle("DNN Output");
   hframe__330->GetXaxis()->SetLabelFont(43);
   hframe__330->GetXaxis()->SetLabelOffset(0.007);
   hframe__330->GetXaxis()->SetLabelSize(27);
   hframe__330->GetXaxis()->SetTitleSize(33);
   hframe__330->GetXaxis()->SetTitleOffset(2.960526);
   hframe__330->GetXaxis()->SetTitleFont(43);
   hframe__330->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__330->GetYaxis()->SetNdivisions(505);
   hframe__330->GetYaxis()->SetLabelFont(43);
   hframe__330->GetYaxis()->SetLabelOffset(0.007);
   hframe__330->GetYaxis()->SetLabelSize(21);
   hframe__330->GetYaxis()->SetTitleSize(33);
   hframe__330->GetYaxis()->SetTitleOffset(1.5625);
   hframe__330->GetYaxis()->SetTitleFont(43);
   hframe__330->GetZaxis()->SetLabelFont(43);
   hframe__330->GetZaxis()->SetLabelOffset(0.007);
   hframe__330->GetZaxis()->SetLabelSize(27);
   hframe__330->GetZaxis()->SetTitleSize(33);
   hframe__330->GetZaxis()->SetTitleOffset(1);
   hframe__330->GetZaxis()->SetTitleFont(43);
   hframe__330->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3189[20] = {
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
   Double_t BackgroundStatSystError_fy3189[20] = {
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
   Double_t BackgroundStatSystError_felx3189[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3189[20] = {
   0.009107083,
   0.02187064,
   0.03039372,
   0.03676341,
   0.04189786,
   0.05101812,
   0.05372781,
   0.05874796,
   0.06158963,
   0.06664708,
   0.07333666,
   0.07970096,
   0.08354816,
   0.08745683,
   0.08954911,
   0.08389666,
   0.09181847,
   0.09224244,
   0.08847741,
   0.07985104};
   Double_t BackgroundStatSystError_fehx3189[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3189[20] = {
   0.009107083,
   0.02187064,
   0.03039372,
   0.03676341,
   0.04189786,
   0.05101812,
   0.05372781,
   0.05874796,
   0.06158963,
   0.06664708,
   0.07333666,
   0.07970096,
   0.08354816,
   0.08745683,
   0.08954911,
   0.08389666,
   0.09181847,
   0.09224244,
   0.08847741,
   0.07985104};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3189,BackgroundStatSystError_fy3189,BackgroundStatSystError_felx3189,BackgroundStatSystError_fehx3189,BackgroundStatSystError_fely3189,BackgroundStatSystError_fehy3189);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError318131853189 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError318131853189","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMinimum(0.8893091);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMaximum(1.110691);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError318131853189);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3190[20] = {
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
   Double_t BackgroundStatError_fy3190[20] = {
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
   Double_t BackgroundStatError_felx3190[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3190[20] = {
   0.009107083,
   0.02187064,
   0.03039372,
   0.03676341,
   0.04189786,
   0.05101812,
   0.05372781,
   0.05874796,
   0.06158963,
   0.06664708,
   0.07333666,
   0.07970096,
   0.08354816,
   0.08745683,
   0.08954911,
   0.08389666,
   0.09181847,
   0.09224244,
   0.08847741,
   0.07985104};
   Double_t BackgroundStatError_fehx3190[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3190[20] = {
   0.009107083,
   0.02187064,
   0.03039372,
   0.03676341,
   0.04189786,
   0.05101812,
   0.05372781,
   0.05874796,
   0.06158963,
   0.06664708,
   0.07333666,
   0.07970096,
   0.08354816,
   0.08745683,
   0.08954911,
   0.08389666,
   0.09181847,
   0.09224244,
   0.08847741,
   0.07985104};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3190,BackgroundStatError_fy3190,BackgroundStatError_felx3190,BackgroundStatError_fehx3190,BackgroundStatError_fely3190,BackgroundStatError_fehy3190);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1257;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError318231863190 = new TH1F("Graph_Graph_Graph_BackgroundStatError318231863190","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMinimum(0.8893091);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMaximum(1.110691);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError318231863190);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx48[2] = {
   0,
   1.01};
   Double_t Graph0_fy48[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx48,Graph0_fy48);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0464748 = new TH1F("Graph_Graph_Graph_Graph0464748","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0464748->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0464748->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0464748->SetDirectory(0);
   Graph_Graph_Graph_Graph0464748->SetStats(0);
   Graph_Graph_Graph_Graph0464748->SetLineStyle(0);
   Graph_Graph_Graph_Graph0464748->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0464748);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3191[8] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.975};
   Double_t Graph1_fy3191[8] = {
   1.011728,
   0.9925452,
   1.014479,
   0.8745223,
   0.9883209,
   1.270127,
   0.1167585,
   0.2107633};
   Double_t Graph1_felx3191[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3191[8] = {
   0.0103157,
   0.02451663,
   0.03429565,
   0.03784428,
   0.0478282,
   0.0668488,
   0.0213171,
   0.04215266};
   Double_t Graph1_fehx3191[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3191[8] = {
   0.0103157,
   0.02451663,
   0.03429565,
   0.03784428,
   0.0478282,
   0.0668488,
   0.0213171,
   0.04215266};
   grae = new TGraphAsymmErrors(8,Graph1_fx3191,Graph1_fy3191,Graph1_felx3191,Graph1_fehx3191,Graph1_fely3191,Graph1_fehy3191);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1318331873191 = new TH1F("Graph_Graph_Graph_Graph1318331873191","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1318331873191->SetMinimum(0.08589731);
   Graph_Graph_Graph_Graph1318331873191->SetMaximum(1.46113);
   Graph_Graph_Graph_Graph1318331873191->SetDirectory(0);
   Graph_Graph_Graph_Graph1318331873191->SetStats(0);
   Graph_Graph_Graph_Graph1318331873191->SetLineStyle(0);
   Graph_Graph_Graph_Graph1318331873191->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1318331873191);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__331 = new TH1F("hframe_copy__331","",1000,0,1.01);
   hframe_copy__331->SetMinimum(0.3);
   hframe_copy__331->SetMaximum(1.7);
   hframe_copy__331->SetDirectory(0);
   hframe_copy__331->SetStats(0);
   hframe_copy__331->SetLineStyle(0);
   hframe_copy__331->SetMarkerStyle(20);
   hframe_copy__331->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__331->GetXaxis()->SetLabelFont(43);
   hframe_copy__331->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__331->GetXaxis()->SetLabelSize(27);
   hframe_copy__331->GetXaxis()->SetTitleSize(33);
   hframe_copy__331->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__331->GetXaxis()->SetTitleFont(43);
   hframe_copy__331->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__331->GetYaxis()->SetNdivisions(505);
   hframe_copy__331->GetYaxis()->SetLabelFont(43);
   hframe_copy__331->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__331->GetYaxis()->SetLabelSize(21);
   hframe_copy__331->GetYaxis()->SetTitleSize(33);
   hframe_copy__331->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__331->GetYaxis()->SetTitleFont(43);
   hframe_copy__331->GetZaxis()->SetLabelFont(43);
   hframe_copy__331->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__331->GetZaxis()->SetLabelSize(27);
   hframe_copy__331->GetZaxis()->SetTitleSize(33);
   hframe_copy__331->GetZaxis()->SetTitleOffset(1);
   hframe_copy__331->GetZaxis()->SetTitleFont(43);
   hframe_copy__331->Draw("sameaxis");
   MVAOutputM2500_2->Modified();
   MVAOutputM2500->cd();
  
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
   MVAOutputM2500->cd();
  
// ------------>Primitives in pad: MVAOutputM2500_1
   TPad *MVAOutputM2500_1 = new TPad("MVAOutputM2500_1", "MVAOutputM2500_1",0,0.2897959,1,1);
   MVAOutputM2500_1->Draw();
   MVAOutputM2500_1->cd();
   MVAOutputM2500_1->Range(-0.204557,-2.176723,1.073924,6.659427);
   MVAOutputM2500_1->SetFillColor(0);
   MVAOutputM2500_1->SetFillStyle(4000);
   MVAOutputM2500_1->SetBorderMode(0);
   MVAOutputM2500_1->SetBorderSize(2);
   MVAOutputM2500_1->SetLogy();
   MVAOutputM2500_1->SetTickx(1);
   MVAOutputM2500_1->SetTicky(1);
   MVAOutputM2500_1->SetLeftMargin(0.16);
   MVAOutputM2500_1->SetRightMargin(0.05);
   MVAOutputM2500_1->SetTopMargin(0.06);
   MVAOutputM2500_1->SetBottomMargin(0.02);
   MVAOutputM2500_1->SetFrameFillStyle(0);
   MVAOutputM2500_1->SetFrameBorderMode(0);
   MVAOutputM2500_1->SetFrameFillStyle(0);
   MVAOutputM2500_1->SetFrameBorderMode(0);
   
   TH1F *hframe__332 = new TH1F("hframe__332","",1000,0,1.01);
   hframe__332->SetMinimum(0.01);
   hframe__332->SetMaximum(1346660);
   hframe__332->SetDirectory(0);
   hframe__332->SetStats(0);
   hframe__332->SetLineStyle(0);
   hframe__332->SetMarkerStyle(20);
   hframe__332->GetXaxis()->SetLabelFont(43);
   hframe__332->GetXaxis()->SetLabelOffset(0.007);
   hframe__332->GetXaxis()->SetLabelSize(0);
   hframe__332->GetXaxis()->SetTitleSize(0);
   hframe__332->GetXaxis()->SetTitleOffset(0.9);
   hframe__332->GetXaxis()->SetTitleFont(43);
   hframe__332->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__332->GetYaxis()->SetLabelFont(43);
   hframe__332->GetYaxis()->SetLabelOffset(0.007);
   hframe__332->GetYaxis()->SetLabelSize(27);
   hframe__332->GetYaxis()->SetTitleSize(33);
   hframe__332->GetYaxis()->SetTitleOffset(1.5625);
   hframe__332->GetYaxis()->SetTitleFont(43);
   hframe__332->GetZaxis()->SetLabelFont(43);
   hframe__332->GetZaxis()->SetLabelOffset(0.007);
   hframe__332->GetZaxis()->SetLabelSize(27);
   hframe__332->GetZaxis()->SetTitleSize(33);
   hframe__332->GetZaxis()->SetTitleOffset(1);
   hframe__332->GetZaxis()->SetTitleFont(43);
   hframe__332->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis283[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_46_stack_47_stack_48 = new TH1F("StackedMCstackHist_stack_46_stack_47_stack_48","StackedMCstackHist",20, xAxis283);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMinimum(16.93127);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMaximum(327172.4);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetDirectory(0);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetStats(0);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetLineStyle(0);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMarkerStyle(20);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_46_stack_47_stack_48);
   
   Double_t xAxis284[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM2500Inclusive",20, xAxis284);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,7013.124);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1241.433);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,683.5007);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,461.8544);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,372.4132);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,246.968);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,183.2185);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,199.3862);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,167.3768);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,185.4492);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,133.0269);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,102.3751);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,91.23201);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,65.52275);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,71.54002);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,132.7181);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,87.77621);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,105.1413);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,122.2968);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,107.8819);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,138.6432);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,58.3489);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,45.15222);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,37.86101);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,36.28059);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,27.29083);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,24.34384);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,23.69042);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,23.2309);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,23.84491);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,21.68289);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,18.52717);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,16.2417);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,12.81933);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,17.52161);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,23.97209);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,17.25534);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,18.23142);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,19.47625);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,18.3689);
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
   Double_t xAxis285[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM2500Inclusive",20, xAxis285);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,97487.96);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,15289.62);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,8096.912);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,5435.302);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4051.708);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3033.184);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2617.413);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2109.942);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1856.855);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1578.404);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1395.607);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1192.668);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1097.503);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1073.508);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,965.0159);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,916.3795);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,843.8223);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,903.9438);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,896.899);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1193.457);
   TT_stack_2_stack_2_stack_2->SetBinError(1,346.7381);
   TT_stack_2_stack_2_stack_2->SetBinError(2,137.7282);
   TT_stack_2_stack_2_stack_2->SetBinError(3,100.1098);
   TT_stack_2_stack_2_stack_2->SetBinError(4,82.32523);
   TT_stack_2_stack_2_stack_2->SetBinError(5,70.97514);
   TT_stack_2_stack_2_stack_2->SetBinError(6,61.12215);
   TT_stack_2_stack_2_stack_2->SetBinError(7,57.07141);
   TT_stack_2_stack_2_stack_2->SetBinError(8,50.91984);
   TT_stack_2_stack_2_stack_2->SetBinError(9,47.85886);
   TT_stack_2_stack_2_stack_2->SetBinError(10,43.93849);
   TT_stack_2_stack_2_stack_2->SetBinError(11,41.15003);
   TT_stack_2_stack_2_stack_2->SetBinError(12,38.30367);
   TT_stack_2_stack_2_stack_2->SetBinError(13,36.57219);
   TT_stack_2_stack_2_stack_2->SetBinError(14,35.98357);
   TT_stack_2_stack_2_stack_2->SetBinError(15,34.02338);
   TT_stack_2_stack_2_stack_2->SetBinError(16,33.10292);
   TT_stack_2_stack_2_stack_2->SetBinError(17,31.9602);
   TT_stack_2_stack_2_stack_2->SetBinError(18,33.14744);
   TT_stack_2_stack_2_stack_2->SetBinError(19,33.31393);
   TT_stack_2_stack_2_stack_2->SetBinError(20,37.68528);
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
   Double_t xAxis286[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM2500Inclusive",20, xAxis286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,85648.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16495.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,8469.82);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,6315.226);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,4216.797);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,2404.318);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,2338.178);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2259.599);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1885.521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1921.981);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1468.382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1102.962);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,795.1255);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1046.379);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,988.0726);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,875.4323);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,959.1205);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,598.325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,865.2358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1070.991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1690.968);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,706.647);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,512.668);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,439.7296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,353.152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,282.1802);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,269.0349);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,262.474);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,234.8501);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,240.5094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,214.8131);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,186.3268);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,160.8448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,187.2729);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,177.2186);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,156.203);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,169.7609);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,143.3641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,162.2024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,184.7356);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4384.703);
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
   Double_t xAxis287[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__333 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__333","h_SR_MVAOutputM2500Inclusive",20, xAxis287);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(1,2827.728);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(2,1643.708);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(3,1283.637);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(4,1023.776);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(5,809.5546);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(6,688.2229);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(7,553.4374);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(8,457.4446);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(9,442.216);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(10,339.7929);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(11,279.1805);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(12,276.4448);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(13,247.5068);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(14,191.924);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(15,180.2427);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(16,154.5186);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(17,178.0198);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(18,153.8504);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(19,122.2019);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(20,152.3431);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(1,71.51029);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(2,54.90731);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(3,47.47442);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(4,42.37664);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(5,38.52053);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(6,35.07138);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(7,32.49111);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(8,29.98001);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(9,28.36764);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(10,26.09455);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(11,24.77616);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(12,23.13995);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(13,22.10497);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(14,21.12504);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(15,20.74919);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(16,19.32353);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(17,18.78313);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(18,18.27105);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(19,18.40851);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(20,18.43323);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetEntries(6381.877);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3192[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3192[20] = {
   190149.9,
   33026.2,
   17250.23,
   12212.38,
   8640.918,
   5684.47,
   5138.81,
   4568.927,
   3909.752,
   3685.834,
   2997.016,
   2398.005,
   1983.861,
   2185.41,
   2024.628,
   1924.53,
   1890.719,
   1607.41,
   1884.432,
   2372.329};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3192[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3192[20] = {
   1731.711,
   722.3044,
   524.2987,
   448.9688,
   362.036,
   290.011,
   276.097,
   268.4151,
   240.8002,
   245.6501,
   219.7911,
   191.1233,
   165.7479,
   191.129,
   181.3037,
   161.4616,
   173.6029,
   148.2714,
   166.7296,
   189.433};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3192[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3192[20] = {
   1731.711,
   722.3044,
   524.2987,
   448.9688,
   362.036,
   290.011,
   276.097,
   268.4151,
   240.8002,
   245.6501,
   219.7911,
   191.1233,
   165.7479,
   191.129,
   181.3037,
   161.4616,
   173.6029,
   148.2714,
   166.7296,
   189.433};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3192,BkgSum-SR-Inclusive_sum_errors_fy3192,BkgSum-SR-Inclusive_sum_errors_felx3192,BkgSum-SR-Inclusive_sum_errors_fehx3192,BkgSum-SR-Inclusive_sum_errors_fely3192,BkgSum-SR-Inclusive_sum_errors_fehy3192);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1256;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMinimum(1313.225);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMaximum(210923.8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors318431883192);
   
   grae->Draw("e2 ");
   Double_t xAxis288[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__334 = new TH1F("Data__334","h_SR_MVAOutputM2500Inclusive",20, xAxis288);
   Data__334->SetBinContent(1,192380);
   Data__334->SetBinContent(2,32780);
   Data__334->SetBinContent(3,17500);
   Data__334->SetBinContent(4,10680);
   Data__334->SetBinContent(5,8540);
   Data__334->SetBinContent(6,7220);
   Data__334->SetBinContent(7,600);
   Data__334->SetBinContent(20,500);
   Data__334->SetBinError(1,1961.53);
   Data__334->SetBinError(2,809.6913);
   Data__334->SetBinError(3,591.608);
   Data__334->SetBinError(4,462.1688);
   Data__334->SetBinError(5,413.2796);
   Data__334->SetBinError(6,380);
   Data__334->SetBinError(7,109.5445);
   Data__334->SetBinError(20,100);
   Data__334->SetEntries(13510);
   Data__334->SetDirectory(0);
   Data__334->SetFillStyle(3001);
   Data__334->SetLineWidth(2);
   Data__334->SetMarkerStyle(20);
   Data__334->SetMarkerSize(1.2);
   Data__334->GetXaxis()->SetRange(1,200);
   Data__334->GetXaxis()->SetLabelFont(42);
   Data__334->GetXaxis()->SetTitleOffset(1);
   Data__334->GetXaxis()->SetTitleFont(42);
   Data__334->GetYaxis()->SetLabelFont(42);
   Data__334->GetYaxis()->SetTitleFont(42);
   Data__334->GetZaxis()->SetLabelFont(42);
   Data__334->GetZaxis()->SetTitleOffset(1);
   Data__334->GetZaxis()->SetTitleFont(42);
   Data__334->Draw("EP same");
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

   ci = 1256;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1256;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__335 = new TH1F("hframe_copy__335","",1000,0,1.01);
   hframe_copy__335->SetMinimum(0.01);
   hframe_copy__335->SetMaximum(1346660);
   hframe_copy__335->SetDirectory(0);
   hframe_copy__335->SetStats(0);
   hframe_copy__335->SetLineStyle(0);
   hframe_copy__335->SetMarkerStyle(20);
   hframe_copy__335->GetXaxis()->SetLabelFont(43);
   hframe_copy__335->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__335->GetXaxis()->SetLabelSize(0);
   hframe_copy__335->GetXaxis()->SetTitleSize(0);
   hframe_copy__335->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__335->GetXaxis()->SetTitleFont(43);
   hframe_copy__335->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__335->GetYaxis()->SetLabelFont(43);
   hframe_copy__335->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__335->GetYaxis()->SetLabelSize(27);
   hframe_copy__335->GetYaxis()->SetTitleSize(33);
   hframe_copy__335->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__335->GetYaxis()->SetTitleFont(43);
   hframe_copy__335->GetZaxis()->SetLabelFont(43);
   hframe_copy__335->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__335->GetZaxis()->SetLabelSize(27);
   hframe_copy__335->GetZaxis()->SetTitleSize(33);
   hframe_copy__335->GetZaxis()->SetTitleOffset(1);
   hframe_copy__335->GetZaxis()->SetTitleFont(43);
   hframe_copy__335->Draw("sameaxis");
   
   TH1F *hframe_copy__336 = new TH1F("hframe_copy__336","",1000,0,1.01);
   hframe_copy__336->SetMinimum(0.01);
   hframe_copy__336->SetMaximum(1346660);
   hframe_copy__336->SetDirectory(0);
   hframe_copy__336->SetStats(0);
   hframe_copy__336->SetLineStyle(0);
   hframe_copy__336->SetMarkerStyle(20);
   hframe_copy__336->GetXaxis()->SetLabelFont(43);
   hframe_copy__336->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__336->GetXaxis()->SetLabelSize(0);
   hframe_copy__336->GetXaxis()->SetTitleSize(0);
   hframe_copy__336->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__336->GetXaxis()->SetTitleFont(43);
   hframe_copy__336->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__336->GetYaxis()->SetLabelFont(43);
   hframe_copy__336->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__336->GetYaxis()->SetLabelSize(27);
   hframe_copy__336->GetYaxis()->SetTitleSize(33);
   hframe_copy__336->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__336->GetYaxis()->SetTitleFont(43);
   hframe_copy__336->GetZaxis()->SetLabelFont(43);
   hframe_copy__336->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__336->GetZaxis()->SetLabelSize(27);
   hframe_copy__336->GetZaxis()->SetTitleSize(33);
   hframe_copy__336->GetZaxis()->SetTitleOffset(1);
   hframe_copy__336->GetZaxis()->SetTitleFont(43);
   hframe_copy__336->Draw("sameaxis");
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
   MVAOutputM2500_1->Modified();
   MVAOutputM2500->cd();
   MVAOutputM2500->Modified();
   MVAOutputM2500->cd();
   MVAOutputM2500->SetSelected(MVAOutputM2500);
}
