void MVAOutputM700()
{
//=========Macro generated from canvas: MVAOutputM700/MVAOutputM700
//=========  (Fri Nov 18 13:27:52 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM700 = new TCanvas("MVAOutputM700", "MVAOutputM700",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM700->SetHighLightColor(2);
   MVAOutputM700->Range(0,0,1,1);
   MVAOutputM700->SetFillColor(0);
   MVAOutputM700->SetBorderMode(0);
   MVAOutputM700->SetBorderSize(2);
   MVAOutputM700->SetTickx(1);
   MVAOutputM700->SetTicky(1);
   MVAOutputM700->SetLeftMargin(0.16);
   MVAOutputM700->SetRightMargin(0.05);
   MVAOutputM700->SetTopMargin(0.06);
   MVAOutputM700->SetBottomMargin(0.13);
   MVAOutputM700->SetFrameFillStyle(0);
   MVAOutputM700->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM700_2
   TPad *MVAOutputM700_2 = new TPad("MVAOutputM700_2", "MVAOutputM700_2",0,0,1,0.304);
   MVAOutputM700_2->Draw();
   MVAOutputM700_2->cd();
   MVAOutputM700_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM700_2->SetFillColor(0);
   MVAOutputM700_2->SetFillStyle(4000);
   MVAOutputM700_2->SetBorderMode(0);
   MVAOutputM700_2->SetBorderSize(2);
   MVAOutputM700_2->SetTickx(1);
   MVAOutputM700_2->SetTicky(1);
   MVAOutputM700_2->SetLeftMargin(0.16);
   MVAOutputM700_2->SetRightMargin(0.05);
   MVAOutputM700_2->SetTopMargin(0);
   MVAOutputM700_2->SetBottomMargin(0.3421053);
   MVAOutputM700_2->SetFrameFillStyle(0);
   MVAOutputM700_2->SetFrameBorderMode(0);
   MVAOutputM700_2->SetFrameFillStyle(0);
   MVAOutputM700_2->SetFrameBorderMode(0);
   
   TH1F *hframe__183 = new TH1F("hframe__183","",1000,0,1.01);
   hframe__183->SetMinimum(0.3);
   hframe__183->SetMaximum(1.7);
   hframe__183->SetDirectory(0);
   hframe__183->SetStats(0);
   hframe__183->SetLineStyle(0);
   hframe__183->SetMarkerStyle(20);
   hframe__183->GetXaxis()->SetTitle("DNN Output");
   hframe__183->GetXaxis()->SetLabelFont(43);
   hframe__183->GetXaxis()->SetLabelOffset(0.007);
   hframe__183->GetXaxis()->SetLabelSize(27);
   hframe__183->GetXaxis()->SetTitleSize(33);
   hframe__183->GetXaxis()->SetTitleOffset(2.960526);
   hframe__183->GetXaxis()->SetTitleFont(43);
   hframe__183->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__183->GetYaxis()->SetNdivisions(505);
   hframe__183->GetYaxis()->SetLabelFont(43);
   hframe__183->GetYaxis()->SetLabelOffset(0.007);
   hframe__183->GetYaxis()->SetLabelSize(21);
   hframe__183->GetYaxis()->SetTitleSize(33);
   hframe__183->GetYaxis()->SetTitleOffset(1.5625);
   hframe__183->GetYaxis()->SetTitleFont(43);
   hframe__183->GetZaxis()->SetLabelFont(43);
   hframe__183->GetZaxis()->SetLabelOffset(0.007);
   hframe__183->GetZaxis()->SetLabelSize(27);
   hframe__183->GetZaxis()->SetTitleSize(33);
   hframe__183->GetZaxis()->SetTitleOffset(1);
   hframe__183->GetZaxis()->SetTitleFont(43);
   hframe__183->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3105[20] = {
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
   Double_t BackgroundStatSystError_fy3105[20] = {
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
   Double_t BackgroundStatSystError_felx3105[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3105[20] = {
   0.03519442,
   0.02832585,
   0.02606215,
   0.02654984,
   0.02814652,
   0.02889996,
   0.03118011,
   0.03265803,
   0.03458731,
   0.03787421,
   0.0380824,
   0.03927486,
   0.04290655,
   0.04504231,
   0.04696377,
   0.04747976,
   0.04943862,
   0.05005502,
   0.06127294,
   0.1314735};
   Double_t BackgroundStatSystError_fehx3105[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3105[20] = {
   0.03519442,
   0.02832585,
   0.02606215,
   0.02654984,
   0.02814652,
   0.02889996,
   0.03118011,
   0.03265803,
   0.03458731,
   0.03787421,
   0.0380824,
   0.03927486,
   0.04290655,
   0.04504231,
   0.04696377,
   0.04747976,
   0.04943862,
   0.05005502,
   0.06127294,
   0.1314735};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3105,BackgroundStatSystError_fy3105,BackgroundStatSystError_felx3105,BackgroundStatSystError_fehx3105,BackgroundStatSystError_fely3105,BackgroundStatSystError_fehy3105);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1236;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError309731013105 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError309731013105","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMinimum(0.8422318);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMaximum(1.157768);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError309731013105);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3106[20] = {
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
   Double_t BackgroundStatError_fy3106[20] = {
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
   Double_t BackgroundStatError_felx3106[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3106[20] = {
   0.03519442,
   0.02832585,
   0.02606215,
   0.02654984,
   0.02814652,
   0.02889996,
   0.03118011,
   0.03265803,
   0.03458731,
   0.03787421,
   0.0380824,
   0.03927486,
   0.04290655,
   0.04504231,
   0.04696377,
   0.04747976,
   0.04943862,
   0.05005502,
   0.06127294,
   0.1314735};
   Double_t BackgroundStatError_fehx3106[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3106[20] = {
   0.03519442,
   0.02832585,
   0.02606215,
   0.02654984,
   0.02814652,
   0.02889996,
   0.03118011,
   0.03265803,
   0.03458731,
   0.03787421,
   0.0380824,
   0.03927486,
   0.04290655,
   0.04504231,
   0.04696377,
   0.04747976,
   0.04943862,
   0.05005502,
   0.06127294,
   0.1314735};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3106,BackgroundStatError_fy3106,BackgroundStatError_felx3106,BackgroundStatError_fehx3106,BackgroundStatError_fely3106,BackgroundStatError_fehy3106);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1235;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError309831023106 = new TH1F("Graph_Graph_Graph_BackgroundStatError309831023106","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMinimum(0.8422318);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMaximum(1.157768);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError309831023106);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx27[2] = {
   0,
   1.01};
   Double_t Graph0_fy27[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx27,Graph0_fy27);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0252627 = new TH1F("Graph_Graph_Graph_Graph0252627","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0252627->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0252627->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0252627->SetDirectory(0);
   Graph_Graph_Graph_Graph0252627->SetStats(0);
   Graph_Graph_Graph_Graph0252627->SetLineStyle(0);
   Graph_Graph_Graph_Graph0252627->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0252627);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3107[20] = {
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
   Double_t Graph1_fy3107[20] = {
   0.8860912,
   0.9129327,
   0.950533,
   0.9959966,
   1.061201,
   0.9363341,
   1.049327,
   0.973859,
   1.108339,
   1.113617,
   0.9795626,
   0.9374002,
   1.033685,
   1.214828,
   1.041336,
   1.065548,
   1.023404,
   0.9261212,
   1.028457,
   1.271967};
   Double_t Graph1_felx3107[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3107[20] = {
   0.0337085,
   0.0293125,
   0.02809082,
   0.02973455,
   0.0325485,
   0.03026738,
   0.0353728,
   0.03478068,
   0.03983841,
   0.04302278,
   0.04039648,
   0.0408338,
   0.04568285,
   0.0524237,
   0.0503938,
   0.05193163,
   0.05298985,
   0.05044904,
   0.0653071,
   0.1577681};
   Double_t Graph1_fehx3107[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3107[20] = {
   0.0337085,
   0.0293125,
   0.02809082,
   0.02973455,
   0.0325485,
   0.03026738,
   0.0353728,
   0.03478068,
   0.03983841,
   0.04302278,
   0.04039648,
   0.0408338,
   0.04568285,
   0.0524237,
   0.0503938,
   0.05193163,
   0.05298985,
   0.05044904,
   0.0653071,
   0.1577681};
   grae = new TGraphAsymmErrors(20,Graph1_fx3107,Graph1_fy3107,Graph1_felx3107,Graph1_fehx3107,Graph1_fely3107,Graph1_fehy3107);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1309931033107 = new TH1F("Graph_Graph_Graph_Graph1309931033107","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1309931033107->SetMinimum(0.7946475);
   Graph_Graph_Graph_Graph1309931033107->SetMaximum(1.48747);
   Graph_Graph_Graph_Graph1309931033107->SetDirectory(0);
   Graph_Graph_Graph_Graph1309931033107->SetStats(0);
   Graph_Graph_Graph_Graph1309931033107->SetLineStyle(0);
   Graph_Graph_Graph_Graph1309931033107->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1309931033107);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__184 = new TH1F("hframe_copy__184","",1000,0,1.01);
   hframe_copy__184->SetMinimum(0.3);
   hframe_copy__184->SetMaximum(1.7);
   hframe_copy__184->SetDirectory(0);
   hframe_copy__184->SetStats(0);
   hframe_copy__184->SetLineStyle(0);
   hframe_copy__184->SetMarkerStyle(20);
   hframe_copy__184->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__184->GetXaxis()->SetLabelFont(43);
   hframe_copy__184->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__184->GetXaxis()->SetLabelSize(27);
   hframe_copy__184->GetXaxis()->SetTitleSize(33);
   hframe_copy__184->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__184->GetXaxis()->SetTitleFont(43);
   hframe_copy__184->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__184->GetYaxis()->SetNdivisions(505);
   hframe_copy__184->GetYaxis()->SetLabelFont(43);
   hframe_copy__184->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__184->GetYaxis()->SetLabelSize(21);
   hframe_copy__184->GetYaxis()->SetTitleSize(33);
   hframe_copy__184->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__184->GetYaxis()->SetTitleFont(43);
   hframe_copy__184->GetZaxis()->SetLabelFont(43);
   hframe_copy__184->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__184->GetZaxis()->SetLabelSize(27);
   hframe_copy__184->GetZaxis()->SetTitleSize(33);
   hframe_copy__184->GetZaxis()->SetTitleOffset(1);
   hframe_copy__184->GetZaxis()->SetTitleFont(43);
   hframe_copy__184->Draw("sameaxis");
   MVAOutputM700_2->Modified();
   MVAOutputM700->cd();
  
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
   MVAOutputM700->cd();
  
// ------------>Primitives in pad: MVAOutputM700_1
   TPad *MVAOutputM700_1 = new TPad("MVAOutputM700_1", "MVAOutputM700_1",0,0.2897959,1,1);
   MVAOutputM700_1->Draw();
   MVAOutputM700_1->cd();
   MVAOutputM700_1->Range(-0.204557,-2.157351,1.073924,5.710193);
   MVAOutputM700_1->SetFillColor(0);
   MVAOutputM700_1->SetFillStyle(4000);
   MVAOutputM700_1->SetBorderMode(0);
   MVAOutputM700_1->SetBorderSize(2);
   MVAOutputM700_1->SetLogy();
   MVAOutputM700_1->SetTickx(1);
   MVAOutputM700_1->SetTicky(1);
   MVAOutputM700_1->SetLeftMargin(0.16);
   MVAOutputM700_1->SetRightMargin(0.05);
   MVAOutputM700_1->SetTopMargin(0.06);
   MVAOutputM700_1->SetBottomMargin(0.02);
   MVAOutputM700_1->SetFrameFillStyle(0);
   MVAOutputM700_1->SetFrameBorderMode(0);
   MVAOutputM700_1->SetFrameFillStyle(0);
   MVAOutputM700_1->SetFrameBorderMode(0);
   
   TH1F *hframe__185 = new TH1F("hframe__185","",1000,0,1.01);
   hframe__185->SetMinimum(0.01);
   hframe__185->SetMaximum(173037.4);
   hframe__185->SetDirectory(0);
   hframe__185->SetStats(0);
   hframe__185->SetLineStyle(0);
   hframe__185->SetMarkerStyle(20);
   hframe__185->GetXaxis()->SetLabelFont(43);
   hframe__185->GetXaxis()->SetLabelOffset(0.007);
   hframe__185->GetXaxis()->SetLabelSize(0);
   hframe__185->GetXaxis()->SetTitleSize(0);
   hframe__185->GetXaxis()->SetTitleOffset(0.9);
   hframe__185->GetXaxis()->SetTitleFont(43);
   hframe__185->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__185->GetYaxis()->SetLabelFont(43);
   hframe__185->GetYaxis()->SetLabelOffset(0.007);
   hframe__185->GetYaxis()->SetLabelSize(27);
   hframe__185->GetYaxis()->SetTitleSize(33);
   hframe__185->GetYaxis()->SetTitleOffset(1.5625);
   hframe__185->GetYaxis()->SetTitleFont(43);
   hframe__185->GetZaxis()->SetLabelFont(43);
   hframe__185->GetZaxis()->SetLabelOffset(0.007);
   hframe__185->GetZaxis()->SetLabelSize(27);
   hframe__185->GetZaxis()->SetTitleSize(33);
   hframe__185->GetZaxis()->SetTitleOffset(1);
   hframe__185->GetZaxis()->SetTitleFont(43);
   hframe__185->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis157[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_25_stack_26_stack_27 = new TH1F("StackedMCstackHist_stack_25_stack_26_stack_27","StackedMCstackHist",20, xAxis157);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMinimum(5.049409);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMaximum(39793.65);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetDirectory(0);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetStats(0);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetLineStyle(0);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMarkerStyle(20);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_25_stack_26_stack_27);
   
   Double_t xAxis158[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM700Inclusive",20, xAxis158);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,327.7001);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,362.5308);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,527.2687);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,447.1619);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,455.9602);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,406.1964);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,388.3661);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,343.8979);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,342.188);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,334.0718);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,290.2976);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,215.7592);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,231.9344);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,143.1402);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,187.617);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,229.1114);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,198.0691);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,150.2209);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,104.4989);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,23.26761);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,36.70458);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,37.54404);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,44.66345);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,42.40276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,61.31531);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,41.3268);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,37.12593);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,37.61805);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,37.13461);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,45.45022);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,46.95903);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,30.42868);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,31.24982);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,24.36487);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,24.53642);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,29.89843);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,27.28087);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,22.60476);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,18.24929);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,8.515561);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1248.243);
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
   Double_t xAxis159[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM700Inclusive",20, xAxis159);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,4548.692);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,7260.499);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,7949.787);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,7550.207);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,6869.499);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,6132.533);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5613.168);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,4974.572);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,4409.35);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,3807.803);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3467.857);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3166.294);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2697.37);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2333.914);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2188.952);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1958.768);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1707.838);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1412.841);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,919.934);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,219.3501);
   TT_stack_2_stack_2_stack_2->SetBinError(1,73.45412);
   TT_stack_2_stack_2_stack_2->SetBinError(2,92.00747);
   TT_stack_2_stack_2_stack_2->SetBinError(3,96.36739);
   TT_stack_2_stack_2_stack_2->SetBinError(4,94.36509);
   TT_stack_2_stack_2_stack_2->SetBinError(5,90.23453);
   TT_stack_2_stack_2_stack_2->SetBinError(6,85.03032);
   TT_stack_2_stack_2_stack_2->SetBinError(7,81.4892);
   TT_stack_2_stack_2_stack_2->SetBinError(8,76.72673);
   TT_stack_2_stack_2_stack_2->SetBinError(9,71.95572);
   TT_stack_2_stack_2_stack_2->SetBinError(10,66.98057);
   TT_stack_2_stack_2_stack_2->SetBinError(11,63.79378);
   TT_stack_2_stack_2_stack_2->SetBinError(12,60.8804);
   TT_stack_2_stack_2_stack_2->SetBinError(13,56.5071);
   TT_stack_2_stack_2_stack_2->SetBinError(14,52.84888);
   TT_stack_2_stack_2_stack_2->SetBinError(15,51.24562);
   TT_stack_2_stack_2_stack_2->SetBinError(16,48.89831);
   TT_stack_2_stack_2_stack_2->SetBinError(17,45.55202);
   TT_stack_2_stack_2_stack_2->SetBinError(18,41.30358);
   TT_stack_2_stack_2_stack_2->SetBinError(19,33.52958);
   TT_stack_2_stack_2_stack_2->SetBinError(20,16.38858);
   TT_stack_2_stack_2_stack_2->SetEntries(67019.12);
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
   Double_t xAxis160[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM700Inclusive",20, xAxis160);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,10720.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,13627.17);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,15614.69);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,14532.83);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,12708.45);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,13902.69);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,10771.13);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,10782.42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,9215.312);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,7890.986);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,8247.204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,7861.811);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,6977.002);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,6363.703);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,5824.432);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,5714.158);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,5383.491);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,5714.603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,3798.325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,779.4213);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,542.7363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,593.6706);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,618.8338);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,589.1591);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,553.2306);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,583.1424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,515.2498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,518.8334);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,476.2411);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,448.489);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,450.2783);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,436.3247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,420.112);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,393.9328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,380.9361);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,370.7833);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,356.4449);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,361.228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,293.0284);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,133.0958);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7148.648);
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
   Double_t xAxis161[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__186 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__186","h_SR_MVAOutputM700Inclusive",20, xAxis161);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(1,6.655571);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(2,1.544143);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(3,16.16756);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(4,22.11211);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(5,28.94773);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(6,12.40936);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(7,19.04028);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(8,23.69597);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(9,13.82615);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(10,38.33789);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(11,26.79481);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(12,29.3244);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(13,32.31933);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(14,34.44064);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(15,29.28186);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(16,26.71534);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(17,29.58917);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(18,20.42885);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(19,7.663353);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(20,5.92192);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(1,5.30761);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(2,4.883354);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(3,6.391963);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(4,6.658676);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(5,7.245952);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(6,7.677947);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(7,8.060209);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(8,7.694631);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(9,8.181523);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(10,8.802625);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(11,8.792742);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(12,8.990004);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(13,8.672864);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(14,8.863199);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(15,9.290827);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(16,9.491946);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(17,9.740136);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(18,9.24813);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(19,7.219875);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(20,3.706439);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetEntries(144.4332);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3108[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3108[20] = {
   15596.59,
   21250.2,
   24091.75,
   22530.2,
   20033.91,
   20441.42,
   16772.66,
   16100.89,
   13966.85,
   12032.86,
   12005.36,
   11243.86,
   9906.308,
   8840.757,
   8201.001,
   7902.038,
   7289.398,
   7277.665,
   4822.758,
   1022.039};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3108[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3108[20] = {
   548.9129,
   601.9299,
   627.8827,
   598.1732,
   563.8847,
   590.7564,
   522.9734,
   525.8234,
   483.0757,
   455.7351,
   457.1929,
   441.6012,
   425.0455,
   398.2081,
   385.1499,
   375.1869,
   360.3778,
   364.2837,
   295.5045,
   134.3711};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3108[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3108[20] = {
   548.9129,
   601.9299,
   627.8827,
   598.1732,
   563.8847,
   590.7564,
   522.9734,
   525.8234,
   483.0757,
   455.7351,
   457.1929,
   441.6012,
   425.0455,
   398.2081,
   385.1499,
   375.1869,
   360.3778,
   364.2837,
   295.5045,
   134.3711};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3108,BkgSum-SR-Inclusive_sum_errors_fy3108,BkgSum-SR-Inclusive_sum_errors_felx3108,BkgSum-SR-Inclusive_sum_errors_fehx3108,BkgSum-SR-Inclusive_sum_errors_fely3108,BkgSum-SR-Inclusive_sum_errors_fehy3108);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1234;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMinimum(798.9011);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMaximum(27102.82);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors310031043108);
   
   grae->Draw("e2 ");
   Double_t xAxis162[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__187 = new TH1F("Data__187","h_SR_MVAOutputM700Inclusive",20, xAxis162);
   Data__187->SetBinContent(1,13820);
   Data__187->SetBinContent(2,19400);
   Data__187->SetBinContent(3,22900);
   Data__187->SetBinContent(4,22440);
   Data__187->SetBinContent(5,21260);
   Data__187->SetBinContent(6,19140);
   Data__187->SetBinContent(7,17600);
   Data__187->SetBinContent(8,15680);
   Data__187->SetBinContent(9,15480);
   Data__187->SetBinContent(10,13400);
   Data__187->SetBinContent(11,11760);
   Data__187->SetBinContent(12,10540);
   Data__187->SetBinContent(13,10240);
   Data__187->SetBinContent(14,10740);
   Data__187->SetBinContent(15,8540);
   Data__187->SetBinContent(16,8420);
   Data__187->SetBinContent(17,7460);
   Data__187->SetBinContent(18,6740);
   Data__187->SetBinContent(19,4960);
   Data__187->SetBinContent(20,1300);
   Data__187->SetBinError(1,525.7376);
   Data__187->SetBinError(2,622.8965);
   Data__187->SetBinError(3,676.757);
   Data__187->SetBinError(4,669.9254);
   Data__187->SetBinError(5,652.0736);
   Data__187->SetBinError(6,618.7083);
   Data__187->SetBinError(7,593.2959);
   Data__187->SetBinError(8,560);
   Data__187->SetBinError(9,556.4171);
   Data__187->SetBinError(10,517.6872);
   Data__187->SetBinError(11,484.9742);
   Data__187->SetBinError(12,459.1296);
   Data__187->SetBinError(13,452.5483);
   Data__187->SetBinError(14,463.4652);
   Data__187->SetBinError(15,413.2796);
   Data__187->SetBinError(16,410.3657);
   Data__187->SetBinError(17,386.2642);
   Data__187->SetBinError(18,367.1512);
   Data__187->SetBinError(19,314.9603);
   Data__187->SetBinError(20,161.2452);
   Data__187->SetEntries(13091);
   Data__187->SetDirectory(0);
   Data__187->SetFillStyle(3001);
   Data__187->SetLineWidth(2);
   Data__187->SetMarkerStyle(20);
   Data__187->SetMarkerSize(1.2);
   Data__187->GetXaxis()->SetRange(1,200);
   Data__187->GetXaxis()->SetLabelFont(42);
   Data__187->GetXaxis()->SetTitleOffset(1);
   Data__187->GetXaxis()->SetTitleFont(42);
   Data__187->GetYaxis()->SetLabelFont(42);
   Data__187->GetYaxis()->SetTitleFont(42);
   Data__187->GetZaxis()->SetLabelFont(42);
   Data__187->GetZaxis()->SetTitleOffset(1);
   Data__187->GetZaxis()->SetTitleFont(42);
   Data__187->Draw("EP same");
   
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

   ci = 1234;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1234;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__188 = new TH1F("hframe_copy__188","",1000,0,1.01);
   hframe_copy__188->SetMinimum(0.01);
   hframe_copy__188->SetMaximum(173037.4);
   hframe_copy__188->SetDirectory(0);
   hframe_copy__188->SetStats(0);
   hframe_copy__188->SetLineStyle(0);
   hframe_copy__188->SetMarkerStyle(20);
   hframe_copy__188->GetXaxis()->SetLabelFont(43);
   hframe_copy__188->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__188->GetXaxis()->SetLabelSize(0);
   hframe_copy__188->GetXaxis()->SetTitleSize(0);
   hframe_copy__188->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__188->GetXaxis()->SetTitleFont(43);
   hframe_copy__188->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__188->GetYaxis()->SetLabelFont(43);
   hframe_copy__188->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__188->GetYaxis()->SetLabelSize(27);
   hframe_copy__188->GetYaxis()->SetTitleSize(33);
   hframe_copy__188->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__188->GetYaxis()->SetTitleFont(43);
   hframe_copy__188->GetZaxis()->SetLabelFont(43);
   hframe_copy__188->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__188->GetZaxis()->SetLabelSize(27);
   hframe_copy__188->GetZaxis()->SetTitleSize(33);
   hframe_copy__188->GetZaxis()->SetTitleOffset(1);
   hframe_copy__188->GetZaxis()->SetTitleFont(43);
   hframe_copy__188->Draw("sameaxis");
   
   TH1F *hframe_copy__189 = new TH1F("hframe_copy__189","",1000,0,1.01);
   hframe_copy__189->SetMinimum(0.01);
   hframe_copy__189->SetMaximum(173037.4);
   hframe_copy__189->SetDirectory(0);
   hframe_copy__189->SetStats(0);
   hframe_copy__189->SetLineStyle(0);
   hframe_copy__189->SetMarkerStyle(20);
   hframe_copy__189->GetXaxis()->SetLabelFont(43);
   hframe_copy__189->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__189->GetXaxis()->SetLabelSize(0);
   hframe_copy__189->GetXaxis()->SetTitleSize(0);
   hframe_copy__189->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__189->GetXaxis()->SetTitleFont(43);
   hframe_copy__189->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__189->GetYaxis()->SetLabelFont(43);
   hframe_copy__189->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__189->GetYaxis()->SetLabelSize(27);
   hframe_copy__189->GetYaxis()->SetTitleSize(33);
   hframe_copy__189->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__189->GetYaxis()->SetTitleFont(43);
   hframe_copy__189->GetZaxis()->SetLabelFont(43);
   hframe_copy__189->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__189->GetZaxis()->SetLabelSize(27);
   hframe_copy__189->GetZaxis()->SetTitleSize(33);
   hframe_copy__189->GetZaxis()->SetTitleOffset(1);
   hframe_copy__189->GetZaxis()->SetTitleFont(43);
   hframe_copy__189->Draw("sameaxis");
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
   MVAOutputM700_1->Modified();
   MVAOutputM700->cd();
   MVAOutputM700->Modified();
   MVAOutputM700->cd();
   MVAOutputM700->SetSelected(MVAOutputM700);
}
