void MVAOutputM1000()
{
//=========Macro generated from canvas: MVAOutputM1000/MVAOutputM1000
//=========  (Fri Nov 18 13:27:55 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM1000 = new TCanvas("MVAOutputM1000", "MVAOutputM1000",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM1000->SetHighLightColor(2);
   MVAOutputM1000->Range(0,0,1,1);
   MVAOutputM1000->SetFillColor(0);
   MVAOutputM1000->SetBorderMode(0);
   MVAOutputM1000->SetBorderSize(2);
   MVAOutputM1000->SetTickx(1);
   MVAOutputM1000->SetTicky(1);
   MVAOutputM1000->SetLeftMargin(0.16);
   MVAOutputM1000->SetRightMargin(0.05);
   MVAOutputM1000->SetTopMargin(0.06);
   MVAOutputM1000->SetBottomMargin(0.13);
   MVAOutputM1000->SetFrameFillStyle(0);
   MVAOutputM1000->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM1000_2
   TPad *MVAOutputM1000_2 = new TPad("MVAOutputM1000_2", "MVAOutputM1000_2",0,0,1,0.304);
   MVAOutputM1000_2->Draw();
   MVAOutputM1000_2->cd();
   MVAOutputM1000_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM1000_2->SetFillColor(0);
   MVAOutputM1000_2->SetFillStyle(4000);
   MVAOutputM1000_2->SetBorderMode(0);
   MVAOutputM1000_2->SetBorderSize(2);
   MVAOutputM1000_2->SetTickx(1);
   MVAOutputM1000_2->SetTicky(1);
   MVAOutputM1000_2->SetLeftMargin(0.16);
   MVAOutputM1000_2->SetRightMargin(0.05);
   MVAOutputM1000_2->SetTopMargin(0);
   MVAOutputM1000_2->SetBottomMargin(0.3421053);
   MVAOutputM1000_2->SetFrameFillStyle(0);
   MVAOutputM1000_2->SetFrameBorderMode(0);
   MVAOutputM1000_2->SetFrameFillStyle(0);
   MVAOutputM1000_2->SetFrameBorderMode(0);
   
   TH1F *hframe__225 = new TH1F("hframe__225","",1000,0,1.01);
   hframe__225->SetMinimum(0.3);
   hframe__225->SetMaximum(1.7);
   hframe__225->SetDirectory(0);
   hframe__225->SetStats(0);
   hframe__225->SetLineStyle(0);
   hframe__225->SetMarkerStyle(20);
   hframe__225->GetXaxis()->SetTitle("DNN Output");
   hframe__225->GetXaxis()->SetLabelFont(43);
   hframe__225->GetXaxis()->SetLabelOffset(0.007);
   hframe__225->GetXaxis()->SetLabelSize(27);
   hframe__225->GetXaxis()->SetTitleSize(33);
   hframe__225->GetXaxis()->SetTitleOffset(2.960526);
   hframe__225->GetXaxis()->SetTitleFont(43);
   hframe__225->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__225->GetYaxis()->SetNdivisions(505);
   hframe__225->GetYaxis()->SetLabelFont(43);
   hframe__225->GetYaxis()->SetLabelOffset(0.007);
   hframe__225->GetYaxis()->SetLabelSize(21);
   hframe__225->GetYaxis()->SetTitleSize(33);
   hframe__225->GetYaxis()->SetTitleOffset(1.5625);
   hframe__225->GetYaxis()->SetTitleFont(43);
   hframe__225->GetZaxis()->SetLabelFont(43);
   hframe__225->GetZaxis()->SetLabelOffset(0.007);
   hframe__225->GetZaxis()->SetLabelSize(27);
   hframe__225->GetZaxis()->SetTitleSize(33);
   hframe__225->GetZaxis()->SetTitleOffset(1);
   hframe__225->GetZaxis()->SetTitleFont(43);
   hframe__225->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3129[20] = {
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
   Double_t BackgroundStatSystError_fy3129[20] = {
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
   Double_t BackgroundStatSystError_felx3129[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3129[20] = {
   0.01547842,
   0.02120991,
   0.02687772,
   0.03056714,
   0.03433309,
   0.03769525,
   0.04117827,
   0.04405337,
   0.0459834,
   0.04739939,
   0.05229297,
   0.05671982,
   0.05768218,
   0.05880226,
   0.05942711,
   0.06332741,
   0.0585957,
   0.05710981,
   0.05897784,
   0.07665932};
   Double_t BackgroundStatSystError_fehx3129[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3129[20] = {
   0.01547842,
   0.02120991,
   0.02687772,
   0.03056714,
   0.03433309,
   0.03769525,
   0.04117827,
   0.04405337,
   0.0459834,
   0.04739939,
   0.05229297,
   0.05671982,
   0.05768218,
   0.05880226,
   0.05942711,
   0.06332741,
   0.0585957,
   0.05710981,
   0.05897784,
   0.07665932};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3129,BackgroundStatSystError_fy3129,BackgroundStatSystError_felx3129,BackgroundStatSystError_fehx3129,BackgroundStatSystError_fely3129,BackgroundStatSystError_fehy3129);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1242;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError312131253129 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError312131253129","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMinimum(0.9080088);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMaximum(1.091991);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError312131253129);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3130[20] = {
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
   Double_t BackgroundStatError_fy3130[20] = {
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
   Double_t BackgroundStatError_felx3130[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3130[20] = {
   0.01547842,
   0.02120991,
   0.02687772,
   0.03056714,
   0.03433309,
   0.03769525,
   0.04117827,
   0.04405337,
   0.0459834,
   0.04739939,
   0.05229297,
   0.05671982,
   0.05768218,
   0.05880226,
   0.05942711,
   0.06332741,
   0.0585957,
   0.05710981,
   0.05897784,
   0.07665932};
   Double_t BackgroundStatError_fehx3130[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3130[20] = {
   0.01547842,
   0.02120991,
   0.02687772,
   0.03056714,
   0.03433309,
   0.03769525,
   0.04117827,
   0.04405337,
   0.0459834,
   0.04739939,
   0.05229297,
   0.05671982,
   0.05768218,
   0.05880226,
   0.05942711,
   0.06332741,
   0.0585957,
   0.05710981,
   0.05897784,
   0.07665932};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3130,BackgroundStatError_fy3130,BackgroundStatError_felx3130,BackgroundStatError_fehx3130,BackgroundStatError_fely3130,BackgroundStatError_fehy3130);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1241;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError312231263130 = new TH1F("Graph_Graph_Graph_BackgroundStatError312231263130","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMinimum(0.9080088);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMaximum(1.091991);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError312231263130);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx33[2] = {
   0,
   1.01};
   Double_t Graph0_fy33[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx33,Graph0_fy33);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0313233 = new TH1F("Graph_Graph_Graph_Graph0313233","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0313233->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0313233->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0313233->SetDirectory(0);
   Graph_Graph_Graph_Graph0313233->SetStats(0);
   Graph_Graph_Graph_Graph0313233->SetLineStyle(0);
   Graph_Graph_Graph_Graph0313233->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0313233);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3131[20] = {
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
   Double_t Graph1_fy3131[20] = {
   0.9344238,
   0.9875924,
   1.054084,
   0.9647767,
   1.004206,
   0.9959253,
   1.148812,
   1.012717,
   1.031905,
   0.9623685,
   1.214509,
   1.118886,
   1.216987,
   0.9995004,
   1.086579,
   1.154427,
   0.9774131,
   0.9005426,
   0.9217984,
   1.028106};
   Double_t Graph1_felx3131[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3131[20] = {
   0.01629837,
   0.02343453,
   0.02990985,
   0.03250415,
   0.03640244,
   0.03971014,
   0.04721589,
   0.04752917,
   0.0499374,
   0.04996368,
   0.0631393,
   0.0628429,
   0.06824523,
   0.06222618,
   0.06436336,
   0.07257823,
   0.06169377,
   0.05765133,
   0.06131711,
   0.08422571};
   Double_t Graph1_fehx3131[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3131[20] = {
   0.01629837,
   0.02343453,
   0.02990985,
   0.03250415,
   0.03640244,
   0.03971014,
   0.04721589,
   0.04752917,
   0.0499374,
   0.04996368,
   0.0631393,
   0.0628429,
   0.06824523,
   0.06222618,
   0.06436336,
   0.07257823,
   0.06169377,
   0.05765133,
   0.06131711,
   0.08422571};
   grae = new TGraphAsymmErrors(20,Graph1_fx3131,Graph1_fy3131,Graph1_felx3131,Graph1_fehx3131,Graph1_fely3131,Graph1_fehy3131);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1312331273131 = new TH1F("Graph_Graph_Graph_Graph1312331273131","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1312331273131->SetMinimum(0.7986572);
   Graph_Graph_Graph_Graph1312331273131->SetMaximum(1.329466);
   Graph_Graph_Graph_Graph1312331273131->SetDirectory(0);
   Graph_Graph_Graph_Graph1312331273131->SetStats(0);
   Graph_Graph_Graph_Graph1312331273131->SetLineStyle(0);
   Graph_Graph_Graph_Graph1312331273131->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1312331273131);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__226 = new TH1F("hframe_copy__226","",1000,0,1.01);
   hframe_copy__226->SetMinimum(0.3);
   hframe_copy__226->SetMaximum(1.7);
   hframe_copy__226->SetDirectory(0);
   hframe_copy__226->SetStats(0);
   hframe_copy__226->SetLineStyle(0);
   hframe_copy__226->SetMarkerStyle(20);
   hframe_copy__226->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__226->GetXaxis()->SetLabelFont(43);
   hframe_copy__226->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetXaxis()->SetLabelSize(27);
   hframe_copy__226->GetXaxis()->SetTitleSize(33);
   hframe_copy__226->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__226->GetXaxis()->SetTitleFont(43);
   hframe_copy__226->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__226->GetYaxis()->SetNdivisions(505);
   hframe_copy__226->GetYaxis()->SetLabelFont(43);
   hframe_copy__226->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetYaxis()->SetLabelSize(21);
   hframe_copy__226->GetYaxis()->SetTitleSize(33);
   hframe_copy__226->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__226->GetYaxis()->SetTitleFont(43);
   hframe_copy__226->GetZaxis()->SetLabelFont(43);
   hframe_copy__226->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetZaxis()->SetLabelSize(27);
   hframe_copy__226->GetZaxis()->SetTitleSize(33);
   hframe_copy__226->GetZaxis()->SetTitleOffset(1);
   hframe_copy__226->GetZaxis()->SetTitleFont(43);
   hframe_copy__226->Draw("sameaxis");
   MVAOutputM1000_2->Modified();
   MVAOutputM1000->cd();
  
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
   MVAOutputM1000->cd();
  
// ------------>Primitives in pad: MVAOutputM1000_1
   TPad *MVAOutputM1000_1 = new TPad("MVAOutputM1000_1", "MVAOutputM1000_1",0,0.2897959,1,1);
   MVAOutputM1000_1->Draw();
   MVAOutputM1000_1->cd();
   MVAOutputM1000_1->Range(-0.204557,-2.167371,1.073924,6.201167);
   MVAOutputM1000_1->SetFillColor(0);
   MVAOutputM1000_1->SetFillStyle(4000);
   MVAOutputM1000_1->SetBorderMode(0);
   MVAOutputM1000_1->SetBorderSize(2);
   MVAOutputM1000_1->SetLogy();
   MVAOutputM1000_1->SetTickx(1);
   MVAOutputM1000_1->SetTicky(1);
   MVAOutputM1000_1->SetLeftMargin(0.16);
   MVAOutputM1000_1->SetRightMargin(0.05);
   MVAOutputM1000_1->SetTopMargin(0.06);
   MVAOutputM1000_1->SetBottomMargin(0.02);
   MVAOutputM1000_1->SetFrameFillStyle(0);
   MVAOutputM1000_1->SetFrameBorderMode(0);
   MVAOutputM1000_1->SetFrameFillStyle(0);
   MVAOutputM1000_1->SetFrameBorderMode(0);
   
   TH1F *hframe__227 = new TH1F("hframe__227","",1000,0,1.01);
   hframe__227->SetMinimum(0.01);
   hframe__227->SetMaximum(500097.3);
   hframe__227->SetDirectory(0);
   hframe__227->SetStats(0);
   hframe__227->SetLineStyle(0);
   hframe__227->SetMarkerStyle(20);
   hframe__227->GetXaxis()->SetLabelFont(43);
   hframe__227->GetXaxis()->SetLabelOffset(0.007);
   hframe__227->GetXaxis()->SetLabelSize(0);
   hframe__227->GetXaxis()->SetTitleSize(0);
   hframe__227->GetXaxis()->SetTitleOffset(0.9);
   hframe__227->GetXaxis()->SetTitleFont(43);
   hframe__227->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__227->GetYaxis()->SetLabelFont(43);
   hframe__227->GetYaxis()->SetLabelOffset(0.007);
   hframe__227->GetYaxis()->SetLabelSize(27);
   hframe__227->GetYaxis()->SetTitleSize(33);
   hframe__227->GetYaxis()->SetTitleOffset(1.5625);
   hframe__227->GetYaxis()->SetTitleFont(43);
   hframe__227->GetZaxis()->SetLabelFont(43);
   hframe__227->GetZaxis()->SetLabelOffset(0.007);
   hframe__227->GetZaxis()->SetLabelSize(27);
   hframe__227->GetZaxis()->SetTitleSize(33);
   hframe__227->GetZaxis()->SetTitleOffset(1);
   hframe__227->GetZaxis()->SetTitleFont(43);
   hframe__227->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis193[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_31_stack_32_stack_33 = new TH1F("StackedMCstackHist_stack_31_stack_32_stack_33","StackedMCstackHist",20, xAxis193);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMinimum(21.91837);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMaximum(113971.9);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetDirectory(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetStats(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetLineStyle(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMarkerStyle(20);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_31_stack_32_stack_33);
   
   Double_t xAxis194[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM1000Inclusive",20, xAxis194);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1509.831);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,776.0578);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,471.214);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,343.1162);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,304.8789);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,302.0515);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,257.6795);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,201.2675);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,203.054);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,159.7696);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,139.3109);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,98.86134);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,184.1381);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,112.2694);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,79.85184);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,104.5856);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,122.8285);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,111.5296);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,106.1662);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,120.797);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,83.68956);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,54.67675);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,43.92684);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,48.39853);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,33.74888);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,34.72097);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,29.28573);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,29.92964);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,26.2221);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,42.14962);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,22.14082);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,19.17788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,43.52652);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,19.83503);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,17.7505);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,18.51198);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,20.81077);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,16.90234);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,18.79052);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,20.24696);
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
   Double_t xAxis195[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1000Inclusive",20, xAxis195);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,26349.58);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,11248.15);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,7128.97);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,5296.065);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4261.341);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3385.258);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2897.976);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2522.542);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2167.164);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1872.394);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1607.699);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1443.598);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1392.093);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1291.213);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1192.512);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1153.148);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1081.769);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1113.8);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1110.628);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,673.3287);
   TT_stack_2_stack_2_stack_2->SetBinError(1,175.9143);
   TT_stack_2_stack_2_stack_2->SetBinError(2,115.3852);
   TT_stack_2_stack_2_stack_2->SetBinError(3,91.79987);
   TT_stack_2_stack_2_stack_2->SetBinError(4,79.13124);
   TT_stack_2_stack_2_stack_2->SetBinError(5,71.0016);
   TT_stack_2_stack_2_stack_2->SetBinError(6,63.21789);
   TT_stack_2_stack_2_stack_2->SetBinError(7,58.60903);
   TT_stack_2_stack_2_stack_2->SetBinError(8,54.43905);
   TT_stack_2_stack_2_stack_2->SetBinError(9,50.80574);
   TT_stack_2_stack_2_stack_2->SetBinError(10,47.09895);
   TT_stack_2_stack_2_stack_2->SetBinError(11,43.70241);
   TT_stack_2_stack_2_stack_2->SetBinError(12,41.68398);
   TT_stack_2_stack_2_stack_2->SetBinError(13,40.48454);
   TT_stack_2_stack_2_stack_2->SetBinError(14,39.22872);
   TT_stack_2_stack_2_stack_2->SetBinError(15,37.66674);
   TT_stack_2_stack_2_stack_2->SetBinError(16,36.94962);
   TT_stack_2_stack_2_stack_2->SetBinError(17,36.01499);
   TT_stack_2_stack_2_stack_2->SetBinError(18,36.33728);
   TT_stack_2_stack_2_stack_2->SetBinError(19,36.56431);
   TT_stack_2_stack_2_stack_2->SetBinError(20,28.65387);
   TT_stack_2_stack_2_stack_2->SetEntries(67019.11);
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
   Double_t xAxis196[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1000Inclusive",20, xAxis196);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,42494.11);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,23942.05);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,15965.31);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,12624.11);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,10590.03);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,8944.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,7150.643);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,6242.168);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,5905.734);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,5677.98);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,4345.988);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,4123.891);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3649.791);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3759.096);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,3973.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3125.392);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,3931.409);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,4193.625);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,3686.665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2104.409);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1071.395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,752.0792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,625.1575);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,550.4965);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,514.3884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,470.6521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,419.3076);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,390.0654);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,376.2371);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,359.949);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,314.832);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,318.1022);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,295.5293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,300.3718);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,308.9508);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,274.4781);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,298.0595);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,306.8697);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,286.2585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,219.4122);
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
   Double_t xAxis197[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__228 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__228","h_SR_MVAOutputM1000Inclusive",20, xAxis197);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(1,34.55413);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(2,33.2904);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(3,44.00125);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(4,23.82018);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(5,26.00096);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(6,20.64087);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(7,21.47448);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(8,21.53014);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(9,25.45963);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(10,23.4848);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(11,17.62637);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(12,24.47153);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(13,16.73447);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(14,10.40173);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(15,20.62741);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(16,6.286082);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(17,18.64759);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(18,15.01033);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(19,9.753268);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(20,11.4008);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(1,8.219598);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(2,9.146303);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(3,9.078113);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(4,9.025941);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(5,8.949198);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(6,8.907581);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(7,8.572829);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(8,7.746595);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(9,8.079794);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(10,7.923618);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(11,7.850747);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(12,7.476836);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(13,7.454068);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(14,7.373074);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(15,7.274658);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(16,6.962604);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(17,7.611221);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(18,7.188141);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(19,6.811706);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(20,5.55804);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetEntries(144.4332);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3132[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3132[20] = {
   70353.52,
   35966.25,
   23565.49,
   18263.29,
   15156.25,
   12631.47,
   10306.3,
   8965.978,
   8275.952,
   7710.145,
   6092.999,
   5666.351,
   5226.022,
   5162.579,
   5245.824,
   4383.125,
   5136.006,
   5418.955,
   4903.458,
   2898.534};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3132[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3132[20] = {
   1088.961,
   762.841,
   633.3867,
   558.2567,
   520.361,
   476.1464,
   424.3955,
   394.9816,
   380.5564,
   365.4562,
   318.621,
   321.3944,
   301.4484,
   303.5713,
   311.7442,
   277.572,
   300.9479,
   309.4755,
   289.1954,
   222.1997};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3132[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3132[20] = {
   1088.961,
   762.841,
   633.3867,
   558.2567,
   520.361,
   476.1464,
   424.3955,
   394.9816,
   380.5564,
   365.4562,
   318.621,
   321.3944,
   301.4484,
   303.5713,
   311.7442,
   277.572,
   300.9479,
   309.4755,
   289.1954,
   222.1997};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3132,BkgSum-SR-Inclusive_sum_errors_fy3132,BkgSum-SR-Inclusive_sum_errors_felx3132,BkgSum-SR-Inclusive_sum_errors_fehx3132,BkgSum-SR-Inclusive_sum_errors_fely3132,BkgSum-SR-Inclusive_sum_errors_fehy3132);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1240;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMinimum(2408.701);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMaximum(78319.09);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors312431283132);
   
   grae->Draw("e2 ");
   Double_t xAxis198[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__229 = new TH1F("Data__229","h_SR_MVAOutputM1000Inclusive",20, xAxis198);
   Data__229->SetBinContent(1,65740);
   Data__229->SetBinContent(2,35520);
   Data__229->SetBinContent(3,24840);
   Data__229->SetBinContent(4,17620);
   Data__229->SetBinContent(5,15220);
   Data__229->SetBinContent(6,12580);
   Data__229->SetBinContent(7,11840);
   Data__229->SetBinContent(8,9080);
   Data__229->SetBinContent(9,8540);
   Data__229->SetBinContent(10,7420);
   Data__229->SetBinContent(11,7400);
   Data__229->SetBinContent(12,6340);
   Data__229->SetBinContent(13,6360);
   Data__229->SetBinContent(14,5160);
   Data__229->SetBinContent(15,5700);
   Data__229->SetBinContent(16,5060);
   Data__229->SetBinContent(17,5020);
   Data__229->SetBinContent(18,4880);
   Data__229->SetBinContent(19,4520);
   Data__229->SetBinContent(20,2980);
   Data__229->SetBinError(1,1146.647);
   Data__229->SetBinError(2,842.8523);
   Data__229->SetBinError(3,704.8404);
   Data__229->SetBinError(4,593.6329);
   Data__229->SetBinError(5,551.7246);
   Data__229->SetBinError(6,501.5974);
   Data__229->SetBinError(7,486.621);
   Data__229->SetBinError(8,426.1455);
   Data__229->SetBinError(9,413.2796);
   Data__229->SetBinError(10,385.2272);
   Data__229->SetBinError(11,384.7077);
   Data__229->SetBinError(12,356.0899);
   Data__229->SetBinError(13,356.6511);
   Data__229->SetBinError(14,321.2476);
   Data__229->SetBinError(15,337.6389);
   Data__229->SetBinError(16,318.1195);
   Data__229->SetBinError(17,316.8596);
   Data__229->SetBinError(18,312.41);
   Data__229->SetBinError(19,300.6659);
   Data__229->SetBinError(20,244.1311);
   Data__229->SetEntries(13091);
   Data__229->SetDirectory(0);
   Data__229->SetFillStyle(3001);
   Data__229->SetLineWidth(2);
   Data__229->SetMarkerStyle(20);
   Data__229->SetMarkerSize(1.2);
   Data__229->GetXaxis()->SetRange(1,200);
   Data__229->GetXaxis()->SetLabelFont(42);
   Data__229->GetXaxis()->SetTitleOffset(1);
   Data__229->GetXaxis()->SetTitleFont(42);
   Data__229->GetYaxis()->SetLabelFont(42);
   Data__229->GetYaxis()->SetTitleFont(42);
   Data__229->GetZaxis()->SetLabelFont(42);
   Data__229->GetZaxis()->SetTitleOffset(1);
   Data__229->GetZaxis()->SetTitleFont(42);
   Data__229->Draw("EP same");
   
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

   ci = 1240;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1240;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__230 = new TH1F("hframe_copy__230","",1000,0,1.01);
   hframe_copy__230->SetMinimum(0.01);
   hframe_copy__230->SetMaximum(500097.3);
   hframe_copy__230->SetDirectory(0);
   hframe_copy__230->SetStats(0);
   hframe_copy__230->SetLineStyle(0);
   hframe_copy__230->SetMarkerStyle(20);
   hframe_copy__230->GetXaxis()->SetLabelFont(43);
   hframe_copy__230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetXaxis()->SetLabelSize(0);
   hframe_copy__230->GetXaxis()->SetTitleSize(0);
   hframe_copy__230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__230->GetXaxis()->SetTitleFont(43);
   hframe_copy__230->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__230->GetYaxis()->SetLabelFont(43);
   hframe_copy__230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetYaxis()->SetLabelSize(27);
   hframe_copy__230->GetYaxis()->SetTitleSize(33);
   hframe_copy__230->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__230->GetYaxis()->SetTitleFont(43);
   hframe_copy__230->GetZaxis()->SetLabelFont(43);
   hframe_copy__230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetZaxis()->SetLabelSize(27);
   hframe_copy__230->GetZaxis()->SetTitleSize(33);
   hframe_copy__230->GetZaxis()->SetTitleOffset(1);
   hframe_copy__230->GetZaxis()->SetTitleFont(43);
   hframe_copy__230->Draw("sameaxis");
   
   TH1F *hframe_copy__231 = new TH1F("hframe_copy__231","",1000,0,1.01);
   hframe_copy__231->SetMinimum(0.01);
   hframe_copy__231->SetMaximum(500097.3);
   hframe_copy__231->SetDirectory(0);
   hframe_copy__231->SetStats(0);
   hframe_copy__231->SetLineStyle(0);
   hframe_copy__231->SetMarkerStyle(20);
   hframe_copy__231->GetXaxis()->SetLabelFont(43);
   hframe_copy__231->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetXaxis()->SetLabelSize(0);
   hframe_copy__231->GetXaxis()->SetTitleSize(0);
   hframe_copy__231->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__231->GetXaxis()->SetTitleFont(43);
   hframe_copy__231->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__231->GetYaxis()->SetLabelFont(43);
   hframe_copy__231->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetYaxis()->SetLabelSize(27);
   hframe_copy__231->GetYaxis()->SetTitleSize(33);
   hframe_copy__231->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__231->GetYaxis()->SetTitleFont(43);
   hframe_copy__231->GetZaxis()->SetLabelFont(43);
   hframe_copy__231->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetZaxis()->SetLabelSize(27);
   hframe_copy__231->GetZaxis()->SetTitleSize(33);
   hframe_copy__231->GetZaxis()->SetTitleOffset(1);
   hframe_copy__231->GetZaxis()->SetTitleFont(43);
   hframe_copy__231->Draw("sameaxis");
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
   MVAOutputM1000_1->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->SetSelected(MVAOutputM1000);
}
