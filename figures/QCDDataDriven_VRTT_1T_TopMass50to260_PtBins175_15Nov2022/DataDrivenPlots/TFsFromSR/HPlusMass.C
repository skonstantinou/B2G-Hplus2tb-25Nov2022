void HPlusMass()
{
//=========Macro generated from canvas: HPlusMass/HPlusMass
//=========  (Fri Nov 18 13:28:02 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3363[26] = {
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
   Double_t BackgroundStatSystError_fy3363[26] = {
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
   Double_t BackgroundStatSystError_felx3363[26] = {
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
   Double_t BackgroundStatSystError_fely3363[26] = {
   0.2106928,
   0.06946235,
   0.03625296,
   0.02415367,
   0.02088092,
   0.02051367,
   0.02130986,
   0.02182673,
   0.02319778,
   0.02507002,
   0.02614238,
   0.02050136,
   0.0238272,
   0.02726312,
   0.03205022,
   0.03711741,
   0.04447699,
   0.05038775,
   0.05730585,
   0.06897076,
   0.07922658,
   0.08339049,
   0.1005043,
   0.1197437,
   0.1021255,
   0.1198237};
   Double_t BackgroundStatSystError_fehx3363[26] = {
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
   Double_t BackgroundStatSystError_fehy3363[26] = {
   0.2106928,
   0.06946235,
   0.03625296,
   0.02415367,
   0.02088092,
   0.02051367,
   0.02130986,
   0.02182673,
   0.02319778,
   0.02507002,
   0.02614238,
   0.02050136,
   0.0238272,
   0.02726312,
   0.03205022,
   0.03711741,
   0.04447699,
   0.05038775,
   0.05730585,
   0.06897076,
   0.07922658,
   0.08339049,
   0.1005043,
   0.1197437,
   0.1021255,
   0.1198237};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,BackgroundStatSystError_fx3363,BackgroundStatSystError_fy3363,BackgroundStatSystError_felx3363,BackgroundStatSystError_fehx3363,BackgroundStatSystError_fely3363,BackgroundStatSystError_fehy3363);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError335533593363 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError335533593363","Graph",100,0,2734);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMinimum(0.7471686);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMaximum(1.252831);
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
   0,
   0.2106928,
   0.06946235,
   0.03625296,
   0.02415367,
   0.02088092,
   0.02051367,
   0.02130986,
   0.02182673,
   0.02319778,
   0.02507002,
   0.02614238,
   0.02050136,
   0.0238272,
   0.02726312,
   0.03205022,
   0.03711741,
   0.04447699,
   0.05038775,
   0.05730585,
   0.06897076,
   0.07922658,
   0.08339049,
   0.1005043,
   0.1197437,
   0.1021255,
   0.1198237};
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
   0,
   0.2106928,
   0.06946235,
   0.03625296,
   0.02415367,
   0.02088092,
   0.02051367,
   0.02130986,
   0.02182673,
   0.02319778,
   0.02507002,
   0.02614238,
   0.02050136,
   0.0238272,
   0.02726312,
   0.03205022,
   0.03711741,
   0.04447699,
   0.05038775,
   0.05730585,
   0.06897076,
   0.07922658,
   0.08339049,
   0.1005043,
   0.1197437,
   0.1021255,
   0.1198237};
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
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMinimum(0.7471686);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMaximum(1.252831);
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
   
   Double_t Graph1_fx3365[26] = {
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
   Double_t Graph1_fy3365[26] = {
   0.6773534,
   0.8502647,
   0.8661128,
   0.8507723,
   0.8946267,
   0.9523495,
   1.038706,
   0.9867607,
   1.01544,
   1.019513,
   0.9761073,
   0.987492,
   1.004215,
   0.969945,
   1.071672,
   1.083082,
   1.062979,
   1.153702,
   0.8352394,
   1.059931,
   1.228367,
   0.9401504,
   1.408858,
   1.082913,
   1.173445,
   1.057778};
   Double_t Graph1_felx3365[26] = {
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
   Double_t Graph1_fely3365[26] = {
   0.2042297,
   0.07428797,
   0.03953246,
   0.02662567,
   0.02401304,
   0.02446753,
   0.02690913,
   0.02673765,
   0.02909582,
   0.03122584,
   0.03188804,
   0.02540396,
   0.02980772,
   0.03319084,
   0.04162029,
   0.04918022,
   0.05790414,
   0.06786484,
   0.06405994,
   0.08712581,
   0.1126043,
   0.09910055,
   0.1519211,
   0.1547019,
   0.1354977,
   0.1466875};
   Double_t Graph1_fehx3365[26] = {
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
   Double_t Graph1_fehy3365[26] = {
   0.2042297,
   0.07428797,
   0.03953246,
   0.02662567,
   0.02401304,
   0.02446753,
   0.02690913,
   0.02673765,
   0.02909582,
   0.03122584,
   0.03188804,
   0.02540396,
   0.02980772,
   0.03319084,
   0.04162029,
   0.04918022,
   0.05790414,
   0.06786484,
   0.06405994,
   0.08712581,
   0.1126043,
   0.09910055,
   0.1519211,
   0.1547019,
   0.1354977,
   0.1466875};
   grae = new TGraphAsymmErrors(26,Graph1_fx3365,Graph1_fy3365,Graph1_felx3365,Graph1_fehx3365,Graph1_fely3365,Graph1_fehy3365);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1335733613365 = new TH1F("Graph_Graph_Graph_Graph1335733613365","Graph",100,0,2734);
   Graph_Graph_Graph_Graph1335733613365->SetMinimum(0.3643581);
   Graph_Graph_Graph_Graph1335733613365->SetMaximum(1.669545);
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
   HPlusMass_1->Range(-506.3291,-2.096815,2658.228,2.743917);
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
   hframe__626->SetMaximum(284.1012);
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
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMinimum(0.01590802);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMaximum(63.6321);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.005250983);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.0669652);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.3659293);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.7556083);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.8851492);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.9703271);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.8859156);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.7643641);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.8742663);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.6515208);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.6258067);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.5267159);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.3729924);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.2971573);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.228119);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.1736476);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.09965912);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.08196439);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.06939854);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.04712378);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.05496596);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.03118381);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.0216954);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.006740311);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.006433541);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.0004877905);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.003025384);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.01583708);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.04035126);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.07184585);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.07358581);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.09154522);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.07767871);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.06110226);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.06390955);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.06419158);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.05354226);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.04391356);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.04113405);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.02468992);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.02358746);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.02026283);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.01627006);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.01362617);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.01518371);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.008925777);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.009769351);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.006696261);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.006323095);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.004887531);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.002462037);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.0005975042);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1643.918);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.1879344);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2.118722);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,9.076284);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,19.33784);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,24.48174);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,24.94423);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,23.24186);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,21.06633);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,18.36252);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,16.27508);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,14.01325);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,11.40574);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,8.515068);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,6.167093);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,4.522925);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,3.442641);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,2.472798);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1.857838);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1.328835);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.9575082);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.7254819);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.4880461);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.3558943);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.2467981);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.1268739);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.0453338);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.016375);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.05513881);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1142942);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1673963);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1889912);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1914246);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.1849659);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.1765208);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.1645976);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.1549546);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.144105);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.09185619);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.07924719);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.06748738);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.05790714);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.05055208);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.04279876);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.03698293);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.03138055);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.02685504);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.02311999);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.01692969);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.01459331);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.01211945);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.004983926);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.002323345);
   TT_stack_2_stack_2_stack_2->SetEntries(163180.8);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,0.2128066);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,1.666054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,4.412794);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9.90871);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,13.42024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,13.85551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,11.73414);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,12.67615);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,10.75021);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,9.213328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,9.359327);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,7.194284);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,5.239892);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4.541528);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2.982198);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1.981164);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1.390463);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1.191421);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1.145947);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,0.7407643);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.4305089);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.4380638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.2328337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.1989447);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.07974046);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.05249768);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.08390308);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.2613282);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.4874411);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.7013928);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.7841065);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.7877527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.7374102);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.72964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.6728498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.6335013);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.6082485);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.3786759);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.3245725);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.2913194);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.2398355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.2004977);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.1702078);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.1527732);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.1415674);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.1170077);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.09259861);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.07772544);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.0592528);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.05258251);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.02103551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.01153414);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3204.864);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(2,-0.0005896325);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(3,0.003798611);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(4,0.01706334);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(5,0.02715427);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(6,0.02956322);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(7,0.03872876);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(8,0.04770633);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(9,0.02025313);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(10,0.04613809);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(11,0.04798465);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(12,0.04580736);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(13,0.0554291);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(14,0.07930212);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(15,0.06022224);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(16,0.02078981);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(17,0.01228528);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(18,0.00150901);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(19,0.01049961);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(20,0.001457888);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(21,0.001955241);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(22,0.00137827);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(23,0.0003426563);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(24,-0.001762052);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(25,0.0004981107);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(26,0.0004751026);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(27,0.0002742989);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(2,0.0005896325);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(3,0.003000174);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(4,0.00552879);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(5,0.008181095);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(6,0.009261607);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(7,0.01089123);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(8,0.01117896);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(9,0.01078137);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(10,0.0118746);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(11,0.01259524);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(12,0.01312576);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(13,0.00963489);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(14,0.01103873);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(15,0.009984836);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(16,0.00613301);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(17,0.004293986);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(18,0.003409004);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(19,0.002836938);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(20,0.002349738);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(21,0.002260508);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(22,0.001435667);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(23,0.00132703);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(24,0.001189771);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(25,0.0009665817);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(26,0.000422436);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(27,0.0001738048);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetEntries(225.5855);
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
   0,
   0.4059919,
   3.851742,
   13.85501,
   30.00215,
   38.78713,
   39.77006,
   35.86191,
   34.50685,
   29.987,
   26.13993,
   23.99838,
   19.12674,
   14.12795,
   11.00578,
   7.733243,
   5.597452,
   3.96292,
   3.131224,
   2.544181,
   1.745396,
   1.210957,
   0.9572936,
   0.6104233,
   0.4524831,
   0.2130479,
   0.09831928};
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
   0,
   0.08553959,
   0.267551,
   0.502285,
   0.7246621,
   0.8099108,
   0.8158298,
   0.7642121,
   0.7531717,
   0.6956318,
   0.6553285,
   0.6273749,
   0.3921242,
   0.3366295,
   0.3000519,
   0.2478521,
   0.2077629,
   0.1762588,
   0.1577753,
   0.1457964,
   0.1203813,
   0.09593996,
   0.07982918,
   0.06135015,
   0.05418201,
   0.02175762,
   0.01178098};
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
   0,
   0.08553959,
   0.267551,
   0.502285,
   0.7246621,
   0.8099108,
   0.8158298,
   0.7642121,
   0.7531717,
   0.6956318,
   0.6553285,
   0.6273749,
   0.3921242,
   0.3366295,
   0.3000519,
   0.2478521,
   0.2077629,
   0.1762588,
   0.1577753,
   0.1457964,
   0.1203813,
   0.09593996,
   0.07982918,
   0.06135015,
   0.05418201,
   0.02175762,
   0.01178098};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMinimum(0.04464448);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMaximum(44.64448);
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
   Data__628->SetBinContent(2,0.275);
   Data__628->SetBinContent(3,3.275);
   Data__628->SetBinContent(4,12);
   Data__628->SetBinContent(5,25.525);
   Data__628->SetBinContent(6,34.7);
   Data__628->SetBinContent(7,37.875);
   Data__628->SetBinContent(8,37.25);
   Data__628->SetBinContent(9,34.05);
   Data__628->SetBinContent(10,30.45);
   Data__628->SetBinContent(11,26.65);
   Data__628->SetBinContent(12,23.425);
   Data__628->SetBinContent(13,18.8875);
   Data__628->SetBinContent(14,14.1875);
   Data__628->SetBinContent(15,10.675);
   Data__628->SetBinContent(16,8.2875);
   Data__628->SetBinContent(17,6.0625);
   Data__628->SetBinContent(18,4.2125);
   Data__628->SetBinContent(19,3.6125);
   Data__628->SetBinContent(20,2.125);
   Data__628->SetBinContent(21,1.85);
   Data__628->SetBinContent(22,1.4875);
   Data__628->SetBinContent(23,0.9);
   Data__628->SetBinContent(24,0.86);
   Data__628->SetBinContent(25,0.49);
   Data__628->SetBinContent(26,0.25);
   Data__628->SetBinContent(27,0.104);
   Data__628->SetBinError(2,0.08291562);
   Data__628->SetBinError(3,0.2861381);
   Data__628->SetBinError(4,0.5477226);
   Data__628->SetBinError(5,0.7988273);
   Data__628->SetBinError(6,0.9313968);
   Data__628->SetBinError(7,0.973075);
   Data__628->SetBinError(8,0.965013);
   Data__628->SetBinError(9,0.9226321);
   Data__628->SetBinError(10,0.8724964);
   Data__628->SetBinError(11,0.8162414);
   Data__628->SetBinError(12,0.7652614);
   Data__628->SetBinError(13,0.4858948);
   Data__628->SetBinError(14,0.421122);
   Data__628->SetBinError(15,0.365291);
   Data__628->SetBinError(16,0.3218598);
   Data__628->SetBinError(17,0.2752839);
   Data__628->SetBinError(18,0.2294695);
   Data__628->SetBinError(19,0.2125);
   Data__628->SetBinError(20,0.1629801);
   Data__628->SetBinError(21,0.1520691);
   Data__628->SetBinError(22,0.1363589);
   Data__628->SetBinError(23,0.09486833);
   Data__628->SetBinError(24,0.09273618);
   Data__628->SetBinError(25,0.07);
   Data__628->SetBinError(26,0.02886751);
   Data__628->SetBinError(27,0.01442221);
   Data__628->SetEntries(15257.67);
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
   hframe_copy__629->SetMaximum(284.1012);
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
   hframe_copy__630->SetMaximum(284.1012);
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
