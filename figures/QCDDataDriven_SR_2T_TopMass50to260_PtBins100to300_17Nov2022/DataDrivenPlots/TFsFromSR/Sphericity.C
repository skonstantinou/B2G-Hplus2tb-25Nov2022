void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Fri Nov 18 13:27:46 2022) by ROOT version 6.20/02
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
   0.07677748,
   0.03863915,
   0.02865648,
   0.02658913,
   0.02469555,
   0.02445433,
   0.02473267,
   0.02595604,
   0.02624566,
   0.0273372,
   0.02849741,
   0.03002824,
   0.03194349,
   0.03371667,
   0.03592594,
   0.041833,
   0.04541924,
   0.05268007,
   0.06240567,
   0.087321,
   0.1284908,
   0.2417403,
   0.395624,
   0.5608523,
   -1.032161};
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
   0.07677748,
   0.03863915,
   0.02865648,
   0.02658913,
   0.02469555,
   0.02445433,
   0.02473267,
   0.02595604,
   0.02624566,
   0.0273372,
   0.02849741,
   0.03002824,
   0.03194349,
   0.03371667,
   0.03592594,
   0.041833,
   0.04541924,
   0.05268007,
   0.06240567,
   0.087321,
   0.1284908,
   0.2417403,
   0.395624,
   0.5608523,
   -1.032161};
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
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMinimum(0.3269772);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMaximum(1.673023);
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
   0.07677748,
   0.03863915,
   0.02865648,
   0.02658913,
   0.02469555,
   0.02445433,
   0.02473267,
   0.02595604,
   0.02624566,
   0.0273372,
   0.02849741,
   0.03002824,
   0.03194349,
   0.03371667,
   0.03592594,
   0.041833,
   0.04541924,
   0.05268007,
   0.06240567,
   0.087321,
   0.1284908,
   0.2417403,
   0.395624,
   0.5608523,
   -1.032161};
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
   0.07677748,
   0.03863915,
   0.02865648,
   0.02658913,
   0.02469555,
   0.02445433,
   0.02473267,
   0.02595604,
   0.02624566,
   0.0273372,
   0.02849741,
   0.03002824,
   0.03194349,
   0.03371667,
   0.03592594,
   0.041833,
   0.04541924,
   0.05268007,
   0.06240567,
   0.087321,
   0.1284908,
   0.2417403,
   0.395624,
   0.5608523,
   -1.032161};
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
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMinimum(0.3269772);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMaximum(1.673023);
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
   1.032582,
   1.083306,
   0.9906286,
   0.9923187,
   0.9913254,
   0.9621582,
   1.022704,
   0.9928342,
   1.009552,
   0.9869243,
   1.055403,
   1.024183,
   1.001201,
   0.9978727,
   0.994446,
   1.154791,
   1.023001,
   0.9985816,
   1.057525,
   0.9729309,
   1.327125,
   1.496334,
   0.138323};
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
   0.08375347,
   0.04354174,
   0.03162834,
   0.02919848,
   0.02793852,
   0.02720306,
   0.02847443,
   0.02901338,
   0.03004565,
   0.031462,
   0.03374806,
   0.03448602,
   0.03651005,
   0.03901991,
   0.04049697,
   0.05154087,
   0.0508962,
   0.0587401,
   0.07195547,
   0.09586573,
   0.1633578,
   0.3432825,
   0.138323};
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
   0.08375347,
   0.04354174,
   0.03162834,
   0.02919848,
   0.02793852,
   0.02720306,
   0.02847443,
   0.02901338,
   0.03004565,
   0.031462,
   0.03374806,
   0.03448602,
   0.03651005,
   0.03901991,
   0.04049697,
   0.05154087,
   0.0508962,
   0.0587401,
   0.07195547,
   0.09586573,
   0.1633578,
   0.3432825,
   0.138323};
   grae = new TGraphAsymmErrors(23,Graph1_fx3263,Graph1_fy3263,Graph1_felx3263,Graph1_fehx3263,Graph1_fely3263,Graph1_fehy3263);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1325532593263 = new TH1F("Graph_Graph_Graph_Graph1325532593263","Graph",100,0,1.012);
   Graph_Graph_Graph_Graph1325532593263->SetMinimum(0);
   Graph_Graph_Graph_Graph1325532593263->SetMaximum(2.023578);
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
   Sphericity_1->Range(-0.2025316,-2.129774,1.063291,4.358923);
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
   hframe__458->SetMaximum(9323.983);
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
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMinimum(0.5200808);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMaximum(2080.323);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,3.420353);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,20.2724);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,30.23193);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,37.36863);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,44.4995);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,45.81446);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,48.39978);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,39.19192);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,45.11139);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,40.2916);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,35.93812);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,37.37168);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,37.24004);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,30.66486);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,28.06158);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,23.33755);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,16.02249);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,11.97022);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,9.992287);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,5.558927);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,1.966652);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,1.03419);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.145301);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.01963696);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.001565798);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.7209341);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.930852);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.305543);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.4);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.545756);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.604637);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.952675);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.335509);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.553174);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.255119);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.098009);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.703656);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.208376);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,2.156665);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.999841);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.664303);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.307075);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.134524);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.151666);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.7459785);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.3701088);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.5164401);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.02099673);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.006545756);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.001565798);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(451608);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,51.94423);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,232.8414);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,420.843);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,548.7162);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,618.2466);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,648.7088);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,627.0898);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,605.0067);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,573.0961);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,534.9613);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,498.3566);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,449.3082);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,402.2882);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,352.4847);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,301.4694);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,254.0478);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,205.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,159.2168);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,105.18);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,60.441);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,24.43184);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,7.266448);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,2.027779);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.2701966);
   TT_stack_2_stack_2_stack_2->SetBinError(1,1.829491);
   TT_stack_2_stack_2_stack_2->SetBinError(2,3.837108);
   TT_stack_2_stack_2_stack_2->SetBinError(3,5.132708);
   TT_stack_2_stack_2_stack_2->SetBinError(4,5.867584);
   TT_stack_2_stack_2_stack_2->SetBinError(5,6.220357);
   TT_stack_2_stack_2_stack_2->SetBinError(6,6.339944);
   TT_stack_2_stack_2_stack_2->SetBinError(7,6.248592);
   TT_stack_2_stack_2_stack_2->SetBinError(8,6.10859);
   TT_stack_2_stack_2_stack_2->SetBinError(9,5.942688);
   TT_stack_2_stack_2_stack_2->SetBinError(10,5.737471);
   TT_stack_2_stack_2_stack_2->SetBinError(11,5.538895);
   TT_stack_2_stack_2_stack_2->SetBinError(12,5.258061);
   TT_stack_2_stack_2_stack_2->SetBinError(13,4.971152);
   TT_stack_2_stack_2_stack_2->SetBinError(14,4.649625);
   TT_stack_2_stack_2_stack_2->SetBinError(15,4.29933);
   TT_stack_2_stack_2_stack_2->SetBinError(16,3.950598);
   TT_stack_2_stack_2_stack_2->SetBinError(17,3.544921);
   TT_stack_2_stack_2_stack_2->SetBinError(18,3.117149);
   TT_stack_2_stack_2_stack_2->SetBinError(19,2.539538);
   TT_stack_2_stack_2_stack_2->SetBinError(20,1.925856);
   TT_stack_2_stack_2_stack_2->SetBinError(21,1.223091);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.6736654);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.3551056);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.1211443);
   TT_stack_2_stack_2_stack_2->SetEntries(133616);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,91.8392);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,318.2852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,539.2053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,577.8557);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,607.2708);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,605.6788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,585.8727);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,535.253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,500.1107);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,421.784);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,392.3656);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,374.4946);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,311.5696);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,272.2447);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,276.8367);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,157.3251);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,173.554);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,118.2234);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,89.07816);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,39.86577);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,23.33306);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,4.397065);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,5.056377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,-0.05374218);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,-0.05099931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,11.12955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,21.65648);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,27.81452);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,30.29192);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,30.63515);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,31.04801);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,30.42171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,29.90721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,28.62948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,26.54988);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,25.73462);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,25.17458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,23.36792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,21.49508);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,21.26202);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,17.67275);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,17.53437);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,14.88092);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,12.43764);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,9.010641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,6.260972);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,2.949844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,2.837939);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.05304963);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.05099931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4622.139);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(1,0.5017158);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(2,6.829513);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(3,18.01649);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(4,27.15086);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(5,36.12353);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(6,44.33043);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(7,50.08747);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(8,48.70189);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(9,51.00151);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(10,49.72244);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(11,48.49413);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(12,42.82749);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(13,37.77222);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(14,36.0668);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(15,28.16208);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(16,25.75624);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(17,21.8993);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(18,14.57256);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(19,8.911885);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(20,4.459588);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(21,1.815339);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(22,0.4593959);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(23,0.206124);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(24,0.07817878);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(25,-0.020558);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(1,0.2564053);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(2,0.8037756);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(3,1.276905);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(4,1.620328);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(5,1.862091);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(6,2.029166);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(7,2.111178);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(8,2.171601);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(9,2.160383);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(10,2.163066);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(11,2.110943);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(12,2.010111);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(13,1.930862);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(14,1.826122);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(15,1.70324);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(16,1.576008);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(17,1.393926);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(18,1.19642);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(19,0.9586376);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(20,0.6596936);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(21,0.4119415);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(22,0.2342796);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(23,0.1074885);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(24,0.03960517);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(25,0.020558);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetEntries(120993);
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
   147.2038,
   571.399,
   990.2803,
   1163.941,
   1270.017,
   1300.202,
   1261.362,
   1179.452,
   1118.318,
   997.0369,
   926.6603,
   861.1745,
   751.0978,
   655.3942,
   606.3677,
   434.7105,
   394.9166,
   289.4105,
   204.2505,
   105.8657,
   49.73155,
   12.6977,
   7.229457,
   0.2360914,
   -0.04943351};
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
   11.30194,
   22.07837,
   28.37794,
   30.94816,
   31.36377,
   31.79557,
   31.19685,
   30.6139,
   29.351,
   27.2562,
   26.40742,
   25.85955,
   23.99268,
   22.09771,
   21.78433,
   18.18524,
   17.93681,
   15.24616,
   12.74639,
   9.244298,
   6.390047,
   3.069546,
   2.860147,
   0.1324124,
   0.05102334};
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
   11.30194,
   22.07837,
   28.37794,
   30.94816,
   31.36377,
   31.79557,
   31.19685,
   30.6139,
   29.351,
   27.2562,
   26.40742,
   25.85955,
   23.99268,
   22.09771,
   21.78433,
   18.18524,
   17.93681,
   15.24616,
   12.74639,
   9.244298,
   6.390047,
   3.069546,
   2.860147,
   0.1324124,
   0.05102334};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMinimum(1.465199);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMaximum(1465.199);
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
   Data__460->SetBinContent(1,152);
   Data__460->SetBinContent(2,619);
   Data__460->SetBinContent(3,981);
   Data__460->SetBinContent(4,1155);
   Data__460->SetBinContent(5,1259);
   Data__460->SetBinContent(6,1251);
   Data__460->SetBinContent(7,1290);
   Data__460->SetBinContent(8,1171);
   Data__460->SetBinContent(9,1129);
   Data__460->SetBinContent(10,984);
   Data__460->SetBinContent(11,978);
   Data__460->SetBinContent(12,882);
   Data__460->SetBinContent(13,752);
   Data__460->SetBinContent(14,654);
   Data__460->SetBinContent(15,603);
   Data__460->SetBinContent(16,502);
   Data__460->SetBinContent(17,404);
   Data__460->SetBinContent(18,289);
   Data__460->SetBinContent(19,216);
   Data__460->SetBinContent(20,103);
   Data__460->SetBinContent(21,66);
   Data__460->SetBinContent(22,19);
   Data__460->SetBinContent(23,1);
   Data__460->SetBinError(1,12.32883);
   Data__460->SetBinError(2,24.87971);
   Data__460->SetBinError(3,31.32092);
   Data__460->SetBinError(4,33.98529);
   Data__460->SetBinError(5,35.48239);
   Data__460->SetBinError(6,35.36948);
   Data__460->SetBinError(7,35.91657);
   Data__460->SetBinError(8,34.21988);
   Data__460->SetBinError(9,33.6006);
   Data__460->SetBinError(10,31.36877);
   Data__460->SetBinError(11,31.27299);
   Data__460->SetBinError(12,29.69848);
   Data__460->SetBinError(13,27.42262);
   Data__460->SetBinError(14,25.57342);
   Data__460->SetBinError(15,24.55606);
   Data__460->SetBinError(16,22.40536);
   Data__460->SetBinError(17,20.09975);
   Data__460->SetBinError(18,17);
   Data__460->SetBinError(19,14.69694);
   Data__460->SetBinError(20,10.14889);
   Data__460->SetBinError(21,8.124038);
   Data__460->SetBinError(22,4.358899);
   Data__460->SetBinError(23,1);
   Data__460->SetEntries(15464);
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
   hframe_copy__461->SetMaximum(9323.983);
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
   hframe_copy__462->SetMaximum(9323.983);
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
