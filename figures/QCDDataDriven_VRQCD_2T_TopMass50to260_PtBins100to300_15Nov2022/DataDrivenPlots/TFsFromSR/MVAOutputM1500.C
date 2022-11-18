void MVAOutputM1500()
{
//=========Macro generated from canvas: MVAOutputM1500/MVAOutputM1500
//=========  (Fri Nov 18 13:27:59 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM1500 = new TCanvas("MVAOutputM1500", "MVAOutputM1500",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM1500->SetHighLightColor(2);
   MVAOutputM1500->Range(0,0,1,1);
   MVAOutputM1500->SetFillColor(0);
   MVAOutputM1500->SetBorderMode(0);
   MVAOutputM1500->SetBorderSize(2);
   MVAOutputM1500->SetTickx(1);
   MVAOutputM1500->SetTicky(1);
   MVAOutputM1500->SetLeftMargin(0.16);
   MVAOutputM1500->SetRightMargin(0.05);
   MVAOutputM1500->SetTopMargin(0.06);
   MVAOutputM1500->SetBottomMargin(0.13);
   MVAOutputM1500->SetFrameFillStyle(0);
   MVAOutputM1500->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM1500_2
   TPad *MVAOutputM1500_2 = new TPad("MVAOutputM1500_2", "MVAOutputM1500_2",0,0,1,0.304);
   MVAOutputM1500_2->Draw();
   MVAOutputM1500_2->cd();
   MVAOutputM1500_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM1500_2->SetFillColor(0);
   MVAOutputM1500_2->SetFillStyle(4000);
   MVAOutputM1500_2->SetBorderMode(0);
   MVAOutputM1500_2->SetBorderSize(2);
   MVAOutputM1500_2->SetTickx(1);
   MVAOutputM1500_2->SetTicky(1);
   MVAOutputM1500_2->SetLeftMargin(0.16);
   MVAOutputM1500_2->SetRightMargin(0.05);
   MVAOutputM1500_2->SetTopMargin(0);
   MVAOutputM1500_2->SetBottomMargin(0.3421053);
   MVAOutputM1500_2->SetFrameFillStyle(0);
   MVAOutputM1500_2->SetFrameBorderMode(0);
   MVAOutputM1500_2->SetFrameFillStyle(0);
   MVAOutputM1500_2->SetFrameBorderMode(0);
   
   TH1F *hframe__267 = new TH1F("hframe__267","",1000,0,1.01);
   hframe__267->SetMinimum(0.3);
   hframe__267->SetMaximum(1.7);
   hframe__267->SetDirectory(0);
   hframe__267->SetStats(0);
   hframe__267->SetLineStyle(0);
   hframe__267->SetMarkerStyle(20);
   hframe__267->GetXaxis()->SetTitle("DNN Output");
   hframe__267->GetXaxis()->SetLabelFont(43);
   hframe__267->GetXaxis()->SetLabelOffset(0.007);
   hframe__267->GetXaxis()->SetLabelSize(27);
   hframe__267->GetXaxis()->SetTitleSize(33);
   hframe__267->GetXaxis()->SetTitleOffset(2.960526);
   hframe__267->GetXaxis()->SetTitleFont(43);
   hframe__267->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__267->GetYaxis()->SetNdivisions(505);
   hframe__267->GetYaxis()->SetLabelFont(43);
   hframe__267->GetYaxis()->SetLabelOffset(0.007);
   hframe__267->GetYaxis()->SetLabelSize(21);
   hframe__267->GetYaxis()->SetTitleSize(33);
   hframe__267->GetYaxis()->SetTitleOffset(1.5625);
   hframe__267->GetYaxis()->SetTitleFont(43);
   hframe__267->GetZaxis()->SetLabelFont(43);
   hframe__267->GetZaxis()->SetLabelOffset(0.007);
   hframe__267->GetZaxis()->SetLabelSize(27);
   hframe__267->GetZaxis()->SetTitleSize(33);
   hframe__267->GetZaxis()->SetTitleOffset(1);
   hframe__267->GetZaxis()->SetTitleFont(43);
   hframe__267->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3153[20] = {
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
   Double_t BackgroundStatSystError_fy3153[20] = {
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
   Double_t BackgroundStatSystError_felx3153[20] = {
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
   Double_t BackgroundStatSystError_fely3153[20] = {
   0.01188446,
   0.02453623,
   0.02950126,
   0.03318274,
   0.03777628,
   0.04246915,
   0.0448736,
   0.04812868,
   0.05310866,
   0.05914301,
   0.06504877,
   0.06747238,
   0.07844747,
   0.07630525,
   0.08436655,
   0.08434713,
   0.08730643,
   0.09124225,
   0.08287086,
   0.07105005};
   Double_t BackgroundStatSystError_fehx3153[20] = {
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
   Double_t BackgroundStatSystError_fehy3153[20] = {
   0.01188446,
   0.02453623,
   0.02950126,
   0.03318274,
   0.03777628,
   0.04246915,
   0.0448736,
   0.04812868,
   0.05310866,
   0.05914301,
   0.06504877,
   0.06747238,
   0.07844747,
   0.07630525,
   0.08436655,
   0.08434713,
   0.08730643,
   0.09124225,
   0.08287086,
   0.07105005};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3153,BackgroundStatSystError_fy3153,BackgroundStatSystError_felx3153,BackgroundStatSystError_fehx3153,BackgroundStatSystError_fely3153,BackgroundStatSystError_fehy3153);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1248;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError314531493153 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError314531493153","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMinimum(0.8905093);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMaximum(1.109491);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError314531493153->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError314531493153);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3154[20] = {
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
   Double_t BackgroundStatError_fy3154[20] = {
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
   Double_t BackgroundStatError_felx3154[20] = {
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
   Double_t BackgroundStatError_fely3154[20] = {
   0.01188446,
   0.02453623,
   0.02950126,
   0.03318274,
   0.03777628,
   0.04246915,
   0.0448736,
   0.04812868,
   0.05310866,
   0.05914301,
   0.06504877,
   0.06747238,
   0.07844747,
   0.07630525,
   0.08436655,
   0.08434713,
   0.08730643,
   0.09124225,
   0.08287086,
   0.07105005};
   Double_t BackgroundStatError_fehx3154[20] = {
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
   Double_t BackgroundStatError_fehy3154[20] = {
   0.01188446,
   0.02453623,
   0.02950126,
   0.03318274,
   0.03777628,
   0.04246915,
   0.0448736,
   0.04812868,
   0.05310866,
   0.05914301,
   0.06504877,
   0.06747238,
   0.07844747,
   0.07630525,
   0.08436655,
   0.08434713,
   0.08730643,
   0.09124225,
   0.08287086,
   0.07105005};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3154,BackgroundStatError_fy3154,BackgroundStatError_felx3154,BackgroundStatError_fehx3154,BackgroundStatError_fely3154,BackgroundStatError_fehy3154);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1247;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError314631503154 = new TH1F("Graph_Graph_Graph_BackgroundStatError314631503154","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMinimum(0.8905093);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMaximum(1.109491);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError314631503154->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError314631503154->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError314631503154);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx39[2] = {
   0,
   1.01};
   Double_t Graph0_fy39[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx39,Graph0_fy39);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0373839 = new TH1F("Graph_Graph_Graph_Graph0373839","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0373839->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0373839->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0373839->SetDirectory(0);
   Graph_Graph_Graph_Graph0373839->SetStats(0);
   Graph_Graph_Graph_Graph0373839->SetLineStyle(0);
   Graph_Graph_Graph_Graph0373839->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0373839->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0373839->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0373839->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0373839);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3155[20] = {
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
   Double_t Graph1_fy3155[20] = {
   0.9459408,
   1.018907,
   1.077939,
   1.03007,
   1.139549,
   1.168366,
   1.052799,
   1.01859,
   1.019479,
   1.015521,
   1.070052,
   0.912578,
   1.197746,
   0.8727457,
   1.145172,
   0.9160634,
   0.986374,
   1.191938,
   1.064603,
   0.8059148};
   Double_t Graph1_felx3155[20] = {
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
   Double_t Graph1_fely3155[20] = {
   0.01265084,
   0.02743799,
   0.03313992,
   0.03581903,
   0.04282689,
   0.04806017,
   0.04835667,
   0.05112157,
   0.05595117,
   0.06238293,
   0.06980252,
   0.06603183,
   0.09324439,
   0.07511399,
   0.0996744,
   0.08542336,
   0.09404707,
   0.107913,
   0.09337184,
   0.06962043};
   Double_t Graph1_fehx3155[20] = {
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
   Double_t Graph1_fehy3155[20] = {
   0.01265084,
   0.02743799,
   0.03313992,
   0.03581903,
   0.04282689,
   0.04806017,
   0.04835667,
   0.05112157,
   0.05595117,
   0.06238293,
   0.06980252,
   0.06603183,
   0.09324439,
   0.07511399,
   0.0996744,
   0.08542336,
   0.09404707,
   0.107913,
   0.09337184,
   0.06962043};
   grae = new TGraphAsymmErrors(20,Graph1_fx3155,Graph1_fy3155,Graph1_felx3155,Graph1_fehx3155,Graph1_fely3155,Graph1_fehy3155);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1314731513155 = new TH1F("Graph_Graph_Graph_Graph1314731513155","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1314731513155->SetMinimum(0.6799387);
   Graph_Graph_Graph_Graph1314731513155->SetMaximum(1.356207);
   Graph_Graph_Graph_Graph1314731513155->SetDirectory(0);
   Graph_Graph_Graph_Graph1314731513155->SetStats(0);
   Graph_Graph_Graph_Graph1314731513155->SetLineStyle(0);
   Graph_Graph_Graph_Graph1314731513155->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1314731513155->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1314731513155->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1314731513155->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1314731513155);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__268 = new TH1F("hframe_copy__268","",1000,0,1.01);
   hframe_copy__268->SetMinimum(0.3);
   hframe_copy__268->SetMaximum(1.7);
   hframe_copy__268->SetDirectory(0);
   hframe_copy__268->SetStats(0);
   hframe_copy__268->SetLineStyle(0);
   hframe_copy__268->SetMarkerStyle(20);
   hframe_copy__268->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__268->GetXaxis()->SetLabelFont(43);
   hframe_copy__268->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__268->GetXaxis()->SetLabelSize(27);
   hframe_copy__268->GetXaxis()->SetTitleSize(33);
   hframe_copy__268->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__268->GetXaxis()->SetTitleFont(43);
   hframe_copy__268->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__268->GetYaxis()->SetNdivisions(505);
   hframe_copy__268->GetYaxis()->SetLabelFont(43);
   hframe_copy__268->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__268->GetYaxis()->SetLabelSize(21);
   hframe_copy__268->GetYaxis()->SetTitleSize(33);
   hframe_copy__268->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__268->GetYaxis()->SetTitleFont(43);
   hframe_copy__268->GetZaxis()->SetLabelFont(43);
   hframe_copy__268->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__268->GetZaxis()->SetLabelSize(27);
   hframe_copy__268->GetZaxis()->SetTitleSize(33);
   hframe_copy__268->GetZaxis()->SetTitleOffset(1);
   hframe_copy__268->GetZaxis()->SetTitleFont(43);
   hframe_copy__268->Draw("sameaxis");
   MVAOutputM1500_2->Modified();
   MVAOutputM1500->cd();
  
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
   MVAOutputM1500->cd();
  
// ------------>Primitives in pad: MVAOutputM1500_1
   TPad *MVAOutputM1500_1 = new TPad("MVAOutputM1500_1", "MVAOutputM1500_1",0,0.2897959,1,1);
   MVAOutputM1500_1->Draw();
   MVAOutputM1500_1->cd();
   MVAOutputM1500_1->Range(-0.204557,-2.172237,1.073924,6.439594);
   MVAOutputM1500_1->SetFillColor(0);
   MVAOutputM1500_1->SetFillStyle(4000);
   MVAOutputM1500_1->SetBorderMode(0);
   MVAOutputM1500_1->SetBorderSize(2);
   MVAOutputM1500_1->SetLogy();
   MVAOutputM1500_1->SetTickx(1);
   MVAOutputM1500_1->SetTicky(1);
   MVAOutputM1500_1->SetLeftMargin(0.16);
   MVAOutputM1500_1->SetRightMargin(0.05);
   MVAOutputM1500_1->SetTopMargin(0.06);
   MVAOutputM1500_1->SetBottomMargin(0.02);
   MVAOutputM1500_1->SetFrameFillStyle(0);
   MVAOutputM1500_1->SetFrameBorderMode(0);
   MVAOutputM1500_1->SetFrameFillStyle(0);
   MVAOutputM1500_1->SetFrameBorderMode(0);
   
   TH1F *hframe__269 = new TH1F("hframe__269","",1000,0,1.01);
   hframe__269->SetMinimum(0.01);
   hframe__269->SetMaximum(837306.5);
   hframe__269->SetDirectory(0);
   hframe__269->SetStats(0);
   hframe__269->SetLineStyle(0);
   hframe__269->SetMarkerStyle(20);
   hframe__269->GetXaxis()->SetLabelFont(43);
   hframe__269->GetXaxis()->SetLabelOffset(0.007);
   hframe__269->GetXaxis()->SetLabelSize(0);
   hframe__269->GetXaxis()->SetTitleSize(0);
   hframe__269->GetXaxis()->SetTitleOffset(0.9);
   hframe__269->GetXaxis()->SetTitleFont(43);
   hframe__269->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__269->GetYaxis()->SetLabelFont(43);
   hframe__269->GetYaxis()->SetLabelOffset(0.007);
   hframe__269->GetYaxis()->SetLabelSize(27);
   hframe__269->GetYaxis()->SetTitleSize(33);
   hframe__269->GetYaxis()->SetTitleOffset(1.5625);
   hframe__269->GetYaxis()->SetTitleFont(43);
   hframe__269->GetZaxis()->SetLabelFont(43);
   hframe__269->GetZaxis()->SetLabelOffset(0.007);
   hframe__269->GetZaxis()->SetLabelSize(27);
   hframe__269->GetZaxis()->SetTitleSize(33);
   hframe__269->GetZaxis()->SetTitleOffset(1);
   hframe__269->GetZaxis()->SetTitleFont(43);
   hframe__269->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis229[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_37_stack_38_stack_39 = new TH1F("StackedMCstackHist_stack_37_stack_38_stack_39","StackedMCstackHist",20, xAxis229);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMinimum(8.725672);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMaximum(205181.1);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetDirectory(0);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetStats(0);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetLineStyle(0);
   StackedMCstackHist_stack_37_stack_38_stack_39->SetMarkerStyle(20);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_37_stack_38_stack_39->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_37_stack_38_stack_39);
   
   Double_t xAxis230[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM1500Inclusive",20, xAxis230);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2450.4);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,751.9545);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,463.7731);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,369.3802);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,222.4267);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,181.8066);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,171.7793);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,194.0516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,106.8327);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,102.0891);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,88.51567);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,96.62057);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,75.67602);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,53.11343);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,50.29773);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,64.48759);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,41.09353);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,64.60125);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,86.45446);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,73.9045);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,105.4632);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,63.18635);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,42.97788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,47.76262);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,28.13102);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,26.82938);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,24.79396);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,42.5177);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,18.25109);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,17.26129);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,16.92001);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,19.04963);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,14.57306);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,15.09698);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,13.61095);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,11.68573);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,13.56577);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,13.94592);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,15.51592);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,16.57013);
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
   Double_t xAxis231[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1500Inclusive",20, xAxis231);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,40730.35);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,8666.562);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,5726.229);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4335.633);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3376.198);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2707.913);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2269.824);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1779.749);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1475.698);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1250.57);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1014.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,866.0015);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,762.0716);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,661.0341);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,541.6339);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,553.5089);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,517.7258);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,488.4915);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,636.6112);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,828.9493);
   TT_stack_2_stack_2_stack_2->SetBinError(1,218.8146);
   TT_stack_2_stack_2_stack_2->SetBinError(2,101.356);
   TT_stack_2_stack_2_stack_2->SetBinError(3,82.46206);
   TT_stack_2_stack_2_stack_2->SetBinError(4,71.5873);
   TT_stack_2_stack_2_stack_2->SetBinError(5,63.40187);
   TT_stack_2_stack_2_stack_2->SetBinError(6,56.85814);
   TT_stack_2_stack_2_stack_2->SetBinError(7,51.93442);
   TT_stack_2_stack_2_stack_2->SetBinError(8,45.92574);
   TT_stack_2_stack_2_stack_2->SetBinError(9,41.85603);
   TT_stack_2_stack_2_stack_2->SetBinError(10,38.47981);
   TT_stack_2_stack_2_stack_2->SetBinError(11,34.67149);
   TT_stack_2_stack_2_stack_2->SetBinError(12,32.05125);
   TT_stack_2_stack_2_stack_2->SetBinError(13,29.92442);
   TT_stack_2_stack_2_stack_2->SetBinError(14,28.52299);
   TT_stack_2_stack_2_stack_2->SetBinError(15,25.06084);
   TT_stack_2_stack_2_stack_2->SetBinError(16,26.02034);
   TT_stack_2_stack_2_stack_2->SetBinError(17,25.04556);
   TT_stack_2_stack_2_stack_2->SetBinError(18,24.11623);
   TT_stack_2_stack_2_stack_2->SetBinError(19,27.60938);
   TT_stack_2_stack_2_stack_2->SetBinError(20,31.39177);
   TT_stack_2_stack_2_stack_2->SetEntries(67019.15);
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
   Double_t xAxis232[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1500Inclusive",20, xAxis232);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,75029.61);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,17649.71);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,13440.04);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11352.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8827.341);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,7226.97);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,6562.961);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,5821.289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4930.601);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3866.339);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3289.293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3223.322);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1917.428);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2379.537);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1713.4);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1892.747);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1671.572);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1493.993);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1719.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2422.56);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1383.707);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,653.3244);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,571.5965);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,525.8249);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,464.2537);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,425.0224);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,399.948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,369.9102);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,342.8765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,305.7725);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,283.0976);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,279.9637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,213.5584);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,233.848);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,192.3906);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,209.8442);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,192.633);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,184.6915);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,199.896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,233.5891);
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
   Double_t xAxis233[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__270 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__270","h_SR_MVAOutputM1500Inclusive",20, xAxis233);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(1,140.5055);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(2,57.05679);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(3,35.43666);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(4,17.34869);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(5,38.04329);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(6,23.71482);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(7,20.96941);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(8,20.52765);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(9,5.162864);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(10,15.21713);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(11,8.017723);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(12,11.31846);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(13,15.62593);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(14,5.240193);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(15,3.349039);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(16,-2.874395);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(17,0.2858051);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(18,1.826234);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(19,6.987729);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinContent(20,1.456942);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(1,18.31755);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(2,12.52348);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(3,10.81874);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(4,9.842262);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(5,9.057375);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(6,8.101224);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(7,8.306232);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(8,7.332103);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(9,6.567322);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(10,6.042255);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(11,5.810891);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(12,5.478578);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(13,5.003742);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(14,4.164577);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(15,4.099743);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(16,4.112889);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(17,3.6237);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(18,3.390644);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(19,4.147148);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetBinError(20,3.71432);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetEntries(144.4332);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__270->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3156[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3156[20] = {
   118210.4,
   27068.23,
   19630.05,
   16057.17,
   12425.96,
   10116.69,
   9004.565,
   7795.089,
   6513.131,
   5218.998,
   4392.309,
   4185.943,
   2755.176,
   3093.685,
   2305.331,
   2510.743,
   2230.391,
   2047.086,
   2442.226,
   3325.414};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3156[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3156[20] = {
   1404.866,
   664.1523,
   579.1111,
   532.8207,
   469.4067,
   429.6472,
   404.0672,
   375.1673,
   345.9037,
   308.6673,
   285.7143,
   282.4355,
   216.1366,
   236.0644,
   194.4928,
   211.774,
   194.7275,
   186.7807,
   202.3893,
   236.2708};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3156[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3156[20] = {
   1404.866,
   664.1523,
   579.1111,
   532.8207,
   469.4067,
   429.6472,
   404.0672,
   375.1673,
   345.9037,
   308.6673,
   285.7143,
   282.4355,
   216.1366,
   236.0644,
   194.4928,
   211.774,
   194.7275,
   186.7807,
   202.3893,
   236.2708};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3156,BkgSum-SR-Inclusive_sum_errors_fy3156,BkgSum-SR-Inclusive_sum_errors_felx3156,BkgSum-SR-Inclusive_sum_errors_fehx3156,BkgSum-SR-Inclusive_sum_errors_fely3156,BkgSum-SR-Inclusive_sum_errors_fehy3156);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1246;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMinimum(1674.275);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMaximum(131390.7);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors314831523156->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors314831523156);
   
   grae->Draw("e2 ");
   Double_t xAxis234[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__271 = new TH1F("Data__271","h_SR_MVAOutputM1500Inclusive",20, xAxis234);
   Data__271->SetBinContent(1,111820);
   Data__271->SetBinContent(2,27580);
   Data__271->SetBinContent(3,21160);
   Data__271->SetBinContent(4,16540);
   Data__271->SetBinContent(5,14160);
   Data__271->SetBinContent(6,11820);
   Data__271->SetBinContent(7,9480);
   Data__271->SetBinContent(8,7940);
   Data__271->SetBinContent(9,6640);
   Data__271->SetBinContent(10,5300);
   Data__271->SetBinContent(11,4700);
   Data__271->SetBinContent(12,3820);
   Data__271->SetBinContent(13,3300);
   Data__271->SetBinContent(14,2700);
   Data__271->SetBinContent(15,2640);
   Data__271->SetBinContent(16,2300);
   Data__271->SetBinContent(17,2200);
   Data__271->SetBinContent(18,2440);
   Data__271->SetBinContent(19,2600);
   Data__271->SetBinContent(20,2680);
   Data__271->SetBinError(1,1495.46);
   Data__271->SetBinError(2,742.6978);
   Data__271->SetBinError(3,650.5382);
   Data__271->SetBinError(4,575.1522);
   Data__271->SetBinError(5,532.1654);
   Data__271->SetBinError(6,486.2098);
   Data__271->SetBinError(7,435.4308);
   Data__271->SetBinError(8,398.4972);
   Data__271->SetBinError(9,364.4173);
   Data__271->SetBinError(10,325.5764);
   Data__271->SetBinError(11,306.5942);
   Data__271->SetBinError(12,276.4055);
   Data__271->SetBinError(13,256.9047);
   Data__271->SetBinError(14,232.379);
   Data__271->SetBinError(15,229.7825);
   Data__271->SetBinError(16,214.4761);
   Data__271->SetBinError(17,209.7618);
   Data__271->SetBinError(18,220.9072);
   Data__271->SetBinError(19,228.0351);
   Data__271->SetBinError(20,231.5167);
   Data__271->SetEntries(13091);
   Data__271->SetDirectory(0);
   Data__271->SetFillStyle(3001);
   Data__271->SetLineWidth(2);
   Data__271->SetMarkerStyle(20);
   Data__271->SetMarkerSize(1.2);
   Data__271->GetXaxis()->SetRange(1,200);
   Data__271->GetXaxis()->SetLabelFont(42);
   Data__271->GetXaxis()->SetTitleOffset(1);
   Data__271->GetXaxis()->SetTitleFont(42);
   Data__271->GetYaxis()->SetLabelFont(42);
   Data__271->GetYaxis()->SetTitleFont(42);
   Data__271->GetZaxis()->SetLabelFont(42);
   Data__271->GetZaxis()->SetTitleOffset(1);
   Data__271->GetZaxis()->SetTitleFont(42);
   Data__271->Draw("EP same");
   
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

   ci = 1246;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1246;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__272 = new TH1F("hframe_copy__272","",1000,0,1.01);
   hframe_copy__272->SetMinimum(0.01);
   hframe_copy__272->SetMaximum(837306.5);
   hframe_copy__272->SetDirectory(0);
   hframe_copy__272->SetStats(0);
   hframe_copy__272->SetLineStyle(0);
   hframe_copy__272->SetMarkerStyle(20);
   hframe_copy__272->GetXaxis()->SetLabelFont(43);
   hframe_copy__272->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__272->GetXaxis()->SetLabelSize(0);
   hframe_copy__272->GetXaxis()->SetTitleSize(0);
   hframe_copy__272->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__272->GetXaxis()->SetTitleFont(43);
   hframe_copy__272->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__272->GetYaxis()->SetLabelFont(43);
   hframe_copy__272->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__272->GetYaxis()->SetLabelSize(27);
   hframe_copy__272->GetYaxis()->SetTitleSize(33);
   hframe_copy__272->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__272->GetYaxis()->SetTitleFont(43);
   hframe_copy__272->GetZaxis()->SetLabelFont(43);
   hframe_copy__272->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__272->GetZaxis()->SetLabelSize(27);
   hframe_copy__272->GetZaxis()->SetTitleSize(33);
   hframe_copy__272->GetZaxis()->SetTitleOffset(1);
   hframe_copy__272->GetZaxis()->SetTitleFont(43);
   hframe_copy__272->Draw("sameaxis");
   
   TH1F *hframe_copy__273 = new TH1F("hframe_copy__273","",1000,0,1.01);
   hframe_copy__273->SetMinimum(0.01);
   hframe_copy__273->SetMaximum(837306.5);
   hframe_copy__273->SetDirectory(0);
   hframe_copy__273->SetStats(0);
   hframe_copy__273->SetLineStyle(0);
   hframe_copy__273->SetMarkerStyle(20);
   hframe_copy__273->GetXaxis()->SetLabelFont(43);
   hframe_copy__273->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__273->GetXaxis()->SetLabelSize(0);
   hframe_copy__273->GetXaxis()->SetTitleSize(0);
   hframe_copy__273->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__273->GetXaxis()->SetTitleFont(43);
   hframe_copy__273->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__273->GetYaxis()->SetLabelFont(43);
   hframe_copy__273->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__273->GetYaxis()->SetLabelSize(27);
   hframe_copy__273->GetYaxis()->SetTitleSize(33);
   hframe_copy__273->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__273->GetYaxis()->SetTitleFont(43);
   hframe_copy__273->GetZaxis()->SetLabelFont(43);
   hframe_copy__273->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__273->GetZaxis()->SetLabelSize(27);
   hframe_copy__273->GetZaxis()->SetTitleSize(33);
   hframe_copy__273->GetZaxis()->SetTitleOffset(1);
   hframe_copy__273->GetZaxis()->SetTitleFont(43);
   hframe_copy__273->Draw("sameaxis");
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
   MVAOutputM1500_1->Modified();
   MVAOutputM1500->cd();
   MVAOutputM1500->Modified();
   MVAOutputM1500->cd();
   MVAOutputM1500->SetSelected(MVAOutputM1500);
}
