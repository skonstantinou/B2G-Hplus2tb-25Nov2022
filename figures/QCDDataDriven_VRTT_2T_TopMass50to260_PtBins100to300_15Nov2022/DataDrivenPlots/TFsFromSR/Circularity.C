void Circularity()
{
//=========Macro generated from canvas: Circularity/Circularity
//=========  (Fri Nov 18 13:27:49 2022) by ROOT version 6.20/02
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
   0.03826765,
   0.01526633,
   0.01122566,
   0.009898821,
   0.009414584,
   0.009368423,
   0.009524341,
   0.009927237,
   0.01060341,
   0.01129355,
   0.01221593,
   0.01345041,
   0.01482536,
   0.01633755,
   0.01821836,
   0.02093698,
   0.02418777,
   0.02839136,
   0.03721243,
   0.06227997};
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
   0.03826765,
   0.01526633,
   0.01122566,
   0.009898821,
   0.009414584,
   0.009368423,
   0.009524341,
   0.009927237,
   0.01060341,
   0.01129355,
   0.01221593,
   0.01345041,
   0.01482536,
   0.01633755,
   0.01821836,
   0.02093698,
   0.02418777,
   0.02839136,
   0.03721243,
   0.06227997};
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
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMinimum(0.925264);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMaximum(1.074736);
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
   0.03826765,
   0.01526633,
   0.01122566,
   0.009898821,
   0.009414584,
   0.009368423,
   0.009524341,
   0.009927237,
   0.01060341,
   0.01129355,
   0.01221593,
   0.01345041,
   0.01482536,
   0.01633755,
   0.01821836,
   0.02093698,
   0.02418777,
   0.02839136,
   0.03721243,
   0.06227997};
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
   0.03826765,
   0.01526633,
   0.01122566,
   0.009898821,
   0.009414584,
   0.009368423,
   0.009524341,
   0.009927237,
   0.01060341,
   0.01129355,
   0.01221593,
   0.01345041,
   0.01482536,
   0.01633755,
   0.01821836,
   0.02093698,
   0.02418777,
   0.02839136,
   0.03721243,
   0.06227997};
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
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMinimum(0.925264);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMaximum(1.074736);
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
   1.011611,
   0.9552145,
   0.9595219,
   0.9370279,
   0.9653284,
   0.9772841,
   0.9385385,
   0.958533,
   0.9249045,
   0.9289679,
   0.9034626,
   0.9211492,
   0.9490007,
   0.9495446,
   0.9109135,
   0.9387081,
   0.9305937,
   0.8795128,
   0.9464055,
   1.071775};
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
   0.05764189,
   0.02320835,
   0.01758594,
   0.01513305,
   0.01472626,
   0.01471306,
   0.01454618,
   0.01531547,
   0.01575576,
   0.01688196,
   0.01783884,
   0.01945415,
   0.02139757,
   0.0236135,
   0.02570291,
   0.02913613,
   0.03368975,
   0.0381676,
   0.0522565,
   0.1021897};
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
   0.05764189,
   0.02320835,
   0.01758594,
   0.01513305,
   0.01472626,
   0.01471306,
   0.01454618,
   0.01531547,
   0.01575576,
   0.01688196,
   0.01783884,
   0.01945415,
   0.02139757,
   0.0236135,
   0.02570291,
   0.02913613,
   0.03368975,
   0.0381676,
   0.0522565,
   0.1021897};
   grae = new TGraphAsymmErrors(20,Graph1_fx3215,Graph1_fy3215,Graph1_felx3215,Graph1_fehx3215,Graph1_fely3215,Graph1_fehy3215);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1320732113215 = new TH1F("Graph_Graph_Graph_Graph1320732113215","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1320732113215->SetMinimum(0.8080832);
   Graph_Graph_Graph_Graph1320732113215->SetMaximum(1.207227);
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
   Circularity_1->Range(-0.2025316,-2.141386,1.063291,4.927921);
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
   hframe__374->SetMaximum(31897.93);
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
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMinimum(0.3972479);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMaximum(7772.065);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,10.18401);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,49.48062);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,82.6617);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,105.841);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,116.0058);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,115.8926);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,108.9013);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,97.9803);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,92.16809);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,82.27849);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,60.90337);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,57.14554);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,51.79438);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,43.02285);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,31.32343);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,26.78691);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,18.21047);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,17.01483);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,9.321935);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,4.617669);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.368756);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,3.369748);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,4.347226);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,5.39069);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,4.944035);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,5.269365);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,4.943711);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,4.700889);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,4.838833);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,4.364961);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,3.421063);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,3.235852);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,3.204673);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,3.735461);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,2.597397);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.231957);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.91053);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.734103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.284916);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,1.002396);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_CircularityInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,231.1227);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1377.827);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2545.768);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3317.965);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3693.38);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3757.722);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,3652.177);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3384.31);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,3048.896);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2690.897);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2346.37);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1985.172);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1677.818);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1388.459);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1121.032);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,875.5684);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,666.7955);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,464.9411);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,271.6337);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,90.87978);
   TT_stack_2_stack_2_stack_2->SetBinError(1,3.531832);
   TT_stack_2_stack_2_stack_2->SetBinError(2,8.593535);
   TT_stack_2_stack_2_stack_2->SetBinError(3,11.70457);
   TT_stack_2_stack_2_stack_2->SetBinError(4,13.41876);
   TT_stack_2_stack_2_stack_2->SetBinError(5,14.19958);
   TT_stack_2_stack_2_stack_2->SetBinError(6,14.36577);
   TT_stack_2_stack_2_stack_2->SetBinError(7,14.20525);
   TT_stack_2_stack_2_stack_2->SetBinError(8,13.68316);
   TT_stack_2_stack_2_stack_2->SetBinError(9,12.98681);
   TT_stack_2_stack_2_stack_2->SetBinError(10,12.22088);
   TT_stack_2_stack_2_stack_2->SetBinError(11,11.42093);
   TT_stack_2_stack_2_stack_2->SetBinError(12,10.50963);
   TT_stack_2_stack_2_stack_2->SetBinError(13,9.657077);
   TT_stack_2_stack_2_stack_2->SetBinError(14,8.799641);
   TT_stack_2_stack_2_stack_2->SetBinError(15,7.913735);
   TT_stack_2_stack_2_stack_2->SetBinError(16,6.988684);
   TT_stack_2_stack_2_stack_2->SetBinError(17,6.111439);
   TT_stack_2_stack_2_stack_2->SetBinError(18,5.09422);
   TT_stack_2_stack_2_stack_2->SetBinError(19,3.907332);
   TT_stack_2_stack_2_stack_2->SetBinError(20,2.249807);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_CircularityInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,63.15816);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,346.1161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,474.1572);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,667.8539);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,641.9493);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,640.9374);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,674.5416);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,604.163);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,584.726);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,486.3559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,431.8035);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,391.5986);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,343.0941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,271.4393);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,226.4804);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,203.4198);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,134.9007);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,121.7874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,65.61891);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,7.136022);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,11.01826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,25.4515);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,32.51361);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,37.83305);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,39.11731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,39.42919);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,39.47816);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,37.89947);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,36.99538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,34.44846);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,32.56834);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,30.83505);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,28.99515);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,26.12761);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,23.6991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,21.95844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,18.76958);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,16.27449);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,12.22339);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,5.89842);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3287.288);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(1,0.6591866);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(2,7.172136);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(3,10.22662);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(4,12.46317);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(5,11.05524);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(6,10.74834);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(7,9.008341);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(8,8.695381);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(9,8.039241);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(10,6.490536);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(11,2.455512);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(12,4.59698);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(13,3.510022);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(14,3.047469);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(15,2.182922);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(16,2.16379);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(17,2.309409);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(18,1.004206);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(19,0.6653555);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(20,0.1913335);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(1,0.3110817);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(2,0.8125371);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(3,1.093317);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(4,1.162654);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(5,1.167953);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(6,1.104344);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(7,1.077307);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(8,1.037885);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(9,0.9557916);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(10,0.9157174);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(11,0.8505408);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(12,0.7917332);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(13,0.7599367);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(14,0.673998);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(15,0.6324141);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(16,0.560923);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(17,0.4971333);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(18,0.3872628);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(19,0.3221135);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(20,0.1674747);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetEntries(19326);
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
   304.4648,
   1773.424,
   3102.587,
   4091.66,
   4451.335,
   4514.552,
   4435.62,
   4086.453,
   3725.79,
   3259.531,
   2839.077,
   2433.916,
   2072.707,
   1702.922,
   1378.836,
   1105.775,
   819.9067,
   603.7433,
   346.5745,
   102.6335};
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
   11.65115,
   27.07366,
   34.82858,
   40.50262,
   41.90747,
   42.29423,
   42.24635,
   40.56719,
   39.50607,
   36.81167,
   34.68195,
   32.73718,
   30.72861,
   27.82157,
   25.12013,
   23.15159,
   19.83172,
   17.14109,
   12.89688,
   6.39201};
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
   11.65115,
   27.07366,
   34.82858,
   40.50262,
   41.90747,
   42.29423,
   42.24635,
   40.56719,
   39.50607,
   36.81167,
   34.68195,
   32.73718,
   30.72861,
   27.82157,
   25.12013,
   23.15159,
   19.83172,
   17.14109,
   12.89688,
   6.39201};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMinimum(86.61731);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMaximum(5002.907);
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
   Data__376->SetBinContent(1,308);
   Data__376->SetBinContent(2,1694);
   Data__376->SetBinContent(3,2977);
   Data__376->SetBinContent(4,3834);
   Data__376->SetBinContent(5,4297);
   Data__376->SetBinContent(6,4412);
   Data__376->SetBinContent(7,4163);
   Data__376->SetBinContent(8,3917);
   Data__376->SetBinContent(9,3446);
   Data__376->SetBinContent(10,3028);
   Data__376->SetBinContent(11,2565);
   Data__376->SetBinContent(12,2242);
   Data__376->SetBinContent(13,1967);
   Data__376->SetBinContent(14,1617);
   Data__376->SetBinContent(15,1256);
   Data__376->SetBinContent(16,1038);
   Data__376->SetBinContent(17,763);
   Data__376->SetBinContent(18,531);
   Data__376->SetBinContent(19,328);
   Data__376->SetBinContent(20,110);
   Data__376->SetBinError(1,17.54993);
   Data__376->SetBinError(2,41.15823);
   Data__376->SetBinError(3,54.56189);
   Data__376->SetBinError(4,61.9193);
   Data__376->SetBinError(5,65.55151);
   Data__376->SetBinError(6,66.42289);
   Data__376->SetBinError(7,64.52131);
   Data__376->SetBinError(8,62.58594);
   Data__376->SetBinError(9,58.70264);
   Data__376->SetBinError(10,55.02727);
   Data__376->SetBinError(11,50.64583);
   Data__376->SetBinError(12,47.34976);
   Data__376->SetBinError(13,44.35087);
   Data__376->SetBinError(14,40.21194);
   Data__376->SetBinError(15,35.44009);
   Data__376->SetBinError(16,32.21801);
   Data__376->SetBinError(17,27.62245);
   Data__376->SetBinError(18,23.04344);
   Data__376->SetBinError(19,18.11077);
   Data__376->SetBinError(20,10.48809);
   Data__376->SetEntries(44497);
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
   hframe_copy__377->SetMaximum(31897.93);
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
   hframe_copy__378->SetMaximum(31897.93);
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
