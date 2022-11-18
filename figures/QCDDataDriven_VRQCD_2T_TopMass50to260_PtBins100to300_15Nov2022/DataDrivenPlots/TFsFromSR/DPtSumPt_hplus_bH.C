void DPtSumPt_hplus_bH()
{
//=========Macro generated from canvas: DPtSumPt_hplus_bH/DPtSumPt_hplus_bH
//=========  (Fri Nov 18 13:28:15 2022) by ROOT version 6.20/02
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
   0.03404442,
   0.03444807,
   0.03415377,
   0.03366246,
   0.03165384,
   0.03184131,
   0.03074741,
   0.03008726,
   0.03098402,
   0.03002859,
   0.02997392,
   0.02980664,
   0.03039514,
   0.03132791,
   0.03775873,
   0.04955062,
   0.08160508,
   0.1457359,
   0.2581301,
   0.3877276};
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
   0.03404442,
   0.03444807,
   0.03415377,
   0.03366246,
   0.03165384,
   0.03184131,
   0.03074741,
   0.03008726,
   0.03098402,
   0.03002859,
   0.02997392,
   0.02980664,
   0.03039514,
   0.03132791,
   0.03775873,
   0.04955062,
   0.08160508,
   0.1457359,
   0.2581301,
   0.3877276};
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
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMinimum(0.5347268);
   Graph_Graph_Graph_BackgroundStatSystError321732213225->SetMaximum(1.465273);
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
   0.03404442,
   0.03444807,
   0.03415377,
   0.03366246,
   0.03165384,
   0.03184131,
   0.03074741,
   0.03008726,
   0.03098402,
   0.03002859,
   0.02997392,
   0.02980664,
   0.03039514,
   0.03132791,
   0.03775873,
   0.04955062,
   0.08160508,
   0.1457359,
   0.2581301,
   0.3877276};
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
   0.03404442,
   0.03444807,
   0.03415377,
   0.03366246,
   0.03165384,
   0.03184131,
   0.03074741,
   0.03008726,
   0.03098402,
   0.03002859,
   0.02997392,
   0.02980664,
   0.03039514,
   0.03132791,
   0.03775873,
   0.04955062,
   0.08160508,
   0.1457359,
   0.2581301,
   0.3877276};
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
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMinimum(0.5347268);
   Graph_Graph_Graph_BackgroundStatError321832223226->SetMaximum(1.465273);
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
   0.9195782,
   1.023527,
   1.095729,
   1.026414,
   0.9710151,
   0.9964949,
   1.061728,
   0.957229,
   1.021133,
   0.9705484,
   0.9791395,
   0.9184519,
   1.061813,
   0.9172293,
   1.106159,
   1.15316,
   1.132371,
   0.7459893,
   1.803518,
   0.6994952};
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
   0.03346688,
   0.03587459,
   0.03719147,
   0.03560592,
   0.03236717,
   0.03330915,
   0.03391564,
   0.03140566,
   0.03335895,
   0.03245999,
   0.03295067,
   0.03207373,
   0.0365491,
   0.03452038,
   0.04800323,
   0.06549511,
   0.1012824,
   0.1226399,
   0.3536991,
   0.2855677};
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
   0.03346688,
   0.03587459,
   0.03719147,
   0.03560592,
   0.03236717,
   0.03330915,
   0.03391564,
   0.03140566,
   0.03335895,
   0.03245999,
   0.03295067,
   0.03207373,
   0.0365491,
   0.03452038,
   0.04800323,
   0.06549511,
   0.1012824,
   0.1226399,
   0.3536991,
   0.2855677};
   grae = new TGraphAsymmErrors(20,Graph1_fx3227,Graph1_fy3227,Graph1_felx3227,Graph1_fehx3227,Graph1_fely3227,Graph1_fehy3227);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1321932233227 = new TH1F("Graph_Graph_Graph_Graph1321932233227","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1321932233227->SetMinimum(0.2395985);
   Graph_Graph_Graph_Graph1321932233227->SetMaximum(2.331546);
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
   DPtSumPt_hplus_bH_1->Range(-0.2025316,-2.127065,1.063291,4.226166);
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
   hframe__395->SetMaximum(6997.968);
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
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMinimum(0.001982545);
   StackedMCstackHist_stack_55_stack_56_stack_57->SetMaximum(1967.665);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,12.11351);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,17.68473);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,17.19354);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,16.80027);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,17.27352);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,16.73302);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,20.77118);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,18.89986);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,20.1378);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,23.15908);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,23.1875);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,20.04467);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,19.87543);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,17.41783);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,12.36857);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,7.540982);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,3.372867);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.622757);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.217404);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.04840251);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.488504);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.832782);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.492519);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.68835);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.769019);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.290685);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.899503);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.724359);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.942059);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.679617);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.20806);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.030931);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.119968);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.852004);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,2.366174);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.204139);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.7901537);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.3396553);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.1431119);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.04054142);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,194.6677);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,191.3343);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,199.4222);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,212.672);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,228.6621);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,240.3932);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,250.8074);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,270.1897);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,269.1953);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,281.8162);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,296.8646);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,308.9069);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,307.2154);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,283.2538);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,221.9909);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,134.553);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,50.62904);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,11.77703);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,3.909211);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1.201025);
   TT_stack_2_stack_2_stack_2->SetBinError(1,3.395854);
   TT_stack_2_stack_2_stack_2->SetBinError(2,3.37828);
   TT_stack_2_stack_2_stack_2->SetBinError(3,3.444317);
   TT_stack_2_stack_2_stack_2->SetBinError(4,3.567831);
   TT_stack_2_stack_2_stack_2->SetBinError(5,3.698594);
   TT_stack_2_stack_2_stack_2->SetBinError(6,3.786454);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.863709);
   TT_stack_2_stack_2_stack_2->SetBinError(8,4.035343);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.99958);
   TT_stack_2_stack_2_stack_2->SetBinError(10,4.107743);
   TT_stack_2_stack_2_stack_2->SetBinError(11,4.202849);
   TT_stack_2_stack_2_stack_2->SetBinError(12,4.273131);
   TT_stack_2_stack_2_stack_2->SetBinError(13,4.240339);
   TT_stack_2_stack_2_stack_2->SetBinError(14,4.039746);
   TT_stack_2_stack_2_stack_2->SetBinError(15,3.560874);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.756084);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.678088);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.8169108);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.482845);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.2661306);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_DPtSumPt_hplus_bHInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,614.2474);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,586.2706);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,575.5509);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,580.1422);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,680.9295);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,641.0219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,651.4453);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,681.4202);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,628.2753);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,616.1534);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,581.7601);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,563.8551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,467.7763);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,469.0377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,245.6799);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,126.7325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,56.38593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,37.19878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,10.28965);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,7.328187);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,27.70443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,27.12526);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,26.71934);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,26.96626);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,29.05097);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,28.25373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,28.05212);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,28.86834);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,28.08139);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,27.22192);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,26.61066);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,26.18761);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,23.69041);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,23.70034);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,17.61424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,12.97653);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,8.815184);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,7.173943);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,3.687038);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,3.314865);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__396 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__396","h_SR_DPtSumPt_hplus_bHInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(1,0.8888196);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(2,1.124563);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(3,0.8165196);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(4,1.494781);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(5,1.341532);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(6,2.433234);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(7,1.641991);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(8,0.7313175);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(9,1.093485);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(10,1.638118);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(11,1.838035);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(12,0.8983104);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(13,1.557729);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(14,1.027649);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(15,1.225499);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(16,0.7514151);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(17,0.5303936);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(18,0.2202116);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(19,-0.03347139);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinContent(20,0.04068924);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(1,0.4356107);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(2,0.4307246);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(3,0.4403322);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(4,0.4704138);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(5,0.4476299);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(6,0.4719432);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(7,0.4891776);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(8,0.4666116);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(9,0.4406601);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(10,0.44922);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(11,0.4424705);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(12,0.4394212);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(13,0.4222479);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(14,0.4198512);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(15,0.3845921);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(16,0.337718);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(17,0.215427);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(18,0.07877318);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(19,0.05012906);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetBinError(20,0.05032711);
   ChargedHiggs_HplusTBHplusToTB_M_800__396->SetEntries(4205);
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
   821.0286,
   795.2896,
   792.1666,
   809.6145,
   926.8651,
   898.1481,
   923.0239,
   970.5097,
   917.6084,
   921.1287,
   901.8123,
   892.8066,
   794.8671,
   769.7094,
   480.0393,
   268.8264,
   110.3878,
   49.59856,
   14.41627,
   8.577615};
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
   27.95144,
   27.39619,
   27.05548,
   27.25361,
   29.33884,
   28.59821,
   28.38059,
   29.19998,
   28.4312,
   27.6602,
   27.03085,
   26.61157,
   24.1601,
   24.11339,
   18.12568,
   13.32052,
   9.008207,
   7.228289,
   3.721273,
   3.325778};
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
   27.95144,
   27.39619,
   27.05548,
   27.25361,
   29.33884,
   28.59821,
   28.38059,
   29.19998,
   28.4312,
   27.6602,
   27.03085,
   26.61157,
   24.1601,
   24.11339,
   18.12568,
   13.32052,
   9.008207,
   7.228289,
   3.721273,
   3.325778};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMinimum(4.726653);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors322032243228->SetMaximum(1099.155);
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
   Data__397->SetBinContent(1,755);
   Data__397->SetBinContent(2,814);
   Data__397->SetBinContent(3,868);
   Data__397->SetBinContent(4,831);
   Data__397->SetBinContent(5,900);
   Data__397->SetBinContent(6,895);
   Data__397->SetBinContent(7,980);
   Data__397->SetBinContent(8,929);
   Data__397->SetBinContent(9,937);
   Data__397->SetBinContent(10,894);
   Data__397->SetBinContent(11,883);
   Data__397->SetBinContent(12,820);
   Data__397->SetBinContent(13,844);
   Data__397->SetBinContent(14,706);
   Data__397->SetBinContent(15,531);
   Data__397->SetBinContent(16,310);
   Data__397->SetBinContent(17,125);
   Data__397->SetBinContent(18,37);
   Data__397->SetBinContent(19,26);
   Data__397->SetBinContent(20,6);
   Data__397->SetBinError(1,27.47726);
   Data__397->SetBinError(2,28.53069);
   Data__397->SetBinError(3,29.46184);
   Data__397->SetBinError(4,28.82707);
   Data__397->SetBinError(5,30);
   Data__397->SetBinError(6,29.91655);
   Data__397->SetBinError(7,31.30495);
   Data__397->SetBinError(8,30.4795);
   Data__397->SetBinError(9,30.61046);
   Data__397->SetBinError(10,29.89983);
   Data__397->SetBinError(11,29.71532);
   Data__397->SetBinError(12,28.63564);
   Data__397->SetBinError(13,29.05168);
   Data__397->SetBinError(14,26.57066);
   Data__397->SetBinError(15,23.04344);
   Data__397->SetBinError(16,17.60682);
   Data__397->SetBinError(17,11.18034);
   Data__397->SetBinError(18,6.082763);
   Data__397->SetBinError(19,5.09902);
   Data__397->SetBinError(20,2.44949);
   Data__397->SetEntries(13095);
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
   hframe_copy__398->SetMaximum(6997.968);
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
   hframe_copy__399->SetMaximum(6997.968);
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
