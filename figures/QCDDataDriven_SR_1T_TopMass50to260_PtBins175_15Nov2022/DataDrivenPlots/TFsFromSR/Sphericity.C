void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Fri Nov 18 13:27:35 2022) by ROOT version 6.20/02
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
   0.08818859,
   0.04815494,
   0.03995248,
   0.03770356,
   0.03652401,
   0.03623209,
   0.03734882,
   0.03944221,
   0.03996437,
   0.0418271,
   0.04422988,
   0.04580692,
   0.04917993,
   0.05486963,
   0.05578577,
   0.06872025,
   0.06996231,
   0.07991272,
   0.09474166,
   0.1460689,
   0.2030312,
   0.3217156,
   2.340443,
   -0.5215151};
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
   0.08818859,
   0.04815494,
   0.03995248,
   0.03770356,
   0.03652401,
   0.03623209,
   0.03734882,
   0.03944221,
   0.03996437,
   0.0418271,
   0.04422988,
   0.04580692,
   0.04917993,
   0.05486963,
   0.05578577,
   0.06872025,
   0.06996231,
   0.07991272,
   0.09474166,
   0.1460689,
   0.2030312,
   0.3217156,
   2.340443,
   -0.5215151};
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
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMinimum(-1.808531);
   Graph_Graph_Graph_BackgroundStatSystError325332573261->SetMaximum(3.808531);
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
   0.08818859,
   0.04815494,
   0.03995248,
   0.03770356,
   0.03652401,
   0.03623209,
   0.03734882,
   0.03944221,
   0.03996437,
   0.0418271,
   0.04422988,
   0.04580692,
   0.04917993,
   0.05486963,
   0.05578577,
   0.06872025,
   0.06996231,
   0.07991272,
   0.09474166,
   0.1460689,
   0.2030312,
   0.3217156,
   2.340443,
   -0.5215151,
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
   0.08818859,
   0.04815494,
   0.03995248,
   0.03770356,
   0.03652401,
   0.03623209,
   0.03734882,
   0.03944221,
   0.03996437,
   0.0418271,
   0.04422988,
   0.04580692,
   0.04917993,
   0.05486963,
   0.05578577,
   0.06872025,
   0.06996231,
   0.07991272,
   0.09474166,
   0.1460689,
   0.2030312,
   0.3217156,
   2.340443,
   -0.5215151,
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
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMinimum(-1.808531);
   Graph_Graph_Graph_BackgroundStatError325432583262->SetMaximum(3.808531);
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
   
   Double_t Graph1_fx3263[22] = {
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
   0.86};
   Double_t Graph1_fy3263[22] = {
   1.039269,
   1.141036,
   1.050306,
   1.043663,
   0.9837441,
   0.9743493,
   1.078,
   1.096693,
   1.033865,
   0.9912446,
   1.167272,
   0.8399481,
   0.9732792,
   1.164239,
   0.9141759,
   1.208131,
   1.115205,
   1.110501,
   1.034835,
   1.475011,
   1.308292,
   0.8972667};
   Double_t Graph1_felx3263[22] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
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
   Double_t Graph1_fely3263[22] = {
   0.09691231,
   0.05755764,
   0.044583,
   0.04171315,
   0.03913124,
   0.03836497,
   0.04192934,
   0.04462381,
   0.0443674,
   0.0450101,
   0.05153631,
   0.04476938,
   0.0519498,
   0.06332624,
   0.05736049,
   0.08001046,
   0.08048297,
   0.09007351,
   0.1029699,
   0.1843764,
   0.2429438,
   0.3172317};
   Double_t Graph1_fehx3263[22] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
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
   Double_t Graph1_fehy3263[22] = {
   0.09691231,
   0.05755764,
   0.044583,
   0.04171315,
   0.03913124,
   0.03836497,
   0.04192934,
   0.04462381,
   0.0443674,
   0.0450101,
   0.05153631,
   0.04476938,
   0.0519498,
   0.06332624,
   0.05736049,
   0.08001046,
   0.08048297,
   0.09007351,
   0.1029699,
   0.1843764,
   0.2429438,
   0.3172317};
   grae = new TGraphAsymmErrors(22,Graph1_fx3263,Graph1_fy3263,Graph1_felx3263,Graph1_fehx3263,Graph1_fely3263,Graph1_fehy3263);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1325532593263 = new TH1F("Graph_Graph_Graph_Graph1325532593263","Graph",100,0,0.968);
   Graph_Graph_Graph_Graph1325532593263->SetMinimum(0.4720998);
   Graph_Graph_Graph_Graph1325532593263->SetMaximum(1.767323);
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
   Sphericity_1->Range(-0.2025316,-2.123509,1.063291,4.051926);
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
   hframe__458->SetMaximum(4801.756);
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
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMinimum(0.2647921);
   StackedMCstackHist_stack_64_stack_65_stack_66->SetMaximum(1059.168);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1.988662);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,7.873581);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,12.7775);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,16.36014);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,19.44103);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,14.24049);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,16.28445);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,13.807);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,15.20715);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,13.11314);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,14.03931);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,11.41068);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,11.36027);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,9.602537);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,7.906798);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,7.448381);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,5.537637);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,5.011629);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,3.171172);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,1.196546);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.9901538);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.2835766);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.04794078);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.0002972887);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.6252503);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.188683);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.400093);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.658754);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.887199);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.643423);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.438078);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.350749);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.398349);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.205235);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.492053);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.44381);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.245196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.177373);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.020418);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.016823);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.5794163);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.7477575);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.6431245);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.2804441);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.3282081);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.06921446);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.01077522);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.0001775327);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(105982);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,26.38297);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,111.3735);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,161.8763);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,193.3565);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,213.8175);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,210.221);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,204.523);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,193.8414);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,182.2293);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,162.0278);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,153.826);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,138.6631);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,124.6246);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,110.3895);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,97.02428);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,77.963);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,66.38019);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,50.14595);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,35.60596);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,19.01345);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,8.646813);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,2.974766);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.9848472);
   TT_stack_2_stack_2_stack_2->SetBinError(1,1.319164);
   TT_stack_2_stack_2_stack_2->SetBinError(2,2.694248);
   TT_stack_2_stack_2_stack_2->SetBinError(3,3.232152);
   TT_stack_2_stack_2_stack_2->SetBinError(4,3.529356);
   TT_stack_2_stack_2_stack_2->SetBinError(5,3.698172);
   TT_stack_2_stack_2_stack_2->SetBinError(6,3.679616);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.623428);
   TT_stack_2_stack_2_stack_2->SetBinError(8,3.510925);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.386676);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.206675);
   TT_stack_2_stack_2_stack_2->SetBinError(11,3.105269);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.951406);
   TT_stack_2_stack_2_stack_2->SetBinError(13,2.805625);
   TT_stack_2_stack_2_stack_2->SetBinError(14,2.64143);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.464505);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.205406);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.051972);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.77687);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.496329);
   TT_stack_2_stack_2_stack_2->SetBinError(20,1.112927);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.7440147);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.4217501);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.2617318);
   TT_stack_2_stack_2_stack_2->SetEntries(42874);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,82.2831);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,225.1768);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,353.7637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,390.094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,409.1849);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,437.5187);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,392.3652);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,343.0983);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,327.7771);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,314.143);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,271.621);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,268.9998);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,224.6516);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,170.3264);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,172.9148);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,103.3098);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,100.2479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,81.7176);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,58.823);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,23.17951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,12.52933);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,5.657624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,-0.8856376);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,-0.007341402);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,9.648673);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,16.32219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,20.81567);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,22.27622);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,23.09437);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,23.64395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,22.56703);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,21.39446);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,20.66756);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,20.17658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,19.1307);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,18.9132);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,17.46844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,15.66496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,15.2686);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,12.73956);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,11.85489);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,10.76684);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,9.102234);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,6.233071);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,4.426372);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,2.836386);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.2235835);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.003669319);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3687.029);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(1,0.6633234);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(2,2.731739);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(3,5.83816);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(4,8.667865);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(5,12.14326);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(6,16.23435);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(7,13.50564);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(8,15.34755);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(9,15.16662);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(10,14.07853);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(11,15.94617);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(12,10.85529);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(13,11.03465);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(14,10.50045);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(15,9.364739);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(16,6.56106);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(17,4.887916);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(18,3.326376);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(19,2.784292);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(20,1.137275);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(21,0.1384356);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(22,0.2070613);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinContent(23,-0.04414954);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(1,0.1994986);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(2,0.5631421);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(3,0.7833052);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(4,0.977125);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(5,1.090648);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(6,1.167961);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(7,1.204931);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(8,1.207894);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(9,1.2188);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(10,1.187641);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(11,1.150086);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(12,1.095122);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(13,1.035093);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(14,1.006985);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(15,0.9209297);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(16,0.8289606);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(17,0.7327096);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(18,0.6077769);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(19,0.4947543);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(20,0.3034574);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(21,0.1832928);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(22,0.1127116);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetBinError(23,0.0445374);
   ChargedHiggs_HplusTBHplusToTB_M_800__459->SetEntries(35807);
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
   110.6547,
   344.4239,
   528.4175,
   599.8106,
   642.4435,
   661.9802,
   613.1725,
   550.7466,
   525.2136,
   489.2839,
   439.4863,
   419.0735,
   360.6365,
   290.3185,
   277.8459,
   188.7212,
   172.1657,
   136.8752,
   97.60013,
   43.38951,
   22.1663,
   8.915967,
   0.1471503,
   -0.007044113,
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
   9.758485,
   16.58571,
   21.11159,
   22.61499,
   23.46461,
   23.98493,
   22.90127,
   21.72267,
   20.98983,
   20.46533,
   19.43843,
   19.19647,
   17.73608,
   15.92967,
   15.49985,
   12.96897,
   12.04511,
   10.93807,
   9.246798,
   6.337857,
   4.500449,
   2.868405,
   0.3443969,
   0.003673611,
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
   9.758485,
   16.58571,
   21.11159,
   22.61499,
   23.46461,
   23.98493,
   22.90127,
   21.72267,
   20.98983,
   20.46533,
   19.43843,
   19.19647,
   17.73608,
   15.92967,
   15.49985,
   12.96897,
   12.04511,
   10.93807,
   9.246798,
   6.337857,
   4.500449,
   2.868405,
   0.3443969,
   0.003673611,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMinimum(0.7545619);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors325632603264->SetMaximum(754.5619);
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
   Data__460->SetBinContent(1,115);
   Data__460->SetBinContent(2,393);
   Data__460->SetBinContent(3,555);
   Data__460->SetBinContent(4,626);
   Data__460->SetBinContent(5,632);
   Data__460->SetBinContent(6,645);
   Data__460->SetBinContent(7,661);
   Data__460->SetBinContent(8,604);
   Data__460->SetBinContent(9,543);
   Data__460->SetBinContent(10,485);
   Data__460->SetBinContent(11,513);
   Data__460->SetBinContent(12,352);
   Data__460->SetBinContent(13,351);
   Data__460->SetBinContent(14,338);
   Data__460->SetBinContent(15,254);
   Data__460->SetBinContent(16,228);
   Data__460->SetBinContent(17,192);
   Data__460->SetBinContent(18,152);
   Data__460->SetBinContent(19,101);
   Data__460->SetBinContent(20,64);
   Data__460->SetBinContent(21,29);
   Data__460->SetBinContent(22,8);
   Data__460->SetBinError(1,10.72381);
   Data__460->SetBinError(2,19.82423);
   Data__460->SetBinError(3,23.55844);
   Data__460->SetBinError(4,25.01999);
   Data__460->SetBinError(5,25.13961);
   Data__460->SetBinError(6,25.39685);
   Data__460->SetBinError(7,25.70992);
   Data__460->SetBinError(8,24.57641);
   Data__460->SetBinError(9,23.30236);
   Data__460->SetBinError(10,22.02272);
   Data__460->SetBinError(11,22.6495);
   Data__460->SetBinError(12,18.76166);
   Data__460->SetBinError(13,18.73499);
   Data__460->SetBinError(14,18.38478);
   Data__460->SetBinError(15,15.93738);
   Data__460->SetBinError(16,15.09967);
   Data__460->SetBinError(17,13.85641);
   Data__460->SetBinError(18,12.32883);
   Data__460->SetBinError(19,10.04988);
   Data__460->SetBinError(20,8);
   Data__460->SetBinError(21,5.385165);
   Data__460->SetBinError(22,2.828427);
   Data__460->SetEntries(7845);
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
   hframe_copy__461->SetMaximum(4801.756);
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
   hframe_copy__462->SetMaximum(4801.756);
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
