void TopMVA()
{
//=========Macro generated from canvas: TopMVA/TopMVA
//=========  (Fri Nov 18 13:28:05 2022) by ROOT version 6.20/02
   TCanvas *TopMVA = new TCanvas("TopMVA", "TopMVA",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   TopMVA->SetHighLightColor(2);
   TopMVA->Range(0,0,1,1);
   TopMVA->SetFillColor(0);
   TopMVA->SetBorderMode(0);
   TopMVA->SetBorderSize(2);
   TopMVA->SetTickx(1);
   TopMVA->SetTicky(1);
   TopMVA->SetLeftMargin(0.16);
   TopMVA->SetRightMargin(0.05);
   TopMVA->SetTopMargin(0.06);
   TopMVA->SetBottomMargin(0.13);
   TopMVA->SetFrameFillStyle(0);
   TopMVA->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopMVA_2
   TPad *TopMVA_2 = new TPad("TopMVA_2", "TopMVA_2",0,0,1,0.304);
   TopMVA_2->Draw();
   TopMVA_2->cd();
   TopMVA_2->Range(-0.204557,-0.428,1.073924,1.7);
   TopMVA_2->SetFillColor(0);
   TopMVA_2->SetFillStyle(4000);
   TopMVA_2->SetBorderMode(0);
   TopMVA_2->SetBorderSize(2);
   TopMVA_2->SetTickx(1);
   TopMVA_2->SetTicky(1);
   TopMVA_2->SetLeftMargin(0.16);
   TopMVA_2->SetRightMargin(0.05);
   TopMVA_2->SetTopMargin(0);
   TopMVA_2->SetBottomMargin(0.3421053);
   TopMVA_2->SetFrameFillStyle(0);
   TopMVA_2->SetFrameBorderMode(0);
   TopMVA_2->SetFrameFillStyle(0);
   TopMVA_2->SetFrameBorderMode(0);
   
   TH1F *hframe__708 = new TH1F("hframe__708","",1000,0,1.01);
   hframe__708->SetMinimum(0.3);
   hframe__708->SetMaximum(1.7);
   hframe__708->SetDirectory(0);
   hframe__708->SetStats(0);
   hframe__708->SetLineStyle(0);
   hframe__708->SetMarkerStyle(20);
   hframe__708->GetXaxis()->SetTitle("t^{res}_{H^{#pm}} DNN output");
   hframe__708->GetXaxis()->SetNdivisions(8);
   hframe__708->GetXaxis()->SetLabelFont(43);
   hframe__708->GetXaxis()->SetLabelOffset(0.007);
   hframe__708->GetXaxis()->SetLabelSize(27);
   hframe__708->GetXaxis()->SetTitleSize(33);
   hframe__708->GetXaxis()->SetTitleOffset(2.960526);
   hframe__708->GetXaxis()->SetTitleFont(43);
   hframe__708->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__708->GetYaxis()->SetNdivisions(505);
   hframe__708->GetYaxis()->SetLabelFont(43);
   hframe__708->GetYaxis()->SetLabelOffset(0.007);
   hframe__708->GetYaxis()->SetLabelSize(21);
   hframe__708->GetYaxis()->SetTitleSize(33);
   hframe__708->GetYaxis()->SetTitleOffset(1.5625);
   hframe__708->GetYaxis()->SetTitleFont(43);
   hframe__708->GetZaxis()->SetLabelFont(43);
   hframe__708->GetZaxis()->SetLabelOffset(0.007);
   hframe__708->GetZaxis()->SetLabelSize(27);
   hframe__708->GetZaxis()->SetTitleSize(33);
   hframe__708->GetZaxis()->SetTitleOffset(1);
   hframe__708->GetZaxis()->SetTitleFont(43);
   hframe__708->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3423[9] = {
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BackgroundStatSystError_fy3423[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3423[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3423[9] = {
   0.2791614,
   0.04055531,
   0.03661877,
   0.03447892,
   0.03027336,
   0.02735311,
   0.0256158,
   0.0248029,
   0.03145107};
   Double_t BackgroundStatSystError_fehx3423[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3423[9] = {
   0.2791614,
   0.04055531,
   0.03661877,
   0.03447892,
   0.03027336,
   0.02735311,
   0.0256158,
   0.0248029,
   0.03145107};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,BackgroundStatSystError_fx3423,BackgroundStatSystError_fy3423,BackgroundStatSystError_felx3423,BackgroundStatSystError_fehx3423,BackgroundStatSystError_fely3423,BackgroundStatSystError_fehy3423);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1317;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError341534193423 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError341534193423","Graph",100,0.505,1.045);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->SetMinimum(0.6650064);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->SetMaximum(1.334994);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError341534193423->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError341534193423);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3424[20] = {
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
   Double_t BackgroundStatError_fy3424[20] = {
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
   Double_t BackgroundStatError_felx3424[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3424[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.2791614,
   0.04055531,
   0.03661877,
   0.03447892,
   0.03027336,
   0.02735311,
   0.0256158,
   0.0248029,
   0.03145107};
   Double_t BackgroundStatError_fehx3424[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3424[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.2791614,
   0.04055531,
   0.03661877,
   0.03447892,
   0.03027336,
   0.02735311,
   0.0256158,
   0.0248029,
   0.03145107};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3424,BackgroundStatError_fy3424,BackgroundStatError_felx3424,BackgroundStatError_fehx3424,BackgroundStatError_fely3424,BackgroundStatError_fehy3424);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1316;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError341634203424 = new TH1F("Graph_Graph_Graph_BackgroundStatError341634203424","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError341634203424->SetMinimum(0.6650064);
   Graph_Graph_Graph_BackgroundStatError341634203424->SetMaximum(1.334994);
   Graph_Graph_Graph_BackgroundStatError341634203424->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError341634203424->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError341634203424->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError341634203424->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError341634203424->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError341634203424->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError341634203424);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx102[2] = {
   0,
   1.01};
   Double_t Graph0_fy102[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx102,Graph0_fy102);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0100101102 = new TH1F("Graph_Graph_Graph_Graph0100101102","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0100101102->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0100101102->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0100101102->SetDirectory(0);
   Graph_Graph_Graph_Graph0100101102->SetStats(0);
   Graph_Graph_Graph_Graph0100101102->SetLineStyle(0);
   Graph_Graph_Graph_Graph0100101102->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0100101102);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3425[9] = {
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph1_fy3425[9] = {
   0.9638908,
   0.8993502,
   1.088923,
   1.144321,
   1.085328,
   1.034718,
   1.03931,
   1.022347,
   1.002968};
   Double_t Graph1_felx3425[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3425[9] = {
   0.290624,
   0.04022016,
   0.04038593,
   0.03904372,
   0.03339865,
   0.02977066,
   0.02847692,
   0.0276209,
   0.03595816};
   Double_t Graph1_fehx3425[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3425[9] = {
   0.290624,
   0.04022016,
   0.04038593,
   0.03904372,
   0.03339865,
   0.02977066,
   0.02847692,
   0.0276209,
   0.03595816};
   grae = new TGraphAsymmErrors(9,Graph1_fx3425,Graph1_fy3425,Graph1_felx3425,Graph1_fehx3425,Graph1_fely3425,Graph1_fehy3425);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1341734213425 = new TH1F("Graph_Graph_Graph_Graph1341734213425","Graph",100,0.505,1.045);
   Graph_Graph_Graph_Graph1341734213425->SetMinimum(0.615142);
   Graph_Graph_Graph_Graph1341734213425->SetMaximum(1.31264);
   Graph_Graph_Graph_Graph1341734213425->SetDirectory(0);
   Graph_Graph_Graph_Graph1341734213425->SetStats(0);
   Graph_Graph_Graph_Graph1341734213425->SetLineStyle(0);
   Graph_Graph_Graph_Graph1341734213425->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1341734213425->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1341734213425->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1341734213425->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1341734213425->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1341734213425->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1341734213425->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1341734213425->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1341734213425->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1341734213425->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1341734213425->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1341734213425->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1341734213425->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1341734213425->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1341734213425->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1341734213425->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1341734213425->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1341734213425->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1341734213425->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1341734213425->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1341734213425->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1341734213425);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__709 = new TH1F("hframe_copy__709","",1000,0,1.01);
   hframe_copy__709->SetMinimum(0.3);
   hframe_copy__709->SetMaximum(1.7);
   hframe_copy__709->SetDirectory(0);
   hframe_copy__709->SetStats(0);
   hframe_copy__709->SetLineStyle(0);
   hframe_copy__709->SetMarkerStyle(20);
   hframe_copy__709->GetXaxis()->SetTitle("t^{res}_{H^{#pm}} DNN output");
   hframe_copy__709->GetXaxis()->SetNdivisions(8);
   hframe_copy__709->GetXaxis()->SetLabelFont(43);
   hframe_copy__709->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__709->GetXaxis()->SetLabelSize(27);
   hframe_copy__709->GetXaxis()->SetTitleSize(33);
   hframe_copy__709->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__709->GetXaxis()->SetTitleFont(43);
   hframe_copy__709->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__709->GetYaxis()->SetNdivisions(505);
   hframe_copy__709->GetYaxis()->SetLabelFont(43);
   hframe_copy__709->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__709->GetYaxis()->SetLabelSize(21);
   hframe_copy__709->GetYaxis()->SetTitleSize(33);
   hframe_copy__709->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__709->GetYaxis()->SetTitleFont(43);
   hframe_copy__709->GetZaxis()->SetLabelFont(43);
   hframe_copy__709->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__709->GetZaxis()->SetLabelSize(27);
   hframe_copy__709->GetZaxis()->SetTitleSize(33);
   hframe_copy__709->GetZaxis()->SetTitleOffset(1);
   hframe_copy__709->GetZaxis()->SetTitleFont(43);
   hframe_copy__709->Draw("sameaxis");
   TopMVA_2->Modified();
   TopMVA->cd();
  
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
   TopMVA->cd();
  
// ------------>Primitives in pad: TopMVA_1
   TPad *TopMVA_1 = new TPad("TopMVA_1", "TopMVA_1",0,0.2897959,1,1);
   TopMVA_1->Draw();
   TopMVA_1->cd();
   TopMVA_1->Range(-0.204557,-2.130062,1.073924,4.373047);
   TopMVA_1->SetFillColor(0);
   TopMVA_1->SetFillStyle(4000);
   TopMVA_1->SetBorderMode(0);
   TopMVA_1->SetBorderSize(2);
   TopMVA_1->SetLogy();
   TopMVA_1->SetTickx(1);
   TopMVA_1->SetTicky(1);
   TopMVA_1->SetLeftMargin(0.16);
   TopMVA_1->SetRightMargin(0.05);
   TopMVA_1->SetTopMargin(0.06);
   TopMVA_1->SetBottomMargin(0.02);
   TopMVA_1->SetFrameFillStyle(0);
   TopMVA_1->SetFrameBorderMode(0);
   TopMVA_1->SetFrameFillStyle(0);
   TopMVA_1->SetFrameBorderMode(0);
   
   TH1F *hframe__710 = new TH1F("hframe__710","",1000,0,1.01);
   hframe__710->SetMinimum(0.01);
   hframe__710->SetMaximum(9613.041);
   hframe__710->SetDirectory(0);
   hframe__710->SetStats(0);
   hframe__710->SetLineStyle(0);
   hframe__710->SetMarkerStyle(20);
   hframe__710->GetXaxis()->SetNdivisions(8);
   hframe__710->GetXaxis()->SetLabelFont(43);
   hframe__710->GetXaxis()->SetLabelOffset(0.007);
   hframe__710->GetXaxis()->SetLabelSize(0);
   hframe__710->GetXaxis()->SetTitleSize(0);
   hframe__710->GetXaxis()->SetTitleOffset(0.9);
   hframe__710->GetXaxis()->SetTitleFont(43);
   hframe__710->GetYaxis()->SetTitle("Events / 0.05");
   hframe__710->GetYaxis()->SetLabelFont(43);
   hframe__710->GetYaxis()->SetLabelOffset(0.007);
   hframe__710->GetYaxis()->SetLabelSize(27);
   hframe__710->GetYaxis()->SetTitleSize(33);
   hframe__710->GetYaxis()->SetTitleOffset(1.5625);
   hframe__710->GetYaxis()->SetTitleFont(43);
   hframe__710->GetZaxis()->SetLabelFont(43);
   hframe__710->GetZaxis()->SetLabelOffset(0.007);
   hframe__710->GetZaxis()->SetLabelSize(27);
   hframe__710->GetZaxis()->SetTitleSize(33);
   hframe__710->GetZaxis()->SetTitleOffset(1);
   hframe__710->GetZaxis()->SetTitleFont(43);
   hframe__710->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_100_stack_101_stack_102 = new TH1F("StackedMCstackHist_stack_100_stack_101_stack_102","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetMinimum(0.5360217);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetMaximum(2144.087);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetDirectory(0);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetStats(0);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetLineStyle(0);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetMarkerStyle(20);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_100_stack_101_stack_102);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_TopMVAInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,-0.0003904104);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,7.056793);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,11.41891);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,17.58747);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,24.89442);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,28.06083);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,39.15974);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,47.67446);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,33.24784);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.2072923);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.9137559);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.286298);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.765442);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.956159);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,2.068442);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,2.569626);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,2.538033);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,2.025374);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(105982);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,40);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_TopMVAInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1.501975);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,90.53725);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,135.9934);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,185.8338);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,245.4018);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,345.3217);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,464.4717);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,604.7438);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,472.0861);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.2983573);
   TT_stack_2_stack_2_stack_2->SetBinError(13,2.438361);
   TT_stack_2_stack_2_stack_2->SetBinError(14,2.948487);
   TT_stack_2_stack_2_stack_2->SetBinError(15,3.486937);
   TT_stack_2_stack_2_stack_2->SetBinError(16,3.957426);
   TT_stack_2_stack_2_stack_2->SetBinError(17,4.691003);
   TT_stack_2_stack_2_stack_2->SetBinError(18,5.450263);
   TT_stack_2_stack_2_stack_2->SetBinError(19,6.176747);
   TT_stack_2_stack_2_stack_2->SetBinError(20,5.449814);
   TT_stack_2_stack_2_stack_2->SetEntries(42874);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,40);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_TopMVAInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,9.910496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,458.3629);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,520.2197);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,547.2424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,702.6818);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,794.0854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,777.9878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,687.6361);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,270.3634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,3.165029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,22.39614);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,24.2353);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,25.58528);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,29.12263);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,31.51966);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,32.27199);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,32.55948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,23.69362);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3687.029);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,40);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__711 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__711","h_SR_TopMVAInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(12,0.1140244);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(13,3.893956);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(14,5.68892);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(15,8.709591);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(16,10.02806);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(17,16.92698);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(18,24.99443);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(19,47.45688);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(20,63.26377);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(12,0.1057726);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(13,0.6389474);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(14,0.7650404);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(15,0.9118763);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(16,1.071234);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(17,1.326671);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(18,1.665873);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(19,2.140247);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(20,2.370702);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetEntries(35807);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetXaxis()->SetRange(1,40);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3426[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3426[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   11.41208,
   555.957,
   667.632,
   750.6637,
   972.978,
   1167.468,
   1281.619,
   1340.054,
   775.6974};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3426[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3426[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.185812,
   22.54701,
   24.44786,
   25.88208,
   29.45531,
   31.93388,
   32.8297,
   33.23723,
   24.39652};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3426[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3426[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.185812,
   22.54701,
   24.44786,
   25.88208,
   29.45531,
   31.93388,
   32.8297,
   33.23723,
   24.39652};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3426,BkgSum-SR-Inclusive_sum_errors_fy3426,BkgSum-SR-Inclusive_sum_errors_felx3426,BkgSum-SR-Inclusive_sum_errors_fehx3426,BkgSum-SR-Inclusive_sum_errors_fely3426,BkgSum-SR-Inclusive_sum_errors_fehy3426);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1315;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->SetMinimum(1.510621);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->SetMaximum(1510.621);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors341834223426->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors341834223426);
   
   grae->Draw("e2 ");
   
   TH1F *Data__712 = new TH1F("Data__712","h_SR_TopMVAInclusive",20,0,1);
   Data__712->SetBinContent(12,11);
   Data__712->SetBinContent(13,500);
   Data__712->SetBinContent(14,727);
   Data__712->SetBinContent(15,859);
   Data__712->SetBinContent(16,1056);
   Data__712->SetBinContent(17,1208);
   Data__712->SetBinContent(18,1332);
   Data__712->SetBinContent(19,1370);
   Data__712->SetBinContent(20,778);
   Data__712->SetBinError(12,3.316625);
   Data__712->SetBinError(13,22.36068);
   Data__712->SetBinError(14,26.96294);
   Data__712->SetBinError(15,29.3087);
   Data__712->SetBinError(16,32.49615);
   Data__712->SetBinError(17,34.75629);
   Data__712->SetBinError(18,36.49658);
   Data__712->SetBinError(19,37.01351);
   Data__712->SetBinError(20,27.89265);
   Data__712->SetEntries(7845);
   Data__712->SetDirectory(0);
   Data__712->SetFillStyle(3001);
   Data__712->SetLineWidth(2);
   Data__712->SetMarkerStyle(20);
   Data__712->SetMarkerSize(1.2);
   Data__712->GetXaxis()->SetRange(1,40);
   Data__712->GetXaxis()->SetLabelFont(42);
   Data__712->GetXaxis()->SetTitleOffset(1);
   Data__712->GetXaxis()->SetTitleFont(42);
   Data__712->GetYaxis()->SetLabelFont(42);
   Data__712->GetYaxis()->SetTitleFont(42);
   Data__712->GetZaxis()->SetLabelFont(42);
   Data__712->GetZaxis()->SetTitleOffset(1);
   Data__712->GetZaxis()->SetTitleFont(42);
   Data__712->Draw("EP same");
   
   TLegend *leg = new TLegend(0.21,0.61,0.41,0.91,NULL,"brNDC");
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

   ci = 1315;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1315;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__713 = new TH1F("hframe_copy__713","",1000,0,1.01);
   hframe_copy__713->SetMinimum(0.01);
   hframe_copy__713->SetMaximum(9613.041);
   hframe_copy__713->SetDirectory(0);
   hframe_copy__713->SetStats(0);
   hframe_copy__713->SetLineStyle(0);
   hframe_copy__713->SetMarkerStyle(20);
   hframe_copy__713->GetXaxis()->SetNdivisions(8);
   hframe_copy__713->GetXaxis()->SetLabelFont(43);
   hframe_copy__713->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__713->GetXaxis()->SetLabelSize(0);
   hframe_copy__713->GetXaxis()->SetTitleSize(0);
   hframe_copy__713->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__713->GetXaxis()->SetTitleFont(43);
   hframe_copy__713->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__713->GetYaxis()->SetLabelFont(43);
   hframe_copy__713->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__713->GetYaxis()->SetLabelSize(27);
   hframe_copy__713->GetYaxis()->SetTitleSize(33);
   hframe_copy__713->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__713->GetYaxis()->SetTitleFont(43);
   hframe_copy__713->GetZaxis()->SetLabelFont(43);
   hframe_copy__713->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__713->GetZaxis()->SetLabelSize(27);
   hframe_copy__713->GetZaxis()->SetTitleSize(33);
   hframe_copy__713->GetZaxis()->SetTitleOffset(1);
   hframe_copy__713->GetZaxis()->SetTitleFont(43);
   hframe_copy__713->Draw("sameaxis");
   
   TH1F *hframe_copy__714 = new TH1F("hframe_copy__714","",1000,0,1.01);
   hframe_copy__714->SetMinimum(0.01);
   hframe_copy__714->SetMaximum(9613.041);
   hframe_copy__714->SetDirectory(0);
   hframe_copy__714->SetStats(0);
   hframe_copy__714->SetLineStyle(0);
   hframe_copy__714->SetMarkerStyle(20);
   hframe_copy__714->GetXaxis()->SetNdivisions(8);
   hframe_copy__714->GetXaxis()->SetLabelFont(43);
   hframe_copy__714->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__714->GetXaxis()->SetLabelSize(0);
   hframe_copy__714->GetXaxis()->SetTitleSize(0);
   hframe_copy__714->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__714->GetXaxis()->SetTitleFont(43);
   hframe_copy__714->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__714->GetYaxis()->SetLabelFont(43);
   hframe_copy__714->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__714->GetYaxis()->SetLabelSize(27);
   hframe_copy__714->GetYaxis()->SetTitleSize(33);
   hframe_copy__714->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__714->GetYaxis()->SetTitleFont(43);
   hframe_copy__714->GetZaxis()->SetLabelFont(43);
   hframe_copy__714->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__714->GetZaxis()->SetLabelSize(27);
   hframe_copy__714->GetZaxis()->SetTitleSize(33);
   hframe_copy__714->GetZaxis()->SetTitleOffset(1);
   hframe_copy__714->GetZaxis()->SetTitleFont(43);
   hframe_copy__714->Draw("sameaxis");
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
   TopMVA_1->Modified();
   TopMVA->cd();
   TopMVA->Modified();
   TopMVA->cd();
   TopMVA->SetSelected(TopMVA);
}
