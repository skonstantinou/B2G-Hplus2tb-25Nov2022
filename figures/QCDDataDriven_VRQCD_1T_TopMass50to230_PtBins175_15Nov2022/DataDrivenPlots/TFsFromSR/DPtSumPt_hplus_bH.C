void DPtSumPt_hplus_bH()
{
//=========Macro generated from canvas: DPtSumPt_hplus_bH/DPtSumPt_hplus_bH
//=========  (Fri Nov 18 13:27:56 2022) by ROOT version 6.20/02
   TCanvas *DPtSumPt_hplus_bH = new TCanvas("DPtSumPt_hplus_bH", "DPtSumPt_hplus_bH",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   DPtSumPt_hplus_bH->SetHighLightColor(2);
   DPtSumPt_hplus_bH->Range(0,0,1,1);
   DPtSumPt_hplus_bH->SetFillColor(0);
   DPtSumPt_hplus_bH->SetBorderMode(0);
   DPtSumPt_hplus_bH->SetBorderSize(2);
   DPtSumPt_hplus_bH->SetTickx(1);
   DPtSumPt_hplus_bH->SetTicky(1);
   DPtSumPt_hplus_bH->SetLeftMargin(0.16);
   DPtSumPt_hplus_bH->SetRightMargin(0.05);
   DPtSumPt_hplus_bH->SetTopMargin(0.06);
   DPtSumPt_hplus_bH->SetBottomMargin(0.13);
   DPtSumPt_hplus_bH->SetFrameFillStyle(0);
   DPtSumPt_hplus_bH->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: DPtSumPt_hplus_bH_2
   TPad *DPtSumPt_hplus_bH_2 = new TPad("DPtSumPt_hplus_bH_2", "DPtSumPt_hplus_bH_2",0,0,1,0.304);
   DPtSumPt_hplus_bH_2->Draw();
   DPtSumPt_hplus_bH_2->cd();
   DPtSumPt_hplus_bH_2->Range(-0.2025316,-0.428,1.063291,1.7);
   DPtSumPt_hplus_bH_2->SetFillColor(0);
   DPtSumPt_hplus_bH_2->SetFillStyle(4000);
   DPtSumPt_hplus_bH_2->SetBorderMode(0);
   DPtSumPt_hplus_bH_2->SetBorderSize(2);
   DPtSumPt_hplus_bH_2->SetTickx(1);
   DPtSumPt_hplus_bH_2->SetTicky(1);
   DPtSumPt_hplus_bH_2->SetLeftMargin(0.16);
   DPtSumPt_hplus_bH_2->SetRightMargin(0.05);
   DPtSumPt_hplus_bH_2->SetTopMargin(0);
   DPtSumPt_hplus_bH_2->SetBottomMargin(0.3421053);
   DPtSumPt_hplus_bH_2->SetFrameFillStyle(0);
   DPtSumPt_hplus_bH_2->SetFrameBorderMode(0);
   DPtSumPt_hplus_bH_2->SetFrameFillStyle(0);
   DPtSumPt_hplus_bH_2->SetFrameBorderMode(0);
   
   TH1F *hframe__393 = new TH1F("hframe__393","",1000,0,1);
   hframe__393->SetMinimum(0.3);
   hframe__393->SetMaximum(1.7);
   hframe__393->SetDirectory(0);
   hframe__393->SetStats(0);
   hframe__393->SetLineStyle(0);
   hframe__393->SetMarkerStyle(20);
   hframe__393->GetXaxis()->SetTitle("p_{T}^{assym}(H^{#pm}, b_{H^{#pm}})");
   hframe__393->GetXaxis()->SetLabelFont(43);
   hframe__393->GetXaxis()->SetLabelOffset(0.007);
   hframe__393->GetXaxis()->SetLabelSize(27);
   hframe__393->GetXaxis()->SetTitleSize(33);
   hframe__393->GetXaxis()->SetTitleOffset(2.960526);
   hframe__393->GetXaxis()->SetTitleFont(43);
   hframe__393->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__393->GetYaxis()->SetNdivisions(505);
   hframe__393->GetYaxis()->SetLabelFont(43);
   hframe__393->GetYaxis()->SetLabelOffset(0.007);
   hframe__393->GetYaxis()->SetLabelSize(21);
   hframe__393->GetYaxis()->SetTitleSize(33);
   hframe__393->GetYaxis()->SetTitleOffset(1.5625);
   hframe__393->GetYaxis()->SetTitleFont(43);
   hframe__393->GetZaxis()->SetLabelFont(43);
   hframe__393->GetZaxis()->SetLabelOffset(0.007);
   hframe__393->GetZaxis()->SetLabelSize(27);
   hframe__393->GetZaxis()->SetTitleSize(33);
   hframe__393->GetZaxis()->SetTitleOffset(1);
   hframe__393->GetZaxis()->SetTitleFont(43);
   hframe__393->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3225[20] = {
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
   Double_t BackgroundStatSystError_fy3225[20] = {
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
   Double_t BackgroundStatSystError_felx3225[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3225[20] = {
   0.05382684,
   0.05518477,
   0.05391509,
   0.05310826,
   0.05163328,
   0.04973155,
   0.05190546,
   0.05343529,
   0.05365128,
   0.06106505,
   0.06115927,
   0.06458765,
   0.07007217,
   0.08098234,
   0.09266325,
   0.1121905,
   0.1782933,
   0.1875442,
   0.2478785,
   0.4510767};
   Double_t BackgroundStatSystError_fehx3225[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3225[20] = {
   0.05382684,
   0.05518477,
   0.05391509,
   0.05310826,
   0.05163328,
   0.04973155,
   0.05190546,
   0.05343529,
   0.05365128,
   0.06106505,
   0.06115927,
   0.06458765,
   0.07007217,
   0.08098234,
   0.09266325,
   0.1121905,
   0.1782933,
   0.1875442,
   0.2478785,
   0.4510767};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3225,BackgroundStatSystError_fy3225,BackgroundStatSystError_felx3225,BackgroundStatSystError_fehx3225,BackgroundStatSystError_fely3225,BackgroundStatSystError_fehy3225);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1266;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError321732213225 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError321732213225","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMinimum(0.458708);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMaximum(1.541292);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError321732213225);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3226[20] = {
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
   Double_t BackgroundStatError_fy3226[20] = {
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
   Double_t BackgroundStatError_felx3226[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3226[20] = {
   0.05382684,
   0.05518477,
   0.05391509,
   0.05310826,
   0.05163328,
   0.04973155,
   0.05190546,
   0.05343529,
   0.05365128,
   0.06106505,
   0.06115927,
   0.06458765,
   0.07007217,
   0.08098234,
   0.09266325,
   0.1121905,
   0.1782933,
   0.1875442,
   0.2478785,
   0.4510767};
   Double_t BackgroundStatError_fehx3226[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3226[20] = {
   0.05382684,
   0.05518477,
   0.05391509,
   0.05310826,
   0.05163328,
   0.04973155,
   0.05190546,
   0.05343529,
   0.05365128,
   0.06106505,
   0.06115927,
   0.06458765,
   0.07007217,
   0.08098234,
   0.09266325,
   0.1121905,
   0.1782933,
   0.1875442,
   0.2478785,
   0.4510767};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3226,BackgroundStatError_fy3226,BackgroundStatError_felx3226,BackgroundStatError_fehx3226,BackgroundStatError_fely3226,BackgroundStatError_fehy3226);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1265;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError321832223226 = new TH1F("Graph_Graph_Graph_BackgroundStatError321832223226","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMinimum(0.458708);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMaximum(1.541292);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError321832223226->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError321832223226->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError321832223226);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx57[2] = {
   0,
   1};
   Double_t Graph0_fy57[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx57,Graph0_fy57);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0555657 = new TH1F("Graph_Graph_Graph_Graph0555657","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph0555657->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0555657->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0555657->SetDirectory(0);
   Graph_Graph_Graph_Graph0555657->SetStats(0);
   Graph_Graph_Graph_Graph0555657->SetLineStyle(0);
   Graph_Graph_Graph_Graph0555657->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0555657->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0555657->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0555657->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0555657->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0555657->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0555657->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0555657->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0555657->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0555657->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0555657->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0555657->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0555657->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0555657->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0555657->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0555657->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0555657->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0555657->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0555657->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0555657);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3227[20] = {
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
   Double_t Graph1_fy3227[20] = {
   1.076608,
   1.035179,
   1.060533,
   1.006495,
   0.9406585,
   0.8903336,
   0.9659645,
   0.9697941,
   1.020384,
   1.091614,
   1.061377,
   1.058027,
   1.132405,
   1.105349,
   0.9826767,
   0.9835945,
   1.281877,
   0.972101,
   0.9348953,
   0.9146191};
   Double_t Graph1_felx3227[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3227[20] = {
   0.04086747,
   0.04095106,
   0.04066958,
   0.0390302,
   0.03647717,
   0.03442229,
   0.0374585,
   0.03848511,
   0.03965834,
   0.04658894,
   0.04649976,
   0.04954667,
   0.05690549,
   0.06479672,
   0.07129086,
   0.0822523,
   0.1521308,
   0.1361214,
   0.1736057,
   0.304873};
   Double_t Graph1_fehx3227[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3227[20] = {
   0.04086747,
   0.04095106,
   0.04066958,
   0.0390302,
   0.03647717,
   0.03442229,
   0.0374585,
   0.03848511,
   0.03965834,
   0.04658894,
   0.04649976,
   0.04954667,
   0.05690549,
   0.06479672,
   0.07129086,
   0.0822523,
   0.1521308,
   0.1361214,
   0.1736057,
   0.304873};
   grae = new TGraphAsymmErrors(20,Graph1_fx3227,Graph1_fy3227,Graph1_felx3227,Graph1_fehx3227,Graph1_fely3227,Graph1_fehy3227);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1321932233227 = new TH1F("Graph_Graph_Graph_Graph1321932233227","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1321932233227->SetMinimum(0.5273198);
   Graph_Graph_Graph_Graph1321932233227->SetMaximum(1.516434);
   Graph_Graph_Graph_Graph1321932233227->SetDirectory(0);
   Graph_Graph_Graph_Graph1321932233227->SetStats(0);
   Graph_Graph_Graph_Graph1321932233227->SetLineStyle(0);
   Graph_Graph_Graph_Graph1321932233227->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1321932233227->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1321932233227->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1321932233227->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1321932233227->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1321932233227->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1321932233227->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1321932233227->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1321932233227->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1321932233227->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1321932233227->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1321932233227->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1321932233227->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1321932233227->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1321932233227->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1321932233227->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1321932233227->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1321932233227->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1321932233227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1321932233227->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1321932233227);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__394 = new TH1F("hframe_copy__394","",1000,0,1);
   hframe_copy__394->SetMinimum(0.3);
   hframe_copy__394->SetMaximum(1.7);
   hframe_copy__394->SetDirectory(0);
   hframe_copy__394->SetStats(0);
   hframe_copy__394->SetLineStyle(0);
   hframe_copy__394->SetMarkerStyle(20);
   hframe_copy__394->GetXaxis()->SetTitle("p_{T}^{assym}(H^{#pm}, b_{H^{#pm}})");
   hframe_copy__394->GetXaxis()->SetLabelFont(43);
   hframe_copy__394->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__394->GetXaxis()->SetLabelSize(27);
   hframe_copy__394->GetXaxis()->SetTitleSize(33);
   hframe_copy__394->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__394->GetXaxis()->SetTitleFont(43);
   hframe_copy__394->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__394->GetYaxis()->SetNdivisions(505);
   hframe_copy__394->GetYaxis()->SetLabelFont(43);
   hframe_copy__394->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__394->GetYaxis()->SetLabelSize(21);
   hframe_copy__394->GetYaxis()->SetTitleSize(33);
   hframe_copy__394->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__394->GetYaxis()->SetTitleFont(43);
   hframe_copy__394->GetZaxis()->SetLabelFont(43);
   hframe_copy__394->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__394->GetZaxis()->SetLabelSize(27);
   hframe_copy__394->GetZaxis()->SetTitleSize(33);
   hframe_copy__394->GetZaxis()->SetTitleOffset(1);
   hframe_copy__394->GetZaxis()->SetTitleFont(43);
   hframe_copy__394->Draw("sameaxis");
   DPtSumPt_hplus_bH_2->Modified();
   DPtSumPt_hplus_bH->cd();
  
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
   DPtSumPt_hplus_bH->cd();
  
// ------------>Primitives in pad: DPtSumPt_hplus_bH_1
   TPad *DPtSumPt_hplus_bH_1 = new TPad("DPtSumPt_hplus_bH_1", "DPtSumPt_hplus_bH_1",0,0.2897959,1,1);
   DPtSumPt_hplus_bH_1->Draw();
   DPtSumPt_hplus_bH_1->cd();
   DPtSumPt_hplus_bH_1->Range(-0.2025316,-2.124827,1.063291,4.116531);
   DPtSumPt_hplus_bH_1->SetFillColor(0);
   DPtSumPt_hplus_bH_1->SetFillStyle(4000);
   DPtSumPt_hplus_bH_1->SetBorderMode(0);
   DPtSumPt_hplus_bH_1->SetBorderSize(2);
   DPtSumPt_hplus_bH_1->SetLogy();
   DPtSumPt_hplus_bH_1->SetTickx(1);
   DPtSumPt_hplus_bH_1->SetTicky(1);
   DPtSumPt_hplus_bH_1->SetLeftMargin(0.16);
   DPtSumPt_hplus_bH_1->SetRightMargin(0.05);
   DPtSumPt_hplus_bH_1->SetTopMargin(0.06);
   DPtSumPt_hplus_bH_1->SetBottomMargin(0.02);
   DPtSumPt_hplus_bH_1->SetFrameFillStyle(0);
   DPtSumPt_hplus_bH_1->SetFrameBorderMode(0);
   DPtSumPt_hplus_bH_1->SetFrameFillStyle(0);
   DPtSumPt_hplus_bH_1->SetFrameBorderMode(0);
   
   TH1F *hframe__395 = new TH1F("hframe__395","",1000,0,1);
   hframe__395->SetMinimum(0.01);
   hframe__395->SetMaximum(5521.406);
   hframe__395->SetDirectory(0);
   hframe__395->SetStats(0);
   hframe__395->SetLineStyle(0);
   hframe__395->SetMarkerStyle(20);
   hframe__395->GetXaxis()->SetLabelFont(43);
   hframe__395->GetXaxis()->SetLabelOffset(0.007);
   hframe__395->GetXaxis()->SetLabelSize(0);
   hframe__395->GetXaxis()->SetTitleSize(0);
   hframe__395->GetXaxis()->SetTitleOffset(0.9);
   hframe__395->GetXaxis()->SetTitleFont(43);
   hframe__395->GetYaxis()->SetTitle("Events / 0.05");
   hframe__395->GetYaxis()->SetLabelFont(43);
   hframe__395->GetYaxis()->SetLabelOffset(0.007);
   hframe__395->GetYaxis()->SetLabelSize(27);
   hframe__395->GetYaxis()->SetTitleSize(33);
   hframe__395->GetYaxis()->SetTitleOffset(1.5625);
   hframe__395->GetYaxis()->SetTitleFont(43);
   hframe__395->GetZaxis()->SetLabelFont(43);
   hframe__395->GetZaxis()->SetLabelOffset(0.007);
   hframe__395->GetZaxis()->SetLabelSize(27);
   hframe__395->GetZaxis()->SetTitleSize(33);
   hframe__395->GetZaxis()->SetTitleOffset(1);
   hframe__395->GetZaxis()->SetTitleFont(43);
   hframe__395->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_55_stack_56_stack_57 = new TH1F("StackedMCstackHist_stack_55_stack_56_stack_57","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMinimum(0.01168731);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMaximum(1398.996);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetDirectory(0);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetStats(0);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetLineStyle(0);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMarkerStyle(20);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_55_stack_56_stack_57->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_55_stack_56_stack_57);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,7.816402);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,8.079573);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,8.272796);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,7.871173);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,8.790133);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,12.94143);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,10.51231);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,8.486779);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,6.819428);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,5.113889);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,5.055525);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,7.011681);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,4.523613);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,4.280971);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,3.640171);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,2.605913);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.6730003);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,1.025175);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.5424798);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.2014767);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.188575);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.32204);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.337942);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.258256);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.324112);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.9546);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.75918);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.855793);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.9829277);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.053433);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.01709);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.92971);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.9514473);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.9175803);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.649219);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.5649171);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.2794699);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.4456979);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.3062898);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.1605113);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,95.83524);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,93.8591);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,96.15809);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,100.679);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,98.49589);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,105.6627);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,108.2058);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,104.9099);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,98.19878);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,93.59293);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,84.65997);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,76.89122);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,72.47801);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,51.39067);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,39.29876);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,20.65258);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,12.65212);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,7.418202);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,4.275341);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1.052204);
   TT_stack_2_stack_2_stack_2->SetBinError(1,2.427045);
   TT_stack_2_stack_2_stack_2->SetBinError(2,2.418115);
   TT_stack_2_stack_2_stack_2->SetBinError(3,2.432558);
   TT_stack_2_stack_2_stack_2->SetBinError(4,2.495738);
   TT_stack_2_stack_2_stack_2->SetBinError(5,2.470742);
   TT_stack_2_stack_2_stack_2->SetBinError(6,2.545165);
   TT_stack_2_stack_2_stack_2->SetBinError(7,2.596498);
   TT_stack_2_stack_2_stack_2->SetBinError(8,2.539308);
   TT_stack_2_stack_2_stack_2->SetBinError(9,2.456187);
   TT_stack_2_stack_2_stack_2->SetBinError(10,2.397489);
   TT_stack_2_stack_2_stack_2->SetBinError(11,2.264291);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.158883);
   TT_stack_2_stack_2_stack_2->SetBinError(13,2.094207);
   TT_stack_2_stack_2_stack_2->SetBinError(14,1.767044);
   TT_stack_2_stack_2_stack_2->SetBinError(15,1.534882);
   TT_stack_2_stack_2_stack_2->SetBinError(16,1.115875);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.8807004);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.6654924);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.515599);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.2510798);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_DPtSumPt_hplus_bHInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,540.9656);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,515.3456);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,536.7563);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,552.1585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,599.6655);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,632.7997);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,569.7129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,541.3815);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,543.7573);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,404.2183);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,401.1563);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,347.0878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,272.6966);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,207.5936);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,150.4105);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,122.1266);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,42.0624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,44.02031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,26.20169);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,8.586482);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,34.59231);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,33.95303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,34.45801);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,34.97759);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,36.39444);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,37.16443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,35.59543);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,34.84661);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,34.70695);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,30.5993);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,29.91857);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,27.68567);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,24.39592);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,21.22665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,17.77417);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,16.2628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,9.831904);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,9.806604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,7.665647);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,4.428653);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__396 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__396","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(1,0.5797565);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(2,0.5928354);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(3,0.3367027);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(4,0.8811979);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(5,0.3300624);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(6,0.1725097);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(7,0.4264191);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(8,0.2192858);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(9,0.5109062);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(10,0.3035375);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(11,0.5787589);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(12,0.5513881);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(13,0.06277289);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(14,0.267264);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(15,-0.09148998);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(16,0.07815517);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(17,0.002885116);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(18,0.1820799);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(19,-0.00610459);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(20,-0.02506726);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(1,0.2518745);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(2,0.271384);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(3,0.2561498);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(4,0.2632386);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(5,0.2545607);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(6,0.251204);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(7,0.2695661);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(8,0.2346588);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(9,0.2518134);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(10,0.2067622);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(11,0.2308648);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(12,0.1973082);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(13,0.1817137);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(14,0.1804942);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(15,0.1710038);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(16,0.1396099);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(17,0.06596629);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(18,0.06903871);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(19,0.0313283);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(20,0.02506726);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetEntries(1103);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3228[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3228[20] = {
   644.6173,
   617.2843,
   641.1871,
   660.7087,
   706.9516,
   751.4037,
   688.4311,
   654.7781,
   648.7755,
   502.9251,
   490.8718,
   430.9908,
   349.6982,
   263.2652,
   193.3495,
   145.3851,
   55.38752,
   52.46368,
   31.01952,
   9.840162};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3228[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3228[20] = {
   34.69771,
   34.06469,
   34.56967,
   35.08909,
   36.50223,
   37.36847,
   35.73333,
   34.98826,
   34.80763,
   30.71115,
   30.02136,
   27.83668,
   24.50412,
   21.31983,
   17.91639,
   16.31083,
   9.875225,
   9.839259,
   7.68907,
   4.438668};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3228[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3228[20] = {
   34.69771,
   34.06469,
   34.56967,
   35.08909,
   36.50223,
   37.36847,
   35.73333,
   34.98826,
   34.80763,
   30.71115,
   30.02136,
   27.83668,
   24.50412,
   21.31983,
   17.91639,
   16.31083,
   9.875225,
   9.839259,
   7.68907,
   4.438668};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3228,BkgSum-SR-Inclusive_sum_errors_fy3228,BkgSum-SR-Inclusive_sum_errors_felx3228,BkgSum-SR-Inclusive_sum_errors_fehx3228,BkgSum-SR-Inclusive_sum_errors_fely3228,BkgSum-SR-Inclusive_sum_errors_fehy3228);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1264;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMinimum(4.861345);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMaximum(867.1093);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors322032243228);
   
   grae->Draw("e2 ");
   
   TH1F *Data__397 = new TH1F("Data__397","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   Data__397->SetBinContent(1,694);
   Data__397->SetBinContent(2,639);
   Data__397->SetBinContent(3,680);
   Data__397->SetBinContent(4,665);
   Data__397->SetBinContent(5,665);
   Data__397->SetBinContent(6,669);
   Data__397->SetBinContent(7,665);
   Data__397->SetBinContent(8,635);
   Data__397->SetBinContent(9,662);
   Data__397->SetBinContent(10,549);
   Data__397->SetBinContent(11,521);
   Data__397->SetBinContent(12,456);
   Data__397->SetBinContent(13,396);
   Data__397->SetBinContent(14,291);
   Data__397->SetBinContent(15,190);
   Data__397->SetBinContent(16,143);
   Data__397->SetBinContent(17,71);
   Data__397->SetBinContent(18,51);
   Data__397->SetBinContent(19,29);
   Data__397->SetBinContent(20,9);
   Data__397->SetBinError(1,26.34388);
   Data__397->SetBinError(2,25.27845);
   Data__397->SetBinError(3,26.07681);
   Data__397->SetBinError(4,25.78759);
   Data__397->SetBinError(5,25.78759);
   Data__397->SetBinError(6,25.86503);
   Data__397->SetBinError(7,25.78759);
   Data__397->SetBinError(8,25.19921);
   Data__397->SetBinError(9,25.72936);
   Data__397->SetBinError(10,23.43075);
   Data__397->SetBinError(11,22.82542);
   Data__397->SetBinError(12,21.35416);
   Data__397->SetBinError(13,19.89975);
   Data__397->SetBinError(14,17.05872);
   Data__397->SetBinError(15,13.78405);
   Data__397->SetBinError(16,11.95826);
   Data__397->SetBinError(17,8.42615);
   Data__397->SetBinError(18,7.141428);
   Data__397->SetBinError(19,5.385165);
   Data__397->SetBinError(20,3);
   Data__397->SetEntries(8684);
   Data__397->SetDirectory(0);
   Data__397->SetFillStyle(3001);
   Data__397->SetLineWidth(2);
   Data__397->SetMarkerStyle(20);
   Data__397->SetMarkerSize(1.2);
   Data__397->GetXaxis()->SetRange(1,100);
   Data__397->GetXaxis()->SetLabelFont(42);
   Data__397->GetXaxis()->SetTitleOffset(1);
   Data__397->GetXaxis()->SetTitleFont(42);
   Data__397->GetYaxis()->SetLabelFont(42);
   Data__397->GetYaxis()->SetTitleFont(42);
   Data__397->GetZaxis()->SetLabelFont(42);
   Data__397->GetZaxis()->SetTitleOffset(1);
   Data__397->GetZaxis()->SetTitleFont(42);
   Data__397->Draw("EP same");
   
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

   ci = 1264;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1264;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__398 = new TH1F("hframe_copy__398","",1000,0,1);
   hframe_copy__398->SetMinimum(0.01);
   hframe_copy__398->SetMaximum(5521.406);
   hframe_copy__398->SetDirectory(0);
   hframe_copy__398->SetStats(0);
   hframe_copy__398->SetLineStyle(0);
   hframe_copy__398->SetMarkerStyle(20);
   hframe_copy__398->GetXaxis()->SetLabelFont(43);
   hframe_copy__398->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__398->GetXaxis()->SetLabelSize(0);
   hframe_copy__398->GetXaxis()->SetTitleSize(0);
   hframe_copy__398->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__398->GetXaxis()->SetTitleFont(43);
   hframe_copy__398->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__398->GetYaxis()->SetLabelFont(43);
   hframe_copy__398->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__398->GetYaxis()->SetLabelSize(27);
   hframe_copy__398->GetYaxis()->SetTitleSize(33);
   hframe_copy__398->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__398->GetYaxis()->SetTitleFont(43);
   hframe_copy__398->GetZaxis()->SetLabelFont(43);
   hframe_copy__398->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__398->GetZaxis()->SetLabelSize(27);
   hframe_copy__398->GetZaxis()->SetTitleSize(33);
   hframe_copy__398->GetZaxis()->SetTitleOffset(1);
   hframe_copy__398->GetZaxis()->SetTitleFont(43);
   hframe_copy__398->Draw("sameaxis");
   
   TH1F *hframe_copy__399 = new TH1F("hframe_copy__399","",1000,0,1);
   hframe_copy__399->SetMinimum(0.01);
   hframe_copy__399->SetMaximum(5521.406);
   hframe_copy__399->SetDirectory(0);
   hframe_copy__399->SetStats(0);
   hframe_copy__399->SetLineStyle(0);
   hframe_copy__399->SetMarkerStyle(20);
   hframe_copy__399->GetXaxis()->SetLabelFont(43);
   hframe_copy__399->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__399->GetXaxis()->SetLabelSize(0);
   hframe_copy__399->GetXaxis()->SetTitleSize(0);
   hframe_copy__399->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__399->GetXaxis()->SetTitleFont(43);
   hframe_copy__399->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__399->GetYaxis()->SetLabelFont(43);
   hframe_copy__399->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__399->GetYaxis()->SetLabelSize(27);
   hframe_copy__399->GetYaxis()->SetTitleSize(33);
   hframe_copy__399->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__399->GetYaxis()->SetTitleFont(43);
   hframe_copy__399->GetZaxis()->SetLabelFont(43);
   hframe_copy__399->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__399->GetZaxis()->SetLabelSize(27);
   hframe_copy__399->GetZaxis()->SetTitleSize(33);
   hframe_copy__399->GetZaxis()->SetTitleOffset(1);
   hframe_copy__399->GetZaxis()->SetTitleFont(43);
   hframe_copy__399->Draw("sameaxis");
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
   DPtSumPt_hplus_bH_1->Modified();
   DPtSumPt_hplus_bH->cd();
   DPtSumPt_hplus_bH->Modified();
   DPtSumPt_hplus_bH->cd();
   DPtSumPt_hplus_bH->SetSelected(DPtSumPt_hplus_bH);
}
