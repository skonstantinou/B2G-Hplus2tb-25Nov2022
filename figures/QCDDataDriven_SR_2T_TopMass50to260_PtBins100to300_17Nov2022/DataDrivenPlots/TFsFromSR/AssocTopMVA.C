void AssocTopMVA()
{
//=========Macro generated from canvas: AssocTopMVA/AssocTopMVA
//=========  (Fri Nov 18 13:28:38 2022) by ROOT version 6.20/02
   TCanvas *AssocTopMVA = new TCanvas("AssocTopMVA", "AssocTopMVA",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   AssocTopMVA->SetHighLightColor(2);
   AssocTopMVA->Range(0,0,1,1);
   AssocTopMVA->SetFillColor(0);
   AssocTopMVA->SetBorderMode(0);
   AssocTopMVA->SetBorderSize(2);
   AssocTopMVA->SetTickx(1);
   AssocTopMVA->SetTicky(1);
   AssocTopMVA->SetLeftMargin(0.16);
   AssocTopMVA->SetRightMargin(0.05);
   AssocTopMVA->SetTopMargin(0.06);
   AssocTopMVA->SetBottomMargin(0.13);
   AssocTopMVA->SetFrameFillStyle(0);
   AssocTopMVA->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: AssocTopMVA_2
   TPad *AssocTopMVA_2 = new TPad("AssocTopMVA_2", "AssocTopMVA_2",0,0,1,0.304);
   AssocTopMVA_2->Draw();
   AssocTopMVA_2->cd();
   AssocTopMVA_2->Range(-0.204557,-0.428,1.073924,1.7);
   AssocTopMVA_2->SetFillColor(0);
   AssocTopMVA_2->SetFillStyle(4000);
   AssocTopMVA_2->SetBorderMode(0);
   AssocTopMVA_2->SetBorderSize(2);
   AssocTopMVA_2->SetTickx(1);
   AssocTopMVA_2->SetTicky(1);
   AssocTopMVA_2->SetLeftMargin(0.16);
   AssocTopMVA_2->SetRightMargin(0.05);
   AssocTopMVA_2->SetTopMargin(0);
   AssocTopMVA_2->SetBottomMargin(0.3421053);
   AssocTopMVA_2->SetFrameFillStyle(0);
   AssocTopMVA_2->SetFrameBorderMode(0);
   AssocTopMVA_2->SetFrameFillStyle(0);
   AssocTopMVA_2->SetFrameBorderMode(0);
   
   TH1F *hframe__771 = new TH1F("hframe__771","",1000,0,1.01);
   hframe__771->SetMinimum(0.3);
   hframe__771->SetMaximum(1.7);
   hframe__771->SetDirectory(0);
   hframe__771->SetStats(0);
   hframe__771->SetLineStyle(0);
   hframe__771->SetMarkerStyle(20);
   hframe__771->GetXaxis()->SetTitle("t^{res}_{assoc} DNN output");
   hframe__771->GetXaxis()->SetNdivisions(8);
   hframe__771->GetXaxis()->SetLabelFont(43);
   hframe__771->GetXaxis()->SetLabelOffset(0.007);
   hframe__771->GetXaxis()->SetLabelSize(27);
   hframe__771->GetXaxis()->SetTitleSize(33);
   hframe__771->GetXaxis()->SetTitleOffset(2.960526);
   hframe__771->GetXaxis()->SetTitleFont(43);
   hframe__771->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__771->GetYaxis()->SetNdivisions(505);
   hframe__771->GetYaxis()->SetLabelFont(43);
   hframe__771->GetYaxis()->SetLabelOffset(0.007);
   hframe__771->GetYaxis()->SetLabelSize(21);
   hframe__771->GetYaxis()->SetTitleSize(33);
   hframe__771->GetYaxis()->SetTitleOffset(1.5625);
   hframe__771->GetYaxis()->SetTitleFont(43);
   hframe__771->GetZaxis()->SetLabelFont(43);
   hframe__771->GetZaxis()->SetLabelOffset(0.007);
   hframe__771->GetZaxis()->SetLabelSize(27);
   hframe__771->GetZaxis()->SetTitleSize(33);
   hframe__771->GetZaxis()->SetTitleOffset(1);
   hframe__771->GetZaxis()->SetTitleFont(43);
   hframe__771->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3465[9] = {
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BackgroundStatSystError_fy3465[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3465[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3465[9] = {
   0.1277553,
   0.02367946,
   0.02236638,
   0.020764,
   0.01994423,
   0.01895526,
   0.01776621,
   0.01683749,
   0.02053885};
   Double_t BackgroundStatSystError_fehx3465[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3465[9] = {
   0.1277553,
   0.02367946,
   0.02236638,
   0.020764,
   0.01994423,
   0.01895526,
   0.01776621,
   0.01683749,
   0.02053885};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,BackgroundStatSystError_fx3465,BackgroundStatSystError_fy3465,BackgroundStatSystError_felx3465,BackgroundStatSystError_fehx3465,BackgroundStatSystError_fely3465,BackgroundStatSystError_fehy3465);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1328;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError345734613465 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError345734613465","Graph",100,0.505,1.045);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetMinimum(0.8466936);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetMaximum(1.153306);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError345734613465);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3466[20] = {
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
   Double_t BackgroundStatError_fy3466[20] = {
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
   Double_t BackgroundStatError_felx3466[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3466[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1277553,
   0.02367946,
   0.02236638,
   0.020764,
   0.01994423,
   0.01895526,
   0.01776621,
   0.01683749,
   0.02053885};
   Double_t BackgroundStatError_fehx3466[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3466[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1277553,
   0.02367946,
   0.02236638,
   0.020764,
   0.01994423,
   0.01895526,
   0.01776621,
   0.01683749,
   0.02053885};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3466,BackgroundStatError_fy3466,BackgroundStatError_felx3466,BackgroundStatError_fehx3466,BackgroundStatError_fely3466,BackgroundStatError_fehy3466);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1327;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError345834623466 = new TH1F("Graph_Graph_Graph_BackgroundStatError345834623466","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetMinimum(0.8466936);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetMaximum(1.153306);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError345834623466);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx111[2] = {
   0,
   1.01};
   Double_t Graph0_fy111[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx111,Graph0_fy111);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0109110111 = new TH1F("Graph_Graph_Graph_Graph0109110111","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0109110111->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0109110111->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0109110111->SetDirectory(0);
   Graph_Graph_Graph_Graph0109110111->SetStats(0);
   Graph_Graph_Graph_Graph0109110111->SetLineStyle(0);
   Graph_Graph_Graph_Graph0109110111->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0109110111);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3467[9] = {
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph1_fy3467[9] = {
   0.6496768,
   0.9966672,
   1.083403,
   1.007801,
   1.003389,
   1.04937,
   0.9985309,
   0.9582542,
   0.9993704};
   Double_t Graph1_felx3467[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3467[9] = {
   0.09907479,
   0.0229681,
   0.02397519,
   0.02258033,
   0.02226457,
   0.02239812,
   0.02145519,
   0.02128403,
   0.0303958};
   Double_t Graph1_fehx3467[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3467[9] = {
   0.09907479,
   0.0229681,
   0.02397519,
   0.02258033,
   0.02226457,
   0.02239812,
   0.02145519,
   0.02128403,
   0.0303958};
   grae = new TGraphAsymmErrors(9,Graph1_fx3467,Graph1_fy3467,Graph1_felx3467,Graph1_fehx3467,Graph1_fely3467,Graph1_fehy3467);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1345934633467 = new TH1F("Graph_Graph_Graph_Graph1345934633467","Graph",100,0.505,1.045);
   Graph_Graph_Graph_Graph1345934633467->SetMinimum(0.4949245);
   Graph_Graph_Graph_Graph1345934633467->SetMaximum(1.163055);
   Graph_Graph_Graph_Graph1345934633467->SetDirectory(0);
   Graph_Graph_Graph_Graph1345934633467->SetStats(0);
   Graph_Graph_Graph_Graph1345934633467->SetLineStyle(0);
   Graph_Graph_Graph_Graph1345934633467->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1345934633467);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__772 = new TH1F("hframe_copy__772","",1000,0,1.01);
   hframe_copy__772->SetMinimum(0.3);
   hframe_copy__772->SetMaximum(1.7);
   hframe_copy__772->SetDirectory(0);
   hframe_copy__772->SetStats(0);
   hframe_copy__772->SetLineStyle(0);
   hframe_copy__772->SetMarkerStyle(20);
   hframe_copy__772->GetXaxis()->SetTitle("t^{res}_{assoc} DNN output");
   hframe_copy__772->GetXaxis()->SetNdivisions(8);
   hframe_copy__772->GetXaxis()->SetLabelFont(43);
   hframe_copy__772->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__772->GetXaxis()->SetLabelSize(27);
   hframe_copy__772->GetXaxis()->SetTitleSize(33);
   hframe_copy__772->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__772->GetXaxis()->SetTitleFont(43);
   hframe_copy__772->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__772->GetYaxis()->SetNdivisions(505);
   hframe_copy__772->GetYaxis()->SetLabelFont(43);
   hframe_copy__772->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__772->GetYaxis()->SetLabelSize(21);
   hframe_copy__772->GetYaxis()->SetTitleSize(33);
   hframe_copy__772->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__772->GetYaxis()->SetTitleFont(43);
   hframe_copy__772->GetZaxis()->SetLabelFont(43);
   hframe_copy__772->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__772->GetZaxis()->SetLabelSize(27);
   hframe_copy__772->GetZaxis()->SetTitleSize(33);
   hframe_copy__772->GetZaxis()->SetTitleOffset(1);
   hframe_copy__772->GetZaxis()->SetTitleFont(43);
   hframe_copy__772->Draw("sameaxis");
   AssocTopMVA_2->Modified();
   AssocTopMVA->cd();
  
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
   AssocTopMVA->cd();
  
// ------------>Primitives in pad: AssocTopMVA_1
   TPad *AssocTopMVA_1 = new TPad("AssocTopMVA_1", "AssocTopMVA_1",0,0.2897959,1,1);
   AssocTopMVA_1->Draw();
   AssocTopMVA_1->cd();
   AssocTopMVA_1->Range(-0.204557,-2.134544,1.073924,4.592676);
   AssocTopMVA_1->SetFillColor(0);
   AssocTopMVA_1->SetFillStyle(4000);
   AssocTopMVA_1->SetBorderMode(0);
   AssocTopMVA_1->SetBorderSize(2);
   AssocTopMVA_1->SetLogy();
   AssocTopMVA_1->SetTickx(1);
   AssocTopMVA_1->SetTicky(1);
   AssocTopMVA_1->SetLeftMargin(0.16);
   AssocTopMVA_1->SetRightMargin(0.05);
   AssocTopMVA_1->SetTopMargin(0.06);
   AssocTopMVA_1->SetBottomMargin(0.02);
   AssocTopMVA_1->SetFrameFillStyle(0);
   AssocTopMVA_1->SetFrameBorderMode(0);
   AssocTopMVA_1->SetFrameFillStyle(0);
   AssocTopMVA_1->SetFrameBorderMode(0);
   
   TH1F *hframe__773 = new TH1F("hframe__773","",1000,0,1.01);
   hframe__773->SetMinimum(0.01);
   hframe__773->SetMaximum(15454.08);
   hframe__773->SetDirectory(0);
   hframe__773->SetStats(0);
   hframe__773->SetLineStyle(0);
   hframe__773->SetMarkerStyle(20);
   hframe__773->GetXaxis()->SetNdivisions(8);
   hframe__773->GetXaxis()->SetLabelFont(43);
   hframe__773->GetXaxis()->SetLabelOffset(0.007);
   hframe__773->GetXaxis()->SetLabelSize(0);
   hframe__773->GetXaxis()->SetTitleSize(0);
   hframe__773->GetXaxis()->SetTitleOffset(0.9);
   hframe__773->GetXaxis()->SetTitleFont(43);
   hframe__773->GetYaxis()->SetTitle("Events / 0.05");
   hframe__773->GetYaxis()->SetLabelFont(43);
   hframe__773->GetYaxis()->SetLabelOffset(0.007);
   hframe__773->GetYaxis()->SetLabelSize(27);
   hframe__773->GetYaxis()->SetTitleSize(33);
   hframe__773->GetYaxis()->SetTitleOffset(1.5625);
   hframe__773->GetYaxis()->SetTitleFont(43);
   hframe__773->GetZaxis()->SetLabelFont(43);
   hframe__773->GetZaxis()->SetLabelOffset(0.007);
   hframe__773->GetZaxis()->SetLabelSize(27);
   hframe__773->GetZaxis()->SetTitleSize(33);
   hframe__773->GetZaxis()->SetTitleOffset(1);
   hframe__773->GetZaxis()->SetTitleFont(43);
   hframe__773->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_109_stack_110_stack_111 = new TH1F("StackedMCstackHist_stack_109_stack_110_stack_111","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetMinimum(0.8676746);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetMaximum(3470.698);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetDirectory(0);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetStats(0);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetLineStyle(0);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetMarkerStyle(20);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_109_stack_110_stack_111);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_AssocTopMVAInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.739335);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,55.89786);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,68.4704);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,68.64062);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,75.21407);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,78.49225);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,93.48672);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,94.08694);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,57.8989);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.4664444);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.758474);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,3.549039);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,3.039665);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,3.654432);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,3.436733);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,3.520037);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,3.513954);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,2.844375);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,40);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_AssocTopMVAInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,20.67712);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,717.5441);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,776.9443);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,868.3073);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,949.8431);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1056.024);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1205.152);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1288.535);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,800.5601);
   TT_stack_2_stack_2_stack_2->SetBinError(12,1.119184);
   TT_stack_2_stack_2_stack_2->SetBinError(13,6.641525);
   TT_stack_2_stack_2_stack_2->SetBinError(14,6.920264);
   TT_stack_2_stack_2_stack_2->SetBinError(15,7.31222);
   TT_stack_2_stack_2_stack_2->SetBinError(16,7.679857);
   TT_stack_2_stack_2_stack_2->SetBinError(17,8.109006);
   TT_stack_2_stack_2_stack_2->SetBinError(18,8.667564);
   TT_stack_2_stack_2_stack_2->SetBinError(19,8.944261);
   TT_stack_2_stack_2_stack_2->SetBinError(20,7.001628);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,40);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_AssocTopMVAInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,43.7703);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1115.855);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1039.388);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1039.632);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,999.0836);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,957.2148);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,870.5475);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,732.6836);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,223.2221);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,8.368325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,44.15572);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,41.43261);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,40.27051);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,39.46385);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,38.65876);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,37.38554);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,34.29552);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,20.89159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4622.141);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,40);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__774 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__774","h_SR_AssocTopMVAInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(12,1.286077);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(13,49.80212);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(14,53.37818);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(15,59.07812);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(16,64.4709);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(17,74.6078);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(18,95.5141);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(19,118.3193);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(20,87.47008);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(12,0.3710381);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(13,2.194994);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(14,2.288663);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(15,2.405187);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(16,2.534829);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(17,2.722154);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(18,2.964965);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(19,3.25975);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(20,2.784207);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetEntries(120993);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetXaxis()->SetRange(1,40);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3468[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3468[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   66.18675,
   1889.297,
   1884.802,
   1976.58,
   2024.141,
   2091.73,
   2169.187,
   2115.305,
   1081.681};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3468[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3468[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.455708,
   44.73753,
   42.15622,
   41.04171,
   40.36992,
   39.64929,
   38.53824,
   35.61644,
   22.21648};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3468[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3468[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.455708,
   44.73753,
   42.15622,
   41.04171,
   40.36992,
   39.64929,
   38.53824,
   35.61644,
   22.21648};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3468,BkgSum-SR-Inclusive_sum_errors_fy3468,BkgSum-SR-Inclusive_sum_errors_felx3468,BkgSum-SR-Inclusive_sum_errors_fehx3468,BkgSum-SR-Inclusive_sum_errors_fely3468,BkgSum-SR-Inclusive_sum_errors_fehy3468);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1326;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetMinimum(2.428498);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetMaximum(2428.498);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors346034643468);
   
   grae->Draw("e2 ");
   
   TH1F *Data__775 = new TH1F("Data__775","h_SR_AssocTopMVAInclusive",20,0,1);
   Data__775->SetBinContent(12,43);
   Data__775->SetBinContent(13,1883);
   Data__775->SetBinContent(14,2042);
   Data__775->SetBinContent(15,1992);
   Data__775->SetBinContent(16,2031);
   Data__775->SetBinContent(17,2195);
   Data__775->SetBinContent(18,2166);
   Data__775->SetBinContent(19,2027);
   Data__775->SetBinContent(20,1081);
   Data__775->SetBinError(12,6.557439);
   Data__775->SetBinError(13,43.39355);
   Data__775->SetBinError(14,45.18849);
   Data__775->SetBinError(15,44.63183);
   Data__775->SetBinError(16,45.06662);
   Data__775->SetBinError(17,46.85083);
   Data__775->SetBinError(18,46.54031);
   Data__775->SetBinError(19,45.02222);
   Data__775->SetBinError(20,32.87856);
   Data__775->SetEntries(15464);
   Data__775->SetDirectory(0);
   Data__775->SetFillStyle(3001);
   Data__775->SetLineWidth(2);
   Data__775->SetMarkerStyle(20);
   Data__775->SetMarkerSize(1.2);
   Data__775->GetXaxis()->SetRange(1,40);
   Data__775->GetXaxis()->SetLabelFont(42);
   Data__775->GetXaxis()->SetTitleOffset(1);
   Data__775->GetXaxis()->SetTitleFont(42);
   Data__775->GetYaxis()->SetLabelFont(42);
   Data__775->GetYaxis()->SetTitleFont(42);
   Data__775->GetZaxis()->SetLabelFont(42);
   Data__775->GetZaxis()->SetTitleOffset(1);
   Data__775->GetZaxis()->SetTitleFont(42);
   Data__775->Draw("EP same");
   
   TLegend *leg = new TLegend(0.21,0.61,0.41,0.91,NULL,"brNDC");
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

   ci = 1326;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1326;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__776 = new TH1F("hframe_copy__776","",1000,0,1.01);
   hframe_copy__776->SetMinimum(0.01);
   hframe_copy__776->SetMaximum(15454.08);
   hframe_copy__776->SetDirectory(0);
   hframe_copy__776->SetStats(0);
   hframe_copy__776->SetLineStyle(0);
   hframe_copy__776->SetMarkerStyle(20);
   hframe_copy__776->GetXaxis()->SetNdivisions(8);
   hframe_copy__776->GetXaxis()->SetLabelFont(43);
   hframe_copy__776->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__776->GetXaxis()->SetLabelSize(0);
   hframe_copy__776->GetXaxis()->SetTitleSize(0);
   hframe_copy__776->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__776->GetXaxis()->SetTitleFont(43);
   hframe_copy__776->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__776->GetYaxis()->SetLabelFont(43);
   hframe_copy__776->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__776->GetYaxis()->SetLabelSize(27);
   hframe_copy__776->GetYaxis()->SetTitleSize(33);
   hframe_copy__776->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__776->GetYaxis()->SetTitleFont(43);
   hframe_copy__776->GetZaxis()->SetLabelFont(43);
   hframe_copy__776->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__776->GetZaxis()->SetLabelSize(27);
   hframe_copy__776->GetZaxis()->SetTitleSize(33);
   hframe_copy__776->GetZaxis()->SetTitleOffset(1);
   hframe_copy__776->GetZaxis()->SetTitleFont(43);
   hframe_copy__776->Draw("sameaxis");
   
   TH1F *hframe_copy__777 = new TH1F("hframe_copy__777","",1000,0,1.01);
   hframe_copy__777->SetMinimum(0.01);
   hframe_copy__777->SetMaximum(15454.08);
   hframe_copy__777->SetDirectory(0);
   hframe_copy__777->SetStats(0);
   hframe_copy__777->SetLineStyle(0);
   hframe_copy__777->SetMarkerStyle(20);
   hframe_copy__777->GetXaxis()->SetNdivisions(8);
   hframe_copy__777->GetXaxis()->SetLabelFont(43);
   hframe_copy__777->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__777->GetXaxis()->SetLabelSize(0);
   hframe_copy__777->GetXaxis()->SetTitleSize(0);
   hframe_copy__777->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__777->GetXaxis()->SetTitleFont(43);
   hframe_copy__777->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__777->GetYaxis()->SetLabelFont(43);
   hframe_copy__777->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__777->GetYaxis()->SetLabelSize(27);
   hframe_copy__777->GetYaxis()->SetTitleSize(33);
   hframe_copy__777->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__777->GetYaxis()->SetTitleFont(43);
   hframe_copy__777->GetZaxis()->SetLabelFont(43);
   hframe_copy__777->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__777->GetZaxis()->SetLabelSize(27);
   hframe_copy__777->GetZaxis()->SetTitleSize(33);
   hframe_copy__777->GetZaxis()->SetTitleOffset(1);
   hframe_copy__777->GetZaxis()->SetTitleFont(43);
   hframe_copy__777->Draw("sameaxis");
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
   AssocTopMVA_1->Modified();
   AssocTopMVA->cd();
   AssocTopMVA->Modified();
   AssocTopMVA->cd();
   AssocTopMVA->SetSelected(AssocTopMVA);
}
