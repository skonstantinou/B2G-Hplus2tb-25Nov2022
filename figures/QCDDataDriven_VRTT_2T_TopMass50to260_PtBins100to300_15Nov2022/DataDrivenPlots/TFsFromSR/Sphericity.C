void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Fri Nov 18 13:28:02 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3261[25] = {
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
   Double_t BackgroundStatSystError_fy3261[25] = {
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
   Double_t BackgroundStatSystError_felx3261[25] = {
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
   Double_t BackgroundStatSystError_fely3261[25] = {
   0.03886282,
   0.01788935,
   0.01295615,
   0.01110953,
   0.01043955,
   0.01031459,
   0.0103093,
   0.01039685,
   0.01072702,
   0.01104977,
   0.01166578,
   0.01215244,
   0.0126869,
   0.01363218,
   0.01473121,
   0.01625758,
   0.01822998,
   0.02157281,
   0.02628723,
   0.03818953,
   0.06236275,
   0.1184606,
   0.2375389,
   0.5887918,
   0.7144848};
   Double_t BackgroundStatSystError_fehx3261[25] = {
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
   Double_t BackgroundStatSystError_fehy3261[25] = {
   0.03886282,
   0.01788935,
   0.01295615,
   0.01110953,
   0.01043955,
   0.01031459,
   0.0103093,
   0.01039685,
   0.01072702,
   0.01104977,
   0.01166578,
   0.01215244,
   0.0126869,
   0.01363218,
   0.01473121,
   0.01625758,
   0.01822998,
   0.02157281,
   0.02628723,
   0.03818953,
   0.06236275,
   0.1184606,
   0.2375389,
   0.5887918,
   0.7144848};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,BackgroundStatSystError_fx3261,BackgroundStatSystError_fy3261,BackgroundStatSystError_felx3261,BackgroundStatSystError_fehx3261,BackgroundStatSystError_fely3261,BackgroundStatSystError_fehy3261);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError325332573261 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError325332573261","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMinimum(0.1426182);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMaximum(1.857382);
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
   0.03886282,
   0.01788935,
   0.01295615,
   0.01110953,
   0.01043955,
   0.01031459,
   0.0103093,
   0.01039685,
   0.01072702,
   0.01104977,
   0.01166578,
   0.01215244,
   0.0126869,
   0.01363218,
   0.01473121,
   0.01625758,
   0.01822998,
   0.02157281,
   0.02628723,
   0.03818953,
   0.06236275,
   0.1184606,
   0.2375389,
   0.5887918,
   0.7144848};
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
   0.03886282,
   0.01788935,
   0.01295615,
   0.01110953,
   0.01043955,
   0.01031459,
   0.0103093,
   0.01039685,
   0.01072702,
   0.01104977,
   0.01166578,
   0.01215244,
   0.0126869,
   0.01363218,
   0.01473121,
   0.01625758,
   0.01822998,
   0.02157281,
   0.02628723,
   0.03818953,
   0.06236275,
   0.1184606,
   0.2375389,
   0.5887918,
   0.7144848};
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
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMinimum(0.1426182);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMaximum(1.857382);
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
   0.9303054,
   0.9717102,
   0.9813403,
   0.9822336,
   0.953561,
   0.9421097,
   0.929566,
   0.9201122,
   0.9625553,
   0.9372353,
   0.9361986,
   0.9351594,
   0.9481343,
   0.9010827,
   0.9591118,
   0.9313146,
   0.8900288,
   0.9002754,
   0.9662533,
   0.8649127,
   0.9515624,
   0.8906849,
   1.399339,
   0.6670642};
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
   0.04923698,
   0.02443057,
   0.01855553,
   0.01647848,
   0.01570832,
   0.0153295,
   0.01551649,
   0.01566503,
   0.01664783,
   0.01695677,
   0.0179872,
   0.01877089,
   0.01986084,
   0.02065595,
   0.02317344,
   0.02485495,
   0.02749308,
   0.03177003,
   0.04101517,
   0.05492201,
   0.08912199,
   0.1527512,
   0.4039544,
   0.6670642};
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
   0.04923698,
   0.02443057,
   0.01855553,
   0.01647848,
   0.01570832,
   0.0153295,
   0.01551649,
   0.01566503,
   0.01664783,
   0.01695677,
   0.0179872,
   0.01877089,
   0.01986084,
   0.02065595,
   0.02317344,
   0.02485495,
   0.02749308,
   0.03177003,
   0.04101517,
   0.05492201,
   0.08912199,
   0.1527512,
   0.4039544,
   0.6670642};
   grae = new TGraphAsymmErrors(24,Graph1_fx3263,Graph1_fy3263,Graph1_felx3263,Graph1_fehx3263,Graph1_fely3263,Graph1_fehy3263);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1325532593263 = new TH1F("Graph_Graph_Graph_Graph1325532593263","Graph",100,0,1.056);
   Graph_Graph_Graph_Graph1325532593263->SetMinimum(0);
   Graph_Graph_Graph_Graph1325532593263->SetMaximum(1.983623);
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
   Sphericity_1->Range(-0.2025316,-2.140274,1.063291,4.873422);
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
   hframe__458->SetMaximum(28353.08);
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
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMinimum(1.603635);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMaximum(6414.54);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,8.039516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,37.17205);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,69.39891);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,87.48445);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,103.2785);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,98.36192);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,96.4469);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,99.19103);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,82.9752);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,82.6626);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,72.12302);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,70.59284);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,61.06623);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,55.05962);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,47.78472);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,34.08548);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,28.3587);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,21.97804);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,13.04756);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,7.362162);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,3.49778);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,1.057062);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.4999693);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.01110535);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.245103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,3.571174);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,4.182134);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,4.77741);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,5.077941);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,4.580723);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,4.578755);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,5.178833);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,4.238105);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,4.606123);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,3.903788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,3.738805);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,3.453329);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,3.213703);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,3.047701);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.508095);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,2.356386);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,2.019605);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.573657);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,1.185056);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.8205479);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.3980958);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.3123824);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.004991053);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(189561);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,217.4718);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1116.037);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2106.392);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2796.289);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3124.406);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3226.778);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,3200.147);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3082.671);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2920.008);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2736.413);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2486.338);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2255.136);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2032.669);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1786.816);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1527.177);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1277.352);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1031.546);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,764.2937);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,505.1451);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,258.2926);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,99.06865);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,30.44952);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,6.738208);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.9790457);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.1204394);
   TT_stack_2_stack_2_stack_2->SetBinError(1,3.454159);
   TT_stack_2_stack_2_stack_2->SetBinError(2,7.863892);
   TT_stack_2_stack_2_stack_2->SetBinError(3,10.81403);
   TT_stack_2_stack_2_stack_2->SetBinError(4,12.455);
   TT_stack_2_stack_2_stack_2->SetBinError(5,13.16279);
   TT_stack_2_stack_2_stack_2->SetBinError(6,13.3674);
   TT_stack_2_stack_2_stack_2->SetBinError(7,13.28618);
   TT_stack_2_stack_2_stack_2->SetBinError(8,13.0259);
   TT_stack_2_stack_2_stack_2->SetBinError(9,12.65696);
   TT_stack_2_stack_2_stack_2->SetBinError(10,12.26519);
   TT_stack_2_stack_2_stack_2->SetBinError(11,11.67464);
   TT_stack_2_stack_2_stack_2->SetBinError(12,11.10344);
   TT_stack_2_stack_2_stack_2->SetBinError(13,10.55691);
   TT_stack_2_stack_2_stack_2->SetBinError(14,9.886942);
   TT_stack_2_stack_2_stack_2->SetBinError(15,9.143342);
   TT_stack_2_stack_2_stack_2->SetBinError(16,8.36332);
   TT_stack_2_stack_2_stack_2->SetBinError(17,7.514077);
   TT_stack_2_stack_2_stack_2->SetBinError(18,6.47989);
   TT_stack_2_stack_2_stack_2->SetBinError(19,5.26976);
   TT_stack_2_stack_2_stack_2->SetBinError(20,3.781499);
   TT_stack_2_stack_2_stack_2->SetBinError(21,2.33863);
   TT_stack_2_stack_2_stack_2->SetBinError(22,1.312602);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.6083709);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.2330348);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.0860521);
   TT_stack_2_stack_2_stack_2->SetEntries(739478);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,158.2336);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,474.8487);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,674.3931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,733.4922);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,636.7773);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,683.948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,564.3478);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,567.6809);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,470.0638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,440.5118);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,335.1558);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,328.3643);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,309.933);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,270.0282);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,211.0663);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,196.1093);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,117.5853);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,105.6776);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,56.19091);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,21.07941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,17.23654);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,6.666288);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,1.337301);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.5089552);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,14.45436);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,27.81484);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,35.05995);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,37.90744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,37.79592);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,38.86288);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,37.2403);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,36.37599);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,34.78228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,33.5503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,31.43167);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,30.05055);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,28.40031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,26.84728);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,24.48153);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,22.90106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,19.96895);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,18.00503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,14.0617);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,10.20802);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,7.048189);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,4.308935);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,1.918779);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.851329);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3287.287);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(1,0.252293);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(2,1.787456);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(3,3.369107);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(4,4.955264);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(5,7.656906);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(6,8.343946);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(7,8.740697);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(8,10.12237);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(9,8.114368);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(10,8.9324);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(11,8.748681);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(12,6.109548);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(13,7.126579);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(14,5.300068);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(15,4.768996);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(16,4.38107);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(17,3.71622);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(18,2.458307);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(19,1.042088);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(20,0.5193008);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(21,0.03947815);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(22,0.1780973);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(23,0.02194716);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(1,0.1501693);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(2,0.4437756);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(3,0.6776668);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(4,0.8416949);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(5,1.000085);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(6,1.003463);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(7,1.075754);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(8,1.098185);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(9,1.066125);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(10,1.01501);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(11,0.96836);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(12,0.9510424);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(13,0.8822905);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(14,0.867323);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(15,0.7977469);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(16,0.7293076);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(17,0.643611);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(18,0.5814637);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(19,0.40865);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(20,0.2900388);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(21,0.1540435);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(22,0.09976036);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(23,0.02194716);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetEntries(19326);
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
   383.745,
   1628.057,
   2850.184,
   3617.266,
   3864.462,
   4009.087,
   3860.941,
   3749.543,
   3473.047,
   3259.587,
   2893.617,
   2654.093,
   2403.668,
   2111.904,
   1786.027,
   1507.546,
   1177.49,
   891.9493,
   574.3835,
   286.7341,
   119.803,
   38.17287,
   8.575478,
   1.499106,
   0.1204394};
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
   14.91341,
   29.12489,
   36.92741,
   40.18613,
   40.34323,
   41.35207,
   39.80361,
   38.98342,
   37.25543,
   36.01769,
   33.75628,
   32.25369,
   30.49511,
   28.78986,
   26.31035,
   24.50906,
   21.46562,
   19.24185,
   15.09895,
   10.95024,
   7.471242,
   4.521983,
   2.03701,
   0.8826614,
   0.0860521};
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
   14.91341,
   29.12489,
   36.92741,
   40.18613,
   40.34323,
   41.35207,
   39.80361,
   38.98342,
   37.25543,
   36.01769,
   33.75628,
   32.25369,
   30.49511,
   28.78986,
   26.31035,
   24.50906,
   21.46562,
   19.24185,
   15.09895,
   10.95024,
   7.471242,
   4.521983,
   2.03701,
   0.8826614,
   0.0860521};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMinimum(0.03094854);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMaximum(4455.48);
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
   Data__460->SetBinContent(1,357);
   Data__460->SetBinContent(2,1582);
   Data__460->SetBinContent(3,2797);
   Data__460->SetBinContent(4,3553);
   Data__460->SetBinContent(5,3685);
   Data__460->SetBinContent(6,3777);
   Data__460->SetBinContent(7,3589);
   Data__460->SetBinContent(8,3450);
   Data__460->SetBinContent(9,3343);
   Data__460->SetBinContent(10,3055);
   Data__460->SetBinContent(11,2709);
   Data__460->SetBinContent(12,2482);
   Data__460->SetBinContent(13,2279);
   Data__460->SetBinContent(14,1903);
   Data__460->SetBinContent(15,1713);
   Data__460->SetBinContent(16,1404);
   Data__460->SetBinContent(17,1048);
   Data__460->SetBinContent(18,803);
   Data__460->SetBinContent(19,555);
   Data__460->SetBinContent(20,248);
   Data__460->SetBinContent(21,114);
   Data__460->SetBinContent(22,34);
   Data__460->SetBinContent(23,12);
   Data__460->SetBinContent(24,1);
   Data__460->SetBinError(1,18.89444);
   Data__460->SetBinError(2,39.77436);
   Data__460->SetBinError(3,52.88667);
   Data__460->SetBinError(4,59.60705);
   Data__460->SetBinError(5,60.7042);
   Data__460->SetBinError(6,61.4573);
   Data__460->SetBinError(7,59.90826);
   Data__460->SetBinError(8,58.7367);
   Data__460->SetBinError(9,57.81868);
   Data__460->SetBinError(10,55.27205);
   Data__460->SetBinError(11,52.04805);
   Data__460->SetBinError(12,49.81967);
   Data__460->SetBinError(13,47.73887);
   Data__460->SetBinError(14,43.62339);
   Data__460->SetBinError(15,41.3884);
   Data__460->SetBinError(16,37.46999);
   Data__460->SetBinError(17,32.37283);
   Data__460->SetBinError(18,28.33725);
   Data__460->SetBinError(19,23.55844);
   Data__460->SetBinError(20,15.74802);
   Data__460->SetBinError(21,10.67708);
   Data__460->SetBinError(22,5.830952);
   Data__460->SetBinError(23,3.464102);
   Data__460->SetBinError(24,1);
   Data__460->SetEntries(44497);
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
   hframe_copy__461->SetMaximum(28353.08);
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
   hframe_copy__462->SetMaximum(28353.08);
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
