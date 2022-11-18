void MVAOutputM600()
{
//=========Macro generated from canvas: MVAOutputM600/MVAOutputM600
//=========  (Fri Nov 18 13:27:42 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM600 = new TCanvas("MVAOutputM600", "MVAOutputM600",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM600->SetHighLightColor(2);
   MVAOutputM600->Range(0,0,1,1);
   MVAOutputM600->SetFillColor(0);
   MVAOutputM600->SetBorderMode(0);
   MVAOutputM600->SetBorderSize(2);
   MVAOutputM600->SetTickx(1);
   MVAOutputM600->SetTicky(1);
   MVAOutputM600->SetLeftMargin(0.16);
   MVAOutputM600->SetRightMargin(0.05);
   MVAOutputM600->SetTopMargin(0.06);
   MVAOutputM600->SetBottomMargin(0.13);
   MVAOutputM600->SetFrameFillStyle(0);
   MVAOutputM600->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM600_2
   TPad *MVAOutputM600_2 = new TPad("MVAOutputM600_2", "MVAOutputM600_2",0,0,1,0.304);
   MVAOutputM600_2->Draw();
   MVAOutputM600_2->cd();
   MVAOutputM600_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM600_2->SetFillColor(0);
   MVAOutputM600_2->SetFillStyle(4000);
   MVAOutputM600_2->SetBorderMode(0);
   MVAOutputM600_2->SetBorderSize(2);
   MVAOutputM600_2->SetTickx(1);
   MVAOutputM600_2->SetTicky(1);
   MVAOutputM600_2->SetLeftMargin(0.16);
   MVAOutputM600_2->SetRightMargin(0.05);
   MVAOutputM600_2->SetTopMargin(0);
   MVAOutputM600_2->SetBottomMargin(0.3421053);
   MVAOutputM600_2->SetFrameFillStyle(0);
   MVAOutputM600_2->SetFrameBorderMode(0);
   MVAOutputM600_2->SetFrameFillStyle(0);
   MVAOutputM600_2->SetFrameBorderMode(0);
   
   TH1F *hframe__162 = new TH1F("hframe__162","",1000,0,1.01);
   hframe__162->SetMinimum(0.3);
   hframe__162->SetMaximum(1.7);
   hframe__162->SetDirectory(0);
   hframe__162->SetStats(0);
   hframe__162->SetLineStyle(0);
   hframe__162->SetMarkerStyle(20);
   hframe__162->GetXaxis()->SetTitle("DNN Output");
   hframe__162->GetXaxis()->SetLabelFont(43);
   hframe__162->GetXaxis()->SetLabelOffset(0.007);
   hframe__162->GetXaxis()->SetLabelSize(27);
   hframe__162->GetXaxis()->SetTitleSize(33);
   hframe__162->GetXaxis()->SetTitleOffset(2.960526);
   hframe__162->GetXaxis()->SetTitleFont(43);
   hframe__162->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__162->GetYaxis()->SetNdivisions(505);
   hframe__162->GetYaxis()->SetLabelFont(43);
   hframe__162->GetYaxis()->SetLabelOffset(0.007);
   hframe__162->GetYaxis()->SetLabelSize(21);
   hframe__162->GetYaxis()->SetTitleSize(33);
   hframe__162->GetYaxis()->SetTitleOffset(1.5625);
   hframe__162->GetYaxis()->SetTitleFont(43);
   hframe__162->GetZaxis()->SetLabelFont(43);
   hframe__162->GetZaxis()->SetLabelOffset(0.007);
   hframe__162->GetZaxis()->SetLabelSize(27);
   hframe__162->GetZaxis()->SetTitleSize(33);
   hframe__162->GetZaxis()->SetTitleOffset(1);
   hframe__162->GetZaxis()->SetTitleFont(43);
   hframe__162->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3093[19] = {
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
   Double_t BackgroundStatSystError_fy3093[19] = {
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
   Double_t BackgroundStatSystError_felx3093[19] = {
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
   Double_t BackgroundStatSystError_fely3093[19] = {
   0.04214092,
   0.04463338,
   0.04794914,
   0.05037901,
   0.05432248,
   0.05558606,
   0.05862248,
   0.0603743,
   0.06577681,
   0.06731072,
   0.07493425,
   0.08572337,
   0.08194186,
   0.08559191,
   0.08198543,
   0.08833642,
   0.09865434,
   0.125406,
   0.3294796};
   Double_t BackgroundStatSystError_fehx3093[19] = {
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
   Double_t BackgroundStatSystError_fehy3093[19] = {
   0.04214092,
   0.04463338,
   0.04794914,
   0.05037901,
   0.05432248,
   0.05558606,
   0.05862248,
   0.0603743,
   0.06577681,
   0.06731072,
   0.07493425,
   0.08572337,
   0.08194186,
   0.08559191,
   0.08198543,
   0.08833642,
   0.09865434,
   0.125406,
   0.3294796};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3093,BackgroundStatSystError_fy3093,BackgroundStatSystError_felx3093,BackgroundStatSystError_fehx3093,BackgroundStatSystError_fely3093,BackgroundStatSystError_fehy3093);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1233;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError308530893093 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError308530893093","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMinimum(0.6046245);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMaximum(1.395376);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError308530893093);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3094[19] = {
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
   Double_t BackgroundStatError_fy3094[19] = {
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
   Double_t BackgroundStatError_felx3094[19] = {
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
   Double_t BackgroundStatError_fely3094[19] = {
   0.04214092,
   0.04463338,
   0.04794914,
   0.05037901,
   0.05432248,
   0.05558606,
   0.05862248,
   0.0603743,
   0.06577681,
   0.06731072,
   0.07493425,
   0.08572337,
   0.08194186,
   0.08559191,
   0.08198543,
   0.08833642,
   0.09865434,
   0.125406,
   0.3294796};
   Double_t BackgroundStatError_fehx3094[19] = {
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
   Double_t BackgroundStatError_fehy3094[19] = {
   0.04214092,
   0.04463338,
   0.04794914,
   0.05037901,
   0.05432248,
   0.05558606,
   0.05862248,
   0.0603743,
   0.06577681,
   0.06731072,
   0.07493425,
   0.08572337,
   0.08194186,
   0.08559191,
   0.08198543,
   0.08833642,
   0.09865434,
   0.125406,
   0.3294796};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3094,BackgroundStatError_fy3094,BackgroundStatError_felx3094,BackgroundStatError_fehx3094,BackgroundStatError_fely3094,BackgroundStatError_fehy3094);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1232;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError308630903094 = new TH1F("Graph_Graph_Graph_BackgroundStatError308630903094","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMinimum(0.6046245);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMaximum(1.395376);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError308630903094);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx24[2] = {
   0,
   1.01};
   Double_t Graph0_fy24[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx24,Graph0_fy24);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0222324 = new TH1F("Graph_Graph_Graph_Graph0222324","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0222324->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0222324->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0222324->SetDirectory(0);
   Graph_Graph_Graph_Graph0222324->SetStats(0);
   Graph_Graph_Graph_Graph0222324->SetLineStyle(0);
   Graph_Graph_Graph_Graph0222324->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0222324);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3095[19] = {
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
   Double_t Graph1_fy3095[19] = {
   0.8306246,
   0.8107466,
   0.9718995,
   1.167353,
   1.038319,
   1.120619,
   1.004633,
   0.9354787,
   1.089467,
   0.9186228,
   1.167224,
   1.396422,
   1.208276,
   1.384361,
   1.117591,
   0.9384442,
   1.020806,
   0.997152,
   1.110872};
   Double_t Graph1_felx3095[19] = {
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
   Double_t Graph1_fely3095[19] = {
   0.02800035,
   0.02950609,
   0.03484429,
   0.0403015,
   0.04101113,
   0.04371953,
   0.04343406,
   0.04287759,
   0.05074156,
   0.04724886,
   0.0597987,
   0.07529001,
   0.06641284,
   0.07378667,
   0.06327115,
   0.06187918,
   0.07328962,
   0.09179528,
   0.2618349};
   Double_t Graph1_fehx3095[19] = {
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
   Double_t Graph1_fehy3095[19] = {
   0.02800035,
   0.02950609,
   0.03484429,
   0.0403015,
   0.04101113,
   0.04371953,
   0.04343406,
   0.04287759,
   0.05074156,
   0.04724886,
   0.0597987,
   0.07529001,
   0.06641284,
   0.07378667,
   0.06327115,
   0.06187918,
   0.07328962,
   0.09179528,
   0.2618349};
   grae = new TGraphAsymmErrors(19,Graph1_fx3095,Graph1_fy3095,Graph1_felx3095,Graph1_fehx3095,Graph1_fely3095,Graph1_fehy3095);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1308730913095 = new TH1F("Graph_Graph_Graph_Graph1308730913095","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1308730913095->SetMinimum(0.7121934);
   Graph_Graph_Graph_Graph1308730913095->SetMaximum(1.540759);
   Graph_Graph_Graph_Graph1308730913095->SetDirectory(0);
   Graph_Graph_Graph_Graph1308730913095->SetStats(0);
   Graph_Graph_Graph_Graph1308730913095->SetLineStyle(0);
   Graph_Graph_Graph_Graph1308730913095->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1308730913095);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__163 = new TH1F("hframe_copy__163","",1000,0,1.01);
   hframe_copy__163->SetMinimum(0.3);
   hframe_copy__163->SetMaximum(1.7);
   hframe_copy__163->SetDirectory(0);
   hframe_copy__163->SetStats(0);
   hframe_copy__163->SetLineStyle(0);
   hframe_copy__163->SetMarkerStyle(20);
   hframe_copy__163->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__163->GetXaxis()->SetLabelFont(43);
   hframe_copy__163->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__163->GetXaxis()->SetLabelSize(27);
   hframe_copy__163->GetXaxis()->SetTitleSize(33);
   hframe_copy__163->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__163->GetXaxis()->SetTitleFont(43);
   hframe_copy__163->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__163->GetYaxis()->SetNdivisions(505);
   hframe_copy__163->GetYaxis()->SetLabelFont(43);
   hframe_copy__163->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__163->GetYaxis()->SetLabelSize(21);
   hframe_copy__163->GetYaxis()->SetTitleSize(33);
   hframe_copy__163->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__163->GetYaxis()->SetTitleFont(43);
   hframe_copy__163->GetZaxis()->SetLabelFont(43);
   hframe_copy__163->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__163->GetZaxis()->SetLabelSize(27);
   hframe_copy__163->GetZaxis()->SetTitleSize(33);
   hframe_copy__163->GetZaxis()->SetTitleOffset(1);
   hframe_copy__163->GetZaxis()->SetTitleFont(43);
   hframe_copy__163->Draw("sameaxis");
   MVAOutputM600_2->Modified();
   MVAOutputM600->cd();
  
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
   MVAOutputM600->cd();
  
// ------------>Primitives in pad: MVAOutputM600_1
   TPad *MVAOutputM600_1 = new TPad("MVAOutputM600_1", "MVAOutputM600_1",0,0.2897959,1,1);
   MVAOutputM600_1->Draw();
   MVAOutputM600_1->cd();
   MVAOutputM600_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM600_1->SetFillColor(0);
   MVAOutputM600_1->SetFillStyle(4000);
   MVAOutputM600_1->SetBorderMode(0);
   MVAOutputM600_1->SetBorderSize(2);
   MVAOutputM600_1->SetLogy();
   MVAOutputM600_1->SetTickx(1);
   MVAOutputM600_1->SetTicky(1);
   MVAOutputM600_1->SetLeftMargin(0.16);
   MVAOutputM600_1->SetRightMargin(0.05);
   MVAOutputM600_1->SetTopMargin(0.06);
   MVAOutputM600_1->SetBottomMargin(0.02);
   MVAOutputM600_1->SetFrameFillStyle(0);
   MVAOutputM600_1->SetFrameBorderMode(0);
   MVAOutputM600_1->SetFrameFillStyle(0);
   MVAOutputM600_1->SetFrameBorderMode(0);
   
   TH1F *hframe__164 = new TH1F("hframe__164","",1000,0,1.01);
   hframe__164->SetMinimum(0.01);
   hframe__164->SetMaximum(500000);
   hframe__164->SetDirectory(0);
   hframe__164->SetStats(0);
   hframe__164->SetLineStyle(0);
   hframe__164->SetMarkerStyle(20);
   hframe__164->GetXaxis()->SetLabelFont(43);
   hframe__164->GetXaxis()->SetLabelOffset(0.007);
   hframe__164->GetXaxis()->SetLabelSize(0);
   hframe__164->GetXaxis()->SetTitleSize(0);
   hframe__164->GetXaxis()->SetTitleOffset(0.9);
   hframe__164->GetXaxis()->SetTitleFont(43);
   hframe__164->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__164->GetYaxis()->SetLabelFont(43);
   hframe__164->GetYaxis()->SetLabelOffset(0.007);
   hframe__164->GetYaxis()->SetLabelSize(27);
   hframe__164->GetYaxis()->SetTitleSize(33);
   hframe__164->GetYaxis()->SetTitleOffset(1.5625);
   hframe__164->GetYaxis()->SetTitleFont(43);
   hframe__164->GetZaxis()->SetLabelFont(43);
   hframe__164->GetZaxis()->SetLabelOffset(0.007);
   hframe__164->GetZaxis()->SetLabelSize(27);
   hframe__164->GetZaxis()->SetTitleSize(33);
   hframe__164->GetZaxis()->SetTitleOffset(1);
   hframe__164->GetZaxis()->SetTitleFont(43);
   hframe__164->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis139[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_22_stack_23_stack_24 = new TH1F("StackedMCstackHist_stack_22_stack_23_stack_24","StackedMCstackHist",19, xAxis139);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMinimum(0.5332002);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMaximum(33754.27);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetDirectory(0);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetStats(0);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetLineStyle(0);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMarkerStyle(20);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_22_stack_23_stack_24);
   
   Double_t xAxis140[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM600Inclusive",19, xAxis140);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,132.981);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,224.6232);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,244.5842);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,192.998);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,216.9535);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,150.1431);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,184.3179);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,114.1669);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,69.68854);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,85.0213);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,126.1558);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,88.30894);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,62.0775);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,58.14133);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,58.34298);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,53.94197);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,54.89082);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,27.67584);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,7.284393);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,22.46433);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,42.62306);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,33.08557);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,31.68206);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,50.26916);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,23.66008);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,28.59896);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,36.08704);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,17.7551);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,15.84391);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,34.21148);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,16.6096);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,13.51309);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,13.99883);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,13.85481);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,14.73126);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,12.98616);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,9.449098);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,5.4888);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(364.327);
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
   Double_t xAxis141[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM600Inclusive",19, xAxis141);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1646.948);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,2923.541);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2967.968);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2838.263);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2458.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2070.065);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1764.161);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1456.689);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1259.583);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1064.87);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,969.9146);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,872.4695);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,741.998);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,681.4918);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,728.8087);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,570.3984);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,404.0129);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,227.5098);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,33.35147);
   TT_stack_2_stack_2_stack_2->SetBinError(1,31.80048);
   TT_stack_2_stack_2_stack_2->SetBinError(2,59.69168);
   TT_stack_2_stack_2_stack_2->SetBinError(3,60.20265);
   TT_stack_2_stack_2_stack_2->SetBinError(4,59.13701);
   TT_stack_2_stack_2_stack_2->SetBinError(5,54.95434);
   TT_stack_2_stack_2_stack_2->SetBinError(6,50.57093);
   TT_stack_2_stack_2_stack_2->SetBinError(7,46.51952);
   TT_stack_2_stack_2_stack_2->SetBinError(8,42.20222);
   TT_stack_2_stack_2_stack_2->SetBinError(9,39.3722);
   TT_stack_2_stack_2_stack_2->SetBinError(10,35.92428);
   TT_stack_2_stack_2_stack_2->SetBinError(11,34.51972);
   TT_stack_2_stack_2_stack_2->SetBinError(12,32.89485);
   TT_stack_2_stack_2_stack_2->SetBinError(13,30.18614);
   TT_stack_2_stack_2_stack_2->SetBinError(14,28.97929);
   TT_stack_2_stack_2_stack_2->SetBinError(15,29.97393);
   TT_stack_2_stack_2_stack_2->SetBinError(16,26.65436);
   TT_stack_2_stack_2_stack_2->SetBinError(17,22.31531);
   TT_stack_2_stack_2_stack_2->SetBinError(18,16.95278);
   TT_stack_2_stack_2_stack_2->SetBinError(19,6.376826);
   TT_stack_2_stack_2_stack_2->SetEntries(21609.09);
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
   Double_t xAxis142[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM600Inclusive",19, xAxis142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,8814.508);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,15476.64);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,12797.33);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11343.14);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9671.587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9505.449);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,8702.18);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,8605.753);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,7133.579);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,7079.82);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,5432.239);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3966.1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,4674.807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,4345.748);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4796.285);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,4277.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,3342.013);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2111.555);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,283.434);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,444.7584);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,828.0461);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,764.5804);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,721.0538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,666.5652);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,649.3874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,621.9755);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,611.8913);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,554.9812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,552.5546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,486.7737);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,420.738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,447.73);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,434.076);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,456.5678);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,431.929);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,374.0871);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,296.1683);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,106.4424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3092.274);
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
   Double_t xAxis143[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__165 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__165","h_SR_MVAOutputM600Inclusive",19, xAxis143);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(1,7.474057);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(2,9.888628);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(3,-2.098186);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(4,5.683997);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(5,3.022997);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(6,15.53065);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(7,5.628369);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(8,13.74545);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(9,13.97741);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(10,0.9195555);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(11,3.826162);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(12,7.109649);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(13,6.675629);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(14,9.418712);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(15,5.326897);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(16,3.636116);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(17,1.112484);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(18,0.1706628);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(19,0.5538144);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(1,3.294119);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(2,4.762123);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(3,4.901919);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(4,4.785553);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(5,4.764322);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(6,4.621947);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(7,5.052215);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(8,4.504051);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(9,4.08046);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(10,3.725837);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(11,4.157128);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(12,4.389119);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(13,3.667462);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(14,4.065662);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(15,3.23256);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(16,3.672709);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(17,2.824563);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(18,2.252689);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(19,1.870283);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetEntries(40.45501);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3096[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3096[19] = {
   10594.44,
   18624.81,
   16009.89,
   14374.4,
   12346.88,
   11725.66,
   10650.66,
   10176.61,
   8462.851,
   8229.711,
   6528.309,
   4926.879,
   5478.882,
   5085.38,
   5583.436,
   4901.73,
   3800.917,
   2366.74,
   324.0699};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3096[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3096[19] = {
   446.4593,
   831.2882,
   767.6602,
   724.1682,
   670.7132,
   651.7831,
   624.368,
   614.4056,
   556.6593,
   553.9478,
   489.1939,
   422.3486,
   448.9498,
   435.2674,
   457.7604,
   433.0013,
   374.977,
   296.8036,
   106.7744};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3096[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3096[19] = {
   446.4593,
   831.2882,
   767.6602,
   724.1682,
   670.7132,
   651.7831,
   624.368,
   614.4056,
   556.6593,
   553.9478,
   489.1939,
   422.3486,
   448.9498,
   435.2674,
   457.7604,
   433.0013,
   374.977,
   296.8036,
   106.7744};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3096,BkgSum-SR-Inclusive_sum_errors_fy3096,BkgSum-SR-Inclusive_sum_errors_felx3096,BkgSum-SR-Inclusive_sum_errors_fehx3096,BkgSum-SR-Inclusive_sum_errors_fely3096,BkgSum-SR-Inclusive_sum_errors_fehy3096);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1231;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMinimum(195.5659);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMaximum(21379.98);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors308830923096);
   
   grae->Draw("e2 ");
   Double_t xAxis144[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__166 = new TH1F("Data__166","h_SR_MVAOutputM600Inclusive",19, xAxis144);
   Data__166->SetBinContent(1,8800);
   Data__166->SetBinContent(2,15100);
   Data__166->SetBinContent(3,15560);
   Data__166->SetBinContent(4,16780);
   Data__166->SetBinContent(5,12820);
   Data__166->SetBinContent(6,13140);
   Data__166->SetBinContent(7,10700);
   Data__166->SetBinContent(8,9520);
   Data__166->SetBinContent(9,9220);
   Data__166->SetBinContent(10,7560);
   Data__166->SetBinContent(11,7620);
   Data__166->SetBinContent(12,6880);
   Data__166->SetBinContent(13,6620);
   Data__166->SetBinContent(14,7040);
   Data__166->SetBinContent(15,6240);
   Data__166->SetBinContent(16,4600);
   Data__166->SetBinContent(17,3880);
   Data__166->SetBinContent(18,2360);
   Data__166->SetBinContent(19,360);
   Data__166->SetBinError(1,296.6479);
   Data__166->SetBinError(2,549.5453);
   Data__166->SetBinError(3,557.853);
   Data__166->SetBinError(4,579.3099);
   Data__166->SetBinError(5,506.3596);
   Data__166->SetBinError(6,512.6402);
   Data__166->SetBinError(7,462.6013);
   Data__166->SetBinError(8,436.3485);
   Data__166->SetBinError(9,429.4182);
   Data__166->SetBinError(10,388.8444);
   Data__166->SetBinError(11,390.3844);
   Data__166->SetBinError(12,370.9447);
   Data__166->SetBinError(13,363.8681);
   Data__166->SetBinError(14,375.2333);
   Data__166->SetBinError(15,353.2704);
   Data__166->SetBinError(16,303.315);
   Data__166->SetBinError(17,278.5678);
   Data__166->SetBinError(18,217.2556);
   Data__166->SetBinError(19,84.85281);
   Data__166->SetEntries(8466.035);
   Data__166->SetDirectory(0);
   Data__166->SetFillStyle(3001);
   Data__166->SetLineWidth(2);
   Data__166->SetMarkerStyle(20);
   Data__166->SetMarkerSize(1.2);
   Data__166->GetXaxis()->SetRange(1,200);
   Data__166->GetXaxis()->SetLabelFont(42);
   Data__166->GetXaxis()->SetTitleOffset(1);
   Data__166->GetXaxis()->SetTitleFont(42);
   Data__166->GetYaxis()->SetLabelFont(42);
   Data__166->GetYaxis()->SetTitleFont(42);
   Data__166->GetZaxis()->SetLabelFont(42);
   Data__166->GetZaxis()->SetTitleOffset(1);
   Data__166->GetZaxis()->SetTitleFont(42);
   Data__166->Draw("EP same");
   
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

   ci = 1231;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1231;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__167 = new TH1F("hframe_copy__167","",1000,0,1.01);
   hframe_copy__167->SetMinimum(0.01);
   hframe_copy__167->SetMaximum(500000);
   hframe_copy__167->SetDirectory(0);
   hframe_copy__167->SetStats(0);
   hframe_copy__167->SetLineStyle(0);
   hframe_copy__167->SetMarkerStyle(20);
   hframe_copy__167->GetXaxis()->SetLabelFont(43);
   hframe_copy__167->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__167->GetXaxis()->SetLabelSize(0);
   hframe_copy__167->GetXaxis()->SetTitleSize(0);
   hframe_copy__167->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__167->GetXaxis()->SetTitleFont(43);
   hframe_copy__167->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__167->GetYaxis()->SetLabelFont(43);
   hframe_copy__167->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__167->GetYaxis()->SetLabelSize(27);
   hframe_copy__167->GetYaxis()->SetTitleSize(33);
   hframe_copy__167->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__167->GetYaxis()->SetTitleFont(43);
   hframe_copy__167->GetZaxis()->SetLabelFont(43);
   hframe_copy__167->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__167->GetZaxis()->SetLabelSize(27);
   hframe_copy__167->GetZaxis()->SetTitleSize(33);
   hframe_copy__167->GetZaxis()->SetTitleOffset(1);
   hframe_copy__167->GetZaxis()->SetTitleFont(43);
   hframe_copy__167->Draw("sameaxis");
   
   TH1F *hframe_copy__168 = new TH1F("hframe_copy__168","",1000,0,1.01);
   hframe_copy__168->SetMinimum(0.01);
   hframe_copy__168->SetMaximum(500000);
   hframe_copy__168->SetDirectory(0);
   hframe_copy__168->SetStats(0);
   hframe_copy__168->SetLineStyle(0);
   hframe_copy__168->SetMarkerStyle(20);
   hframe_copy__168->GetXaxis()->SetLabelFont(43);
   hframe_copy__168->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__168->GetXaxis()->SetLabelSize(0);
   hframe_copy__168->GetXaxis()->SetTitleSize(0);
   hframe_copy__168->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__168->GetXaxis()->SetTitleFont(43);
   hframe_copy__168->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__168->GetYaxis()->SetLabelFont(43);
   hframe_copy__168->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__168->GetYaxis()->SetLabelSize(27);
   hframe_copy__168->GetYaxis()->SetTitleSize(33);
   hframe_copy__168->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__168->GetYaxis()->SetTitleFont(43);
   hframe_copy__168->GetZaxis()->SetLabelFont(43);
   hframe_copy__168->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__168->GetZaxis()->SetLabelSize(27);
   hframe_copy__168->GetZaxis()->SetTitleSize(33);
   hframe_copy__168->GetZaxis()->SetTitleOffset(1);
   hframe_copy__168->GetZaxis()->SetTitleFont(43);
   hframe_copy__168->Draw("sameaxis");
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
   MVAOutputM600_1->Modified();
   MVAOutputM600->cd();
   MVAOutputM600->Modified();
   MVAOutputM600->cd();
   MVAOutputM600->SetSelected(MVAOutputM600);
}
