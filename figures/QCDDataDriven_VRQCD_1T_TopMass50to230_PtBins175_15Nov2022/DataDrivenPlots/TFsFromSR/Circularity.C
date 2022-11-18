void Circularity()
{
//=========Macro generated from canvas: Circularity/Circularity
//=========  (Fri Nov 18 13:27:54 2022) by ROOT version 6.20/02
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
   0.1345109,
   0.06456722,
   0.05161285,
   0.04654059,
   0.04760034,
   0.04646135,
   0.04888696,
   0.05100534,
   0.0538048,
   0.06093221,
   0.0635868,
   0.07212669,
   0.07612829,
   0.08436729,
   0.07925874,
   0.1032455,
   0.1269104,
   0.1268543,
   0.1919961,
   0.2632901};
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
   0.1345109,
   0.06456722,
   0.05161285,
   0.04654059,
   0.04760034,
   0.04646135,
   0.04888696,
   0.05100534,
   0.0538048,
   0.06093221,
   0.0635868,
   0.07212669,
   0.07612829,
   0.08436729,
   0.07925874,
   0.1032455,
   0.1269104,
   0.1268543,
   0.1919961,
   0.2632901};
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
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMinimum(0.6840519);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMaximum(1.315948);
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
   0.1345109,
   0.06456722,
   0.05161285,
   0.04654059,
   0.04760034,
   0.04646135,
   0.04888696,
   0.05100534,
   0.0538048,
   0.06093221,
   0.0635868,
   0.07212669,
   0.07612829,
   0.08436729,
   0.07925874,
   0.1032455,
   0.1269104,
   0.1268543,
   0.1919961,
   0.2632901};
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
   0.1345109,
   0.06456722,
   0.05161285,
   0.04654059,
   0.04760034,
   0.04646135,
   0.04888696,
   0.05100534,
   0.0538048,
   0.06093221,
   0.0635868,
   0.07212669,
   0.07612829,
   0.08436729,
   0.07925874,
   0.1032455,
   0.1269104,
   0.1268543,
   0.1919961,
   0.2632901};
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
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMinimum(0.6840519);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMaximum(1.315948);
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
   1.188929,
   1.03406,
   0.9350746,
   0.9846318,
   1.057478,
   1.016849,
   0.9704061,
   1.059275,
   1.007506,
   1.10926,
   1.040733,
   1.165631,
   0.9908947,
   1.179921,
   0.7605865,
   1.02275,
   1.158268,
   0.679412,
   0.9195838,
   0.845616};
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
   0.1099165,
   0.04842432,
   0.03690445,
   0.03413597,
   0.03601785,
   0.03453399,
   0.03545787,
   0.03852547,
   0.03942674,
   0.04729901,
   0.04785295,
   0.05777819,
   0.05530635,
   0.06756206,
   0.05004292,
   0.07798393,
   0.098243,
   0.07692826,
   0.1341351,
   0.1763231};
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
   0.1099165,
   0.04842432,
   0.03690445,
   0.03413597,
   0.03601785,
   0.03453399,
   0.03545787,
   0.03852547,
   0.03942674,
   0.04729901,
   0.04785295,
   0.05777819,
   0.05530635,
   0.06756206,
   0.05004292,
   0.07798393,
   0.098243,
   0.07692826,
   0.1341351,
   0.1763231};
   grae = new TGraphAsymmErrors(20,Graph1_fx3215,Graph1_fy3215,Graph1_felx3215,Graph1_fehx3215,Graph1_fely3215,Graph1_fehy3215);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1320732113215 = new TH1F("Graph_Graph_Graph_Graph1320732113215","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1320732113215->SetMinimum(0.5328476);
   Graph_Graph_Graph_Graph1320732113215->SetMaximum(1.368481);
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
   Circularity_1->Range(-0.2025316,-2.125991,1.063291,4.173557);
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
   hframe__374->SetMaximum(6245.741);
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
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMinimum(0.05192962);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMaximum(1493.174);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1.874736);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,6.618625);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,13.17743);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,13.89174);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,8.742242);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,11.70771);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,9.547502);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,9.24523);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,5.496078);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,8.125493);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,8.132911);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,3.447561);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,2.179002);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,3.970526);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,1.630691);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,3.609926);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,1.151962);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.5028855);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.6725461);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.5391247);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.5573792);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.009568);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.400338);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.229764);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.181302);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.505485);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.653642);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.074155);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.009737);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.844171);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.983251);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.003195);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.455284);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.7781464);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.5785166);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.343809);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.4061387);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.21197);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.3841433);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.3730584);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_CircularityInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,13.35449);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,55.06831);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,93.85933);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,112.5592);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,124.0715);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,129.5873);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,124.0017);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,114.1517);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,111.8149);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,99.22908);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,81.57964);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,71.24908);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,57.07379);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,50.05714);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,41.95935);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,33.30133);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,21.65804);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,18.45426);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,10.03132);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,3.305157);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.8806983);
   TT_stack_2_stack_2_stack_2->SetBinError(2,1.80871);
   TT_stack_2_stack_2_stack_2->SetBinError(3,2.367401);
   TT_stack_2_stack_2_stack_2->SetBinError(4,2.607253);
   TT_stack_2_stack_2_stack_2->SetBinError(5,2.747098);
   TT_stack_2_stack_2_stack_2->SetBinError(6,2.807435);
   TT_stack_2_stack_2_stack_2->SetBinError(7,2.751383);
   TT_stack_2_stack_2_stack_2->SetBinError(8,2.648478);
   TT_stack_2_stack_2_stack_2->SetBinError(9,2.629535);
   TT_stack_2_stack_2_stack_2->SetBinError(10,2.491585);
   TT_stack_2_stack_2_stack_2->SetBinError(11,2.25634);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.105767);
   TT_stack_2_stack_2_stack_2->SetBinError(13,1.880713);
   TT_stack_2_stack_2_stack_2->SetBinError(14,1.790364);
   TT_stack_2_stack_2_stack_2->SetBinError(15,1.616006);
   TT_stack_2_stack_2_stack_2->SetBinError(16,1.43977);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.166597);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.065638);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.7994804);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.4569448);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_CircularityInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,83.17871);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,379.2931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,579.5395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,718.535);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,682.333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,711.3392);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,638.2927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,590.2986);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,530.8243);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,388.4714);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,364.7748);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,274.4704);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,264.6968);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,204.4643);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,260.123);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,131.2628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,97.19677);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,95.84802);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,40.40621);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,23.35483);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,13.19584);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,28.39741);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,35.27542);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,39.17621);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,38.68586);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,39.48625);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,37.5962);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,36.24651);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,34.75885);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,30.05232);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,28.74284);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,25.07601);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,24.5857);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,21.72072);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,24.01064);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,17.25116);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,15.17993);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,14.52294);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,9.772766);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,7.136919);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__375 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__375","h_SR_CircularityInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(1,-0.01025485);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(2,0.4752794);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(3,0.8548444);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(4,0.8675274);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(5,0.6804804);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(6,0.9203724);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(7,0.5203241);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(8,0.6183282);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(9,0.07899898);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(10,0.08065452);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(11,0.08716665);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(12,-0.01175345);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(13,0.1401967);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(14,0.355966);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(15,0.04998435);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(16,0.2265819);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(17,0.03835593);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(18,-0.05243444);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(19,0.03323708);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(1,0.09423113);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(2,0.2720344);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(3,0.3499128);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(4,0.3301195);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(5,0.297649);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(6,0.3037859);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(7,0.2485311);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(8,0.2290415);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(9,0.2245461);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(10,0.2195086);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(11,0.1775129);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(12,0.1524206);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(13,0.1397179);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(14,0.1677009);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(15,0.1215694);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(16,0.1234332);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(17,0.07549287);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(18,0.06213965);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(19,0.03323707);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetEntries(1103);
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
   98.40794,
   440.98,
   686.5762,
   844.9859,
   815.1468,
   852.6342,
   771.8418,
   713.6956,
   648.1354,
   495.826,
   454.4874,
   349.1671,
   323.9496,
   258.492,
   303.713,
   168.1741,
   120.0068,
   114.8052,
   51.11008,
   27.19911};
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
   13.23694,
   28.47285,
   35.43616,
   39.32614,
   38.80126,
   39.61454,
   37.733,
   36.40228,
   34.8728,
   30.21177,
   28.8994,
   25.18426,
   24.66173,
   21.80827,
   24.07191,
   17.36321,
   15.23011,
   14.56353,
   9.812935,
   7.161255};
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
   13.23694,
   28.47285,
   35.43616,
   39.32614,
   38.80126,
   39.61454,
   37.733,
   36.40228,
   34.8728,
   30.21177,
   28.8994,
   25.18426,
   24.66173,
   21.80827,
   24.07191,
   17.36321,
   15.23011,
   14.56353,
   9.812935,
   7.161255};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMinimum(18.03407);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMaximum(979.4698);
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
   Data__376->SetBinContent(1,117);
   Data__376->SetBinContent(2,456);
   Data__376->SetBinContent(3,642);
   Data__376->SetBinContent(4,832);
   Data__376->SetBinContent(5,862);
   Data__376->SetBinContent(6,867);
   Data__376->SetBinContent(7,749);
   Data__376->SetBinContent(8,756);
   Data__376->SetBinContent(9,653);
   Data__376->SetBinContent(10,550);
   Data__376->SetBinContent(11,473);
   Data__376->SetBinContent(12,407);
   Data__376->SetBinContent(13,321);
   Data__376->SetBinContent(14,305);
   Data__376->SetBinContent(15,231);
   Data__376->SetBinContent(16,172);
   Data__376->SetBinContent(17,139);
   Data__376->SetBinContent(18,78);
   Data__376->SetBinContent(19,47);
   Data__376->SetBinContent(20,23);
   Data__376->SetBinError(1,10.81665);
   Data__376->SetBinError(2,21.35416);
   Data__376->SetBinError(3,25.33772);
   Data__376->SetBinError(4,28.84441);
   Data__376->SetBinError(5,29.35984);
   Data__376->SetBinError(6,29.44486);
   Data__376->SetBinError(7,27.36786);
   Data__376->SetBinError(8,27.49545);
   Data__376->SetBinError(9,25.55386);
   Data__376->SetBinError(10,23.45208);
   Data__376->SetBinError(11,21.74856);
   Data__376->SetBinError(12,20.17424);
   Data__376->SetBinError(13,17.91647);
   Data__376->SetBinError(14,17.46425);
   Data__376->SetBinError(15,15.19868);
   Data__376->SetBinError(16,13.11488);
   Data__376->SetBinError(17,11.78983);
   Data__376->SetBinError(18,8.831761);
   Data__376->SetBinError(19,6.855655);
   Data__376->SetBinError(20,4.795832);
   Data__376->SetEntries(8684);
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
   hframe_copy__377->SetMaximum(6245.741);
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
   hframe_copy__378->SetMaximum(6245.741);
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
