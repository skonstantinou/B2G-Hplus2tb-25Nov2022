void MVAOutputM2500()
{
//=========Macro generated from canvas: MVAOutputM2500/MVAOutputM2500
//=========  (Fri Nov 18 13:28:06 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM2500 = new TCanvas("MVAOutputM2500", "MVAOutputM2500",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM2500->SetHighLightColor(2);
   MVAOutputM2500->Range(0,0,1,1);
   MVAOutputM2500->SetFillColor(0);
   MVAOutputM2500->SetBorderMode(0);
   MVAOutputM2500->SetBorderSize(2);
   MVAOutputM2500->SetTickx(1);
   MVAOutputM2500->SetTicky(1);
   MVAOutputM2500->SetLeftMargin(0.16);
   MVAOutputM2500->SetRightMargin(0.05);
   MVAOutputM2500->SetTopMargin(0.06);
   MVAOutputM2500->SetBottomMargin(0.13);
   MVAOutputM2500->SetFrameFillStyle(0);
   MVAOutputM2500->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM2500_2
   TPad *MVAOutputM2500_2 = new TPad("MVAOutputM2500_2", "MVAOutputM2500_2",0,0,1,0.304);
   MVAOutputM2500_2->Draw();
   MVAOutputM2500_2->cd();
   MVAOutputM2500_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM2500_2->SetFillColor(0);
   MVAOutputM2500_2->SetFillStyle(4000);
   MVAOutputM2500_2->SetBorderMode(0);
   MVAOutputM2500_2->SetBorderSize(2);
   MVAOutputM2500_2->SetTickx(1);
   MVAOutputM2500_2->SetTicky(1);
   MVAOutputM2500_2->SetLeftMargin(0.16);
   MVAOutputM2500_2->SetRightMargin(0.05);
   MVAOutputM2500_2->SetTopMargin(0);
   MVAOutputM2500_2->SetBottomMargin(0.3421053);
   MVAOutputM2500_2->SetFrameFillStyle(0);
   MVAOutputM2500_2->SetFrameBorderMode(0);
   MVAOutputM2500_2->SetFrameFillStyle(0);
   MVAOutputM2500_2->SetFrameBorderMode(0);
   
   TH1F *hframe__330 = new TH1F("hframe__330","",1000,0,1.01);
   hframe__330->SetMinimum(0.3);
   hframe__330->SetMaximum(1.7);
   hframe__330->SetDirectory(0);
   hframe__330->SetStats(0);
   hframe__330->SetLineStyle(0);
   hframe__330->SetMarkerStyle(20);
   hframe__330->GetXaxis()->SetTitle("DNN Output");
   hframe__330->GetXaxis()->SetLabelFont(43);
   hframe__330->GetXaxis()->SetLabelOffset(0.007);
   hframe__330->GetXaxis()->SetLabelSize(27);
   hframe__330->GetXaxis()->SetTitleSize(33);
   hframe__330->GetXaxis()->SetTitleOffset(2.960526);
   hframe__330->GetXaxis()->SetTitleFont(43);
   hframe__330->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__330->GetYaxis()->SetNdivisions(505);
   hframe__330->GetYaxis()->SetLabelFont(43);
   hframe__330->GetYaxis()->SetLabelOffset(0.007);
   hframe__330->GetYaxis()->SetLabelSize(21);
   hframe__330->GetYaxis()->SetTitleSize(33);
   hframe__330->GetYaxis()->SetTitleOffset(1.5625);
   hframe__330->GetYaxis()->SetTitleFont(43);
   hframe__330->GetZaxis()->SetLabelFont(43);
   hframe__330->GetZaxis()->SetLabelOffset(0.007);
   hframe__330->GetZaxis()->SetLabelSize(27);
   hframe__330->GetZaxis()->SetTitleSize(33);
   hframe__330->GetZaxis()->SetTitleOffset(1);
   hframe__330->GetZaxis()->SetTitleFont(43);
   hframe__330->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3189[20] = {
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
   Double_t BackgroundStatSystError_fy3189[20] = {
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
   Double_t BackgroundStatSystError_felx3189[20] = {
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
   Double_t BackgroundStatSystError_fely3189[20] = {
   0.01181078,
   0.02636894,
   0.03199124,
   0.03723385,
   0.03903445,
   0.0422437,
   0.04508898,
   0.04768697,
   0.05075396,
   0.05376065,
   0.0562673,
   0.05969685,
   0.05991407,
   0.06683984,
   0.06502223,
   0.06851926,
   0.07444617,
   0.07806988,
   0.08927101,
   0.1157665};
   Double_t BackgroundStatSystError_fehx3189[20] = {
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
   Double_t BackgroundStatSystError_fehy3189[20] = {
   0.01181078,
   0.02636894,
   0.03199124,
   0.03723385,
   0.03903445,
   0.0422437,
   0.04508898,
   0.04768697,
   0.05075396,
   0.05376065,
   0.0562673,
   0.05969685,
   0.05991407,
   0.06683984,
   0.06502223,
   0.06851926,
   0.07444617,
   0.07806988,
   0.08927101,
   0.1157665};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3189,BackgroundStatSystError_fy3189,BackgroundStatSystError_felx3189,BackgroundStatSystError_fehx3189,BackgroundStatSystError_fely3189,BackgroundStatSystError_fehy3189);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1257;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError318131853189 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError318131853189","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMinimum(0.8610802);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMaximum(1.13892);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError318131853189);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3190[20] = {
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
   Double_t BackgroundStatError_fy3190[20] = {
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
   Double_t BackgroundStatError_felx3190[20] = {
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
   Double_t BackgroundStatError_fely3190[20] = {
   0.01181078,
   0.02636894,
   0.03199124,
   0.03723385,
   0.03903445,
   0.0422437,
   0.04508898,
   0.04768697,
   0.05075396,
   0.05376065,
   0.0562673,
   0.05969685,
   0.05991407,
   0.06683984,
   0.06502223,
   0.06851926,
   0.07444617,
   0.07806988,
   0.08927101,
   0.1157665};
   Double_t BackgroundStatError_fehx3190[20] = {
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
   Double_t BackgroundStatError_fehy3190[20] = {
   0.01181078,
   0.02636894,
   0.03199124,
   0.03723385,
   0.03903445,
   0.0422437,
   0.04508898,
   0.04768697,
   0.05075396,
   0.05376065,
   0.0562673,
   0.05969685,
   0.05991407,
   0.06683984,
   0.06502223,
   0.06851926,
   0.07444617,
   0.07806988,
   0.08927101,
   0.1157665};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3190,BackgroundStatError_fy3190,BackgroundStatError_felx3190,BackgroundStatError_fehx3190,BackgroundStatError_fely3190,BackgroundStatError_fehy3190);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1256;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError318231863190 = new TH1F("Graph_Graph_Graph_BackgroundStatError318231863190","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMinimum(0.8610802);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMaximum(1.13892);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError318231863190);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx48[2] = {
   0,
   1.01};
   Double_t Graph0_fy48[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx48,Graph0_fy48);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0464748 = new TH1F("Graph_Graph_Graph_Graph0464748","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0464748->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0464748->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0464748->SetDirectory(0);
   Graph_Graph_Graph_Graph0464748->SetStats(0);
   Graph_Graph_Graph_Graph0464748->SetLineStyle(0);
   Graph_Graph_Graph_Graph0464748->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0464748);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3191[20] = {
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
   Double_t Graph1_fy3191[20] = {
   0.958079,
   0.9593298,
   1.052793,
   1.02716,
   0.9775538,
   1.003216,
   1.057146,
   1.031052,
   1.161171,
   1.005103,
   1.119957,
   1.261573,
   1.071417,
   1.185284,
   1.051252,
   1.144441,
   1.037015,
   0.9145262,
   1.000338,
   0.9974591};
   Double_t Graph1_felx3191[20] = {
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
   Double_t Graph1_fely3191[20] = {
   0.01264577,
   0.02838801,
   0.03532942,
   0.04085823,
   0.04094522,
   0.04473118,
   0.04918286,
   0.05110737,
   0.05925575,
   0.05645221,
   0.06350692,
   0.07165251,
   0.06631905,
   0.07731942,
   0.06962089,
   0.07993123,
   0.07816798,
   0.07870988,
   0.09248132,
   0.1209597};
   Double_t Graph1_fehx3191[20] = {
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
   Double_t Graph1_fehy3191[20] = {
   0.01264577,
   0.02838801,
   0.03532942,
   0.04085823,
   0.04094522,
   0.04473118,
   0.04918286,
   0.05110737,
   0.05925575,
   0.05645221,
   0.06350692,
   0.07165251,
   0.06631905,
   0.07731942,
   0.06962089,
   0.07993123,
   0.07816798,
   0.07870988,
   0.09248132,
   0.1209597};
   grae = new TGraphAsymmErrors(20,Graph1_fx3191,Graph1_fy3191,Graph1_felx3191,Graph1_fehx3191,Graph1_fely3191,Graph1_fehy3191);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1318331873191 = new TH1F("Graph_Graph_Graph_Graph1318331873191","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1318331873191->SetMinimum(0.7860754);
   Graph_Graph_Graph_Graph1318331873191->SetMaximum(1.382966);
   Graph_Graph_Graph_Graph1318331873191->SetDirectory(0);
   Graph_Graph_Graph_Graph1318331873191->SetStats(0);
   Graph_Graph_Graph_Graph1318331873191->SetLineStyle(0);
   Graph_Graph_Graph_Graph1318331873191->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1318331873191);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__331 = new TH1F("hframe_copy__331","",1000,0,1.01);
   hframe_copy__331->SetMinimum(0.3);
   hframe_copy__331->SetMaximum(1.7);
   hframe_copy__331->SetDirectory(0);
   hframe_copy__331->SetStats(0);
   hframe_copy__331->SetLineStyle(0);
   hframe_copy__331->SetMarkerStyle(20);
   hframe_copy__331->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__331->GetXaxis()->SetLabelFont(43);
   hframe_copy__331->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__331->GetXaxis()->SetLabelSize(27);
   hframe_copy__331->GetXaxis()->SetTitleSize(33);
   hframe_copy__331->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__331->GetXaxis()->SetTitleFont(43);
   hframe_copy__331->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__331->GetYaxis()->SetNdivisions(505);
   hframe_copy__331->GetYaxis()->SetLabelFont(43);
   hframe_copy__331->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__331->GetYaxis()->SetLabelSize(21);
   hframe_copy__331->GetYaxis()->SetTitleSize(33);
   hframe_copy__331->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__331->GetYaxis()->SetTitleFont(43);
   hframe_copy__331->GetZaxis()->SetLabelFont(43);
   hframe_copy__331->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__331->GetZaxis()->SetLabelSize(27);
   hframe_copy__331->GetZaxis()->SetTitleSize(33);
   hframe_copy__331->GetZaxis()->SetTitleOffset(1);
   hframe_copy__331->GetZaxis()->SetTitleFont(43);
   hframe_copy__331->Draw("sameaxis");
   MVAOutputM2500_2->Modified();
   MVAOutputM2500->cd();
  
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
   MVAOutputM2500->cd();
  
// ------------>Primitives in pad: MVAOutputM2500_1
   TPad *MVAOutputM2500_1 = new TPad("MVAOutputM2500_1", "MVAOutputM2500_1",0,0.2897959,1,1);
   MVAOutputM2500_1->Draw();
   MVAOutputM2500_1->cd();
   MVAOutputM2500_1->Range(-0.204557,-2.172364,1.073924,6.445829);
   MVAOutputM2500_1->SetFillColor(0);
   MVAOutputM2500_1->SetFillStyle(4000);
   MVAOutputM2500_1->SetBorderMode(0);
   MVAOutputM2500_1->SetBorderSize(2);
   MVAOutputM2500_1->SetLogy();
   MVAOutputM2500_1->SetTickx(1);
   MVAOutputM2500_1->SetTicky(1);
   MVAOutputM2500_1->SetLeftMargin(0.16);
   MVAOutputM2500_1->SetRightMargin(0.05);
   MVAOutputM2500_1->SetTopMargin(0.06);
   MVAOutputM2500_1->SetBottomMargin(0.02);
   MVAOutputM2500_1->SetFrameFillStyle(0);
   MVAOutputM2500_1->SetFrameBorderMode(0);
   MVAOutputM2500_1->SetFrameFillStyle(0);
   MVAOutputM2500_1->SetFrameBorderMode(0);
   
   TH1F *hframe__332 = new TH1F("hframe__332","",1000,0,1.01);
   hframe__332->SetMinimum(0.01);
   hframe__332->SetMaximum(848668.1);
   hframe__332->SetDirectory(0);
   hframe__332->SetStats(0);
   hframe__332->SetLineStyle(0);
   hframe__332->SetMarkerStyle(20);
   hframe__332->GetXaxis()->SetLabelFont(43);
   hframe__332->GetXaxis()->SetLabelOffset(0.007);
   hframe__332->GetXaxis()->SetLabelSize(0);
   hframe__332->GetXaxis()->SetTitleSize(0);
   hframe__332->GetXaxis()->SetTitleOffset(0.9);
   hframe__332->GetXaxis()->SetTitleFont(43);
   hframe__332->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__332->GetYaxis()->SetLabelFont(43);
   hframe__332->GetYaxis()->SetLabelOffset(0.007);
   hframe__332->GetYaxis()->SetLabelSize(27);
   hframe__332->GetYaxis()->SetTitleSize(33);
   hframe__332->GetYaxis()->SetTitleOffset(1.5625);
   hframe__332->GetYaxis()->SetTitleFont(43);
   hframe__332->GetZaxis()->SetLabelFont(43);
   hframe__332->GetZaxis()->SetLabelOffset(0.007);
   hframe__332->GetZaxis()->SetLabelSize(27);
   hframe__332->GetZaxis()->SetTitleSize(33);
   hframe__332->GetZaxis()->SetTitleOffset(1);
   hframe__332->GetZaxis()->SetTitleFont(43);
   hframe__332->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis283[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_46_stack_47_stack_48 = new TH1F("StackedMCstackHist_stack_46_stack_47_stack_48","StackedMCstackHist",20, xAxis283);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMinimum(3.934699);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMaximum(215827);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetDirectory(0);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetStats(0);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetLineStyle(0);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMarkerStyle(20);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_46_stack_47_stack_48);
   
   Double_t xAxis284[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM2500Inclusive",20, xAxis284);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2563.4);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,589.9738);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,414.8872);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,251.3143);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,244.4106);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,217.6012);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,175.2874);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,193.9605);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,181.5397);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,91.53727);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,101.8858);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,120.8986);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,56.20597);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,111.6692);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,104.1573);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,96.04661);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,88.1123);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,48.71855);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,34.87748);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,22.77424);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,103.446);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,58.53781);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,58.60278);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,32.51923);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,30.41416);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,41.40394);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,22.19745);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,26.64965);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,23.56539);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,16.86906);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,20.33753);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,22.7377);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,11.79961);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,20.40572);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,17.85317);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,17.37086);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,17.93997);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,12.79487);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,11.2352);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,9.645314);
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
   Double_t xAxis285[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM2500Inclusive",20, xAxis285);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,41335.07);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,7310.252);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4839.663);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3577.958);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3025.909);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2461.864);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2129.404);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1847.288);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1649.915);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1567.256);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1505.052);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1315.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1191.195);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1113.285);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,983.2452);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,901.2008);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,806.9072);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,694.1685);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,555.8182);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,378.4574);
   TT_stack_2_stack_2_stack_2->SetBinError(1,220.0828);
   TT_stack_2_stack_2_stack_2->SetBinError(2,93.36478);
   TT_stack_2_stack_2_stack_2->SetBinError(3,75.49793);
   TT_stack_2_stack_2_stack_2->SetBinError(4,65.30174);
   TT_stack_2_stack_2_stack_2->SetBinError(5,60.1192);
   TT_stack_2_stack_2_stack_2->SetBinError(6,53.74069);
   TT_stack_2_stack_2_stack_2->SetBinError(7,50.40625);
   TT_stack_2_stack_2_stack_2->SetBinError(8,47.11591);
   TT_stack_2_stack_2_stack_2->SetBinError(9,44.29978);
   TT_stack_2_stack_2_stack_2->SetBinError(10,43.31873);
   TT_stack_2_stack_2_stack_2->SetBinError(11,42.35186);
   TT_stack_2_stack_2_stack_2->SetBinError(12,40.07096);
   TT_stack_2_stack_2_stack_2->SetBinError(13,37.79231);
   TT_stack_2_stack_2_stack_2->SetBinError(14,36.64578);
   TT_stack_2_stack_2_stack_2->SetBinError(15,34.59098);
   TT_stack_2_stack_2_stack_2->SetBinError(16,33.35797);
   TT_stack_2_stack_2_stack_2->SetBinError(17,30.8823);
   TT_stack_2_stack_2_stack_2->SetBinError(18,28.68481);
   TT_stack_2_stack_2_stack_2->SetBinError(19,25.80108);
   TT_stack_2_stack_2_stack_2->SetBinError(20,20.67676);
   TT_stack_2_stack_2_stack_2->SetEntries(67019.14);
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
   Double_t xAxis286[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM2500Inclusive",20, xAxis286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,75924.62);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,15908.06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11614.86);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8476.504);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8391.442);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,7348.288);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,6435.828);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,5853.599);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4782.56);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4649.019);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3946.849);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3478.273);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3624.652);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2740.339);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,3250.281);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2585.287);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2499.337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2209.461);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1748.513);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,962.2328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1394.154);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,618.052);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,531.1433);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,452.3467);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,450.1969);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,418.1418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,390.2335);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,372.5695);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,331.916);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,335.9106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,308.9446);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,289.74);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,289.2071);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,261.6996);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,279.3467);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,242.5744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,250.1602);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,228.3394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,206.9186);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,156.1858);
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
   Double_t xAxis287[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__333 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__333","h_SR_MVAOutputM2500Inclusive",20, xAxis287);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(1,183.2672);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(2,24.69073);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(3,32.97735);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(4,38.25011);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(5,14.23257);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(6,16.52558);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(7,21.95488);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(8,6.935441);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(9,19.65257);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(10,2.633726);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(11,11.91582);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(12,3.700156);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(13,13.045);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(14,11.88713);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(15,4.950717);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(16,-3.712909);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(17,11.08213);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(18,5.582021);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(19,0.9685056);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(20,4.677708);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(1,22.60651);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(2,10.53968);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(3,8.707293);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(4,8.366595);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(5,7.699309);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(6,7.056313);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(7,6.5265);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(8,5.798287);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(9,5.890929);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(10,6.224891);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(11,6.362985);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(12,5.451785);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(13,5.492037);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(14,5.320014);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(15,4.879028);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(16,4.992285);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(17,4.622103);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(18,4.08684);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(19,2.141033);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(20,2.2594);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetEntries(144.4333);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3192[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3192[20] = {
   119823.1,
   23808.29,
   16869.41,
   12305.78,
   11661.76,
   10027.75,
   8740.519,
   7894.847,
   6614.014,
   6307.812,
   5553.786,
   4914.501,
   4872.053,
   3965.294,
   4337.684,
   3582.535,
   3394.356,
   2952.348,
   2339.208,
   1363.464};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3192[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3192[20] = {
   1415.204,
   627.7992,
   539.6734,
   458.1914,
   455.2105,
   423.6094,
   394.1011,
   376.4813,
   335.6874,
   339.1121,
   312.4965,
   293.3802,
   291.9045,
   265.0396,
   282.0459,
   245.4727,
   252.6968,
   230.4895,
   208.8235,
   157.8435};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3192[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3192[20] = {
   1415.204,
   627.7992,
   539.6734,
   458.1914,
   455.2105,
   423.6094,
   394.1011,
   376.4813,
   335.6874,
   339.1121,
   312.4965,
   293.3802,
   291.9045,
   265.0396,
   282.0459,
   245.4727,
   252.6968,
   230.4895,
   208.8235,
   157.8435};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3192,BkgSum-SR-Inclusive_sum_errors_fy3192,BkgSum-SR-Inclusive_sum_errors_felx3192,BkgSum-SR-Inclusive_sum_errors_fehx3192,BkgSum-SR-Inclusive_sum_errors_fely3192,BkgSum-SR-Inclusive_sum_errors_fehy3192);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1255;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMinimum(1085.059);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMaximum(133241.6);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors318431883192);
   
   grae->Draw("e2 ");
   Double_t xAxis288[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__334 = new TH1F("Data__334","h_SR_MVAOutputM2500Inclusive",20, xAxis288);
   Data__334->SetBinContent(1,114800);
   Data__334->SetBinContent(2,22840);
   Data__334->SetBinContent(3,17760);
   Data__334->SetBinContent(4,12640);
   Data__334->SetBinContent(5,11400);
   Data__334->SetBinContent(6,10060);
   Data__334->SetBinContent(7,9240);
   Data__334->SetBinContent(8,8140);
   Data__334->SetBinContent(9,7680);
   Data__334->SetBinContent(10,6340);
   Data__334->SetBinContent(11,6220);
   Data__334->SetBinContent(12,6200);
   Data__334->SetBinContent(13,5220);
   Data__334->SetBinContent(14,4700);
   Data__334->SetBinContent(15,4560);
   Data__334->SetBinContent(16,4100);
   Data__334->SetBinContent(17,3520);
   Data__334->SetBinContent(18,2700);
   Data__334->SetBinContent(19,2340);
   Data__334->SetBinContent(20,1360);
   Data__334->SetBinError(1,1515.256);
   Data__334->SetBinError(2,675.8698);
   Data__334->SetBinError(3,595.9866);
   Data__334->SetBinError(4,502.7922);
   Data__334->SetBinError(5,477.4935);
   Data__334->SetBinError(6,448.5532);
   Data__334->SetBinError(7,429.8837);
   Data__334->SetBinError(8,403.4848);
   Data__334->SetBinError(9,391.9184);
   Data__334->SetBinError(10,356.0899);
   Data__334->SetBinError(11,352.7038);
   Data__334->SetBinError(12,352.1363);
   Data__334->SetBinError(13,323.1099);
   Data__334->SetBinError(14,306.5942);
   Data__334->SetBinError(15,301.9934);
   Data__334->SetBinError(16,286.3564);
   Data__334->SetBinError(17,265.33);
   Data__334->SetBinError(18,232.379);
   Data__334->SetBinError(19,216.3331);
   Data__334->SetBinError(20,164.9242);
   Data__334->SetEntries(13091);
   Data__334->SetDirectory(0);
   Data__334->SetFillStyle(3001);
   Data__334->SetLineWidth(2);
   Data__334->SetMarkerStyle(20);
   Data__334->SetMarkerSize(1.2);
   Data__334->GetXaxis()->SetRange(1,200);
   Data__334->GetXaxis()->SetLabelFont(42);
   Data__334->GetXaxis()->SetTitleOffset(1);
   Data__334->GetXaxis()->SetTitleFont(42);
   Data__334->GetYaxis()->SetLabelFont(42);
   Data__334->GetYaxis()->SetTitleFont(42);
   Data__334->GetZaxis()->SetLabelFont(42);
   Data__334->GetZaxis()->SetTitleOffset(1);
   Data__334->GetZaxis()->SetTitleFont(42);
   Data__334->Draw("EP same");
   
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

   ci = 1255;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1255;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__335 = new TH1F("hframe_copy__335","",1000,0,1.01);
   hframe_copy__335->SetMinimum(0.01);
   hframe_copy__335->SetMaximum(848668.1);
   hframe_copy__335->SetDirectory(0);
   hframe_copy__335->SetStats(0);
   hframe_copy__335->SetLineStyle(0);
   hframe_copy__335->SetMarkerStyle(20);
   hframe_copy__335->GetXaxis()->SetLabelFont(43);
   hframe_copy__335->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__335->GetXaxis()->SetLabelSize(0);
   hframe_copy__335->GetXaxis()->SetTitleSize(0);
   hframe_copy__335->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__335->GetXaxis()->SetTitleFont(43);
   hframe_copy__335->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__335->GetYaxis()->SetLabelFont(43);
   hframe_copy__335->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__335->GetYaxis()->SetLabelSize(27);
   hframe_copy__335->GetYaxis()->SetTitleSize(33);
   hframe_copy__335->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__335->GetYaxis()->SetTitleFont(43);
   hframe_copy__335->GetZaxis()->SetLabelFont(43);
   hframe_copy__335->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__335->GetZaxis()->SetLabelSize(27);
   hframe_copy__335->GetZaxis()->SetTitleSize(33);
   hframe_copy__335->GetZaxis()->SetTitleOffset(1);
   hframe_copy__335->GetZaxis()->SetTitleFont(43);
   hframe_copy__335->Draw("sameaxis");
   
   TH1F *hframe_copy__336 = new TH1F("hframe_copy__336","",1000,0,1.01);
   hframe_copy__336->SetMinimum(0.01);
   hframe_copy__336->SetMaximum(848668.1);
   hframe_copy__336->SetDirectory(0);
   hframe_copy__336->SetStats(0);
   hframe_copy__336->SetLineStyle(0);
   hframe_copy__336->SetMarkerStyle(20);
   hframe_copy__336->GetXaxis()->SetLabelFont(43);
   hframe_copy__336->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__336->GetXaxis()->SetLabelSize(0);
   hframe_copy__336->GetXaxis()->SetTitleSize(0);
   hframe_copy__336->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__336->GetXaxis()->SetTitleFont(43);
   hframe_copy__336->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__336->GetYaxis()->SetLabelFont(43);
   hframe_copy__336->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__336->GetYaxis()->SetLabelSize(27);
   hframe_copy__336->GetYaxis()->SetTitleSize(33);
   hframe_copy__336->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__336->GetYaxis()->SetTitleFont(43);
   hframe_copy__336->GetZaxis()->SetLabelFont(43);
   hframe_copy__336->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__336->GetZaxis()->SetLabelSize(27);
   hframe_copy__336->GetZaxis()->SetTitleSize(33);
   hframe_copy__336->GetZaxis()->SetTitleOffset(1);
   hframe_copy__336->GetZaxis()->SetTitleFont(43);
   hframe_copy__336->Draw("sameaxis");
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
   MVAOutputM2500_1->Modified();
   MVAOutputM2500->cd();
   MVAOutputM2500->Modified();
   MVAOutputM2500->cd();
   MVAOutputM2500->SetSelected(MVAOutputM2500);
}
