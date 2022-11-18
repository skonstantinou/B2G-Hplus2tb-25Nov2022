void HT()
{
//=========Macro generated from canvas: HT/HT
//=========  (Fri Nov 18 13:28:22 2022) by ROOT version 6.20/02
   TCanvas *HT = new TCanvas("HT", "HT",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   HT->SetHighLightColor(2);
   HT->Range(0,0,1,1);
   HT->SetFillColor(0);
   HT->SetBorderMode(0);
   HT->SetBorderSize(2);
   HT->SetTickx(1);
   HT->SetTicky(1);
   HT->SetLeftMargin(0.16);
   HT->SetRightMargin(0.05);
   HT->SetTopMargin(0.06);
   HT->SetBottomMargin(0.13);
   HT->SetFrameFillStyle(0);
   HT->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: HT_2
   TPad *HT_2 = new TPad("HT_2", "HT_2",0,0,1,0.304);
   HT_2->Draw();
   HT_2->cd();
   HT_2->Range(-6.329089,-0.428,3158.228,1.7);
   HT_2->SetFillColor(0);
   HT_2->SetFillStyle(4000);
   HT_2->SetBorderMode(0);
   HT_2->SetBorderSize(2);
   HT_2->SetTickx(1);
   HT_2->SetTicky(1);
   HT_2->SetLeftMargin(0.16);
   HT_2->SetRightMargin(0.05);
   HT_2->SetTopMargin(0);
   HT_2->SetBottomMargin(0.3421053);
   HT_2->SetFrameFillStyle(0);
   HT_2->SetFrameBorderMode(0);
   HT_2->SetFrameFillStyle(0);
   HT_2->SetFrameBorderMode(0);
   
   TH1F *hframe__435 = new TH1F("hframe__435","",1000,500,3000);
   hframe__435->SetMinimum(0.3);
   hframe__435->SetMaximum(1.7);
   hframe__435->SetDirectory(0);
   hframe__435->SetStats(0);
   hframe__435->SetLineStyle(0);
   hframe__435->SetMarkerStyle(20);
   hframe__435->GetXaxis()->SetTitle("H_{T} (GeV)");
   hframe__435->GetXaxis()->SetLabelFont(43);
   hframe__435->GetXaxis()->SetLabelOffset(0.007);
   hframe__435->GetXaxis()->SetLabelSize(27);
   hframe__435->GetXaxis()->SetTitleSize(33);
   hframe__435->GetXaxis()->SetTitleOffset(2.960526);
   hframe__435->GetXaxis()->SetTitleFont(43);
   hframe__435->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__435->GetYaxis()->SetNdivisions(505);
   hframe__435->GetYaxis()->SetLabelFont(43);
   hframe__435->GetYaxis()->SetLabelOffset(0.007);
   hframe__435->GetYaxis()->SetLabelSize(21);
   hframe__435->GetYaxis()->SetTitleSize(33);
   hframe__435->GetYaxis()->SetTitleOffset(1.5625);
   hframe__435->GetYaxis()->SetTitleFont(43);
   hframe__435->GetZaxis()->SetLabelFont(43);
   hframe__435->GetZaxis()->SetLabelOffset(0.007);
   hframe__435->GetZaxis()->SetLabelSize(27);
   hframe__435->GetZaxis()->SetTitleSize(33);
   hframe__435->GetZaxis()->SetTitleOffset(1);
   hframe__435->GetZaxis()->SetTitleFont(43);
   hframe__435->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3249[20] = {
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1050,
   1150,
   1250,
   1350,
   1450,
   1625,
   1875,
   2125,
   2375,
   2750};
   Double_t BackgroundStatSystError_fy3249[20] = {
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
   Double_t BackgroundStatSystError_felx3249[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BackgroundStatSystError_fely3249[20] = {
   0.02782955,
   0.02370059,
   0.02300567,
   0.02417346,
   0.02497832,
   0.02727262,
   0.03034774,
   0.03290338,
   0.03635383,
   0.04188545,
   0.03549437,
   0.04409655,
   0.05407726,
   0.06780127,
   0.08114849,
   0.070424,
   0.1288148,
   0.201957,
   0.3974466,
   0.5986833};
   Double_t BackgroundStatSystError_fehx3249[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BackgroundStatSystError_fehy3249[20] = {
   0.02782955,
   0.02370059,
   0.02300567,
   0.02417346,
   0.02497832,
   0.02727262,
   0.03034774,
   0.03290338,
   0.03635383,
   0.04188545,
   0.03549437,
   0.04409655,
   0.05407726,
   0.06780127,
   0.08114849,
   0.070424,
   0.1288148,
   0.201957,
   0.3974466,
   0.5986833};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3249,BackgroundStatSystError_fy3249,BackgroundStatSystError_felx3249,BackgroundStatSystError_fehx3249,BackgroundStatSystError_fely3249,BackgroundStatSystError_fehy3249);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1272;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError324132453249 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError324132453249","Graph",100,250,3250);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetMinimum(0.28158);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetMaximum(1.71842);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError324132453249);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3250[20] = {
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1050,
   1150,
   1250,
   1350,
   1450,
   1625,
   1875,
   2125,
   2375,
   2750};
   Double_t BackgroundStatError_fy3250[20] = {
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
   Double_t BackgroundStatError_felx3250[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BackgroundStatError_fely3250[20] = {
   0.02782955,
   0.02370059,
   0.02300567,
   0.02417346,
   0.02497832,
   0.02727262,
   0.03034774,
   0.03290338,
   0.03635383,
   0.04188545,
   0.03549437,
   0.04409655,
   0.05407726,
   0.06780127,
   0.08114849,
   0.070424,
   0.1288148,
   0.201957,
   0.3974466,
   0.5986833};
   Double_t BackgroundStatError_fehx3250[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BackgroundStatError_fehy3250[20] = {
   0.02782955,
   0.02370059,
   0.02300567,
   0.02417346,
   0.02497832,
   0.02727262,
   0.03034774,
   0.03290338,
   0.03635383,
   0.04188545,
   0.03549437,
   0.04409655,
   0.05407726,
   0.06780127,
   0.08114849,
   0.070424,
   0.1288148,
   0.201957,
   0.3974466,
   0.5986833};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3250,BackgroundStatError_fy3250,BackgroundStatError_felx3250,BackgroundStatError_fehx3250,BackgroundStatError_fely3250,BackgroundStatError_fehy3250);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1271;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError324232463250 = new TH1F("Graph_Graph_Graph_BackgroundStatError324232463250","Graph",100,250,3250);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetMinimum(0.28158);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetMaximum(1.71842);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError324232463250);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx63[2] = {
   500,
   3000};
   Double_t Graph0_fy63[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx63,Graph0_fy63);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0616263 = new TH1F("Graph_Graph_Graph_Graph0616263","Graph",100,250,3250);
   Graph_Graph_Graph_Graph0616263->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0616263->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0616263->SetDirectory(0);
   Graph_Graph_Graph_Graph0616263->SetStats(0);
   Graph_Graph_Graph_Graph0616263->SetLineStyle(0);
   Graph_Graph_Graph_Graph0616263->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0616263);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3251[20] = {
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1050,
   1150,
   1250,
   1350,
   1450,
   1625,
   1875,
   2125,
   2375,
   2750};
   Double_t Graph1_fy3251[20] = {
   0.9313295,
   1.000789,
   1.038822,
   1.049098,
   0.973711,
   1.036468,
   0.9814267,
   0.9701588,
   0.976465,
   1.039871,
   0.9808994,
   1.008787,
   1.151484,
   0.932101,
   0.943581,
   0.9025166,
   1.104848,
   0.45611,
   1.373083,
   2.25151};
   Double_t Graph1_felx3251[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t Graph1_fely3251[20] = {
   0.028445,
   0.02557731,
   0.02523971,
   0.02675086,
   0.02649125,
   0.03021119,
   0.03255187,
   0.03514514,
   0.03915268,
   0.04692873,
   0.03823944,
   0.0485353,
   0.06358009,
   0.0696685,
   0.0872341,
   0.07393704,
   0.1463406,
   0.1520367,
   0.5189766,
   0.7960288};
   Double_t Graph1_fehx3251[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t Graph1_fehy3251[20] = {
   0.028445,
   0.02557731,
   0.02523971,
   0.02675086,
   0.02649125,
   0.03021119,
   0.03255187,
   0.03514514,
   0.03915268,
   0.04692873,
   0.03823944,
   0.0485353,
   0.06358009,
   0.0696685,
   0.0872341,
   0.07393704,
   0.1463406,
   0.1520367,
   0.5189766,
   0.7960288};
   grae = new TGraphAsymmErrors(20,Graph1_fx3251,Graph1_fy3251,Graph1_felx3251,Graph1_fehx3251,Graph1_fely3251,Graph1_fehy3251);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1324332473251 = new TH1F("Graph_Graph_Graph_Graph1324332473251","Graph",100,250,3250);
   Graph_Graph_Graph_Graph1324332473251->SetMinimum(0.02972682);
   Graph_Graph_Graph_Graph1324332473251->SetMaximum(3.321885);
   Graph_Graph_Graph_Graph1324332473251->SetDirectory(0);
   Graph_Graph_Graph_Graph1324332473251->SetStats(0);
   Graph_Graph_Graph_Graph1324332473251->SetLineStyle(0);
   Graph_Graph_Graph_Graph1324332473251->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1324332473251);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__436 = new TH1F("hframe_copy__436","",1000,500,3000);
   hframe_copy__436->SetMinimum(0.3);
   hframe_copy__436->SetMaximum(1.7);
   hframe_copy__436->SetDirectory(0);
   hframe_copy__436->SetStats(0);
   hframe_copy__436->SetLineStyle(0);
   hframe_copy__436->SetMarkerStyle(20);
   hframe_copy__436->GetXaxis()->SetTitle("H_{T} (GeV)");
   hframe_copy__436->GetXaxis()->SetLabelFont(43);
   hframe_copy__436->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__436->GetXaxis()->SetLabelSize(27);
   hframe_copy__436->GetXaxis()->SetTitleSize(33);
   hframe_copy__436->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__436->GetXaxis()->SetTitleFont(43);
   hframe_copy__436->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__436->GetYaxis()->SetNdivisions(505);
   hframe_copy__436->GetYaxis()->SetLabelFont(43);
   hframe_copy__436->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__436->GetYaxis()->SetLabelSize(21);
   hframe_copy__436->GetYaxis()->SetTitleSize(33);
   hframe_copy__436->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__436->GetYaxis()->SetTitleFont(43);
   hframe_copy__436->GetZaxis()->SetLabelFont(43);
   hframe_copy__436->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__436->GetZaxis()->SetLabelSize(27);
   hframe_copy__436->GetZaxis()->SetTitleSize(33);
   hframe_copy__436->GetZaxis()->SetTitleOffset(1);
   hframe_copy__436->GetZaxis()->SetTitleFont(43);
   hframe_copy__436->Draw("sameaxis");
   HT_2->Modified();
   HT->cd();
  
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
   HT->cd();
  
// ------------>Primitives in pad: HT_1
   TPad *HT_1 = new TPad("HT_1", "HT_1",0,0.2897959,1,1);
   HT_1->Draw();
   HT_1->cd();
   HT_1->Range(-6.329089,-2.09511,3158.228,2.66037);
   HT_1->SetFillColor(0);
   HT_1->SetFillStyle(4000);
   HT_1->SetBorderMode(0);
   HT_1->SetBorderSize(2);
   HT_1->SetLogy();
   HT_1->SetTickx(1);
   HT_1->SetTicky(1);
   HT_1->SetLeftMargin(0.16);
   HT_1->SetRightMargin(0.05);
   HT_1->SetTopMargin(0.06);
   HT_1->SetBottomMargin(0.02);
   HT_1->SetFrameFillStyle(0);
   HT_1->SetFrameBorderMode(0);
   HT_1->SetFrameFillStyle(0);
   HT_1->SetFrameBorderMode(0);
   
   TH1F *hframe__437 = new TH1F("hframe__437","",1000,500,3000);
   hframe__437->SetMinimum(0.01);
   hframe__437->SetMaximum(237.16);
   hframe__437->SetDirectory(0);
   hframe__437->SetStats(0);
   hframe__437->SetLineStyle(0);
   hframe__437->SetMarkerStyle(20);
   hframe__437->GetXaxis()->SetLabelFont(43);
   hframe__437->GetXaxis()->SetLabelOffset(0.007);
   hframe__437->GetXaxis()->SetLabelSize(0);
   hframe__437->GetXaxis()->SetTitleSize(0);
   hframe__437->GetXaxis()->SetTitleOffset(0.9);
   hframe__437->GetXaxis()->SetTitleFont(43);
   hframe__437->GetYaxis()->SetTitle("< Events / 50-500 GeV >");
   hframe__437->GetYaxis()->SetLabelFont(43);
   hframe__437->GetYaxis()->SetLabelOffset(0.007);
   hframe__437->GetYaxis()->SetLabelSize(27);
   hframe__437->GetYaxis()->SetTitleSize(33);
   hframe__437->GetYaxis()->SetTitleOffset(1.5625);
   hframe__437->GetYaxis()->SetTitleFont(43);
   hframe__437->GetZaxis()->SetLabelFont(43);
   hframe__437->GetZaxis()->SetLabelOffset(0.007);
   hframe__437->GetZaxis()->SetLabelSize(27);
   hframe__437->GetZaxis()->SetTitleSize(33);
   hframe__437->GetZaxis()->SetTitleOffset(1);
   hframe__437->GetZaxis()->SetTitleFont(43);
   hframe__437->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis319[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *StackedMCstackHist_stack_61_stack_62_stack_63 = new TH1F("StackedMCstackHist_stack_61_stack_62_stack_63","StackedMCstackHist",20, xAxis319);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetMinimum(0.01304555);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetMaximum(52.18219);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetDirectory(0);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetStats(0);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetLineStyle(0);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetMarkerStyle(20);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_61_stack_62_stack_63);
   
   Double_t xAxis320[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_HTInclusive",20, xAxis320);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.4302435);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.5959968);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.6123527);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.6801577);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.5120432);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.5324659);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.4373171);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.3109418);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.3435743);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.2426796);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.1488869);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.1159133);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.09284117);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.05175194);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.02542883);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.01892596);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.004939052);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.003112169);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.0008351911);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.0002779451);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.04357756);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.04608587);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.05734122);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.06118163);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.04779728);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.05516135);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.05329446);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.03636185);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.03683011);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.02874901);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.01654993);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.01369637);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.01147357);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.008951273);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.006594687);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.004021215);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.001564405);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.001028792);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.0009784675);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.0001858029);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1135.028);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,100);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis321[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_HTInclusive",20, xAxis321);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,8.890733);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,10.46086);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,10.20507);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,9.172756);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,7.920656);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,6.644656);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5.387754);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,4.263306);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,3.36034);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2.665756);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1.797089);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1.177231);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,0.7289162);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.446358);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.332701);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.1603169);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.05957199);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.01915642);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.007961227);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.001770047);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.09932133);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1096799);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.1093684);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1042285);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.09743952);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.08970319);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.08099479);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.072128);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.06390055);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.05657939);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.03278527);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.02676362);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.02096413);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.01629262);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.01418127);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.006160245);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.003695291);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.002145752);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.001399401);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.0004316544);
   TT_stack_2_stack_2_stack_2->SetEntries(64619.51);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,100);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis322[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_HTInclusive",20, xAxis322);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,13.69988);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,19.53902);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,21.79645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,19.46752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,19.31681);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,15.53462);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,12.69898);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,11.13452);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,9.035918);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,6.53504);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,4.762153);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2.989225);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2.02674);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1.422283);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,0.8818273);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,0.4811329);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.1418522);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.05665974);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.01159565);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.005058351);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.6314123);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.7153142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.7400719);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.6983961);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.6845866);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.6103914);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.5537391);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.5105209);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.4572313);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.3904197);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.2352514);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.1864291);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.1521738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.1288712);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.09939777);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.04592077);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.02627803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.0157615);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.00792284);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.004228414);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(6762.502);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,100);
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
   Double_t xAxis323[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__438 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__438","h_SR_HTInclusive",20, xAxis323);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(1,0.0002302684);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(2,0.008491726);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(3,0.02064183);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(4,0.01394948);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(5,0.02898525);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(6,0.02855854);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(7,0.05811261);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(8,0.04813582);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(9,0.04427941);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(10,0.04219006);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(11,0.03250385);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(12,0.01918641);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(13,0.00615686);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(14,0.005812253);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(15,0.003542695);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(16,-0.001162183);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(17,-0.0001204181);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(18,0.0008570758);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(19,-0.0001270142);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(1,0.001720701);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(2,0.003789967);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(3,0.004835036);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(4,0.006285832);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(5,0.007611461);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(6,0.009002457);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(7,0.01059162);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(8,0.01108628);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(9,0.01135098);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(10,0.01171026);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(11,0.00715883);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(12,0.005649201);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(13,0.004541198);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(14,0.003556849);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(15,0.002685217);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(16,0.0009993913);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(17,0.0005113379);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(18,0.0004517298);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(19,0.0001270142);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetEntries(153.4947);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3252[20] = {
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1050,
   1150,
   1250,
   1350,
   1450,
   1625,
   1875,
   2125,
   2375,
   2750};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3252[20] = {
   23.02085,
   30.59587,
   32.61387,
   29.32044,
   27.74951,
   22.71174,
   18.52405,
   15.70877,
   12.73983,
   9.443477,
   6.708129,
   4.28237,
   2.848497,
   1.920393,
   1.239957,
   0.6603757,
   0.2063633,
   0.07892832,
   0.02039207,
   0.007106343};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3252[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3252[20] = {
   0.64066,
   0.72514,
   0.7503039,
   0.7087763,
   0.6931362,
   0.6194087,
   0.5621631,
   0.5168716,
   0.4631417,
   0.3955442,
   0.2381008,
   0.1888378,
   0.1540389,
   0.1302051,
   0.1006206,
   0.0465063,
   0.02658265,
   0.01594013,
   0.008104759,
   0.004254449};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3252[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3252[20] = {
   0.64066,
   0.72514,
   0.7503039,
   0.7087763,
   0.6931362,
   0.6194087,
   0.5621631,
   0.5168716,
   0.4631417,
   0.3955442,
   0.2381008,
   0.1888378,
   0.1540389,
   0.1302051,
   0.1006206,
   0.0465063,
   0.02658265,
   0.01594013,
   0.008104759,
   0.004254449};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3252,BkgSum-SR-Inclusive_sum_errors_fy3252,BkgSum-SR-Inclusive_sum_errors_felx3252,BkgSum-SR-Inclusive_sum_errors_fehx3252,BkgSum-SR-Inclusive_sum_errors_fely3252,BkgSum-SR-Inclusive_sum_errors_fehy3252);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1270;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252","Graph",100,250,3250);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetMinimum(0.002566705);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetMaximum(36.7003);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors324432483252);
   
   grae->Draw("e2 ");
   Double_t xAxis324[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *Data__439 = new TH1F("Data__439","h_SR_HTInclusive",20, xAxis324);
   Data__439->SetBinContent(1,21.44);
   Data__439->SetBinContent(2,30.62);
   Data__439->SetBinContent(3,33.88);
   Data__439->SetBinContent(4,30.76);
   Data__439->SetBinContent(5,27.02);
   Data__439->SetBinContent(6,23.54);
   Data__439->SetBinContent(7,18.18);
   Data__439->SetBinContent(8,15.24);
   Data__439->SetBinContent(9,12.44);
   Data__439->SetBinContent(10,9.82);
   Data__439->SetBinContent(11,6.58);
   Data__439->SetBinContent(12,4.32);
   Data__439->SetBinContent(13,3.28);
   Data__439->SetBinContent(14,1.79);
   Data__439->SetBinContent(15,1.17);
   Data__439->SetBinContent(16,0.596);
   Data__439->SetBinContent(17,0.228);
   Data__439->SetBinContent(18,0.036);
   Data__439->SetBinContent(19,0.028);
   Data__439->SetBinContent(20,0.016);
   Data__439->SetBinError(1,0.6548282);
   Data__439->SetBinError(2,0.7825599);
   Data__439->SetBinError(3,0.8231646);
   Data__439->SetBinError(4,0.7843469);
   Data__439->SetBinError(5,0.735119);
   Data__439->SetBinError(6,0.6861487);
   Data__439->SetBinError(7,0.6029925);
   Data__439->SetBinError(8,0.5520869);
   Data__439->SetBinError(9,0.4987986);
   Data__439->SetBinError(10,0.4431704);
   Data__439->SetBinError(11,0.2565151);
   Data__439->SetBinError(12,0.2078461);
   Data__439->SetBinError(13,0.1811077);
   Data__439->SetBinError(14,0.1337909);
   Data__439->SetBinError(15,0.1081665);
   Data__439->SetBinError(16,0.04882622);
   Data__439->SetBinError(17,0.03019934);
   Data__439->SetBinError(18,0.012);
   Data__439->SetBinError(19,0.01058301);
   Data__439->SetBinError(20,0.005656854);
   Data__439->SetEntries(12532.58);
   Data__439->SetDirectory(0);
   Data__439->SetFillStyle(3001);
   Data__439->SetLineWidth(2);
   Data__439->SetMarkerStyle(20);
   Data__439->SetMarkerSize(1.2);
   Data__439->GetXaxis()->SetRange(1,100);
   Data__439->GetXaxis()->SetLabelFont(42);
   Data__439->GetXaxis()->SetTitleOffset(1);
   Data__439->GetXaxis()->SetTitleFont(42);
   Data__439->GetYaxis()->SetLabelFont(42);
   Data__439->GetYaxis()->SetTitleFont(42);
   Data__439->GetZaxis()->SetLabelFont(42);
   Data__439->GetZaxis()->SetTitleOffset(1);
   Data__439->GetZaxis()->SetTitleFont(42);
   Data__439->Draw("EP same");
   
   TLegend *leg = new TLegend(0.65,0.51,0.85,0.91,NULL,"brNDC");
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

   ci = 1270;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1270;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__440 = new TH1F("hframe_copy__440","",1000,500,3000);
   hframe_copy__440->SetMinimum(0.01);
   hframe_copy__440->SetMaximum(237.16);
   hframe_copy__440->SetDirectory(0);
   hframe_copy__440->SetStats(0);
   hframe_copy__440->SetLineStyle(0);
   hframe_copy__440->SetMarkerStyle(20);
   hframe_copy__440->GetXaxis()->SetLabelFont(43);
   hframe_copy__440->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__440->GetXaxis()->SetLabelSize(0);
   hframe_copy__440->GetXaxis()->SetTitleSize(0);
   hframe_copy__440->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__440->GetXaxis()->SetTitleFont(43);
   hframe_copy__440->GetYaxis()->SetTitle("< Events / 50-500 GeV >");
   hframe_copy__440->GetYaxis()->SetLabelFont(43);
   hframe_copy__440->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__440->GetYaxis()->SetLabelSize(27);
   hframe_copy__440->GetYaxis()->SetTitleSize(33);
   hframe_copy__440->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__440->GetYaxis()->SetTitleFont(43);
   hframe_copy__440->GetZaxis()->SetLabelFont(43);
   hframe_copy__440->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__440->GetZaxis()->SetLabelSize(27);
   hframe_copy__440->GetZaxis()->SetTitleSize(33);
   hframe_copy__440->GetZaxis()->SetTitleOffset(1);
   hframe_copy__440->GetZaxis()->SetTitleFont(43);
   hframe_copy__440->Draw("sameaxis");
   
   TH1F *hframe_copy__441 = new TH1F("hframe_copy__441","",1000,500,3000);
   hframe_copy__441->SetMinimum(0.01);
   hframe_copy__441->SetMaximum(237.16);
   hframe_copy__441->SetDirectory(0);
   hframe_copy__441->SetStats(0);
   hframe_copy__441->SetLineStyle(0);
   hframe_copy__441->SetMarkerStyle(20);
   hframe_copy__441->GetXaxis()->SetLabelFont(43);
   hframe_copy__441->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__441->GetXaxis()->SetLabelSize(0);
   hframe_copy__441->GetXaxis()->SetTitleSize(0);
   hframe_copy__441->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__441->GetXaxis()->SetTitleFont(43);
   hframe_copy__441->GetYaxis()->SetTitle("< Events / 50-500 GeV >");
   hframe_copy__441->GetYaxis()->SetLabelFont(43);
   hframe_copy__441->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__441->GetYaxis()->SetLabelSize(27);
   hframe_copy__441->GetYaxis()->SetTitleSize(33);
   hframe_copy__441->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__441->GetYaxis()->SetTitleFont(43);
   hframe_copy__441->GetZaxis()->SetLabelFont(43);
   hframe_copy__441->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__441->GetZaxis()->SetLabelSize(27);
   hframe_copy__441->GetZaxis()->SetTitleSize(33);
   hframe_copy__441->GetZaxis()->SetTitleOffset(1);
   hframe_copy__441->GetZaxis()->SetTitleFont(43);
   hframe_copy__441->Draw("sameaxis");
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
   HT_1->Modified();
   HT->cd();
   HT->Modified();
   HT->cd();
   HT->SetSelected(HT);
}
