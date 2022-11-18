void TopBJetBDisc()
{
//=========Macro generated from canvas: TopBJetBDisc/TopBJetBDisc
//=========  (Fri Nov 18 13:27:48 2022) by ROOT version 6.20/02
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
   0.09419175,
   0.05583111,
   0.05828164,
   0.06108929,
   0.06126962,
   0.06283,
   0.06068168,
   0.0586102,
   0.06035587,
   0.06221176,
   0.05470398,
   0.05152315,
   0.04915824,
   0.03957924,
   0.01506789};
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
   0.09419175,
   0.05583111,
   0.05828164,
   0.06108929,
   0.06126962,
   0.06283,
   0.06068168,
   0.0586102,
   0.06035587,
   0.06221176,
   0.05470398,
   0.05152315,
   0.04915824,
   0.03957924,
   0.01506789};
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
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMinimum(0.8869699);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMaximum(1.11303);
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
   0.09419175,
   0.05583111,
   0.05828164,
   0.06108929,
   0.06126962,
   0.06283,
   0.06068168,
   0.0586102,
   0.06035587,
   0.06221176,
   0.05470398,
   0.05152315,
   0.04915824,
   0.03957924,
   0.01506789};
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
   0.09419175,
   0.05583111,
   0.05828164,
   0.06108929,
   0.06126962,
   0.06283,
   0.06068168,
   0.0586102,
   0.06035587,
   0.06221176,
   0.05470398,
   0.05152315,
   0.04915824,
   0.03957924,
   0.01506789};
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
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMinimum(0.8869699);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMaximum(1.11303);
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
   1.134381,
   0.931099,
   1.026163,
   0.9328614,
   1.022092,
   1.061308,
   1.039621,
   0.922129,
   0.9430382,
   1.176889,
   1.07641,
   0.9650916,
   1.209776,
   1.09495,
   1.043274};
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
   0.1044282,
   0.05741402,
   0.06291811,
   0.06303693,
   0.06597574,
   0.0687944,
   0.06614949,
   0.05952317,
   0.06245423,
   0.07215972,
   0.06084227,
   0.0545502,
   0.05834059,
   0.04462681,
   0.01679645};
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
   0.1044282,
   0.05741402,
   0.06291811,
   0.06303693,
   0.06597574,
   0.0687944,
   0.06614949,
   0.05952317,
   0.06245423,
   0.07215972,
   0.06084227,
   0.0545502,
   0.05834059,
   0.04462681,
   0.01679645};
   grae = new TGraphAsymmErrors(15,Graph1_fx3335,Graph1_fy3335,Graph1_felx3335,Graph1_fehx3335,Graph1_fely3335,Graph1_fehy3335);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1332733313335 = new TH1F("Graph_Graph_Graph_Graph1332733313335","Graph",100,0.175,1.075);
   Graph_Graph_Graph_Graph1332733313335->SetMinimum(0.8220547);
   Graph_Graph_Graph_Graph1332733313335->SetMaximum(1.308668);
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
   TopBJetBDisc_1->Range(-0.204557,-2.139814,1.073924,4.850903);
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
   hframe__584->SetMaximum(27006);
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
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMinimum(1.479189);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMaximum(5916.755);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,2.355548);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,7.236476);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,6.20202);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,4.739371);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,5.761894);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,6.261073);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,5.616647);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,4.993871);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,6.74226);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,6.377643);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,7.250373);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,7.749389);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,10.70749);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,17.02293);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,110.0831);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.626969);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.112197);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.06121);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.8979011);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.083187);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.9408102);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.9761136);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.9212104);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.000932);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.169783);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.153405);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.9982536);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.374281);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.630274);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,3.77295);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_TopBJetBDiscInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,20.60665);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,51.21076);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,48.57649);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,51.75423);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,54.991);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,57.51439);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,60.88896);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,57.15049);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,63.54214);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,73.03503);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,89.46152);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,100.3562);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,121.0811);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,197.7453);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1497.977);
   TT_stack_2_stack_2_stack_2->SetBinError(6,1.180448);
   TT_stack_2_stack_2_stack_2->SetBinError(7,1.877585);
   TT_stack_2_stack_2_stack_2->SetBinError(8,1.813613);
   TT_stack_2_stack_2_stack_2->SetBinError(9,1.852213);
   TT_stack_2_stack_2_stack_2->SetBinError(10,1.91778);
   TT_stack_2_stack_2_stack_2->SetBinError(11,1.947877);
   TT_stack_2_stack_2_stack_2->SetBinError(12,1.98203);
   TT_stack_2_stack_2_stack_2->SetBinError(13,1.920061);
   TT_stack_2_stack_2_stack_2->SetBinError(14,2.023723);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.149343);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.382172);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.543116);
   TT_stack_2_stack_2_stack_2->SetBinError(18,2.767838);
   TT_stack_2_stack_2_stack_2->SetBinError(19,3.544224);
   TT_stack_2_stack_2_stack_2->SetBinError(20,9.711133);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_TopBJetBDiscInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,81.0593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,224.0147);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,204.4395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,178.2679);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,174.0597);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,160.476);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,171.081);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,198.1229);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,171.4873);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,146.6069);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,194.0696);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,216.2159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,223.6491);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,335.0287);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2089.912);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,9.70637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,15.61844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,14.96081);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,14.19293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,14.21728);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,13.92268);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,14.24686);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,15.10493);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,14.41663);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,13.84651);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,15.68517);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,16.48522);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,17.19724);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,21.40799);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,54.73799);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__585 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__585","h_SR_TopBJetBDiscInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(6,1.885974);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(7,3.796484);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(8,3.08884);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(9,2.215294);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(10,3.693432);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(11,3.440043);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(12,4.645471);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(13,2.798673);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(14,5.405833);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(15,4.418387);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(16,6.603764);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(17,7.720094);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(18,9.153662);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(19,15.35578);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(20,106.8549);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(6,0.389333);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(7,0.5868353);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(8,0.581425);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(9,0.5897706);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(10,0.6051646);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(11,0.5973544);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(12,0.6200204);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(13,0.6318753);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(14,0.6771377);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(15,0.7102164);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(16,0.7629352);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(17,0.8359675);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(18,0.9359966);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(19,1.212059);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(20,3.23145);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetEntries(35807);
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
   104.0215,
   282.4619,
   259.218,
   234.7616,
   234.8126,
   224.2515,
   237.5866,
   260.2673,
   241.7717,
   226.0195,
   290.7815,
   324.3215,
   355.4376,
   549.797,
   3697.972};
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
   9.797967,
   15.77016,
   15.10765,
   14.34142,
   14.38688,
   14.08972,
   14.41716,
   15.25432,
   14.59234,
   14.06107,
   15.90691,
   16.71007,
   17.47269,
   21.76055,
   55.72063};
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
   9.797967,
   15.77016,
   15.10765,
   14.34142,
   14.38688,
   14.08972,
   14.41716,
   15.25432,
   14.59234,
   14.06107,
   15.90691,
   16.71007,
   17.47269,
   21.76055,
   55.72063};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMinimum(4.129062);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMaximum(4129.062);
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
   Data__586->SetBinContent(6,118);
   Data__586->SetBinContent(7,263);
   Data__586->SetBinContent(8,266);
   Data__586->SetBinContent(9,219);
   Data__586->SetBinContent(10,240);
   Data__586->SetBinContent(11,238);
   Data__586->SetBinContent(12,247);
   Data__586->SetBinContent(13,240);
   Data__586->SetBinContent(14,228);
   Data__586->SetBinContent(15,266);
   Data__586->SetBinContent(16,313);
   Data__586->SetBinContent(17,313);
   Data__586->SetBinContent(18,430);
   Data__586->SetBinContent(19,602);
   Data__586->SetBinContent(20,3858);
   Data__586->SetBinError(6,10.86278);
   Data__586->SetBinError(7,16.21727);
   Data__586->SetBinError(8,16.30951);
   Data__586->SetBinError(9,14.79865);
   Data__586->SetBinError(10,15.49193);
   Data__586->SetBinError(11,15.42725);
   Data__586->SetBinError(12,15.71623);
   Data__586->SetBinError(13,15.49193);
   Data__586->SetBinError(14,15.09967);
   Data__586->SetBinError(15,16.30951);
   Data__586->SetBinError(16,17.69181);
   Data__586->SetBinError(17,17.69181);
   Data__586->SetBinError(18,20.73644);
   Data__586->SetBinError(19,24.53569);
   Data__586->SetBinError(20,62.1128);
   Data__586->SetEntries(7845);
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
   hframe_copy__587->SetMaximum(27006);
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
   hframe_copy__588->SetMaximum(27006);
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
