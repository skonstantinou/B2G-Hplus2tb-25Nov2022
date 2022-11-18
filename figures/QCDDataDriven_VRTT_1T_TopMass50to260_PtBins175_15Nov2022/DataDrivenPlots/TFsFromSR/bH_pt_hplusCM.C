void bH_pt_hplusCM()
{
//=========Macro generated from canvas: bH_pt_hplusCM/bH_pt_hplusCM
//=========  (Fri Nov 18 13:29:29 2022) by ROOT version 6.20/02
   TCanvas *bH_pt_hplusCM = new TCanvas("bH_pt_hplusCM", "bH_pt_hplusCM",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   bH_pt_hplusCM->SetHighLightColor(2);
   bH_pt_hplusCM->Range(0,0,1,1);
   bH_pt_hplusCM->SetFillColor(0);
   bH_pt_hplusCM->SetBorderMode(0);
   bH_pt_hplusCM->SetBorderSize(2);
   bH_pt_hplusCM->SetTickx(1);
   bH_pt_hplusCM->SetTicky(1);
   bH_pt_hplusCM->SetLeftMargin(0.16);
   bH_pt_hplusCM->SetRightMargin(0.05);
   bH_pt_hplusCM->SetTopMargin(0.06);
   bH_pt_hplusCM->SetBottomMargin(0.13);
   bH_pt_hplusCM->SetFrameFillStyle(0);
   bH_pt_hplusCM->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: bH_pt_hplusCM_2
   TPad *bH_pt_hplusCM_2 = new TPad("bH_pt_hplusCM_2", "bH_pt_hplusCM_2",0,0,1,0.304);
   bH_pt_hplusCM_2->Draw();
   bH_pt_hplusCM_2->cd();
   bH_pt_hplusCM_2->Range(-125.9494,-0.428,848.7342,1.7);
   bH_pt_hplusCM_2->SetFillColor(0);
   bH_pt_hplusCM_2->SetFillStyle(4000);
   bH_pt_hplusCM_2->SetBorderMode(0);
   bH_pt_hplusCM_2->SetBorderSize(2);
   bH_pt_hplusCM_2->SetTickx(1);
   bH_pt_hplusCM_2->SetTicky(1);
   bH_pt_hplusCM_2->SetLeftMargin(0.16);
   bH_pt_hplusCM_2->SetRightMargin(0.05);
   bH_pt_hplusCM_2->SetTopMargin(0);
   bH_pt_hplusCM_2->SetBottomMargin(0.3421053);
   bH_pt_hplusCM_2->SetFrameFillStyle(0);
   bH_pt_hplusCM_2->SetFrameBorderMode(0);
   bH_pt_hplusCM_2->SetFrameFillStyle(0);
   bH_pt_hplusCM_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1044 = new TH1F("hframe__1044","",1000,30,800);
   hframe__1044->SetMinimum(0.3);
   hframe__1044->SetMaximum(1.7);
   hframe__1044->SetDirectory(0);
   hframe__1044->SetStats(0);
   hframe__1044->SetLineStyle(0);
   hframe__1044->SetMarkerStyle(20);
   hframe__1044->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe__1044->GetXaxis()->SetNdivisions(8);
   hframe__1044->GetXaxis()->SetLabelFont(43);
   hframe__1044->GetXaxis()->SetLabelOffset(0.007);
   hframe__1044->GetXaxis()->SetLabelSize(27);
   hframe__1044->GetXaxis()->SetTitleSize(33);
   hframe__1044->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1044->GetXaxis()->SetTitleFont(43);
   hframe__1044->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1044->GetYaxis()->SetNdivisions(505);
   hframe__1044->GetYaxis()->SetLabelFont(43);
   hframe__1044->GetYaxis()->SetLabelOffset(0.007);
   hframe__1044->GetYaxis()->SetLabelSize(21);
   hframe__1044->GetYaxis()->SetTitleSize(33);
   hframe__1044->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1044->GetYaxis()->SetTitleFont(43);
   hframe__1044->GetZaxis()->SetLabelFont(43);
   hframe__1044->GetZaxis()->SetLabelOffset(0.007);
   hframe__1044->GetZaxis()->SetLabelSize(27);
   hframe__1044->GetZaxis()->SetTitleSize(33);
   hframe__1044->GetZaxis()->SetTitleOffset(1);
   hframe__1044->GetZaxis()->SetTitleFont(43);
   hframe__1044->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3639[11] = {
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
   Double_t BackgroundStatSystError_fy3639[11] = {
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
   Double_t BackgroundStatSystError_felx3639[11] = {
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
   Double_t BackgroundStatSystError_fely3639[11] = {
   0.04334942,
   0.01688891,
   0.01143814,
   0.01281583,
   0.01668169,
   0.02218834,
   0.02931733,
   0.03948382,
   0.04556071,
   0.08829887,
   0.1951563};
   Double_t BackgroundStatSystError_fehx3639[11] = {
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
   Double_t BackgroundStatSystError_fehy3639[11] = {
   0.04334942,
   0.01688891,
   0.01143814,
   0.01281583,
   0.01668169,
   0.02218834,
   0.02931733,
   0.03948382,
   0.04556071,
   0.08829887,
   0.1951563};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,BackgroundStatSystError_fx3639,BackgroundStatSystError_fy3639,BackgroundStatSystError_felx3639,BackgroundStatSystError_fehx3639,BackgroundStatSystError_fely3639,BackgroundStatSystError_fehy3639);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1373;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError363136353639 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError363136353639","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetMinimum(0.7658125);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetMaximum(1.234188);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError363136353639);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3640[11] = {
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
   Double_t BackgroundStatError_fy3640[11] = {
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
   Double_t BackgroundStatError_felx3640[11] = {
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
   Double_t BackgroundStatError_fely3640[11] = {
   0.04334942,
   0.01688891,
   0.01143814,
   0.01281583,
   0.01668169,
   0.02218834,
   0.02931733,
   0.03948382,
   0.04556071,
   0.08829887,
   0.1951563};
   Double_t BackgroundStatError_fehx3640[11] = {
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
   Double_t BackgroundStatError_fehy3640[11] = {
   0.04334942,
   0.01688891,
   0.01143814,
   0.01281583,
   0.01668169,
   0.02218834,
   0.02931733,
   0.03948382,
   0.04556071,
   0.08829887,
   0.1951563};
   grae = new TGraphAsymmErrors(11,BackgroundStatError_fx3640,BackgroundStatError_fy3640,BackgroundStatError_felx3640,BackgroundStatError_fehx3640,BackgroundStatError_fely3640,BackgroundStatError_fehy3640);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1372;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError363236363640 = new TH1F("Graph_Graph_Graph_BackgroundStatError363236363640","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatError363236363640->SetMinimum(0.7658125);
   Graph_Graph_Graph_BackgroundStatError363236363640->SetMaximum(1.234188);
   Graph_Graph_Graph_BackgroundStatError363236363640->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError363236363640->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError363236363640->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError363236363640->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError363236363640->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError363236363640->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError363236363640);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx150[2] = {
   30,
   800};
   Double_t Graph0_fy150[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx150,Graph0_fy150);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0148149150 = new TH1F("Graph_Graph_Graph_Graph0148149150","Graph",100,0,877);
   Graph_Graph_Graph_Graph0148149150->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0148149150->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0148149150->SetDirectory(0);
   Graph_Graph_Graph_Graph0148149150->SetStats(0);
   Graph_Graph_Graph_Graph0148149150->SetLineStyle(0);
   Graph_Graph_Graph_Graph0148149150->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0148149150->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0148149150->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0148149150->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0148149150->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0148149150->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0148149150->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0148149150->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0148149150->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0148149150->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0148149150->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0148149150->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0148149150->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0148149150->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0148149150->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0148149150->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0148149150->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0148149150->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0148149150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0148149150->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0148149150);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3641[11] = {
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
   Double_t Graph1_fy3641[11] = {
   0.9901781,
   0.8789002,
   0.9435403,
   1.009781,
   1.053888,
   1.04002,
   0.9472155,
   1.191567,
   1.04943,
   0.8547785,
   0.9637855};
   Double_t Graph1_felx3641[11] = {
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
   Double_t Graph1_fely3641[11] = {
   0.05033358,
   0.01879812,
   0.01369609,
   0.01598403,
   0.02130045,
   0.02797612,
   0.03577583,
   0.05549683,
   0.06079187,
   0.1060222,
   0.2337523};
   Double_t Graph1_fehx3641[11] = {
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
   Double_t Graph1_fehy3641[11] = {
   0.05033358,
   0.01879812,
   0.01369609,
   0.01598403,
   0.02130045,
   0.02797612,
   0.03577583,
   0.05549683,
   0.06079187,
   0.1060222,
   0.2337523};
   grae = new TGraphAsymmErrors(11,Graph1_fx3641,Graph1_fy3641,Graph1_felx3641,Graph1_fehx3641,Graph1_fely3641,Graph1_fehy3641);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1363336373641 = new TH1F("Graph_Graph_Graph_Graph1363336373641","Graph",100,0,880);
   Graph_Graph_Graph_Graph1363336373641->SetMinimum(0.6783301);
   Graph_Graph_Graph_Graph1363336373641->SetMaximum(1.298767);
   Graph_Graph_Graph_Graph1363336373641->SetDirectory(0);
   Graph_Graph_Graph_Graph1363336373641->SetStats(0);
   Graph_Graph_Graph_Graph1363336373641->SetLineStyle(0);
   Graph_Graph_Graph_Graph1363336373641->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1363336373641->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1363336373641->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1363336373641->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1363336373641->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1363336373641->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1363336373641->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1363336373641->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1363336373641->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1363336373641->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1363336373641->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1363336373641->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1363336373641->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1363336373641->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1363336373641->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1363336373641->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1363336373641->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1363336373641->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1363336373641->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1363336373641->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1363336373641->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1363336373641);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1045 = new TH1F("hframe_copy__1045","",1000,30,800);
   hframe_copy__1045->SetMinimum(0.3);
   hframe_copy__1045->SetMaximum(1.7);
   hframe_copy__1045->SetDirectory(0);
   hframe_copy__1045->SetStats(0);
   hframe_copy__1045->SetLineStyle(0);
   hframe_copy__1045->SetMarkerStyle(20);
   hframe_copy__1045->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe_copy__1045->GetXaxis()->SetNdivisions(8);
   hframe_copy__1045->GetXaxis()->SetLabelFont(43);
   hframe_copy__1045->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1045->GetXaxis()->SetLabelSize(27);
   hframe_copy__1045->GetXaxis()->SetTitleSize(33);
   hframe_copy__1045->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1045->GetXaxis()->SetTitleFont(43);
   hframe_copy__1045->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1045->GetYaxis()->SetNdivisions(505);
   hframe_copy__1045->GetYaxis()->SetLabelFont(43);
   hframe_copy__1045->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1045->GetYaxis()->SetLabelSize(21);
   hframe_copy__1045->GetYaxis()->SetTitleSize(33);
   hframe_copy__1045->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1045->GetYaxis()->SetTitleFont(43);
   hframe_copy__1045->GetZaxis()->SetLabelFont(43);
   hframe_copy__1045->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1045->GetZaxis()->SetLabelSize(27);
   hframe_copy__1045->GetZaxis()->SetTitleSize(33);
   hframe_copy__1045->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1045->GetZaxis()->SetTitleFont(43);
   hframe_copy__1045->Draw("sameaxis");
   bH_pt_hplusCM_2->Modified();
   bH_pt_hplusCM->cd();
  
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
   bH_pt_hplusCM->cd();
  
// ------------>Primitives in pad: bH_pt_hplusCM_1
   TPad *bH_pt_hplusCM_1 = new TPad("bH_pt_hplusCM_1", "bH_pt_hplusCM_1",0,0.2897959,1,1);
   bH_pt_hplusCM_1->Draw();
   bH_pt_hplusCM_1->cd();
   bH_pt_hplusCM_1->Range(-125.9494,-2.105492,848.7342,3.169111);
   bH_pt_hplusCM_1->SetFillColor(0);
   bH_pt_hplusCM_1->SetFillStyle(4000);
   bH_pt_hplusCM_1->SetBorderMode(0);
   bH_pt_hplusCM_1->SetBorderSize(2);
   bH_pt_hplusCM_1->SetLogy();
   bH_pt_hplusCM_1->SetTickx(1);
   bH_pt_hplusCM_1->SetTicky(1);
   bH_pt_hplusCM_1->SetLeftMargin(0.16);
   bH_pt_hplusCM_1->SetRightMargin(0.05);
   bH_pt_hplusCM_1->SetTopMargin(0.06);
   bH_pt_hplusCM_1->SetBottomMargin(0.02);
   bH_pt_hplusCM_1->SetFrameFillStyle(0);
   bH_pt_hplusCM_1->SetFrameBorderMode(0);
   bH_pt_hplusCM_1->SetFrameFillStyle(0);
   bH_pt_hplusCM_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1046 = new TH1F("hframe__1046","",1000,30,800);
   hframe__1046->SetMinimum(0.01);
   hframe__1046->SetMaximum(712.2536);
   hframe__1046->SetDirectory(0);
   hframe__1046->SetStats(0);
   hframe__1046->SetLineStyle(0);
   hframe__1046->SetMarkerStyle(20);
   hframe__1046->GetXaxis()->SetNdivisions(8);
   hframe__1046->GetXaxis()->SetLabelFont(43);
   hframe__1046->GetXaxis()->SetLabelOffset(0.007);
   hframe__1046->GetXaxis()->SetLabelSize(0);
   hframe__1046->GetXaxis()->SetTitleSize(0);
   hframe__1046->GetXaxis()->SetTitleOffset(0.9);
   hframe__1046->GetXaxis()->SetTitleFont(43);
   hframe__1046->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe__1046->GetYaxis()->SetLabelFont(43);
   hframe__1046->GetYaxis()->SetLabelOffset(0.007);
   hframe__1046->GetYaxis()->SetLabelSize(27);
   hframe__1046->GetYaxis()->SetTitleSize(33);
   hframe__1046->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1046->GetYaxis()->SetTitleFont(43);
   hframe__1046->GetZaxis()->SetLabelFont(43);
   hframe__1046->GetZaxis()->SetLabelOffset(0.007);
   hframe__1046->GetZaxis()->SetLabelSize(27);
   hframe__1046->GetZaxis()->SetTitleSize(33);
   hframe__1046->GetZaxis()->SetTitleOffset(1);
   hframe__1046->GetZaxis()->SetTitleFont(43);
   hframe__1046->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis553[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *StackedMCstackHist_stack_148_stack_149_stack_150 = new TH1F("StackedMCstackHist_stack_148_stack_149_stack_150","StackedMCstackHist",11, xAxis553);
   StackedMCstackHist_stack_148_stack_149_stack_150->SetMinimum(0.0006735151);
   StackedMCstackHist_stack_148_stack_149_stack_150->SetMaximum(194.2041);
   StackedMCstackHist_stack_148_stack_149_stack_150->SetDirectory(0);
   StackedMCstackHist_stack_148_stack_149_stack_150->SetStats(0);
   StackedMCstackHist_stack_148_stack_149_stack_150->SetLineStyle(0);
   StackedMCstackHist_stack_148_stack_149_stack_150->SetMarkerStyle(20);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_148_stack_149_stack_150->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_148_stack_149_stack_150);
   
   Double_t xAxis554[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_bH_pt_hplusCMInclusive",11, xAxis554);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.1351414);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1.242537);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,2.406244);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,2.000103);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1.118448);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.7954072);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.4648589);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.2827884);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.1120992);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.04029627);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.004018325);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.02382005);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.07423066);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.1098766);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.1145908);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.06678751);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.05412351);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.04295504);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.03419229);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.01479831);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.0081174);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.001529197);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1762.886);
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
   Double_t xAxis555[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_bH_pt_hplusCMInclusive",11, xAxis555);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,4.373378);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,31.49086);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,62.92184);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,47.71404);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,27.64885);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,15.41616);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,8.667585);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,4.891564);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1.933002);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.4752488);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.0433864);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.0708265);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.190697);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.271552);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.2378358);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.181777);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1354807);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1011353);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.07594006);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.03381622);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.01670479);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.003491809);
   TT_stack_2_stack_2_stack_2->SetEntries(175711.6);
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
   Double_t xAxis556[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_bH_pt_hplusCMInclusive",11, xAxis556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,3.308256);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,17.01059);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,35.27175);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,29.3327);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,17.68925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,10.36486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,5.668834);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2.563354);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,0.7945344);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,0.2448858);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,0.04078918);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.3305108);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.8148182);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,1.112762);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.9780471);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.750387);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.5713545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.4197919);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.2939438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.1239983);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.06452545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.01678415);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3612.307);
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
   Double_t xAxis557[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1047 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1047","h_SR_bH_pt_hplusCMInclusive",11, xAxis557);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(1,0.007988935);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(2,0.04742393);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(3,0.06995661);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(4,0.1196368);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(5,0.09803596);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(6,0.1202527);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(7,0.1099416);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(8,0.05413714);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(9,0.008922908);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(10,0.003416046);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(11,0.0005779431);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(1,0.004888944);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(2,0.00968797);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(3,0.01355641);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(4,0.01608241);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(5,0.01715359);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(6,0.01770787);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(7,0.01713284);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(8,0.01340023);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(9,0.003810286);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(10,0.001739674);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(11,0.0002934232);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetEntries(247.161);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->GetXaxis()->SetRange(1,160);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3642[11] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3642[11] = {
   7.816775,
   49.74399,
   100.5998,
   79.04684,
   46.45654,
   26.57642,
   14.80128,
   7.737707,
   2.839636,
   0.7604309,
   0.0881939};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3642[11] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3642[11] = {
   0.3388527,
   0.8401216,
   1.150675,
   1.013051,
   0.7749736,
   0.5896867,
   0.433934,
   0.3055142,
   0.1293758,
   0.06714518,
   0.01721159};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3642[11] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3642[11] = {
   0.3388527,
   0.8401216,
   1.150675,
   1.013051,
   0.7749736,
   0.5896867,
   0.433934,
   0.3055142,
   0.1293758,
   0.06714518,
   0.01721159};
   grae = new TGraphAsymmErrors(11,BkgSum-SR-Inclusive_sum_errors_fx3642,BkgSum-SR-Inclusive_sum_errors_fy3642,BkgSum-SR-Inclusive_sum_errors_felx3642,BkgSum-SR-Inclusive_sum_errors_fehx3642,BkgSum-SR-Inclusive_sum_errors_fely3642,BkgSum-SR-Inclusive_sum_errors_fehy3642);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1371;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642","Graph",100,0,880);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetMinimum(0.06388408);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetMaximum(111.9185);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors363436383642);
   
   grae->Draw("e2 ");
   Double_t xAxis558[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *Data__1048 = new TH1F("Data__1048","h_SR_bH_pt_hplusCMInclusive",11, xAxis558);
   Data__1048->SetBinContent(1,7.74);
   Data__1048->SetBinContent(2,43.72);
   Data__1048->SetBinContent(3,94.92);
   Data__1048->SetBinContent(4,79.82);
   Data__1048->SetBinContent(5,48.96);
   Data__1048->SetBinContent(6,27.64);
   Data__1048->SetBinContent(7,14.02);
   Data__1048->SetBinContent(8,9.22);
   Data__1048->SetBinContent(9,2.98);
   Data__1048->SetBinContent(10,0.65);
   Data__1048->SetBinContent(11,0.085);
   Data__1048->SetBinError(1,0.3934463);
   Data__1048->SetBinError(2,0.9350936);
   Data__1048->SetBinError(3,1.377824);
   Data__1048->SetBinError(4,1.263487);
   Data__1048->SetBinError(5,0.9895454);
   Data__1048->SetBinError(6,0.7435052);
   Data__1048->SetBinError(7,0.5295281);
   Data__1048->SetBinError(8,0.4294182);
   Data__1048->SetBinError(9,0.1726268);
   Data__1048->SetBinError(10,0.08062258);
   Data__1048->SetBinError(11,0.02061553);
   Data__1048->SetEntries(16582.23);
   Data__1048->SetDirectory(0);
   Data__1048->SetFillStyle(3001);
   Data__1048->SetLineWidth(2);
   Data__1048->SetMarkerStyle(20);
   Data__1048->SetMarkerSize(1.2);
   Data__1048->GetXaxis()->SetRange(1,160);
   Data__1048->GetXaxis()->SetLabelFont(42);
   Data__1048->GetXaxis()->SetTitleOffset(1);
   Data__1048->GetXaxis()->SetTitleFont(42);
   Data__1048->GetYaxis()->SetLabelFont(42);
   Data__1048->GetYaxis()->SetTitleFont(42);
   Data__1048->GetZaxis()->SetLabelFont(42);
   Data__1048->GetZaxis()->SetTitleOffset(1);
   Data__1048->GetZaxis()->SetTitleFont(42);
   Data__1048->Draw("EP same");
   
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

   ci = 1371;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1371;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1049 = new TH1F("hframe_copy__1049","",1000,30,800);
   hframe_copy__1049->SetMinimum(0.01);
   hframe_copy__1049->SetMaximum(712.2536);
   hframe_copy__1049->SetDirectory(0);
   hframe_copy__1049->SetStats(0);
   hframe_copy__1049->SetLineStyle(0);
   hframe_copy__1049->SetMarkerStyle(20);
   hframe_copy__1049->GetXaxis()->SetNdivisions(8);
   hframe_copy__1049->GetXaxis()->SetLabelFont(43);
   hframe_copy__1049->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1049->GetXaxis()->SetLabelSize(0);
   hframe_copy__1049->GetXaxis()->SetTitleSize(0);
   hframe_copy__1049->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1049->GetXaxis()->SetTitleFont(43);
   hframe_copy__1049->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__1049->GetYaxis()->SetLabelFont(43);
   hframe_copy__1049->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1049->GetYaxis()->SetLabelSize(27);
   hframe_copy__1049->GetYaxis()->SetTitleSize(33);
   hframe_copy__1049->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1049->GetYaxis()->SetTitleFont(43);
   hframe_copy__1049->GetZaxis()->SetLabelFont(43);
   hframe_copy__1049->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1049->GetZaxis()->SetLabelSize(27);
   hframe_copy__1049->GetZaxis()->SetTitleSize(33);
   hframe_copy__1049->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1049->GetZaxis()->SetTitleFont(43);
   hframe_copy__1049->Draw("sameaxis");
   
   TH1F *hframe_copy__1050 = new TH1F("hframe_copy__1050","",1000,30,800);
   hframe_copy__1050->SetMinimum(0.01);
   hframe_copy__1050->SetMaximum(712.2536);
   hframe_copy__1050->SetDirectory(0);
   hframe_copy__1050->SetStats(0);
   hframe_copy__1050->SetLineStyle(0);
   hframe_copy__1050->SetMarkerStyle(20);
   hframe_copy__1050->GetXaxis()->SetNdivisions(8);
   hframe_copy__1050->GetXaxis()->SetLabelFont(43);
   hframe_copy__1050->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1050->GetXaxis()->SetLabelSize(0);
   hframe_copy__1050->GetXaxis()->SetTitleSize(0);
   hframe_copy__1050->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1050->GetXaxis()->SetTitleFont(43);
   hframe_copy__1050->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__1050->GetYaxis()->SetLabelFont(43);
   hframe_copy__1050->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1050->GetYaxis()->SetLabelSize(27);
   hframe_copy__1050->GetYaxis()->SetTitleSize(33);
   hframe_copy__1050->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1050->GetYaxis()->SetTitleFont(43);
   hframe_copy__1050->GetZaxis()->SetLabelFont(43);
   hframe_copy__1050->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1050->GetZaxis()->SetLabelSize(27);
   hframe_copy__1050->GetZaxis()->SetTitleSize(33);
   hframe_copy__1050->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1050->GetZaxis()->SetTitleFont(43);
   hframe_copy__1050->Draw("sameaxis");
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
   bH_pt_hplusCM_1->Modified();
   bH_pt_hplusCM->cd();
   bH_pt_hplusCM->Modified();
   bH_pt_hplusCM->cd();
   bH_pt_hplusCM->SetSelected(bH_pt_hplusCM);
}
