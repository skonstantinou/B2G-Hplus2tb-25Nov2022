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
   0.03687474,
   0.03598261,
   0.03670957,
   0.03586543,
   0.0347153,
   0.03352055,
   0.03125484,
   0.02855855,
   0.0285961,
   0.02694187,
   0.025181,
   0.02376548,
   0.02279522,
   0.02296026,
   0.02544953,
   0.03262171,
   0.05477272,
   0.1540905,
   0.3386885,
   0.3910577};
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
   0.03687474,
   0.03598261,
   0.03670957,
   0.03586543,
   0.0347153,
   0.03352055,
   0.03125484,
   0.02855855,
   0.0285961,
   0.02694187,
   0.025181,
   0.02376548,
   0.02279522,
   0.02296026,
   0.02544953,
   0.03262171,
   0.05477272,
   0.1540905,
   0.3386885,
   0.3910577};
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
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMinimum(0.5307308);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMaximum(1.469269);
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
   0.03687474,
   0.03598261,
   0.03670957,
   0.03586543,
   0.0347153,
   0.03352055,
   0.03125484,
   0.02855855,
   0.0285961,
   0.02694187,
   0.025181,
   0.02376548,
   0.02279522,
   0.02296026,
   0.02544953,
   0.03262171,
   0.05477272,
   0.1540905,
   0.3386885,
   0.3910577};
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
   0.03687474,
   0.03598261,
   0.03670957,
   0.03586543,
   0.0347153,
   0.03352055,
   0.03125484,
   0.02855855,
   0.0285961,
   0.02694187,
   0.025181,
   0.02376548,
   0.02279522,
   0.02296026,
   0.02544953,
   0.03262171,
   0.05477272,
   0.1540905,
   0.3386885,
   0.3910577};
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
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMinimum(0.5307308);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMaximum(1.469269);
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
   0.9741888,
   0.9184935,
   1.073544,
   0.9846834,
   1.037482,
   0.9825818,
   1.046,
   0.9470157,
   1.027542,
   1.010057,
   0.9922742,
   1.007049,
   0.9842186,
   1.030658,
   1.054198,
   1.085842,
   1.088472,
   1.029912,
   1.015558,
   1.800409};
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
   0.03868998,
   0.03697716,
   0.04217278,
   0.03795675,
   0.03845165,
   0.03614486,
   0.03500304,
   0.03169067,
   0.03251,
   0.03039913,
   0.02835069,
   0.02748996,
   0.02634201,
   0.02742821,
   0.03116802,
   0.04080843,
   0.06911801,
   0.1589189,
   0.3385195,
   0.7350138};
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
   0.03868998,
   0.03697716,
   0.04217278,
   0.03795675,
   0.03845165,
   0.03614486,
   0.03500304,
   0.03169067,
   0.03251,
   0.03039913,
   0.02835069,
   0.02748996,
   0.02634201,
   0.02742821,
   0.03116802,
   0.04080843,
   0.06911801,
   0.1589189,
   0.3385195,
   0.7350138};
   grae = new TGraphAsymmErrors(20,Graph1_fx3227,Graph1_fy3227,Graph1_felx3227,Graph1_fehx3227,Graph1_fely3227,Graph1_fehy3227);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1321932233227 = new TH1F("Graph_Graph_Graph_Graph1321932233227","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1321932233227->SetMinimum(0.4912006);
   Graph_Graph_Graph_Graph1321932233227->SetMaximum(2.721261);
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
   DPtSumPt_hplus_bH_1->Range(-0.2025316,-2.13058,1.063291,4.398421);
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
   hframe__395->SetMaximum(10155.01);
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
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMinimum(0.0128862);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMaximum(2702.851);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,26.19029);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,25.98839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,26.15742);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,28.84477);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,31.03654);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,31.85721);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,33.98805);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,37.14367);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,38.9953);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,41.46237);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,43.18924);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,50.86877);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,52.98893);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,47.84841);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,42.50351);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,24.05204);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,8.639501);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,1.489849);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.2905501);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.3922344);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,2.335416);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.051504);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.896708);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.188377);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.936374);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.923117);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.187051);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.298736);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.227109);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.371141);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.364288);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.615128);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,3.098887);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,2.671886);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,2.576147);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.023942);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.159573);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.4140627);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.1317006);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.2700817);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,279.1909);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,282.1002);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,280.119);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,310.3095);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,333.8296);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,362.7803);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,403.3008);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,458.6882);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,485.6808);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,546.6185);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,619.8567);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,681.2905);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,738.7191);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,741.525);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,613.6685);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,379.0141);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,143.9844);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,18.19383);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,3.059546);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1.653797);
   TT_stack_2_stack_2_stack_2->SetBinError(1,4.10889);
   TT_stack_2_stack_2_stack_2->SetBinError(2,4.114789);
   TT_stack_2_stack_2_stack_2->SetBinError(3,4.108984);
   TT_stack_2_stack_2_stack_2->SetBinError(4,4.344015);
   TT_stack_2_stack_2_stack_2->SetBinError(5,4.489276);
   TT_stack_2_stack_2_stack_2->SetBinError(6,4.712537);
   TT_stack_2_stack_2_stack_2->SetBinError(7,4.968477);
   TT_stack_2_stack_2_stack_2->SetBinError(8,5.306551);
   TT_stack_2_stack_2_stack_2->SetBinError(9,5.469592);
   TT_stack_2_stack_2_stack_2->SetBinError(10,5.820855);
   TT_stack_2_stack_2_stack_2->SetBinError(11,6.218474);
   TT_stack_2_stack_2_stack_2->SetBinError(12,6.514468);
   TT_stack_2_stack_2_stack_2->SetBinError(13,6.820185);
   TT_stack_2_stack_2_stack_2->SetBinError(14,6.841595);
   TT_stack_2_stack_2_stack_2->SetBinError(15,6.197353);
   TT_stack_2_stack_2_stack_2->SetBinError(16,4.863692);
   TT_stack_2_stack_2_stack_2->SetBinError(17,3.028487);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.043114);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.4373406);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.2972024);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_DPtSumPt_hplus_bHInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,345.4166);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,363.6635);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,297.332);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,344.3141);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,336.8326);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,357.4627);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,416.4401);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,447.1303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,447.5465);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,504.927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,571.4919);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,600.4479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,626.676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,580.6247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,429.0129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,248.9626);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,75.21854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,21.09649);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,5.512024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1.286546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,23.528);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,23.73007);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,21.69112);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,24.02545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,23.86401);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,24.69167);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,26.12512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,26.30136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,27.1673);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,28.7691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,30.36669);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,30.88227);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,31.45258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,30.58599);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,26.78954);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,20.60761);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,12.05084);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,6.182807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,2.966543);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,1.239812);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__396 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__396","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(1,49.66924);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(2,44.48617);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(3,46.78093);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(4,44.00034);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(5,44.77906);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(6,45.58285);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(7,41.28521);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(8,39.25028);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(9,36.81356);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(10,34.39457);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(11,31.28401);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(12,29.9573);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(13,28.45118);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(14,27.8042);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(15,26.64629);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(16,20.06007);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(17,9.650384);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(18,1.885314);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(19,0.759189);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(20,0.3865135);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(1,2.085879);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(2,2.059739);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(3,2.077353);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(4,2.059154);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(5,2.050279);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(6,2.015498);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(7,1.959596);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(8,1.909392);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(9,1.845812);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(10,1.784036);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(11,1.741121);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(12,1.714572);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(13,1.706803);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(14,1.676238);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(15,1.574453);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(16,1.433872);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(17,0.9917809);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(18,0.4438788);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(19,0.2606658);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(20,0.1213881);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetEntries(120993);
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
   650.7979,
   671.7521,
   603.6084,
   683.4684,
   701.6988,
   752.1002,
   853.7289,
   942.9622,
   972.2227,
   1093.008,
   1234.538,
   1332.607,
   1418.384,
   1369.998,
   1085.185,
   652.0287,
   227.8424,
   40.78017,
   8.86212,
   3.332577};
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
   23.998,
   24.1714,
   22.1582,
   24.51289,
   24.35968,
   25.21081,
   26.68316,
   26.92963,
   27.80177,
   29.44768,
   31.0869,
   31.67004,
   32.33238,
   31.45551,
   27.61745,
   21.27029,
   12.47955,
   6.283839,
   3.001498,
   1.30323};
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
   23.998,
   24.1714,
   22.1582,
   24.51289,
   24.35968,
   25.21081,
   26.68316,
   26.92963,
   27.80177,
   29.44768,
   31.0869,
   31.67004,
   32.33238,
   31.45551,
   27.61745,
   21.27029,
   12.47955,
   6.283839,
   3.001498,
   1.30323};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMinimum(1.826412);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMaximum(1595.585);
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
   Data__397->SetBinContent(1,634);
   Data__397->SetBinContent(2,617);
   Data__397->SetBinContent(3,648);
   Data__397->SetBinContent(4,673);
   Data__397->SetBinContent(5,728);
   Data__397->SetBinContent(6,739);
   Data__397->SetBinContent(7,893);
   Data__397->SetBinContent(8,893);
   Data__397->SetBinContent(9,999);
   Data__397->SetBinContent(10,1104);
   Data__397->SetBinContent(11,1225);
   Data__397->SetBinContent(12,1342);
   Data__397->SetBinContent(13,1396);
   Data__397->SetBinContent(14,1412);
   Data__397->SetBinContent(15,1144);
   Data__397->SetBinContent(16,708);
   Data__397->SetBinContent(17,248);
   Data__397->SetBinContent(18,42);
   Data__397->SetBinContent(19,9);
   Data__397->SetBinContent(20,6);
   Data__397->SetBinError(1,25.17936);
   Data__397->SetBinError(2,24.83948);
   Data__397->SetBinError(3,25.45584);
   Data__397->SetBinError(4,25.94224);
   Data__397->SetBinError(5,26.98148);
   Data__397->SetBinError(6,27.18455);
   Data__397->SetBinError(7,29.88311);
   Data__397->SetBinError(8,29.88311);
   Data__397->SetBinError(9,31.60696);
   Data__397->SetBinError(10,33.2265);
   Data__397->SetBinError(11,35);
   Data__397->SetBinError(12,36.63332);
   Data__397->SetBinError(13,37.36308);
   Data__397->SetBinError(14,37.57659);
   Data__397->SetBinError(15,33.82307);
   Data__397->SetBinError(16,26.60827);
   Data__397->SetBinError(17,15.74802);
   Data__397->SetBinError(18,6.480741);
   Data__397->SetBinError(19,3);
   Data__397->SetBinError(20,2.44949);
   Data__397->SetEntries(15464);
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
   hframe_copy__398->SetMaximum(10155.01);
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
   hframe_copy__399->SetMaximum(10155.01);
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
