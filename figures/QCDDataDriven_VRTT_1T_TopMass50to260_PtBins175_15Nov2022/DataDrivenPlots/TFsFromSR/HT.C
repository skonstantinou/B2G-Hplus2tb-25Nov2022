void HT()
{
//=========Macro generated from canvas: HT/HT
//=========  (Fri Nov 18 13:27:43 2022) by ROOT version 6.20/02
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
   0.01516474,
   0.0153242,
   0.0164356,
   0.01832171,
   0.02037187,
   0.02298113,
   0.02649391,
   0.02987426,
   0.03383228,
   0.03784849,
   0.03306902,
   0.04147055,
   0.0575973,
   0.07428046,
   0.1006808,
   0.09249614,
   0.1732459,
   0.3294896,
   0.4779998,
   -1.0023};
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
   0.01516474,
   0.0153242,
   0.0164356,
   0.01832171,
   0.02037187,
   0.02298113,
   0.02649391,
   0.02987426,
   0.03383228,
   0.03784849,
   0.03306902,
   0.04147055,
   0.0575973,
   0.07428046,
   0.1006808,
   0.09249614,
   0.1732459,
   0.3294896,
   0.4779998,
   -1.0023};
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
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetMinimum(0.4264002);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetMaximum(1.5736);
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
   0.01516474,
   0.0153242,
   0.0164356,
   0.01832171,
   0.02037187,
   0.02298113,
   0.02649391,
   0.02987426,
   0.03383228,
   0.03784849,
   0.03306902,
   0.04147055,
   0.0575973,
   0.07428046,
   0.1006808,
   0.09249614,
   0.1732459,
   0.3294896,
   0.4779998,
   -1.0023};
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
   0.01516474,
   0.0153242,
   0.0164356,
   0.01832171,
   0.02037187,
   0.02298113,
   0.02649391,
   0.02987426,
   0.03383228,
   0.03784849,
   0.03306902,
   0.04147055,
   0.0575973,
   0.07428046,
   0.1006808,
   0.09249614,
   0.1732459,
   0.3294896,
   0.4779998,
   -1.0023};
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
   Graph_Graph_Graph_BackgroundStatError324232463250->SetMinimum(0.4264002);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetMaximum(1.5736);
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
   0.8658716,
   0.9623092,
   0.9990107,
   1.017164,
   0.9990932,
   0.9709228,
   1.037657,
   0.9910883,
   1.077109,
   1.046073,
   0.9892913,
   0.9645716,
   1.126127,
   0.8787269,
   1.227593,
   0.9735759,
   0.9936827,
   0.4740659,
   0.4025358,
   -12.23689};
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
   0.01888139,
   0.01893444,
   0.02023267,
   0.02248734,
   0.02461837,
   0.02704321,
   0.03214549,
   0.03537346,
   0.04237831,
   0.04618525,
   0.03925883,
   0.04847154,
   0.0728431,
   0.08266368,
   0.1316118,
   0.1049834,
   0.1948772,
   0.2370329,
   0.4025358,
   -7.064972};
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
   0.01888139,
   0.01893444,
   0.02023267,
   0.02248734,
   0.02461837,
   0.02704321,
   0.03214549,
   0.03537346,
   0.04237831,
   0.04618525,
   0.03925883,
   0.04847154,
   0.0728431,
   0.08266368,
   0.1316118,
   0.1049834,
   0.1948772,
   0.2370329,
   0.4025358,
   -7.064972};
   grae = new TGraphAsymmErrors(20,Graph1_fx3251,Graph1_fy3251,Graph1_felx3251,Graph1_fehx3251,Graph1_fely3251,Graph1_fehy3251);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1324332473251 = new TH1F("Graph_Graph_Graph_Graph1324332473251","Graph",100,250,3250);
   Graph_Graph_Graph_Graph1324332473251->SetMinimum(-13.5965);
   Graph_Graph_Graph_Graph1324332473251->SetMaximum(2.718814);
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
   HT_1->Range(-6.329089,-2.099599,3158.228,2.880339);
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
   hframe__437->SetMaximum(381.5422);
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
   StackedMCstackHist_stack_61_stack_62_stack_63->SetMinimum(0.02147335);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetMaximum(85.8934);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1.256497);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1.363978);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1.268157);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.8749878);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.7488911);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.6717722);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.5372152);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.3880043);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.3071145);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.3094473);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.1682067);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.1353864);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.08837017);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.0587157);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.0293786);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.01160012);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.002917132);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.0005820729);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.0007817548);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,8.067305e-05);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.07836317);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.09782555);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.08174277);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.07072777);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.05191135);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.05115485);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.04568178);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.03914513);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.03461431);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.0355393);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.01839169);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.01626659);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.01268159);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.01041703);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.007700199);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.003426788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.001349782);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.0005148115);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.0003607248);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,8.758665e-05);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1701.452);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,37.34063);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,35.47746);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,29.91969);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,23.62953);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,18.61661);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,14.35017);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,11.15334);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,8.729722);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,6.706752);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,5.151944);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3.493392);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2.137882);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1.246567);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.6916541);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.3895229);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.1652256);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.04211587);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.01038805);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.005044979);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.0006612848);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.2064855);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.2029418);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.1880091);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1671219);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1489969);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1310254);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1156601);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.1024563);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.08965287);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.07849807);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.04570686);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.03601434);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.02730633);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.02017026);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.01522792);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.006298283);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.003160182);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.001569627);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.001114138);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.0003147286);
   TT_stack_2_stack_2_stack_2->SetEntries(173103.7);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,9.978211);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16.84193);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,17.62043);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,15.725);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,13.6044);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,11.53012);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,8.393149);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,6.723445);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4.9812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4.346721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2.757138);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1.832181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,0.7873807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,0.5355815);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,0.2898026);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,0.1765109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.05962817);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.02278046);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.00411027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,-0.001232279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.7027449);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.7912052);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.7755547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.7143845);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.6528632);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.5937634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.5173605);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.460358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.3942771);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.361083);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.2064643);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.1656056);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.1184741);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.09278425);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.06928244);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.03188604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.01780351);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.01099709);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.004603259);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.0003671461);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3485.125);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(1,0.01685558);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(2,0.007971499);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(3,0.03513702);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(4,0.02904964);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(5,0.04336099);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(6,0.06949733);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(7,0.07543184);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(8,0.07695037);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(9,0.08253017);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(10,0.09451424);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(11,0.03652502);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(12,0.01350027);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(13,0.007027509);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(14,0.00449151);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(15,-0.003514515);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(16,0.0005503438);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(17,0.0007303857);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(18,0.0001202576);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(1,0.004322346);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(2,0.006150141);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(3,0.007521001);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(4,0.008445965);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(5,0.009752616);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(6,0.01084228);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(7,0.01276086);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(8,0.01274014);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(9,0.01294987);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(10,0.01295915);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(11,0.007775875);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(12,0.00656467);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(13,0.005146587);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(14,0.00391006);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(15,0.002809874);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(16,0.00116066);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(17,0.0005415624);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(18,0.0001847024);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetEntries(287.7392);
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
   48.57533,
   53.68337,
   48.80828,
   40.22952,
   32.96989,
   26.55206,
   20.0837,
   15.84117,
   11.99507,
   9.808112,
   6.418736,
   4.10545,
   2.122318,
   1.285951,
   0.7087041,
   0.3533366,
   0.1046612,
   0.03375059,
   0.009937004,
   -0.0004903206};
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
   0.7366325,
   0.8226548,
   0.8021935,
   0.7370735,
   0.6716585,
   0.6101962,
   0.5320959,
   0.4732432,
   0.4058205,
   0.3712222,
   0.2122613,
   0.1702553,
   0.1222398,
   0.09552105,
   0.07135292,
   0.03268227,
   0.01813212,
   0.01112047,
   0.004749886,
   0.0004914486};
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
   0.7366325,
   0.8226548,
   0.8021935,
   0.7370735,
   0.6716585,
   0.6101962,
   0.5320959,
   0.4732432,
   0.4058205,
   0.3712222,
   0.2122613,
   0.1702553,
   0.1222398,
   0.09552105,
   0.07135292,
   0.03268227,
   0.01813212,
   0.01112047,
   0.004749886,
   0.0004914486};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetMinimum(0.05995664);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetMaximum(59.95664);
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
   Data__439->SetBinContent(1,42.06);
   Data__439->SetBinContent(2,51.66);
   Data__439->SetBinContent(3,48.76);
   Data__439->SetBinContent(4,40.92);
   Data__439->SetBinContent(5,32.94);
   Data__439->SetBinContent(6,25.78);
   Data__439->SetBinContent(7,20.84);
   Data__439->SetBinContent(8,15.7);
   Data__439->SetBinContent(9,12.92);
   Data__439->SetBinContent(10,10.26);
   Data__439->SetBinContent(11,6.35);
   Data__439->SetBinContent(12,3.96);
   Data__439->SetBinContent(13,2.39);
   Data__439->SetBinContent(14,1.13);
   Data__439->SetBinContent(15,0.87);
   Data__439->SetBinContent(16,0.344);
   Data__439->SetBinContent(17,0.104);
   Data__439->SetBinContent(18,0.016);
   Data__439->SetBinContent(19,0.004);
   Data__439->SetBinContent(20,0.006);
   Data__439->SetBinError(1,0.9171696);
   Data__439->SetBinError(2,1.016464);
   Data__439->SetBinError(3,0.9875222);
   Data__439->SetBinError(4,0.9046546);
   Data__439->SetBinError(5,0.811665);
   Data__439->SetBinError(6,0.7180529);
   Data__439->SetBinError(7,0.6456005);
   Data__439->SetBinError(8,0.560357);
   Data__439->SetBinError(9,0.5083306);
   Data__439->SetBinError(10,0.4529901);
   Data__439->SetBinError(11,0.2519921);
   Data__439->SetBinError(12,0.1989975);
   Data__439->SetBinError(13,0.1545962);
   Data__439->SetBinError(14,0.1063015);
   Data__439->SetBinError(15,0.09327379);
   Data__439->SetBinError(16,0.03709447);
   Data__439->SetBinError(17,0.02039608);
   Data__439->SetBinError(18,0.008);
   Data__439->SetBinError(19,0.004);
   Data__439->SetBinError(20,0.003464102);
   Data__439->SetEntries(16246.85);
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
   hframe_copy__440->SetMaximum(381.5422);
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
   hframe_copy__441->SetMaximum(381.5422);
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
