void HPlusMass()
{
//=========Macro generated from canvas: HPlusMass/HPlusMass
//=========  (Fri Nov 18 13:29:06 2022) by ROOT version 6.20/02
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
   0.1122723,
   0.0574609,
   0.05562907,
   0.03520288,
   0.02797557,
   0.02488276,
   0.02508087,
   0.02632009,
   0.02911738,
   0.03154774,
   0.03464514,
   0.03790427,
   0.02988172,
   0.03551205,
   0.04188655,
   0.04944227,
   0.05625891,
   0.06530416,
   0.07710858,
   0.08543809,
   0.0942594,
   0.118505,
   0.1206335,
   0.1524579,
   0.1975478,
   0.1316174,
   0.1514133};
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
   0.1122723,
   0.0574609,
   0.05562907,
   0.03520288,
   0.02797557,
   0.02488276,
   0.02508087,
   0.02632009,
   0.02911738,
   0.03154774,
   0.03464514,
   0.03790427,
   0.02988172,
   0.03551205,
   0.04188655,
   0.04944227,
   0.05625891,
   0.06530416,
   0.07710858,
   0.08543809,
   0.0942594,
   0.118505,
   0.1206335,
   0.1524579,
   0.1975478,
   0.1316174,
   0.1514133};
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
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMinimum(0.7629427);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMaximum(1.237057);
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
   0.1122723,
   0.0574609,
   0.05562907,
   0.03520288,
   0.02797557,
   0.02488276,
   0.02508087,
   0.02632009,
   0.02911738,
   0.03154774,
   0.03464514,
   0.03790427,
   0.02988172,
   0.03551205,
   0.04188655,
   0.04944227,
   0.05625891,
   0.06530416,
   0.07710858,
   0.08543809,
   0.0942594,
   0.118505,
   0.1206335,
   0.1524579,
   0.1975478,
   0.1316174,
   0.1514133};
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
   0.1122723,
   0.0574609,
   0.05562907,
   0.03520288,
   0.02797557,
   0.02488276,
   0.02508087,
   0.02632009,
   0.02911738,
   0.03154774,
   0.03464514,
   0.03790427,
   0.02988172,
   0.03551205,
   0.04188655,
   0.04944227,
   0.05625891,
   0.06530416,
   0.07710858,
   0.08543809,
   0.0942594,
   0.118505,
   0.1206335,
   0.1524579,
   0.1975478,
   0.1316174,
   0.1514133};
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
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMinimum(0.7629427);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMaximum(1.237057);
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
   0.9232221,
   0.7458282,
   0.9420975,
   0.9106722,
   0.9466904,
   0.9603134,
   1.049949,
   0.9824828,
   1.030609,
   1.01989,
   1.0299,
   1.041711,
   1.002636,
   1.021071,
   1.055933,
   1.075996,
   1.094289,
   0.9999544,
   0.9319781,
   0.9828013,
   1.093195,
   1.227476,
   1.008087,
   0.8577335,
   0.9930655,
   1.459615,
   0.7411504};
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
   0.1222838,
   0.05859779,
   0.06158684,
   0.03897317,
   0.03087764,
   0.02682063,
   0.02800113,
   0.02791189,
   0.03140408,
   0.03371652,
   0.03740767,
   0.04061012,
   0.03183371,
   0.03735903,
   0.04514846,
   0.05483785,
   0.06265882,
   0.07035654,
   0.0802119,
   0.08971707,
   0.1061805,
   0.1477707,
   0.1312417,
   0.1429556,
   0.2070685,
   0.1824519,
   0.1426344};
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
   0.1222838,
   0.05859779,
   0.06158684,
   0.03897317,
   0.03087764,
   0.02682063,
   0.02800113,
   0.02791189,
   0.03140408,
   0.03371652,
   0.03740767,
   0.04061012,
   0.03183371,
   0.03735903,
   0.04514846,
   0.05483785,
   0.06265882,
   0.07035654,
   0.0802119,
   0.08971707,
   0.1061805,
   0.1477707,
   0.1312417,
   0.1429556,
   0.2070685,
   0.1824519,
   0.1426344};
   grae = new TGraphAsymmErrors(27,Graph1_fx3365,Graph1_fy3365,Graph1_felx3365,Graph1_fehx3365,Graph1_fely3365,Graph1_fehy3365);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1335733613365 = new TH1F("Graph_Graph_Graph_Graph1335733613365","Graph",100,0,2750);
   Graph_Graph_Graph_Graph1335733613365->SetMinimum(0.4941608);
   Graph_Graph_Graph_Graph1335733613365->SetMaximum(1.746422);
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
   HPlusMass_1->Range(-506.3291,-2.095457,2658.228,2.677394);
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
   hframe__626->SetMaximum(246.05);
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
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMinimum(9.784067e-05);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMaximum(66.89367);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.01058701);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.1097103);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.1285662);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.2981452);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.5902179);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.8310236);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.7435223);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.5764016);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.5095163);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.5327302);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.4206958);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.3729222);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.2827737);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.1916161);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.1240131);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.08120951);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.1004035);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.06421013);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.02861978);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.02476128);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.02229882);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.02220921);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.0163809);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.007519485);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.003427729);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.002253839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.0009055103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.003590398);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.02870746);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.02369252);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.03687189);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.05334367);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.08421662);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.05964443);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.05448732);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.05097577);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.05268707);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.04362334);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.0449173);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.03254545);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.02119761);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.01565984);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.01267065);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.02566634);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.01222434);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.008295619);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.007479749);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.005991827);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.006920479);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.00514718);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.00309609);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.00180205);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.001178026);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.0005255219);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1180.371);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.1252451);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,2.324048);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2.400313);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,6.448347);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,10.37492);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,12.23268);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,11.44081);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,9.713318);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,7.533254);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,6.043229);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,4.879935);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3.978258);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,3.012595);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2.072736);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1.403869);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1.088389);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.7307853);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.5579785);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.4336011);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.3174798);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.2226429);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.1604356);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.128999);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.0804004);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.0628318);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.03975251);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.01093478);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.00670083);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.05817719);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.05901106);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.09681131);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1227747);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.134154);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1296305);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.1200205);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.1057488);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.09464304);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.08518954);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.07713636);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.04748445);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.03943504);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.0325229);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.02855033);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.0234487);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.02029035);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.01792304);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.01532382);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.01300175);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.01101134);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.008769527);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.006970097);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.006055632);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.002827777);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.00110614);
   TT_stack_2_stack_2_stack_2->SetEntries(63434.55);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,0.2500446);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2.996447);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3.680669);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8.242435);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,13.85818);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,20.31082);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,21.29349);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,21.23755);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,18.08256);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,15.85294);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,13.09921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,11.44015);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,9.072036);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,6.880458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4.947431);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3.303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2.652808);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1.902927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1.348444);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1.184008);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,0.9671019);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.5200167);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.439887);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.3317909);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.1653465);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.1041509);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.06101942);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.04265109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.3052058);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.3395279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.517384);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.6814226);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.8152041);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.8274392);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.819265);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.7515882);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.6992408);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.630239);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.5918658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.3650481);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.3216499);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.2688159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.2189183);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.1928981);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.1631902);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.1382139);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.1292801);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.113346);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.08224698);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.0698667);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.06353209);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.04531493);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.01899137);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.01096375);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(6462.522);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(1,-0.0001716319);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(2,0.00384915);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(3,0.004911185);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(4,0.02041104);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(5,0.01843291);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(6,0.02001871);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(7,0.04300422);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(8,0.05555466);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(9,0.05680257);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(10,0.01216223);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(11,0.04229564);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(12,0.02541297);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(13,0.04262368);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(14,0.03610911);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(15,0.01855718);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(16,0.009223345);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(17,0.002784409);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(18,-0.00170554);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(19,0.003498175);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(20,-0.001091902);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(21,0.002074554);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(22,-0.0002595295);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(23,-2.646605e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(24,0.0004603262);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(25,0.001302304);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(26,8.035751e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(27,6.253758e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(1,0.0003785374);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(2,0.004038243);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(3,0.003803844);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(4,0.007321372);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(5,0.009018478);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(6,0.009022342);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(7,0.01088657);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(8,0.0117922);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(9,0.01228785);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(10,0.01221188);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(11,0.01173451);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(12,0.01236633);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(13,0.0084778);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(14,0.007739648);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(15,0.006021484);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(16,0.004628947);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(17,0.003042528);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(18,0.002371094);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(19,0.002124683);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(20,0.001301713);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(21,0.001013098);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(22,0.0007272849);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(23,0.0007150061);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(24,0.0004603262);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(25,0.0008374074);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(26,8.035751e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(27,6.253758e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetEntries(132.4322);
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
   0.3858768,
   5.430205,
   6.209548,
   14.98893,
   24.82332,
   33.37452,
   33.47782,
   31.52727,
   26.12533,
   22.42889,
   18.39984,
   15.79133,
   12.3674,
   9.14481,
   6.475313,
   4.472599,
   3.483997,
   2.525115,
   1.810665,
   1.52625,
   1.212044,
   0.7026616,
   0.5852669,
   0.4197108,
   0.2316061,
   0.1461573,
   0.07285971};
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
   0.04332329,
   0.3120245,
   0.3454314,
   0.5276535,
   0.6944465,
   0.8304501,
   0.839653,
   0.8298006,
   0.7607011,
   0.707581,
   0.6374649,
   0.5985589,
   0.3695594,
   0.3247509,
   0.2712286,
   0.2211354,
   0.1960058,
   0.1649005,
   0.1396178,
   0.1303998,
   0.1142465,
   0.08326889,
   0.07060279,
   0.06398824,
   0.04575326,
   0.01923684,
   0.01103193};
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
   0.04332329,
   0.3120245,
   0.3454314,
   0.5276535,
   0.6944465,
   0.8304501,
   0.839653,
   0.8298006,
   0.7607011,
   0.707581,
   0.6374649,
   0.5985589,
   0.3695594,
   0.3247509,
   0.2712286,
   0.2211354,
   0.1960058,
   0.1649005,
   0.1396178,
   0.1303998,
   0.1142465,
   0.08326889,
   0.07060279,
   0.06398824,
   0.04575326,
   0.01923684,
   0.01103193};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMinimum(0.055645);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMaximum(37.74304);
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
   Data__628->SetBinContent(1,0.35625);
   Data__628->SetBinContent(2,4.05);
   Data__628->SetBinContent(3,5.85);
   Data__628->SetBinContent(4,13.65);
   Data__628->SetBinContent(5,23.5);
   Data__628->SetBinContent(6,32.05);
   Data__628->SetBinContent(7,35.15);
   Data__628->SetBinContent(8,30.975);
   Data__628->SetBinContent(9,26.925);
   Data__628->SetBinContent(10,22.875);
   Data__628->SetBinContent(11,18.95);
   Data__628->SetBinContent(12,16.45);
   Data__628->SetBinContent(13,12.4);
   Data__628->SetBinContent(14,9.3375);
   Data__628->SetBinContent(15,6.8375);
   Data__628->SetBinContent(16,4.8125);
   Data__628->SetBinContent(17,3.8125);
   Data__628->SetBinContent(18,2.525);
   Data__628->SetBinContent(19,1.6875);
   Data__628->SetBinContent(20,1.5);
   Data__628->SetBinContent(21,1.325);
   Data__628->SetBinContent(22,0.8625);
   Data__628->SetBinContent(23,0.59);
   Data__628->SetBinContent(24,0.36);
   Data__628->SetBinContent(25,0.23);
   Data__628->SetBinContent(26,0.2133333);
   Data__628->SetBinContent(27,0.054);
   Data__628->SetBinError(1,0.04718647);
   Data__628->SetBinError(2,0.3181981);
   Data__628->SetBinError(3,0.3824265);
   Data__628->SetBinError(4,0.5841661);
   Data__628->SetBinError(5,0.7664855);
   Data__628->SetBinError(6,0.8951257);
   Data__628->SetBinError(7,0.9374167);
   Data__628->SetBinError(8,0.8799858);
   Data__628->SetBinError(9,0.820442);
   Data__628->SetBinError(10,0.7562242);
   Data__628->SetBinError(11,0.688295);
   Data__628->SetBinError(12,0.6412878);
   Data__628->SetBinError(13,0.3937004);
   Data__628->SetBinError(14,0.3416413);
   Data__628->SetBinError(15,0.2923504);
   Data__628->SetBinError(16,0.2452677);
   Data__628->SetBinError(17,0.2183031);
   Data__628->SetBinError(18,0.1776584);
   Data__628->SetBinError(19,0.1452369);
   Data__628->SetBinError(20,0.1369306);
   Data__628->SetBinError(21,0.1286954);
   Data__628->SetBinError(22,0.1038328);
   Data__628->SetBinError(23,0.07681146);
   Data__628->SetBinError(24,0.06);
   Data__628->SetBinError(25,0.04795832);
   Data__628->SetBinError(26,0.02666667);
   Data__628->SetBinError(27,0.0103923);
   Data__628->SetEntries(12132.59);
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
   hframe_copy__629->SetMaximum(246.05);
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
   hframe_copy__630->SetMaximum(246.05);
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
