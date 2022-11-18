void TopBJetBDisc()
{
//=========Macro generated from canvas: TopBJetBDisc/TopBJetBDisc
//=========  (Fri Nov 18 13:28:02 2022) by ROOT version 6.20/02
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
   0.05819962,
   0.0411737,
   0.04025774,
   0.04168887,
   0.0439634,
   0.04501814,
   0.04359322,
   0.04333924,
   0.04137458,
   0.04013589,
   0.03702878,
   0.03522684,
   0.03272953,
   0.02627164,
   0.009847912};
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
   0.05819962,
   0.0411737,
   0.04025774,
   0.04168887,
   0.0439634,
   0.04501814,
   0.04359322,
   0.04333924,
   0.04137458,
   0.04013589,
   0.03702878,
   0.03522684,
   0.03272953,
   0.02627164,
   0.009847912};
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
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMinimum(0.9301605);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMaximum(1.06984);
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
   0.05819962,
   0.0411737,
   0.04025774,
   0.04168887,
   0.0439634,
   0.04501814,
   0.04359322,
   0.04333924,
   0.04137458,
   0.04013589,
   0.03702878,
   0.03522684,
   0.03272953,
   0.02627164,
   0.009847912};
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
   0.05819962,
   0.0411737,
   0.04025774,
   0.04168887,
   0.0439634,
   0.04501814,
   0.04359322,
   0.04333924,
   0.04137458,
   0.04013589,
   0.03702878,
   0.03522684,
   0.03272953,
   0.02627164,
   0.009847912};
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
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMinimum(0.9301605);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMaximum(1.06984);
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
   0.9954587,
   1.020726,
   1.05368,
   0.9750261,
   1.079082,
   1.151539,
   0.9750122,
   1.036679,
   1.047882,
   0.9958085,
   0.9900324,
   1.031078,
   1.06093,
   1.056868,
   0.9860926};
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
   0.06372771,
   0.04450578,
   0.04521774,
   0.04531331,
   0.04909995,
   0.05363253,
   0.04550967,
   0.04886949,
   0.04777932,
   0.0443129,
   0.04191141,
   0.0399835,
   0.03828302,
   0.03042056,
   0.01127644};
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
   0.06372771,
   0.04450578,
   0.04521774,
   0.04531331,
   0.04909995,
   0.05363253,
   0.04550967,
   0.04886949,
   0.04777932,
   0.0443129,
   0.04191141,
   0.0399835,
   0.03828302,
   0.03042056,
   0.01127644};
   grae = new TGraphAsymmErrors(15,Graph1_fx3335,Graph1_fy3335,Graph1_felx3335,Graph1_fehx3335,Graph1_fely3335,Graph1_fehy3335);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1332733313335 = new TH1F("Graph_Graph_Graph_Graph1332733313335","Graph",100,0.175,1.075);
   Graph_Graph_Graph_Graph1332733313335->SetMinimum(0.9019356);
   Graph_Graph_Graph_Graph1332733313335->SetMaximum(1.232739);
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
   TopBJetBDisc_1->Range(-0.204557,-2.146498,1.073924,5.178423);
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
   hframe__584->SetMaximum(54818.53);
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
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMinimum(3.10194);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMaximum(12407.76);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,8.162855);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,17.88927);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,20.39367);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,13.96399);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,13.82381);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,14.8736);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,14.6972);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,15.43794);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,16.60726);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,19.91696);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,20.29402);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,24.12466);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,26.39127);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,41.42947);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,325.921);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.127328);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.768126);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.963429);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.512755);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.520876);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.494391);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.609032);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.349525);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.597039);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.727342);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.682226);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.911557);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,2.02508);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,2.340965);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,6.482624);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(451608);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(6,77.94723);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,173.9341);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,169.4231);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,166.5979);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,172.497);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,178.9266);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,182.2445);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,184.2935);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,206.8313);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,218.1967);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,252.9021);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,303.3659);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,366.1575);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,585.6689);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,4444.616);
   TT_stack_2_stack_2_stack_2->SetBinError(6,2.279612);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.390157);
   TT_stack_2_stack_2_stack_2->SetBinError(8,3.325711);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.28435);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.332716);
   TT_stack_2_stack_2_stack_2->SetBinError(11,3.369949);
   TT_stack_2_stack_2_stack_2->SetBinError(12,3.383548);
   TT_stack_2_stack_2_stack_2->SetBinError(13,3.394809);
   TT_stack_2_stack_2_stack_2->SetBinError(14,3.603412);
   TT_stack_2_stack_2_stack_2->SetBinError(15,3.693684);
   TT_stack_2_stack_2_stack_2->SetBinError(16,3.960381);
   TT_stack_2_stack_2_stack_2->SetBinError(17,4.345891);
   TT_stack_2_stack_2_stack_2->SetBinError(18,4.751988);
   TT_stack_2_stack_2_stack_2->SetBinError(19,5.983272);
   TT_stack_2_stack_2_stack_2->SetBinError(20,16.49401);
   TT_stack_2_stack_2_stack_2->SetEntries(133616);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,159.0031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,323.4959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,325.52);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,294.2972);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,261.2817);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,206.5335);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,273.8217);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,234.3472);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,235.5825);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,269.012);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,290.4219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,317.4655);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,331.3443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,514.955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2984.313);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,14.03698);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,20.76128);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,20.38365);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,19.46329);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,19.33413);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,17.64123);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,20.17718);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,18.45452);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,18.5783);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,19.94131);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,20.4217);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,22.21816);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,23.12273);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,29.30763);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,74.28432);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4622.136);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(6,3.999107);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(7,7.774549);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(8,10.30394);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(9,10.98337);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(10,9.16338);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(11,12.4033);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(12,13.39844);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(13,12.08635);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(14,14.282);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(15,17.64282);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(16,19.7937);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(17,26.08491);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(18,32.74201);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(19,50.81086);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(20,362.4593);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(6,0.6956706);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(7,1.040985);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(8,1.04796);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(9,1.011757);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(10,1.051532);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(11,1.118008);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(12,1.130464);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(13,1.131804);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(14,1.210547);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(15,1.271307);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(16,1.370959);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(17,1.527878);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(18,1.674986);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(19,2.141194);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(20,5.804559);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetEntries(120993);
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
   245.1131,
   515.3193,
   515.3367,
   474.8591,
   447.6025,
   400.3337,
   470.7633,
   434.0786,
   459.0211,
   507.1256,
   563.6179,
   644.9559,
   723.8931,
   1142.053,
   7754.85};
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
   14.26549,
   21.2176,
   20.74629,
   19.79634,
   19.67813,
   18.02228,
   20.52209,
   18.81264,
   18.9918,
   20.35394,
   20.87008,
   22.71976,
   23.69268,
   30.00362,
   76.36908};
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
   14.26549,
   21.2176,
   20.74629,
   19.79634,
   19.67813,
   18.02228,
   20.52209,
   18.81264,
   18.9918,
   20.35394,
   20.87008,
   22.71976,
   23.69268,
   30.00362,
   76.36908};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMinimum(8.614341);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMaximum(8614.341);
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
   Data__586->SetBinContent(6,244);
   Data__586->SetBinContent(7,526);
   Data__586->SetBinContent(8,543);
   Data__586->SetBinContent(9,463);
   Data__586->SetBinContent(10,483);
   Data__586->SetBinContent(11,461);
   Data__586->SetBinContent(12,459);
   Data__586->SetBinContent(13,450);
   Data__586->SetBinContent(14,481);
   Data__586->SetBinContent(15,505);
   Data__586->SetBinContent(16,558);
   Data__586->SetBinContent(17,665);
   Data__586->SetBinContent(18,768);
   Data__586->SetBinContent(19,1207);
   Data__586->SetBinContent(20,7647);
   Data__586->SetBinError(6,15.6205);
   Data__586->SetBinError(7,22.93469);
   Data__586->SetBinError(8,23.30236);
   Data__586->SetBinError(9,21.51743);
   Data__586->SetBinError(10,21.97726);
   Data__586->SetBinError(11,21.47091);
   Data__586->SetBinError(12,21.42429);
   Data__586->SetBinError(13,21.2132);
   Data__586->SetBinError(14,21.93171);
   Data__586->SetBinError(15,22.47221);
   Data__586->SetBinError(16,23.62202);
   Data__586->SetBinError(17,25.78759);
   Data__586->SetBinError(18,27.71281);
   Data__586->SetBinError(19,34.74191);
   Data__586->SetBinError(20,87.44713);
   Data__586->SetEntries(15464);
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
   hframe_copy__587->SetMaximum(54818.53);
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
   hframe_copy__588->SetMaximum(54818.53);
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
