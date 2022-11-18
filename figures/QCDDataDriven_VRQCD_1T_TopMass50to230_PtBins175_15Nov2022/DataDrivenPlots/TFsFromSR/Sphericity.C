void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Fri Nov 18 13:28:01 2022) by ROOT version 6.20/02
   TCanvas *Sphericity = new TCanvas("Sphericity", "Sphericity",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Sphericity->SetHighLightColor(2);
   Sphericity->Range(0,0,1,1);
   Sphericity->SetFillColor(0);
   Sphericity->SetBorderMode(0);
   Sphericity->SetBorderSize(2);
   Sphericity->SetTickx(1);
   Sphericity->SetTicky(1);
   Sphericity->SetLeftMargin(0.16);
   Sphericity->SetRightMargin(0.05);
   Sphericity->SetTopMargin(0.06);
   Sphericity->SetBottomMargin(0.13);
   Sphericity->SetFrameFillStyle(0);
   Sphericity->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Sphericity_2
   TPad *Sphericity_2 = new TPad("Sphericity_2", "Sphericity_2",0,0,1,0.304);
   Sphericity_2->Draw();
   Sphericity_2->cd();
   Sphericity_2->Range(-0.2025316,-0.428,1.063291,1.7);
   Sphericity_2->SetFillColor(0);
   Sphericity_2->SetFillStyle(4000);
   Sphericity_2->SetBorderMode(0);
   Sphericity_2->SetBorderSize(2);
   Sphericity_2->SetTickx(1);
   Sphericity_2->SetTicky(1);
   Sphericity_2->SetLeftMargin(0.16);
   Sphericity_2->SetRightMargin(0.05);
   Sphericity_2->SetTopMargin(0);
   Sphericity_2->SetBottomMargin(0.3421053);
   Sphericity_2->SetFrameFillStyle(0);
   Sphericity_2->SetFrameBorderMode(0);
   Sphericity_2->SetFrameFillStyle(0);
   Sphericity_2->SetFrameBorderMode(0);
   
   TH1F *hframe__456 = new TH1F("hframe__456","",1000,0,1);
   hframe__456->SetMinimum(0.3);
   hframe__456->SetMaximum(1.7);
   hframe__456->SetDirectory(0);
   hframe__456->SetStats(0);
   hframe__456->SetLineStyle(0);
   hframe__456->SetMarkerStyle(20);
   hframe__456->GetXaxis()->SetTitle("Sphericity");
   hframe__456->GetXaxis()->SetLabelFont(43);
   hframe__456->GetXaxis()->SetLabelOffset(0.007);
   hframe__456->GetXaxis()->SetLabelSize(27);
   hframe__456->GetXaxis()->SetTitleSize(33);
   hframe__456->GetXaxis()->SetTitleOffset(2.960526);
   hframe__456->GetXaxis()->SetTitleFont(43);
   hframe__456->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__456->GetYaxis()->SetNdivisions(505);
   hframe__456->GetYaxis()->SetLabelFont(43);
   hframe__456->GetYaxis()->SetLabelOffset(0.007);
   hframe__456->GetYaxis()->SetLabelSize(21);
   hframe__456->GetYaxis()->SetTitleSize(33);
   hframe__456->GetYaxis()->SetTitleOffset(1.5625);
   hframe__456->GetYaxis()->SetTitleFont(43);
   hframe__456->GetZaxis()->SetLabelFont(43);
   hframe__456->GetZaxis()->SetLabelOffset(0.007);
   hframe__456->GetZaxis()->SetLabelSize(27);
   hframe__456->GetZaxis()->SetTitleSize(33);
   hframe__456->GetZaxis()->SetTitleOffset(1);
   hframe__456->GetZaxis()->SetTitleFont(43);
   hframe__456->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3261[24] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94};
   Double_t BackgroundStatSystError_fy3261[24] = {
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
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3261[24] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BackgroundStatSystError_fely3261[24] = {
   0.1145582,
   0.06435337,
   0.05781298,
   0.05244446,
   0.05076213,
   0.05182225,
   0.05324023,
   0.05608211,
   0.05532732,
   0.05658781,
   0.06222935,
   0.06052913,
   0.06845802,
   0.06913065,
   0.07729676,
   0.08503748,
   0.08786713,
   0.1074843,
   0.1371418,
   0.1707535,
   0.3152349,
   0.7074441,
   1.239122,
   -1.023278};
   Double_t BackgroundStatSystError_fehx3261[24] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BackgroundStatSystError_fehy3261[24] = {
   0.1145582,
   0.06435337,
   0.05781298,
   0.05244446,
   0.05076213,
   0.05182225,
   0.05324023,
   0.05608211,
   0.05532732,
   0.05658781,
   0.06222935,
   0.06052913,
   0.06845802,
   0.06913065,
   0.07729676,
   0.08503748,
   0.08786713,
   0.1074843,
   0.1371418,
   0.1707535,
   0.3152349,
   0.7074441,
   1.239122,
   -1.023278};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,BackgroundStatSystError_fx3261,BackgroundStatSystError_fy3261,BackgroundStatSystError_felx3261,BackgroundStatSystError_fehx3261,BackgroundStatSystError_fely3261,BackgroundStatSystError_fehy3261);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1275;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError325332573261 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError325332573261","Graph",100,0,1.056);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMinimum(-0.4869464);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMaximum(2.486946);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError325332573261);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3262[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t BackgroundStatError_fy3262[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3262[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BackgroundStatError_fely3262[25] = {
   0.1145582,
   0.06435337,
   0.05781298,
   0.05244446,
   0.05076213,
   0.05182225,
   0.05324023,
   0.05608211,
   0.05532732,
   0.05658781,
   0.06222935,
   0.06052913,
   0.06845802,
   0.06913065,
   0.07729676,
   0.08503748,
   0.08786713,
   0.1074843,
   0.1371418,
   0.1707535,
   0.3152349,
   0.7074441,
   1.239122,
   -1.023278,
   0};
   Double_t BackgroundStatError_fehx3262[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BackgroundStatError_fehy3262[25] = {
   0.1145582,
   0.06435337,
   0.05781298,
   0.05244446,
   0.05076213,
   0.05182225,
   0.05324023,
   0.05608211,
   0.05532732,
   0.05658781,
   0.06222935,
   0.06052913,
   0.06845802,
   0.06913065,
   0.07729676,
   0.08503748,
   0.08786713,
   0.1074843,
   0.1371418,
   0.1707535,
   0.3152349,
   0.7074441,
   1.239122,
   -1.023278,
   0};
   grae = new TGraphAsymmErrors(25,BackgroundStatError_fx3262,BackgroundStatError_fy3262,BackgroundStatError_felx3262,BackgroundStatError_fehx3262,BackgroundStatError_fely3262,BackgroundStatError_fehy3262);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1274;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError325432583262 = new TH1F("Graph_Graph_Graph_BackgroundStatError325432583262","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMinimum(-0.4869464);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMaximum(2.486946);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError325432583262->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError325432583262->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError325432583262);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx66[2] = {
   0,
   1};
   Double_t Graph0_fy66[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx66,Graph0_fy66);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0646566 = new TH1F("Graph_Graph_Graph_Graph0646566","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph0646566->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0646566->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0646566->SetDirectory(0);
   Graph_Graph_Graph_Graph0646566->SetStats(0);
   Graph_Graph_Graph_Graph0646566->SetLineStyle(0);
   Graph_Graph_Graph_Graph0646566->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0646566->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0646566->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0646566->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0646566->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0646566->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0646566->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0646566->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0646566->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0646566->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0646566->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0646566->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0646566->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0646566->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0646566->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0646566->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0646566->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0646566->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0646566->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0646566);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3263[24] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94};
   Double_t Graph1_fy3263[24] = {
   1.272086,
   1.081029,
   1.103756,
   1.056643,
   0.9928588,
   1.032978,
   1.047926,
   1.092095,
   0.9698327,
   0.9632555,
   1.027185,
   0.9229207,
   0.9663867,
   0.9987248,
   0.9453744,
   1.004156,
   0.8080786,
   0.9773134,
   1.090601,
   0.883448,
   1.174047,
   3.147814,
   4.014365,
   -9.323249};
   Double_t Graph1_felx3263[24] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph1_fely3263[24] = {
   0.0950802,
   0.0491885,
   0.04468979,
   0.03990887,
   0.03744638,
   0.03879429,
   0.03986498,
   0.04323644,
   0.03992738,
   0.04141359,
   0.04612198,
   0.04266202,
   0.04938005,
   0.050379,
   0.05532385,
   0.06263753,
   0.05757322,
   0.0784997,
   0.1049431,
   0.1213509,
   0.2503077,
   1.049271,
   4.014365,
   -9.323249};
   Double_t Graph1_fehx3263[24] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph1_fehy3263[24] = {
   0.0950802,
   0.0491885,
   0.04468979,
   0.03990887,
   0.03744638,
   0.03879429,
   0.03986498,
   0.04323644,
   0.03992738,
   0.04141359,
   0.04612198,
   0.04266202,
   0.04938005,
   0.050379,
   0.05532385,
   0.06263753,
   0.05757322,
   0.0784997,
   0.1049431,
   0.1213509,
   0.2503077,
   1.049271,
   4.014365,
   -9.323249};
   grae = new TGraphAsymmErrors(24,Graph1_fx3263,Graph1_fy3263,Graph1_felx3263,Graph1_fehx3263,Graph1_fely3263,Graph1_fehy3263);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1325532593263 = new TH1F("Graph_Graph_Graph_Graph1325532593263","Graph",100,0,1.056);
   Graph_Graph_Graph_Graph1325532593263->SetMinimum(-11.05845);
   Graph_Graph_Graph_Graph1325532593263->SetMaximum(9.763928);
   Graph_Graph_Graph_Graph1325532593263->SetDirectory(0);
   Graph_Graph_Graph_Graph1325532593263->SetStats(0);
   Graph_Graph_Graph_Graph1325532593263->SetLineStyle(0);
   Graph_Graph_Graph_Graph1325532593263->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1325532593263->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1325532593263->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1325532593263->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1325532593263->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1325532593263->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1325532593263->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1325532593263->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1325532593263->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1325532593263->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1325532593263->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1325532593263->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1325532593263->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1325532593263->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1325532593263->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1325532593263->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1325532593263->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1325532593263->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1325532593263->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1325532593263->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1325532593263);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__457 = new TH1F("hframe_copy__457","",1000,0,1);
   hframe_copy__457->SetMinimum(0.3);
   hframe_copy__457->SetMaximum(1.7);
   hframe_copy__457->SetDirectory(0);
   hframe_copy__457->SetStats(0);
   hframe_copy__457->SetLineStyle(0);
   hframe_copy__457->SetMarkerStyle(20);
   hframe_copy__457->GetXaxis()->SetTitle("Sphericity");
   hframe_copy__457->GetXaxis()->SetLabelFont(43);
   hframe_copy__457->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__457->GetXaxis()->SetLabelSize(27);
   hframe_copy__457->GetXaxis()->SetTitleSize(33);
   hframe_copy__457->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__457->GetXaxis()->SetTitleFont(43);
   hframe_copy__457->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__457->GetYaxis()->SetNdivisions(505);
   hframe_copy__457->GetYaxis()->SetLabelFont(43);
   hframe_copy__457->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__457->GetYaxis()->SetLabelSize(21);
   hframe_copy__457->GetYaxis()->SetTitleSize(33);
   hframe_copy__457->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__457->GetYaxis()->SetTitleFont(43);
   hframe_copy__457->GetZaxis()->SetLabelFont(43);
   hframe_copy__457->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__457->GetZaxis()->SetLabelSize(27);
   hframe_copy__457->GetZaxis()->SetTitleSize(33);
   hframe_copy__457->GetZaxis()->SetTitleOffset(1);
   hframe_copy__457->GetZaxis()->SetTitleFont(43);
   hframe_copy__457->Draw("sameaxis");
   Sphericity_2->Modified();
   Sphericity->cd();
  
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
   Sphericity->cd();
  
// ------------>Primitives in pad: Sphericity_1
   TPad *Sphericity_1 = new TPad("Sphericity_1", "Sphericity_1",0,0.2897959,1,1);
   Sphericity_1->Draw();
   Sphericity_1->cd();
   Sphericity_1->Range(-0.2025316,-2.124275,1.063291,4.089497);
   Sphericity_1->SetFillColor(0);
   Sphericity_1->SetFillStyle(4000);
   Sphericity_1->SetBorderMode(0);
   Sphericity_1->SetBorderSize(2);
   Sphericity_1->SetLogy();
   Sphericity_1->SetTickx(1);
   Sphericity_1->SetTicky(1);
   Sphericity_1->SetLeftMargin(0.16);
   Sphericity_1->SetRightMargin(0.05);
   Sphericity_1->SetTopMargin(0.06);
   Sphericity_1->SetBottomMargin(0.02);
   Sphericity_1->SetFrameFillStyle(0);
   Sphericity_1->SetFrameBorderMode(0);
   Sphericity_1->SetFrameFillStyle(0);
   Sphericity_1->SetFrameBorderMode(0);
   
   TH1F *hframe__458 = new TH1F("hframe__458","",1000,0,1);
   hframe__458->SetMinimum(0.01);
   hframe__458->SetMaximum(5207.992);
   hframe__458->SetDirectory(0);
   hframe__458->SetStats(0);
   hframe__458->SetLineStyle(0);
   hframe__458->SetMarkerStyle(20);
   hframe__458->GetXaxis()->SetLabelFont(43);
   hframe__458->GetXaxis()->SetLabelOffset(0.007);
   hframe__458->GetXaxis()->SetLabelSize(0);
   hframe__458->GetXaxis()->SetTitleSize(0);
   hframe__458->GetXaxis()->SetTitleOffset(0.9);
   hframe__458->GetXaxis()->SetTitleFont(43);
   hframe__458->GetYaxis()->SetTitle("Events / 0.04");
   hframe__458->GetYaxis()->SetLabelFont(43);
   hframe__458->GetYaxis()->SetLabelOffset(0.007);
   hframe__458->GetYaxis()->SetLabelSize(27);
   hframe__458->GetYaxis()->SetTitleSize(33);
   hframe__458->GetYaxis()->SetTitleOffset(1.5625);
   hframe__458->GetYaxis()->SetTitleFont(43);
   hframe__458->GetZaxis()->SetLabelFont(43);
   hframe__458->GetZaxis()->SetLabelOffset(0.007);
   hframe__458->GetZaxis()->SetLabelSize(27);
   hframe__458->GetZaxis()->SetTitleSize(33);
   hframe__458->GetZaxis()->SetTitleOffset(1);
   hframe__458->GetZaxis()->SetTitleFont(43);
   hframe__458->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_64_stack_65_stack_66 = new TH1F("StackedMCstackHist_stack_64_stack_65_stack_66","StackedMCstackHist",25,0,1);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMinimum(0.2832225);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMaximum(1132.89);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetDirectory(0);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetStats(0);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetLineStyle(0);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMarkerStyle(20);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_64_stack_65_stack_66->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_64_stack_65_stack_66);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_SphericityInclusive",25,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2.57686);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,3.619045);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,6.030091);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,7.581304);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,6.645356);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,9.498341);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,9.854047);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,12.17925);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,8.275475);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,8.164295);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,6.896173);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,6.958975);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,6.132105);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,4.149297);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,5.347206);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,2.80778);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,2.967361);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,2.11182);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.7634712);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,1.497362);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.1365688);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.01623803);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.0530296);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.002469001);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.450374);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.8347197);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.063765);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.20549);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.112885);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.000995);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.456755);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.149631);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.867487);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.923173);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.096937);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.143978);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.74681);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.8987617);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.551525);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.7864387);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.8010722);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.5716555);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.4605623);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.5667563);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.3386863);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.01088019);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.04320075);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.002469001);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_SphericityInclusive",25,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,13.35909);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,47.53136);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,78.02905);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,98.19659);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,104.7976);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,104.8139);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,106.1896);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,103.4443);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,99.03818);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,95.6787);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,85.65604);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,77.03414);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,69.87596);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,63.79376);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,56.55982);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,48.79473);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,38.02975);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,31.18339);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,22.83472);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,13.62142);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,5.640183);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,1.668041);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.5963124);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.9040337);
   TT_stack_2_stack_2_stack_2->SetBinError(2,1.701079);
   TT_stack_2_stack_2_stack_2->SetBinError(3,2.201152);
   TT_stack_2_stack_2_stack_2->SetBinError(4,2.481766);
   TT_stack_2_stack_2_stack_2->SetBinError(5,2.530907);
   TT_stack_2_stack_2_stack_2->SetBinError(6,2.527393);
   TT_stack_2_stack_2_stack_2->SetBinError(7,2.554976);
   TT_stack_2_stack_2_stack_2->SetBinError(8,2.504875);
   TT_stack_2_stack_2_stack_2->SetBinError(9,2.463684);
   TT_stack_2_stack_2_stack_2->SetBinError(10,2.425221);
   TT_stack_2_stack_2_stack_2->SetBinError(11,2.304999);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.158951);
   TT_stack_2_stack_2_stack_2->SetBinError(13,2.064602);
   TT_stack_2_stack_2_stack_2->SetBinError(14,1.984878);
   TT_stack_2_stack_2_stack_2->SetBinError(15,1.861561);
   TT_stack_2_stack_2_stack_2->SetBinError(16,1.728098);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.518048);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.383487);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.191233);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.923746);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.5964601);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.3194866);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.2059512);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_SphericityInclusive",25,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,124.7778);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,395.6463);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,468.599);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,557.6436);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,596.6134);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,572.0531);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,543.354);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,468.5749);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,501.0388);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,457.7941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,390.3207);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,423.0927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,320.3136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,325.5587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,246.9653);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,204.3338);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,202.791);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,125.3029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,75.42977);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,44.87343);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,12.96185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,1.174848);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,-0.4002366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,-0.1097278);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,16.02905);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,28.69037);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,31.85715);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,34.68322);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,35.83596);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,35.42261);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,34.98307);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,32.59638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,33.51623);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,31.63073);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,29.94025);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,30.59606);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,26.99627);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,27.11563);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,23.75153);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,21.68121);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,21.35209);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,16.98094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,13.52069);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,10.18639);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,5.867103);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,1.997251);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.2258233);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.1097278);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__459 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__459","h_SR_SphericityInclusive",25,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(1,0.02897354);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(2,0.1273545);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(3,0.5292636);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(4,0.8515115);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(5,0.5695066);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(6,0.6669928);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(7,0.801147);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(8,0.6396821);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(9,0.2453927);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(10,0.3369389);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(11,0.05377597);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(12,0.4651041);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(13,0.1493681);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(14,-0.0663202);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(15,0.1543976);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(16,0.1347867);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(17,0.2425412);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(18,0.09985806);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(19,-0.02450417);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(20,-0.07142175);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(21,-0.00333868);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(22,0.02284525);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(1,0.02897354);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(2,0.1296773);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(3,0.1697956);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(4,0.2659724);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(5,0.2365574);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(6,0.2568512);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(7,0.2862655);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(8,0.2548451);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(9,0.2304231);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(10,0.2768007);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(11,0.2390372);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(12,0.2348892);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(13,0.1978917);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(14,0.210181);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(15,0.2202181);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(16,0.19759);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(17,0.148335);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(18,0.1201611);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(19,0.1097572);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(20,0.04186097);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(21,0.03694251);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(22,0.02284525);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetEntries(1103);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3264[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3264[25] = {
   140.7137,
   446.7967,
   552.6581,
   663.4215,
   708.0564,
   686.3653,
   659.3977,
   584.1984,
   608.3524,
   561.6371,
   482.8729,
   507.0858,
   396.3217,
   393.5018,
   308.8723,
   255.9363,
   243.7882,
   158.5981,
   99.02796,
   59.99221,
   18.7386,
   2.859127,
   0.2491054,
   -0.1072588,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3264[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3264[25] = {
   16.11991,
   28.75288,
   31.95081,
   34.79278,
   35.94245,
   35.56899,
   35.10648,
   32.76308,
   33.65851,
   31.78181,
   30.04887,
   30.69346,
   27.1314,
   27.20304,
   23.87483,
   21.76418,
   21.42097,
   17.0468,
   13.58087,
   10.24388,
   5.907061,
   2.022672,
   0.308672,
   0.1097555,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3264[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3264[25] = {
   16.11991,
   28.75288,
   31.95081,
   34.79278,
   35.94245,
   35.56899,
   35.10648,
   32.76308,
   33.65851,
   31.78181,
   30.04887,
   30.69346,
   27.1314,
   27.20304,
   23.87483,
   21.76418,
   21.42097,
   17.0468,
   13.58087,
   10.24388,
   5.907061,
   2.022672,
   0.308672,
   0.1097555,
   0};
   grae = new TGraphAsymmErrors(25,BkgSum-SR-Inclusive_sum_errors_fx3264,BkgSum-SR-Inclusive_sum_errors_fy3264,BkgSum-SR-Inclusive_sum_errors_felx3264,BkgSum-SR-Inclusive_sum_errors_fehx3264,BkgSum-SR-Inclusive_sum_errors_fely3264,BkgSum-SR-Inclusive_sum_errors_fehy3264);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1273;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMinimum(0.8184023);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMaximum(818.4023);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors325632603264);
   
   grae->Draw("e2 ");
   
   TH1F *Data__460 = new TH1F("Data__460","h_SR_SphericityInclusive",25,0,1);
   Data__460->SetBinContent(1,179);
   Data__460->SetBinContent(2,483);
   Data__460->SetBinContent(3,610);
   Data__460->SetBinContent(4,701);
   Data__460->SetBinContent(5,703);
   Data__460->SetBinContent(6,709);
   Data__460->SetBinContent(7,691);
   Data__460->SetBinContent(8,638);
   Data__460->SetBinContent(9,590);
   Data__460->SetBinContent(10,541);
   Data__460->SetBinContent(11,496);
   Data__460->SetBinContent(12,468);
   Data__460->SetBinContent(13,383);
   Data__460->SetBinContent(14,393);
   Data__460->SetBinContent(15,292);
   Data__460->SetBinContent(16,257);
   Data__460->SetBinContent(17,197);
   Data__460->SetBinContent(18,155);
   Data__460->SetBinContent(19,108);
   Data__460->SetBinContent(20,53);
   Data__460->SetBinContent(21,22);
   Data__460->SetBinContent(22,9);
   Data__460->SetBinContent(23,1);
   Data__460->SetBinContent(24,1);
   Data__460->SetBinError(1,13.37909);
   Data__460->SetBinError(2,21.97726);
   Data__460->SetBinError(3,24.69818);
   Data__460->SetBinError(4,26.4764);
   Data__460->SetBinError(5,26.51415);
   Data__460->SetBinError(6,26.62705);
   Data__460->SetBinError(7,26.28688);
   Data__460->SetBinError(8,25.25866);
   Data__460->SetBinError(9,24.28992);
   Data__460->SetBinError(10,23.25941);
   Data__460->SetBinError(11,22.27106);
   Data__460->SetBinError(12,21.63331);
   Data__460->SetBinError(13,19.57039);
   Data__460->SetBinError(14,19.82423);
   Data__460->SetBinError(15,17.08801);
   Data__460->SetBinError(16,16.03122);
   Data__460->SetBinError(17,14.03567);
   Data__460->SetBinError(18,12.4499);
   Data__460->SetBinError(19,10.3923);
   Data__460->SetBinError(20,7.28011);
   Data__460->SetBinError(21,4.690416);
   Data__460->SetBinError(22,3);
   Data__460->SetBinError(23,1);
   Data__460->SetBinError(24,1);
   Data__460->SetEntries(8684);
   Data__460->SetDirectory(0);
   Data__460->SetFillStyle(3001);
   Data__460->SetLineWidth(2);
   Data__460->SetMarkerStyle(20);
   Data__460->SetMarkerSize(1.2);
   Data__460->GetXaxis()->SetRange(1,100);
   Data__460->GetXaxis()->SetLabelFont(42);
   Data__460->GetXaxis()->SetTitleOffset(1);
   Data__460->GetXaxis()->SetTitleFont(42);
   Data__460->GetYaxis()->SetLabelFont(42);
   Data__460->GetYaxis()->SetTitleFont(42);
   Data__460->GetZaxis()->SetLabelFont(42);
   Data__460->GetZaxis()->SetTitleOffset(1);
   Data__460->GetZaxis()->SetTitleFont(42);
   Data__460->Draw("EP same");
   
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

   ci = 1273;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1273;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__461 = new TH1F("hframe_copy__461","",1000,0,1);
   hframe_copy__461->SetMinimum(0.01);
   hframe_copy__461->SetMaximum(5207.992);
   hframe_copy__461->SetDirectory(0);
   hframe_copy__461->SetStats(0);
   hframe_copy__461->SetLineStyle(0);
   hframe_copy__461->SetMarkerStyle(20);
   hframe_copy__461->GetXaxis()->SetLabelFont(43);
   hframe_copy__461->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__461->GetXaxis()->SetLabelSize(0);
   hframe_copy__461->GetXaxis()->SetTitleSize(0);
   hframe_copy__461->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__461->GetXaxis()->SetTitleFont(43);
   hframe_copy__461->GetYaxis()->SetTitle("Events / 0.04");
   hframe_copy__461->GetYaxis()->SetLabelFont(43);
   hframe_copy__461->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__461->GetYaxis()->SetLabelSize(27);
   hframe_copy__461->GetYaxis()->SetTitleSize(33);
   hframe_copy__461->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__461->GetYaxis()->SetTitleFont(43);
   hframe_copy__461->GetZaxis()->SetLabelFont(43);
   hframe_copy__461->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__461->GetZaxis()->SetLabelSize(27);
   hframe_copy__461->GetZaxis()->SetTitleSize(33);
   hframe_copy__461->GetZaxis()->SetTitleOffset(1);
   hframe_copy__461->GetZaxis()->SetTitleFont(43);
   hframe_copy__461->Draw("sameaxis");
   
   TH1F *hframe_copy__462 = new TH1F("hframe_copy__462","",1000,0,1);
   hframe_copy__462->SetMinimum(0.01);
   hframe_copy__462->SetMaximum(5207.992);
   hframe_copy__462->SetDirectory(0);
   hframe_copy__462->SetStats(0);
   hframe_copy__462->SetLineStyle(0);
   hframe_copy__462->SetMarkerStyle(20);
   hframe_copy__462->GetXaxis()->SetLabelFont(43);
   hframe_copy__462->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__462->GetXaxis()->SetLabelSize(0);
   hframe_copy__462->GetXaxis()->SetTitleSize(0);
   hframe_copy__462->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__462->GetXaxis()->SetTitleFont(43);
   hframe_copy__462->GetYaxis()->SetTitle("Events / 0.04");
   hframe_copy__462->GetYaxis()->SetLabelFont(43);
   hframe_copy__462->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__462->GetYaxis()->SetLabelSize(27);
   hframe_copy__462->GetYaxis()->SetTitleSize(33);
   hframe_copy__462->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__462->GetYaxis()->SetTitleFont(43);
   hframe_copy__462->GetZaxis()->SetLabelFont(43);
   hframe_copy__462->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__462->GetZaxis()->SetLabelSize(27);
   hframe_copy__462->GetZaxis()->SetTitleSize(33);
   hframe_copy__462->GetZaxis()->SetTitleOffset(1);
   hframe_copy__462->GetZaxis()->SetTitleFont(43);
   hframe_copy__462->Draw("sameaxis");
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
   Sphericity_1->Modified();
   Sphericity->cd();
   Sphericity->Modified();
   Sphericity->cd();
   Sphericity->SetSelected(Sphericity);
}
