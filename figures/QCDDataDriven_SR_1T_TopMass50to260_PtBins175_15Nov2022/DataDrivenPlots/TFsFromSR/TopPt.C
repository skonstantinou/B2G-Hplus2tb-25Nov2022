void TopPt()
{
//=========Macro generated from canvas: TopPt/TopPt
//=========  (Fri Nov 18 13:28:08 2022) by ROOT version 6.20/02
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
   0.4928433,
   0.1186318,
   0.03607781,
   0.02261564,
   0.02062827,
   0.02464911,
   0.03286461,
   0.04422764,
   0.04881786,
   0.09523169,
   0.178201};
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
   0.4928433,
   0.1186318,
   0.03607781,
   0.02261564,
   0.02062827,
   0.02464911,
   0.03286461,
   0.04422764,
   0.04881786,
   0.09523169,
   0.178201};
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
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMinimum(0.4085881);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMaximum(1.591412);
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
   0.4928433,
   0.1186318,
   0.03607781,
   0.02261564,
   0.02062827,
   0.02464911,
   0.03286461,
   0.04422764,
   0.04881786,
   0.09523169,
   0.178201};
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
   0.4928433,
   0.1186318,
   0.03607781,
   0.02261564,
   0.02062827,
   0.02464911,
   0.03286461,
   0.04422764,
   0.04881786,
   0.09523169,
   0.178201};
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
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMinimum(0.4085881);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMaximum(1.591412);
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
   0.5656456,
   1.266429,
   1.086844,
   1.090513,
   1.020285,
   0.9829235,
   1.056914,
   1.034601,
   1.025512,
   1.079528,
   0.6842351};
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
   0.3999718,
   0.1443229,
   0.03947595,
   0.02484219,
   0.02247955,
   0.02682142,
   0.0371591,
   0.05036358,
   0.05578047,
   0.1150781,
   0.1659514};
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
   0.3999718,
   0.1443229,
   0.03947595,
   0.02484219,
   0.02247955,
   0.02682142,
   0.0371591,
   0.05036358,
   0.05578047,
   0.1150781,
   0.1659514};
   grae = new TGraphAsymmErrors(11,Graph1_fx3437,Graph1_fy3437,Graph1_felx3437,Graph1_fehx3437,Graph1_fely3437,Graph1_fehy3437);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1342934333437 = new TH1F("Graph_Graph_Graph_Graph1342934333437","Graph",100,0,880);
   Graph_Graph_Graph_Graph1342934333437->SetMinimum(0.04116597);
   Graph_Graph_Graph_Graph1342934333437->SetMaximum(1.535259);
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
   TopPt_1->Range(-162.0253,-2.09696,850.6329,2.75102);
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
   hframe__731->SetMaximum(288.4972);
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
   StackedMCstackHist_stack_103_stack_104_stack_105->SetMinimum(7.142126e-05);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetMaximum(82.34691);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.0006542589);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.01894391);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.3336765);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.875013);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.9196045);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.7903101);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.5333648);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.3502884);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.1420835);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.03357686);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.002206309);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.000226201);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.004212657);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.03119032);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.05389958);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.04973137);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.04688527);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.04027662);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.03523909);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.01355066);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.00582358);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.001920771);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1372.91);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.02700193);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.4835223);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4.477488);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,11.75179);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,13.28205);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,9.103562);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5.331796);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3.047014);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1.316125);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.3201047);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.03528784);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.005281168);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.02317386);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.07522504);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1225632);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1304944);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1081554);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.08204979);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.0620401);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.02882674);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.01415747);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.003221574);
   TT_stack_2_stack_2_stack_2->SetEntries(39260.7);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,0.04305947);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,0.7135519);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9.137482);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,22.71438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,26.17924);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,17.43277);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,9.443564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,4.760433);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1.837708);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,0.4614892);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,0.08673216);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.03444854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.1423226);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.4966039);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.787969);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.8211987);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.6631824);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.4947429);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.3536721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.1577152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.07610573);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.0218172);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3582.909);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(1,6.178264e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(2,0.006461408);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(3,0.07233677);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(4,0.2447067);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(5,0.4582676);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(6,0.6418605);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(7,0.7994603);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(8,0.6570698);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(9,0.3233967);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(10,0.04255545);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(11,0.002350673);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(1,0.0007157426);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(2,0.003259489);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(3,0.01151288);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(4,0.02217861);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(5,0.03060989);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(6,0.03635475);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(7,0.03803966);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(8,0.03525525);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(9,0.01745937);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(10,0.007796696);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(11,0.001606995);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetEntries(1772.9);
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
   0.07071566,
   1.216018,
   13.94865,
   35.34118,
   40.38089,
   27.32664,
   15.30873,
   8.157735,
   3.295916,
   0.8151708,
   0.1242263};
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
   0.03485174,
   0.1442584,
   0.5032366,
   0.7992634,
   0.8329881,
   0.6735775,
   0.5031152,
   0.3607973,
   0.1608996,
   0.07763009,
   0.02213725};
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
   0.03485174,
   0.1442584,
   0.5032366,
   0.7992634,
   0.8329881,
   0.6735775,
   0.5031152,
   0.3607973,
   0.1608996,
   0.07763009,
   0.02213725};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMinimum(0.03227753);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMaximum(45.33168);
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
   Data__733->SetBinContent(1,0.04);
   Data__733->SetBinContent(2,1.54);
   Data__733->SetBinContent(3,15.16);
   Data__733->SetBinContent(4,38.54);
   Data__733->SetBinContent(5,41.2);
   Data__733->SetBinContent(6,26.86);
   Data__733->SetBinContent(7,16.18);
   Data__733->SetBinContent(8,8.44);
   Data__733->SetBinContent(9,3.38);
   Data__733->SetBinContent(10,0.88);
   Data__733->SetBinContent(11,0.085);
   Data__733->SetBinError(1,0.02828427);
   Data__733->SetBinError(2,0.1754993);
   Data__733->SetBinError(3,0.550636);
   Data__733->SetBinError(4,0.8779522);
   Data__733->SetBinError(5,0.9077445);
   Data__733->SetBinError(6,0.7329393);
   Data__733->SetBinError(7,0.5688585);
   Data__733->SetBinError(8,0.4108528);
   Data__733->SetBinError(9,0.1838478);
   Data__733->SetBinError(10,0.09380832);
   Data__733->SetBinError(11,0.02061553);
   Data__733->SetEntries(7726.541);
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
   hframe_copy__734->SetMaximum(288.4972);
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
   hframe_copy__735->SetMaximum(288.4972);
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
