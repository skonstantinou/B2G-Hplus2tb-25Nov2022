void HPlusMass()
{
//=========Macro generated from canvas: HPlusMass/HPlusMass
//=========  (Fri Nov 18 13:28:19 2022) by ROOT version 6.20/02
   TCanvas *HPlusMass = new TCanvas("HPlusMass", "HPlusMass",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   HPlusMass->SetHighLightColor(2);
   HPlusMass->Range(0,0,1,1);
   HPlusMass->SetFillColor(0);
   HPlusMass->SetBorderMode(0);
   HPlusMass->SetBorderSize(2);
   HPlusMass->SetTickx(1);
   HPlusMass->SetTicky(1);
   HPlusMass->SetLeftMargin(0.16);
   HPlusMass->SetRightMargin(0.05);
   HPlusMass->SetTopMargin(0.06);
   HPlusMass->SetBottomMargin(0.13);
   HPlusMass->SetFrameFillStyle(0);
   HPlusMass->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: HPlusMass_2
   TPad *HPlusMass_2 = new TPad("HPlusMass_2", "HPlusMass_2",0,0,1,0.304);
   HPlusMass_2->Draw();
   HPlusMass_2->cd();
   HPlusMass_2->Range(-506.3291,-0.428,2658.228,1.7);
   HPlusMass_2->SetFillColor(0);
   HPlusMass_2->SetFillStyle(4000);
   HPlusMass_2->SetBorderMode(0);
   HPlusMass_2->SetBorderSize(2);
   HPlusMass_2->SetTickx(1);
   HPlusMass_2->SetTicky(1);
   HPlusMass_2->SetLeftMargin(0.16);
   HPlusMass_2->SetRightMargin(0.05);
   HPlusMass_2->SetTopMargin(0);
   HPlusMass_2->SetBottomMargin(0.3421053);
   HPlusMass_2->SetFrameFillStyle(0);
   HPlusMass_2->SetFrameBorderMode(0);
   HPlusMass_2->SetFrameFillStyle(0);
   HPlusMass_2->SetFrameBorderMode(0);
   
   TH1F *hframe__624 = new TH1F("hframe__624","",1000,0,2500);
   hframe__624->SetMinimum(0.3);
   hframe__624->SetMaximum(1.7);
   hframe__624->SetDirectory(0);
   hframe__624->SetStats(0);
   hframe__624->SetLineStyle(0);
   hframe__624->SetMarkerStyle(20);
   hframe__624->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__624->GetXaxis()->SetNdivisions(8);
   hframe__624->GetXaxis()->SetLabelFont(43);
   hframe__624->GetXaxis()->SetLabelOffset(0.007);
   hframe__624->GetXaxis()->SetLabelSize(27);
   hframe__624->GetXaxis()->SetTitleSize(33);
   hframe__624->GetXaxis()->SetTitleOffset(2.960526);
   hframe__624->GetXaxis()->SetTitleFont(43);
   hframe__624->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__624->GetYaxis()->SetNdivisions(505);
   hframe__624->GetYaxis()->SetLabelFont(43);
   hframe__624->GetYaxis()->SetLabelOffset(0.007);
   hframe__624->GetYaxis()->SetLabelSize(21);
   hframe__624->GetYaxis()->SetTitleSize(33);
   hframe__624->GetYaxis()->SetTitleOffset(1.5625);
   hframe__624->GetYaxis()->SetTitleFont(43);
   hframe__624->GetZaxis()->SetLabelFont(43);
   hframe__624->GetZaxis()->SetLabelOffset(0.007);
   hframe__624->GetZaxis()->SetLabelSize(27);
   hframe__624->GetZaxis()->SetTitleSize(33);
   hframe__624->GetZaxis()->SetTitleOffset(1);
   hframe__624->GetZaxis()->SetTitleFont(43);
   hframe__624->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3363[27] = {
   80,
   180,
   220,
   260,
   300,
   340,
   380,
   420,
   460,
   500,
   540,
   580,
   640,
   720,
   800,
   880,
   960,
   1040,
   1120,
   1200,
   1280,
   1360,
   1450,
   1550,
   1650,
   1850,
   2250};
   Double_t BackgroundStatSystError_fy3363[27] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3363[27] = {
   80,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   50,
   50,
   50,
   150,
   250};
   Double_t BackgroundStatSystError_fely3363[27] = {
   0.2737252,
   0.1333469,
   0.1198782,
   0.07081603,
   0.05460188,
   0.04757945,
   0.04740891,
   0.04878549,
   0.05123152,
   0.05474136,
   0.06131707,
   0.06448075,
   0.05014274,
   0.05995557,
   0.06873046,
   0.07958541,
   0.09775079,
   0.1234724,
   0.136056,
   0.1390347,
   0.191661,
   0.263167,
   0.2886534,
   0.2548657,
   0.28912,
   0.2907655,
   0.3240186};
   Double_t BackgroundStatSystError_fehx3363[27] = {
   80,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   50,
   50,
   50,
   150,
   250};
   Double_t BackgroundStatSystError_fehy3363[27] = {
   0.2737252,
   0.1333469,
   0.1198782,
   0.07081603,
   0.05460188,
   0.04757945,
   0.04740891,
   0.04878549,
   0.05123152,
   0.05474136,
   0.06131707,
   0.06448075,
   0.05014274,
   0.05995557,
   0.06873046,
   0.07958541,
   0.09775079,
   0.1234724,
   0.136056,
   0.1390347,
   0.191661,
   0.263167,
   0.2886534,
   0.2548657,
   0.28912,
   0.2907655,
   0.3240186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(27,BackgroundStatSystError_fx3363,BackgroundStatSystError_fy3363,BackgroundStatSystError_felx3363,BackgroundStatSystError_fehx3363,BackgroundStatSystError_fely3363,BackgroundStatSystError_fehy3363);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1301;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError335533593363 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError335533593363","Graph",100,0,2750);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMinimum(0.6111777);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMaximum(1.388822);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError335533593363);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3364[27] = {
   80,
   180,
   220,
   260,
   300,
   340,
   380,
   420,
   460,
   500,
   540,
   580,
   640,
   720,
   800,
   880,
   960,
   1040,
   1120,
   1200,
   1280,
   1360,
   1450,
   1550,
   1650,
   1850,
   2250};
   Double_t BackgroundStatError_fy3364[27] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3364[27] = {
   80,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   50,
   50,
   50,
   150,
   250};
   Double_t BackgroundStatError_fely3364[27] = {
   0.2737252,
   0.1333469,
   0.1198782,
   0.07081603,
   0.05460188,
   0.04757945,
   0.04740891,
   0.04878549,
   0.05123152,
   0.05474136,
   0.06131707,
   0.06448075,
   0.05014274,
   0.05995557,
   0.06873046,
   0.07958541,
   0.09775079,
   0.1234724,
   0.136056,
   0.1390347,
   0.191661,
   0.263167,
   0.2886534,
   0.2548657,
   0.28912,
   0.2907655,
   0.3240186};
   Double_t BackgroundStatError_fehx3364[27] = {
   80,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   50,
   50,
   50,
   150,
   250};
   Double_t BackgroundStatError_fehy3364[27] = {
   0.2737252,
   0.1333469,
   0.1198782,
   0.07081603,
   0.05460188,
   0.04757945,
   0.04740891,
   0.04878549,
   0.05123152,
   0.05474136,
   0.06131707,
   0.06448075,
   0.05014274,
   0.05995557,
   0.06873046,
   0.07958541,
   0.09775079,
   0.1234724,
   0.136056,
   0.1390347,
   0.191661,
   0.263167,
   0.2886534,
   0.2548657,
   0.28912,
   0.2907655,
   0.3240186};
   grae = new TGraphAsymmErrors(27,BackgroundStatError_fx3364,BackgroundStatError_fy3364,BackgroundStatError_felx3364,BackgroundStatError_fehx3364,BackgroundStatError_fely3364,BackgroundStatError_fehy3364);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1300;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError335633603364 = new TH1F("Graph_Graph_Graph_BackgroundStatError335633603364","Graph",100,0,2750);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMinimum(0.6111777);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMaximum(1.388822);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError335633603364->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError335633603364->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError335633603364);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx90[2] = {
   0,
   2500};
   Double_t Graph0_fy90[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx90,Graph0_fy90);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0888990 = new TH1F("Graph_Graph_Graph_Graph0888990","Graph",100,0,2750);
   Graph_Graph_Graph_Graph0888990->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0888990->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0888990->SetDirectory(0);
   Graph_Graph_Graph_Graph0888990->SetStats(0);
   Graph_Graph_Graph_Graph0888990->SetLineStyle(0);
   Graph_Graph_Graph_Graph0888990->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0888990->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0888990->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0888990->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0888990->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0888990->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0888990->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0888990->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0888990->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0888990->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0888990->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0888990->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0888990->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0888990->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0888990->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0888990->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0888990->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0888990->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0888990->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0888990->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0888990);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3365[27] = {
   80,
   180,
   220,
   260,
   300,
   340,
   380,
   420,
   460,
   500,
   540,
   580,
   640,
   720,
   800,
   880,
   960,
   1040,
   1120,
   1200,
   1280,
   1360,
   1450,
   1550,
   1650,
   1850,
   2250};
   Double_t Graph1_fy3365[27] = {
   1.898641,
   0.7339745,
   0.9849526,
   0.8846122,
   0.9070332,
   0.8881785,
   1.05175,
   1.017662,
   1.065264,
   1.039503,
   1.183106,
   1.101404,
   1.066803,
   1.081072,
   0.9844271,
   0.9452639,
   0.9519176,
   1.042763,
   0.9744038,
   0.6711418,
   0.9327265,
   1.862472,
   1.513892,
   1.106185,
   0.8263527,
   1.88858,
   0.9705931};
   Double_t Graph1_felx3365[27] = {
   80,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   50,
   50,
   50,
   150,
   250};
   Double_t Graph1_fely3365[27] = {
   0.28954,
   0.08475207,
   0.08774654,
   0.04952878,
   0.03795816,
   0.03312347,
   0.03567818,
   0.03609277,
   0.03889794,
   0.04108995,
   0.04912582,
   0.04990938,
   0.03802742,
   0.04564291,
   0.05063347,
   0.0568982,
   0.07036778,
   0.09289673,
   0.09793127,
   0.08455591,
   0.1360521,
   0.2746065,
   0.2488823,
   0.2054134,
   0.1947732,
   0.3063681,
   0.228771};
   Double_t Graph1_fehx3365[27] = {
   80,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   50,
   50,
   50,
   150,
   250};
   Double_t Graph1_fehy3365[27] = {
   0.28954,
   0.08475207,
   0.08774654,
   0.04952878,
   0.03795816,
   0.03312347,
   0.03567818,
   0.03609277,
   0.03889794,
   0.04108995,
   0.04912582,
   0.04990938,
   0.03802742,
   0.04564291,
   0.05063347,
   0.0568982,
   0.07036778,
   0.09289673,
   0.09793127,
   0.08455591,
   0.1360521,
   0.2746065,
   0.2488823,
   0.2054134,
   0.1947732,
   0.3063681,
   0.228771};
   grae = new TGraphAsymmErrors(27,Graph1_fx3365,Graph1_fy3365,Graph1_felx3365,Graph1_fehx3365,Graph1_fely3365,Graph1_fehy3365);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1335733613365 = new TH1F("Graph_Graph_Graph_Graph1335733613365","Graph",100,0,2750);
   Graph_Graph_Graph_Graph1335733613365->SetMinimum(0.4257496);
   Graph_Graph_Graph_Graph1335733613365->SetMaximum(2.355784);
   Graph_Graph_Graph_Graph1335733613365->SetDirectory(0);
   Graph_Graph_Graph_Graph1335733613365->SetStats(0);
   Graph_Graph_Graph_Graph1335733613365->SetLineStyle(0);
   Graph_Graph_Graph_Graph1335733613365->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1335733613365->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1335733613365->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1335733613365->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1335733613365->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1335733613365->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1335733613365->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1335733613365->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1335733613365->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1335733613365->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1335733613365->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1335733613365->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1335733613365->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1335733613365->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1335733613365->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1335733613365->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1335733613365->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1335733613365->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1335733613365->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1335733613365->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1335733613365->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1335733613365);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__625 = new TH1F("hframe_copy__625","",1000,0,2500);
   hframe_copy__625->SetMinimum(0.3);
   hframe_copy__625->SetMaximum(1.7);
   hframe_copy__625->SetDirectory(0);
   hframe_copy__625->SetStats(0);
   hframe_copy__625->SetLineStyle(0);
   hframe_copy__625->SetMarkerStyle(20);
   hframe_copy__625->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__625->GetXaxis()->SetNdivisions(8);
   hframe_copy__625->GetXaxis()->SetLabelFont(43);
   hframe_copy__625->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__625->GetXaxis()->SetLabelSize(27);
   hframe_copy__625->GetXaxis()->SetTitleSize(33);
   hframe_copy__625->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__625->GetXaxis()->SetTitleFont(43);
   hframe_copy__625->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__625->GetYaxis()->SetNdivisions(505);
   hframe_copy__625->GetYaxis()->SetLabelFont(43);
   hframe_copy__625->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__625->GetYaxis()->SetLabelSize(21);
   hframe_copy__625->GetYaxis()->SetTitleSize(33);
   hframe_copy__625->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__625->GetYaxis()->SetTitleFont(43);
   hframe_copy__625->GetZaxis()->SetLabelFont(43);
   hframe_copy__625->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__625->GetZaxis()->SetLabelSize(27);
   hframe_copy__625->GetZaxis()->SetTitleSize(33);
   hframe_copy__625->GetZaxis()->SetTitleOffset(1);
   hframe_copy__625->GetZaxis()->SetTitleFont(43);
   hframe_copy__625->Draw("sameaxis");
   HPlusMass_2->Modified();
   HPlusMass->cd();
  
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
   HPlusMass->cd();
  
// ------------>Primitives in pad: HPlusMass_1
   TPad *HPlusMass_1 = new TPad("HPlusMass_1", "HPlusMass_1",0,0.2897959,1,1);
   HPlusMass_1->Draw();
   HPlusMass_1->cd();
   HPlusMass_1->Range(-506.3291,-2.090914,2658.228,2.454801);
   HPlusMass_1->SetFillColor(0);
   HPlusMass_1->SetFillStyle(4000);
   HPlusMass_1->SetBorderMode(0);
   HPlusMass_1->SetBorderSize(2);
   HPlusMass_1->SetLogy();
   HPlusMass_1->SetTickx(1);
   HPlusMass_1->SetTicky(1);
   HPlusMass_1->SetLeftMargin(0.16);
   HPlusMass_1->SetRightMargin(0.05);
   HPlusMass_1->SetTopMargin(0.06);
   HPlusMass_1->SetBottomMargin(0.02);
   HPlusMass_1->SetFrameFillStyle(0);
   HPlusMass_1->SetFrameBorderMode(0);
   HPlusMass_1->SetFrameFillStyle(0);
   HPlusMass_1->SetFrameBorderMode(0);
   
   TH1F *hframe__626 = new TH1F("hframe__626","",1000,0,2500);
   hframe__626->SetMinimum(0.01);
   hframe__626->SetMaximum(152.075);
   hframe__626->SetDirectory(0);
   hframe__626->SetStats(0);
   hframe__626->SetLineStyle(0);
   hframe__626->SetMarkerStyle(20);
   hframe__626->GetXaxis()->SetNdivisions(8);
   hframe__626->GetXaxis()->SetLabelFont(43);
   hframe__626->GetXaxis()->SetLabelOffset(0.007);
   hframe__626->GetXaxis()->SetLabelSize(0);
   hframe__626->GetXaxis()->SetTitleSize(0);
   hframe__626->GetXaxis()->SetTitleOffset(0.9);
   hframe__626->GetXaxis()->SetTitleFont(43);
   hframe__626->GetYaxis()->SetTitle("< Events / 40-500 GeV >");
   hframe__626->GetYaxis()->SetLabelFont(43);
   hframe__626->GetYaxis()->SetLabelOffset(0.007);
   hframe__626->GetYaxis()->SetLabelSize(27);
   hframe__626->GetYaxis()->SetTitleSize(33);
   hframe__626->GetYaxis()->SetTitleOffset(1.5625);
   hframe__626->GetYaxis()->SetTitleFont(43);
   hframe__626->GetZaxis()->SetLabelFont(43);
   hframe__626->GetZaxis()->SetLabelOffset(0.007);
   hframe__626->GetZaxis()->SetLabelSize(27);
   hframe__626->GetZaxis()->SetTitleSize(33);
   hframe__626->GetZaxis()->SetTitleOffset(1);
   hframe__626->GetZaxis()->SetTitleFont(43);
   hframe__626->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis355[28] = {0, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 680, 760, 840, 920, 1000, 1080, 1160, 1240, 1320, 1400, 1500, 1600, 1700, 2000, 2500}; 
   
   TH1F *StackedMCstackHist_stack_88_stack_89_stack_90 = new TH1F("StackedMCstackHist_stack_88_stack_89_stack_90","StackedMCstackHist",27, xAxis355);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMinimum(0.008262418);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMaximum(33.04967);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetDirectory(0);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetStats(0);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetLineStyle(0);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMarkerStyle(20);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_88_stack_89_stack_90->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_88_stack_89_stack_90);
   
   Double_t xAxis356[28] = {0, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 680, 760, 840, 920, 1000, 1080, 1160, 1240, 1320, 1400, 1500, 1600, 1700, 2000, 2500}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_HPlusMassInclusive",27, xAxis356);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.000975199);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.03592637);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.1273448);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.08210254);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.1881709);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.2454947);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.3429397);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.2658777);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.2300497);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.1751256);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.1342175);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.1854899);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.09569547);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.06870291);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.0678011);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.04682357);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.04566138);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.03401728);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.01744775);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.0125405);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.01217435);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.005227915);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.001420419);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.003698481);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,-0.0007216653);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.001040049);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.0007183951);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.0004975771);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.009916865);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.05381394);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.01782849);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.04810183);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.03736332);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.04989058);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.04948395);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.04885383);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.02502491);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.02498425);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.04662391);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.01363354);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.01211234);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.01014566);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.01091356);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.009482681);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.01852571);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.006624981);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.005492717);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.004456989);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.002717497);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.001203066);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.002087058);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.001466718);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.0005300573);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.0004816837);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(311.9129);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,200);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis357[28] = {0, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 680, 760, 840, 920, 1000, 1080, 1160, 1240, 1320, 1400, 1500, 1600, 1700, 2000, 2500}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_HPlusMassInclusive",27, xAxis357);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.03794689);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.5162775);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,0.7230288);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1.815017);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2.976305);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3.605731);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,3.706145);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3.268792);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2.833149);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2.377277);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2.007847);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1.608056);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1.235412);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.8712656);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.6129176);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.4048819);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.3366569);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.2252767);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.1545659);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.1315487);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.07402445);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.05855857);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.03890053);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.03446834);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.02269338);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.01182054);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.002457905);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.003735433);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.02794856);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.03341652);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.05254989);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.06695542);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.07412778);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.07563188);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.07091987);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.06602735);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.06052672);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.05560769);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.0499228);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.03079168);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.02600937);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.02160736);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.01766128);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.0160829);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.01344046);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.01092624);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.01000523);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.007417936);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.006646511);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.004907906);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.004667254);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.003833474);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.00158629);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.0005199732);
   TT_stack_2_stack_2_stack_2->SetEntries(20873.47);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,200);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis358[28] = {0, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 680, 760, 840, 920, 1000, 1080, 1160, 1240, 1320, 1400, 1500, 1600, 1700, 2000, 2500}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_HPlusMassInclusive",27, xAxis358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,0.1026265);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2.002381);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,2.34775);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7.11813);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,12.57365);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,16.38682);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,16.60696);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,15.99538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,14.53807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,12.83957);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,10.11381);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,9.260527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,7.890371);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,5.546647);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4.119028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3.198069);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2.020726);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1.251116);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1.097994);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1.029284);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,0.543675);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.2449429);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.2040822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.2239954);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.195853);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.05420921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.03391442);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.03856173);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.3393526);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.3781161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.6360079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.8553673);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.9593304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.9750801);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.9488506);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.8979914);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.8400282);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.7490173);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.7094941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.4611624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.387849);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.329024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.2897259);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.2341563);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.1850841);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.172319);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.1627398);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.1204116);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.08092947);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.0703666);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.06662028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.06284357);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.01942973);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.01199716);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(2910.499);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,200);
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
   Double_t xAxis359[28] = {0, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 680, 760, 840, 920, 1000, 1080, 1160, 1240, 1320, 1400, 1500, 1600, 1700, 2000, 2500}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__627 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__627","h_SR_HPlusMassInclusive",27, xAxis359);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(1,-0.0004865883);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(2,0.001824947);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(3,0.003154035);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(4,0.005978782);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(5,0.01521245);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(6,-0.002941754);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(7,0.005533767);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(8,0.007756455);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(9,0.005225756);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(10,0.006236962);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(11,0.006841158);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(12,0.009960192);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(13,0.01446373);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(14,0.01339559);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(15,0.00888711);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(16,0.001251577);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(17,0.004455405);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(18,-0.0006689616);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(19,7.066971e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(20,0.0006946461);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(21,-0.0002512536);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(22,0.001018743);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(23,-0.000525038);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(24,0.000327072);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(26,-1.727986e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(1,0.0002827147);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(2,0.002267926);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(3,0.002152923);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(4,0.003824504);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(5,0.004322253);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(6,0.004069082);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(7,0.004512424);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(8,0.004462464);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(9,0.004908654);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(10,0.00561041);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(11,0.004858326);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(12,0.006273718);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(13,0.004909735);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(14,0.004514928);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(15,0.003749861);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(16,0.003220581);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(17,0.002071428);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(18,0.001383413);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(19,0.0009527042);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(20,0.000766211);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(21,0.0002512536);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(22,0.0005920894);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(23,0.0003760454);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(24,0.0005553286);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(26,0.0001481149);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetEntries(38.96178);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3366[27] = {
   80,
   180,
   220,
   260,
   300,
   340,
   380,
   420,
   460,
   500,
   540,
   580,
   640,
   720,
   800,
   880,
   960,
   1040,
   1120,
   1200,
   1280,
   1360,
   1450,
   1550,
   1650,
   1850,
   2250};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3366[27] = {
   0.1415486,
   2.554585,
   3.198124,
   9.015249,
   15.73812,
   20.23805,
   20.65604,
   19.53005,
   17.60127,
   15.39197,
   12.25587,
   11.05407,
   9.221478,
   6.486615,
   4.799746,
   3.649775,
   2.403044,
   1.51041,
   1.270007,
   1.173374,
   0.6298738,
   0.3087294,
   0.2444031,
   0.2621622,
   0.2178247,
   0.06706979,
   0.03709072};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3366[27] = {
   80,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   50,
   50,
   50,
   150,
   250};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3366[27] = {
   0.03874542,
   0.340646,
   0.3833854,
   0.6384242,
   0.8593311,
   0.9629152,
   0.9792806,
   0.9527831,
   0.9017399,
   0.8425776,
   0.7514941,
   0.7127748,
   0.4623902,
   0.3889087,
   0.3298888,
   0.2904688,
   0.2348995,
   0.1864939,
   0.1727921,
   0.1631396,
   0.1207222,
   0.0812474,
   0.07054781,
   0.06681617,
   0.06297746,
   0.01950158,
   0.01201808};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3366[27] = {
   80,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   20,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   50,
   50,
   50,
   150,
   250};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3366[27] = {
   0.03874542,
   0.340646,
   0.3833854,
   0.6384242,
   0.8593311,
   0.9629152,
   0.9792806,
   0.9527831,
   0.9017399,
   0.8425776,
   0.7514941,
   0.7127748,
   0.4623902,
   0.3889087,
   0.3298888,
   0.2904688,
   0.2348995,
   0.1864939,
   0.1727921,
   0.1631396,
   0.1207222,
   0.0812474,
   0.07054781,
   0.06681617,
   0.06297746,
   0.01950158,
   0.01201808};
   grae = new TGraphAsymmErrors(27,BkgSum-SR-Inclusive_sum_errors_fx3366,BkgSum-SR-Inclusive_sum_errors_fy3366,BkgSum-SR-Inclusive_sum_errors_felx3366,BkgSum-SR-Inclusive_sum_errors_fehx3366,BkgSum-SR-Inclusive_sum_errors_fely3366,BkgSum-SR-Inclusive_sum_errors_fehy3366);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1299;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366","Graph",100,0,2750);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMinimum(0.02256538);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMaximum(23.79635);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors335833623366);
   
   grae->Draw("e2 ");
   Double_t xAxis360[28] = {0, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 680, 760, 840, 920, 1000, 1080, 1160, 1240, 1320, 1400, 1500, 1600, 1700, 2000, 2500}; 
   
   TH1F *Data__628 = new TH1F("Data__628","h_SR_HPlusMassInclusive",27, xAxis360);
   Data__628->SetBinContent(1,0.26875);
   Data__628->SetBinContent(2,1.875);
   Data__628->SetBinContent(3,3.15);
   Data__628->SetBinContent(4,7.975);
   Data__628->SetBinContent(5,14.275);
   Data__628->SetBinContent(6,17.975);
   Data__628->SetBinContent(7,21.725);
   Data__628->SetBinContent(8,19.875);
   Data__628->SetBinContent(9,18.75);
   Data__628->SetBinContent(10,16);
   Data__628->SetBinContent(11,14.5);
   Data__628->SetBinContent(12,12.175);
   Data__628->SetBinContent(13,9.8375);
   Data__628->SetBinContent(14,7.0125);
   Data__628->SetBinContent(15,4.725);
   Data__628->SetBinContent(16,3.45);
   Data__628->SetBinContent(17,2.2875);
   Data__628->SetBinContent(18,1.575);
   Data__628->SetBinContent(19,1.2375);
   Data__628->SetBinContent(20,0.7875);
   Data__628->SetBinContent(21,0.5875);
   Data__628->SetBinContent(22,0.575);
   Data__628->SetBinContent(23,0.37);
   Data__628->SetBinContent(24,0.29);
   Data__628->SetBinContent(25,0.18);
   Data__628->SetBinContent(26,0.1266667);
   Data__628->SetBinContent(27,0.036);
   Data__628->SetBinError(1,0.04098399);
   Data__628->SetBinError(2,0.2165064);
   Data__628->SetBinError(3,0.2806243);
   Data__628->SetBinError(4,0.4465143);
   Data__628->SetBinError(5,0.5973902);
   Data__628->SetBinError(6,0.6703544);
   Data__628->SetBinError(7,0.7369701);
   Data__628->SetBinError(8,0.7048936);
   Data__628->SetBinError(9,0.6846532);
   Data__628->SetBinError(10,0.6324555);
   Data__628->SetBinError(11,0.6020797);
   Data__628->SetBinError(12,0.5517019);
   Data__628->SetBinError(13,0.350669);
   Data__628->SetBinError(14,0.296068);
   Data__628->SetBinError(15,0.2430278);
   Data__628->SetBinError(16,0.2076656);
   Data__628->SetBinError(17,0.1690969);
   Data__628->SetBinError(18,0.1403122);
   Data__628->SetBinError(19,0.1243734);
   Data__628->SetBinError(20,0.09921567);
   Data__628->SetBinError(21,0.08569568);
   Data__628->SetBinError(22,0.08477912);
   Data__628->SetBinError(23,0.06082763);
   Data__628->SetBinError(24,0.05385165);
   Data__628->SetBinError(25,0.04242641);
   Data__628->SetBinError(26,0.02054805);
   Data__628->SetBinError(27,0.008485281);
   Data__628->SetEntries(8009.53);
   Data__628->SetDirectory(0);
   Data__628->SetFillStyle(3001);
   Data__628->SetLineWidth(2);
   Data__628->SetMarkerStyle(20);
   Data__628->SetMarkerSize(1.2);
   Data__628->GetXaxis()->SetRange(1,200);
   Data__628->GetXaxis()->SetLabelFont(42);
   Data__628->GetXaxis()->SetTitleOffset(1);
   Data__628->GetXaxis()->SetTitleFont(42);
   Data__628->GetYaxis()->SetLabelFont(42);
   Data__628->GetYaxis()->SetTitleFont(42);
   Data__628->GetZaxis()->SetLabelFont(42);
   Data__628->GetZaxis()->SetTitleOffset(1);
   Data__628->GetZaxis()->SetTitleFont(42);
   Data__628->Draw("EP same");
   
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

   ci = 1299;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1299;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__629 = new TH1F("hframe_copy__629","",1000,0,2500);
   hframe_copy__629->SetMinimum(0.01);
   hframe_copy__629->SetMaximum(152.075);
   hframe_copy__629->SetDirectory(0);
   hframe_copy__629->SetStats(0);
   hframe_copy__629->SetLineStyle(0);
   hframe_copy__629->SetMarkerStyle(20);
   hframe_copy__629->GetXaxis()->SetNdivisions(8);
   hframe_copy__629->GetXaxis()->SetLabelFont(43);
   hframe_copy__629->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__629->GetXaxis()->SetLabelSize(0);
   hframe_copy__629->GetXaxis()->SetTitleSize(0);
   hframe_copy__629->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__629->GetXaxis()->SetTitleFont(43);
   hframe_copy__629->GetYaxis()->SetTitle("< Events / 40-500 GeV >");
   hframe_copy__629->GetYaxis()->SetLabelFont(43);
   hframe_copy__629->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__629->GetYaxis()->SetLabelSize(27);
   hframe_copy__629->GetYaxis()->SetTitleSize(33);
   hframe_copy__629->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__629->GetYaxis()->SetTitleFont(43);
   hframe_copy__629->GetZaxis()->SetLabelFont(43);
   hframe_copy__629->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__629->GetZaxis()->SetLabelSize(27);
   hframe_copy__629->GetZaxis()->SetTitleSize(33);
   hframe_copy__629->GetZaxis()->SetTitleOffset(1);
   hframe_copy__629->GetZaxis()->SetTitleFont(43);
   hframe_copy__629->Draw("sameaxis");
   
   TH1F *hframe_copy__630 = new TH1F("hframe_copy__630","",1000,0,2500);
   hframe_copy__630->SetMinimum(0.01);
   hframe_copy__630->SetMaximum(152.075);
   hframe_copy__630->SetDirectory(0);
   hframe_copy__630->SetStats(0);
   hframe_copy__630->SetLineStyle(0);
   hframe_copy__630->SetMarkerStyle(20);
   hframe_copy__630->GetXaxis()->SetNdivisions(8);
   hframe_copy__630->GetXaxis()->SetLabelFont(43);
   hframe_copy__630->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__630->GetXaxis()->SetLabelSize(0);
   hframe_copy__630->GetXaxis()->SetTitleSize(0);
   hframe_copy__630->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__630->GetXaxis()->SetTitleFont(43);
   hframe_copy__630->GetYaxis()->SetTitle("< Events / 40-500 GeV >");
   hframe_copy__630->GetYaxis()->SetLabelFont(43);
   hframe_copy__630->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__630->GetYaxis()->SetLabelSize(27);
   hframe_copy__630->GetYaxis()->SetTitleSize(33);
   hframe_copy__630->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__630->GetYaxis()->SetTitleFont(43);
   hframe_copy__630->GetZaxis()->SetLabelFont(43);
   hframe_copy__630->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__630->GetZaxis()->SetLabelSize(27);
   hframe_copy__630->GetZaxis()->SetTitleSize(33);
   hframe_copy__630->GetZaxis()->SetTitleOffset(1);
   hframe_copy__630->GetZaxis()->SetTitleFont(43);
   hframe_copy__630->Draw("sameaxis");
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
   HPlusMass_1->Modified();
   HPlusMass->cd();
   HPlusMass->Modified();
   HPlusMass->cd();
   HPlusMass->SetSelected(HPlusMass);
}
