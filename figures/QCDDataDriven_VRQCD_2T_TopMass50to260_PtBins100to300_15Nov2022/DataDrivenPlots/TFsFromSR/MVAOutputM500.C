void MVAOutputM500()
{
//=========Macro generated from canvas: MVAOutputM500/MVAOutputM500
//=========  (Fri Nov 18 13:27:49 2022) by ROOT version 6.20/02
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
   0.0293637,
   0.03176809,
   0.0298626,
   0.02896914,
   0.02806523,
   0.02908544,
   0.02879572,
   0.02966364,
   0.03072471,
   0.0315769,
   0.03500432,
   0.03877566,
   0.03942419,
   0.04409888,
   0.04647351,
   0.05017093,
   0.05524245,
   0.08624489,
   0.2737935};
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
   0.0293637,
   0.03176809,
   0.0298626,
   0.02896914,
   0.02806523,
   0.02908544,
   0.02879572,
   0.02966364,
   0.03072471,
   0.0315769,
   0.03500432,
   0.03877566,
   0.03942419,
   0.04409888,
   0.04647351,
   0.05017093,
   0.05524245,
   0.08624489,
   0.2737935};
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
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMinimum(0.6714478);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMaximum(1.328552);
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
   0.0293637,
   0.03176809,
   0.0298626,
   0.02896914,
   0.02806523,
   0.02908544,
   0.02879572,
   0.02966364,
   0.03072471,
   0.0315769,
   0.03500432,
   0.03877566,
   0.03942419,
   0.04409888,
   0.04647351,
   0.05017093,
   0.05524245,
   0.08624489,
   0.2737935};
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
   0.0293637,
   0.03176809,
   0.0298626,
   0.02896914,
   0.02806523,
   0.02908544,
   0.02879572,
   0.02966364,
   0.03072471,
   0.0315769,
   0.03500432,
   0.03877566,
   0.03942419,
   0.04409888,
   0.04647351,
   0.05017093,
   0.05524245,
   0.08624489,
   0.2737935};
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
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMinimum(0.6714478);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMaximum(1.328552);
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
   0.8959123,
   0.9236869,
   1.033344,
   1.033853,
   0.9061827,
   1.053552,
   1.031455,
   0.9629196,
   1.021469,
   0.9677827,
   1.006533,
   1.066245,
   1.015351,
   1.183371,
   1.057771,
   1.086944,
   1.004322,
   0.9933275,
   1.181573};
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
   0.02936234,
   0.03337416,
   0.03392119,
   0.03267697,
   0.02918618,
   0.03315089,
   0.03195335,
   0.03159237,
   0.03391731,
   0.0334315,
   0.03712653,
   0.04261572,
   0.04197961,
   0.0505973,
   0.05025623,
   0.05598048,
   0.05623121,
   0.08814356,
   0.2953933};
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
   0.02936234,
   0.03337416,
   0.03392119,
   0.03267697,
   0.02918618,
   0.03315089,
   0.03195335,
   0.03159237,
   0.03391731,
   0.0334315,
   0.03712653,
   0.04261572,
   0.04197961,
   0.0505973,
   0.05025623,
   0.05598048,
   0.05623121,
   0.08814356,
   0.2953933};
   grae = new TGraphAsymmErrors(19,Graph1_fx3083,Graph1_fy3083,Graph1_felx3083,Graph1_fehx3083,Graph1_fely3083,Graph1_fehy3083);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1307530793083 = new TH1F("Graph_Graph_Graph_Graph1307530793083","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1307530793083->SetMinimum(0.8055084);
   Graph_Graph_Graph_Graph1307530793083->SetMaximum(1.538008);
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
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMinimum(0.8321606);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMaximum(38021.49);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,213.4935);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,352.0861);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,395.2519);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,476.3509);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,454.7062);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,419.4434);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,420.3566);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,420.1051);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,426.8235);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,294.159);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,356.101);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,253.9374);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,301.5583);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,220.5343);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,172.8047);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,170.5457);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,114.1558);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,26.73385);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,6.617894);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,21.13834);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,34.17783);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,39.88169);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,44.16777);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,43.25693);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,41.15242);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,51.82466);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,50.36092);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,40.42003);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,32.62519);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,50.50813);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,28.17148);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,44.958);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,29.45545);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,24.58285);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,27.37953);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,20.82397);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,9.766534);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,3.873949);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1219.222);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2761.39);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4642.543);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,6036.972);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,6704.484);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,6796.036);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,6699.704);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,6624.332);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,6159.773);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,5741.329);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4928.344);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,4211.73);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3630.189);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,3079.517);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2603.39);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2135.883);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1832.234);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1284.436);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,514.2346);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,41.3184);
   TT_stack_2_stack_2_stack_2->SetBinError(1,40.51946);
   TT_stack_2_stack_2_stack_2->SetBinError(2,73.87917);
   TT_stack_2_stack_2_stack_2->SetBinError(3,84.03962);
   TT_stack_2_stack_2_stack_2->SetBinError(4,88.86652);
   TT_stack_2_stack_2_stack_2->SetBinError(5,89.20895);
   TT_stack_2_stack_2_stack_2->SetBinError(6,88.71901);
   TT_stack_2_stack_2_stack_2->SetBinError(7,88.00232);
   TT_stack_2_stack_2_stack_2->SetBinError(8,85.27769);
   TT_stack_2_stack_2_stack_2->SetBinError(9,82.36616);
   TT_stack_2_stack_2_stack_2->SetBinError(10,76.30977);
   TT_stack_2_stack_2_stack_2->SetBinError(11,70.82099);
   TT_stack_2_stack_2_stack_2->SetBinError(12,65.69063);
   TT_stack_2_stack_2_stack_2->SetBinError(13,60.64863);
   TT_stack_2_stack_2_stack_2->SetBinError(14,55.78888);
   TT_stack_2_stack_2_stack_2->SetBinError(15,50.67854);
   TT_stack_2_stack_2_stack_2->SetBinError(16,46.99025);
   TT_stack_2_stack_2_stack_2->SetBinError(17,39.4729);
   TT_stack_2_stack_2_stack_2->SetBinError(18,24.91901);
   TT_stack_2_stack_2_stack_2->SetBinError(19,7.323236);
   TT_stack_2_stack_2_stack_2->SetEntries(65895.32);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,7416.759);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,11591.08);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11528.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,12183.62);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,14025.32);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,12054.09);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,13159.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,12715.61);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,11590.59);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,12095.44);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,10036.76);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,7858.016);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,8142.029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,6420.851);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,6067.414);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,4934.098);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,4953.955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2016.094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,222.8891);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,301.6952);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,520.5702);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,528.237);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,552.1242);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,588.8293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,549.0195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,572.7685);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,563.741);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,537.863);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,540.5126);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,503.7687);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,449.664);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,447.9722);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,402.7733);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,385.1701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,343.7542);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,348.0809);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,218.9034);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,73.68595);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(6999.17);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(1,14.60706);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(2,17.06443);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(3,15.14796);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(4,28.52067);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(5,36.79515);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(6,26.55677);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(7,56.30783);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(8,28.53746);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(9,36.11826);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(10,26.94309);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(11,26.23872);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(12,41.09394);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(13,25.10162);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(14,11.16517);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(15,12.88308);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(16,-8.131374);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(17,9.713589);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(18,4.849081);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(19,1.096862);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(1,4.936013);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(2,7.201);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(3,7.737497);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(4,8.379122);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(5,8.967892);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(6,9.356889);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(7,9.901574);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(8,9.666814);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(9,9.458652);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(10,9.766814);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(11,9.102886);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(12,8.854299);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(13,9.018145);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(14,7.371883);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(15,6.877173);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(16,6.549366);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(17,5.399577);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(18,3.305478);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(19,0.9686461);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetEntries(143.0318);
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
   10391.64,
   16585.71,
   17961.1,
   19364.46,
   21276.06,
   19173.24,
   20204.47,
   19295.48,
   17758.74,
   17317.94,
   14604.59,
   11742.14,
   11523.1,
   9244.774,
   8376.102,
   6936.878,
   6352.547,
   2557.062,
   270.8254};
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
   305.1371,
   526.8962,
   536.3651,
   560.9717,
   597.1176,
   557.6621,
   581.8023,
   572.3744,
   545.6322,
   546.8468,
   511.2236,
   455.3093,
   454.289,
   407.6842,
   389.2668,
   348.0297,
   350.9303,
   220.5335,
   74.15023};
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
   305.1371,
   526.8962,
   536.3651,
   560.9717,
   597.1176,
   557.6621,
   581.8023,
   572.3744,
   545.6322,
   546.8468,
   511.2236,
   455.3093,
   454.289,
   407.6842,
   389.2668,
   348.0297,
   350.9303,
   220.5335,
   74.15023};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMinimum(177.0077);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMaximum(24040.83);
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
   Data__145->SetBinContent(1,9310);
   Data__145->SetBinContent(2,15320);
   Data__145->SetBinContent(3,18560);
   Data__145->SetBinContent(4,20020);
   Data__145->SetBinContent(5,19280);
   Data__145->SetBinContent(6,20200);
   Data__145->SetBinContent(7,20840);
   Data__145->SetBinContent(8,18580);
   Data__145->SetBinContent(9,18140);
   Data__145->SetBinContent(10,16760);
   Data__145->SetBinContent(11,14700);
   Data__145->SetBinContent(12,12520);
   Data__145->SetBinContent(13,11700);
   Data__145->SetBinContent(14,10940);
   Data__145->SetBinContent(15,8860);
   Data__145->SetBinContent(16,7540);
   Data__145->SetBinContent(17,6380);
   Data__145->SetBinContent(18,2540);
   Data__145->SetBinContent(19,320);
   Data__145->SetBinError(1,305.1229);
   Data__145->SetBinError(2,553.5341);
   Data__145->SetBinError(3,609.2618);
   Data__145->SetBinError(4,632.7717);
   Data__145->SetBinError(5,620.967);
   Data__145->SetBinError(6,635.6099);
   Data__145->SetBinError(7,645.6005);
   Data__145->SetBinError(8,609.59);
   Data__145->SetBinError(9,602.3288);
   Data__145->SetBinError(10,578.9646);
   Data__145->SetBinError(11,542.2177);
   Data__145->SetBinError(12,500.3998);
   Data__145->SetBinError(13,483.7355);
   Data__145->SetBinError(14,467.7606);
   Data__145->SetBinError(15,420.9513);
   Data__145->SetBinError(16,388.3298);
   Data__145->SetBinError(17,357.2114);
   Data__145->SetBinError(18,225.3886);
   Data__145->SetBinError(19,80);
   Data__145->SetEntries(12862.62);
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
