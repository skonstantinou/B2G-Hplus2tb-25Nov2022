void HPlusMass()
{
//=========Macro generated from canvas: HPlusMass/HPlusMass
//=========  (Fri Nov 18 13:27:53 2022) by ROOT version 6.20/02
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
   0.4547572,
   0.088303,
   0.0470987,
   0.03465374,
   0.03220318,
   0.03118068,
   0.03478422,
   0.0386466,
   0.04155886,
   0.04482287,
   0.05024238,
   0.05236215,
   0.04176649,
   0.05110586,
   0.05599846,
   0.06968666,
   0.08612584,
   0.09409211,
   0.1106297,
   0.1387437,
   0.1445222,
   0.1938917,
   0.2073327,
   0.2272645,
   0.2230601,
   0.2095475,
   0.2449887};
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
   0.4547572,
   0.088303,
   0.0470987,
   0.03465374,
   0.03220318,
   0.03118068,
   0.03478422,
   0.0386466,
   0.04155886,
   0.04482287,
   0.05024238,
   0.05236215,
   0.04176649,
   0.05110586,
   0.05599846,
   0.06968666,
   0.08612584,
   0.09409211,
   0.1106297,
   0.1387437,
   0.1445222,
   0.1938917,
   0.2073327,
   0.2272645,
   0.2230601,
   0.2095475,
   0.2449887};
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
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMinimum(0.4542913);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMaximum(1.545709);
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
   0.4547572,
   0.088303,
   0.0470987,
   0.03465374,
   0.03220318,
   0.03118068,
   0.03478422,
   0.0386466,
   0.04155886,
   0.04482287,
   0.05024238,
   0.05236215,
   0.04176649,
   0.05110586,
   0.05599846,
   0.06968666,
   0.08612584,
   0.09409211,
   0.1106297,
   0.1387437,
   0.1445222,
   0.1938917,
   0.2073327,
   0.2272645,
   0.2230601,
   0.2095475,
   0.2449887};
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
   0.4547572,
   0.088303,
   0.0470987,
   0.03465374,
   0.03220318,
   0.03118068,
   0.03478422,
   0.0386466,
   0.04155886,
   0.04482287,
   0.05024238,
   0.05236215,
   0.04176649,
   0.05110586,
   0.05599846,
   0.06968666,
   0.08612584,
   0.09409211,
   0.1106297,
   0.1387437,
   0.1445222,
   0.1938917,
   0.2073327,
   0.2272645,
   0.2230601,
   0.2095475,
   0.2449887};
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
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMinimum(0.4542913);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMaximum(1.545709);
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
   
   Double_t Graph1_fx3365[8] = {
   80,
   180,
   220,
   260,
   300,
   340,
   1850,
   2250};
   Double_t Graph1_fy3365[8] = {
   1.141735,
   0.8754433,
   1.024341,
   1.027982,
   1.004984,
   1.084715,
   0.06897129,
   0.4867148};
   Double_t Graph1_felx3365[8] = {
   80,
   20,
   20,
   20,
   20,
   20,
   150,
   250};
   Double_t Graph1_fely3365[8] = {
   0.5105996,
   0.08754433,
   0.05058862,
   0.03748666,
   0.03443019,
   0.0350822,
   0.06897129,
   0.1839609};
   Double_t Graph1_fehx3365[8] = {
   80,
   20,
   20,
   20,
   20,
   20,
   150,
   250};
   Double_t Graph1_fehy3365[8] = {
   0.5105996,
   0.08754433,
   0.05058862,
   0.03748666,
   0.03443019,
   0.0350822,
   0.06897129,
   0.1839609};
   grae = new TGraphAsymmErrors(8,Graph1_fx3365,Graph1_fy3365,Graph1_felx3365,Graph1_fehx3365,Graph1_fely3365,Graph1_fehy3365);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1335733613365 = new TH1F("Graph_Graph_Graph_Graph1335733613365","Graph",100,0,2750);
   Graph_Graph_Graph_Graph1335733613365->SetMinimum(1.503088e-09);
   Graph_Graph_Graph_Graph1335733613365->SetMaximum(1.817568);
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
   HPlusMass_1->Range(-506.3291,-2.091815,2658.228,2.498941);
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
   hframe__626->SetMaximum(167.3);
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
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMinimum(0.008813371);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMaximum(35.25349);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,5.431736e-05);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.03751209);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.1627266);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.3869616);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.5933447);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.5376625);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.5492086);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.4487268);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.3472972);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.3030275);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.2018336);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.2320303);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.2031574);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.1409148);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.1004326);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.08447973);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.05451863);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.02545174);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.02817179);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.01062953);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.02596713);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.007627606);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.009403951);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.005203878);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.008591176);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.00131635);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,-0.0002895414);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,2.71409e-05);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.00959276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.02099075);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.0347293);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.04223482);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.04095903);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.04316237);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.03976442);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.03410042);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.03183209);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.02716599);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.03172918);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.02181329);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.01814922);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.01577882);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.01307015);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.01218607);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.009012259);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.008025106);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.00637816);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.006958493);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.003353455);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.004186423);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.00240099);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.003440508);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.0005099062);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.0004785121);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1427.794);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.004130037);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.5661437);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3.034455);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,6.438375);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,7.978589);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,7.655786);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,6.45763);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5.066735);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,4.201214);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,3.537064);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2.723187);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2.251414);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1.784814);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1.340579);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.9681436);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.7058045);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.5263952);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.4074357);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.2886252);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.2114694);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.1475644);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.1133878);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.08187737);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.06025476);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.04510783);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.02297714);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.007305118);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.001277836);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.03014346);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.06965593);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.101886);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1123757);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1103158);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1012948);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.08943398);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.08185712);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.07475267);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.06596829);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.05979634);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.037634);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.03262088);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.02781456);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.02362134);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.02059947);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.01798783);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.01530921);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.01306712);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.01086332);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.009380286);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.007245244);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.006207671);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.00554373);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.002234803);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.0009900975);
   TT_stack_2_stack_2_stack_2->SetEntries(37851.23);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,0.02318626);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2.25204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,6.809248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11.46292);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,12.62243);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,13.83998);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,10.598);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,8.934626);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,7.696396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,6.757947);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,5.729587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,5.300737);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,4.139586);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2.615454);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2.247739);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1.291792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.7154526);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.7127279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.5356473);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.2877774);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,0.3168348);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.1313284);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.08602108);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.08565985);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.09823487);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.0240358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.0217487);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.01238119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.2501746);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.465641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.624548);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.6718852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.6768644);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.6023903);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.5498028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.5010987);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.4680348);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.4289355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.401936);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.2522029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.2060234);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.1829345);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.1425593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.1090552);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.1058991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.09270804);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.06923162);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.06968469);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.04790252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.03579554);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.03369275);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.0332564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.009864455);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.006960593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3396.149);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(2,0.008203931);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(3,0.02636609);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(4,0.07312316);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(5,0.09225398);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(6,0.1350805);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(7,0.1649671);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(8,0.1223513);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(9,0.145327);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(10,0.1551092);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(11,0.1779124);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(12,0.207746);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(13,0.2939916);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(14,0.4920753);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(15,0.5267888);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(16,0.1339553);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(17,0.05346959);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(18,0.02546734);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(19,0.02258367);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(20,0.02100575);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(21,0.01034456);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(22,0.008016948);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(23,0.008861672);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(24,0.002544484);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(25,0.00131737);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(26,0.0005785808);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(27,0.0005542848);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(2,0.004262628);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(3,0.009953612);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(4,0.01381037);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(5,0.01663784);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(6,0.01839009);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(7,0.01944099);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(8,0.01928671);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(9,0.01886287);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(10,0.01985104);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(11,0.02109539);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(12,0.02315079);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(13,0.01889633);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(14,0.02404057);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(15,0.02426964);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(16,0.01348848);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(17,0.008828546);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(18,0.006561665);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(19,0.005287188);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(20,0.004437567);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(21,0.003663425);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(22,0.002739212);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(23,0.002290262);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(24,0.001841889);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(25,0.00129541);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(26,0.0005205011);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(27,0.0002435446);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetEntries(1594.757);
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
   0.02737062,
   2.855696,
   10.00643,
   18.28825,
   21.19437,
   22.03343,
   17.60484,
   14.45009,
   12.24491,
   10.59804,
   8.654608,
   7.784182,
   6.127558,
   4.096948,
   3.316315,
   2.082076,
   1.296366,
   1.145615,
   0.8524442,
   0.5098764,
   0.4903663,
   0.2523438,
   0.1773024,
   0.1511185,
   0.1519339,
   0.04832929,
   0.02876428};
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
   0.01244699,
   0.2521665,
   0.4712899,
   0.6337563,
   0.6825261,
   0.6870173,
   0.6123705,
   0.5584468,
   0.5088844,
   0.4750345,
   0.4348281,
   0.4075965,
   0.2559266,
   0.2093781,
   0.1857086,
   0.1450929,
   0.1116506,
   0.1077934,
   0.09430565,
   0.07074212,
   0.07086881,
   0.04892736,
   0.03676058,
   0.03434387,
   0.03389038,
   0.01012728,
   0.007046923};
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
   0.01244699,
   0.2521665,
   0.4712899,
   0.6337563,
   0.6825261,
   0.6870173,
   0.6123705,
   0.5584468,
   0.5088844,
   0.4750345,
   0.4348281,
   0.4075965,
   0.2559266,
   0.2093781,
   0.1857086,
   0.1450929,
   0.1116506,
   0.1077934,
   0.09430565,
   0.07074212,
   0.07086881,
   0.04892736,
   0.03676058,
   0.03434387,
   0.03389038,
   0.01012728,
   0.007046923};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMinimum(0.01343127);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMaximum(24.991);
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
   Data__628->SetBinContent(1,0.03125);
   Data__628->SetBinContent(2,2.5);
   Data__628->SetBinContent(3,10.25);
   Data__628->SetBinContent(4,18.8);
   Data__628->SetBinContent(5,21.3);
   Data__628->SetBinContent(6,23.9);
   Data__628->SetBinContent(26,0.003333333);
   Data__628->SetBinContent(27,0.014);
   Data__628->SetBinError(1,0.01397542);
   Data__628->SetBinError(2,0.25);
   Data__628->SetBinError(3,0.5062114);
   Data__628->SetBinError(4,0.6855655);
   Data__628->SetBinError(5,0.729726);
   Data__628->SetBinError(6,0.7729812);
   Data__628->SetBinError(26,0.003333333);
   Data__628->SetBinError(27,0.005291503);
   Data__628->SetEntries(3073.512);
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
   hframe_copy__629->SetMaximum(167.3);
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
   hframe_copy__630->SetMaximum(167.3);
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
