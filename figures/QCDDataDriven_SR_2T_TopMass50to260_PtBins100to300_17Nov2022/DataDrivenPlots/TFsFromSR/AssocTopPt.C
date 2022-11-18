void AssocTopPt()
{
//=========Macro generated from canvas: AssocTopPt/AssocTopPt
//=========  (Fri Nov 18 13:28:43 2022) by ROOT version 6.20/02
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
   0.07081175,
   0.04418115,
   0.01556128,
   0.01254966,
   0.01410214,
   0.01832779,
   0.02954691,
   0.04218245,
   0.05436101,
   0.1570374,
   1.951626};
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
   0.07081175,
   0.04418115,
   0.01556128,
   0.01254966,
   0.01410214,
   0.01832779,
   0.02954691,
   0.04218245,
   0.05436101,
   0.1570374,
   1.951626};
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
   Graph_Graph_Graph_BackgroundStatSystError346934733477->SetMinimum(-1.341951);
   Graph_Graph_Graph_BackgroundStatSystError346934733477->SetMaximum(3.341951);
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
   0.07081175,
   0.04418115,
   0.01556128,
   0.01254966,
   0.01410214,
   0.01832779,
   0.02954691,
   0.04218245,
   0.05436101,
   0.1570374,
   1.951626};
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
   0.07081175,
   0.04418115,
   0.01556128,
   0.01254966,
   0.01410214,
   0.01832779,
   0.02954691,
   0.04218245,
   0.05436101,
   0.1570374,
   1.951626};
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
   Graph_Graph_Graph_BackgroundStatError347034743478->SetMinimum(-1.341951);
   Graph_Graph_Graph_BackgroundStatError347034743478->SetMaximum(3.341951);
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
   1.140384,
   0.900856,
   1.009274,
   0.9799142,
   1.00668,
   1.098613,
   1.053818,
   1.017486,
   1.069907,
   1.132208,
   36.01003};
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
   0.0578942,
   0.03052434,
   0.01840528,
   0.0147627,
   0.01756669,
   0.0253917,
   0.03468683,
   0.04953044,
   0.06807655,
   0.200148,
   12.73147};
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
   0.0578942,
   0.03052434,
   0.01840528,
   0.0147627,
   0.01756669,
   0.0253917,
   0.03468683,
   0.04953044,
   0.06807655,
   0.200148,
   12.73147};
   grae = new TGraphAsymmErrors(11,Graph1_fx3479,Graph1_fy3479,Graph1_felx3479,Graph1_fehx3479,Graph1_fely3479,Graph1_fehy3479);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1347134753479 = new TH1F("Graph_Graph_Graph_Graph1347134753479","Graph",100,0,880);
   Graph_Graph_Graph_Graph1347134753479->SetMinimum(0.7832985);
   Graph_Graph_Graph_Graph1347134753479->SetMaximum(53.52861);
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
   AssocTopPt_1->Range(-162.0253,-2.104443,850.6329,3.117731);
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
   hframe__794->SetMaximum(637.3835);
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
   StackedMCstackHist_stack_112_stack_113_stack_114->SetMinimum(0.0359705);
   StackedMCstackHist_stack_112_stack_113_stack_114->SetMaximum(143.882);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.2287108);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.4707628);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,2.074594);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,3.198376);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,2.573035);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1.688086);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.8809225);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.4219649);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.1499496);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.01697571);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.00206013);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.02149608);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.03536205);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.08548937);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.0971357);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.08481714);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.06886171);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.05018285);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.03417498);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.01487979);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.004363516);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.001187047);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3992.307);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2.800902);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,6.941722);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,27.69654);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,42.45879);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,34.35869);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,20.25529);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,10.67056);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5.118137);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1.487234);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.1892922);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.004508866);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.05471534);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.08515485);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.1849449);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.231033);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.2086879);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1591627);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.114431);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.07950819);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.03017094);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.01060177);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.001286298);
   TT_stack_2_stack_2_stack_2->SetEntries(123422.2);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,3.775115);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,11.92468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,29.81626);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,44.26908);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,28.31244);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,12.13596);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,5.965776);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2.754853);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,0.6714286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,0.07636575);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,-0.005458193);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.4782553);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.849348);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.9045945);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.100363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.8920801);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.6000409);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.502272);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.3390304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.1209057);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.04287779);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.001279067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4318.703);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(1,0.1495384);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(2,0.4156081);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(3,1.40856);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(4,2.387529);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(5,2.600116);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(6,2.152801);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(7,1.541948);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(8,0.8525339);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(9,0.2594096);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(10,0.02400614);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinContent(11,0.0007680269);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(1,0.01651909);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(2,0.02558611);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(3,0.05215485);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(4,0.0683017);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(5,0.07045316);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(6,0.06394419);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(7,0.05308895);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(8,0.04001395);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(9,0.01506414);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(10,0.004854863);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetBinError(11,0.0006277982);
   ChargedHiggs_HplusTBHplusToTB_M_800__795->SetEntries(6311.138);
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
   6.804728,
   19.33716,
   59.58739,
   89.92625,
   65.24417,
   34.07934,
   17.51726,
   8.294955,
   2.308612,
   0.2826336,
   0.001110802};
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
   0.4818547,
   0.8543382,
   0.9272563,
   1.128544,
   0.9200823,
   0.6245989,
   0.5175809,
   0.3499015,
   0.1254985,
   0.04438404,
   0.002167869};
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
   0.4818547,
   0.8543382,
   0.9272563,
   1.128544,
   0.9200823,
   0.6245989,
   0.5175809,
   0.3499015,
   0.1254985,
   0.04438404,
   0.002167869};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->SetMinimum(0.0003332405);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors347234763480->SetMaximum(100.1602);
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
   Data__796->SetBinContent(1,7.76);
   Data__796->SetBinContent(2,17.42);
   Data__796->SetBinContent(3,60.14);
   Data__796->SetBinContent(4,88.12);
   Data__796->SetBinContent(5,65.68);
   Data__796->SetBinContent(6,37.44);
   Data__796->SetBinContent(7,18.46);
   Data__796->SetBinContent(8,8.44);
   Data__796->SetBinContent(9,2.47);
   Data__796->SetBinContent(10,0.32);
   Data__796->SetBinContent(11,0.04);
   Data__796->SetBinError(1,0.3939543);
   Data__796->SetBinError(2,0.5902542);
   Data__796->SetBinError(3,1.096722);
   Data__796->SetBinError(4,1.327554);
   Data__796->SetBinError(5,1.146124);
   Data__796->SetBinError(6,0.8653323);
   Data__796->SetBinError(7,0.6076183);
   Data__796->SetBinError(8,0.4108528);
   Data__796->SetBinError(9,0.1571623);
   Data__796->SetBinError(10,0.05656854);
   Data__796->SetBinError(11,0.01414214);
   Data__796->SetEntries(15386.08);
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
   hframe_copy__797->SetMaximum(637.3835);
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
   hframe_copy__798->SetMaximum(637.3835);
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
