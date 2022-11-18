void MVAOutputM500()
{
//=========Macro generated from canvas: MVAOutputM500/MVAOutputM500
//=========  (Fri Nov 18 13:27:41 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM500 = new TCanvas("MVAOutputM500", "MVAOutputM500",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM500->SetHighLightColor(2);
   MVAOutputM500->Range(0,0,1,1);
   MVAOutputM500->SetFillColor(0);
   MVAOutputM500->SetBorderMode(0);
   MVAOutputM500->SetBorderSize(2);
   MVAOutputM500->SetTickx(1);
   MVAOutputM500->SetTicky(1);
   MVAOutputM500->SetLeftMargin(0.16);
   MVAOutputM500->SetRightMargin(0.05);
   MVAOutputM500->SetTopMargin(0.06);
   MVAOutputM500->SetBottomMargin(0.13);
   MVAOutputM500->SetFrameFillStyle(0);
   MVAOutputM500->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM500_2
   TPad *MVAOutputM500_2 = new TPad("MVAOutputM500_2", "MVAOutputM500_2",0,0,1,0.304);
   MVAOutputM500_2->Draw();
   MVAOutputM500_2->cd();
   MVAOutputM500_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM500_2->SetFillColor(0);
   MVAOutputM500_2->SetFillStyle(4000);
   MVAOutputM500_2->SetBorderMode(0);
   MVAOutputM500_2->SetBorderSize(2);
   MVAOutputM500_2->SetTickx(1);
   MVAOutputM500_2->SetTicky(1);
   MVAOutputM500_2->SetLeftMargin(0.16);
   MVAOutputM500_2->SetRightMargin(0.05);
   MVAOutputM500_2->SetTopMargin(0);
   MVAOutputM500_2->SetBottomMargin(0.3421053);
   MVAOutputM500_2->SetFrameFillStyle(0);
   MVAOutputM500_2->SetFrameBorderMode(0);
   MVAOutputM500_2->SetFrameFillStyle(0);
   MVAOutputM500_2->SetFrameBorderMode(0);
   
   TH1F *hframe__141 = new TH1F("hframe__141","",1000,0,1.01);
   hframe__141->SetMinimum(0.3);
   hframe__141->SetMaximum(1.7);
   hframe__141->SetDirectory(0);
   hframe__141->SetStats(0);
   hframe__141->SetLineStyle(0);
   hframe__141->SetMarkerStyle(20);
   hframe__141->GetXaxis()->SetTitle("DNN Output");
   hframe__141->GetXaxis()->SetLabelFont(43);
   hframe__141->GetXaxis()->SetLabelOffset(0.007);
   hframe__141->GetXaxis()->SetLabelSize(27);
   hframe__141->GetXaxis()->SetTitleSize(33);
   hframe__141->GetXaxis()->SetTitleOffset(2.960526);
   hframe__141->GetXaxis()->SetTitleFont(43);
   hframe__141->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__141->GetYaxis()->SetNdivisions(505);
   hframe__141->GetYaxis()->SetLabelFont(43);
   hframe__141->GetYaxis()->SetLabelOffset(0.007);
   hframe__141->GetYaxis()->SetLabelSize(21);
   hframe__141->GetYaxis()->SetTitleSize(33);
   hframe__141->GetYaxis()->SetTitleOffset(1.5625);
   hframe__141->GetYaxis()->SetTitleFont(43);
   hframe__141->GetZaxis()->SetLabelFont(43);
   hframe__141->GetZaxis()->SetLabelOffset(0.007);
   hframe__141->GetZaxis()->SetLabelSize(27);
   hframe__141->GetZaxis()->SetTitleSize(33);
   hframe__141->GetZaxis()->SetTitleOffset(1);
   hframe__141->GetZaxis()->SetTitleFont(43);
   hframe__141->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3081[19] = {
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
   Double_t BackgroundStatSystError_fy3081[19] = {
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
   Double_t BackgroundStatSystError_felx3081[19] = {
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
   Double_t BackgroundStatSystError_fely3081[19] = {
   0.05229821,
   0.05333737,
   0.04819593,
   0.04951748,
   0.05192868,
   0.0480984,
   0.05480454,
   0.05642761,
   0.06300733,
   0.06449874,
   0.07225089,
   0.07103068,
   0.0793516,
   0.07183359,
   0.08198105,
   0.09561329,
   0.1109335,
   0.1553949,
   0.4757795};
   Double_t BackgroundStatSystError_fehx3081[19] = {
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
   Double_t BackgroundStatSystError_fehy3081[19] = {
   0.05229821,
   0.05333737,
   0.04819593,
   0.04951748,
   0.05192868,
   0.0480984,
   0.05480454,
   0.05642761,
   0.06300733,
   0.06449874,
   0.07225089,
   0.07103068,
   0.0793516,
   0.07183359,
   0.08198105,
   0.09561329,
   0.1109335,
   0.1553949,
   0.4757795};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3081,BackgroundStatSystError_fy3081,BackgroundStatSystError_felx3081,BackgroundStatSystError_fehx3081,BackgroundStatSystError_fely3081,BackgroundStatSystError_fehy3081);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1230;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError307330773081 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError307330773081","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMinimum(0.4290646);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMaximum(1.570935);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError307330773081);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3082[19] = {
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
   Double_t BackgroundStatError_fy3082[19] = {
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
   Double_t BackgroundStatError_felx3082[19] = {
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
   Double_t BackgroundStatError_fely3082[19] = {
   0.05229821,
   0.05333737,
   0.04819593,
   0.04951748,
   0.05192868,
   0.0480984,
   0.05480454,
   0.05642761,
   0.06300733,
   0.06449874,
   0.07225089,
   0.07103068,
   0.0793516,
   0.07183359,
   0.08198105,
   0.09561329,
   0.1109335,
   0.1553949,
   0.4757795};
   Double_t BackgroundStatError_fehx3082[19] = {
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
   Double_t BackgroundStatError_fehy3082[19] = {
   0.05229821,
   0.05333737,
   0.04819593,
   0.04951748,
   0.05192868,
   0.0480984,
   0.05480454,
   0.05642761,
   0.06300733,
   0.06449874,
   0.07225089,
   0.07103068,
   0.0793516,
   0.07183359,
   0.08198105,
   0.09561329,
   0.1109335,
   0.1553949,
   0.4757795};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3082,BackgroundStatError_fy3082,BackgroundStatError_felx3082,BackgroundStatError_fehx3082,BackgroundStatError_fely3082,BackgroundStatError_fehy3082);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1229;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError307430783082 = new TH1F("Graph_Graph_Graph_BackgroundStatError307430783082","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMinimum(0.4290646);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMaximum(1.570935);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError307430783082);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx21[2] = {
   0,
   1.01};
   Double_t Graph0_fy21[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx21,Graph0_fy21);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0192021 = new TH1F("Graph_Graph_Graph_Graph0192021","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0192021->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0192021->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0192021->SetDirectory(0);
   Graph_Graph_Graph_Graph0192021->SetStats(0);
   Graph_Graph_Graph_Graph0192021->SetLineStyle(0);
   Graph_Graph_Graph_Graph0192021->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0192021);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3083[19] = {
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
   Double_t Graph1_fy3083[19] = {
   0.8885087,
   0.8549196,
   0.8398199,
   0.9038104,
   1.1139,
   0.9548473,
   1.210845,
   0.9957061,
   1.182523,
   0.9696858,
   1.173833,
   1.100624,
   1.350474,
   1.018407,
   1.064788,
   1.247272,
   1.036945,
   0.8344428,
   1.498648};
   Double_t Graph1_felx3083[19] = {
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
   Double_t Graph1_fely3083[19] = {
   0.03618287,
   0.03596674,
   0.03271474,
   0.03453282,
   0.04051215,
   0.03468162,
   0.04436194,
   0.04159622,
   0.05060732,
   0.04654641,
   0.0579715,
   0.05489414,
   0.06777834,
   0.05330588,
   0.06220556,
   0.07857076,
   0.08172273,
   0.1034999,
   0.4518594};
   Double_t Graph1_fehx3083[19] = {
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
   Double_t Graph1_fehy3083[19] = {
   0.03618287,
   0.03596674,
   0.03271474,
   0.03453282,
   0.04051215,
   0.03468162,
   0.04436194,
   0.04159622,
   0.05060732,
   0.04654641,
   0.0579715,
   0.05489414,
   0.06777834,
   0.05330588,
   0.06220556,
   0.07857076,
   0.08172273,
   0.1034999,
   0.4518594};
   grae = new TGraphAsymmErrors(19,Graph1_fx3083,Graph1_fy3083,Graph1_felx3083,Graph1_fehx3083,Graph1_fely3083,Graph1_fehy3083);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1307530793083 = new TH1F("Graph_Graph_Graph_Graph1307530793083","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1307530793083->SetMinimum(0.6089864);
   Graph_Graph_Graph_Graph1307530793083->SetMaximum(2.072464);
   Graph_Graph_Graph_Graph1307530793083->SetDirectory(0);
   Graph_Graph_Graph_Graph1307530793083->SetStats(0);
   Graph_Graph_Graph_Graph1307530793083->SetLineStyle(0);
   Graph_Graph_Graph_Graph1307530793083->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1307530793083);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__142 = new TH1F("hframe_copy__142","",1000,0,1.01);
   hframe_copy__142->SetMinimum(0.3);
   hframe_copy__142->SetMaximum(1.7);
   hframe_copy__142->SetDirectory(0);
   hframe_copy__142->SetStats(0);
   hframe_copy__142->SetLineStyle(0);
   hframe_copy__142->SetMarkerStyle(20);
   hframe_copy__142->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__142->GetXaxis()->SetLabelFont(43);
   hframe_copy__142->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__142->GetXaxis()->SetLabelSize(27);
   hframe_copy__142->GetXaxis()->SetTitleSize(33);
   hframe_copy__142->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__142->GetXaxis()->SetTitleFont(43);
   hframe_copy__142->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__142->GetYaxis()->SetNdivisions(505);
   hframe_copy__142->GetYaxis()->SetLabelFont(43);
   hframe_copy__142->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__142->GetYaxis()->SetLabelSize(21);
   hframe_copy__142->GetYaxis()->SetTitleSize(33);
   hframe_copy__142->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__142->GetYaxis()->SetTitleFont(43);
   hframe_copy__142->GetZaxis()->SetLabelFont(43);
   hframe_copy__142->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__142->GetZaxis()->SetLabelSize(27);
   hframe_copy__142->GetZaxis()->SetTitleSize(33);
   hframe_copy__142->GetZaxis()->SetTitleOffset(1);
   hframe_copy__142->GetZaxis()->SetTitleFont(43);
   hframe_copy__142->Draw("sameaxis");
   MVAOutputM500_2->Modified();
   MVAOutputM500->cd();
  
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
   MVAOutputM500->cd();
  
// ------------>Primitives in pad: MVAOutputM500_1
   TPad *MVAOutputM500_1 = new TPad("MVAOutputM500_1", "MVAOutputM500_1",0,0.2897959,1,1);
   MVAOutputM500_1->Draw();
   MVAOutputM500_1->cd();
   MVAOutputM500_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM500_1->SetFillColor(0);
   MVAOutputM500_1->SetFillStyle(4000);
   MVAOutputM500_1->SetBorderMode(0);
   MVAOutputM500_1->SetBorderSize(2);
   MVAOutputM500_1->SetLogy();
   MVAOutputM500_1->SetTickx(1);
   MVAOutputM500_1->SetTicky(1);
   MVAOutputM500_1->SetLeftMargin(0.16);
   MVAOutputM500_1->SetRightMargin(0.05);
   MVAOutputM500_1->SetTopMargin(0.06);
   MVAOutputM500_1->SetBottomMargin(0.02);
   MVAOutputM500_1->SetFrameFillStyle(0);
   MVAOutputM500_1->SetFrameBorderMode(0);
   MVAOutputM500_1->SetFrameFillStyle(0);
   MVAOutputM500_1->SetFrameBorderMode(0);
   
   TH1F *hframe__143 = new TH1F("hframe__143","",1000,0,1.01);
   hframe__143->SetMinimum(0.01);
   hframe__143->SetMaximum(500000);
   hframe__143->SetDirectory(0);
   hframe__143->SetStats(0);
   hframe__143->SetLineStyle(0);
   hframe__143->SetMarkerStyle(20);
   hframe__143->GetXaxis()->SetLabelFont(43);
   hframe__143->GetXaxis()->SetLabelOffset(0.007);
   hframe__143->GetXaxis()->SetLabelSize(0);
   hframe__143->GetXaxis()->SetTitleSize(0);
   hframe__143->GetXaxis()->SetTitleOffset(0.9);
   hframe__143->GetXaxis()->SetTitleFont(43);
   hframe__143->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__143->GetYaxis()->SetLabelFont(43);
   hframe__143->GetYaxis()->SetLabelOffset(0.007);
   hframe__143->GetYaxis()->SetLabelSize(27);
   hframe__143->GetYaxis()->SetTitleSize(33);
   hframe__143->GetYaxis()->SetTitleOffset(1.5625);
   hframe__143->GetYaxis()->SetTitleFont(43);
   hframe__143->GetZaxis()->SetLabelFont(43);
   hframe__143->GetZaxis()->SetLabelOffset(0.007);
   hframe__143->GetZaxis()->SetLabelSize(27);
   hframe__143->GetZaxis()->SetTitleSize(33);
   hframe__143->GetZaxis()->SetTitleOffset(1);
   hframe__143->GetZaxis()->SetTitleFont(43);
   hframe__143->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis121[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_19_stack_20_stack_21 = new TH1F("StackedMCstackHist_stack_19_stack_20_stack_21","StackedMCstackHist",19, xAxis121);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMinimum(0.05098034);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMaximum(31602.19);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetDirectory(0);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetStats(0);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetLineStyle(0);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMarkerStyle(20);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_19_stack_20_stack_21);
   
   Double_t xAxis122[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM500Inclusive",19, xAxis122);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,77.89616);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,192.9405);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,206.7453);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,189.3094);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,297.929);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,146.6538);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,139.2194);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,179.8904);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,110.7705);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,114.4546);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,118.476);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,93.59158);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,51.72265);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,92.00402);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,64.09192);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,49.83649);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,52.52414);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,28.97043);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.3559698);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,11.27597);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,37.10154);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,41.72225);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,27.62744);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,58.21455);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,28.51104);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,22.37777);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,38.58382);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,18.98498);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,20.41586);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,23.14318);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,20.90996);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,14.89946);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,32.67309);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,14.23229);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,10.91303);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,12.78184);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,11.1254);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.1590649);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(351.8736);
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
   Double_t xAxis123[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM500Inclusive",19, xAxis123);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1025.056);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1959.884);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2485.305);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2690.679);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2593.758);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2514.01);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2184.621);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1955.682);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1658.384);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1328.239);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1192.708);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1127.453);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,957.2738);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,850.8053);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,756.1011);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,543.0485);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,311.6146);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,154.1014);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,13.55217);
   TT_stack_2_stack_2_stack_2->SetBinError(1,25.1934);
   TT_stack_2_stack_2_stack_2->SetBinError(2,48.68286);
   TT_stack_2_stack_2_stack_2->SetBinError(3,55.25476);
   TT_stack_2_stack_2_stack_2->SetBinError(4,57.09635);
   TT_stack_2_stack_2_stack_2->SetBinError(5,56.11868);
   TT_stack_2_stack_2_stack_2->SetBinError(6,55.61138);
   TT_stack_2_stack_2_stack_2->SetBinError(7,51.90769);
   TT_stack_2_stack_2_stack_2->SetBinError(8,49.15318);
   TT_stack_2_stack_2_stack_2->SetBinError(9,44.88589);
   TT_stack_2_stack_2_stack_2->SetBinError(10,40.59927);
   TT_stack_2_stack_2_stack_2->SetBinError(11,38.35343);
   TT_stack_2_stack_2_stack_2->SetBinError(12,37.24065);
   TT_stack_2_stack_2_stack_2->SetBinError(13,34.30777);
   TT_stack_2_stack_2_stack_2->SetBinError(14,32.47299);
   TT_stack_2_stack_2_stack_2->SetBinError(15,30.77887);
   TT_stack_2_stack_2_stack_2->SetBinError(16,25.85139);
   TT_stack_2_stack_2_stack_2->SetBinError(17,19.84693);
   TT_stack_2_stack_2_stack_2->SetBinError(18,14.11486);
   TT_stack_2_stack_2_stack_2->SetBinError(19,4.130931);
   TT_stack_2_stack_2_stack_2->SetEntries(21859.21);
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
   Double_t xAxis124[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM500Inclusive",19, xAxis124);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,5683.701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,11064.79);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,13001.79);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,12278.06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,10682.24);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,13216.22);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,9981.613);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,9373.847);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,7465.336);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,7508.661);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,5674.476);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,6083.901);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,4870.421);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,6225.245);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4683.252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3447.933);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2741.136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1374.854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,132.8908);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,353.8549);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,702.3307);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,753.2037);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,747.9034);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,700.223);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,761.0913);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,672.0217);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,646.4358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,579.7959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,575.5598);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,502.7283);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,517.1146);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,465.0394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,512.8424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,449.902);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,385.3356);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,343.6691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,241.4256);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,69.72148);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3120.34);
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
   Double_t xAxis125[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__144 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__144","h_SR_MVAOutputM500Inclusive",19, xAxis125);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(1,8.306693);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(2,-0.1249901);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(3,14.00962);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(4,6.969699);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(5,12.28036);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(6,4.607625);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(7,17.00477);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(8,8.542658);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(9,9.609259);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(10,10.03554);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(11,4.140263);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(12,6.369262);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(13,5.665688);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(14,0.09564118);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(15,2.299765);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(16,-0.9681799);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(17,3.131401);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(18,-1.20466);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(1,3.45253);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(2,4.757637);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(3,5.613345);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(4,5.514348);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(5,4.964725);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(6,4.95705);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(7,4.959963);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(8,5.281509);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(9,4.153824);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(10,3.977811);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(11,3.750432);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(12,3.815173);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(13,3.724826);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(14,3.090798);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(15,3.017551);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(16,2.009345);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(17,2.403522);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(18,1.561263);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetEntries(40.27302);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3084[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3084[19] = {
   6786.653,
   13217.62,
   15693.84,
   15158.05,
   13573.93,
   15876.88,
   12305.45,
   11509.42,
   9234.491,
   8951.354,
   6985.659,
   7304.946,
   5879.417,
   7168.054,
   5503.445,
   4040.818,
   3105.275,
   1557.926,
   146.799};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3084[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3084[19] = {
   354.9298,
   704.9929,
   756.3793,
   750.5882,
   704.8762,
   763.6527,
   674.3948,
   649.449,
   581.8406,
   577.351,
   504.7201,
   518.8753,
   466.5412,
   514.9071,
   451.1782,
   386.3559,
   344.4789,
   242.0937,
   69.84393};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3084[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3084[19] = {
   354.9298,
   704.9929,
   756.3793,
   750.5882,
   704.8762,
   763.6527,
   674.3948,
   649.449,
   581.8406,
   577.351,
   504.7201,
   518.8753,
   466.5412,
   514.9071,
   451.1782,
   386.3559,
   344.4789,
   242.0937,
   69.84393};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3084,BkgSum-SR-Inclusive_sum_errors_fy3084,BkgSum-SR-Inclusive_sum_errors_felx3084,BkgSum-SR-Inclusive_sum_errors_fehx3084,BkgSum-SR-Inclusive_sum_errors_fely3084,BkgSum-SR-Inclusive_sum_errors_fehy3084);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1228;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMinimum(69.25953);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMaximum(18296.89);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors307630803084);
   
   grae->Draw("e2 ");
   Double_t xAxis126[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__145 = new TH1F("Data__145","h_SR_MVAOutputM500Inclusive",19, xAxis126);
   Data__145->SetBinContent(1,6030);
   Data__145->SetBinContent(2,11300);
   Data__145->SetBinContent(3,13180);
   Data__145->SetBinContent(4,13700);
   Data__145->SetBinContent(5,15120);
   Data__145->SetBinContent(6,15160);
   Data__145->SetBinContent(7,14900);
   Data__145->SetBinContent(8,11460);
   Data__145->SetBinContent(9,10920);
   Data__145->SetBinContent(10,8680);
   Data__145->SetBinContent(11,8200);
   Data__145->SetBinContent(12,8040);
   Data__145->SetBinContent(13,7940);
   Data__145->SetBinContent(14,7300);
   Data__145->SetBinContent(15,5860);
   Data__145->SetBinContent(16,5040);
   Data__145->SetBinContent(17,3220);
   Data__145->SetBinContent(18,1300);
   Data__145->SetBinContent(19,220);
   Data__145->SetBinError(1,245.5606);
   Data__145->SetBinError(2,475.3946);
   Data__145->SetBinError(3,513.4199);
   Data__145->SetBinError(4,523.4501);
   Data__145->SetBinError(5,549.9091);
   Data__145->SetBinError(6,550.636);
   Data__145->SetBinError(7,545.8938);
   Data__145->SetBinError(8,478.7484);
   Data__145->SetBinError(9,467.3329);
   Data__145->SetBinError(10,416.6533);
   Data__145->SetBinError(11,404.9691);
   Data__145->SetBinError(12,400.9988);
   Data__145->SetBinError(13,398.4972);
   Data__145->SetBinError(14,382.0995);
   Data__145->SetBinError(15,342.3449);
   Data__145->SetBinError(16,317.4902);
   Data__145->SetBinError(17,253.7716);
   Data__145->SetBinError(18,161.2452);
   Data__145->SetBinError(19,66.3325);
   Data__145->SetEntries(8532.012);
   Data__145->SetDirectory(0);
   Data__145->SetFillStyle(3001);
   Data__145->SetLineWidth(2);
   Data__145->SetMarkerStyle(20);
   Data__145->SetMarkerSize(1.2);
   Data__145->GetXaxis()->SetRange(1,200);
   Data__145->GetXaxis()->SetLabelFont(42);
   Data__145->GetXaxis()->SetTitleOffset(1);
   Data__145->GetXaxis()->SetTitleFont(42);
   Data__145->GetYaxis()->SetLabelFont(42);
   Data__145->GetYaxis()->SetTitleFont(42);
   Data__145->GetZaxis()->SetLabelFont(42);
   Data__145->GetZaxis()->SetTitleOffset(1);
   Data__145->GetZaxis()->SetTitleFont(42);
   Data__145->Draw("EP same");
   
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

   ci = 1228;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1228;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__146 = new TH1F("hframe_copy__146","",1000,0,1.01);
   hframe_copy__146->SetMinimum(0.01);
   hframe_copy__146->SetMaximum(500000);
   hframe_copy__146->SetDirectory(0);
   hframe_copy__146->SetStats(0);
   hframe_copy__146->SetLineStyle(0);
   hframe_copy__146->SetMarkerStyle(20);
   hframe_copy__146->GetXaxis()->SetLabelFont(43);
   hframe_copy__146->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__146->GetXaxis()->SetLabelSize(0);
   hframe_copy__146->GetXaxis()->SetTitleSize(0);
   hframe_copy__146->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__146->GetXaxis()->SetTitleFont(43);
   hframe_copy__146->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__146->GetYaxis()->SetLabelFont(43);
   hframe_copy__146->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__146->GetYaxis()->SetLabelSize(27);
   hframe_copy__146->GetYaxis()->SetTitleSize(33);
   hframe_copy__146->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__146->GetYaxis()->SetTitleFont(43);
   hframe_copy__146->GetZaxis()->SetLabelFont(43);
   hframe_copy__146->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__146->GetZaxis()->SetLabelSize(27);
   hframe_copy__146->GetZaxis()->SetTitleSize(33);
   hframe_copy__146->GetZaxis()->SetTitleOffset(1);
   hframe_copy__146->GetZaxis()->SetTitleFont(43);
   hframe_copy__146->Draw("sameaxis");
   
   TH1F *hframe_copy__147 = new TH1F("hframe_copy__147","",1000,0,1.01);
   hframe_copy__147->SetMinimum(0.01);
   hframe_copy__147->SetMaximum(500000);
   hframe_copy__147->SetDirectory(0);
   hframe_copy__147->SetStats(0);
   hframe_copy__147->SetLineStyle(0);
   hframe_copy__147->SetMarkerStyle(20);
   hframe_copy__147->GetXaxis()->SetLabelFont(43);
   hframe_copy__147->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__147->GetXaxis()->SetLabelSize(0);
   hframe_copy__147->GetXaxis()->SetTitleSize(0);
   hframe_copy__147->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__147->GetXaxis()->SetTitleFont(43);
   hframe_copy__147->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__147->GetYaxis()->SetLabelFont(43);
   hframe_copy__147->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__147->GetYaxis()->SetLabelSize(27);
   hframe_copy__147->GetYaxis()->SetTitleSize(33);
   hframe_copy__147->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__147->GetYaxis()->SetTitleFont(43);
   hframe_copy__147->GetZaxis()->SetLabelFont(43);
   hframe_copy__147->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__147->GetZaxis()->SetLabelSize(27);
   hframe_copy__147->GetZaxis()->SetTitleSize(33);
   hframe_copy__147->GetZaxis()->SetTitleOffset(1);
   hframe_copy__147->GetZaxis()->SetTitleFont(43);
   hframe_copy__147->Draw("sameaxis");
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
   MVAOutputM500_1->Modified();
   MVAOutputM500->cd();
   MVAOutputM500->Modified();
   MVAOutputM500->cd();
   MVAOutputM500->SetSelected(MVAOutputM500);
}
