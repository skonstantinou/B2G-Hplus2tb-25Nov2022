void Circularity()
{
//=========Macro generated from canvas: Circularity/Circularity
//=========  (Fri Nov 18 13:28:12 2022) by ROOT version 6.20/02
   TCanvas *Circularity = new TCanvas("Circularity", "Circularity",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Circularity->SetHighLightColor(2);
   Circularity->Range(0,0,1,1);
   Circularity->SetFillColor(0);
   Circularity->SetBorderMode(0);
   Circularity->SetBorderSize(2);
   Circularity->SetTickx(1);
   Circularity->SetTicky(1);
   Circularity->SetLeftMargin(0.16);
   Circularity->SetRightMargin(0.05);
   Circularity->SetTopMargin(0.06);
   Circularity->SetBottomMargin(0.13);
   Circularity->SetFrameFillStyle(0);
   Circularity->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Circularity_2
   TPad *Circularity_2 = new TPad("Circularity_2", "Circularity_2",0,0,1,0.304);
   Circularity_2->Draw();
   Circularity_2->cd();
   Circularity_2->Range(-0.2025316,-0.428,1.063291,1.7);
   Circularity_2->SetFillColor(0);
   Circularity_2->SetFillStyle(4000);
   Circularity_2->SetBorderMode(0);
   Circularity_2->SetBorderSize(2);
   Circularity_2->SetTickx(1);
   Circularity_2->SetTicky(1);
   Circularity_2->SetLeftMargin(0.16);
   Circularity_2->SetRightMargin(0.05);
   Circularity_2->SetTopMargin(0);
   Circularity_2->SetBottomMargin(0.3421053);
   Circularity_2->SetFrameFillStyle(0);
   Circularity_2->SetFrameBorderMode(0);
   Circularity_2->SetFrameFillStyle(0);
   Circularity_2->SetFrameBorderMode(0);
   
   TH1F *hframe__372 = new TH1F("hframe__372","",1000,0,1);
   hframe__372->SetMinimum(0.3);
   hframe__372->SetMaximum(1.7);
   hframe__372->SetDirectory(0);
   hframe__372->SetStats(0);
   hframe__372->SetLineStyle(0);
   hframe__372->SetMarkerStyle(20);
   hframe__372->GetXaxis()->SetTitle("Circularity");
   hframe__372->GetXaxis()->SetLabelFont(43);
   hframe__372->GetXaxis()->SetLabelOffset(0.007);
   hframe__372->GetXaxis()->SetLabelSize(27);
   hframe__372->GetXaxis()->SetTitleSize(33);
   hframe__372->GetXaxis()->SetTitleOffset(2.960526);
   hframe__372->GetXaxis()->SetTitleFont(43);
   hframe__372->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__372->GetYaxis()->SetNdivisions(505);
   hframe__372->GetYaxis()->SetLabelFont(43);
   hframe__372->GetYaxis()->SetLabelOffset(0.007);
   hframe__372->GetYaxis()->SetLabelSize(21);
   hframe__372->GetYaxis()->SetTitleSize(33);
   hframe__372->GetYaxis()->SetTitleOffset(1.5625);
   hframe__372->GetYaxis()->SetTitleFont(43);
   hframe__372->GetZaxis()->SetLabelFont(43);
   hframe__372->GetZaxis()->SetLabelOffset(0.007);
   hframe__372->GetZaxis()->SetLabelSize(27);
   hframe__372->GetZaxis()->SetTitleSize(33);
   hframe__372->GetZaxis()->SetTitleOffset(1);
   hframe__372->GetZaxis()->SetTitleFont(43);
   hframe__372->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3213[20] = {
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
   Double_t BackgroundStatSystError_fy3213[20] = {
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
   Double_t BackgroundStatSystError_felx3213[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3213[20] = {
   0.06697463,
   0.03410233,
   0.02695827,
   0.02490677,
   0.02509502,
   0.02588845,
   0.02638356,
   0.02887862,
   0.03005026,
   0.03330816,
   0.0358858,
   0.03923944,
   0.04454463,
   0.04779202,
   0.05302791,
   0.05862398,
   0.07131523,
   0.08063253,
   0.1073098,
   0.2024813};
   Double_t BackgroundStatSystError_fehx3213[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3213[20] = {
   0.06697463,
   0.03410233,
   0.02695827,
   0.02490677,
   0.02509502,
   0.02588845,
   0.02638356,
   0.02887862,
   0.03005026,
   0.03330816,
   0.0358858,
   0.03923944,
   0.04454463,
   0.04779202,
   0.05302791,
   0.05862398,
   0.07131523,
   0.08063253,
   0.1073098,
   0.2024813};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3213,BackgroundStatSystError_fy3213,BackgroundStatSystError_felx3213,BackgroundStatSystError_fehx3213,BackgroundStatSystError_fely3213,BackgroundStatSystError_fehy3213);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1263;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError320532093213 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError320532093213","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMinimum(0.7570225);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMaximum(1.242978);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError320532093213);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3214[20] = {
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
   Double_t BackgroundStatError_fy3214[20] = {
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
   Double_t BackgroundStatError_felx3214[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3214[20] = {
   0.06697463,
   0.03410233,
   0.02695827,
   0.02490677,
   0.02509502,
   0.02588845,
   0.02638356,
   0.02887862,
   0.03005026,
   0.03330816,
   0.0358858,
   0.03923944,
   0.04454463,
   0.04779202,
   0.05302791,
   0.05862398,
   0.07131523,
   0.08063253,
   0.1073098,
   0.2024813};
   Double_t BackgroundStatError_fehx3214[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3214[20] = {
   0.06697463,
   0.03410233,
   0.02695827,
   0.02490677,
   0.02509502,
   0.02588845,
   0.02638356,
   0.02887862,
   0.03005026,
   0.03330816,
   0.0358858,
   0.03923944,
   0.04454463,
   0.04779202,
   0.05302791,
   0.05862398,
   0.07131523,
   0.08063253,
   0.1073098,
   0.2024813};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3214,BackgroundStatError_fy3214,BackgroundStatError_felx3214,BackgroundStatError_fehx3214,BackgroundStatError_fely3214,BackgroundStatError_fehy3214);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1262;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError320632103214 = new TH1F("Graph_Graph_Graph_BackgroundStatError320632103214","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMinimum(0.7570225);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMaximum(1.242978);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError320632103214);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx54[2] = {
   0,
   1};
   Double_t Graph0_fy54[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx54,Graph0_fy54);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0525354 = new TH1F("Graph_Graph_Graph_Graph0525354","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph0525354->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0525354->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0525354->SetDirectory(0);
   Graph_Graph_Graph_Graph0525354->SetStats(0);
   Graph_Graph_Graph_Graph0525354->SetLineStyle(0);
   Graph_Graph_Graph_Graph0525354->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0525354);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3215[20] = {
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
   Double_t Graph1_fy3215[20] = {
   1.077809,
   1.034078,
   0.9398959,
   1.00874,
   1.024493,
   0.9787917,
   0.9215649,
   1.107219,
   0.9198071,
   0.9861153,
   1.024883,
   1.062408,
   1.067514,
   1.12941,
   0.9630991,
   1.007716,
   1.042467,
   0.9564851,
   0.8046339,
   1.369871};
   Double_t Graph1_felx3215[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3215[20] = {
   0.07659657,
   0.03758422,
   0.02830036,
   0.02747479,
   0.0273905,
   0.02766229,
   0.02731837,
   0.0333839,
   0.0308841,
   0.03565307,
   0.03910172,
   0.0436647,
   0.04852338,
   0.05484898,
   0.05523752,
   0.06237606,
   0.08018974,
   0.0838893,
   0.1038778,
   0.238464};
   Double_t Graph1_fehx3215[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3215[20] = {
   0.07659657,
   0.03758422,
   0.02830036,
   0.02747479,
   0.0273905,
   0.02766229,
   0.02731837,
   0.0333839,
   0.0308841,
   0.03565307,
   0.03910172,
   0.0436647,
   0.04852338,
   0.05484898,
   0.05523752,
   0.06237606,
   0.08018974,
   0.0838893,
   0.1038778,
   0.238464};
   grae = new TGraphAsymmErrors(20,Graph1_fx3215,Graph1_fy3215,Graph1_felx3215,Graph1_fehx3215,Graph1_fely3215,Graph1_fehy3215);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1320732113215 = new TH1F("Graph_Graph_Graph_Graph1320732113215","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1320732113215->SetMinimum(0.6099982);
   Graph_Graph_Graph_Graph1320732113215->SetMaximum(1.699093);
   Graph_Graph_Graph_Graph1320732113215->SetDirectory(0);
   Graph_Graph_Graph_Graph1320732113215->SetStats(0);
   Graph_Graph_Graph_Graph1320732113215->SetLineStyle(0);
   Graph_Graph_Graph_Graph1320732113215->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1320732113215);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__373 = new TH1F("hframe_copy__373","",1000,0,1);
   hframe_copy__373->SetMinimum(0.3);
   hframe_copy__373->SetMaximum(1.7);
   hframe_copy__373->SetDirectory(0);
   hframe_copy__373->SetStats(0);
   hframe_copy__373->SetLineStyle(0);
   hframe_copy__373->SetMarkerStyle(20);
   hframe_copy__373->GetXaxis()->SetTitle("Circularity");
   hframe_copy__373->GetXaxis()->SetLabelFont(43);
   hframe_copy__373->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__373->GetXaxis()->SetLabelSize(27);
   hframe_copy__373->GetXaxis()->SetTitleSize(33);
   hframe_copy__373->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__373->GetXaxis()->SetTitleFont(43);
   hframe_copy__373->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__373->GetYaxis()->SetNdivisions(505);
   hframe_copy__373->GetYaxis()->SetLabelFont(43);
   hframe_copy__373->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__373->GetYaxis()->SetLabelSize(21);
   hframe_copy__373->GetYaxis()->SetTitleSize(33);
   hframe_copy__373->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__373->GetYaxis()->SetTitleFont(43);
   hframe_copy__373->GetZaxis()->SetLabelFont(43);
   hframe_copy__373->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__373->GetZaxis()->SetLabelSize(27);
   hframe_copy__373->GetZaxis()->SetTitleSize(33);
   hframe_copy__373->GetZaxis()->SetTitleOffset(1);
   hframe_copy__373->GetZaxis()->SetTitleFont(43);
   hframe_copy__373->Draw("sameaxis");
   Circularity_2->Modified();
   Circularity->cd();
  
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
   Circularity->cd();
  
// ------------>Primitives in pad: Circularity_1
   TPad *Circularity_1 = new TPad("Circularity_1", "Circularity_1",0,0.2897959,1,1);
   Circularity_1->Draw();
   Circularity_1->cd();
   Circularity_1->Range(-0.2025316,-2.130243,1.063291,4.3819);
   Circularity_1->SetFillColor(0);
   Circularity_1->SetFillStyle(4000);
   Circularity_1->SetBorderMode(0);
   Circularity_1->SetBorderSize(2);
   Circularity_1->SetLogy();
   Circularity_1->SetTickx(1);
   Circularity_1->SetTicky(1);
   Circularity_1->SetLeftMargin(0.16);
   Circularity_1->SetRightMargin(0.05);
   Circularity_1->SetTopMargin(0.06);
   Circularity_1->SetBottomMargin(0.02);
   Circularity_1->SetFrameFillStyle(0);
   Circularity_1->SetFrameBorderMode(0);
   Circularity_1->SetFrameFillStyle(0);
   Circularity_1->SetFrameBorderMode(0);
   
   TH1F *hframe__374 = new TH1F("hframe__374","",1000,0,1);
   hframe__374->SetMinimum(0.01);
   hframe__374->SetMaximum(9798.757);
   hframe__374->SetDirectory(0);
   hframe__374->SetStats(0);
   hframe__374->SetLineStyle(0);
   hframe__374->SetMarkerStyle(20);
   hframe__374->GetXaxis()->SetLabelFont(43);
   hframe__374->GetXaxis()->SetLabelOffset(0.007);
   hframe__374->GetXaxis()->SetLabelSize(0);
   hframe__374->GetXaxis()->SetTitleSize(0);
   hframe__374->GetXaxis()->SetTitleOffset(0.9);
   hframe__374->GetXaxis()->SetTitleFont(43);
   hframe__374->GetYaxis()->SetTitle("Events / 0.05");
   hframe__374->GetYaxis()->SetLabelFont(43);
   hframe__374->GetYaxis()->SetLabelOffset(0.007);
   hframe__374->GetYaxis()->SetLabelSize(27);
   hframe__374->GetYaxis()->SetTitleSize(33);
   hframe__374->GetYaxis()->SetTitleOffset(1.5625);
   hframe__374->GetYaxis()->SetTitleFont(43);
   hframe__374->GetZaxis()->SetLabelFont(43);
   hframe__374->GetZaxis()->SetLabelOffset(0.007);
   hframe__374->GetZaxis()->SetLabelSize(27);
   hframe__374->GetZaxis()->SetTitleSize(33);
   hframe__374->GetZaxis()->SetTitleOffset(1);
   hframe__374->GetZaxis()->SetTitleFont(43);
   hframe__374->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_52_stack_53_stack_54 = new TH1F("StackedMCstackHist_stack_52_stack_53_stack_54","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMinimum(0.0583284);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMaximum(2430.586);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetDirectory(0);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetStats(0);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetLineStyle(0);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMarkerStyle(20);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_52_stack_53_stack_54);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_CircularityInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,4.191016);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,19.16607);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,29.12622);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,29.74995);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,29.34317);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,30.11917);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,22.94177);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,21.31894);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,19.55928);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,18.67162);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,16.12689);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,8.714599);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,8.181005);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,8.464211);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,9.105205);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,4.29525);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,2.589872);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,2.512959);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.9345815);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.3511276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.8958933);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.834069);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.374578);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,3.012362);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.454672);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.974528);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.072889);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.954976);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.847374);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.091058);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.288572);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.332519);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.190887);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.315866);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.981704);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.7652583);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.6054297);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.6505755);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.3677595);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.159952);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_CircularityInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,50.71158);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,204.8792);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,332.1434);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,397.5643);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,403.7545);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,394.0412);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,363.3328);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,328.6146);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,281.4639);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,245.5553);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,212.019);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,179.4087);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,145.8726);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,120.2994);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,97.35882);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,77.46796);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,57.35926);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,38.12729);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,23.86529);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,5.622237);
   TT_stack_2_stack_2_stack_2->SetBinError(1,1.690617);
   TT_stack_2_stack_2_stack_2->SetBinError(2,3.430768);
   TT_stack_2_stack_2_stack_2->SetBinError(3,4.383098);
   TT_stack_2_stack_2_stack_2->SetBinError(4,4.817807);
   TT_stack_2_stack_2_stack_2->SetBinError(5,4.858086);
   TT_stack_2_stack_2_stack_2->SetBinError(6,4.835958);
   TT_stack_2_stack_2_stack_2->SetBinError(7,4.643582);
   TT_stack_2_stack_2_stack_2->SetBinError(8,4.422617);
   TT_stack_2_stack_2_stack_2->SetBinError(9,4.102054);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.825613);
   TT_stack_2_stack_2_stack_2->SetBinError(11,3.561462);
   TT_stack_2_stack_2_stack_2->SetBinError(12,3.286211);
   TT_stack_2_stack_2_stack_2->SetBinError(13,2.957585);
   TT_stack_2_stack_2_stack_2->SetBinError(14,2.674447);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.410514);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.157331);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.859045);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.510788);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.181211);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.5643648);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_CircularityInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,128.8034);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,508.0076);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,812.2645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,909.0061);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,932.4562);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,854.9679);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,848.5815);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,643.5468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,663.3094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,511.5444);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,442.1746);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,369.1014);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,299.3361);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,246.6538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,209.1837);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,177.2383);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,102.1664);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,95.27405);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,49.76821);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,18.11649);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,12.15396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,24.65974);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,31.24124);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,32.79482);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,33.83357);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,32.62431);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,32.18059);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,28.27992);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,28.6271);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,25.46905);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,23.67955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,21.57571);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,19.94282);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,17.69264);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,16.44468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,15.01016);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,11.39479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,10.83496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,7.905671);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,4.842344);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__375 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__375","h_SR_CircularityInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(1,0.531342);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(2,2.047387);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(3,3.868091);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(4,2.583445);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(5,2.305798);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(6,2.722731);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(7,1.674039);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(8,1.650607);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(9,0.5640391);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(10,0.8732969);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(11,1.048238);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(12,0.8399087);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(13,-0.05677728);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(14,-0.03246991);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(15,0.1531766);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(16,0.01867785);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(17,0.2260975);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(18,0.136088);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(19,0.1071036);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(1,0.2041461);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(2,0.5132641);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(3,0.653715);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(4,0.6844291);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(5,0.6290747);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(6,0.5762045);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(7,0.5173915);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(8,0.458473);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(9,0.3951035);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(10,0.3744762);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(11,0.3216695);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(12,0.2916898);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(13,0.2480652);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(14,0.2233528);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(15,0.2098528);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(16,0.1810244);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(17,0.1654775);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(18,0.1200704);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(19,0.09036293);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetEntries(4205);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3216[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3216[20] = {
   183.706,
   732.0529,
   1173.534,
   1336.32,
   1365.554,
   1279.128,
   1234.856,
   993.4803,
   964.3326,
   775.7714,
   670.3205,
   557.2247,
   453.3897,
   375.4174,
   315.6477,
   259.0015,
   162.1155,
   135.9143,
   74.56808,
   24.08986};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3216[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3216[20] = {
   12.30364,
   24.96471,
   31.63645,
   33.28342,
   34.2686,
   33.11465,
   32.5799,
   28.69034,
   28.97845,
   25.83951,
   24.05499,
   21.86518,
   20.19608,
   17.94195,
   16.73814,
   15.1837,
   11.5613,
   10.95911,
   8.001884,
   4.877744};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3216[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3216[20] = {
   12.30364,
   24.96471,
   31.63645,
   33.28342,
   34.2686,
   33.11465,
   32.5799,
   28.69034,
   28.97845,
   25.83951,
   24.05499,
   21.86518,
   20.19608,
   17.94195,
   16.73814,
   15.1837,
   11.5613,
   10.95911,
   8.001884,
   4.877744};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3216,BkgSum-SR-Inclusive_sum_errors_fy3216,BkgSum-SR-Inclusive_sum_errors_felx3216,BkgSum-SR-Inclusive_sum_errors_fehx3216,BkgSum-SR-Inclusive_sum_errors_fely3216,BkgSum-SR-Inclusive_sum_errors_fehy3216);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1261;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMinimum(17.2909);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMaximum(1537.883);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors320832123216);
   
   grae->Draw("e2 ");
   
   TH1F *Data__376 = new TH1F("Data__376","h_SR_CircularityInclusive",20,0,1);
   Data__376->SetBinContent(1,198);
   Data__376->SetBinContent(2,757);
   Data__376->SetBinContent(3,1103);
   Data__376->SetBinContent(4,1348);
   Data__376->SetBinContent(5,1399);
   Data__376->SetBinContent(6,1252);
   Data__376->SetBinContent(7,1138);
   Data__376->SetBinContent(8,1100);
   Data__376->SetBinContent(9,887);
   Data__376->SetBinContent(10,765);
   Data__376->SetBinContent(11,687);
   Data__376->SetBinContent(12,592);
   Data__376->SetBinContent(13,484);
   Data__376->SetBinContent(14,424);
   Data__376->SetBinContent(15,304);
   Data__376->SetBinContent(16,261);
   Data__376->SetBinContent(17,169);
   Data__376->SetBinContent(18,130);
   Data__376->SetBinContent(19,60);
   Data__376->SetBinContent(20,33);
   Data__376->SetBinError(1,14.07125);
   Data__376->SetBinError(2,27.51363);
   Data__376->SetBinError(3,33.21144);
   Data__376->SetBinError(4,36.71512);
   Data__376->SetBinError(5,37.40321);
   Data__376->SetBinError(6,35.38361);
   Data__376->SetBinError(7,33.73426);
   Data__376->SetBinError(8,33.16625);
   Data__376->SetBinError(9,29.78255);
   Data__376->SetBinError(10,27.65863);
   Data__376->SetBinError(11,26.21068);
   Data__376->SetBinError(12,24.33105);
   Data__376->SetBinError(13,22);
   Data__376->SetBinError(14,20.59126);
   Data__376->SetBinError(15,17.4356);
   Data__376->SetBinError(16,16.15549);
   Data__376->SetBinError(17,13);
   Data__376->SetBinError(18,11.40175);
   Data__376->SetBinError(19,7.745967);
   Data__376->SetBinError(20,5.744563);
   Data__376->SetEntries(13095);
   Data__376->SetDirectory(0);
   Data__376->SetFillStyle(3001);
   Data__376->SetLineWidth(2);
   Data__376->SetMarkerStyle(20);
   Data__376->SetMarkerSize(1.2);
   Data__376->GetXaxis()->SetRange(1,100);
   Data__376->GetXaxis()->SetLabelFont(42);
   Data__376->GetXaxis()->SetTitleOffset(1);
   Data__376->GetXaxis()->SetTitleFont(42);
   Data__376->GetYaxis()->SetLabelFont(42);
   Data__376->GetYaxis()->SetTitleFont(42);
   Data__376->GetZaxis()->SetLabelFont(42);
   Data__376->GetZaxis()->SetTitleOffset(1);
   Data__376->GetZaxis()->SetTitleFont(42);
   Data__376->Draw("EP same");
   
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

   ci = 1261;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1261;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__377 = new TH1F("hframe_copy__377","",1000,0,1);
   hframe_copy__377->SetMinimum(0.01);
   hframe_copy__377->SetMaximum(9798.757);
   hframe_copy__377->SetDirectory(0);
   hframe_copy__377->SetStats(0);
   hframe_copy__377->SetLineStyle(0);
   hframe_copy__377->SetMarkerStyle(20);
   hframe_copy__377->GetXaxis()->SetLabelFont(43);
   hframe_copy__377->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__377->GetXaxis()->SetLabelSize(0);
   hframe_copy__377->GetXaxis()->SetTitleSize(0);
   hframe_copy__377->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__377->GetXaxis()->SetTitleFont(43);
   hframe_copy__377->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__377->GetYaxis()->SetLabelFont(43);
   hframe_copy__377->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__377->GetYaxis()->SetLabelSize(27);
   hframe_copy__377->GetYaxis()->SetTitleSize(33);
   hframe_copy__377->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__377->GetYaxis()->SetTitleFont(43);
   hframe_copy__377->GetZaxis()->SetLabelFont(43);
   hframe_copy__377->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__377->GetZaxis()->SetLabelSize(27);
   hframe_copy__377->GetZaxis()->SetTitleSize(33);
   hframe_copy__377->GetZaxis()->SetTitleOffset(1);
   hframe_copy__377->GetZaxis()->SetTitleFont(43);
   hframe_copy__377->Draw("sameaxis");
   
   TH1F *hframe_copy__378 = new TH1F("hframe_copy__378","",1000,0,1);
   hframe_copy__378->SetMinimum(0.01);
   hframe_copy__378->SetMaximum(9798.757);
   hframe_copy__378->SetDirectory(0);
   hframe_copy__378->SetStats(0);
   hframe_copy__378->SetLineStyle(0);
   hframe_copy__378->SetMarkerStyle(20);
   hframe_copy__378->GetXaxis()->SetLabelFont(43);
   hframe_copy__378->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__378->GetXaxis()->SetLabelSize(0);
   hframe_copy__378->GetXaxis()->SetTitleSize(0);
   hframe_copy__378->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__378->GetXaxis()->SetTitleFont(43);
   hframe_copy__378->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__378->GetYaxis()->SetLabelFont(43);
   hframe_copy__378->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__378->GetYaxis()->SetLabelSize(27);
   hframe_copy__378->GetYaxis()->SetTitleSize(33);
   hframe_copy__378->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__378->GetYaxis()->SetTitleFont(43);
   hframe_copy__378->GetZaxis()->SetLabelFont(43);
   hframe_copy__378->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__378->GetZaxis()->SetLabelSize(27);
   hframe_copy__378->GetZaxis()->SetTitleSize(33);
   hframe_copy__378->GetZaxis()->SetTitleOffset(1);
   hframe_copy__378->GetZaxis()->SetTitleFont(43);
   hframe_copy__378->Draw("sameaxis");
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
   Circularity_1->Modified();
   Circularity->cd();
   Circularity->Modified();
   Circularity->cd();
   Circularity->SetSelected(Circularity);
}
