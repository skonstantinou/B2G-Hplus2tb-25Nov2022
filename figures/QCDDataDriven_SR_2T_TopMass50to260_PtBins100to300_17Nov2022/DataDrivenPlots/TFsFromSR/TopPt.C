void TopPt()
{
//=========Macro generated from canvas: TopPt/TopPt
//=========  (Fri Nov 18 13:28:29 2022) by ROOT version 6.20/02
   TCanvas *TopPt = new TCanvas("TopPt", "TopPt",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   TopPt->SetHighLightColor(2);
   TopPt->Range(0,0,1,1);
   TopPt->SetFillColor(0);
   TopPt->SetBorderMode(0);
   TopPt->SetBorderSize(2);
   TopPt->SetTickx(1);
   TopPt->SetTicky(1);
   TopPt->SetLeftMargin(0.16);
   TopPt->SetRightMargin(0.05);
   TopPt->SetTopMargin(0.06);
   TopPt->SetBottomMargin(0.13);
   TopPt->SetFrameFillStyle(0);
   TopPt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPt_2
   TPad *TopPt_2 = new TPad("TopPt_2", "TopPt_2",0,0,1,0.304);
   TopPt_2->Draw();
   TopPt_2->cd();
   TopPt_2->Range(-162.0253,-0.428,850.6329,1.7);
   TopPt_2->SetFillColor(0);
   TopPt_2->SetFillStyle(4000);
   TopPt_2->SetBorderMode(0);
   TopPt_2->SetBorderSize(2);
   TopPt_2->SetTickx(1);
   TopPt_2->SetTicky(1);
   TopPt_2->SetLeftMargin(0.16);
   TopPt_2->SetRightMargin(0.05);
   TopPt_2->SetTopMargin(0);
   TopPt_2->SetBottomMargin(0.3421053);
   TopPt_2->SetFrameFillStyle(0);
   TopPt_2->SetFrameBorderMode(0);
   TopPt_2->SetFrameFillStyle(0);
   TopPt_2->SetFrameBorderMode(0);
   
   TH1F *hframe__729 = new TH1F("hframe__729","",1000,0,800);
   hframe__729->SetMinimum(0.3);
   hframe__729->SetMaximum(1.7);
   hframe__729->SetDirectory(0);
   hframe__729->SetStats(0);
   hframe__729->SetLineStyle(0);
   hframe__729->SetMarkerStyle(20);
   hframe__729->GetXaxis()->SetTitle("t^{res}_{H^{#pm}} p_{T} (GeV)");
   hframe__729->GetXaxis()->SetNdivisions(8);
   hframe__729->GetXaxis()->SetLabelFont(43);
   hframe__729->GetXaxis()->SetLabelOffset(0.007);
   hframe__729->GetXaxis()->SetLabelSize(27);
   hframe__729->GetXaxis()->SetTitleSize(33);
   hframe__729->GetXaxis()->SetTitleOffset(2.960526);
   hframe__729->GetXaxis()->SetTitleFont(43);
   hframe__729->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__729->GetYaxis()->SetNdivisions(505);
   hframe__729->GetYaxis()->SetLabelFont(43);
   hframe__729->GetYaxis()->SetLabelOffset(0.007);
   hframe__729->GetYaxis()->SetLabelSize(21);
   hframe__729->GetYaxis()->SetTitleSize(33);
   hframe__729->GetYaxis()->SetTitleOffset(1.5625);
   hframe__729->GetYaxis()->SetTitleFont(43);
   hframe__729->GetZaxis()->SetLabelFont(43);
   hframe__729->GetZaxis()->SetLabelOffset(0.007);
   hframe__729->GetZaxis()->SetLabelSize(27);
   hframe__729->GetZaxis()->SetTitleSize(33);
   hframe__729->GetZaxis()->SetTitleOffset(1);
   hframe__729->GetZaxis()->SetTitleFont(43);
   hframe__729->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3435[11] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   450,
   550,
   700};
   Double_t BackgroundStatSystError_fy3435[11] = {
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
   Double_t BackgroundStatSystError_felx3435[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BackgroundStatSystError_fely3435[11] = {
   0.3868485,
   0.209238,
   0.04963745,
   0.02066966,
   0.01468438,
   0.01489281,
   0.01732204,
   0.02193253,
   0.02240566,
   0.04494092,
   0.09688685};
   Double_t BackgroundStatSystError_fehx3435[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BackgroundStatSystError_fehy3435[11] = {
   0.3868485,
   0.209238,
   0.04963745,
   0.02066966,
   0.01468438,
   0.01489281,
   0.01732204,
   0.02193253,
   0.02240566,
   0.04494092,
   0.09688685};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,BackgroundStatSystError_fx3435,BackgroundStatSystError_fy3435,BackgroundStatSystError_felx3435,BackgroundStatSystError_fehx3435,BackgroundStatSystError_fely3435,BackgroundStatSystError_fehy3435);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1320;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError342734313435 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError342734313435","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMinimum(0.5357818);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMaximum(1.464218);
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
   
   Double_t BackgroundStatError_fx3436[11] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   450,
   550,
   700};
   Double_t BackgroundStatError_fy3436[11] = {
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
   Double_t BackgroundStatError_felx3436[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BackgroundStatError_fely3436[11] = {
   0.3868485,
   0.209238,
   0.04963745,
   0.02066966,
   0.01468438,
   0.01489281,
   0.01732204,
   0.02193253,
   0.02240566,
   0.04494092,
   0.09688685};
   Double_t BackgroundStatError_fehx3436[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BackgroundStatError_fehy3436[11] = {
   0.3868485,
   0.209238,
   0.04963745,
   0.02066966,
   0.01468438,
   0.01489281,
   0.01732204,
   0.02193253,
   0.02240566,
   0.04494092,
   0.09688685};
   grae = new TGraphAsymmErrors(11,BackgroundStatError_fx3436,BackgroundStatError_fy3436,BackgroundStatError_felx3436,BackgroundStatError_fehx3436,BackgroundStatError_fely3436,BackgroundStatError_fehy3436);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1319;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError342834323436 = new TH1F("Graph_Graph_Graph_BackgroundStatError342834323436","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMinimum(0.5357818);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMaximum(1.464218);
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
   
   Double_t Graph0_fx105[2] = {
   0,
   800};
   Double_t Graph0_fy105[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx105,Graph0_fy105);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0103104105 = new TH1F("Graph_Graph_Graph_Graph0103104105","Graph",100,0,880);
   Graph_Graph_Graph_Graph0103104105->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0103104105->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0103104105->SetDirectory(0);
   Graph_Graph_Graph_Graph0103104105->SetStats(0);
   Graph_Graph_Graph_Graph0103104105->SetLineStyle(0);
   Graph_Graph_Graph_Graph0103104105->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0103104105);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3437[11] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   450,
   550,
   700};
   Double_t Graph1_fy3437[11] = {
   0.07688374,
   0.5740947,
   0.978429,
   1.015154,
   1.007831,
   0.9982107,
   0.9957747,
   1.078837,
   1.013089,
   1.000235,
   1.297881};
   Double_t Graph1_felx3437[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t Graph1_fely3437[11] = {
   0.07688374,
   0.1125892,
   0.04358269,
   0.02162351,
   0.01682993,
   0.01731898,
   0.02064253,
   0.0271325,
   0.02668798,
   0.05257119,
   0.1260614};
   Double_t Graph1_fehx3437[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t Graph1_fehy3437[11] = {
   0.07688374,
   0.1125892,
   0.04358269,
   0.02162351,
   0.01682993,
   0.01731898,
   0.02064253,
   0.0271325,
   0.02668798,
   0.05257119,
   0.1260614};
   grae = new TGraphAsymmErrors(11,Graph1_fx3437,Graph1_fy3437,Graph1_felx3437,Graph1_fehx3437,Graph1_fely3437,Graph1_fehy3437);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1342934333437 = new TH1F("Graph_Graph_Graph_Graph1342934333437","Graph",100,0,880);
   Graph_Graph_Graph_Graph1342934333437->SetMinimum(-0.1423943);
   Graph_Graph_Graph_Graph1342934333437->SetMaximum(1.566337);
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
   
   TH1F *hframe_copy__730 = new TH1F("hframe_copy__730","",1000,0,800);
   hframe_copy__730->SetMinimum(0.3);
   hframe_copy__730->SetMaximum(1.7);
   hframe_copy__730->SetDirectory(0);
   hframe_copy__730->SetStats(0);
   hframe_copy__730->SetLineStyle(0);
   hframe_copy__730->SetMarkerStyle(20);
   hframe_copy__730->GetXaxis()->SetTitle("t^{res}_{H^{#pm}} p_{T} (GeV)");
   hframe_copy__730->GetXaxis()->SetNdivisions(8);
   hframe_copy__730->GetXaxis()->SetLabelFont(43);
   hframe_copy__730->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__730->GetXaxis()->SetLabelSize(27);
   hframe_copy__730->GetXaxis()->SetTitleSize(33);
   hframe_copy__730->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__730->GetXaxis()->SetTitleFont(43);
   hframe_copy__730->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__730->GetYaxis()->SetNdivisions(505);
   hframe_copy__730->GetYaxis()->SetLabelFont(43);
   hframe_copy__730->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__730->GetYaxis()->SetLabelSize(21);
   hframe_copy__730->GetYaxis()->SetTitleSize(33);
   hframe_copy__730->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__730->GetYaxis()->SetTitleFont(43);
   hframe_copy__730->GetZaxis()->SetLabelFont(43);
   hframe_copy__730->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__730->GetZaxis()->SetLabelSize(27);
   hframe_copy__730->GetZaxis()->SetTitleSize(33);
   hframe_copy__730->GetZaxis()->SetTitleOffset(1);
   hframe_copy__730->GetZaxis()->SetTitleFont(43);
   hframe_copy__730->Draw("sameaxis");
   TopPt_2->Modified();
   TopPt->cd();
  
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
   TopPt->cd();
  
// ------------>Primitives in pad: TopPt_1
   TPad *TopPt_1 = new TPad("TopPt_1", "TopPt_1",0,0.2897959,1,1);
   TopPt_1->Draw();
   TopPt_1->cd();
   TopPt_1->Range(-162.0253,-2.102254,850.6329,3.010444);
   TopPt_1->SetFillColor(0);
   TopPt_1->SetFillStyle(4000);
   TopPt_1->SetBorderMode(0);
   TopPt_1->SetBorderSize(2);
   TopPt_1->SetLogy();
   TopPt_1->SetTickx(1);
   TopPt_1->SetTicky(1);
   TopPt_1->SetLeftMargin(0.16);
   TopPt_1->SetRightMargin(0.05);
   TopPt_1->SetTopMargin(0.06);
   TopPt_1->SetBottomMargin(0.02);
   TopPt_1->SetFrameFillStyle(0);
   TopPt_1->SetFrameBorderMode(0);
   TopPt_1->SetFrameFillStyle(0);
   TopPt_1->SetFrameBorderMode(0);
   
   TH1F *hframe__731 = new TH1F("hframe__731","",1000,0,800);
   hframe__731->SetMinimum(0.01);
   hframe__731->SetMaximum(505.4542);
   hframe__731->SetDirectory(0);
   hframe__731->SetStats(0);
   hframe__731->SetLineStyle(0);
   hframe__731->SetMarkerStyle(20);
   hframe__731->GetXaxis()->SetNdivisions(8);
   hframe__731->GetXaxis()->SetLabelFont(43);
   hframe__731->GetXaxis()->SetLabelOffset(0.007);
   hframe__731->GetXaxis()->SetLabelSize(0);
   hframe__731->GetXaxis()->SetTitleSize(0);
   hframe__731->GetXaxis()->SetTitleOffset(0.9);
   hframe__731->GetXaxis()->SetTitleFont(43);
   hframe__731->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe__731->GetYaxis()->SetLabelFont(43);
   hframe__731->GetYaxis()->SetLabelOffset(0.007);
   hframe__731->GetYaxis()->SetLabelSize(27);
   hframe__731->GetYaxis()->SetTitleSize(33);
   hframe__731->GetYaxis()->SetTitleOffset(1.5625);
   hframe__731->GetYaxis()->SetTitleFont(43);
   hframe__731->GetZaxis()->SetLabelFont(43);
   hframe__731->GetZaxis()->SetLabelOffset(0.007);
   hframe__731->GetZaxis()->SetLabelSize(27);
   hframe__731->GetZaxis()->SetTitleSize(33);
   hframe__731->GetZaxis()->SetTitleOffset(1);
   hframe__731->GetZaxis()->SetTitleFont(43);
   hframe__731->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis391[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *StackedMCstackHist_stack_103_stack_104_stack_105 = new TH1F("StackedMCstackHist_stack_103_stack_104_stack_105","StackedMCstackHist",11, xAxis391);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetMinimum(0.0003944996);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetMaximum(138.4723);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetDirectory(0);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetStats(0);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetLineStyle(0);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetMarkerStyle(20);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_103_stack_104_stack_105);
   
   Double_t xAxis392[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_TopPtInclusive",11, xAxis392);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.004751321);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.01294824);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.3032975);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.344027);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,2.364755);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,2.397032);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.934539);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1.447171);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.752458);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.2322684);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.02514196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.003276491);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.003538026);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.02669463);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.06378813);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.08892592);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.08030469);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.07302765);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.06511772);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.03448939);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.01846913);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.00358376);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3865.397);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,160);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis393[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_TopPtInclusive",11, xAxis393);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.02536371);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.2528818);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4.259863);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,19.44032);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,34.25912);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,32.51698);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,24.84747);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,16.76853);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,8.095192);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2.097473);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.2289647);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.004888658);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.01520857);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.07051126);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1547614);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.2069698);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.2019572);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1757249);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.1436006);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.07034844);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.03567652);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.008116394);
   TT_stack_2_stack_2_stack_2->SetEntries(119524.5);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,160);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis394[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_TopPtInclusive",11, xAxis394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,0.230018);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,0.6399438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5.739068);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,22.63762);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,34.53888);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,31.64509);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,19.95547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,11.09365);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,5.376173);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1.289408);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,0.1542511);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.1004598);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.188878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.5057879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.8817694);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.020412);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.9671326);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.786906);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.6231907);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.3089135);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.1576084);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.03855685);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4245.789);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,160);
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
   Double_t xAxis395[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__732 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__732","h_SR_TopPtInclusive",11, xAxis395);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(1,0.0008925346);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(2,0.0007718555);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(3,0.07002479);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(4,0.3413149);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(5,0.8665411);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(6,1.865576);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(7,2.312453);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(8,2.452536);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(9,1.578743);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(10,0.4263004);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(11,0.03958439);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(1,0.0005393223);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(2,0.00211007);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(3,0.01056409);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(4,0.02621451);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(5,0.04380609);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(6,0.0584616);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(7,0.06605676);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(8,0.0668824);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(9,0.03838914);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(10,0.020179);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(11,0.00427521);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetEntries(5871.979);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetXaxis()->SetRange(1,160);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3438[11] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   450,
   550,
   700};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3438[11] = {
   0.260133,
   0.9057739,
   10.30223,
   43.42197,
   71.16276,
   66.5591,
   46.73748,
   29.30935,
   14.22382,
   3.619149,
   0.4083578};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3438[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3438[11] = {
   0.1006321,
   0.1895223,
   0.5113764,
   0.8975173,
   1.044981,
   0.9912523,
   0.8095884,
   0.6428282,
   0.3186942,
   0.1626479,
   0.0395645};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3438[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3438[11] = {
   0.1006321,
   0.1895223,
   0.5113764,
   0.8975173,
   1.044981,
   0.9912523,
   0.8095884,
   0.6428282,
   0.3186942,
   0.1626479,
   0.0395645};
   grae = new TGraphAsymmErrors(11,BkgSum-SR-Inclusive_sum_errors_fx3438,BkgSum-SR-Inclusive_sum_errors_fy3438,BkgSum-SR-Inclusive_sum_errors_felx3438,BkgSum-SR-Inclusive_sum_errors_fehx3438,BkgSum-SR-Inclusive_sum_errors_fely3438,BkgSum-SR-Inclusive_sum_errors_fehy3438);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1318;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438","Graph",100,0,880);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMinimum(0.1435509);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMaximum(79.41256);
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
   Double_t xAxis396[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *Data__733 = new TH1F("Data__733","h_SR_TopPtInclusive",11, xAxis396);
   Data__733->SetBinContent(1,0.02);
   Data__733->SetBinContent(2,0.52);
   Data__733->SetBinContent(3,10.08);
   Data__733->SetBinContent(4,44.08);
   Data__733->SetBinContent(5,71.72);
   Data__733->SetBinContent(6,66.44);
   Data__733->SetBinContent(7,46.54);
   Data__733->SetBinContent(8,31.62);
   Data__733->SetBinContent(9,14.41);
   Data__733->SetBinContent(10,3.62);
   Data__733->SetBinContent(11,0.53);
   Data__733->SetBinError(1,0.02);
   Data__733->SetBinError(2,0.1019804);
   Data__733->SetBinError(3,0.4489989);
   Data__733->SetBinError(4,0.9389356);
   Data__733->SetBinError(5,1.197664);
   Data__733->SetBinError(6,1.152736);
   Data__733->SetBinError(7,0.9647798);
   Data__733->SetBinError(8,0.7952358);
   Data__733->SetBinError(9,0.3796051);
   Data__733->SetBinError(10,0.190263);
   Data__733->SetBinError(11,0.05147815);
   Data__733->SetEntries(14965.44);
   Data__733->SetDirectory(0);
   Data__733->SetFillStyle(3001);
   Data__733->SetLineWidth(2);
   Data__733->SetMarkerStyle(20);
   Data__733->SetMarkerSize(1.2);
   Data__733->GetXaxis()->SetRange(1,160);
   Data__733->GetXaxis()->SetLabelFont(42);
   Data__733->GetXaxis()->SetTitleOffset(1);
   Data__733->GetXaxis()->SetTitleFont(42);
   Data__733->GetYaxis()->SetLabelFont(42);
   Data__733->GetYaxis()->SetTitleFont(42);
   Data__733->GetZaxis()->SetLabelFont(42);
   Data__733->GetZaxis()->SetTitleOffset(1);
   Data__733->GetZaxis()->SetTitleFont(42);
   Data__733->Draw("EP same");
   
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

   ci = 1318;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1318;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__734 = new TH1F("hframe_copy__734","",1000,0,800);
   hframe_copy__734->SetMinimum(0.01);
   hframe_copy__734->SetMaximum(505.4542);
   hframe_copy__734->SetDirectory(0);
   hframe_copy__734->SetStats(0);
   hframe_copy__734->SetLineStyle(0);
   hframe_copy__734->SetMarkerStyle(20);
   hframe_copy__734->GetXaxis()->SetNdivisions(8);
   hframe_copy__734->GetXaxis()->SetLabelFont(43);
   hframe_copy__734->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__734->GetXaxis()->SetLabelSize(0);
   hframe_copy__734->GetXaxis()->SetTitleSize(0);
   hframe_copy__734->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__734->GetXaxis()->SetTitleFont(43);
   hframe_copy__734->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__734->GetYaxis()->SetLabelFont(43);
   hframe_copy__734->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__734->GetYaxis()->SetLabelSize(27);
   hframe_copy__734->GetYaxis()->SetTitleSize(33);
   hframe_copy__734->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__734->GetYaxis()->SetTitleFont(43);
   hframe_copy__734->GetZaxis()->SetLabelFont(43);
   hframe_copy__734->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__734->GetZaxis()->SetLabelSize(27);
   hframe_copy__734->GetZaxis()->SetTitleSize(33);
   hframe_copy__734->GetZaxis()->SetTitleOffset(1);
   hframe_copy__734->GetZaxis()->SetTitleFont(43);
   hframe_copy__734->Draw("sameaxis");
   
   TH1F *hframe_copy__735 = new TH1F("hframe_copy__735","",1000,0,800);
   hframe_copy__735->SetMinimum(0.01);
   hframe_copy__735->SetMaximum(505.4542);
   hframe_copy__735->SetDirectory(0);
   hframe_copy__735->SetStats(0);
   hframe_copy__735->SetLineStyle(0);
   hframe_copy__735->SetMarkerStyle(20);
   hframe_copy__735->GetXaxis()->SetNdivisions(8);
   hframe_copy__735->GetXaxis()->SetLabelFont(43);
   hframe_copy__735->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__735->GetXaxis()->SetLabelSize(0);
   hframe_copy__735->GetXaxis()->SetTitleSize(0);
   hframe_copy__735->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__735->GetXaxis()->SetTitleFont(43);
   hframe_copy__735->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__735->GetYaxis()->SetLabelFont(43);
   hframe_copy__735->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__735->GetYaxis()->SetLabelSize(27);
   hframe_copy__735->GetYaxis()->SetTitleSize(33);
   hframe_copy__735->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__735->GetYaxis()->SetTitleFont(43);
   hframe_copy__735->GetZaxis()->SetLabelFont(43);
   hframe_copy__735->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__735->GetZaxis()->SetLabelSize(27);
   hframe_copy__735->GetZaxis()->SetTitleSize(33);
   hframe_copy__735->GetZaxis()->SetTitleOffset(1);
   hframe_copy__735->GetZaxis()->SetTitleFont(43);
   hframe_copy__735->Draw("sameaxis");
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
   TopPt_1->Modified();
   TopPt->cd();
   TopPt->Modified();
   TopPt->cd();
   TopPt->SetSelected(TopPt);
}
