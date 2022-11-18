void HPlusMass()
{
//=========Macro generated from canvas: HPlusMass/HPlusMass
//=========  (Fri Nov 18 13:28:09 2022) by ROOT version 6.20/02
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
   0.3757841,
   0.07007772,
   0.03423598,
   0.02480171,
   0.02067547,
   0.02052848,
   0.02217365,
   0.02466398,
   0.02749455,
   0.03000909,
   0.03376986,
   0.03615519,
   0.02927819,
   0.03515321,
   0.04109378,
   0.04553676,
   0.05733052,
   0.06198986,
   0.07220096,
   0.08317968,
   0.09111981,
   0.1179828,
   0.1090095,
   0.1420501,
   0.1708165,
   0.139824,
   0.1438399};
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
   0.3757841,
   0.07007772,
   0.03423598,
   0.02480171,
   0.02067547,
   0.02052848,
   0.02217365,
   0.02466398,
   0.02749455,
   0.03000909,
   0.03376986,
   0.03615519,
   0.02927819,
   0.03515321,
   0.04109378,
   0.04553676,
   0.05733052,
   0.06198986,
   0.07220096,
   0.08317968,
   0.09111981,
   0.1179828,
   0.1090095,
   0.1420501,
   0.1708165,
   0.139824,
   0.1438399};
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
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMinimum(0.5490591);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMaximum(1.450941);
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
   0.3757841,
   0.07007772,
   0.03423598,
   0.02480171,
   0.02067547,
   0.02052848,
   0.02217365,
   0.02466398,
   0.02749455,
   0.03000909,
   0.03376986,
   0.03615519,
   0.02927819,
   0.03515321,
   0.04109378,
   0.04553676,
   0.05733052,
   0.06198986,
   0.07220096,
   0.08317968,
   0.09111981,
   0.1179828,
   0.1090095,
   0.1420501,
   0.1708165,
   0.139824,
   0.1438399};
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
   0.3757841,
   0.07007772,
   0.03423598,
   0.02480171,
   0.02067547,
   0.02052848,
   0.02217365,
   0.02466398,
   0.02749455,
   0.03000909,
   0.03376986,
   0.03615519,
   0.02927819,
   0.03515321,
   0.04109378,
   0.04553676,
   0.05733052,
   0.06198986,
   0.07220096,
   0.08317968,
   0.09111981,
   0.1179828,
   0.1090095,
   0.1420501,
   0.1708165,
   0.139824,
   0.1438399};
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
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMinimum(0.5490591);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMaximum(1.450941);
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
   
   Double_t Graph1_fx3365[7] = {
   80,
   180,
   220,
   260,
   300,
   340,
   2250};
   Double_t Graph1_fy3365[7] = {
   1.690115,
   1.167603,
   1.022783,
   1.053074,
   0.9783021,
   0.9941348,
   0.7660675};
   Double_t Graph1_felx3365[7] = {
   80,
   20,
   20,
   20,
   20,
   20,
   250};
   Double_t Graph1_fely3365[7] = {
   0.5975459,
   0.08404591,
   0.03841143,
   0.02857649,
   0.02311666,
   0.02289758,
   0.1597361};
   Double_t Graph1_fehx3365[7] = {
   80,
   20,
   20,
   20,
   20,
   20,
   250};
   Double_t Graph1_fehy3365[7] = {
   0.5975459,
   0.08404591,
   0.03841143,
   0.02857649,
   0.02311666,
   0.02289758,
   0.1597361};
   grae = new TGraphAsymmErrors(7,Graph1_fx3365,Graph1_fy3365,Graph1_felx3365,Graph1_fehx3365,Graph1_fely3365,Graph1_fehy3365);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1335733613365 = new TH1F("Graph_Graph_Graph_Graph1335733613365","Graph",100,0,2750);
   Graph_Graph_Graph_Graph1335733613365->SetMinimum(0.4381984);
   Graph_Graph_Graph_Graph1335733613365->SetMaximum(2.455794);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 350-2500");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   HPlusMass_1->Range(-506.3291,-2.098472,2658.228,2.825146);
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
   hframe__626->SetMaximum(338.633);
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
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMinimum(0.0001578399);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMaximum(94.21276);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.0015006);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.1151012);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.5339234);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.118471);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1.740202);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1.784495);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.485596);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1.3233);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1.127294);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.8609457);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.6567546);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.5970963);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.4808524);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.353933);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.2120388);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.1604838);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.1600585);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.08660027);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.07488044);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.05734478);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.0376983);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.02756335);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.02571997);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.01360094);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.008637368);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.005683966);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.002685068);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.0008922658);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.0223652);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.0419025);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.05686332);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.07904533);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.07245098);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.06683246);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.07473803);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.07198657);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.0573799);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.04836052);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.04811028);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.02960501);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.02680576);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.02247203);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.01849089);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.01977439);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.01277148);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.0123431);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.01122371);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.009880493);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.008619638);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.006998966);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.004272388);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.003892796);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.001939595);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.0007763181);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3898.478);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.009553933);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1.673809);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,8.015781);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,17.58971);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,23.61722);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,24.04093);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,20.56456);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,16.58236);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,13.18237);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,10.60279);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,8.605345);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,6.86549);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,5.505397);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,3.875513);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2.79763);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,2.096926);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1.49436);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1.108879);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.8531394);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.644987);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.4891407);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.3317812);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.2661825);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.1778544);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.1258557);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.06544415);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.03199616);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.002067072);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.05136524);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.1123042);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1653255);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1922748);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1933029);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1783998);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.1602843);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.1433541);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.1277262);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.11498);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.1027919);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.06496632);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.05455969);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.04621675);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.03981879);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.03363629);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.02907864);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.02537679);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.02215762);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.01901474);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.01577638);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.01271533);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.01028932);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.008824888);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.00369552);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.00196976);
   TT_stack_2_stack_2_stack_2->SetEntries(117213.4);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,0.01852925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2.343486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,8.780457);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,13.53079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,20.41066);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,21.5776);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,18.19419);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,14.99372);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,11.95456);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,9.870556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,8.212956);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,8.046785);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5.38001);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3.297633);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2.507773);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2.480033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1.058097);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1.156648);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.8364743);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.5844689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,0.3814941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.2601615);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.1968311);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.1494112);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.07196377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.03957933);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.02536571);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.01088675);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.2841182);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.5810807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.7802336);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.9231582);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.9509637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.8717916);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.7919224);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.7040803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.6247228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.5767968);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.5491388);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.325035);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.2575235);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.2208317);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.2112132);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.1505354);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.1423071);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.1242335);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.1041139);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.07994507);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.07084569);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.05126137);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.04712097);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.03392159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.0149063);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.00837363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4045.449);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(1,-0.0001192344);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(2,0.01793933);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(3,0.1232307);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(4,0.2352351);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(5,0.4426687);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(6,0.5090541);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(7,0.6369681);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(8,0.6103496);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(9,0.5754107);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(10,0.6299298);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(11,0.6321017);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(12,0.7102152);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(13,0.9113503);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(14,1.452527);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(15,1.563913);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(16,0.4649085);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(17,0.2004363);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(18,0.1206186);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(19,0.07093064);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(20,0.05145413);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(21,0.03024049);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(22,0.04135369);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(23,0.01982459);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(24,0.01337833);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(25,0.01388839);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(26,0.004529442);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(27,0.0006701513);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(1,0.0002108514);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(2,0.006697463);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(3,0.01776182);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(4,0.02624049);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(5,0.03164475);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(6,0.03687354);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(7,0.03937737);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(8,0.03904012);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(9,0.03843122);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(10,0.03882268);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(11,0.03965263);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(12,0.04158882);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(13,0.03305994);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(14,0.04050825);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(15,0.04098875);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(16,0.0234426);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(17,0.01524074);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(18,0.0125068);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(19,0.0102257);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(20,0.008533345);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(21,0.007232547);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(22,0.005920455);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(23,0.004588869);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(24,0.003456501);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(25,0.003122739);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(26,0.001170617);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(27,0.0004429416);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetEntries(5515.76);
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
   0.02958378,
   4.132397,
   17.33016,
   32.23896,
   45.76807,
   47.40303,
   40.24435,
   32.89937,
   26.26422,
   21.33429,
   17.47506,
   15.50937,
   11.36626,
   7.527079,
   5.517442,
   4.737442,
   2.712516,
   2.352128,
   1.764494,
   1.286801,
   0.9083331,
   0.6195061,
   0.4887335,
   0.3408666,
   0.2064568,
   0.1107074,
   0.06004693};
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
   0.01111712,
   0.289589,
   0.5933151,
   0.7995814,
   0.9462763,
   0.973112,
   0.892364,
   0.8114295,
   0.7221229,
   0.6402226,
   0.5901302,
   0.5607443,
   0.3327834,
   0.264601,
   0.2267325,
   0.2157278,
   0.1555099,
   0.1458081,
   0.1273982,
   0.1070357,
   0.08276713,
   0.07309107,
   0.05327657,
   0.04842013,
   0.03526622,
   0.01547956,
   0.008637147};
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
   0.01111712,
   0.289589,
   0.5933151,
   0.7995814,
   0.9462763,
   0.973112,
   0.892364,
   0.8114295,
   0.7221229,
   0.6402226,
   0.5901302,
   0.5607443,
   0.3327834,
   0.264601,
   0.2267325,
   0.2157278,
   0.1555099,
   0.1458081,
   0.1273982,
   0.1070357,
   0.08276713,
   0.07309107,
   0.05327657,
   0.04842013,
   0.03526622,
   0.01547956,
   0.008637147};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMinimum(0.01662);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMaximum(53.21191);
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
   Data__628->SetBinContent(1,0.05);
   Data__628->SetBinContent(2,4.825);
   Data__628->SetBinContent(3,17.725);
   Data__628->SetBinContent(4,33.95);
   Data__628->SetBinContent(5,44.775);
   Data__628->SetBinContent(6,47.125);
   Data__628->SetBinContent(27,0.046);
   Data__628->SetBinError(1,0.01767767);
   Data__628->SetBinError(2,0.3473111);
   Data__628->SetBinError(3,0.6656763);
   Data__628->SetBinError(4,0.9212763);
   Data__628->SetBinError(5,1.058005);
   Data__628->SetBinError(6,1.085415);
   Data__628->SetBinError(27,0.009591663);
   Data__628->SetEntries(5943.035);
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
      tex = new TLatex(0.19,0.885,"Data blinded in");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.19,0.85,"signal region");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   hframe_copy__629->SetMaximum(338.633);
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
   hframe_copy__630->SetMaximum(338.633);
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
      tex = new TLatex(0.95,0.952,"59.8 fb^{-1} (13 TeV)");
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
