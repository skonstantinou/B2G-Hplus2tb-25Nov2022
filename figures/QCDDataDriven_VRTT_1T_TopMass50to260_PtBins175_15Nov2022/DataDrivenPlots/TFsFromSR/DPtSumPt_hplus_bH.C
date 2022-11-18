void DPtSumPt_hplus_bH()
{
//=========Macro generated from canvas: DPtSumPt_hplus_bH/DPtSumPt_hplus_bH
//=========  (Fri Nov 18 13:27:39 2022) by ROOT version 6.20/02
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
   0.02304231,
   0.02329258,
   0.02302832,
   0.02308004,
   0.02390419,
   0.02325183,
   0.02303898,
   0.02342747,
   0.02360525,
   0.02403262,
   0.0247211,
   0.02562066,
   0.02666002,
   0.02883213,
   0.03358677,
   0.04566984,
   0.06700233,
   0.1028024,
   0.1246331,
   0.2296441};
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
   0.02304231,
   0.02329258,
   0.02302832,
   0.02308004,
   0.02390419,
   0.02325183,
   0.02303898,
   0.02342747,
   0.02360525,
   0.02403262,
   0.0247211,
   0.02562066,
   0.02666002,
   0.02883213,
   0.03358677,
   0.04566984,
   0.06700233,
   0.1028024,
   0.1246331,
   0.2296441};
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
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMinimum(0.7244271);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMaximum(1.275573);
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
   0.02304231,
   0.02329258,
   0.02302832,
   0.02308004,
   0.02390419,
   0.02325183,
   0.02303898,
   0.02342747,
   0.02360525,
   0.02403262,
   0.0247211,
   0.02562066,
   0.02666002,
   0.02883213,
   0.03358677,
   0.04566984,
   0.06700233,
   0.1028024,
   0.1246331,
   0.2296441};
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
   0.02304231,
   0.02329258,
   0.02302832,
   0.02308004,
   0.02390419,
   0.02325183,
   0.02303898,
   0.02342747,
   0.02360525,
   0.02403262,
   0.0247211,
   0.02562066,
   0.02666002,
   0.02883213,
   0.03358677,
   0.04566984,
   0.06700233,
   0.1028024,
   0.1246331,
   0.2296441};
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
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMinimum(0.7244271);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMaximum(1.275573);
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
   0.9992404,
   0.9818963,
   0.9440827,
   0.9811403,
   1.033331,
   1.000399,
   1.015655,
   0.9627529,
   1.024361,
   0.9511903,
   0.9323659,
   0.9212151,
   0.9519124,
   1.030818,
   0.9714586,
   0.9483524,
   0.9866176,
   0.8714182,
   1.171488,
   1.040904};
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
   0.02799531,
   0.02808859,
   0.02705119,
   0.0276405,
   0.02943974,
   0.0281273,
   0.02811518,
   0.02811032,
   0.0295216,
   0.0290516,
   0.029484,
   0.0305716,
   0.03292258,
   0.03828362,
   0.0433152,
   0.05836706,
   0.09044309,
   0.1196985,
   0.1900404,
   0.3138443};
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
   0.02799531,
   0.02808859,
   0.02705119,
   0.0276405,
   0.02943974,
   0.0281273,
   0.02811518,
   0.02811032,
   0.0295216,
   0.0290516,
   0.029484,
   0.0305716,
   0.03292258,
   0.03828362,
   0.0433152,
   0.05836706,
   0.09044309,
   0.1196985,
   0.1900404,
   0.3138443};
   grae = new TGraphAsymmErrors(20,Graph1_fx3227,Graph1_fy3227,Graph1_felx3227,Graph1_fehx3227,Graph1_fely3227,Graph1_fehy3227);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1321932233227 = new TH1F("Graph_Graph_Graph_Graph1321932233227","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1321932233227->SetMinimum(0.6636126);
   Graph_Graph_Graph_Graph1321932233227->SetMaximum(1.424975);
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
   DPtSumPt_hplus_bH_1->Range(-0.2025316,-2.129687,1.063291,4.354685);
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
   hframe__395->SetMaximum(9238.957);
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
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMinimum(0.03007028);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMaximum(2359.67);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,30.45262);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,29.52408);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,29.40655);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,30.92817);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,30.9615);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,35.32631);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,30.53278);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,34.36225);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,36.08626);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,29.14686);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,28.71739);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,26.02804);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,21.31194);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,18.43902);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,12.04189);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,9.169844);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,3.639862);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.9818282);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.9733915);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.2890135);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,2.980056);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.624587);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,3.039128);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,3.30907);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.330169);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,3.311057);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.442399);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.483871);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.528521);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.496182);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.667759);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.167572);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.90758);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.954641);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.585929);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.411675);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.9074109);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.5371345);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.5517545);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.1863568);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(52636);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,750.7961);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,744.5995);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,740.0272);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,744.3627);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,740.1949);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,742.7255);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,742.7457);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,739.3812);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,726.3658);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,695.5229);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,668.4836);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,626.8394);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,580.9092);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,493.5364);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,338.6482);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,177.1914);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,83.10659);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,40.10357);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,22.65896);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,7.508082);
   TT_stack_2_stack_2_stack_2->SetBinError(1,6.67701);
   TT_stack_2_stack_2_stack_2->SetBinError(2,6.637476);
   TT_stack_2_stack_2_stack_2->SetBinError(3,6.617805);
   TT_stack_2_stack_2_stack_2->SetBinError(4,6.636893);
   TT_stack_2_stack_2_stack_2->SetBinError(5,6.630149);
   TT_stack_2_stack_2_stack_2->SetBinError(6,6.632605);
   TT_stack_2_stack_2_stack_2->SetBinError(7,6.619269);
   TT_stack_2_stack_2_stack_2->SetBinError(8,6.614819);
   TT_stack_2_stack_2_stack_2->SetBinError(9,6.541967);
   TT_stack_2_stack_2_stack_2->SetBinError(10,6.410524);
   TT_stack_2_stack_2_stack_2->SetBinError(11,6.265932);
   TT_stack_2_stack_2_stack_2->SetBinError(12,6.055309);
   TT_stack_2_stack_2_stack_2->SetBinError(13,5.797812);
   TT_stack_2_stack_2_stack_2->SetBinError(14,5.334026);
   TT_stack_2_stack_2_stack_2->SetBinError(15,4.382322);
   TT_stack_2_stack_2_stack_2->SetBinError(16,3.191065);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.221199);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.546529);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.161674);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.6808692);
   TT_stack_2_stack_2_stack_2->SetEntries(185137);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,493.7197);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,470.407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,520.7075);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,508.9291);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,421.1046);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,486.4437);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,511.6069);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,444.6376);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,412.9146);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,402.3392);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,375.3393);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,332.7873);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,276.0109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,191.3495);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,167.088);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,92.01633);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,33.86765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,19.735);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,8.805041);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2.770644);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,28.45377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,28.09589);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,28.80346);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,28.69708);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,27.61997);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,28.45195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,28.74934);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,27.65521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,26.8437);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,26.19676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,25.62486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,24.42038);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,22.49738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,19.46637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,16.75438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,12.22523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,7.717016);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,6.034342);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,3.832765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,2.321882);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3639.597);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(1,1.522213);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(2,2.144432);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(3,2.435549);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(4,2.786105);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(5,2.210665);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(6,2.023512);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(7,2.6889);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(8,1.967824);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(9,2.879644);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(10,2.169271);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(11,1.312892);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(12,2.238688);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(13,1.907639);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(14,0.9694942);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(15,1.527798);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(16,1.126805);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(17,0.6017796);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(18,0.05297105);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(19,0.09899824);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(20,0.0529829);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(1,0.5645771);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(2,0.5665224);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(3,0.5523882);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(4,0.5824542);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(5,0.5591621);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(6,0.561824);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(7,0.5675518);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(8,0.5434293);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(9,0.5490472);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(10,0.5219005);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(11,0.5099178);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(12,0.4862562);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(13,0.4422879);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(14,0.4098337);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(15,0.3729034);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(16,0.2996728);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(17,0.2200002);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(18,0.1467655);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(19,0.1331303);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(20,0.03746513);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetEntries(5945);
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
   1274.969,
   1244.531,
   1290.141,
   1284.22,
   1192.261,
   1264.495,
   1284.885,
   1218.381,
   1175.367,
   1127.009,
   1072.54,
   985.6547,
   878.2321,
   703.325,
   517.7781,
   278.3775,
   120.6141,
   60.82039,
   32.43739,
   10.56774};
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
   29.37822,
   28.98833,
   29.70978,
   29.63985,
   28.50003,
   29.40184,
   29.60244,
   28.54359,
   27.74482,
   27.08498,
   26.51438,
   25.25312,
   23.41369,
   20.27836,
   17.39049,
   12.71346,
   8.081427,
   6.252483,
   4.042773,
   2.426819};
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
   29.37822,
   28.98833,
   29.70978,
   29.63985,
   28.50003,
   29.40184,
   29.60244,
   28.54359,
   27.74482,
   27.08498,
   26.51438,
   25.25312,
   23.41369,
   20.27836,
   17.39049,
   12.71346,
   8.081427,
   6.252483,
   4.042773,
   2.426819};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMinimum(7.326829);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMaximum(1451.022);
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
   Data__397->SetBinContent(1,1274);
   Data__397->SetBinContent(2,1222);
   Data__397->SetBinContent(3,1218);
   Data__397->SetBinContent(4,1260);
   Data__397->SetBinContent(5,1232);
   Data__397->SetBinContent(6,1265);
   Data__397->SetBinContent(7,1305);
   Data__397->SetBinContent(8,1173);
   Data__397->SetBinContent(9,1204);
   Data__397->SetBinContent(10,1072);
   Data__397->SetBinContent(11,1000);
   Data__397->SetBinContent(12,908);
   Data__397->SetBinContent(13,836);
   Data__397->SetBinContent(14,725);
   Data__397->SetBinContent(15,503);
   Data__397->SetBinContent(16,264);
   Data__397->SetBinContent(17,119);
   Data__397->SetBinContent(18,53);
   Data__397->SetBinContent(19,38);
   Data__397->SetBinContent(20,11);
   Data__397->SetBinError(1,35.69314);
   Data__397->SetBinError(2,34.95712);
   Data__397->SetBinError(3,34.89986);
   Data__397->SetBinError(4,35.49648);
   Data__397->SetBinError(5,35.09986);
   Data__397->SetBinError(6,35.56684);
   Data__397->SetBinError(7,36.12478);
   Data__397->SetBinError(8,34.24909);
   Data__397->SetBinError(9,34.6987);
   Data__397->SetBinError(10,32.74141);
   Data__397->SetBinError(11,31.62278);
   Data__397->SetBinError(12,30.13304);
   Data__397->SetBinError(13,28.91366);
   Data__397->SetBinError(14,26.92582);
   Data__397->SetBinError(15,22.42766);
   Data__397->SetBinError(16,16.24808);
   Data__397->SetBinError(17,10.90871);
   Data__397->SetBinError(18,7.28011);
   Data__397->SetBinError(19,6.164414);
   Data__397->SetBinError(20,3.316625);
   Data__397->SetEntries(16686);
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
   hframe_copy__398->SetMaximum(9238.957);
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
   hframe_copy__399->SetMaximum(9238.957);
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
