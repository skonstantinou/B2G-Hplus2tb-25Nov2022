void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Fri Nov 18 13:27:45 2022) by ROOT version 6.20/02
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
   0.05183553,
   0.02688931,
   0.02237058,
   0.02163279,
   0.02122694,
   0.02143442,
   0.02180858,
   0.02274944,
   0.02341611,
   0.02477342,
   0.02643856,
   0.02739198,
   0.02938118,
   0.03169486,
   0.03455332,
   0.0371386,
   0.04104065,
   0.05007732,
   0.05738239,
   0.07732716,
   0.1227127,
   0.2469754,
   0.5020141,
   1.649845};
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
   0.05183553,
   0.02688931,
   0.02237058,
   0.02163279,
   0.02122694,
   0.02143442,
   0.02180858,
   0.02274944,
   0.02341611,
   0.02477342,
   0.02643856,
   0.02739198,
   0.02938118,
   0.03169486,
   0.03455332,
   0.0371386,
   0.04104065,
   0.05007732,
   0.05738239,
   0.07732716,
   0.1227127,
   0.2469754,
   0.5020141,
   1.649845};
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
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMinimum(-0.9798143);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMaximum(2.979814);
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
   0.05183553,
   0.02688931,
   0.02237058,
   0.02163279,
   0.02122694,
   0.02143442,
   0.02180858,
   0.02274944,
   0.02341611,
   0.02477342,
   0.02643856,
   0.02739198,
   0.02938118,
   0.03169486,
   0.03455332,
   0.0371386,
   0.04104065,
   0.05007732,
   0.05738239,
   0.07732716,
   0.1227127,
   0.2469754,
   0.5020141,
   1.649845,
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
   0.05183553,
   0.02688931,
   0.02237058,
   0.02163279,
   0.02122694,
   0.02143442,
   0.02180858,
   0.02274944,
   0.02341611,
   0.02477342,
   0.02643856,
   0.02739198,
   0.02938118,
   0.03169486,
   0.03455332,
   0.0371386,
   0.04104065,
   0.05007732,
   0.05738239,
   0.07732716,
   0.1227127,
   0.2469754,
   0.5020141,
   1.649845,
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
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMinimum(-0.9798143);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMaximum(2.979814);
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
   
   Double_t Graph1_fx3263[23] = {
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
   0.9};
   Double_t Graph1_fy3263[23] = {
   1.219327,
   1.032669,
   0.9694223,
   1.061022,
   0.9868544,
   1.033557,
   0.9455947,
   0.958668,
   0.9506146,
   0.9296758,
   0.9918666,
   0.9575877,
   0.9293223,
   0.9550291,
   0.9802084,
   0.9282668,
   0.9161458,
   1.061061,
   0.8903559,
   0.8462589,
   1.185777,
   0.8985263,
   0.595619};
   Double_t Graph1_felx3263[23] = {
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
   Double_t Graph1_fely3263[23] = {
   0.0713557,
   0.03449904,
   0.02726713,
   0.0273046,
   0.0258715,
   0.02682981,
   0.02601678,
   0.02748039,
   0.02834185,
   0.02938424,
   0.03250712,
   0.03303991,
   0.0349755,
   0.03829318,
   0.04225979,
   0.0432337,
   0.04756392,
   0.06241538,
   0.06476386,
   0.08219593,
   0.1644377,
   0.284139,
   0.4211662};
   Double_t Graph1_fehx3263[23] = {
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
   Double_t Graph1_fehy3263[23] = {
   0.0713557,
   0.03449904,
   0.02726713,
   0.0273046,
   0.0258715,
   0.02682981,
   0.02601678,
   0.02748039,
   0.02834185,
   0.02938424,
   0.03250712,
   0.03303991,
   0.0349755,
   0.03829318,
   0.04225979,
   0.0432337,
   0.04756392,
   0.06241538,
   0.06476386,
   0.08219593,
   0.1644377,
   0.284139,
   0.4211662};
   grae = new TGraphAsymmErrors(23,Graph1_fx3263,Graph1_fy3263,Graph1_felx3263,Graph1_fehx3263,Graph1_fely3263,Graph1_fehy3263);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1325532593263 = new TH1F("Graph_Graph_Graph_Graph1325532593263","Graph",100,0,1.012);
   Graph_Graph_Graph_Graph1325532593263->SetMinimum(0.05687654);
   Graph_Graph_Graph_Graph1325532593263->SetMaximum(1.467791);
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
   Sphericity_1->Range(-0.2025316,-2.130958,1.063291,4.416949);
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
   hframe__458->SetMaximum(10570);
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
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMinimum(0.5897526);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMaximum(2359.011);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,3.866281);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,19.65204);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,30.17312);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,39.44262);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,35.901);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,36.23976);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,40.41296);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,33.47283);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,32.71963);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,25.88717);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,25.19567);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,21.59342);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,20.41245);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,15.59344);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,15.32765);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,12.50691);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,9.804848);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,8.324341);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,5.765242);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,3.14874);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,2.145239);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.7059296);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.0282079);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,7.970843e-05);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.9773981);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.98741);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.522715);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,3.491395);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,3.271015);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.93454);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,3.391235);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.668754);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.38717);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.155957);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.726189);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.425652);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.024952);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.750506);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.576121);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.302751);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.358658);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.826079);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.9439618);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.6973602);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.6942857);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.3309297);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.01004706);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,7.970843e-05);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(52636);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,119.5896);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,474.1026);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,719.7754);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,836.6639);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,882.1989);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,871.8893);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,833.753);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,798.4968);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,738.3442);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,667.5092);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,607.6661);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,556.1268);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,492.3831);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,435.2457);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,370.8644);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,314.2892);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,251.9341);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,187.3415);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,132.0102);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,72.19656);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,31.05528);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,9.549424);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,2.396996);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.3252959);
   TT_stack_2_stack_2_stack_2->SetBinError(1,2.656144);
   TT_stack_2_stack_2_stack_2->SetBinError(2,5.291425);
   TT_stack_2_stack_2_stack_2->SetBinError(3,6.521934);
   TT_stack_2_stack_2_stack_2->SetBinError(4,7.038023);
   TT_stack_2_stack_2_stack_2->SetBinError(5,7.226859);
   TT_stack_2_stack_2_stack_2->SetBinError(6,7.192971);
   TT_stack_2_stack_2_stack_2->SetBinError(7,7.013169);
   TT_stack_2_stack_2_stack_2->SetBinError(8,6.856277);
   TT_stack_2_stack_2_stack_2->SetBinError(9,6.591788);
   TT_stack_2_stack_2_stack_2->SetBinError(10,6.261711);
   TT_stack_2_stack_2_stack_2->SetBinError(11,5.962074);
   TT_stack_2_stack_2_stack_2->SetBinError(12,5.699537);
   TT_stack_2_stack_2_stack_2->SetBinError(13,5.360985);
   TT_stack_2_stack_2_stack_2->SetBinError(14,5.042236);
   TT_stack_2_stack_2_stack_2->SetBinError(15,4.66345);
   TT_stack_2_stack_2_stack_2->SetBinError(16,4.285826);
   TT_stack_2_stack_2_stack_2->SetBinError(17,3.842997);
   TT_stack_2_stack_2_stack_2->SetBinError(18,3.29473);
   TT_stack_2_stack_2_stack_2->SetBinError(19,2.775338);
   TT_stack_2_stack_2_stack_2->SetBinError(20,2.057358);
   TT_stack_2_stack_2_stack_2->SetBinError(21,1.368009);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.7582954);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.3710248);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.1348355);
   TT_stack_2_stack_2_stack_2->SetEntries(185137);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,116.0206);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,373.9001);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,553.9209);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,547.0502);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,556.2817);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,527.6885);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,522.8386);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,437.5001);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,412.381);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,383.3231);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,305.7725);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,299.4841);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,246.8978);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,200.4499);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,162.6708);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,169.8283);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,143.2184);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,76.70291);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,74.49919);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,49.91187);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,10.65258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.8739808);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.9326478);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,-0.2198977);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,12.08643);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,22.63558);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,28.31767);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,29.76755);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,30.27459);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,29.7793);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,29.45393);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,27.92683);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,26.8102);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,25.83885);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,23.93454);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,23.21624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,21.57249);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,19.94054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,18.31504);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,17.79067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,16.11212);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,13.10901);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,11.82282);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,9.439033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,5.158028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,2.621196);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,1.64432);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.1100143);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3639.597);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(1,0.06535503);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(2,0.4622249);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(3,1.445783);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(4,2.283705);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(5,2.203693);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(6,2.986438);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(7,3.614846);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(8,2.860159);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(9,3.625502);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(10,1.774726);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(11,2.134213);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(12,1.099073);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(13,1.315901);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(14,2.164544);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(15,1.845004);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(16,1.176205);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(17,0.6202557);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(18,0.7583846);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(19,0.1833786);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(20,0.1543207);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(21,-0.05508238);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(22,-0.02660352);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(23,0.02613622);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(1,0.1191859);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(2,0.2950252);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(3,0.4032591);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(4,0.497874);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(5,0.5538253);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(6,0.5909323);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(7,0.6126966);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(8,0.6103124);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(9,0.5815058);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(10,0.5770986);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(11,0.5379664);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(12,0.5308398);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(13,0.5045887);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(14,0.4656786);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(15,0.4402962);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(16,0.3915773);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(17,0.367903);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(18,0.296835);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(19,0.2178148);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(20,0.1499155);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(21,0.09457997);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(22,0.04495139);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(23,0.02613622);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetEntries(5945);
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
   239.4764,
   867.6547,
   1303.869,
   1423.157,
   1474.382,
   1435.818,
   1397.005,
   1269.47,
   1183.445,
   1076.719,
   938.6343,
   877.2043,
   759.6934,
   651.2891,
   548.8629,
   496.6245,
   404.9574,
   272.3688,
   212.2747,
   125.2572,
   43.8531,
   11.12933,
   3.357852,
   0.105478,
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
   12.41339,
   23.33064,
   29.16831,
   30.78686,
   31.29661,
   30.77592,
   30.46669,
   28.87973,
   27.71168,
   26.67402,
   24.81614,
   24.02837,
   22.32069,
   20.64252,
   18.96504,
   18.44394,
   16.61971,
   13.6395,
   12.18083,
   9.685782,
   5.381332,
   2.748672,
   1.685689,
   0.1740223,
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
   12.41339,
   23.33064,
   29.16831,
   30.78686,
   31.29661,
   30.77592,
   30.46669,
   28.87973,
   27.71168,
   26.67402,
   24.81614,
   24.02837,
   22.32069,
   20.64252,
   18.96504,
   18.44394,
   16.61971,
   13.6395,
   12.18083,
   9.685782,
   5.381332,
   2.748672,
   1.685689,
   0.1740223,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMinimum(1.656246);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMaximum(1656.246);
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
   Data__460->SetBinContent(1,292);
   Data__460->SetBinContent(2,896);
   Data__460->SetBinContent(3,1264);
   Data__460->SetBinContent(4,1510);
   Data__460->SetBinContent(5,1455);
   Data__460->SetBinContent(6,1484);
   Data__460->SetBinContent(7,1321);
   Data__460->SetBinContent(8,1217);
   Data__460->SetBinContent(9,1125);
   Data__460->SetBinContent(10,1001);
   Data__460->SetBinContent(11,931);
   Data__460->SetBinContent(12,840);
   Data__460->SetBinContent(13,706);
   Data__460->SetBinContent(14,622);
   Data__460->SetBinContent(15,538);
   Data__460->SetBinContent(16,461);
   Data__460->SetBinContent(17,371);
   Data__460->SetBinContent(18,289);
   Data__460->SetBinContent(19,189);
   Data__460->SetBinContent(20,106);
   Data__460->SetBinContent(21,52);
   Data__460->SetBinContent(22,10);
   Data__460->SetBinContent(23,2);
   Data__460->SetBinError(1,17.08801);
   Data__460->SetBinError(2,29.93326);
   Data__460->SetBinError(3,35.55278);
   Data__460->SetBinError(4,38.85872);
   Data__460->SetBinError(5,38.14446);
   Data__460->SetBinError(6,38.52272);
   Data__460->SetBinError(7,36.34556);
   Data__460->SetBinError(8,34.88553);
   Data__460->SetBinError(9,33.54102);
   Data__460->SetBinError(10,31.63858);
   Data__460->SetBinError(11,30.51229);
   Data__460->SetBinError(12,28.98275);
   Data__460->SetBinError(13,26.57066);
   Data__460->SetBinError(14,24.93993);
   Data__460->SetBinError(15,23.19483);
   Data__460->SetBinError(16,21.47091);
   Data__460->SetBinError(17,19.26136);
   Data__460->SetBinError(18,17);
   Data__460->SetBinError(19,13.74773);
   Data__460->SetBinError(20,10.29563);
   Data__460->SetBinError(21,7.211103);
   Data__460->SetBinError(22,3.162278);
   Data__460->SetBinError(23,1.414214);
   Data__460->SetEntries(16686);
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
   hframe_copy__461->SetMaximum(10570);
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
   hframe_copy__462->SetMaximum(10570);
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
