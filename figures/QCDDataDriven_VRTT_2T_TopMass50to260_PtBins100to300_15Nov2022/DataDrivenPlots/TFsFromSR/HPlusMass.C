void HPlusMass()
{
//=========Macro generated from canvas: HPlusMass/HPlusMass
//=========  (Fri Nov 18 13:28:44 2022) by ROOT version 6.20/02
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
   0.08935847,
   0.02759256,
   0.01315679,
   0.009505974,
   0.008940358,
   0.00916665,
   0.009944713,
   0.01075965,
   0.01160059,
   0.01248656,
   0.01358464,
   0.01073514,
   0.01260965,
   0.01477379,
   0.01735342,
   0.02003879,
   0.02343581,
   0.02675934,
   0.03204422,
   0.03689265,
   0.04321315,
   0.04362009,
   0.05351545,
   0.06158867,
   0.05011613,
   0.06123667};
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
   0.08935847,
   0.02759256,
   0.01315679,
   0.009505974,
   0.008940358,
   0.00916665,
   0.009944713,
   0.01075965,
   0.01160059,
   0.01248656,
   0.01358464,
   0.01073514,
   0.01260965,
   0.01477379,
   0.01735342,
   0.02003879,
   0.02343581,
   0.02675934,
   0.03204422,
   0.03689265,
   0.04321315,
   0.04362009,
   0.05351545,
   0.06158867,
   0.05011613,
   0.06123667};
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
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMinimum(0.8927698);
   Graph_Graph_Graph_BackgroundStatSystError335533593363->SetMaximum(1.10723);
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
   0.08935847,
   0.02759256,
   0.01315679,
   0.009505974,
   0.008940358,
   0.00916665,
   0.009944713,
   0.01075965,
   0.01160059,
   0.01248656,
   0.01358464,
   0.01073514,
   0.01260965,
   0.01477379,
   0.01735342,
   0.02003879,
   0.02343581,
   0.02675934,
   0.03204422,
   0.03689265,
   0.04321315,
   0.04362009,
   0.05351545,
   0.06158867,
   0.05011613,
   0.06123667};
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
   0.08935847,
   0.02759256,
   0.01315679,
   0.009505974,
   0.008940358,
   0.00916665,
   0.009944713,
   0.01075965,
   0.01160059,
   0.01248656,
   0.01358464,
   0.01073514,
   0.01260965,
   0.01477379,
   0.01735342,
   0.02003879,
   0.02343581,
   0.02675934,
   0.03204422,
   0.03689265,
   0.04321315,
   0.04362009,
   0.05351545,
   0.06158867,
   0.05011613,
   0.06123667};
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
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMinimum(0.8927698);
   Graph_Graph_Graph_BackgroundStatError335633603364->SetMaximum(1.10723);
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
   0.9588247,
   0.9910994,
   0.8880979,
   0.8977417,
   0.9053667,
   0.8993106,
   0.9400177,
   0.9558009,
   0.9424269,
   0.9501239,
   0.9529294,
   0.9973329,
   0.9612858,
   0.9217075,
   1.022978,
   0.9231206,
   1.109884,
   1.10464,
   1.038114,
   1.082899,
   0.8880908,
   1.004978,
   1.02011,
   1.005786,
   1.07222,
   0.8155286};
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
   0.141371,
   0.0427691,
   0.02022063,
   0.01452322,
   0.01350542,
   0.01368891,
   0.01487787,
   0.01614676,
   0.01713503,
   0.01876016,
   0.02026134,
   0.01646742,
   0.01865256,
   0.0212069,
   0.02658205,
   0.0290324,
   0.03739293,
   0.04376742,
   0.04910111,
   0.05847105,
   0.05793266,
   0.0674497,
   0.08014744,
   0.08996024,
   0.07883119,
   0.0777576};
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
   0.141371,
   0.0427691,
   0.02022063,
   0.01452322,
   0.01350542,
   0.01368891,
   0.01487787,
   0.01614676,
   0.01713503,
   0.01876016,
   0.02026134,
   0.01646742,
   0.01865256,
   0.0212069,
   0.02658205,
   0.0290324,
   0.03739293,
   0.04376742,
   0.04910111,
   0.05847105,
   0.05793266,
   0.0674497,
   0.08014744,
   0.08996024,
   0.07883119,
   0.0777576};
   grae = new TGraphAsymmErrors(26,Graph1_fx3365,Graph1_fy3365,Graph1_felx3365,Graph1_fehx3365,Graph1_fely3365,Graph1_fehy3365);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1335733613365 = new TH1F("Graph_Graph_Graph_Graph1335733613365","Graph",100,0,2734);
   Graph_Graph_Graph_Graph1335733613365->SetMinimum(0.696443);
   Graph_Graph_Graph_Graph1335733613365->SetMaximum(1.192379);
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
   HPlusMass_1->Range(-506.3291,-2.10745,2658.228,3.265063);
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
   hframe__626->SetMaximum(876.4197);
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
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMinimum(0.04963735);
   StackedMCstackHist_stack_88_stack_89_stack_90->SetMaximum(198.5494);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.03123713);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.3810335);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.287301);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,2.381599);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,2.84243);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,2.668522);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,2.582657);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,2.388201);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,2.028992);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1.653695);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.491361);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,1.17267);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.9503708);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.7161356);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.5303347);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.3987438);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.2730881);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.2044567);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.1625216);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.1295875);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.08301829);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.06353388);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.04457335);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.02669336);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.01663716);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.007817706);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.01253318);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.04630169);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.08097692);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.1186357);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.1278814);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.1202552);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.1157463);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.1399241);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.09857053);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.09249687);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.1004137);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.0541517);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.04982516);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.04450046);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.04499666);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.0328599);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.02640261);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.02382142);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.01966948);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.01790046);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.01357836);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.0113837);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.009772528);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.007458517);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.003557859);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.001756599);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4694.917);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.9333522);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,10.88371);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,47.24771);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,93.27006);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,107.793);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,100.9385);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,87.4914);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,74.72838);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,63.64723);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,54.3932);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,46.51143);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,36.8325);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,26.72788);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,19.48165);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,14.25513);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,10.56447);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,7.846124);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,5.707414);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,4.112647);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,3.112896);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,2.310109);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,1.704378);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,1.176437);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.9020371);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.4479958);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.1728883);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.03537145);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.1226242);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.2546225);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.3579115);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.3854429);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.3728618);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.3475117);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.3212098);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.2959102);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.2737741);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.2528047);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.1590466);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.1355562);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.1156559);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.09899836);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.08533277);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.07359437);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.06290438);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.05323151);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.04640555);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.03984904);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.0307009);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.02545322);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.02245416);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.00904);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.004384683);
   TT_stack_2_stack_2_stack_2->SetEntries(651925.9);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,0.2347958);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,2.280824);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5.766438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,10.75423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,13.45794);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,16.3738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,16.09415);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,14.53431);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,14.56873);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,11.4443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,10.02879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,7.967443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,6.858819);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,5.420425);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3.311221);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2.726763);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1.802998);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1.296361);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1.107188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,0.7167959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.9145298);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.4410919);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.3670527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.3140785);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.1104977);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.08905762);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.1003908);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.3500194);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.6625888);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.9385841);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.032441);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.027678);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.9902415);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.9217924);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.877083);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.7916382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.7399217);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.4640433);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.410856);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.3576158);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.2946106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.2586422);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.2189962);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.1807794);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.1628699);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.1373392);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.1365939);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.09062299);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.08049373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.07279427);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.02713676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.01582973);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(2713.517);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(2,0.0001169367);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(3,0.01339941);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(4,0.04206982);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(5,0.07732344);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(6,0.1503225);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(7,0.1287551);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(8,0.172078);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(9,0.1581241);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(10,0.1546246);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(11,0.1719923);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(12,0.1563277);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(13,0.1730623);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(14,0.2113921);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(15,0.1731205);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(16,0.04636021);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(17,0.02770103);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(18,0.02883293);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(19,0.01977092);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(20,0.006048686);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(21,0.006231919);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(22,0.001764841);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(23,0.005431118);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(24,0.002276314);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(25,0.005831475);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(26,0.001588806);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinContent(27,0.0006129206);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(2,0.0007505895);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(3,0.005604254);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(4,0.01045176);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(5,0.01542074);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(6,0.01995275);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(7,0.0210043);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(8,0.02174132);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(9,0.0228918);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(10,0.0215519);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(11,0.0219861);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(12,0.02262538);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(13,0.01633721);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(14,0.01797281);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(15,0.01650935);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(16,0.01032531);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(17,0.007550275);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(18,0.006765361);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(19,0.005542905);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(20,0.004474464);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(21,0.00431859);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(22,0.003483987);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(23,0.00270426);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(24,0.002191263);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(25,0.001877964);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(26,0.0008117902);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetBinError(27,0.0003223823);
   ChargedHiggs_HplusTBHplusToTB_M_800__627->SetEntries(772.9911);
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
   1.199385,
   13.54556,
   54.30145,
   106.4059,
   124.0934,
   119.9808,
   106.1682,
   91.65089,
   80.24495,
   67.4912,
   58.03158,
   45.97261,
   34.53708,
   25.61821,
   18.09668,
   13.68998,
   9.922211,
   7.208232,
   5.382357,
   3.95928,
   3.307657,
   2.209004,
   1.588063,
   1.242809,
   0.5751306,
   0.2697637};
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
   0.1071752,
   0.3737568,
   0.7144325,
   1.011492,
   1.109439,
   1.099822,
   1.055812,
   0.9861317,
   0.9308887,
   0.842733,
   0.7883383,
   0.4935225,
   0.4355005,
   0.378478,
   0.3140394,
   0.2743305,
   0.2325351,
   0.1928875,
   0.1724734,
   0.1460683,
   0.1429343,
   0.09635694,
   0.08498594,
   0.07654296,
   0.02882332,
   0.01651943};
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
   0.1071752,
   0.3737568,
   0.7144325,
   1.011492,
   1.109439,
   1.099822,
   1.055812,
   0.9861317,
   0.9308887,
   0.842733,
   0.7883383,
   0.4935225,
   0.4355005,
   0.378478,
   0.3140394,
   0.2743305,
   0.2325351,
   0.1928875,
   0.1724734,
   0.1460683,
   0.1429343,
   0.09635694,
   0.08498594,
   0.07654296,
   0.02882332,
   0.01651943};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMinimum(0.1377231);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors335833623366->SetMaximum(137.7231);
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
   Data__628->SetBinContent(2,1.15);
   Data__628->SetBinContent(3,13.425);
   Data__628->SetBinContent(4,48.225);
   Data__628->SetBinContent(5,95.525);
   Data__628->SetBinContent(6,112.35);
   Data__628->SetBinContent(7,107.9);
   Data__628->SetBinContent(8,99.8);
   Data__628->SetBinContent(9,87.6);
   Data__628->SetBinContent(10,75.625);
   Data__628->SetBinContent(11,64.125);
   Data__628->SetBinContent(12,55.3);
   Data__628->SetBinContent(13,45.85);
   Data__628->SetBinContent(14,33.2);
   Data__628->SetBinContent(15,23.6125);
   Data__628->SetBinContent(16,18.5125);
   Data__628->SetBinContent(17,12.6375);
   Data__628->SetBinContent(18,11.0125);
   Data__628->SetBinContent(19,7.9625);
   Data__628->SetBinContent(20,5.5875);
   Data__628->SetBinContent(21,4.2875);
   Data__628->SetBinContent(22,2.9375);
   Data__628->SetBinContent(23,2.22);
   Data__628->SetBinContent(24,1.62);
   Data__628->SetBinContent(25,1.25);
   Data__628->SetBinContent(26,0.6166667);
   Data__628->SetBinContent(27,0.22);
   Data__628->SetBinError(2,0.1695582);
   Data__628->SetBinError(3,0.5793315);
   Data__628->SetBinError(4,1.09801);
   Data__628->SetBinError(5,1.545356);
   Data__628->SetBinError(6,1.675933);
   Data__628->SetBinError(7,1.642407);
   Data__628->SetBinError(8,1.579557);
   Data__628->SetBinError(9,1.479865);
   Data__628->SetBinError(10,1.375);
   Data__628->SetBinError(11,1.266146);
   Data__628->SetBinError(12,1.175798);
   Data__628->SetBinError(13,0.7570502);
   Data__628->SetBinError(14,0.6442049);
   Data__628->SetBinError(15,0.5432828);
   Data__628->SetBinError(16,0.481047);
   Data__628->SetBinError(17,0.3974528);
   Data__628->SetBinError(18,0.3710206);
   Data__628->SetBinError(19,0.3154857);
   Data__628->SetBinError(20,0.2642797);
   Data__628->SetBinError(21,0.2315032);
   Data__628->SetBinError(22,0.1916214);
   Data__628->SetBinError(23,0.1489966);
   Data__628->SetBinError(24,0.1272792);
   Data__628->SetBinError(25,0.1118034);
   Data__628->SetBinError(26,0.04533824);
   Data__628->SetBinError(27,0.02097618);
   Data__628->SetEntries(41120.23);
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
   hframe_copy__629->SetMaximum(876.4197);
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
   hframe_copy__630->SetMaximum(876.4197);
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
