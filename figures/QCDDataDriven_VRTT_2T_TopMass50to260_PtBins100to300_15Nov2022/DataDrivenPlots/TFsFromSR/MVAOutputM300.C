void MVAOutputM300()
{
//=========Macro generated from canvas: MVAOutputM300/MVAOutputM300
//=========  (Fri Nov 18 13:27:28 2022) by ROOT version 6.20/02
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
   0.03620008,
   0.0298724,
   0.02466574,
   0.02014345,
   0.01689931,
   0.01406316,
   0.01198441,
   0.01042987,
   0.009358228,
   0.008631366,
   0.008134296,
   0.008042336,
   0.008804617,
   0.0109846,
   0.01561941,
   0.02489103,
   0.05546781,
   0.2627448,
   1};
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
   0.03620008,
   0.0298724,
   0.02466574,
   0.02014345,
   0.01689931,
   0.01406316,
   0.01198441,
   0.01042987,
   0.009358228,
   0.008631366,
   0.008134296,
   0.008042336,
   0.008804617,
   0.0109846,
   0.01561941,
   0.02489103,
   0.05546781,
   0.2627448,
   1};
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
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMinimum(1.594973e-08);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMaximum(2.2);
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
   0.03620008,
   0.0298724,
   0.02466574,
   0.02014345,
   0.01689931,
   0.01406316,
   0.01198441,
   0.01042987,
   0.009358228,
   0.008631366,
   0.008134296,
   0.008042336,
   0.008804617,
   0.0109846,
   0.01561941,
   0.02489103,
   0.05546781,
   0.2627448,
   1};
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
   0.03620008,
   0.0298724,
   0.02466574,
   0.02014345,
   0.01689931,
   0.01406316,
   0.01198441,
   0.01042987,
   0.009358228,
   0.008631366,
   0.008134296,
   0.008042336,
   0.008804617,
   0.0109846,
   0.01561941,
   0.02489103,
   0.05546781,
   0.2627448,
   1};
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
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMinimum(1.594973e-08);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMaximum(2.2);
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
   
   Double_t Graph1_fx3047[18] = {
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
   0.925};
   Double_t Graph1_fy3047[18] = {
   0.9595273,
   0.9543065,
   1.005871,
   1.010372,
   1.042011,
   0.9826685,
   0.9651883,
   0.9411012,
   0.9415496,
   0.9355379,
   0.938203,
   0.9446424,
   0.9135878,
   0.9208864,
   0.9215891,
   0.8722898,
   0.9971202,
   1.184227};
   Double_t Graph1_felx3047[18] = {
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
   0.025};
   Double_t Graph1_fely3047[18] = {
   0.05196132,
   0.04508675,
   0.03730569,
   0.03081607,
   0.02613207,
   0.02125216,
   0.0182111,
   0.0157862,
   0.01422839,
   0.01322654,
   0.01248498,
   0.01243058,
   0.01296032,
   0.01579075,
   0.0220239,
   0.03282906,
   0.07625169,
   0.3947423};
   Double_t Graph1_fehx3047[18] = {
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
   0.025};
   Double_t Graph1_fehy3047[18] = {
   0.05196132,
   0.04508675,
   0.03730569,
   0.03081607,
   0.02613207,
   0.02125216,
   0.0182111,
   0.0157862,
   0.01422839,
   0.01322654,
   0.01248498,
   0.01243058,
   0.01296032,
   0.01579075,
   0.0220239,
   0.03282906,
   0.07625169,
   0.3947423};
   grae = new TGraphAsymmErrors(18,Graph1_fx3047,Graph1_fy3047,Graph1_felx3047,Graph1_fehx3047,Graph1_fely3047,Graph1_fehy3047);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1303930433047 = new TH1F("Graph_Graph_Graph_Graph1303930433047","Graph",100,0,1.045);
   Graph_Graph_Graph_Graph1303930433047->SetMinimum(0.7105361);
   Graph_Graph_Graph_Graph1303930433047->SetMaximum(1.657918);
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
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMinimum(48.9074);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMaximum(195629.6);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,102.0955);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,283.5132);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,466.5228);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,582.7797);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,862.3427);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1181.511);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1494.935);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1827.075);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,2257.545);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,2536.349);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,3071.77);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,2888.797);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,2652.38);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1858.425);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,992.4739);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,358.3818);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,109.2514);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,2.463108);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,15.5079);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,34.50269);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,43.22875);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,50.35902);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,61.60602);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,73.72283);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,90.38497);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,97.28103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,102.1078);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,110.1111);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,127.795);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,109.2221);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,103.7022);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,85.91597);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,62.71607);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,35.99022);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,18.39733);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.309549);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5163.414);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2721.107);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,7308.766);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,10949.16);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,16591.69);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,23907.31);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,33960.97);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,46575.68);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,60467.85);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,75106.14);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,88901.29);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,100326.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,103693.3);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,90494.92);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,60623.64);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,31582.35);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,12880.31);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,2845.758);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,115.8451);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.7938436);
   TT_stack_2_stack_2_stack_2->SetBinError(1,38.40622);
   TT_stack_2_stack_2_stack_2->SetBinError(2,89.382);
   TT_stack_2_stack_2_stack_2->SetBinError(3,109.1617);
   TT_stack_2_stack_2_stack_2->SetBinError(4,134.6888);
   TT_stack_2_stack_2_stack_2->SetBinError(5,161.3376);
   TT_stack_2_stack_2_stack_2->SetBinError(6,192.2357);
   TT_stack_2_stack_2_stack_2->SetBinError(7,224.8502);
   TT_stack_2_stack_2_stack_2->SetBinError(8,256.671);
   TT_stack_2_stack_2_stack_2->SetBinError(9,286.5917);
   TT_stack_2_stack_2_stack_2->SetBinError(10,312.5849);
   TT_stack_2_stack_2_stack_2->SetBinError(11,332.7099);
   TT_stack_2_stack_2_stack_2->SetBinError(12,338.9507);
   TT_stack_2_stack_2_stack_2->SetBinError(13,317.3586);
   TT_stack_2_stack_2_stack_2->SetBinError(14,260.0889);
   TT_stack_2_stack_2_stack_2->SetBinError(15,187.709);
   TT_stack_2_stack_2_stack_2->SetBinError(16,119.8599);
   TT_stack_2_stack_2_stack_2->SetBinError(17,56.11014);
   TT_stack_2_stack_2_stack_2->SetBinError(18,11.3166);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.7938436);
   TT_stack_2_stack_2_stack_2->SetEntries(699426.2);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,730.6309);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1796.737);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3039.456);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,4104.812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,5748.257);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,8371.686);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,10135.64);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13233.62);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,15653.19);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,15516.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,16980.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,15686.36);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,15632.6);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,11381.55);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,5424.763);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2948.59);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,474.868);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,33.68966);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,121.7992);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,263.6005);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,336.6608);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,403.7989);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,485.9566);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,576.2717);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,654.1204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,738.3842);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,815.575);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,861.6248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,912.0325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,916.5749);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,897.6881);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,763.7285);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,559.5634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,382.9899);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,180.8519);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,38.27736);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3143.353);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(1,9.640882);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(2,25.79677);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(3,28.32324);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(4,61.70553);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(5,122.287);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(6,140.7115);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(7,200.4866);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(8,226.2694);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(9,250.6541);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(10,244.5129);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(11,242.9971);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(12,199.1977);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(13,163.8386);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(14,121.466);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(15,66.13775);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(16,12.33907);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(17,6.338169);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(18,1.360602);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(1,3.125146);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(2,7.934917);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(3,9.988614);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(4,13.53613);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(5,17.39124);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(6,20.52131);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(7,22.7963);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(8,23.79437);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(9,24.16357);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(10,24.62993);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(11,23.98937);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(12,22.63325);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(13,20.65166);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(14,16.83107);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(15,12.19346);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(16,7.312343);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(17,3.839201);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(18,1.376587);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetEntries(839.8476);
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
   3553.833,
   9389.017,
   14455.14,
   21279.28,
   30517.91,
   43514.17,
   58206.26,
   75528.54,
   93016.88,
   106954.5,
   120379.1,
   122268.5,
   108779.9,
   73863.62,
   37999.58,
   16187.28,
   3429.877,
   151.9979,
   0.7938436};
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
   128.649,
   280.4725,
   356.5466,
   428.6381,
   515.7315,
   611.9466,
   697.5676,
   787.753,
   870.4731,
   923.1636,
   979.199,
   983.3243,
   957.7654,
   811.3625,
   593.5311,
   402.918,
   190.2478,
   39.93666,
   0.7938436};
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
   128.649,
   280.4725,
   356.5466,
   428.6381,
   515.7315,
   611.9466,
   697.5676,
   787.753,
   870.4731,
   923.1636,
   979.199,
   983.3243,
   957.7654,
   811.3625,
   593.5311,
   402.918,
   190.2478,
   39.93666,
   0.7938436};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMinimum(1.266159e-08);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMaximum(135577);
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
   Data__82->SetBinContent(1,3410);
   Data__82->SetBinContent(2,8960);
   Data__82->SetBinContent(3,14540);
   Data__82->SetBinContent(4,21500);
   Data__82->SetBinContent(5,31800);
   Data__82->SetBinContent(6,42760);
   Data__82->SetBinContent(7,56180);
   Data__82->SetBinContent(8,71080);
   Data__82->SetBinContent(9,87580);
   Data__82->SetBinContent(10,100060);
   Data__82->SetBinContent(11,112940);
   Data__82->SetBinContent(12,115500);
   Data__82->SetBinContent(13,99380);
   Data__82->SetBinContent(14,68020);
   Data__82->SetBinContent(15,35020);
   Data__82->SetBinContent(16,14120);
   Data__82->SetBinContent(17,3420);
   Data__82->SetBinContent(18,180);
   Data__82->SetBinError(1,184.6619);
   Data__82->SetBinError(2,423.3202);
   Data__82->SetBinError(3,539.2588);
   Data__82->SetBinError(4,655.7439);
   Data__82->SetBinError(5,797.4961);
   Data__82->SetBinError(6,924.7702);
   Data__82->SetBinError(7,1060);
   Data__82->SetBinError(8,1192.309);
   Data__82->SetBinError(9,1323.48);
   Data__82->SetBinError(10,1414.638);
   Data__82->SetBinError(11,1502.93);
   Data__82->SetBinError(12,1519.868);
   Data__82->SetBinError(13,1409.823);
   Data__82->SetBinError(14,1166.362);
   Data__82->SetBinError(15,836.899);
   Data__82->SetBinError(16,531.4132);
   Data__82->SetBinError(17,261.5339);
   Data__82->SetBinError(18,60);
   Data__82->SetEntries(44407.91);
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
