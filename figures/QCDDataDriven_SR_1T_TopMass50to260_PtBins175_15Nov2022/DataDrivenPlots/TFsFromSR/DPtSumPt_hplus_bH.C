void DPtSumPt_hplus_bH()
{
//=========Macro generated from canvas: DPtSumPt_hplus_bH/DPtSumPt_hplus_bH
//=========  (Fri Nov 18 13:27:30 2022) by ROOT version 6.20/02
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
   0.04786755,
   0.04959361,
   0.04629498,
   0.04438606,
   0.04547367,
   0.04469126,
   0.04336251,
   0.03998417,
   0.03958014,
   0.03895165,
   0.03685176,
   0.03659502,
   0.03812173,
   0.04107311,
   0.04774591,
   0.06511445,
   0.1283332,
   0.2241607,
   0.3732249,
   0.907113};
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
   0.04786755,
   0.04959361,
   0.04629498,
   0.04438606,
   0.04547367,
   0.04469126,
   0.04336251,
   0.03998417,
   0.03958014,
   0.03895165,
   0.03685176,
   0.03659502,
   0.03812173,
   0.04107311,
   0.04774591,
   0.06511445,
   0.1283332,
   0.2241607,
   0.3732249,
   0.907113};
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
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMinimum(0.08359833);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMaximum(2.088536);
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
   0.04786755,
   0.04959361,
   0.04629498,
   0.04438606,
   0.04547367,
   0.04469126,
   0.04336251,
   0.03998417,
   0.03958014,
   0.03895165,
   0.03685176,
   0.03659502,
   0.03812173,
   0.04107311,
   0.04774591,
   0.06511445,
   0.1283332,
   0.2241607,
   0.3732249,
   0.907113};
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
   0.04786755,
   0.04959361,
   0.04629498,
   0.04438606,
   0.04547367,
   0.04469126,
   0.04336251,
   0.03998417,
   0.03958014,
   0.03895165,
   0.03685176,
   0.03659502,
   0.03812173,
   0.04107311,
   0.04774591,
   0.06511445,
   0.1283332,
   0.2241607,
   0.3732249,
   0.907113};
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
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMinimum(0.08359833);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMaximum(2.088536);
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
   0.9692019,
   1.080574,
   0.9757976,
   0.9702113,
   1.187526,
   1.09937,
   1.035082,
   1.170607,
   0.9899207,
   1.051512,
   0.9556552,
   1.008801,
   1.097176,
   1.047081,
   0.997149,
   0.9821887,
   1.18233,
   1.217729,
   1.698848,
   2.586114};
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
   0.05045464,
   0.05514282,
   0.04825009,
   0.04651807,
   0.05263616,
   0.05028404,
   0.04700063,
   0.04708871,
   0.04213382,
   0.04318044,
   0.03901446,
   0.03962944,
   0.04360884,
   0.04618478,
   0.05384099,
   0.07280467,
   0.1552475,
   0.2793663,
   0.5662827,
   1.493094};
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
   0.05045464,
   0.05514282,
   0.04825009,
   0.04651807,
   0.05263616,
   0.05028404,
   0.04700063,
   0.04708871,
   0.04213382,
   0.04318044,
   0.03901446,
   0.03962944,
   0.04360884,
   0.04618478,
   0.05384099,
   0.07280467,
   0.1552475,
   0.2793663,
   0.5662827,
   1.493094};
   grae = new TGraphAsymmErrors(20,Graph1_fx3227,Graph1_fy3227,Graph1_felx3227,Graph1_fehx3227,Graph1_fely3227,Graph1_fehy3227);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1321932233227 = new TH1F("Graph_Graph_Graph_Graph1321932233227","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1321932233227->SetMinimum(0.5924017);
   Graph_Graph_Graph_Graph1321932233227->SetMaximum(4.39619);
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
   DPtSumPt_hplus_bH_1->Range(-0.2025316,-2.123228,1.063291,4.03816);
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
   hframe__395->SetMaximum(4660.974);
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
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMinimum(0.2569387);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMaximum(1027.755);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,11.63194);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,12.38485);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,10.87811);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,10.95167);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,14.96246);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,13.5457);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,10.67952);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,15.84321);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,14.44231);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,15.70337);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,16.57865);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,15.47812);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,15.07522);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,11.46629);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,11.08986);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,5.134153);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,2.032271);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,1.073646);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.08088542);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.0678364);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.161946);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.380306);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.166706);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.136984);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.702444);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.533642);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.214204);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.503179);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.47877);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.766457);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.346145);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.395412);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.549039);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.106635);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.394556);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.9615322);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.5487356);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.3298387);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.1883714);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.04697028);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,122.4689);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,125.5307);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,126.2796);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,137.0592);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,144.104);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,152.6694);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,155.6036);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,182.9479);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,182.2282);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,195.7989);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,207.8368);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,211.9419);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,206.2035);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,176.1165);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,121.8715);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,63.66615);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,21.89689);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,7.060878);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,3.806009);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.8011613);
   TT_stack_2_stack_2_stack_2->SetBinError(1,2.77264);
   TT_stack_2_stack_2_stack_2->SetBinError(2,2.826299);
   TT_stack_2_stack_2_stack_2->SetBinError(3,2.819375);
   TT_stack_2_stack_2_stack_2->SetBinError(4,2.919481);
   TT_stack_2_stack_2_stack_2->SetBinError(5,3.001874);
   TT_stack_2_stack_2_stack_2->SetBinError(6,3.107717);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.122469);
   TT_stack_2_stack_2_stack_2->SetBinError(8,3.407485);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.408373);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.547851);
   TT_stack_2_stack_2_stack_2->SetBinError(11,3.644257);
   TT_stack_2_stack_2_stack_2->SetBinError(12,3.694189);
   TT_stack_2_stack_2_stack_2->SetBinError(13,3.650041);
   TT_stack_2_stack_2_stack_2->SetBinError(14,3.386207);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.798552);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.017543);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.179825);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.6573294);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.4854705);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.2254549);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_DPtSumPt_hplus_bHInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,246.6247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,217.451);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,281.9866);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,300.3451);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,269.5558);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,268.5792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,302.279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,329.1402);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,360.95);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,352.4474);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,403.426);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,414.9268);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,355.6569);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,303.3055);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,211.0194);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,116.5001);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,25.12651);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,7.468287);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1.410813);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.2910441);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,17.97474);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,17.34097);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,19.16288);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,19.65258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,19.18308);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,19.11997);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,20.03991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,20.77775);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,21.75573);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,21.60628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,22.80858);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,23.17262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,21.6334);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,19.84509);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,16.12328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,11.85694);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,6.159534);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,3.419341);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,1.907432);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,1.026779);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__396 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__396","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(1,11.45644);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(2,12.74919);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(3,13.00597);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(4,11.72522);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(5,11.44378);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(6,13.32928);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(7,12.55047);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(8,12.37685);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(9,11.04851);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(10,13.78586);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(11,12.13427);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(12,9.671297);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(13,9.565563);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(14,8.399306);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(15,8.377928);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(16,5.04341);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(17,2.652457);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(18,0.8917875);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(19,0.7592315);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(20,0.1097705);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(1,1.061532);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(2,1.054079);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(3,1.100817);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(4,1.098894);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(5,1.137556);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(6,1.114303);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(7,1.147656);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(8,1.135661);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(9,1.101867);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(10,1.079734);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(11,1.034385);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(12,0.9943366);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(13,0.9636086);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(14,0.917531);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(15,0.8286661);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(16,0.7457889);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(17,0.5347223);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(18,0.3260508);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(19,0.2349892);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(20,0.1437993);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetEntries(35807);
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
   380.7256,
   355.3666,
   419.1443,
   448.356,
   428.6223,
   434.7943,
   468.5621,
   527.9313,
   557.6204,
   563.9496,
   627.8415,
   642.3468,
   576.9355,
   490.8883,
   343.9807,
   185.3004,
   49.05568,
   15.60281,
   5.297707,
   1.160042};
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
   18.2244,
   17.62391,
   19.40428,
   19.90075,
   19.49103,
   19.4315,
   20.31803,
   21.1089,
   22.07069,
   21.96677,
   23.13707,
   23.50669,
   21.99378,
   20.16231,
   16.42367,
   12.06574,
   6.295471,
   3.497538,
   1.977236,
   1.052289};
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
   18.2244,
   17.62391,
   19.40428,
   19.90075,
   19.49103,
   19.4315,
   20.31803,
   21.1089,
   22.07069,
   21.96677,
   23.13707,
   23.50669,
   21.99378,
   20.16231,
   16.42367,
   12.06574,
   6.295471,
   3.497538,
   1.977236,
   1.052289};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMinimum(0.09697755);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMaximum(732.4281);
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
   Data__397->SetBinContent(1,369);
   Data__397->SetBinContent(2,384);
   Data__397->SetBinContent(3,409);
   Data__397->SetBinContent(4,435);
   Data__397->SetBinContent(5,509);
   Data__397->SetBinContent(6,478);
   Data__397->SetBinContent(7,485);
   Data__397->SetBinContent(8,618);
   Data__397->SetBinContent(9,552);
   Data__397->SetBinContent(10,593);
   Data__397->SetBinContent(11,600);
   Data__397->SetBinContent(12,648);
   Data__397->SetBinContent(13,633);
   Data__397->SetBinContent(14,514);
   Data__397->SetBinContent(15,343);
   Data__397->SetBinContent(16,182);
   Data__397->SetBinContent(17,58);
   Data__397->SetBinContent(18,19);
   Data__397->SetBinContent(19,9);
   Data__397->SetBinContent(20,3);
   Data__397->SetBinError(1,19.20937);
   Data__397->SetBinError(2,19.59592);
   Data__397->SetBinError(3,20.22375);
   Data__397->SetBinError(4,20.85665);
   Data__397->SetBinError(5,22.56103);
   Data__397->SetBinError(6,21.86321);
   Data__397->SetBinError(7,22.02272);
   Data__397->SetBinError(8,24.85961);
   Data__397->SetBinError(9,23.49468);
   Data__397->SetBinError(10,24.35159);
   Data__397->SetBinError(11,24.4949);
   Data__397->SetBinError(12,25.45584);
   Data__397->SetBinError(13,25.15949);
   Data__397->SetBinError(14,22.67157);
   Data__397->SetBinError(15,18.52026);
   Data__397->SetBinError(16,13.49074);
   Data__397->SetBinError(17,7.615773);
   Data__397->SetBinError(18,4.358899);
   Data__397->SetBinError(19,3);
   Data__397->SetBinError(20,1.732051);
   Data__397->SetEntries(7845);
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
   hframe_copy__398->SetMaximum(4660.974);
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
   hframe_copy__399->SetMaximum(4660.974);
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
