void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Fri Nov 18 13:28:25 2022) by ROOT version 6.20/02
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
   0.0716487,
   0.03875719,
   0.03181511,
   0.02990724,
   0.02890512,
   0.02851493,
   0.02847942,
   0.02845555,
   0.03072422,
   0.03174536,
   0.03321126,
   0.03472968,
   0.03538057,
   0.03831254,
   0.04149264,
   0.04509602,
   0.05133696,
   0.05701146,
   0.06602182,
   0.1057039,
   0.1501544,
   0.2517213,
   0.6319464,
   0.709709};
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
   0.0716487,
   0.03875719,
   0.03181511,
   0.02990724,
   0.02890512,
   0.02851493,
   0.02847942,
   0.02845555,
   0.03072422,
   0.03174536,
   0.03321126,
   0.03472968,
   0.03538057,
   0.03831254,
   0.04149264,
   0.04509602,
   0.05133696,
   0.05701146,
   0.06602182,
   0.1057039,
   0.1501544,
   0.2517213,
   0.6319464,
   0.709709};
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
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMinimum(0.1483493);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMaximum(1.851651);
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
   0.0716487,
   0.03875719,
   0.03181511,
   0.02990724,
   0.02890512,
   0.02851493,
   0.02847942,
   0.02845555,
   0.03072422,
   0.03174536,
   0.03321126,
   0.03472968,
   0.03538057,
   0.03831254,
   0.04149264,
   0.04509602,
   0.05133696,
   0.05701146,
   0.06602182,
   0.1057039,
   0.1501544,
   0.2517213,
   0.6319464,
   0.709709,
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
   0.0716487,
   0.03875719,
   0.03181511,
   0.02990724,
   0.02890512,
   0.02851493,
   0.02847942,
   0.02845555,
   0.03072422,
   0.03174536,
   0.03321126,
   0.03472968,
   0.03538057,
   0.03831254,
   0.04149264,
   0.04509602,
   0.05133696,
   0.05701146,
   0.06602182,
   0.1057039,
   0.1501544,
   0.2517213,
   0.6319464,
   0.709709,
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
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMinimum(0.1483493);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMaximum(1.851651);
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
   1.167743,
   1.072684,
   1.013201,
   1.027701,
   1.044179,
   1.007153,
   0.9838499,
   1.003187,
   0.9990002,
   1.009558,
   0.9986566,
   0.9434139,
   0.9094034,
   0.9111072,
   1.032103,
   1.053486,
   1.061259,
   0.9643956,
   0.8881738,
   0.9459275,
   1.144249,
   0.7990939,
   1.474688,
   8.318453};
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
   0.08319826,
   0.04321967,
   0.03446978,
   0.03266247,
   0.03233203,
   0.03126058,
   0.03070037,
   0.03098856,
   0.03315299,
   0.03470931,
   0.03571189,
   0.03560686,
   0.03676045,
   0.03942746,
   0.04504465,
   0.05028016,
   0.05713626,
   0.05980928,
   0.06713963,
   0.1077984,
   0.1705746,
   0.2216288,
   0.8514116,
   8.318453};
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
   0.08319826,
   0.04321967,
   0.03446978,
   0.03266247,
   0.03233203,
   0.03126058,
   0.03070037,
   0.03098856,
   0.03315299,
   0.03470931,
   0.03571189,
   0.03560686,
   0.03676045,
   0.03942746,
   0.04504465,
   0.05028016,
   0.05713626,
   0.05980928,
   0.06713963,
   0.1077984,
   0.1705746,
   0.2216288,
   0.8514116,
   8.318453};
   grae = new TGraphAsymmErrors(24,Graph1_fx3263,Graph1_fy3263,Graph1_felx3263,Graph1_fehx3263,Graph1_fely3263,Graph1_fehy3263);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1325532593263 = new TH1F("Graph_Graph_Graph_Graph1325532593263","Graph",100,0,1.056);
   Graph_Graph_Graph_Graph1325532593263->SetMinimum(0);
   Graph_Graph_Graph_Graph1325532593263->SetMaximum(18.3006);
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
   Sphericity_1->Range(-0.2025316,-2.127745,1.063291,4.259497);
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
   hframe__458->SetMaximum(7520.778);
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
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMinimum(0.4178681);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMaximum(1671.472);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2.171177);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,12.42534);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,16.86889);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,15.92013);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,22.41343);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,24.61275);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,24.05688);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,20.15786);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,22.34039);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,18.52889);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,17.08695);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,16.88637);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,14.17571);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,15.90062);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,12.12892);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,9.548913);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,5.698456);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,6.337543);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,3.689726);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,1.408149);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,2.824073);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.1418398);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.1396289);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.0002964762);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.527319);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.215506);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.705606);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.078878);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.978993);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.252631);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.707043);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.105397);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.957977);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.989348);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.86308);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.850947);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.559124);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,2.209557);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.542382);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.289897);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.007503);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.099538);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.9202397);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.3838323);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,1.683125);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.06582043);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.1208631);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.0001718432);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(45451);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,28.91745);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,124.1808);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,213.3044);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,273.9563);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,312.1215);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,321.0816);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,318.6149);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,309.6764);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,295.169);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,274.5706);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,246.4191);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,233.5528);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,212.6647);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,187.3471);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,162.2588);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,138.1629);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,115.3038);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,84.60796);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,58.45396);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,31.05914);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,12.53946);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,4.399497);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.9794955);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.1199124);
   TT_stack_2_stack_2_stack_2->SetBinError(1,1.309533);
   TT_stack_2_stack_2_stack_2->SetBinError(2,2.723194);
   TT_stack_2_stack_2_stack_2->SetBinError(3,3.555832);
   TT_stack_2_stack_2_stack_2->SetBinError(4,4.012338);
   TT_stack_2_stack_2_stack_2->SetBinError(5,4.294586);
   TT_stack_2_stack_2_stack_2->SetBinError(6,4.358481);
   TT_stack_2_stack_2_stack_2->SetBinError(7,4.314508);
   TT_stack_2_stack_2_stack_2->SetBinError(8,4.280951);
   TT_stack_2_stack_2_stack_2->SetBinError(9,4.178265);
   TT_stack_2_stack_2_stack_2->SetBinError(10,4.015089);
   TT_stack_2_stack_2_stack_2->SetBinError(11,3.798002);
   TT_stack_2_stack_2_stack_2->SetBinError(12,3.7283);
   TT_stack_2_stack_2_stack_2->SetBinError(13,3.544002);
   TT_stack_2_stack_2_stack_2->SetBinError(14,3.326794);
   TT_stack_2_stack_2_stack_2->SetBinError(15,3.091763);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.869315);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.625696);
   TT_stack_2_stack_2_stack_2->SetBinError(18,2.235576);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.876006);
   TT_stack_2_stack_2_stack_2->SetBinError(20,1.362899);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.8650856);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.5118754);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.2419089);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.08531706);
   TT_stack_2_stack_2_stack_2->SetEntries(70981);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,137.6129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,437.6543);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,622.5701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,673.4392);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,664.3357);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,684.9331);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,701.1867);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,714.8359);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,591.3993);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,544.8912);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,519.5459);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,493.6669);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,446.1282);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,382.8524);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,334.2827);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,268.9997);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,204.0834);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,178.6534);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,134.8898);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,48.9343);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,23.96357);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,11.72709);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.9152042);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,5.815333e-06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,12.00452);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,21.97811);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,26.84196);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,28.45351);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,28.48262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,28.97585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,29.2889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,29.34136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,27.54166);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,26.22222);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,25.65976);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,25.50513);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,23.49311);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,22.09698);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,20.82134);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,18.52684);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,16.45024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,15.16697);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,12.83959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,8.487166);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,5.593688);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,4.062459);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,1.256823);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.0001776633);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7515.688);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(1,0.09229381);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(2,0.7578162);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(3,0.2680704);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(4,1.166278);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(5,2.368611);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(6,2.306339);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(7,1.628409);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(8,1.17158);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(9,1.951937);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(10,2.028108);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(11,0.859286);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(12,1.765476);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(13,1.259112);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(14,0.3185529);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(15,0.6123613);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(16,0.5015117);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(17,0.9403133);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(18,0.7506163);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(19,0.4240352);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(20,0.1139767);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(21,-0.02319378);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(22,-0.03514134);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(23,0.03447125);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(1,0.06878572);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(2,0.2272947);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(3,0.3211854);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(4,0.4319907);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(5,0.4936297);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(6,0.5260521);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(7,0.5251188);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(8,0.5078372);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(9,0.510298);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(10,0.4974925);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(11,0.4896369);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(12,0.4565583);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(13,0.4327053);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(14,0.3624031);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(15,0.3412434);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(16,0.3322247);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(17,0.3114535);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(18,0.2714518);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(19,0.1988795);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(20,0.09771192);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(21,0.07559041);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(22,0.03514134);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(23,0.03447125);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetEntries(4205);
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
   168.7015,
   574.2604,
   852.7433,
   963.3156,
   998.8706,
   1030.627,
   1043.858,
   1044.67,
   908.9088,
   837.9907,
   783.0519,
   744.1061,
   672.9687,
   586.1001,
   508.6703,
   416.7116,
   325.0856,
   269.5989,
   197.0335,
   81.40159,
   39.3271,
   16.26843,
   2.034328,
   0.1202147,
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
   12.08724,
   22.25672,
   27.13013,
   28.81012,
   28.87247,
   29.38827,
   29.72848,
   29.72666,
   27.92552,
   26.60231,
   26.00614,
   25.84256,
   23.81001,
   22.45498,
   21.10607,
   18.79203,
   16.68891,
   15.37023,
   13.00851,
   8.604464,
   5.905136,
   4.095109,
   1.285587,
   0.08531742,
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
   12.08724,
   22.25672,
   27.13013,
   28.81012,
   28.87247,
   29.38827,
   29.72848,
   29.72666,
   27.92552,
   26.60231,
   26.00614,
   25.84256,
   23.81001,
   22.45498,
   21.10607,
   18.79203,
   16.68891,
   15.37023,
   13.00851,
   8.604464,
   5.905136,
   4.095109,
   1.285587,
   0.08531742,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMinimum(1.181837);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMaximum(1181.837);
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
   Data__460->SetBinContent(1,197);
   Data__460->SetBinContent(2,616);
   Data__460->SetBinContent(3,864);
   Data__460->SetBinContent(4,990);
   Data__460->SetBinContent(5,1043);
   Data__460->SetBinContent(6,1038);
   Data__460->SetBinContent(7,1027);
   Data__460->SetBinContent(8,1048);
   Data__460->SetBinContent(9,908);
   Data__460->SetBinContent(10,846);
   Data__460->SetBinContent(11,782);
   Data__460->SetBinContent(12,702);
   Data__460->SetBinContent(13,612);
   Data__460->SetBinContent(14,534);
   Data__460->SetBinContent(15,525);
   Data__460->SetBinContent(16,439);
   Data__460->SetBinContent(17,345);
   Data__460->SetBinContent(18,260);
   Data__460->SetBinContent(19,175);
   Data__460->SetBinContent(20,77);
   Data__460->SetBinContent(21,45);
   Data__460->SetBinContent(22,13);
   Data__460->SetBinContent(23,3);
   Data__460->SetBinContent(24,1);
   Data__460->SetBinContent(25,1);
   Data__460->SetBinError(1,14.03567);
   Data__460->SetBinError(2,24.81935);
   Data__460->SetBinError(3,29.39388);
   Data__460->SetBinError(4,31.46427);
   Data__460->SetBinError(5,32.29551);
   Data__460->SetBinError(6,32.21801);
   Data__460->SetBinError(7,32.04684);
   Data__460->SetBinError(8,32.37283);
   Data__460->SetBinError(9,30.13304);
   Data__460->SetBinError(10,29.08608);
   Data__460->SetBinError(11,27.96426);
   Data__460->SetBinError(12,26.49528);
   Data__460->SetBinError(13,24.73863);
   Data__460->SetBinError(14,23.10844);
   Data__460->SetBinError(15,22.91288);
   Data__460->SetBinError(16,20.95233);
   Data__460->SetBinError(17,18.57418);
   Data__460->SetBinError(18,16.12452);
   Data__460->SetBinError(19,13.22876);
   Data__460->SetBinError(20,8.774964);
   Data__460->SetBinError(21,6.708204);
   Data__460->SetBinError(22,3.605551);
   Data__460->SetBinError(23,1.732051);
   Data__460->SetBinError(24,1);
   Data__460->SetBinError(25,1);
   Data__460->SetEntries(13095);
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
   hframe_copy__461->SetMaximum(7520.778);
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
   hframe_copy__462->SetMaximum(7520.778);
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
