void MVAOutputM400()
{
//=========Macro generated from canvas: MVAOutputM400/MVAOutputM400
//=========  (Fri Nov 18 13:27:40 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM400 = new TCanvas("MVAOutputM400", "MVAOutputM400",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM400->SetHighLightColor(2);
   MVAOutputM400->Range(0,0,1,1);
   MVAOutputM400->SetFillColor(0);
   MVAOutputM400->SetBorderMode(0);
   MVAOutputM400->SetBorderSize(2);
   MVAOutputM400->SetTickx(1);
   MVAOutputM400->SetTicky(1);
   MVAOutputM400->SetLeftMargin(0.16);
   MVAOutputM400->SetRightMargin(0.05);
   MVAOutputM400->SetTopMargin(0.06);
   MVAOutputM400->SetBottomMargin(0.13);
   MVAOutputM400->SetFrameFillStyle(0);
   MVAOutputM400->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM400_2
   TPad *MVAOutputM400_2 = new TPad("MVAOutputM400_2", "MVAOutputM400_2",0,0,1,0.304);
   MVAOutputM400_2->Draw();
   MVAOutputM400_2->cd();
   MVAOutputM400_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM400_2->SetFillColor(0);
   MVAOutputM400_2->SetFillStyle(4000);
   MVAOutputM400_2->SetBorderMode(0);
   MVAOutputM400_2->SetBorderSize(2);
   MVAOutputM400_2->SetTickx(1);
   MVAOutputM400_2->SetTicky(1);
   MVAOutputM400_2->SetLeftMargin(0.16);
   MVAOutputM400_2->SetRightMargin(0.05);
   MVAOutputM400_2->SetTopMargin(0);
   MVAOutputM400_2->SetBottomMargin(0.3421053);
   MVAOutputM400_2->SetFrameFillStyle(0);
   MVAOutputM400_2->SetFrameBorderMode(0);
   MVAOutputM400_2->SetFrameFillStyle(0);
   MVAOutputM400_2->SetFrameBorderMode(0);
   
   TH1F *hframe__120 = new TH1F("hframe__120","",1000,0,1.01);
   hframe__120->SetMinimum(0.3);
   hframe__120->SetMaximum(1.7);
   hframe__120->SetDirectory(0);
   hframe__120->SetStats(0);
   hframe__120->SetLineStyle(0);
   hframe__120->SetMarkerStyle(20);
   hframe__120->GetXaxis()->SetTitle("DNN Output");
   hframe__120->GetXaxis()->SetLabelFont(43);
   hframe__120->GetXaxis()->SetLabelOffset(0.007);
   hframe__120->GetXaxis()->SetLabelSize(27);
   hframe__120->GetXaxis()->SetTitleSize(33);
   hframe__120->GetXaxis()->SetTitleOffset(2.960526);
   hframe__120->GetXaxis()->SetTitleFont(43);
   hframe__120->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__120->GetYaxis()->SetNdivisions(505);
   hframe__120->GetYaxis()->SetLabelFont(43);
   hframe__120->GetYaxis()->SetLabelOffset(0.007);
   hframe__120->GetYaxis()->SetLabelSize(21);
   hframe__120->GetYaxis()->SetTitleSize(33);
   hframe__120->GetYaxis()->SetTitleOffset(1.5625);
   hframe__120->GetYaxis()->SetTitleFont(43);
   hframe__120->GetZaxis()->SetLabelFont(43);
   hframe__120->GetZaxis()->SetLabelOffset(0.007);
   hframe__120->GetZaxis()->SetLabelSize(27);
   hframe__120->GetZaxis()->SetTitleSize(33);
   hframe__120->GetZaxis()->SetTitleOffset(1);
   hframe__120->GetZaxis()->SetTitleFont(43);
   hframe__120->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3069[19] = {
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
   Double_t BackgroundStatSystError_fy3069[19] = {
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
   Double_t BackgroundStatSystError_felx3069[19] = {
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
   Double_t BackgroundStatSystError_fely3069[19] = {
   0.05897578,
   0.06356564,
   0.05502306,
   0.05064378,
   0.04974695,
   0.04714183,
   0.05032675,
   0.05239453,
   0.05393759,
   0.05717334,
   0.05772869,
   0.06617395,
   0.07410065,
   0.08377059,
   0.09373908,
   0.1107553,
   0.145709,
   0.2901841,
   -2.598859};
   Double_t BackgroundStatSystError_fehx3069[19] = {
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
   Double_t BackgroundStatSystError_fehy3069[19] = {
   0.05897578,
   0.06356564,
   0.05502306,
   0.05064378,
   0.04974695,
   0.04714183,
   0.05032675,
   0.05239453,
   0.05393759,
   0.05717334,
   0.05772869,
   0.06617395,
   0.07410065,
   0.08377059,
   0.09373908,
   0.1107553,
   0.145709,
   0.2901841,
   -2.598859};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3069,BackgroundStatSystError_fy3069,BackgroundStatSystError_felx3069,BackgroundStatSystError_fehx3069,BackgroundStatSystError_fely3069,BackgroundStatSystError_fehy3069);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1227;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError306130653069 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError306130653069","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMinimum(0.6517791);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMaximum(1.348221);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError306130653069);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3070[19] = {
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
   Double_t BackgroundStatError_fy3070[19] = {
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
   Double_t BackgroundStatError_felx3070[19] = {
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
   Double_t BackgroundStatError_fely3070[19] = {
   0.05897578,
   0.06356564,
   0.05502306,
   0.05064378,
   0.04974695,
   0.04714183,
   0.05032675,
   0.05239453,
   0.05393759,
   0.05717334,
   0.05772869,
   0.06617395,
   0.07410065,
   0.08377059,
   0.09373908,
   0.1107553,
   0.145709,
   0.2901841,
   -2.598859};
   Double_t BackgroundStatError_fehx3070[19] = {
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
   Double_t BackgroundStatError_fehy3070[19] = {
   0.05897578,
   0.06356564,
   0.05502306,
   0.05064378,
   0.04974695,
   0.04714183,
   0.05032675,
   0.05239453,
   0.05393759,
   0.05717334,
   0.05772869,
   0.06617395,
   0.07410065,
   0.08377059,
   0.09373908,
   0.1107553,
   0.145709,
   0.2901841,
   -2.598859};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3070,BackgroundStatError_fy3070,BackgroundStatError_felx3070,BackgroundStatError_fehx3070,BackgroundStatError_fely3070,BackgroundStatError_fehy3070);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1226;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError306230663070 = new TH1F("Graph_Graph_Graph_BackgroundStatError306230663070","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMinimum(0.6517791);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMaximum(1.348221);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError306230663070);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx18[2] = {
   0,
   1.01};
   Double_t Graph0_fy18[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx18,Graph0_fy18);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0161718 = new TH1F("Graph_Graph_Graph_Graph0161718","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0161718->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0161718->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0161718->SetDirectory(0);
   Graph_Graph_Graph_Graph0161718->SetStats(0);
   Graph_Graph_Graph_Graph0161718->SetLineStyle(0);
   Graph_Graph_Graph_Graph0161718->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0161718);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3071[19] = {
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
   Double_t Graph1_fy3071[19] = {
   0.9240528,
   0.9275014,
   0.9254176,
   0.9908317,
   0.9568412,
   0.9148099,
   1.117803,
   1.048732,
   1.029221,
   1.046368,
   0.9896133,
   1.069274,
   1.133582,
   1.177301,
   1.199323,
   1.20056,
   1.124742,
   1.290442,
   -24.51216};
   Double_t Graph1_felx3071[19] = {
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
   Double_t Graph1_fely3071[19] = {
   0.04153308,
   0.04520365,
   0.03879553,
   0.037055,
   0.03608795,
   0.03322739,
   0.03913093,
   0.03944164,
   0.04021499,
   0.0428609,
   0.04223567,
   0.05068847,
   0.05815155,
   0.06741208,
   0.07525223,
   0.08899145,
   0.1130408,
   0.2356014,
   -24.51216};
   Double_t Graph1_fehx3071[19] = {
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
   Double_t Graph1_fehy3071[19] = {
   0.04153308,
   0.04520365,
   0.03879553,
   0.037055,
   0.03608795,
   0.03322739,
   0.03913093,
   0.03944164,
   0.04021499,
   0.0428609,
   0.04223567,
   0.05068847,
   0.05815155,
   0.06741208,
   0.07525223,
   0.08899145,
   0.1130408,
   0.2356014,
   -24.51216};
   grae = new TGraphAsymmErrors(19,Graph1_fx3071,Graph1_fy3071,Graph1_felx3071,Graph1_fehx3071,Graph1_fely3071,Graph1_fehy3071);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1306330673071 = new TH1F("Graph_Graph_Graph_Graph1306330673071","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1306330673071->SetMinimum(-27.11598);
   Graph_Graph_Graph_Graph1306330673071->SetMaximum(4.129864);
   Graph_Graph_Graph_Graph1306330673071->SetDirectory(0);
   Graph_Graph_Graph_Graph1306330673071->SetStats(0);
   Graph_Graph_Graph_Graph1306330673071->SetLineStyle(0);
   Graph_Graph_Graph_Graph1306330673071->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1306330673071);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__121 = new TH1F("hframe_copy__121","",1000,0,1.01);
   hframe_copy__121->SetMinimum(0.3);
   hframe_copy__121->SetMaximum(1.7);
   hframe_copy__121->SetDirectory(0);
   hframe_copy__121->SetStats(0);
   hframe_copy__121->SetLineStyle(0);
   hframe_copy__121->SetMarkerStyle(20);
   hframe_copy__121->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__121->GetXaxis()->SetLabelFont(43);
   hframe_copy__121->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__121->GetXaxis()->SetLabelSize(27);
   hframe_copy__121->GetXaxis()->SetTitleSize(33);
   hframe_copy__121->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__121->GetXaxis()->SetTitleFont(43);
   hframe_copy__121->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__121->GetYaxis()->SetNdivisions(505);
   hframe_copy__121->GetYaxis()->SetLabelFont(43);
   hframe_copy__121->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__121->GetYaxis()->SetLabelSize(21);
   hframe_copy__121->GetYaxis()->SetTitleSize(33);
   hframe_copy__121->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__121->GetYaxis()->SetTitleFont(43);
   hframe_copy__121->GetZaxis()->SetLabelFont(43);
   hframe_copy__121->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__121->GetZaxis()->SetLabelSize(27);
   hframe_copy__121->GetZaxis()->SetTitleSize(33);
   hframe_copy__121->GetZaxis()->SetTitleOffset(1);
   hframe_copy__121->GetZaxis()->SetTitleFont(43);
   hframe_copy__121->Draw("sameaxis");
   MVAOutputM400_2->Modified();
   MVAOutputM400->cd();
  
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
   MVAOutputM400->cd();
  
// ------------>Primitives in pad: MVAOutputM400_1
   TPad *MVAOutputM400_1 = new TPad("MVAOutputM400_1", "MVAOutputM400_1",0,0.2897959,1,1);
   MVAOutputM400_1->Draw();
   MVAOutputM400_1->cd();
   MVAOutputM400_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM400_1->SetFillColor(0);
   MVAOutputM400_1->SetFillStyle(4000);
   MVAOutputM400_1->SetBorderMode(0);
   MVAOutputM400_1->SetBorderSize(2);
   MVAOutputM400_1->SetLogy();
   MVAOutputM400_1->SetTickx(1);
   MVAOutputM400_1->SetTicky(1);
   MVAOutputM400_1->SetLeftMargin(0.16);
   MVAOutputM400_1->SetRightMargin(0.05);
   MVAOutputM400_1->SetTopMargin(0.06);
   MVAOutputM400_1->SetBottomMargin(0.02);
   MVAOutputM400_1->SetFrameFillStyle(0);
   MVAOutputM400_1->SetFrameBorderMode(0);
   MVAOutputM400_1->SetFrameFillStyle(0);
   MVAOutputM400_1->SetFrameBorderMode(0);
   
   TH1F *hframe__122 = new TH1F("hframe__122","",1000,0,1.01);
   hframe__122->SetMinimum(0.01);
   hframe__122->SetMaximum(500000);
   hframe__122->SetDirectory(0);
   hframe__122->SetStats(0);
   hframe__122->SetLineStyle(0);
   hframe__122->SetMarkerStyle(20);
   hframe__122->GetXaxis()->SetLabelFont(43);
   hframe__122->GetXaxis()->SetLabelOffset(0.007);
   hframe__122->GetXaxis()->SetLabelSize(0);
   hframe__122->GetXaxis()->SetTitleSize(0);
   hframe__122->GetXaxis()->SetTitleOffset(0.9);
   hframe__122->GetXaxis()->SetTitleFont(43);
   hframe__122->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__122->GetYaxis()->SetLabelFont(43);
   hframe__122->GetYaxis()->SetLabelOffset(0.007);
   hframe__122->GetYaxis()->SetLabelSize(27);
   hframe__122->GetYaxis()->SetTitleSize(33);
   hframe__122->GetYaxis()->SetTitleOffset(1.5625);
   hframe__122->GetYaxis()->SetTitleFont(43);
   hframe__122->GetZaxis()->SetLabelFont(43);
   hframe__122->GetZaxis()->SetLabelOffset(0.007);
   hframe__122->GetZaxis()->SetLabelSize(27);
   hframe__122->GetZaxis()->SetTitleSize(33);
   hframe__122->GetZaxis()->SetTitleOffset(1);
   hframe__122->GetZaxis()->SetTitleFont(43);
   hframe__122->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis103[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_16_stack_17_stack_18 = new TH1F("StackedMCstackHist_stack_16_stack_17_stack_18","StackedMCstackHist",19, xAxis103);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMinimum(6.628698);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMaximum(26514.79);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetDirectory(0);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetStats(0);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetLineStyle(0);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMarkerStyle(20);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_16_stack_17_stack_18);
   
   Double_t xAxis104[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM400Inclusive",19, xAxis104);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,63.79988);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,119.0851);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,128.8294);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,223.0725);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,283.9277);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,171.5286);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,201.4388);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,181.5611);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,119.0718);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,136.3487);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,169.2978);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,110.2665);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,67.34035);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,103.0388);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,51.49174);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,48.73159);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,34.64606);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,8.002149);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,10.49121);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,19.08049);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,21.84478);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,44.31505);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,50.31721);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,25.14274);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,39.35196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,38.56524);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,21.87922);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,22.32313);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,35.47832);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,21.68421);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,18.94576);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,32.71908);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,15.44909);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,14.47672);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,13.0866);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,5.360962);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(355.068);
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
   Double_t xAxis105[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM400Inclusive",19, xAxis105);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,783.2207);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1473.993);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1930.158);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2199.084);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2418.543);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2497.605);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2434.118);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2333.952);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2153.35);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1918.464);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1566.681);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1423.731);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1181.692);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,881.7947);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,640.5269);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,437.6243);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,222.1335);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,46.4055);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1.034868);
   TT_stack_2_stack_2_stack_2->SetBinError(1,21.92571);
   TT_stack_2_stack_2_stack_2->SetBinError(2,42.44212);
   TT_stack_2_stack_2_stack_2->SetBinError(3,48.40448);
   TT_stack_2_stack_2_stack_2->SetBinError(4,51.5758);
   TT_stack_2_stack_2_stack_2->SetBinError(5,54.56314);
   TT_stack_2_stack_2_stack_2->SetBinError(6,55.12439);
   TT_stack_2_stack_2_stack_2->SetBinError(7,54.52443);
   TT_stack_2_stack_2_stack_2->SetBinError(8,53.48657);
   TT_stack_2_stack_2_stack_2->SetBinError(9,51.53139);
   TT_stack_2_stack_2_stack_2->SetBinError(10,48.63659);
   TT_stack_2_stack_2_stack_2->SetBinError(11,43.87271);
   TT_stack_2_stack_2_stack_2->SetBinError(12,42.17178);
   TT_stack_2_stack_2_stack_2->SetBinError(13,38.53098);
   TT_stack_2_stack_2_stack_2->SetBinError(14,32.90087);
   TT_stack_2_stack_2_stack_2->SetBinError(15,28.18205);
   TT_stack_2_stack_2_stack_2->SetBinError(16,23.526);
   TT_stack_2_stack_2_stack_2->SetBinError(17,16.66968);
   TT_stack_2_stack_2_stack_2->SetBinError(18,7.590788);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.034868);
   TT_stack_2_stack_2_stack_2->SetEntries(21942.77);
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
   Double_t xAxis106[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM400Inclusive",19, xAxis106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,4509.816);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,7485.075);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,10238.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,12010.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,11991.71);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,13902.61);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,11964.51);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,10967.43);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,10455.65);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,9336.975);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,9359.264);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,6789.404);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5455.376);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,4196.507);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,3543.704);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2545.562);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1503.624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,410.5493);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,-1.85079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,314.9872);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,575.1793);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,674.5396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,727.7373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,727.2129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,778.8695);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,731.6909);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,703.3483);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,684.2353);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,649.1043);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,638.0238);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,548.7473);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,494.9421);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,431.5567);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,395.7498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,334.6629);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,255.6297);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,134.6027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,1.85079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3133.111);
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
   Double_t xAxis107[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__123 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__123","h_SR_MVAOutputM400Inclusive",19, xAxis107);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(1,4.684622);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(2,10.42694);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(3,10.76274);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(4,5.285102);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(5,14.25701);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(6,13.49549);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(7,10.06371);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(8,10.40584);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(9,11.84546);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(10,12.76236);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(11,8.381932);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(12,2.778642);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(13,-1.006767);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(14,-0.9645615);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(15,0.3551182);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(16,1.27019);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(17,-0.8682528);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(18,0.4569049);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(1,3.124128);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(2,5.413456);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(3,5.466762);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(4,6.094011);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(5,5.427017);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(6,5.658616);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(7,5.13049);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(8,5.342547);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(9,4.530555);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(10,4.551902);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(11,4.062887);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(12,2.896222);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(13,2.957803);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(14,2.586021);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(15,1.819591);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(16,1.802129);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(17,0.6183209);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(18,0.4569049);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetEntries(42.05547);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3072[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3072[19] = {
   5356.837,
   9078.153,
   12297.15,
   14432.32,
   14694.18,
   16571.75,
   14600.07,
   13482.95,
   12728.08,
   11391.79,
   11095.24,
   8323.401,
   6704.409,
   5181.341,
   4235.722,
   3031.918,
   1760.404,
   464.9569,
   -0.8159217};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3072[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3072[19] = {
   315.9236,
   577.0586,
   676.6268,
   730.9073,
   730.9908,
   781.2225,
   734.7741,
   706.4326,
   686.5217,
   651.3065,
   640.5138,
   550.7924,
   496.801,
   434.044,
   397.0527,
   335.801,
   256.5067,
   134.9231,
   2.120465};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3072[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3072[19] = {
   315.9236,
   577.0586,
   676.6268,
   730.9073,
   730.9908,
   781.2225,
   734.7741,
   706.4326,
   686.5217,
   651.3065,
   640.5138,
   550.7924,
   496.801,
   434.044,
   397.0527,
   335.801,
   256.5067,
   134.9231,
   2.120465};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3072,BkgSum-SR-Inclusive_sum_errors_fy3072,BkgSum-SR-Inclusive_sum_errors_felx3072,BkgSum-SR-Inclusive_sum_errors_fehx3072,BkgSum-SR-Inclusive_sum_errors_fely3072,BkgSum-SR-Inclusive_sum_errors_fehy3072);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMinimum(19.08829);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMaximum(19088.29);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors306430683072);
   
   grae->Draw("e2 ");
   Double_t xAxis108[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__124 = new TH1F("Data__124","h_SR_MVAOutputM400Inclusive",19, xAxis108);
   Data__124->SetBinContent(1,4950);
   Data__124->SetBinContent(2,8420);
   Data__124->SetBinContent(3,11380);
   Data__124->SetBinContent(4,14300);
   Data__124->SetBinContent(5,14060);
   Data__124->SetBinContent(6,15160);
   Data__124->SetBinContent(7,16320);
   Data__124->SetBinContent(8,14140);
   Data__124->SetBinContent(9,13100);
   Data__124->SetBinContent(10,11920);
   Data__124->SetBinContent(11,10980);
   Data__124->SetBinContent(12,8900);
   Data__124->SetBinContent(13,7600);
   Data__124->SetBinContent(14,6100);
   Data__124->SetBinContent(15,5080);
   Data__124->SetBinContent(16,3640);
   Data__124->SetBinContent(17,1980);
   Data__124->SetBinContent(18,600);
   Data__124->SetBinContent(19,20);
   Data__124->SetBinError(1,222.486);
   Data__124->SetBinError(2,410.3657);
   Data__124->SetBinError(3,477.0744);
   Data__124->SetBinError(4,534.7897);
   Data__124->SetBinError(5,530.2829);
   Data__124->SetBinError(6,550.636);
   Data__124->SetBinError(7,571.3143);
   Data__124->SetBinError(8,531.7894);
   Data__124->SetBinError(9,511.8594);
   Data__124->SetBinError(10,488.2622);
   Data__124->SetBinError(11,468.615);
   Data__124->SetBinError(12,421.9005);
   Data__124->SetBinError(13,389.8718);
   Data__124->SetBinError(14,349.285);
   Data__124->SetBinError(15,318.7475);
   Data__124->SetBinError(16,269.8148);
   Data__124->SetBinError(17,198.9975);
   Data__124->SetBinError(18,109.5445);
   Data__124->SetBinError(19,20);
   Data__124->SetEntries(8558.093);
   Data__124->SetDirectory(0);
   Data__124->SetFillStyle(3001);
   Data__124->SetLineWidth(2);
   Data__124->SetMarkerStyle(20);
   Data__124->SetMarkerSize(1.2);
   Data__124->GetXaxis()->SetRange(1,200);
   Data__124->GetXaxis()->SetLabelFont(42);
   Data__124->GetXaxis()->SetTitleOffset(1);
   Data__124->GetXaxis()->SetTitleFont(42);
   Data__124->GetYaxis()->SetLabelFont(42);
   Data__124->GetYaxis()->SetTitleFont(42);
   Data__124->GetZaxis()->SetLabelFont(42);
   Data__124->GetZaxis()->SetTitleOffset(1);
   Data__124->GetZaxis()->SetTitleFont(42);
   Data__124->Draw("EP same");
   
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

   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__125 = new TH1F("hframe_copy__125","",1000,0,1.01);
   hframe_copy__125->SetMinimum(0.01);
   hframe_copy__125->SetMaximum(500000);
   hframe_copy__125->SetDirectory(0);
   hframe_copy__125->SetStats(0);
   hframe_copy__125->SetLineStyle(0);
   hframe_copy__125->SetMarkerStyle(20);
   hframe_copy__125->GetXaxis()->SetLabelFont(43);
   hframe_copy__125->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__125->GetXaxis()->SetLabelSize(0);
   hframe_copy__125->GetXaxis()->SetTitleSize(0);
   hframe_copy__125->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__125->GetXaxis()->SetTitleFont(43);
   hframe_copy__125->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__125->GetYaxis()->SetLabelFont(43);
   hframe_copy__125->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__125->GetYaxis()->SetLabelSize(27);
   hframe_copy__125->GetYaxis()->SetTitleSize(33);
   hframe_copy__125->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__125->GetYaxis()->SetTitleFont(43);
   hframe_copy__125->GetZaxis()->SetLabelFont(43);
   hframe_copy__125->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__125->GetZaxis()->SetLabelSize(27);
   hframe_copy__125->GetZaxis()->SetTitleSize(33);
   hframe_copy__125->GetZaxis()->SetTitleOffset(1);
   hframe_copy__125->GetZaxis()->SetTitleFont(43);
   hframe_copy__125->Draw("sameaxis");
   
   TH1F *hframe_copy__126 = new TH1F("hframe_copy__126","",1000,0,1.01);
   hframe_copy__126->SetMinimum(0.01);
   hframe_copy__126->SetMaximum(500000);
   hframe_copy__126->SetDirectory(0);
   hframe_copy__126->SetStats(0);
   hframe_copy__126->SetLineStyle(0);
   hframe_copy__126->SetMarkerStyle(20);
   hframe_copy__126->GetXaxis()->SetLabelFont(43);
   hframe_copy__126->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__126->GetXaxis()->SetLabelSize(0);
   hframe_copy__126->GetXaxis()->SetTitleSize(0);
   hframe_copy__126->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__126->GetXaxis()->SetTitleFont(43);
   hframe_copy__126->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__126->GetYaxis()->SetLabelFont(43);
   hframe_copy__126->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__126->GetYaxis()->SetLabelSize(27);
   hframe_copy__126->GetYaxis()->SetTitleSize(33);
   hframe_copy__126->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__126->GetYaxis()->SetTitleFont(43);
   hframe_copy__126->GetZaxis()->SetLabelFont(43);
   hframe_copy__126->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__126->GetZaxis()->SetLabelSize(27);
   hframe_copy__126->GetZaxis()->SetTitleSize(33);
   hframe_copy__126->GetZaxis()->SetTitleOffset(1);
   hframe_copy__126->GetZaxis()->SetTitleFont(43);
   hframe_copy__126->Draw("sameaxis");
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
   MVAOutputM400_1->Modified();
   MVAOutputM400->cd();
   MVAOutputM400->Modified();
   MVAOutputM400->cd();
   MVAOutputM400->SetSelected(MVAOutputM400);
}
