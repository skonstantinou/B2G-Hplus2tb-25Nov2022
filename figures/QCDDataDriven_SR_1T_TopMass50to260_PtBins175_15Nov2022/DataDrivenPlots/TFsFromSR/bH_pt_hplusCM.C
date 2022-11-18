void bH_pt_hplusCM()
{
//=========Macro generated from canvas: bH_pt_hplusCM/bH_pt_hplusCM
//=========  (Fri Nov 18 13:29:20 2022) by ROOT version 6.20/02
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
   0.0323537,
   0.02105421,
   0.02042666,
   0.02699166,
   0.03670023,
   0.04668954,
   0.06210754,
   0.07952028,
   0.08763481,
   0.1616383,
   0.3007965};
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
   0.0323537,
   0.02105421,
   0.02042666,
   0.02699166,
   0.03670023,
   0.04668954,
   0.06210754,
   0.07952028,
   0.08763481,
   0.1616383,
   0.3007965};
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
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetMinimum(0.6390442);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetMaximum(1.360956);
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
   0.0323537,
   0.02105421,
   0.02042666,
   0.02699166,
   0.03670023,
   0.04668954,
   0.06210754,
   0.07952028,
   0.08763481,
   0.1616383,
   0.3007965};
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
   0.0323537,
   0.02105421,
   0.02042666,
   0.02699166,
   0.03670023,
   0.04668954,
   0.06210754,
   0.07952028,
   0.08763481,
   0.1616383,
   0.3007965};
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
   Graph_Graph_Graph_BackgroundStatError363236363640->SetMinimum(0.6390442);
   Graph_Graph_Graph_BackgroundStatError363236363640->SetMaximum(1.360956);
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
   1.006179,
   1.072911,
   1.025641,
   1.047211,
   1.064688,
   1.002861,
   0.9863715,
   1.127733,
   1.056768,
   1.135976,
   0.4735847};
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
   0.03494603,
   0.02332414,
   0.02230182,
   0.02976281,
   0.04134905,
   0.05117706,
   0.06822875,
   0.09463727,
   0.1021616,
   0.1948183,
   0.2367924};
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
   0.03494603,
   0.02332414,
   0.02230182,
   0.02976281,
   0.04134905,
   0.05117706,
   0.06822875,
   0.09463727,
   0.1021616,
   0.1948183,
   0.2367924};
   grae = new TGraphAsymmErrors(11,Graph1_fx3641,Graph1_fy3641,Graph1_felx3641,Graph1_fehx3641,Graph1_fely3641,Graph1_fehy3641);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1363336373641 = new TH1F("Graph_Graph_Graph_Graph1363336373641","Graph",100,0,880);
   Graph_Graph_Graph_Graph1363336373641->SetMinimum(0.1273921);
   Graph_Graph_Graph_Graph1363336373641->SetMaximum(1.440195);
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
   bH_pt_hplusCM_1->Range(-125.9494,-2.09721,848.7342,2.763273);
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
   hframe__1046->SetMaximum(296.24);
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
   StackedMCstackHist_stack_148_stack_149_stack_150->SetMinimum(0.016497);
   StackedMCstackHist_stack_148_stack_149_stack_150->SetMaximum(65.98799);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.3491741);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.8930278);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1.127311);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.7128378);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.4372918);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.2697699);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.1554056);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.1232418);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.04793155);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.01106289);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,-0.001011746);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.03324467);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.0473287);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.05716247);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.04477127);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.04065415);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.02779889);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.02019026);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.02170222);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.009068877);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.004444743);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.001392045);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1415.696);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,4.923899);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,14.19532);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,14.259);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,7.519624);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4.145623);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2.396733);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1.455329);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,0.8751267);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,0.4173658);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.1237206);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.0162515);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.07935768);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1349418);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.1348661);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.09762458);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.07262173);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.05477768);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.04283004);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.03317014);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.01610774);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.008581449);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.00219016);
   TT_stack_2_stack_2_stack_2->SetEntries(39717.27);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,11.20511);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,24.35576);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,25.85618);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,15.41129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7.87144);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,4.991584);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,2.627019);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,1.519958);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,0.547224);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,0.1645185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,0.02699133);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.5261416);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.8180601);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.8296139);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.6290819);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.4494367);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.3522363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.2589021);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.1962957);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.08678528);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.04740358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.01243506);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3619.027);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(1,0.08126517);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(2,0.1780214);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(3,0.3691673);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(4,0.3664055);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(5,0.4780353);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(6,0.6790701);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(7,0.7494899);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(8,0.5546175);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(9,0.07111122);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(10,0.007627788);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(11,0.001995508);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(1,0.01298309);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(2,0.02181183);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(3,0.02632985);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(4,0.02764168);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(5,0.03053334);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(6,0.0347182);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(7,0.03811849);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(8,0.032276);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(9,0.008695759);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(10,0.003262806);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(11,0.0007441905);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetEntries(1833.935);
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
   16.47819,
   39.44411,
   41.24249,
   23.64375,
   12.45436,
   7.658086,
   4.237754,
   2.518326,
   1.012521,
   0.299302,
   0.04223109};
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
   0.5331303,
   0.8304647,
   0.8424462,
   0.6381842,
   0.4570777,
   0.3575525,
   0.2631965,
   0.200258,
   0.08873211,
   0.04837868,
   0.01270296};
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
   0.5331303,
   0.8304647,
   0.8424462,
   0.6381842,
   0.4570777,
   0.3575525,
   0.2631965,
   0.200258,
   0.08873211,
   0.04837868,
   0.01270296};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetMinimum(0.02657531);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetMaximum(46.29048);
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
   Data__1048->SetBinContent(1,16.58);
   Data__1048->SetBinContent(2,42.32);
   Data__1048->SetBinContent(3,42.3);
   Data__1048->SetBinContent(4,24.76);
   Data__1048->SetBinContent(5,13.26);
   Data__1048->SetBinContent(6,7.68);
   Data__1048->SetBinContent(7,4.18);
   Data__1048->SetBinContent(8,2.84);
   Data__1048->SetBinContent(9,1.07);
   Data__1048->SetBinContent(10,0.34);
   Data__1048->SetBinContent(11,0.02);
   Data__1048->SetBinError(1,0.5758472);
   Data__1048->SetBinError(2,0.92);
   Data__1048->SetBinError(3,0.9197826);
   Data__1048->SetBinError(4,0.7037045);
   Data__1048->SetBinError(5,0.5149757);
   Data__1048->SetBinError(6,0.3919184);
   Data__1048->SetBinError(7,0.2891366);
   Data__1048->SetBinError(8,0.2383275);
   Data__1048->SetBinError(9,0.1034408);
   Data__1048->SetBinError(10,0.05830952);
   Data__1048->SetBinError(11,0.01);
   Data__1048->SetEntries(7803.668);
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
   hframe_copy__1049->SetMaximum(296.24);
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
   hframe_copy__1050->SetMaximum(296.24);
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
