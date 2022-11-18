void bH_pt_hplusCM()
{
//=========Macro generated from canvas: bH_pt_hplusCM/bH_pt_hplusCM
//=========  (Fri Nov 18 13:30:05 2022) by ROOT version 6.20/02
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
   0.02405793,
   0.01433381,
   0.01311342,
   0.01780923,
   0.02448817,
   0.03244359,
   0.04285679,
   0.05383649,
   0.05484879,
   0.08960769,
   0.162816};
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
   0.02405793,
   0.01433381,
   0.01311342,
   0.01780923,
   0.02448817,
   0.03244359,
   0.04285679,
   0.05383649,
   0.05484879,
   0.08960769,
   0.162816};
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
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetMinimum(0.8046208);
   Graph_Graph_Graph_BackgroundStatSystError363136353639->SetMaximum(1.195379);
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
   0.02405793,
   0.01433381,
   0.01311342,
   0.01780923,
   0.02448817,
   0.03244359,
   0.04285679,
   0.05383649,
   0.05484879,
   0.08960769,
   0.162816};
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
   0.02405793,
   0.01433381,
   0.01311342,
   0.01780923,
   0.02448817,
   0.03244359,
   0.04285679,
   0.05383649,
   0.05484879,
   0.08960769,
   0.162816};
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
   Graph_Graph_Graph_BackgroundStatError363236363640->SetMinimum(0.8046208);
   Graph_Graph_Graph_BackgroundStatError363236363640->SetMaximum(1.195379);
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
   1.017114,
   1.011567,
   1.005417,
   1.025619,
   1.002458,
   0.9638423,
   1.121222,
   0.9353167,
   0.8906525,
   1.176495,
   1.46874};
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
   0.02684997,
   0.01615666,
   0.01491677,
   0.02036626,
   0.02773925,
   0.03550359,
   0.05303196,
   0.06364024,
   0.06131505,
   0.1315361,
   0.2727382};
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
   0.02684997,
   0.01615666,
   0.01491677,
   0.02036626,
   0.02773925,
   0.03550359,
   0.05303196,
   0.06364024,
   0.06131505,
   0.1315361,
   0.2727382};
   grae = new TGraphAsymmErrors(11,Graph1_fx3641,Graph1_fy3641,Graph1_felx3641,Graph1_fehx3641,Graph1_fely3641,Graph1_fehy3641);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1363336373641 = new TH1F("Graph_Graph_Graph_Graph1363336373641","Graph",100,0,880);
   Graph_Graph_Graph_Graph1363336373641->SetMinimum(0.7381234);
   Graph_Graph_Graph_Graph1363336373641->SetMaximum(1.832692);
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
   bH_pt_hplusCM_1->Range(-125.9494,-2.104495,848.7342,3.120268);
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
   hframe__1046->SetMaximum(640.8886);
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
   StackedMCstackHist_stack_148_stack_149_stack_150->SetMinimum(0.0001065539);
   StackedMCstackHist_stack_148_stack_149_stack_150->SetMaximum(187.2921);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.9334509);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,2.547128);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,3.389008);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,2.051611);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1.15651);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.7122276);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.4280206);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.2651019);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.1309543);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.04785036);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.009468469);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.05300807);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.08060276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.1018777);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.08118344);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.05529766);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.04453726);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.0404853);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.02898837);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.0139104);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.009868304);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.00252508);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3995.364);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,12.97684);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,40.41037);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,45.81394);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,24.60724);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,12.76474);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,6.997025);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,4.032985);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2.494476);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1.199958);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.4398332);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.07363623);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.128018);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.2248998);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.2388662);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1742994);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1245675);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.09191674);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.06926767);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.05419446);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.02637351);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.01589335);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.004631751);
   TT_stack_2_stack_2_stack_2->SetEntries(123193.5);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,14.3068);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,34.546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,41.1675);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,22.79423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,12.1347);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,7.583705);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,3.512441);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,1.859179);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1.038138);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,0.1923024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,0.01561937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.6645538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,1.084927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,1.156263);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.8594759);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.623337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.4855317);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.3321641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.2409424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.1264722);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.057989);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.01518354);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4296.557);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(1,0.2692142);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(2,0.7391014);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(3,1.351068);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(4,1.53975);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(5,1.578394);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(6,2.036258);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(7,2.27338);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(8,1.720539);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(9,0.2317916);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(10,0.04710203);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinContent(11,0.003261377);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(1,0.02480049);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(2,0.04000747);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(3,0.05270235);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(4,0.05353385);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(5,0.05514387);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(6,0.05995613);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(7,0.06441631);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(8,0.05466417);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(9,0.01556529);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(10,0.006310555);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetBinError(11,0.001424022);
   ChargedHiggs_HplusTBHplusToTB_M_800__1047->SetEntries(6342.314);
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
   28.21708,
   77.5035,
   90.37045,
   49.45308,
   26.05595,
   15.29296,
   7.973446,
   4.618757,
   2.36905,
   0.679986,
   0.09872407};
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
   0.6788448,
   1.11092,
   1.185066,
   0.8807212,
   0.6380627,
   0.4961585,
   0.3417163,
   0.2486576,
   0.1299395,
   0.06093198,
   0.01607386};
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
   0.6788448,
   1.11092,
   1.185066,
   0.8807212,
   0.6380627,
   0.4961585,
   0.3417163,
   0.2486576,
   0.1299395,
   0.06093198,
   0.01607386};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetMinimum(0.07438519);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors363436383642->SetMaximum(100.7028);
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
   Data__1048->SetBinContent(1,28.7);
   Data__1048->SetBinContent(2,78.4);
   Data__1048->SetBinContent(3,90.86);
   Data__1048->SetBinContent(4,50.72);
   Data__1048->SetBinContent(5,26.12);
   Data__1048->SetBinContent(6,14.74);
   Data__1048->SetBinContent(7,8.94);
   Data__1048->SetBinContent(8,4.32);
   Data__1048->SetBinContent(9,2.11);
   Data__1048->SetBinContent(10,0.8);
   Data__1048->SetBinContent(11,0.145);
   Data__1048->SetBinError(1,0.7576279);
   Data__1048->SetBinError(2,1.252198);
   Data__1048->SetBinError(3,1.348036);
   Data__1048->SetBinError(4,1.007174);
   Data__1048->SetBinError(5,0.7227724);
   Data__1048->SetBinError(6,0.5429549);
   Data__1048->SetBinError(7,0.4228475);
   Data__1048->SetBinError(8,0.2939388);
   Data__1048->SetBinError(9,0.1452584);
   Data__1048->SetBinError(10,0.08944272);
   Data__1048->SetBinError(11,0.02692582);
   Data__1048->SetEntries(15371.34);
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
   hframe_copy__1049->SetMaximum(640.8886);
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
   hframe_copy__1050->SetMaximum(640.8886);
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
