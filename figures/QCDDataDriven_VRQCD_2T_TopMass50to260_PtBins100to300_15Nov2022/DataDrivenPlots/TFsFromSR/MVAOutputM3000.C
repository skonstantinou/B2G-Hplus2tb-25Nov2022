void MVAOutputM3000()
{
//=========Macro generated from canvas: MVAOutputM3000/MVAOutputM3000
//=========  (Fri Nov 18 13:28:09 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM3000 = new TCanvas("MVAOutputM3000", "MVAOutputM3000",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM3000->SetHighLightColor(2);
   MVAOutputM3000->Range(0,0,1,1);
   MVAOutputM3000->SetFillColor(0);
   MVAOutputM3000->SetBorderMode(0);
   MVAOutputM3000->SetBorderSize(2);
   MVAOutputM3000->SetTickx(1);
   MVAOutputM3000->SetTicky(1);
   MVAOutputM3000->SetLeftMargin(0.16);
   MVAOutputM3000->SetRightMargin(0.05);
   MVAOutputM3000->SetTopMargin(0.06);
   MVAOutputM3000->SetBottomMargin(0.13);
   MVAOutputM3000->SetFrameFillStyle(0);
   MVAOutputM3000->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM3000_2
   TPad *MVAOutputM3000_2 = new TPad("MVAOutputM3000_2", "MVAOutputM3000_2",0,0,1,0.304);
   MVAOutputM3000_2->Draw();
   MVAOutputM3000_2->cd();
   MVAOutputM3000_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM3000_2->SetFillColor(0);
   MVAOutputM3000_2->SetFillStyle(4000);
   MVAOutputM3000_2->SetBorderMode(0);
   MVAOutputM3000_2->SetBorderSize(2);
   MVAOutputM3000_2->SetTickx(1);
   MVAOutputM3000_2->SetTicky(1);
   MVAOutputM3000_2->SetLeftMargin(0.16);
   MVAOutputM3000_2->SetRightMargin(0.05);
   MVAOutputM3000_2->SetTopMargin(0);
   MVAOutputM3000_2->SetBottomMargin(0.3421053);
   MVAOutputM3000_2->SetFrameFillStyle(0);
   MVAOutputM3000_2->SetFrameBorderMode(0);
   MVAOutputM3000_2->SetFrameFillStyle(0);
   MVAOutputM3000_2->SetFrameBorderMode(0);
   
   TH1F *hframe__351 = new TH1F("hframe__351","",1000,0,1.01);
   hframe__351->SetMinimum(0.3);
   hframe__351->SetMaximum(1.7);
   hframe__351->SetDirectory(0);
   hframe__351->SetStats(0);
   hframe__351->SetLineStyle(0);
   hframe__351->SetMarkerStyle(20);
   hframe__351->GetXaxis()->SetTitle("DNN Output");
   hframe__351->GetXaxis()->SetLabelFont(43);
   hframe__351->GetXaxis()->SetLabelOffset(0.007);
   hframe__351->GetXaxis()->SetLabelSize(27);
   hframe__351->GetXaxis()->SetTitleSize(33);
   hframe__351->GetXaxis()->SetTitleOffset(2.960526);
   hframe__351->GetXaxis()->SetTitleFont(43);
   hframe__351->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__351->GetYaxis()->SetNdivisions(505);
   hframe__351->GetYaxis()->SetLabelFont(43);
   hframe__351->GetYaxis()->SetLabelOffset(0.007);
   hframe__351->GetYaxis()->SetLabelSize(21);
   hframe__351->GetYaxis()->SetTitleSize(33);
   hframe__351->GetYaxis()->SetTitleOffset(1.5625);
   hframe__351->GetYaxis()->SetTitleFont(43);
   hframe__351->GetZaxis()->SetLabelFont(43);
   hframe__351->GetZaxis()->SetLabelOffset(0.007);
   hframe__351->GetZaxis()->SetLabelSize(27);
   hframe__351->GetZaxis()->SetTitleSize(33);
   hframe__351->GetZaxis()->SetTitleOffset(1);
   hframe__351->GetZaxis()->SetTitleFont(43);
   hframe__351->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3201[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BackgroundStatSystError_fy3201[20] = {
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
   Double_t BackgroundStatSystError_felx3201[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3201[20] = {
   0.01110656,
   0.02770302,
   0.03382101,
   0.03958823,
   0.04219384,
   0.04671159,
   0.05040003,
   0.05276492,
   0.0579685,
   0.05793304,
   0.06192306,
   0.06258225,
   0.06532413,
   0.06571908,
   0.06669417,
   0.07114629,
   0.07316761,
   0.07796049,
   0.07922074,
   0.1067421};
   Double_t BackgroundStatSystError_fehx3201[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3201[20] = {
   0.01110656,
   0.02770302,
   0.03382101,
   0.03958823,
   0.04219384,
   0.04671159,
   0.05040003,
   0.05276492,
   0.0579685,
   0.05793304,
   0.06192306,
   0.06258225,
   0.06532413,
   0.06571908,
   0.06669417,
   0.07114629,
   0.07316761,
   0.07796049,
   0.07922074,
   0.1067421};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3201,BackgroundStatSystError_fy3201,BackgroundStatSystError_felx3201,BackgroundStatSystError_fehx3201,BackgroundStatSystError_fely3201,BackgroundStatSystError_fehy3201);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1260;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError319331973201 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError319331973201","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMinimum(0.8719095);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMaximum(1.128091);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError319331973201);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3202[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BackgroundStatError_fy3202[20] = {
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
   Double_t BackgroundStatError_felx3202[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fely3202[20] = {
   0.01110656,
   0.02770302,
   0.03382101,
   0.03958823,
   0.04219384,
   0.04671159,
   0.05040003,
   0.05276492,
   0.0579685,
   0.05793304,
   0.06192306,
   0.06258225,
   0.06532413,
   0.06571908,
   0.06669417,
   0.07114629,
   0.07316761,
   0.07796049,
   0.07922074,
   0.1067421};
   Double_t BackgroundStatError_fehx3202[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fehy3202[20] = {
   0.01110656,
   0.02770302,
   0.03382101,
   0.03958823,
   0.04219384,
   0.04671159,
   0.05040003,
   0.05276492,
   0.0579685,
   0.05793304,
   0.06192306,
   0.06258225,
   0.06532413,
   0.06571908,
   0.06669417,
   0.07114629,
   0.07316761,
   0.07796049,
   0.07922074,
   0.1067421};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3202,BackgroundStatError_fy3202,BackgroundStatError_felx3202,BackgroundStatError_fehx3202,BackgroundStatError_fely3202,BackgroundStatError_fehy3202);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1259;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError319431983202 = new TH1F("Graph_Graph_Graph_BackgroundStatError319431983202","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMinimum(0.8719095);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMaximum(1.128091);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError319431983202);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx51[2] = {
   0,
   1.01};
   Double_t Graph0_fy51[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx51,Graph0_fy51);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0495051 = new TH1F("Graph_Graph_Graph_Graph0495051","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0495051->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0495051->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0495051->SetDirectory(0);
   Graph_Graph_Graph_Graph0495051->SetStats(0);
   Graph_Graph_Graph_Graph0495051->SetLineStyle(0);
   Graph_Graph_Graph_Graph0495051->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0495051);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3203[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph1_fy3203[20] = {
   0.958503,
   1.041926,
   0.9691542,
   1.012923,
   1.002531,
   1.015294,
   1.160995,
   1.024071,
   1.06565,
   1.090876,
   1.160951,
   1.099684,
   1.230251,
   0.9665279,
   1.300274,
   1.00371,
   1.070143,
   1.229309,
   0.8103345,
   0.8007591};
   Double_t Graph1_felx3203[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3203[20] = {
   0.01193753,
   0.03103665,
   0.03550706,
   0.04330947,
   0.04474517,
   0.04879193,
   0.05776167,
   0.05671804,
   0.06268527,
   0.06428049,
   0.06913363,
   0.06968966,
   0.07859788,
   0.06717833,
   0.08174755,
   0.07115113,
   0.07932426,
   0.09087314,
   0.07428324,
   0.1000949};
   Double_t Graph1_fehx3203[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3203[20] = {
   0.01193753,
   0.03103665,
   0.03550706,
   0.04330947,
   0.04474517,
   0.04879193,
   0.05776167,
   0.05671804,
   0.06268527,
   0.06428049,
   0.06913363,
   0.06968966,
   0.07859788,
   0.06717833,
   0.08174755,
   0.07115113,
   0.07932426,
   0.09087314,
   0.07428324,
   0.1000949};
   grae = new TGraphAsymmErrors(20,Graph1_fx3203,Graph1_fy3203,Graph1_felx3203,Graph1_fehx3203,Graph1_fely3203,Graph1_fehy3203);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1319531993203 = new TH1F("Graph_Graph_Graph_Graph1319531993203","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1319531993203->SetMinimum(0.6325285);
   Graph_Graph_Graph_Graph1319531993203->SetMaximum(1.450158);
   Graph_Graph_Graph_Graph1319531993203->SetDirectory(0);
   Graph_Graph_Graph_Graph1319531993203->SetStats(0);
   Graph_Graph_Graph_Graph1319531993203->SetLineStyle(0);
   Graph_Graph_Graph_Graph1319531993203->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1319531993203);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__352 = new TH1F("hframe_copy__352","",1000,0,1.01);
   hframe_copy__352->SetMinimum(0.3);
   hframe_copy__352->SetMaximum(1.7);
   hframe_copy__352->SetDirectory(0);
   hframe_copy__352->SetStats(0);
   hframe_copy__352->SetLineStyle(0);
   hframe_copy__352->SetMarkerStyle(20);
   hframe_copy__352->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__352->GetXaxis()->SetLabelFont(43);
   hframe_copy__352->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__352->GetXaxis()->SetLabelSize(27);
   hframe_copy__352->GetXaxis()->SetTitleSize(33);
   hframe_copy__352->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__352->GetXaxis()->SetTitleFont(43);
   hframe_copy__352->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__352->GetYaxis()->SetNdivisions(505);
   hframe_copy__352->GetYaxis()->SetLabelFont(43);
   hframe_copy__352->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__352->GetYaxis()->SetLabelSize(21);
   hframe_copy__352->GetYaxis()->SetTitleSize(33);
   hframe_copy__352->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__352->GetYaxis()->SetTitleFont(43);
   hframe_copy__352->GetZaxis()->SetLabelFont(43);
   hframe_copy__352->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__352->GetZaxis()->SetLabelSize(27);
   hframe_copy__352->GetZaxis()->SetTitleSize(33);
   hframe_copy__352->GetZaxis()->SetTitleOffset(1);
   hframe_copy__352->GetZaxis()->SetTitleFont(43);
   hframe_copy__352->Draw("sameaxis");
   MVAOutputM3000_2->Modified();
   MVAOutputM3000->cd();
  
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
   MVAOutputM3000->cd();
  
// ------------>Primitives in pad: MVAOutputM3000_1
   TPad *MVAOutputM3000_1 = new TPad("MVAOutputM3000_1", "MVAOutputM3000_1",0,0.2897959,1,1);
   MVAOutputM3000_1->Draw();
   MVAOutputM3000_1->cd();
   MVAOutputM3000_1->Range(-0.204557,-2.17345,1.073924,6.499038);
   MVAOutputM3000_1->SetFillColor(0);
   MVAOutputM3000_1->SetFillStyle(4000);
   MVAOutputM3000_1->SetBorderMode(0);
   MVAOutputM3000_1->SetBorderSize(2);
   MVAOutputM3000_1->SetLogy();
   MVAOutputM3000_1->SetTickx(1);
   MVAOutputM3000_1->SetTicky(1);
   MVAOutputM3000_1->SetLeftMargin(0.16);
   MVAOutputM3000_1->SetRightMargin(0.05);
   MVAOutputM3000_1->SetTopMargin(0.06);
   MVAOutputM3000_1->SetBottomMargin(0.02);
   MVAOutputM3000_1->SetFrameFillStyle(0);
   MVAOutputM3000_1->SetFrameBorderMode(0);
   MVAOutputM3000_1->SetFrameFillStyle(0);
   MVAOutputM3000_1->SetFrameBorderMode(0);
   
   TH1F *hframe__353 = new TH1F("hframe__353","",1000,0,1.01);
   hframe__353->SetMinimum(0.01);
   hframe__353->SetMaximum(952114.4);
   hframe__353->SetDirectory(0);
   hframe__353->SetStats(0);
   hframe__353->SetLineStyle(0);
   hframe__353->SetMarkerStyle(20);
   hframe__353->GetXaxis()->SetLabelFont(43);
   hframe__353->GetXaxis()->SetLabelOffset(0.007);
   hframe__353->GetXaxis()->SetLabelSize(0);
   hframe__353->GetXaxis()->SetTitleSize(0);
   hframe__353->GetXaxis()->SetTitleOffset(0.9);
   hframe__353->GetXaxis()->SetTitleFont(43);
   hframe__353->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__353->GetYaxis()->SetLabelFont(43);
   hframe__353->GetYaxis()->SetLabelOffset(0.007);
   hframe__353->GetYaxis()->SetLabelSize(27);
   hframe__353->GetYaxis()->SetTitleSize(33);
   hframe__353->GetYaxis()->SetTitleOffset(1.5625);
   hframe__353->GetYaxis()->SetTitleFont(43);
   hframe__353->GetZaxis()->SetLabelFont(43);
   hframe__353->GetZaxis()->SetLabelOffset(0.007);
   hframe__353->GetZaxis()->SetLabelSize(27);
   hframe__353->GetZaxis()->SetTitleSize(33);
   hframe__353->GetZaxis()->SetTitleOffset(1);
   hframe__353->GetZaxis()->SetTitleFont(43);
   hframe__353->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis301[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_49_stack_50_stack_51 = new TH1F("StackedMCstackHist_stack_49_stack_50_stack_51","StackedMCstackHist",20, xAxis301);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMinimum(2.986696);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMaximum(246571.8);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetDirectory(0);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetStats(0);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetLineStyle(0);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMarkerStyle(20);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_49_stack_50_stack_51);
   
   Double_t xAxis302[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM3000Inclusive",20, xAxis302);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2979.353);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,489.1491);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,411.5042);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,210.4018);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,202.2776);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,115.9057);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,164.4806);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,143.6768);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,123.3335);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,90.24888);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,130.2);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,96.9747);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,89.84818);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,74.83482);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,93.87802);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,65.74944);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,86.71351);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,66.0558);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,55.55212);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,19.1208);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,116.2227);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,52.97015);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,59.245);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,26.58645);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,26.57534);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,18.27333);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,25.08255);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,22.17852);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,22.89719);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,14.20656);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,20.78227);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,15.69936);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,17.83345);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,14.73915);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,21.33322);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,15.74957);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,15.81637);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,15.62976);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,14.32557);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,8.891829);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1248.243);
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
   Double_t xAxis303[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM3000Inclusive",20, xAxis303);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,46237.95);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,6731.646);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4143.179);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3077.347);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2416.639);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1987.474);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1796.177);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1565.789);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1381.49);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1315.403);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1173.227);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1098.533);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1006.223);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,932.7744);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,916.4474);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,838.0354);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,805.181);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,765.9954);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,638.9269);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,360.7847);
   TT_stack_2_stack_2_stack_2->SetBinError(1,232.9683);
   TT_stack_2_stack_2_stack_2->SetBinError(2,89.19268);
   TT_stack_2_stack_2_stack_2->SetBinError(3,70.19085);
   TT_stack_2_stack_2_stack_2->SetBinError(4,60.5667);
   TT_stack_2_stack_2_stack_2->SetBinError(5,53.65933);
   TT_stack_2_stack_2_stack_2->SetBinError(6,48.80447);
   TT_stack_2_stack_2_stack_2->SetBinError(7,46.29889);
   TT_stack_2_stack_2_stack_2->SetBinError(8,43.49345);
   TT_stack_2_stack_2_stack_2->SetBinError(9,40.43766);
   TT_stack_2_stack_2_stack_2->SetBinError(10,39.62188);
   TT_stack_2_stack_2_stack_2->SetBinError(11,37.65366);
   TT_stack_2_stack_2_stack_2->SetBinError(12,36.17614);
   TT_stack_2_stack_2_stack_2->SetBinError(13,34.85805);
   TT_stack_2_stack_2_stack_2->SetBinError(14,33.45803);
   TT_stack_2_stack_2_stack_2->SetBinError(15,33.18141);
   TT_stack_2_stack_2_stack_2->SetBinError(16,31.89817);
   TT_stack_2_stack_2_stack_2->SetBinError(17,30.94523);
   TT_stack_2_stack_2_stack_2->SetBinError(18,30.4849);
   TT_stack_2_stack_2_stack_2->SetBinError(19,27.65035);
   TT_stack_2_stack_2_stack_2->SetBinError(20,20.30052);
   TT_stack_2_stack_2_stack_2->SetEntries(67019.1);
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
   Double_t xAxis304[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM3000Inclusive",20, xAxis304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,85304.97);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,14412.22);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,10819.55);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7512.676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7395.731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6426.168);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,4998.889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,4657.281);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,3919.098);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3874.508);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3554.658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3333.065);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2886.855);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3275.764);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2881.161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3061.503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2509.521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2145.231);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,2242.58);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1218.578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1471.222);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,590.2536);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,511.7951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,422.4224);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,418.2923);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,395.0058);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,346.7863);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,332.3744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,310.9635);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,302.9859);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,297.7373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,280.6511);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,257.218);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,279.1151);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,256.5241);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,279.8636);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,246.435);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,229.5683);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,230.5826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,169.18);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7148.648);
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
   Double_t xAxis305[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__354 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__354","h_SR_MVAOutputM3000Inclusive",20, xAxis305);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(1,218.5291);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(2,36.65431);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(3,18.89896);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(4,20.81825);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(5,4.369392);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(6,27.83332);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(7,11.88774);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(8,12.77285);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(9,3.826688);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(10,2.910516);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(11,9.418911);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(12,8.850385);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(13,8.542888);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(14,13.76547);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(15,-1.416859);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(16,8.210765);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(17,7.083971);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(18,8.546017);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(19,-1.10531);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(20,4.819001);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(1,24.61904);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(2,10.04777);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(3,8.176321);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(4,7.173431);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(5,6.649016);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(6,6.182016);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(7,6.266747);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(8,5.501421);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(9,5.909625);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(10,5.486438);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(11,5.155164);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(12,5.159859);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(13,5.366799);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(14,4.814053);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(15,5.144322);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(16,4.286555);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(17,4.041694);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(18,4.572119);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(19,4.019012);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(20,2.467634);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetEntries(144.4332);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3204[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3204[20] = {
   134522.3,
   21633.02,
   15374.23,
   10800.42,
   10014.65,
   8529.547,
   6959.546,
   6366.747,
   5423.921,
   5280.16,
   4858.086,
   4528.573,
   3982.926,
   4283.374,
   3891.486,
   3965.288,
   3401.415,
   2977.282,
   2937.059,
   1598.483};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3204[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3204[20] = {
   1494.08,
   599.3,
   519.972,
   427.5697,
   422.5565,
   398.4287,
   350.7613,
   335.9409,
   314.4166,
   305.8957,
   300.8276,
   283.4083,
   260.1811,
   281.4994,
   259.5394,
   282.1155,
   248.8734,
   232.1104,
   232.676,
   170.6254};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3204[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3204[20] = {
   1494.08,
   599.3,
   519.972,
   427.5697,
   422.5565,
   398.4287,
   350.7613,
   335.9409,
   314.4166,
   305.8957,
   300.8276,
   283.4083,
   260.1811,
   281.4994,
   259.5394,
   282.1155,
   248.8734,
   232.1104,
   232.676,
   170.6254};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3204,BkgSum-SR-Inclusive_sum_errors_fy3204,BkgSum-SR-Inclusive_sum_errors_felx3204,BkgSum-SR-Inclusive_sum_errors_fehx3204,BkgSum-SR-Inclusive_sum_errors_fely3204,BkgSum-SR-Inclusive_sum_errors_fehy3204);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMinimum(1285.072);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMaximum(149475.2);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors319632003204);
   
   grae->Draw("e2 ");
   Double_t xAxis306[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__355 = new TH1F("Data__355","h_SR_MVAOutputM3000Inclusive",20, xAxis306);
   Data__355->SetBinContent(1,128940);
   Data__355->SetBinContent(2,22540);
   Data__355->SetBinContent(3,14900);
   Data__355->SetBinContent(4,10940);
   Data__355->SetBinContent(5,10040);
   Data__355->SetBinContent(6,8660);
   Data__355->SetBinContent(7,8080);
   Data__355->SetBinContent(8,6520);
   Data__355->SetBinContent(9,5780);
   Data__355->SetBinContent(10,5760);
   Data__355->SetBinContent(11,5640);
   Data__355->SetBinContent(12,4980);
   Data__355->SetBinContent(13,4900);
   Data__355->SetBinContent(14,4140);
   Data__355->SetBinContent(15,5060);
   Data__355->SetBinContent(16,3980);
   Data__355->SetBinContent(17,3640);
   Data__355->SetBinContent(18,3660);
   Data__355->SetBinContent(19,2380);
   Data__355->SetBinContent(20,1280);
   Data__355->SetBinError(1,1605.864);
   Data__355->SetBinError(2,671.4164);
   Data__355->SetBinError(3,545.8938);
   Data__355->SetBinError(4,467.7606);
   Data__355->SetBinError(5,448.1071);
   Data__355->SetBinError(6,416.173);
   Data__355->SetBinError(7,401.995);
   Data__355->SetBinError(8,361.1094);
   Data__355->SetBinError(9,340);
   Data__355->SetBinError(10,339.4113);
   Data__355->SetBinError(11,335.8571);
   Data__355->SetBinError(12,315.5947);
   Data__355->SetBinError(13,313.0495);
   Data__355->SetBinError(14,287.7499);
   Data__355->SetBinError(15,318.1195);
   Data__355->SetBinError(16,282.1347);
   Data__355->SetBinError(17,269.8148);
   Data__355->SetBinError(18,270.555);
   Data__355->SetBinError(19,218.1742);
   Data__355->SetBinError(20,160);
   Data__355->SetEntries(13091);
   Data__355->SetDirectory(0);
   Data__355->SetFillStyle(3001);
   Data__355->SetLineWidth(2);
   Data__355->SetMarkerStyle(20);
   Data__355->SetMarkerSize(1.2);
   Data__355->GetXaxis()->SetRange(1,200);
   Data__355->GetXaxis()->SetLabelFont(42);
   Data__355->GetXaxis()->SetTitleOffset(1);
   Data__355->GetXaxis()->SetTitleFont(42);
   Data__355->GetYaxis()->SetLabelFont(42);
   Data__355->GetYaxis()->SetTitleFont(42);
   Data__355->GetZaxis()->SetLabelFont(42);
   Data__355->GetZaxis()->SetTitleOffset(1);
   Data__355->GetZaxis()->SetTitleFont(42);
   Data__355->Draw("EP same");
   
   TLegend *leg = new TLegend(0.39,0.76,0.92,0.91,NULL,"brNDC");
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

   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__356 = new TH1F("hframe_copy__356","",1000,0,1.01);
   hframe_copy__356->SetMinimum(0.01);
   hframe_copy__356->SetMaximum(952114.4);
   hframe_copy__356->SetDirectory(0);
   hframe_copy__356->SetStats(0);
   hframe_copy__356->SetLineStyle(0);
   hframe_copy__356->SetMarkerStyle(20);
   hframe_copy__356->GetXaxis()->SetLabelFont(43);
   hframe_copy__356->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__356->GetXaxis()->SetLabelSize(0);
   hframe_copy__356->GetXaxis()->SetTitleSize(0);
   hframe_copy__356->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__356->GetXaxis()->SetTitleFont(43);
   hframe_copy__356->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__356->GetYaxis()->SetLabelFont(43);
   hframe_copy__356->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__356->GetYaxis()->SetLabelSize(27);
   hframe_copy__356->GetYaxis()->SetTitleSize(33);
   hframe_copy__356->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__356->GetYaxis()->SetTitleFont(43);
   hframe_copy__356->GetZaxis()->SetLabelFont(43);
   hframe_copy__356->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__356->GetZaxis()->SetLabelSize(27);
   hframe_copy__356->GetZaxis()->SetTitleSize(33);
   hframe_copy__356->GetZaxis()->SetTitleOffset(1);
   hframe_copy__356->GetZaxis()->SetTitleFont(43);
   hframe_copy__356->Draw("sameaxis");
   
   TH1F *hframe_copy__357 = new TH1F("hframe_copy__357","",1000,0,1.01);
   hframe_copy__357->SetMinimum(0.01);
   hframe_copy__357->SetMaximum(952114.4);
   hframe_copy__357->SetDirectory(0);
   hframe_copy__357->SetStats(0);
   hframe_copy__357->SetLineStyle(0);
   hframe_copy__357->SetMarkerStyle(20);
   hframe_copy__357->GetXaxis()->SetLabelFont(43);
   hframe_copy__357->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__357->GetXaxis()->SetLabelSize(0);
   hframe_copy__357->GetXaxis()->SetTitleSize(0);
   hframe_copy__357->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__357->GetXaxis()->SetTitleFont(43);
   hframe_copy__357->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__357->GetYaxis()->SetLabelFont(43);
   hframe_copy__357->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__357->GetYaxis()->SetLabelSize(27);
   hframe_copy__357->GetYaxis()->SetTitleSize(33);
   hframe_copy__357->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__357->GetYaxis()->SetTitleFont(43);
   hframe_copy__357->GetZaxis()->SetLabelFont(43);
   hframe_copy__357->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__357->GetZaxis()->SetLabelSize(27);
   hframe_copy__357->GetZaxis()->SetTitleSize(33);
   hframe_copy__357->GetZaxis()->SetTitleOffset(1);
   hframe_copy__357->GetZaxis()->SetTitleFont(43);
   hframe_copy__357->Draw("sameaxis");
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
   MVAOutputM3000_1->Modified();
   MVAOutputM3000->cd();
   MVAOutputM3000->Modified();
   MVAOutputM3000->cd();
   MVAOutputM3000->SetSelected(MVAOutputM3000);
}
