void FatJet_N()
{
//=========Macro generated from canvas: FatJet_N/FatJet_N
//=========  (Wed Nov 16 12:09:01 2022) by ROOT version 6.20/02
   TCanvas *FatJet_N = new TCanvas("FatJet_N", "FatJet_N",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   FatJet_N->SetHighLightColor(2);
   FatJet_N->Range(0,0,1,1);
   FatJet_N->SetFillColor(0);
   FatJet_N->SetBorderMode(0);
   FatJet_N->SetBorderSize(2);
   FatJet_N->SetTickx(1);
   FatJet_N->SetTicky(1);
   FatJet_N->SetLeftMargin(0.16);
   FatJet_N->SetRightMargin(0.05);
   FatJet_N->SetTopMargin(0.06);
   FatJet_N->SetBottomMargin(0.13);
   FatJet_N->SetFrameFillStyle(0);
   FatJet_N->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: FatJet_N_2
   TPad *FatJet_N_2 = new TPad("FatJet_N_2", "FatJet_N_2",0,0,1,0.304);
   FatJet_N_2->Draw();
   FatJet_N_2->cd();
   FatJet_N_2->Range(-1.21519,-0.428,6.379747,1.7);
   FatJet_N_2->SetFillColor(0);
   FatJet_N_2->SetFillStyle(4000);
   FatJet_N_2->SetBorderMode(0);
   FatJet_N_2->SetBorderSize(2);
   FatJet_N_2->SetTickx(1);
   FatJet_N_2->SetTicky(1);
   FatJet_N_2->SetLeftMargin(0.16);
   FatJet_N_2->SetRightMargin(0.05);
   FatJet_N_2->SetTopMargin(0);
   FatJet_N_2->SetBottomMargin(0.3421053);
   FatJet_N_2->SetFrameFillStyle(0);
   FatJet_N_2->SetFrameBorderMode(0);
   FatJet_N_2->SetFrameFillStyle(0);
   FatJet_N_2->SetFrameBorderMode(0);
   
   TH1F *hframe__708 = new TH1F("hframe__708","",1000,0,6);
   hframe__708->SetMinimum(0.3);
   hframe__708->SetMaximum(1.7);
   hframe__708->SetDirectory(0);
   hframe__708->SetStats(0);
   hframe__708->SetLineStyle(0);
   hframe__708->SetMarkerStyle(20);
   hframe__708->GetXaxis()->SetTitle("fat jet multiplicity");
   hframe__708->GetXaxis()->SetNdivisions(8);
   hframe__708->GetXaxis()->SetLabelFont(43);
   hframe__708->GetXaxis()->SetLabelOffset(0.007);
   hframe__708->GetXaxis()->SetLabelSize(27);
   hframe__708->GetXaxis()->SetTitleSize(33);
   hframe__708->GetXaxis()->SetTitleOffset(2.960526);
   hframe__708->GetXaxis()->SetTitleFont(43);
   hframe__708->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__708->GetYaxis()->SetNdivisions(505);
   hframe__708->GetYaxis()->SetLabelFont(43);
   hframe__708->GetYaxis()->SetLabelOffset(0.007);
   hframe__708->GetYaxis()->SetLabelSize(21);
   hframe__708->GetYaxis()->SetTitleSize(33);
   hframe__708->GetYaxis()->SetTitleOffset(1.5625);
   hframe__708->GetYaxis()->SetTitleFont(43);
   hframe__708->GetZaxis()->SetLabelFont(43);
   hframe__708->GetZaxis()->SetLabelOffset(0.007);
   hframe__708->GetZaxis()->SetLabelSize(27);
   hframe__708->GetZaxis()->SetTitleSize(33);
   hframe__708->GetZaxis()->SetTitleOffset(1);
   hframe__708->GetZaxis()->SetTitleFont(43);
   hframe__708->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3435[4] = {
   0.5,
   1.5,
   2.5,
   3.5};
   Double_t BackgroundStatSystError_fy3435[4] = {
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3435[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BackgroundStatSystError_fely3435[4] = {
   0.006378993,
   0.02908004,
   0.1406006,
   4.558432};
   Double_t BackgroundStatSystError_fehx3435[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BackgroundStatSystError_fehy3435[4] = {
   0.006378993,
   0.02908004,
   0.1406006,
   4.558432};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,BackgroundStatSystError_fx3435,BackgroundStatSystError_fy3435,BackgroundStatSystError_felx3435,BackgroundStatSystError_fehx3435,BackgroundStatSystError_fely3435,BackgroundStatSystError_fehy3435);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1321;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError342734313435 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError342734313435","Graph",100,0,4.4);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMinimum(-4.470119);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMaximum(6.470119);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError342734313435);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3436[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t BackgroundStatError_fy3436[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3436[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BackgroundStatError_fely3436[6] = {
   0.006378993,
   0.02908004,
   0.1406006,
   4.558432,
   0,
   0};
   Double_t BackgroundStatError_fehx3436[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BackgroundStatError_fehy3436[6] = {
   0.006378993,
   0.02908004,
   0.1406006,
   4.558432,
   0,
   0};
   grae = new TGraphAsymmErrors(6,BackgroundStatError_fx3436,BackgroundStatError_fy3436,BackgroundStatError_felx3436,BackgroundStatError_fehx3436,BackgroundStatError_fely3436,BackgroundStatError_fehy3436);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1320;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError342834323436 = new TH1F("Graph_Graph_Graph_BackgroundStatError342834323436","Graph",100,0,6.6);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMinimum(-4.470119);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMaximum(6.470119);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError342834323436);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx102[2] = {
   0,
   6};
   Double_t Graph0_fy102[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx102,Graph0_fy102);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0100101102 = new TH1F("Graph_Graph_Graph_Graph0100101102","Graph",100,0,6.6);
   Graph_Graph_Graph_Graph0100101102->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0100101102->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0100101102->SetDirectory(0);
   Graph_Graph_Graph_Graph0100101102->SetStats(0);
   Graph_Graph_Graph_Graph0100101102->SetLineStyle(0);
   Graph_Graph_Graph_Graph0100101102->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0100101102->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0100101102->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0100101102->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0100101102);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3437[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph1_fy3437[3] = {
   0.9777012,
   1.029294,
   1.331209};
   Double_t Graph1_felx3437[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph1_fely3437[3] = {
   0.007748316,
   0.03812201,
   0.2390923};
   Double_t Graph1_fehx3437[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph1_fehy3437[3] = {
   0.007748316,
   0.03812201,
   0.2390923};
   grae = new TGraphAsymmErrors(3,Graph1_fx3437,Graph1_fy3437,Graph1_felx3437,Graph1_fehx3437,Graph1_fely3437,Graph1_fehy3437);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1342934333437 = new TH1F("Graph_Graph_Graph_Graph1342934333437","Graph",100,0,3.3);
   Graph_Graph_Graph_Graph1342934333437->SetMinimum(0.909918);
   Graph_Graph_Graph_Graph1342934333437->SetMaximum(1.630336);
   Graph_Graph_Graph_Graph1342934333437->SetDirectory(0);
   Graph_Graph_Graph_Graph1342934333437->SetStats(0);
   Graph_Graph_Graph_Graph1342934333437->SetLineStyle(0);
   Graph_Graph_Graph_Graph1342934333437->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1342934333437);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__709 = new TH1F("hframe_copy__709","",1000,0,6);
   hframe_copy__709->SetMinimum(0.3);
   hframe_copy__709->SetMaximum(1.7);
   hframe_copy__709->SetDirectory(0);
   hframe_copy__709->SetStats(0);
   hframe_copy__709->SetLineStyle(0);
   hframe_copy__709->SetMarkerStyle(20);
   hframe_copy__709->GetXaxis()->SetTitle("fat jet multiplicity");
   hframe_copy__709->GetXaxis()->SetNdivisions(8);
   hframe_copy__709->GetXaxis()->SetLabelFont(43);
   hframe_copy__709->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__709->GetXaxis()->SetLabelSize(27);
   hframe_copy__709->GetXaxis()->SetTitleSize(33);
   hframe_copy__709->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__709->GetXaxis()->SetTitleFont(43);
   hframe_copy__709->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__709->GetYaxis()->SetNdivisions(505);
   hframe_copy__709->GetYaxis()->SetLabelFont(43);
   hframe_copy__709->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__709->GetYaxis()->SetLabelSize(21);
   hframe_copy__709->GetYaxis()->SetTitleSize(33);
   hframe_copy__709->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__709->GetYaxis()->SetTitleFont(43);
   hframe_copy__709->GetZaxis()->SetLabelFont(43);
   hframe_copy__709->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__709->GetZaxis()->SetLabelSize(27);
   hframe_copy__709->GetZaxis()->SetTitleSize(33);
   hframe_copy__709->GetZaxis()->SetTitleOffset(1);
   hframe_copy__709->GetZaxis()->SetTitleFont(43);
   hframe_copy__709->Draw("sameaxis");
   FatJet_N_2->Modified();
   FatJet_N->cd();
  
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
   FatJet_N->cd();
  
// ------------>Primitives in pad: FatJet_N_1
   TPad *FatJet_N_1 = new TPad("FatJet_N_1", "FatJet_N_1",0,0.2897959,1,1);
   FatJet_N_1->Draw();
   FatJet_N_1->cd();
   FatJet_N_1->Range(-1.21519,-2.153471,6.379747,5.520063);
   FatJet_N_1->SetFillColor(0);
   FatJet_N_1->SetFillStyle(4000);
   FatJet_N_1->SetBorderMode(0);
   FatJet_N_1->SetBorderSize(2);
   FatJet_N_1->SetLogy();
   FatJet_N_1->SetTickx(1);
   FatJet_N_1->SetTicky(1);
   FatJet_N_1->SetLeftMargin(0.16);
   FatJet_N_1->SetRightMargin(0.05);
   FatJet_N_1->SetTopMargin(0.06);
   FatJet_N_1->SetBottomMargin(0.02);
   FatJet_N_1->SetFrameFillStyle(0);
   FatJet_N_1->SetFrameBorderMode(0);
   FatJet_N_1->SetFrameFillStyle(0);
   FatJet_N_1->SetFrameBorderMode(0);
   
   TH1F *hframe__710 = new TH1F("hframe__710","",1000,0,6);
   hframe__710->SetMinimum(0.01);
   hframe__710->SetMaximum(114723.2);
   hframe__710->SetDirectory(0);
   hframe__710->SetStats(0);
   hframe__710->SetLineStyle(0);
   hframe__710->SetMarkerStyle(20);
   hframe__710->GetXaxis()->SetNdivisions(8);
   hframe__710->GetXaxis()->SetLabelFont(43);
   hframe__710->GetXaxis()->SetLabelOffset(0.007);
   hframe__710->GetXaxis()->SetLabelSize(0);
   hframe__710->GetXaxis()->SetTitleSize(0);
   hframe__710->GetXaxis()->SetTitleOffset(0.9);
   hframe__710->GetXaxis()->SetTitleFont(43);
   hframe__710->GetYaxis()->SetTitle("< Events / 1-2  >");
   hframe__710->GetYaxis()->SetLabelFont(43);
   hframe__710->GetYaxis()->SetLabelOffset(0.007);
   hframe__710->GetYaxis()->SetLabelSize(27);
   hframe__710->GetYaxis()->SetTitleSize(33);
   hframe__710->GetYaxis()->SetTitleOffset(1.5625);
   hframe__710->GetYaxis()->SetTitleFont(43);
   hframe__710->GetZaxis()->SetLabelFont(43);
   hframe__710->GetZaxis()->SetLabelOffset(0.007);
   hframe__710->GetZaxis()->SetLabelSize(27);
   hframe__710->GetZaxis()->SetTitleSize(33);
   hframe__710->GetZaxis()->SetTitleOffset(1);
   hframe__710->GetZaxis()->SetTitleFont(43);
   hframe__710->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis427[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1F *StackedMCstackHist_stack_100_stack_101_stack_102 = new TH1F("StackedMCstackHist_stack_100_stack_101_stack_102","StackedMCstackHist",6, xAxis427);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetMinimum(6.514056);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetMaximum(26056.22);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetDirectory(0);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetStats(0);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetLineStyle(0);
   StackedMCstackHist_stack_100_stack_101_stack_102->SetMarkerStyle(20);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_100_stack_101_stack_102->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_100_stack_101_stack_102);
   
   Double_t xAxis428[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_FatJet_NInclusive",6, xAxis428);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,402.6405);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,34.64049);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1.038664);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,-7.494637e-05);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,10.01621);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.595259);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.3107833);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.0002816662);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1792.929);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,18);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis429[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_FatJet_NInclusive",6, xAxis429);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,9886.98);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,497.0458);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,21.76882);
   TT_stack_2_stack_2_stack_2->SetBinError(1,24.11611);
   TT_stack_2_stack_2_stack_2->SetBinError(2,5.437445);
   TT_stack_2_stack_2_stack_2->SetBinError(3,1.124354);
   TT_stack_2_stack_2_stack_2->SetEntries(176808.7);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,18);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis430[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_FatJet_NInclusive",6, xAxis430);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,5995.519);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,176.5659);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,0.4796135);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,0.0001964458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,100.5471);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,19.69503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,3.059328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.0004768757);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3626.214);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,18);
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
   Double_t xAxis431[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__711 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__711","h_SR_FatJet_NInclusive",6, xAxis431);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(1,27.77094);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(2,5.138484);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinContent(3,-0.1912485);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(1,1.858979);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(2,0.8814082);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetBinError(3,0.2212265);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetEntries(250.017);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetXaxis()->SetRange(1,18);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__711->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3438[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3438[6] = {
   16285.14,
   708.2523,
   23.2871,
   0.0001214994,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3438[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3438[6] = {
   103.8828,
   20.59601,
   3.274179,
   0.0005538468,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3438[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3438[6] = {
   103.8828,
   20.59601,
   3.274179,
   0.0005538468,
   0,
   0};
   grae = new TGraphAsymmErrors(6,BkgSum-SR-Inclusive_sum_errors_fx3438,BkgSum-SR-Inclusive_sum_errors_fy3438,BkgSum-SR-Inclusive_sum_errors_felx3438,BkgSum-SR-Inclusive_sum_errors_fehx3438,BkgSum-SR-Inclusive_sum_errors_fely3438,BkgSum-SR-Inclusive_sum_errors_fehy3438);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1319;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438","Graph",100,0,6.6);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMinimum(18.02792);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMaximum(18027.92);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors343034343438);
   
   grae->Draw("e2 ");
   Double_t xAxis432[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1F *Data__712 = new TH1F("Data__712","h_SR_FatJet_NInclusive",6, xAxis432);
   Data__712->SetBinContent(1,15922);
   Data__712->SetBinContent(2,729);
   Data__712->SetBinContent(3,31);
   Data__712->SetBinError(1,126.1824);
   Data__712->SetBinError(2,27);
   Data__712->SetBinError(3,5.567764);
   Data__712->SetEntries(16682);
   Data__712->SetDirectory(0);
   Data__712->SetFillStyle(3001);
   Data__712->SetLineWidth(2);
   Data__712->SetMarkerStyle(20);
   Data__712->SetMarkerSize(1.2);
   Data__712->GetXaxis()->SetRange(1,18);
   Data__712->GetXaxis()->SetLabelFont(42);
   Data__712->GetXaxis()->SetTitleOffset(1);
   Data__712->GetXaxis()->SetTitleFont(42);
   Data__712->GetYaxis()->SetLabelFont(42);
   Data__712->GetYaxis()->SetTitleFont(42);
   Data__712->GetZaxis()->SetLabelFont(42);
   Data__712->GetZaxis()->SetTitleOffset(1);
   Data__712->GetZaxis()->SetTitleFont(42);
   Data__712->Draw("EP same");
   
   TLegend *leg = new TLegend(0.67,0.46,0.87,0.91,NULL,"brNDC");
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

   ci = 1319;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1319;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__713 = new TH1F("hframe_copy__713","",1000,0,6);
   hframe_copy__713->SetMinimum(0.01);
   hframe_copy__713->SetMaximum(114723.2);
   hframe_copy__713->SetDirectory(0);
   hframe_copy__713->SetStats(0);
   hframe_copy__713->SetLineStyle(0);
   hframe_copy__713->SetMarkerStyle(20);
   hframe_copy__713->GetXaxis()->SetNdivisions(8);
   hframe_copy__713->GetXaxis()->SetLabelFont(43);
   hframe_copy__713->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__713->GetXaxis()->SetLabelSize(0);
   hframe_copy__713->GetXaxis()->SetTitleSize(0);
   hframe_copy__713->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__713->GetXaxis()->SetTitleFont(43);
   hframe_copy__713->GetYaxis()->SetTitle("< Events / 1-2  >");
   hframe_copy__713->GetYaxis()->SetLabelFont(43);
   hframe_copy__713->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__713->GetYaxis()->SetLabelSize(27);
   hframe_copy__713->GetYaxis()->SetTitleSize(33);
   hframe_copy__713->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__713->GetYaxis()->SetTitleFont(43);
   hframe_copy__713->GetZaxis()->SetLabelFont(43);
   hframe_copy__713->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__713->GetZaxis()->SetLabelSize(27);
   hframe_copy__713->GetZaxis()->SetTitleSize(33);
   hframe_copy__713->GetZaxis()->SetTitleOffset(1);
   hframe_copy__713->GetZaxis()->SetTitleFont(43);
   hframe_copy__713->Draw("sameaxis");
   
   TH1F *hframe_copy__714 = new TH1F("hframe_copy__714","",1000,0,6);
   hframe_copy__714->SetMinimum(0.01);
   hframe_copy__714->SetMaximum(114723.2);
   hframe_copy__714->SetDirectory(0);
   hframe_copy__714->SetStats(0);
   hframe_copy__714->SetLineStyle(0);
   hframe_copy__714->SetMarkerStyle(20);
   hframe_copy__714->GetXaxis()->SetNdivisions(8);
   hframe_copy__714->GetXaxis()->SetLabelFont(43);
   hframe_copy__714->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__714->GetXaxis()->SetLabelSize(0);
   hframe_copy__714->GetXaxis()->SetTitleSize(0);
   hframe_copy__714->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__714->GetXaxis()->SetTitleFont(43);
   hframe_copy__714->GetYaxis()->SetTitle("< Events / 1-2  >");
   hframe_copy__714->GetYaxis()->SetLabelFont(43);
   hframe_copy__714->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__714->GetYaxis()->SetLabelSize(27);
   hframe_copy__714->GetYaxis()->SetTitleSize(33);
   hframe_copy__714->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__714->GetYaxis()->SetTitleFont(43);
   hframe_copy__714->GetZaxis()->SetLabelFont(43);
   hframe_copy__714->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__714->GetZaxis()->SetLabelSize(27);
   hframe_copy__714->GetZaxis()->SetTitleSize(33);
   hframe_copy__714->GetZaxis()->SetTitleOffset(1);
   hframe_copy__714->GetZaxis()->SetTitleFont(43);
   hframe_copy__714->Draw("sameaxis");
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
   FatJet_N_1->Modified();
   FatJet_N->cd();
   FatJet_N->Modified();
   FatJet_N->cd();
   FatJet_N->SetSelected(FatJet_N);
}
