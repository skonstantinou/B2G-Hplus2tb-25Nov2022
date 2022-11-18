void AssocTopPt()
{
//=========Macro generated from canvas: AssocTopPt/AssocTopPt
//=========  (Fri Nov 18 13:29:57 2022) by ROOT version 6.20/02
   TCanvas *AssocTopPt = new TCanvas("AssocTopPt", "AssocTopPt",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   AssocTopPt->SetHighLightColor(2);
   AssocTopPt->Range(0,0,1,1);
   AssocTopPt->SetFillColor(0);
   AssocTopPt->SetBorderMode(0);
   AssocTopPt->SetBorderSize(2);
   AssocTopPt->SetTickx(1);
   AssocTopPt->SetTicky(1);
   AssocTopPt->SetLeftMargin(0.16);
   AssocTopPt->SetRightMargin(0.05);
   AssocTopPt->SetTopMargin(0.06);
   AssocTopPt->SetBottomMargin(0.13);
   AssocTopPt->SetFrameFillStyle(0);
   AssocTopPt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: AssocTopPt_2
   TPad *AssocTopPt_2 = new TPad("AssocTopPt_2", "AssocTopPt_2",0,0,1,0.304);
   AssocTopPt_2->Draw();
   AssocTopPt_2->cd();
   AssocTopPt_2->Range(-162.0253,-0.428,850.6329,1.7);
   AssocTopPt_2->SetFillColor(0);
   AssocTopPt_2->SetFillStyle(4000);
   AssocTopPt_2->SetBorderMode(0);
   AssocTopPt_2->SetBorderSize(2);
   AssocTopPt_2->SetTickx(1);
   AssocTopPt_2->SetTicky(1);
   AssocTopPt_2->SetLeftMargin(0.16);
   AssocTopPt_2->SetRightMargin(0.05);
   AssocTopPt_2->SetTopMargin(0);
   AssocTopPt_2->SetBottomMargin(0.3421053);
   AssocTopPt_2->SetFrameFillStyle(0);
   AssocTopPt_2->SetFrameBorderMode(0);
   AssocTopPt_2->SetFrameFillStyle(0);
   AssocTopPt_2->SetFrameBorderMode(0);
   
   TH1F *hframe__792 = new TH1F("hframe__792","",1000,0,800);
   hframe__792->SetMinimum(0.3);
   hframe__792->SetMaximum(1.7);
   hframe__792->SetDirectory(0);
   hframe__792->SetStats(0);
   hframe__792->SetLineStyle(0);
   hframe__792->SetMarkerStyle(20);
   hframe__792->GetXaxis()->SetTitle("t^{res}_{assoc} p_{T} (GeV)");
   hframe__792->GetXaxis()->SetNdivisions(8);
   hframe__792->GetXaxis()->SetLabelFont(43);
   hframe__792->GetXaxis()->SetLabelOffset(0.007);
   hframe__792->GetXaxis()->SetLabelSize(27);
   hframe__792->GetXaxis()->SetTitleSize(33);
   hframe__792->GetXaxis()->SetTitleOffset(2.960526);
   hframe__792->GetXaxis()->SetTitleFont(43);
   hframe__792->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__792->GetYaxis()->SetNdivisions(505);
   hframe__792->GetYaxis()->SetLabelFont(43);
   hframe__792->GetYaxis()->SetLabelOffset(0.007);
   hframe__792->GetYaxis()->SetLabelSize(21);
   hframe__792->GetYaxis()->SetTitleSize(33);
   hframe__792->GetYaxis()->SetTitleOffset(1.5625);
   hframe__792->GetYaxis()->SetTitleFont(43);
   hframe__792->GetZaxis()->SetLabelFont(43);
   hframe__792->GetZaxis()->SetLabelOffset(0.007);
   hframe__792->GetZaxis()->SetLabelSize(27);
   hframe__792->GetZaxis()->SetTitleSize(33);
   hframe__792->GetZaxis()->SetTitleOffset(1);
   hframe__792->GetZaxis()->SetTitleFont(43);
   hframe__792->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3477[11] = {
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
   Double_t BackgroundStatSystError_fy3477[11] = {
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
   Double_t BackgroundStatSystError_felx3477[11] = {
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
   Double_t BackgroundStatSystError_fely3477[11] = {
   0.03929371,
   0.02345224,
   0.008195284,
   0.005812074,
   0.005723798,
   0.00651715,
   0.00962791,
   0.01290778,
   0.01586528,
   0.04961914,
   0.2405229};
   Double_t BackgroundStatSystError_fehx3477[11] = {
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
   Double_t BackgroundStatSystError_fehy3477[11] = {
   0.03929371,
   0.02345224,
   0.008195284,
   0.005812074,
   0.005723798,
   0.00651715,
   0.00962791,
   0.01290778,
   0.01586528,
   0.04961914,
   0.2405229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,BackgroundStatSystError_fx3477,BackgroundStatSystError_fy3477,BackgroundStatSystError_felx3477,BackgroundStatSystError_fehx3477,BackgroundStatSystError_fely3477,BackgroundStatSystError_fehy3477);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1331;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError346934733477 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError346934733477","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->SetMinimum(0.7113725);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->SetMaximum(1.288628);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError346934733477);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3478[11] = {
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
   Double_t BackgroundStatError_fy3478[11] = {
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
   Double_t BackgroundStatError_felx3478[11] = {
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
   Double_t BackgroundStatError_fely3478[11] = {
   0.03929371,
   0.02345224,
   0.008195284,
   0.005812074,
   0.005723798,
   0.00651715,
   0.00962791,
   0.01290778,
   0.01586528,
   0.04961914,
   0.2405229};
   Double_t BackgroundStatError_fehx3478[11] = {
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
   Double_t BackgroundStatError_fehy3478[11] = {
   0.03929371,
   0.02345224,
   0.008195284,
   0.005812074,
   0.005723798,
   0.00651715,
   0.00962791,
   0.01290778,
   0.01586528,
   0.04961914,
   0.2405229};
   grae = new TGraphAsymmErrors(11,BackgroundStatError_fx3478,BackgroundStatError_fy3478,BackgroundStatError_felx3478,BackgroundStatError_fehx3478,BackgroundStatError_fely3478,BackgroundStatError_fehy3478);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1330;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError347034743478 = new TH1F("Graph_Graph_Graph_BackgroundStatError347034743478","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatError347034743478->SetMinimum(0.7113725);
   Graph_Graph_Graph_BackgroundStatError347034743478->SetMaximum(1.288628);
   Graph_Graph_Graph_BackgroundStatError347034743478->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError347034743478->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError347034743478->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError347034743478->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError347034743478->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError347034743478->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError347034743478);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx114[2] = {
   0,
   800};
   Double_t Graph0_fy114[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx114,Graph0_fy114);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0112113114 = new TH1F("Graph_Graph_Graph_Graph0112113114","Graph",100,0,880);
   Graph_Graph_Graph_Graph0112113114->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0112113114->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0112113114->SetDirectory(0);
   Graph_Graph_Graph_Graph0112113114->SetStats(0);
   Graph_Graph_Graph_Graph0112113114->SetLineStyle(0);
   Graph_Graph_Graph_Graph0112113114->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0112113114->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0112113114->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0112113114->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0112113114->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0112113114->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0112113114->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0112113114->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0112113114->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0112113114->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0112113114->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0112113114->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0112113114->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0112113114->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0112113114->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0112113114->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0112113114->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0112113114->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0112113114->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0112113114->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0112113114);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3479[11] = {
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
   Double_t Graph1_fy3479[11] = {
   1.091764,
   0.9748722,
   0.9374909,
   0.9239999,
   0.947169,
   0.9325681,
   0.9565895,
   1.000007,
   0.9538436,
   0.9541547,
   1.816517};
   Double_t Graph1_felx3479[11] = {
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
   Double_t Graph1_fely3479[11] = {
   0.04103101,
   0.02261039,
   0.01155988,
   0.008582084,
   0.009258867,
   0.01151494,
   0.0158684,
   0.02323085,
   0.02869432,
   0.08336489,
   0.574433};
   Double_t Graph1_fehx3479[11] = {
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
   Double_t Graph1_fehy3479[11] = {
   0.04103101,
   0.02261039,
   0.01155988,
   0.008582084,
   0.009258867,
   0.01151494,
   0.0158684,
   0.02323085,
   0.02869432,
   0.08336489,
   0.574433};
   grae = new TGraphAsymmErrors(11,Graph1_fx3479,Graph1_fy3479,Graph1_felx3479,Graph1_fehx3479,Graph1_fely3479,Graph1_fehy3479);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1347134753479 = new TH1F("Graph_Graph_Graph_Graph1347134753479","Graph",100,0,880);
   Graph_Graph_Graph_Graph1347134753479->SetMinimum(0.7187738);
   Graph_Graph_Graph_Graph1347134753479->SetMaximum(2.542965);
   Graph_Graph_Graph_Graph1347134753479->SetDirectory(0);
   Graph_Graph_Graph_Graph1347134753479->SetStats(0);
   Graph_Graph_Graph_Graph1347134753479->SetLineStyle(0);
   Graph_Graph_Graph_Graph1347134753479->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1347134753479->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1347134753479->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1347134753479->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1347134753479->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1347134753479->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1347134753479->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1347134753479->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1347134753479->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1347134753479->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1347134753479->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1347134753479->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1347134753479->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1347134753479->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1347134753479->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1347134753479->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1347134753479->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1347134753479->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1347134753479->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1347134753479->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1347134753479->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1347134753479);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__793 = new TH1F("hframe_copy__793","",1000,0,800);
   hframe_copy__793->SetMinimum(0.3);
   hframe_copy__793->SetMaximum(1.7);
   hframe_copy__793->SetDirectory(0);
   hframe_copy__793->SetStats(0);
   hframe_copy__793->SetLineStyle(0);
   hframe_copy__793->SetMarkerStyle(20);
   hframe_copy__793->GetXaxis()->SetTitle("t^{res}_{assoc} p_{T} (GeV)");
   hframe_copy__793->GetXaxis()->SetNdivisions(8);
   hframe_copy__793->GetXaxis()->SetLabelFont(43);
   hframe_copy__793->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__793->GetXaxis()->SetLabelSize(27);
   hframe_copy__793->GetXaxis()->SetTitleSize(33);
   hframe_copy__793->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__793->GetXaxis()->SetTitleFont(43);
   hframe_copy__793->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__793->GetYaxis()->SetNdivisions(505);
   hframe_copy__793->GetYaxis()->SetLabelFont(43);
   hframe_copy__793->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__793->GetYaxis()->SetLabelSize(21);
   hframe_copy__793->GetYaxis()->SetTitleSize(33);
   hframe_copy__793->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__793->GetYaxis()->SetTitleFont(43);
   hframe_copy__793->GetZaxis()->SetLabelFont(43);
   hframe_copy__793->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__793->GetZaxis()->SetLabelSize(27);
   hframe_copy__793->GetZaxis()->SetTitleSize(33);
   hframe_copy__793->GetZaxis()->SetTitleOffset(1);
   hframe_copy__793->GetZaxis()->SetTitleFont(43);
   hframe_copy__793->Draw("sameaxis");
   AssocTopPt_2->Modified();
   AssocTopPt->cd();
  
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
   AssocTopPt->cd();
  
// ------------>Primitives in pad: AssocTopPt_1
   TPad *AssocTopPt_1 = new TPad("AssocTopPt_1", "AssocTopPt_1",0,0.2897959,1,1);
   AssocTopPt_1->Draw();
   AssocTopPt_1->cd();
   AssocTopPt_1->Range(-162.0253,-2.114068,850.6329,3.589336);
   AssocTopPt_1->SetFillColor(0);
   AssocTopPt_1->SetFillStyle(4000);
   AssocTopPt_1->SetBorderMode(0);
   AssocTopPt_1->SetBorderSize(2);
   AssocTopPt_1->SetLogy();
   AssocTopPt_1->SetTickx(1);
   AssocTopPt_1->SetTicky(1);
   AssocTopPt_1->SetLeftMargin(0.16);
   AssocTopPt_1->SetRightMargin(0.05);
   AssocTopPt_1->SetTopMargin(0.06);
   AssocTopPt_1->SetBottomMargin(0.02);
   AssocTopPt_1->SetFrameFillStyle(0);
   AssocTopPt_1->SetFrameBorderMode(0);
   AssocTopPt_1->SetFrameFillStyle(0);
   AssocTopPt_1->SetFrameBorderMode(0);
   
   TH1F *hframe__794 = new TH1F("hframe__794","",1000,0,800);
   hframe__794->SetMinimum(0.01);
   hframe__794->SetMaximum(1766.572);
   hframe__794->SetDirectory(0);
   hframe__794->SetStats(0);
   hframe__794->SetLineStyle(0);
   hframe__794->SetMarkerStyle(20);
   hframe__794->GetXaxis()->SetNdivisions(8);
   hframe__794->GetXaxis()->SetLabelFont(43);
   hframe__794->GetXaxis()->SetLabelOffset(0.007);
   hframe__794->GetXaxis()->SetLabelSize(0);
   hframe__794->GetXaxis()->SetTitleSize(0);
   hframe__794->GetXaxis()->SetTitleOffset(0.9);
   hframe__794->GetXaxis()->SetTitleFont(43);
   hframe__794->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe__794->GetYaxis()->SetLabelFont(43);
   hframe__794->GetYaxis()->SetLabelOffset(0.007);
   hframe__794->GetYaxis()->SetLabelSize(27);
   hframe__794->GetYaxis()->SetTitleSize(33);
   hframe__794->GetYaxis()->SetTitleOffset(1.5625);
   hframe__794->GetYaxis()->SetTitleFont(43);
   hframe__794->GetZaxis()->SetLabelFont(43);
   hframe__794->GetZaxis()->SetLabelOffset(0.007);
   hframe__794->GetZaxis()->SetLabelSize(27);
   hframe__794->GetZaxis()->SetTitleSize(33);
   hframe__794->GetZaxis()->SetTitleOffset(1);
   hframe__794->GetZaxis()->SetTitleFont(43);
   hframe__794->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis409[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *StackedMCstackHist_stack_112_stack_113_stack_114 = new TH1F("StackedMCstackHist_stack_112_stack_113_stack_114","StackedMCstackHist",11, xAxis409);
   StackedMCstackHist_stack_112_stack_113_stack_114->SetMinimum(0.1003636);
   StackedMCstackHist_stack_112_stack_113_stack_114->SetMaximum(401.4546);
   StackedMCstackHist_stack_112_stack_113_stack_114->SetDirectory(0);
   StackedMCstackHist_stack_112_stack_113_stack_114->SetStats(0);
   StackedMCstackHist_stack_112_stack_113_stack_114->SetLineStyle(0);
   StackedMCstackHist_stack_112_stack_113_stack_114->SetMarkerStyle(20);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_112_stack_113_stack_114->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_112_stack_113_stack_114);
   
   Double_t xAxis410[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_AssocTopPtInclusive",11, xAxis410);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.323445);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.8775226);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,3.582862);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,5.641721);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,5.581414);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,3.692616);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,2.042208);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1.062784);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.3787798);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.03056484);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.001861122);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.03257729);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.05451481);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.1334576);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.158566);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.1548572);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.1381955);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.09471988);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.06996023);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.02989686);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.01005482);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.00123884);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5136.557);
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
   Double_t xAxis411[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_AssocTopPtInclusive",11, xAxis411);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,9.277572);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,27.17204);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,106.6327);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,200.2838);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,183.7638);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,121.3158);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,66.60591);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,33.25426);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,10.43062);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1.231932);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.03608759);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.09340661);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1576661);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.3409409);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.4736738);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.45422);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.3690886);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.2685853);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.1886325);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.07544895);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.02582029);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.003028831);
   TT_stack_2_stack_2_stack_2->SetEntries(695223.6);
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
   Double_t xAxis412[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_AssocTopPtInclusive",11, xAxis412);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,3.368815);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,10.08878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,30.09511);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,44.98355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,31.62905);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,15.65697);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,7.330139);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2.742714);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,0.7753103);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,0.110446);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,-0.0104235);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.4999395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.8787338);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,1.090039);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.370086);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.170237);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.827697);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.673795);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.433994);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.1649064);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.06223445);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.005755149);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3160.71);
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
   Double_t xAxis413[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__795 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__795","h_SR_AssocTopPtInclusive",11, xAxis413);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(1,0.01428734);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(2,0.05162958);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(3,0.189817);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(4,0.3470696);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(5,0.4547353);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(6,0.4253018);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(7,0.3354971);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(8,0.1800677);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(9,0.06010301);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(10,0.006583413);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(11,0.0004813247);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(1,0.007062478);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(2,0.01112267);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(3,0.02308498);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(4,0.03115252);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(5,0.0333922);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(6,0.03162841);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(7,0.02883437);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(8,0.02214364);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(9,0.008081464);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(10,0.002497999);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(11,0.0002414568);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetEntries(822.7527);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->GetXaxis()->SetRange(1,160);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3480[11] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3480[11] = {
   12.96983,
   38.13833,
   140.3107,
   250.9091,
   220.9743,
   140.6653,
   75.97826,
   37.05975,
   11.58471,
   1.372943,
   0.02752521};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3480[11] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3480[11] = {
   0.5096328,
   0.8944292,
   1.149886,
   1.458302,
   1.264812,
   0.916737,
   0.7315118,
   0.4783591,
   0.1837946,
   0.06812425,
   0.006620444};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3480[11] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3480[11] = {
   0.5096328,
   0.8944292,
   1.149886,
   1.458302,
   1.264812,
   0.916737,
   0.7315118,
   0.4783591,
   0.1837946,
   0.06812425,
   0.006620444};
   grae = new TGraphAsymmErrors(11,BkgSum-SR-Inclusive_sum_errors_fx3480,BkgSum-SR-Inclusive_sum_errors_fy3480,BkgSum-SR-Inclusive_sum_errors_felx3480,BkgSum-SR-Inclusive_sum_errors_fehx3480,BkgSum-SR-Inclusive_sum_errors_fely3480,BkgSum-SR-Inclusive_sum_errors_fehy3480);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1329;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480","Graph",100,0,880);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->SetMinimum(0.01881429);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->SetMaximum(277.6021);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors347234763480);
   
   grae->Draw("e2 ");
   Double_t xAxis414[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *Data__796 = new TH1F("Data__796","h_SR_AssocTopPtInclusive",11, xAxis414);
   Data__796->SetBinContent(1,14.16);
   Data__796->SetBinContent(2,37.18);
   Data__796->SetBinContent(3,131.54);
   Data__796->SetBinContent(4,231.84);
   Data__796->SetBinContent(5,209.3);
   Data__796->SetBinContent(6,131.18);
   Data__796->SetBinContent(7,72.68);
   Data__796->SetBinContent(8,37.06);
   Data__796->SetBinContent(9,11.05);
   Data__796->SetBinContent(10,1.31);
   Data__796->SetBinContent(11,0.05);
   Data__796->SetBinError(1,0.5321654);
   Data__796->SetBinError(2,0.8623224);
   Data__796->SetBinError(3,1.621974);
   Data__796->SetBinError(4,2.153323);
   Data__796->SetBinError(5,2.045972);
   Data__796->SetBinError(6,1.619753);
   Data__796->SetBinError(7,1.205653);
   Data__796->SetBinError(8,0.8609297);
   Data__796->SetBinError(9,0.3324154);
   Data__796->SetBinError(10,0.1144552);
   Data__796->SetBinError(11,0.01581139);
   Data__796->SetEntries(44180.59);
   Data__796->SetDirectory(0);
   Data__796->SetFillStyle(3001);
   Data__796->SetLineWidth(2);
   Data__796->SetMarkerStyle(20);
   Data__796->SetMarkerSize(1.2);
   Data__796->GetXaxis()->SetRange(1,160);
   Data__796->GetXaxis()->SetLabelFont(42);
   Data__796->GetXaxis()->SetTitleOffset(1);
   Data__796->GetXaxis()->SetTitleFont(42);
   Data__796->GetYaxis()->SetLabelFont(42);
   Data__796->GetYaxis()->SetTitleFont(42);
   Data__796->GetZaxis()->SetLabelFont(42);
   Data__796->GetZaxis()->SetTitleOffset(1);
   Data__796->GetZaxis()->SetTitleFont(42);
   Data__796->Draw("EP same");
   
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

   ci = 1329;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1329;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__797 = new TH1F("hframe_copy__797","",1000,0,800);
   hframe_copy__797->SetMinimum(0.01);
   hframe_copy__797->SetMaximum(1766.572);
   hframe_copy__797->SetDirectory(0);
   hframe_copy__797->SetStats(0);
   hframe_copy__797->SetLineStyle(0);
   hframe_copy__797->SetMarkerStyle(20);
   hframe_copy__797->GetXaxis()->SetNdivisions(8);
   hframe_copy__797->GetXaxis()->SetLabelFont(43);
   hframe_copy__797->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__797->GetXaxis()->SetLabelSize(0);
   hframe_copy__797->GetXaxis()->SetTitleSize(0);
   hframe_copy__797->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__797->GetXaxis()->SetTitleFont(43);
   hframe_copy__797->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__797->GetYaxis()->SetLabelFont(43);
   hframe_copy__797->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__797->GetYaxis()->SetLabelSize(27);
   hframe_copy__797->GetYaxis()->SetTitleSize(33);
   hframe_copy__797->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__797->GetYaxis()->SetTitleFont(43);
   hframe_copy__797->GetZaxis()->SetLabelFont(43);
   hframe_copy__797->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__797->GetZaxis()->SetLabelSize(27);
   hframe_copy__797->GetZaxis()->SetTitleSize(33);
   hframe_copy__797->GetZaxis()->SetTitleOffset(1);
   hframe_copy__797->GetZaxis()->SetTitleFont(43);
   hframe_copy__797->Draw("sameaxis");
   
   TH1F *hframe_copy__798 = new TH1F("hframe_copy__798","",1000,0,800);
   hframe_copy__798->SetMinimum(0.01);
   hframe_copy__798->SetMaximum(1766.572);
   hframe_copy__798->SetDirectory(0);
   hframe_copy__798->SetStats(0);
   hframe_copy__798->SetLineStyle(0);
   hframe_copy__798->SetMarkerStyle(20);
   hframe_copy__798->GetXaxis()->SetNdivisions(8);
   hframe_copy__798->GetXaxis()->SetLabelFont(43);
   hframe_copy__798->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__798->GetXaxis()->SetLabelSize(0);
   hframe_copy__798->GetXaxis()->SetTitleSize(0);
   hframe_copy__798->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__798->GetXaxis()->SetTitleFont(43);
   hframe_copy__798->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__798->GetYaxis()->SetLabelFont(43);
   hframe_copy__798->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__798->GetYaxis()->SetLabelSize(27);
   hframe_copy__798->GetYaxis()->SetTitleSize(33);
   hframe_copy__798->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__798->GetYaxis()->SetTitleFont(43);
   hframe_copy__798->GetZaxis()->SetLabelFont(43);
   hframe_copy__798->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__798->GetZaxis()->SetLabelSize(27);
   hframe_copy__798->GetZaxis()->SetTitleSize(33);
   hframe_copy__798->GetZaxis()->SetTitleOffset(1);
   hframe_copy__798->GetZaxis()->SetTitleFont(43);
   hframe_copy__798->Draw("sameaxis");
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
   AssocTopPt_1->Modified();
   AssocTopPt->cd();
   AssocTopPt->Modified();
   AssocTopPt->cd();
   AssocTopPt->SetSelected(AssocTopPt);
}
