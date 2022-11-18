void TopBJetBDisc()
{
//=========Macro generated from canvas: TopBJetBDisc/TopBJetBDisc
//=========  (Fri Nov 18 13:28:14 2022) by ROOT version 6.20/02
   TCanvas *TopBJetBDisc = new TCanvas("TopBJetBDisc", "TopBJetBDisc",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   TopBJetBDisc->SetHighLightColor(2);
   TopBJetBDisc->Range(0,0,1,1);
   TopBJetBDisc->SetFillColor(0);
   TopBJetBDisc->SetBorderMode(0);
   TopBJetBDisc->SetBorderSize(2);
   TopBJetBDisc->SetTickx(1);
   TopBJetBDisc->SetTicky(1);
   TopBJetBDisc->SetLeftMargin(0.16);
   TopBJetBDisc->SetRightMargin(0.05);
   TopBJetBDisc->SetTopMargin(0.06);
   TopBJetBDisc->SetBottomMargin(0.13);
   TopBJetBDisc->SetFrameFillStyle(0);
   TopBJetBDisc->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopBJetBDisc_2
   TPad *TopBJetBDisc_2 = new TPad("TopBJetBDisc_2", "TopBJetBDisc_2",0,0,1,0.304);
   TopBJetBDisc_2->Draw();
   TopBJetBDisc_2->cd();
   TopBJetBDisc_2->Range(-0.204557,-0.428,1.073924,1.7);
   TopBJetBDisc_2->SetFillColor(0);
   TopBJetBDisc_2->SetFillStyle(4000);
   TopBJetBDisc_2->SetBorderMode(0);
   TopBJetBDisc_2->SetBorderSize(2);
   TopBJetBDisc_2->SetTickx(1);
   TopBJetBDisc_2->SetTicky(1);
   TopBJetBDisc_2->SetLeftMargin(0.16);
   TopBJetBDisc_2->SetRightMargin(0.05);
   TopBJetBDisc_2->SetTopMargin(0);
   TopBJetBDisc_2->SetBottomMargin(0.3421053);
   TopBJetBDisc_2->SetFrameFillStyle(0);
   TopBJetBDisc_2->SetFrameBorderMode(0);
   TopBJetBDisc_2->SetFrameFillStyle(0);
   TopBJetBDisc_2->SetFrameBorderMode(0);
   
   TH1F *hframe__582 = new TH1F("hframe__582","",1000,0,1.01);
   hframe__582->SetMinimum(0.3);
   hframe__582->SetMaximum(1.7);
   hframe__582->SetDirectory(0);
   hframe__582->SetStats(0);
   hframe__582->SetLineStyle(0);
   hframe__582->SetMarkerStyle(20);
   hframe__582->GetXaxis()->SetTitle("b-tag discriminator");
   hframe__582->GetXaxis()->SetLabelFont(43);
   hframe__582->GetXaxis()->SetLabelOffset(0.007);
   hframe__582->GetXaxis()->SetLabelSize(27);
   hframe__582->GetXaxis()->SetTitleSize(33);
   hframe__582->GetXaxis()->SetTitleOffset(2.960526);
   hframe__582->GetXaxis()->SetTitleFont(43);
   hframe__582->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__582->GetYaxis()->SetNdivisions(505);
   hframe__582->GetYaxis()->SetLabelFont(43);
   hframe__582->GetYaxis()->SetLabelOffset(0.007);
   hframe__582->GetYaxis()->SetLabelSize(21);
   hframe__582->GetYaxis()->SetTitleSize(33);
   hframe__582->GetYaxis()->SetTitleOffset(1.5625);
   hframe__582->GetYaxis()->SetTitleFont(43);
   hframe__582->GetZaxis()->SetLabelFont(43);
   hframe__582->GetZaxis()->SetLabelOffset(0.007);
   hframe__582->GetZaxis()->SetLabelSize(27);
   hframe__582->GetZaxis()->SetTitleSize(33);
   hframe__582->GetZaxis()->SetTitleOffset(1);
   hframe__582->GetZaxis()->SetTitleFont(43);
   hframe__582->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3333[15] = {
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
   Double_t BackgroundStatSystError_fy3333[15] = {
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
   Double_t BackgroundStatSystError_felx3333[15] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3333[15] = {
   0.1221023,
   0.08042709,
   0.08567162,
   0.08758081,
   0.09273172,
   0.08250072,
   0.09055839,
   0.09272299,
   0.08894766,
   0.08304423,
   0.07757636,
   0.07558647,
   0.06178078,
   0.05325753,
   0.02037448};
   Double_t BackgroundStatSystError_fehx3333[15] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3333[15] = {
   0.1221023,
   0.08042709,
   0.08567162,
   0.08758081,
   0.09273172,
   0.08250072,
   0.09055839,
   0.09272299,
   0.08894766,
   0.08304423,
   0.07757636,
   0.07558647,
   0.06178078,
   0.05325753,
   0.02037448};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,BackgroundStatSystError_fx3333,BackgroundStatSystError_fy3333,BackgroundStatSystError_felx3333,BackgroundStatSystError_fehx3333,BackgroundStatSystError_fely3333,BackgroundStatSystError_fehy3333);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1293;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError332533293333 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError332533293333","Graph",100,0.175,1.075);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMinimum(0.8534772);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMaximum(1.146523);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError332533293333);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3334[20] = {
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
   Double_t BackgroundStatError_fy3334[20] = {
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
   Double_t BackgroundStatError_felx3334[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3334[20] = {
   0,
   0,
   0,
   0,
   0,
   0.1221023,
   0.08042709,
   0.08567162,
   0.08758081,
   0.09273172,
   0.08250072,
   0.09055839,
   0.09272299,
   0.08894766,
   0.08304423,
   0.07757636,
   0.07558647,
   0.06178078,
   0.05325753,
   0.02037448};
   Double_t BackgroundStatError_fehx3334[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3334[20] = {
   0,
   0,
   0,
   0,
   0,
   0.1221023,
   0.08042709,
   0.08567162,
   0.08758081,
   0.09273172,
   0.08250072,
   0.09055839,
   0.09272299,
   0.08894766,
   0.08304423,
   0.07757636,
   0.07558647,
   0.06178078,
   0.05325753,
   0.02037448};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3334,BackgroundStatError_fy3334,BackgroundStatError_felx3334,BackgroundStatError_fehx3334,BackgroundStatError_fely3334,BackgroundStatError_fehy3334);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1292;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError332633303334 = new TH1F("Graph_Graph_Graph_BackgroundStatError332633303334","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMinimum(0.8534772);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMaximum(1.146523);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError332633303334);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx84[2] = {
   0,
   1.01};
   Double_t Graph0_fy84[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx84,Graph0_fy84);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0828384 = new TH1F("Graph_Graph_Graph_Graph0828384","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0828384->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0828384->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0828384->SetDirectory(0);
   Graph_Graph_Graph_Graph0828384->SetStats(0);
   Graph_Graph_Graph_Graph0828384->SetLineStyle(0);
   Graph_Graph_Graph_Graph0828384->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0828384);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3335[15] = {
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
   Double_t Graph1_fy3335[15] = {
   1.108707,
   0.9058794,
   0.9892884,
   0.948241,
   1.027942,
   0.8953094,
   1.162153,
   0.989064,
   1.142042,
   1.155522,
   1.079316,
   1.131008,
   0.9481816,
   1.108824,
   0.9924767};
   Double_t Graph1_felx3335[15] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3335[15] = {
   0.09337001,
   0.0562886,
   0.06307473,
   0.06238968,
   0.06852949,
   0.05708284,
   0.07179806,
   0.06776955,
   0.07069061,
   0.06419564,
   0.05896934,
   0.05864002,
   0.04435406,
   0.04098333,
   0.01500312};
   Double_t Graph1_fehx3335[15] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3335[15] = {
   0.09337001,
   0.0562886,
   0.06307473,
   0.06238968,
   0.06852949,
   0.05708284,
   0.07179806,
   0.06776955,
   0.07069061,
   0.06419564,
   0.05896934,
   0.05864002,
   0.04435406,
   0.04098333,
   0.01500312};
   grae = new TGraphAsymmErrors(15,Graph1_fx3335,Graph1_fy3335,Graph1_felx3335,Graph1_fehx3335,Graph1_fely3335,Graph1_fehy3335);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1332733313335 = new TH1F("Graph_Graph_Graph_Graph1332733313335","Graph",100,0.175,1.075);
   Graph_Graph_Graph_Graph1332733313335->SetMinimum(0.7986541);
   Graph_Graph_Graph_Graph1332733313335->SetMaximum(1.273524);
   Graph_Graph_Graph_Graph1332733313335->SetDirectory(0);
   Graph_Graph_Graph_Graph1332733313335->SetStats(0);
   Graph_Graph_Graph_Graph1332733313335->SetLineStyle(0);
   Graph_Graph_Graph_Graph1332733313335->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1332733313335);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__583 = new TH1F("hframe_copy__583","",1000,0,1.01);
   hframe_copy__583->SetMinimum(0.3);
   hframe_copy__583->SetMaximum(1.7);
   hframe_copy__583->SetDirectory(0);
   hframe_copy__583->SetStats(0);
   hframe_copy__583->SetLineStyle(0);
   hframe_copy__583->SetMarkerStyle(20);
   hframe_copy__583->GetXaxis()->SetTitle("b-tag discriminator");
   hframe_copy__583->GetXaxis()->SetLabelFont(43);
   hframe_copy__583->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__583->GetXaxis()->SetLabelSize(27);
   hframe_copy__583->GetXaxis()->SetTitleSize(33);
   hframe_copy__583->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__583->GetXaxis()->SetTitleFont(43);
   hframe_copy__583->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__583->GetYaxis()->SetNdivisions(505);
   hframe_copy__583->GetYaxis()->SetLabelFont(43);
   hframe_copy__583->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__583->GetYaxis()->SetLabelSize(21);
   hframe_copy__583->GetYaxis()->SetTitleSize(33);
   hframe_copy__583->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__583->GetYaxis()->SetTitleFont(43);
   hframe_copy__583->GetZaxis()->SetLabelFont(43);
   hframe_copy__583->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__583->GetZaxis()->SetLabelSize(27);
   hframe_copy__583->GetZaxis()->SetTitleSize(33);
   hframe_copy__583->GetZaxis()->SetTitleOffset(1);
   hframe_copy__583->GetZaxis()->SetTitleFont(43);
   hframe_copy__583->Draw("sameaxis");
   TopBJetBDisc_2->Modified();
   TopBJetBDisc->cd();
  
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
   TopBJetBDisc->cd();
  
// ------------>Primitives in pad: TopBJetBDisc_1
   TPad *TopBJetBDisc_1 = new TPad("TopBJetBDisc_1", "TopBJetBDisc_1",0,0.2897959,1,1);
   TopBJetBDisc_1->Draw();
   TopBJetBDisc_1->cd();
   TopBJetBDisc_1->Range(-0.204557,-2.141266,1.073924,4.922011);
   TopBJetBDisc_1->SetFillColor(0);
   TopBJetBDisc_1->SetFillStyle(4000);
   TopBJetBDisc_1->SetBorderMode(0);
   TopBJetBDisc_1->SetBorderSize(2);
   TopBJetBDisc_1->SetLogy();
   TopBJetBDisc_1->SetTickx(1);
   TopBJetBDisc_1->SetTicky(1);
   TopBJetBDisc_1->SetLeftMargin(0.16);
   TopBJetBDisc_1->SetRightMargin(0.05);
   TopBJetBDisc_1->SetTopMargin(0.06);
   TopBJetBDisc_1->SetBottomMargin(0.02);
   TopBJetBDisc_1->SetFrameFillStyle(0);
   TopBJetBDisc_1->SetFrameBorderMode(0);
   TopBJetBDisc_1->SetFrameFillStyle(0);
   TopBJetBDisc_1->SetFrameBorderMode(0);
   
   TH1F *hframe__584 = new TH1F("hframe__584","",1000,0,1.01);
   hframe__584->SetMinimum(0.01);
   hframe__584->SetMaximum(31493.04);
   hframe__584->SetDirectory(0);
   hframe__584->SetStats(0);
   hframe__584->SetLineStyle(0);
   hframe__584->SetMarkerStyle(20);
   hframe__584->GetXaxis()->SetLabelFont(43);
   hframe__584->GetXaxis()->SetLabelOffset(0.007);
   hframe__584->GetXaxis()->SetLabelSize(0);
   hframe__584->GetXaxis()->SetTitleSize(0);
   hframe__584->GetXaxis()->SetTitleOffset(0.9);
   hframe__584->GetXaxis()->SetTitleFont(43);
   hframe__584->GetYaxis()->SetTitle("Events / 0.05");
   hframe__584->GetYaxis()->SetLabelFont(43);
   hframe__584->GetYaxis()->SetLabelOffset(0.007);
   hframe__584->GetYaxis()->SetLabelSize(27);
   hframe__584->GetYaxis()->SetTitleSize(33);
   hframe__584->GetYaxis()->SetTitleOffset(1.5625);
   hframe__584->GetYaxis()->SetTitleFont(43);
   hframe__584->GetZaxis()->SetLabelFont(43);
   hframe__584->GetZaxis()->SetLabelOffset(0.007);
   hframe__584->GetZaxis()->SetLabelSize(27);
   hframe__584->GetZaxis()->SetTitleSize(33);
   hframe__584->GetZaxis()->SetTitleOffset(1);
   hframe__584->GetZaxis()->SetTitleFont(43);
   hframe__584->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_82_stack_83_stack_84 = new TH1F("StackedMCstackHist_stack_82_stack_83_stack_84","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMinimum(1.763669);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMaximum(7054.674);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetDirectory(0);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetStats(0);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetLineStyle(0);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMarkerStyle(20);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_82_stack_83_stack_84);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_TopBJetBDiscInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1.029727);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,2.887655);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,3.067348);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1.599116);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,2.382827);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1.90598);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,3.437244);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,2.387174);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1.899988);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,3.125177);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,5.111471);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,2.773815);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,4.973994);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,8.583773);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,69.09863);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.500339);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.7585526);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.8777625);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.6529446);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.6826836);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.4369247);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.893043);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.6017161);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.6835608);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.8272845);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.703092);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.7460886);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.000612);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.139104);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,4.982511);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(13272);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_TopBJetBDiscInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,9.739959);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,23.30579);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,25.057);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,26.3521);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,24.38209);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,27.18442);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,31.0946);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,29.64812);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,37.18009);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,37.87064);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,42.90066);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,51.87485);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,64.55422);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,104.9689);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,830.2531);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.8226309);
   TT_stack_2_stack_2_stack_2->SetBinError(7,1.284555);
   TT_stack_2_stack_2_stack_2->SetBinError(8,1.309883);
   TT_stack_2_stack_2_stack_2->SetBinError(9,1.320357);
   TT_stack_2_stack_2_stack_2->SetBinError(10,1.236776);
   TT_stack_2_stack_2_stack_2->SetBinError(11,1.314413);
   TT_stack_2_stack_2_stack_2->SetBinError(12,1.406607);
   TT_stack_2_stack_2_stack_2->SetBinError(13,1.354882);
   TT_stack_2_stack_2_stack_2->SetBinError(14,1.5379);
   TT_stack_2_stack_2_stack_2->SetBinError(15,1.522205);
   TT_stack_2_stack_2_stack_2->SetBinError(16,1.627336);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.788679);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.978752);
   TT_stack_2_stack_2_stack_2->SetBinError(19,2.517575);
   TT_stack_2_stack_2_stack_2->SetBinError(20,7.088047);
   TT_stack_2_stack_2_stack_2->SetEntries(23419);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_TopBJetBDiscInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,116.4054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,259.7166);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,220.5392);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,215.6577);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,192.119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,245.6749);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,190.9118);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,183.3198);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,189.458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,239.397);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,262.3696);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,274.2616);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,412.447);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,546.6059);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,3509.82);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,15.4985);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,22.94647);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,21.24498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,21.28456);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,20.24826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,22.62598);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,20.34771);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,19.91326);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,20.25814);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,23.22047);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,23.96278);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,24.78551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,29.69413);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,35.04966);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,89.41579);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3207.878);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__585 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__585","h_SR_TopBJetBDiscInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(6,0.0374848);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(7,0.07319859);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(8,0.1225571);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(9,0.2135853);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(10,0.10594);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(11,0.1086805);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(12,0.007547848);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(13,0.3282964);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(14,0.2391122);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(15,0.2776485);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(16,0.3289335);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(17,-0.00628097);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(18,0.3247261);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(19,0.5136029);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(20,3.278823);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(6,0.06821624);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(7,0.1494391);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(8,0.1137098);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(9,0.1403553);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(10,0.1613191);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(11,0.1292522);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(12,0.1238638);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(13,0.1585851);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(14,0.1555205);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(15,0.1435652);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(16,0.1900208);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(17,0.1772496);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(18,0.1957742);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(19,0.2768147);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(20,0.6935185);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetEntries(1103);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetXaxis()->SetRange(1,40);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3336[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3336[20] = {
   0,
   0,
   0,
   0,
   0,
   127.1751,
   285.91,
   248.6636,
   243.6089,
   218.8839,
   274.7654,
   225.4436,
   215.3551,
   228.5381,
   280.3929,
   310.3817,
   328.9102,
   481.9752,
   660.1586,
   4409.171};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3336[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3336[20] = {
   0,
   0,
   0,
   0,
   0,
   15.52838,
   22.99491,
   21.30341,
   21.33547,
   20.29748,
   22.66834,
   20.41581,
   19.96837,
   20.32792,
   23.28501,
   24.07828,
   24.86116,
   29.7768,
   35.15842,
   89.83457};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3336[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3336[20] = {
   0,
   0,
   0,
   0,
   0,
   15.52838,
   22.99491,
   21.30341,
   21.33547,
   20.29748,
   22.66834,
   20.41581,
   19.96837,
   20.32792,
   23.28501,
   24.07828,
   24.86116,
   29.7768,
   35.15842,
   89.83457};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3336,BkgSum-SR-Inclusive_sum_errors_fy3336,BkgSum-SR-Inclusive_sum_errors_felx3336,BkgSum-SR-Inclusive_sum_errors_fehx3336,BkgSum-SR-Inclusive_sum_errors_fely3336,BkgSum-SR-Inclusive_sum_errors_fehy3336);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1291;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMinimum(4.948907);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMaximum(4948.907);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors332833323336);
   
   grae->Draw("e2 ");
   
   TH1F *Data__586 = new TH1F("Data__586","h_SR_TopBJetBDiscInclusive",20,0,1);
   Data__586->SetBinContent(6,141);
   Data__586->SetBinContent(7,259);
   Data__586->SetBinContent(8,246);
   Data__586->SetBinContent(9,231);
   Data__586->SetBinContent(10,225);
   Data__586->SetBinContent(11,246);
   Data__586->SetBinContent(12,262);
   Data__586->SetBinContent(13,213);
   Data__586->SetBinContent(14,261);
   Data__586->SetBinContent(15,324);
   Data__586->SetBinContent(16,335);
   Data__586->SetBinContent(17,372);
   Data__586->SetBinContent(18,457);
   Data__586->SetBinContent(19,732);
   Data__586->SetBinContent(20,4376);
   Data__586->SetBinError(6,11.87434);
   Data__586->SetBinError(7,16.09348);
   Data__586->SetBinError(8,15.68439);
   Data__586->SetBinError(9,15.19868);
   Data__586->SetBinError(10,15);
   Data__586->SetBinError(11,15.68439);
   Data__586->SetBinError(12,16.18641);
   Data__586->SetBinError(13,14.59452);
   Data__586->SetBinError(14,16.15549);
   Data__586->SetBinError(15,18);
   Data__586->SetBinError(16,18.30301);
   Data__586->SetBinError(17,19.2873);
   Data__586->SetBinError(18,21.37756);
   Data__586->SetBinError(19,27.0555);
   Data__586->SetBinError(20,66.15134);
   Data__586->SetEntries(8684);
   Data__586->SetDirectory(0);
   Data__586->SetFillStyle(3001);
   Data__586->SetLineWidth(2);
   Data__586->SetMarkerStyle(20);
   Data__586->SetMarkerSize(1.2);
   Data__586->GetXaxis()->SetRange(1,40);
   Data__586->GetXaxis()->SetLabelFont(42);
   Data__586->GetXaxis()->SetTitleOffset(1);
   Data__586->GetXaxis()->SetTitleFont(42);
   Data__586->GetYaxis()->SetLabelFont(42);
   Data__586->GetYaxis()->SetTitleFont(42);
   Data__586->GetZaxis()->SetLabelFont(42);
   Data__586->GetZaxis()->SetTitleOffset(1);
   Data__586->GetZaxis()->SetTitleFont(42);
   Data__586->Draw("EP same");
   
   TLegend *leg = new TLegend(0.23,0.61,0.43,0.91,NULL,"brNDC");
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

   ci = 1291;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1291;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__587 = new TH1F("hframe_copy__587","",1000,0,1.01);
   hframe_copy__587->SetMinimum(0.01);
   hframe_copy__587->SetMaximum(31493.04);
   hframe_copy__587->SetDirectory(0);
   hframe_copy__587->SetStats(0);
   hframe_copy__587->SetLineStyle(0);
   hframe_copy__587->SetMarkerStyle(20);
   hframe_copy__587->GetXaxis()->SetLabelFont(43);
   hframe_copy__587->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__587->GetXaxis()->SetLabelSize(0);
   hframe_copy__587->GetXaxis()->SetTitleSize(0);
   hframe_copy__587->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__587->GetXaxis()->SetTitleFont(43);
   hframe_copy__587->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__587->GetYaxis()->SetLabelFont(43);
   hframe_copy__587->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__587->GetYaxis()->SetLabelSize(27);
   hframe_copy__587->GetYaxis()->SetTitleSize(33);
   hframe_copy__587->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__587->GetYaxis()->SetTitleFont(43);
   hframe_copy__587->GetZaxis()->SetLabelFont(43);
   hframe_copy__587->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__587->GetZaxis()->SetLabelSize(27);
   hframe_copy__587->GetZaxis()->SetTitleSize(33);
   hframe_copy__587->GetZaxis()->SetTitleOffset(1);
   hframe_copy__587->GetZaxis()->SetTitleFont(43);
   hframe_copy__587->Draw("sameaxis");
   
   TH1F *hframe_copy__588 = new TH1F("hframe_copy__588","",1000,0,1.01);
   hframe_copy__588->SetMinimum(0.01);
   hframe_copy__588->SetMaximum(31493.04);
   hframe_copy__588->SetDirectory(0);
   hframe_copy__588->SetStats(0);
   hframe_copy__588->SetLineStyle(0);
   hframe_copy__588->SetMarkerStyle(20);
   hframe_copy__588->GetXaxis()->SetLabelFont(43);
   hframe_copy__588->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__588->GetXaxis()->SetLabelSize(0);
   hframe_copy__588->GetXaxis()->SetTitleSize(0);
   hframe_copy__588->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__588->GetXaxis()->SetTitleFont(43);
   hframe_copy__588->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__588->GetYaxis()->SetLabelFont(43);
   hframe_copy__588->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__588->GetYaxis()->SetLabelSize(27);
   hframe_copy__588->GetYaxis()->SetTitleSize(33);
   hframe_copy__588->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__588->GetYaxis()->SetTitleFont(43);
   hframe_copy__588->GetZaxis()->SetLabelFont(43);
   hframe_copy__588->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__588->GetZaxis()->SetLabelSize(27);
   hframe_copy__588->GetZaxis()->SetTitleSize(33);
   hframe_copy__588->GetZaxis()->SetTitleOffset(1);
   hframe_copy__588->GetZaxis()->SetTitleFont(43);
   hframe_copy__588->Draw("sameaxis");
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
   TopBJetBDisc_1->Modified();
   TopBJetBDisc->cd();
   TopBJetBDisc->Modified();
   TopBJetBDisc->cd();
   TopBJetBDisc->SetSelected(TopBJetBDisc);
}
