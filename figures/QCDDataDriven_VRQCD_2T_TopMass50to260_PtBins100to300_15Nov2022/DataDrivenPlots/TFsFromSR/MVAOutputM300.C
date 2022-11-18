void MVAOutputM300()
{
//=========Macro generated from canvas: MVAOutputM300/MVAOutputM300
//=========  (Fri Nov 18 13:27:46 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM300 = new TCanvas("MVAOutputM300", "MVAOutputM300",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM300->SetHighLightColor(2);
   MVAOutputM300->Range(0,0,1,1);
   MVAOutputM300->SetFillColor(0);
   MVAOutputM300->SetBorderMode(0);
   MVAOutputM300->SetBorderSize(2);
   MVAOutputM300->SetTickx(1);
   MVAOutputM300->SetTicky(1);
   MVAOutputM300->SetLeftMargin(0.16);
   MVAOutputM300->SetRightMargin(0.05);
   MVAOutputM300->SetTopMargin(0.06);
   MVAOutputM300->SetBottomMargin(0.13);
   MVAOutputM300->SetFrameFillStyle(0);
   MVAOutputM300->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM300_2
   TPad *MVAOutputM300_2 = new TPad("MVAOutputM300_2", "MVAOutputM300_2",0,0,1,0.304);
   MVAOutputM300_2->Draw();
   MVAOutputM300_2->cd();
   MVAOutputM300_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM300_2->SetFillColor(0);
   MVAOutputM300_2->SetFillStyle(4000);
   MVAOutputM300_2->SetBorderMode(0);
   MVAOutputM300_2->SetBorderSize(2);
   MVAOutputM300_2->SetTickx(1);
   MVAOutputM300_2->SetTicky(1);
   MVAOutputM300_2->SetLeftMargin(0.16);
   MVAOutputM300_2->SetRightMargin(0.05);
   MVAOutputM300_2->SetTopMargin(0);
   MVAOutputM300_2->SetBottomMargin(0.3421053);
   MVAOutputM300_2->SetFrameFillStyle(0);
   MVAOutputM300_2->SetFrameBorderMode(0);
   MVAOutputM300_2->SetFrameFillStyle(0);
   MVAOutputM300_2->SetFrameBorderMode(0);
   
   TH1F *hframe__78 = new TH1F("hframe__78","",1000,0,1.01);
   hframe__78->SetMinimum(0.3);
   hframe__78->SetMaximum(1.7);
   hframe__78->SetDirectory(0);
   hframe__78->SetStats(0);
   hframe__78->SetLineStyle(0);
   hframe__78->SetMarkerStyle(20);
   hframe__78->GetXaxis()->SetTitle("DNN Output");
   hframe__78->GetXaxis()->SetLabelFont(43);
   hframe__78->GetXaxis()->SetLabelOffset(0.007);
   hframe__78->GetXaxis()->SetLabelSize(27);
   hframe__78->GetXaxis()->SetTitleSize(33);
   hframe__78->GetXaxis()->SetTitleOffset(2.960526);
   hframe__78->GetXaxis()->SetTitleFont(43);
   hframe__78->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__78->GetYaxis()->SetNdivisions(505);
   hframe__78->GetYaxis()->SetLabelFont(43);
   hframe__78->GetYaxis()->SetLabelOffset(0.007);
   hframe__78->GetYaxis()->SetLabelSize(21);
   hframe__78->GetYaxis()->SetTitleSize(33);
   hframe__78->GetYaxis()->SetTitleOffset(1.5625);
   hframe__78->GetYaxis()->SetTitleFont(43);
   hframe__78->GetZaxis()->SetLabelFont(43);
   hframe__78->GetZaxis()->SetLabelOffset(0.007);
   hframe__78->GetZaxis()->SetLabelSize(27);
   hframe__78->GetZaxis()->SetTitleSize(33);
   hframe__78->GetZaxis()->SetTitleOffset(1);
   hframe__78->GetZaxis()->SetTitleFont(43);
   hframe__78->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3045[19] = {
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
   Double_t BackgroundStatSystError_fy3045[19] = {
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
   Double_t BackgroundStatSystError_felx3045[19] = {
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
   Double_t BackgroundStatSystError_fely3045[19] = {
   0.04244334,
   0.0463138,
   0.04299071,
   0.03910687,
   0.03546882,
   0.03230518,
   0.0301726,
   0.02848954,
   0.02688838,
   0.02565484,
   0.0250566,
   0.02511275,
   0.02757949,
   0.03320649,
   0.0455112,
   0.08108017,
   0.1772445,
   0.5259983,
   0.9967671};
   Double_t BackgroundStatSystError_fehx3045[19] = {
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
   Double_t BackgroundStatSystError_fehy3045[19] = {
   0.04244334,
   0.0463138,
   0.04299071,
   0.03910687,
   0.03546882,
   0.03230518,
   0.0301726,
   0.02848954,
   0.02688838,
   0.02565484,
   0.0250566,
   0.02511275,
   0.02757949,
   0.03320649,
   0.0455112,
   0.08108017,
   0.1772445,
   0.5259983,
   0.9967671};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3045,BackgroundStatSystError_fy3045,BackgroundStatSystError_felx3045,BackgroundStatSystError_fehx3045,BackgroundStatSystError_fely3045,BackgroundStatSystError_fehy3045);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1221;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError303730413045 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError303730413045","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMinimum(0.002909649);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMaximum(2.19612);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError303730413045);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3046[19] = {
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
   Double_t BackgroundStatError_fy3046[19] = {
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
   Double_t BackgroundStatError_felx3046[19] = {
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
   Double_t BackgroundStatError_fely3046[19] = {
   0.04244334,
   0.0463138,
   0.04299071,
   0.03910687,
   0.03546882,
   0.03230518,
   0.0301726,
   0.02848954,
   0.02688838,
   0.02565484,
   0.0250566,
   0.02511275,
   0.02757949,
   0.03320649,
   0.0455112,
   0.08108017,
   0.1772445,
   0.5259983,
   0.9967671};
   Double_t BackgroundStatError_fehx3046[19] = {
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
   Double_t BackgroundStatError_fehy3046[19] = {
   0.04244334,
   0.0463138,
   0.04299071,
   0.03910687,
   0.03546882,
   0.03230518,
   0.0301726,
   0.02848954,
   0.02688838,
   0.02565484,
   0.0250566,
   0.02511275,
   0.02757949,
   0.03320649,
   0.0455112,
   0.08108017,
   0.1772445,
   0.5259983,
   0.9967671};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3046,BackgroundStatError_fy3046,BackgroundStatError_felx3046,BackgroundStatError_fehx3046,BackgroundStatError_fely3046,BackgroundStatError_fehy3046);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1220;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError303830423046 = new TH1F("Graph_Graph_Graph_BackgroundStatError303830423046","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMinimum(0.002909649);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMaximum(2.19612);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError303830423046);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx12[2] = {
   0,
   1.01};
   Double_t Graph0_fy12[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx12,Graph0_fy12);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0101112 = new TH1F("Graph_Graph_Graph_Graph0101112","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0101112->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0101112->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0101112->SetDirectory(0);
   Graph_Graph_Graph_Graph0101112->SetStats(0);
   Graph_Graph_Graph_Graph0101112->SetLineStyle(0);
   Graph_Graph_Graph_Graph0101112->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0101112);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3047[19] = {
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
   Double_t Graph1_fy3047[19] = {
   0.9805309,
   0.8976285,
   1.045334,
   0.9625664,
   1.063274,
   1.026481,
   1.037113,
   0.9105867,
   0.9863555,
   0.9599559,
   1.006309,
   1.051621,
   1.023052,
   0.9866889,
   1.032283,
   1.228477,
   1.11164,
   0.8853999,
   17.63193};
   Double_t Graph1_felx3047[19] = {
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
   Double_t Graph1_fely3047[19] = {
   0.04411617,
   0.04737502,
   0.04776254,
   0.04104397,
   0.03913965,
   0.03560824,
   0.03307878,
   0.02892574,
   0.02904817,
   0.02733819,
   0.02725734,
   0.02791694,
   0.03023396,
   0.03622249,
   0.05073392,
   0.09711961,
   0.1996564,
   0.3959629,
   17.63193};
   Double_t Graph1_fehx3047[19] = {
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
   Double_t Graph1_fehy3047[19] = {
   0.04411617,
   0.04737502,
   0.04776254,
   0.04104397,
   0.03913965,
   0.03560824,
   0.03307878,
   0.02892574,
   0.02904817,
   0.02733819,
   0.02725734,
   0.02791694,
   0.03023396,
   0.03622249,
   0.05073392,
   0.09711961,
   0.1996564,
   0.3959629,
   17.63193};
   grae = new TGraphAsymmErrors(19,Graph1_fx3047,Graph1_fy3047,Graph1_felx3047,Graph1_fehx3047,Graph1_fely3047,Graph1_fehy3047);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1303930433047 = new TH1F("Graph_Graph_Graph_Graph1303930433047","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1303930433047->SetMinimum(1.598721e-14);
   Graph_Graph_Graph_Graph1303930433047->SetMaximum(38.79024);
   Graph_Graph_Graph_Graph1303930433047->SetDirectory(0);
   Graph_Graph_Graph_Graph1303930433047->SetStats(0);
   Graph_Graph_Graph_Graph1303930433047->SetLineStyle(0);
   Graph_Graph_Graph_Graph1303930433047->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1303930433047);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__79 = new TH1F("hframe_copy__79","",1000,0,1.01);
   hframe_copy__79->SetMinimum(0.3);
   hframe_copy__79->SetMaximum(1.7);
   hframe_copy__79->SetDirectory(0);
   hframe_copy__79->SetStats(0);
   hframe_copy__79->SetLineStyle(0);
   hframe_copy__79->SetMarkerStyle(20);
   hframe_copy__79->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__79->GetXaxis()->SetLabelFont(43);
   hframe_copy__79->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__79->GetXaxis()->SetLabelSize(27);
   hframe_copy__79->GetXaxis()->SetTitleSize(33);
   hframe_copy__79->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__79->GetXaxis()->SetTitleFont(43);
   hframe_copy__79->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__79->GetYaxis()->SetNdivisions(505);
   hframe_copy__79->GetYaxis()->SetLabelFont(43);
   hframe_copy__79->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__79->GetYaxis()->SetLabelSize(21);
   hframe_copy__79->GetYaxis()->SetTitleSize(33);
   hframe_copy__79->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__79->GetYaxis()->SetTitleFont(43);
   hframe_copy__79->GetZaxis()->SetLabelFont(43);
   hframe_copy__79->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__79->GetZaxis()->SetLabelSize(27);
   hframe_copy__79->GetZaxis()->SetTitleSize(33);
   hframe_copy__79->GetZaxis()->SetTitleOffset(1);
   hframe_copy__79->GetZaxis()->SetTitleFont(43);
   hframe_copy__79->Draw("sameaxis");
   MVAOutputM300_2->Modified();
   MVAOutputM300->cd();
  
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
   MVAOutputM300->cd();
  
// ------------>Primitives in pad: MVAOutputM300_1
   TPad *MVAOutputM300_1 = new TPad("MVAOutputM300_1", "MVAOutputM300_1",0,0.2897959,1,1);
   MVAOutputM300_1->Draw();
   MVAOutputM300_1->cd();
   MVAOutputM300_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM300_1->SetFillColor(0);
   MVAOutputM300_1->SetFillStyle(4000);
   MVAOutputM300_1->SetBorderMode(0);
   MVAOutputM300_1->SetBorderSize(2);
   MVAOutputM300_1->SetLogy();
   MVAOutputM300_1->SetTickx(1);
   MVAOutputM300_1->SetTicky(1);
   MVAOutputM300_1->SetLeftMargin(0.16);
   MVAOutputM300_1->SetRightMargin(0.05);
   MVAOutputM300_1->SetTopMargin(0.06);
   MVAOutputM300_1->SetBottomMargin(0.02);
   MVAOutputM300_1->SetFrameFillStyle(0);
   MVAOutputM300_1->SetFrameBorderMode(0);
   MVAOutputM300_1->SetFrameFillStyle(0);
   MVAOutputM300_1->SetFrameBorderMode(0);
   
   TH1F *hframe__80 = new TH1F("hframe__80","",1000,0,1.01);
   hframe__80->SetMinimum(0.01);
   hframe__80->SetMaximum(500000);
   hframe__80->SetDirectory(0);
   hframe__80->SetStats(0);
   hframe__80->SetLineStyle(0);
   hframe__80->SetMarkerStyle(20);
   hframe__80->GetXaxis()->SetLabelFont(43);
   hframe__80->GetXaxis()->SetLabelOffset(0.007);
   hframe__80->GetXaxis()->SetLabelSize(0);
   hframe__80->GetXaxis()->SetTitleSize(0);
   hframe__80->GetXaxis()->SetTitleOffset(0.9);
   hframe__80->GetXaxis()->SetTitleFont(43);
   hframe__80->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__80->GetYaxis()->SetLabelFont(43);
   hframe__80->GetYaxis()->SetLabelOffset(0.007);
   hframe__80->GetYaxis()->SetLabelSize(27);
   hframe__80->GetYaxis()->SetTitleSize(33);
   hframe__80->GetYaxis()->SetTitleOffset(1.5625);
   hframe__80->GetYaxis()->SetTitleFont(43);
   hframe__80->GetZaxis()->SetLabelFont(43);
   hframe__80->GetZaxis()->SetLabelOffset(0.007);
   hframe__80->GetZaxis()->SetLabelSize(27);
   hframe__80->GetZaxis()->SetTitleSize(33);
   hframe__80->GetZaxis()->SetTitleOffset(1);
   hframe__80->GetZaxis()->SetTitleFont(43);
   hframe__80->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis67[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_10_stack_11_stack_12 = new TH1F("StackedMCstackHist_stack_10_stack_11_stack_12","StackedMCstackHist",19, xAxis67);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMinimum(10.83564);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMaximum(43342.55);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetDirectory(0);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetStats(0);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetLineStyle(0);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMarkerStyle(20);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_10_stack_11_stack_12);
   
   Double_t xAxis68[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM300Inclusive",19, xAxis68);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,98.60165);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,189.5432);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,208.4919);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,266.0845);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,278.8416);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,399.7797);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,409.2845);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,406.5399);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,512.7559);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,524.8055);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,654.1924);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,596.2512);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,465.1407);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,395.2643);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,144.1559);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,54.80277);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,6.460064);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,-0.3426726);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.003673049);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,13.31239);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,26.6889);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,26.39317);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,33.06029);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,31.72822);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,50.01532);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,38.74338);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,40.77763);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,43.35051);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,57.44217);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,58.82309);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,57.71386);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,41.42905);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,41.123);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,26.61498);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,11.48051);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,2.963299);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,2.01092);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.003673049);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1230.554);
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
   Double_t xAxis69[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM300Inclusive",19, xAxis69);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1247.83);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1828.68);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2423.191);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2999.062);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3647.822);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4425.223);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5000.692);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5943.771);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,6979.46);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,7950.903);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,8726.18);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,8820.099);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,7958.206);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,5679.895);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2989.756);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1048.389);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,243.2799);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,27.82824);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1.130633);
   TT_stack_2_stack_2_stack_2->SetBinError(1,27.23493);
   TT_stack_2_stack_2_stack_2->SetBinError(2,46.51291);
   TT_stack_2_stack_2_stack_2->SetBinError(3,53.57755);
   TT_stack_2_stack_2_stack_2->SetBinError(4,59.79245);
   TT_stack_2_stack_2_stack_2->SetBinError(5,65.60449);
   TT_stack_2_stack_2_stack_2->SetBinError(6,72.14445);
   TT_stack_2_stack_2_stack_2->SetBinError(7,76.61734);
   TT_stack_2_stack_2_stack_2->SetBinError(8,83.46778);
   TT_stack_2_stack_2_stack_2->SetBinError(9,90.52397);
   TT_stack_2_stack_2_stack_2->SetBinError(10,97.118);
   TT_stack_2_stack_2_stack_2->SetBinError(11,101.4718);
   TT_stack_2_stack_2_stack_2->SetBinError(12,102.4755);
   TT_stack_2_stack_2_stack_2->SetBinError(13,96.97017);
   TT_stack_2_stack_2_stack_2->SetBinError(14,82.03177);
   TT_stack_2_stack_2_stack_2->SetBinError(15,59.5115);
   TT_stack_2_stack_2_stack_2->SetBinError(16,35.06186);
   TT_stack_2_stack_2_stack_2->SetBinError(17,16.90565);
   TT_stack_2_stack_2_stack_2->SetBinError(18,5.715045);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.130633);
   TT_stack_2_stack_2_stack_2->SetEntries(66505.24);
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
   Double_t xAxis70[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM300Inclusive",19, xAxis70);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,3691.656);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,5980.631);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,6532.85);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8162.637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9954.991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,11366.23);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,13546.49);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,15415.88);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,15886.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,17212.97);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,17708.72);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,17570.57);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,13960.65);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,8965.042);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4887.148);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1501.66);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,307.9946);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,85.45776);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,211.6736);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,366.5555);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,389.4365);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,441.6512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,486.943);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,515.6416);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,565.4853);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,613.1109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,620.5589);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,649.3081);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,668.5501);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,667.4328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,608.2665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,490.93);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,359.1798);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,207.9545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,97.35403);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,59.09826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7070.896);
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
   Double_t xAxis71[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__81 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__81","h_SR_MVAOutputM300Inclusive",19, xAxis71);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(1,6.928107);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(2,14.55146);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(3,6.753428);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(4,14.36148);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(5,12.0376);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(6,18.45321);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(7,39.85076);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(8,55.54241);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(9,49.59211);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(10,50.82967);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(11,52.26197);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(12,46.68465);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(13,22.20688);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(14,14.30604);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(15,7.934055);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(16,3.557183);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(17,2.437297);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(1,3.321505);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(2,5.788428);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(3,6.475485);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(4,7.655674);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(5,8.99498);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(6,9.758552);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(7,10.06131);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(8,10.92184);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(9,11.15944);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(10,11.2428);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(11,11.15456);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(12,10.3773);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(13,9.567912);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(14,7.238726);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(15,5.551492);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(16,4.009228);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(17,1.770912);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetEntries(143.5606);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3048[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3048[19] = {
   5038.087,
   7998.854,
   9164.533,
   11427.78,
   13881.65,
   16191.24,
   18956.46,
   21766.19,
   23378.99,
   25688.68,
   27089.1,
   26986.92,
   22384,
   15040.2,
   8021.06,
   2604.852,
   557.7346,
   112.9433,
   1.134306};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3048[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3048[19] = {
   213.8333,
   370.4574,
   393.9898,
   446.9048,
   492.3659,
   523.0608,
   571.9659,
   620.1086,
   628.6233,
   659.039,
   678.7606,
   677.7157,
   617.3392,
   499.4323,
   365.0481,
   211.2018,
   98.8554,
   59.40799,
   1.130639};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3048[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3048[19] = {
   213.8333,
   370.4574,
   393.9898,
   446.9048,
   492.3659,
   523.0608,
   571.9659,
   620.1086,
   628.6233,
   659.039,
   678.7606,
   677.7157,
   617.3392,
   499.4323,
   365.0481,
   211.2018,
   98.8554,
   59.40799,
   1.130639};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3048,BkgSum-SR-Inclusive_sum_errors_fy3048,BkgSum-SR-Inclusive_sum_errors_felx3048,BkgSum-SR-Inclusive_sum_errors_fehx3048,BkgSum-SR-Inclusive_sum_errors_fely3048,BkgSum-SR-Inclusive_sum_errors_fehy3048);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1219;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMinimum(0.003300432);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMaximum(30544.64);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors304030443048);
   
   grae->Draw("e2 ");
   Double_t xAxis72[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__82 = new TH1F("Data__82","h_SR_MVAOutputM300Inclusive",19, xAxis72);
   Data__82->SetBinContent(1,4940);
   Data__82->SetBinContent(2,7180);
   Data__82->SetBinContent(3,9580);
   Data__82->SetBinContent(4,11000);
   Data__82->SetBinContent(5,14760);
   Data__82->SetBinContent(6,16620);
   Data__82->SetBinContent(7,19660);
   Data__82->SetBinContent(8,19820);
   Data__82->SetBinContent(9,23060);
   Data__82->SetBinContent(10,24660);
   Data__82->SetBinContent(11,27260);
   Data__82->SetBinContent(12,28380);
   Data__82->SetBinContent(13,22900);
   Data__82->SetBinContent(14,14840);
   Data__82->SetBinContent(15,8280);
   Data__82->SetBinContent(16,3200);
   Data__82->SetBinContent(17,620);
   Data__82->SetBinContent(18,100);
   Data__82->SetBinContent(19,20);
   Data__82->SetBinError(1,222.2611);
   Data__82->SetBinError(2,378.9459);
   Data__82->SetBinError(3,437.7214);
   Data__82->SetBinError(4,469.0416);
   Data__82->SetBinError(5,543.3231);
   Data__82->SetBinError(6,576.5414);
   Data__82->SetBinError(7,627.0566);
   Data__82->SetBinError(8,629.603);
   Data__82->SetBinError(9,679.1171);
   Data__82->SetBinError(10,702.282);
   Data__82->SetBinError(11,738.3766);
   Data__82->SetBinError(12,753.3923);
   Data__82->SetBinError(13,676.757);
   Data__82->SetBinError(14,544.7935);
   Data__82->SetBinError(15,406.9398);
   Data__82->SetBinError(16,252.9822);
   Data__82->SetBinError(17,111.3553);
   Data__82->SetBinError(18,44.72136);
   Data__82->SetBinError(19,20);
   Data__82->SetEntries(12968.7);
   Data__82->SetDirectory(0);
   Data__82->SetFillStyle(3001);
   Data__82->SetLineWidth(2);
   Data__82->SetMarkerStyle(20);
   Data__82->SetMarkerSize(1.2);
   Data__82->GetXaxis()->SetRange(1,200);
   Data__82->GetXaxis()->SetLabelFont(42);
   Data__82->GetXaxis()->SetTitleOffset(1);
   Data__82->GetXaxis()->SetTitleFont(42);
   Data__82->GetYaxis()->SetLabelFont(42);
   Data__82->GetYaxis()->SetTitleFont(42);
   Data__82->GetZaxis()->SetLabelFont(42);
   Data__82->GetZaxis()->SetTitleOffset(1);
   Data__82->GetZaxis()->SetTitleFont(42);
   Data__82->Draw("EP same");
   
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

   ci = 1219;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1219;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__83 = new TH1F("hframe_copy__83","",1000,0,1.01);
   hframe_copy__83->SetMinimum(0.01);
   hframe_copy__83->SetMaximum(500000);
   hframe_copy__83->SetDirectory(0);
   hframe_copy__83->SetStats(0);
   hframe_copy__83->SetLineStyle(0);
   hframe_copy__83->SetMarkerStyle(20);
   hframe_copy__83->GetXaxis()->SetLabelFont(43);
   hframe_copy__83->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__83->GetXaxis()->SetLabelSize(0);
   hframe_copy__83->GetXaxis()->SetTitleSize(0);
   hframe_copy__83->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__83->GetXaxis()->SetTitleFont(43);
   hframe_copy__83->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__83->GetYaxis()->SetLabelFont(43);
   hframe_copy__83->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__83->GetYaxis()->SetLabelSize(27);
   hframe_copy__83->GetYaxis()->SetTitleSize(33);
   hframe_copy__83->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__83->GetYaxis()->SetTitleFont(43);
   hframe_copy__83->GetZaxis()->SetLabelFont(43);
   hframe_copy__83->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__83->GetZaxis()->SetLabelSize(27);
   hframe_copy__83->GetZaxis()->SetTitleSize(33);
   hframe_copy__83->GetZaxis()->SetTitleOffset(1);
   hframe_copy__83->GetZaxis()->SetTitleFont(43);
   hframe_copy__83->Draw("sameaxis");
   
   TH1F *hframe_copy__84 = new TH1F("hframe_copy__84","",1000,0,1.01);
   hframe_copy__84->SetMinimum(0.01);
   hframe_copy__84->SetMaximum(500000);
   hframe_copy__84->SetDirectory(0);
   hframe_copy__84->SetStats(0);
   hframe_copy__84->SetLineStyle(0);
   hframe_copy__84->SetMarkerStyle(20);
   hframe_copy__84->GetXaxis()->SetLabelFont(43);
   hframe_copy__84->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__84->GetXaxis()->SetLabelSize(0);
   hframe_copy__84->GetXaxis()->SetTitleSize(0);
   hframe_copy__84->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__84->GetXaxis()->SetTitleFont(43);
   hframe_copy__84->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__84->GetYaxis()->SetLabelFont(43);
   hframe_copy__84->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__84->GetYaxis()->SetLabelSize(27);
   hframe_copy__84->GetYaxis()->SetTitleSize(33);
   hframe_copy__84->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__84->GetYaxis()->SetTitleFont(43);
   hframe_copy__84->GetZaxis()->SetLabelFont(43);
   hframe_copy__84->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__84->GetZaxis()->SetLabelSize(27);
   hframe_copy__84->GetZaxis()->SetTitleSize(33);
   hframe_copy__84->GetZaxis()->SetTitleOffset(1);
   hframe_copy__84->GetZaxis()->SetTitleFont(43);
   hframe_copy__84->Draw("sameaxis");
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
   MVAOutputM300_1->Modified();
   MVAOutputM300->cd();
   MVAOutputM300->Modified();
   MVAOutputM300->cd();
   MVAOutputM300->SetSelected(MVAOutputM300);
}
