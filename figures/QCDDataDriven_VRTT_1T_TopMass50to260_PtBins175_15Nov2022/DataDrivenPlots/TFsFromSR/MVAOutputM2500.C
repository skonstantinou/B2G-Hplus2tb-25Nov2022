void MVAOutputM2500()
{
//=========Macro generated from canvas: MVAOutputM2500/MVAOutputM2500
//=========  (Fri Nov 18 13:27:34 2022) by ROOT version 6.20/02
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
   0.008785626,
   0.01921995,
   0.02251782,
   0.02608009,
   0.0293567,
   0.03294737,
   0.03612766,
   0.03931084,
   0.04237006,
   0.04602225,
   0.05356695,
   0.05183601,
   0.05640988,
   0.0591438,
   0.06278542,
   0.06823063,
   0.08359985,
   0.08855093,
   0.1108041,
   0.1457289};
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
   0.008785626,
   0.01921995,
   0.02251782,
   0.02608009,
   0.0293567,
   0.03294737,
   0.03612766,
   0.03931084,
   0.04237006,
   0.04602225,
   0.05356695,
   0.05183601,
   0.05640988,
   0.0591438,
   0.06278542,
   0.06823063,
   0.08359985,
   0.08855093,
   0.1108041,
   0.1457289};
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
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMinimum(0.8251254);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMaximum(1.174875);
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
   0.008785626,
   0.01921995,
   0.02251782,
   0.02608009,
   0.0293567,
   0.03294737,
   0.03612766,
   0.03931084,
   0.04237006,
   0.04602225,
   0.05356695,
   0.05183601,
   0.05640988,
   0.0591438,
   0.06278542,
   0.06823063,
   0.08359985,
   0.08855093,
   0.1108041,
   0.1457289};
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
   0.008785626,
   0.01921995,
   0.02251782,
   0.02608009,
   0.0293567,
   0.03294737,
   0.03612766,
   0.03931084,
   0.04237006,
   0.04602225,
   0.05356695,
   0.05183601,
   0.05640988,
   0.0591438,
   0.06278542,
   0.06823063,
   0.08359985,
   0.08855093,
   0.1108041,
   0.1457289};
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
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMinimum(0.8251254);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMaximum(1.174875);
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
   0.9249212,
   1.050138,
   1.047526,
   1.042222,
   1.023194,
   1.084557,
   1.041775,
   0.9678728,
   1.063843,
   1.041775,
   1.250535,
   1.057443,
   0.9842205,
   0.9258489,
   0.7603858,
   0.9320067,
   1.039859,
   1.029145,
   1.250787,
   1.053163};
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
   0.01027437,
   0.0246563,
   0.02883221,
   0.03304065,
   0.03721319,
   0.04341702,
   0.04568486,
   0.04774164,
   0.05464595,
   0.05936061,
   0.07305703,
   0.0667452,
   0.07066291,
   0.07143079,
   0.06618309,
   0.08543692,
   0.1050416,
   0.1103359,
   0.1454011,
   0.178017};
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
   0.01027437,
   0.0246563,
   0.02883221,
   0.03304065,
   0.03721319,
   0.04341702,
   0.04568486,
   0.04774164,
   0.05464595,
   0.05936061,
   0.07305703,
   0.0667452,
   0.07066291,
   0.07143079,
   0.06618309,
   0.08543692,
   0.1050416,
   0.1103359,
   0.1454011,
   0.178017};
   grae = new TGraphAsymmErrors(20,Graph1_fx3191,Graph1_fy3191,Graph1_felx3191,Graph1_fehx3191,Graph1_fely3191,Graph1_fehy3191);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1318331873191 = new TH1F("Graph_Graph_Graph_Graph1318331873191","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1318331873191->SetMinimum(0.6240042);
   Graph_Graph_Graph_Graph1318331873191->SetMaximum(1.466387);
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
   MVAOutputM2500_1->Range(-0.204557,-2.175924,1.073924,6.620295);
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
   hframe__332->SetMaximum(1237433);
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
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMinimum(2.56406);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMaximum(327133.1);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,4198.057);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,835.0486);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,719.542);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,603.948);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,407.0999);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,335.6347);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,264.7542);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,201.8158);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,202.4329);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,158.2583);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,131.1548);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,156.6484);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,112.0092);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,87.84547);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,94.19305);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,97.96197);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,48.39512);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,71.99368);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,22.37819);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,17.21974);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,139.077);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,70.95986);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,61.678);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,72.5905);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,38.85626);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,36.77906);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,33.18132);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,26.87653);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,26.7045);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,25.93591);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,22.00553);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,25.55327);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,19.05242);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,19.3911);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,19.50421);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,19.95086);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,15.64897);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,17.48478);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,8.198098);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,8.197033);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1792.929);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,107829.8);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,21654.55);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,15084.58);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,11281.95);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,8944.046);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,7208.881);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5784.027);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,4935.737);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,4277.26);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,3763.922);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3019.736);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2860.116);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2515.548);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2178.436);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1833.924);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1696.474);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1271.704);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,997.0162);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,660.4846);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,316.1296);
   TT_stack_2_stack_2_stack_2->SetBinError(1,355.515);
   TT_stack_2_stack_2_stack_2->SetBinError(2,159.6275);
   TT_stack_2_stack_2_stack_2->SetBinError(3,133.6061);
   TT_stack_2_stack_2_stack_2->SetBinError(4,115.6588);
   TT_stack_2_stack_2_stack_2->SetBinError(5,103.1095);
   TT_stack_2_stack_2_stack_2->SetBinError(6,92.45055);
   TT_stack_2_stack_2_stack_2->SetBinError(7,82.90969);
   TT_stack_2_stack_2_stack_2->SetBinError(8,76.40657);
   TT_stack_2_stack_2_stack_2->SetBinError(9,71.13638);
   TT_stack_2_stack_2_stack_2->SetBinError(10,66.84491);
   TT_stack_2_stack_2_stack_2->SetBinError(11,59.62395);
   TT_stack_2_stack_2_stack_2->SetBinError(12,58.08342);
   TT_stack_2_stack_2_stack_2->SetBinError(13,54.80589);
   TT_stack_2_stack_2_stack_2->SetBinError(14,50.49832);
   TT_stack_2_stack_2_stack_2->SetBinError(15,46.37549);
   TT_stack_2_stack_2_stack_2->SetBinError(16,44.71491);
   TT_stack_2_stack_2_stack_2->SetBinError(17,38.57035);
   TT_stack_2_stack_2_stack_2->SetBinError(18,34.42145);
   TT_stack_2_stack_2_stack_2->SetBinError(19,27.82865);
   TT_stack_2_stack_2_stack_2->SetBinError(20,19.19543);
   TT_stack_2_stack_2_stack_2->SetEntries(176806);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,63208.67);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,12058.23);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9398.112);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7207.928);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,5426.117);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,3962.487);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,3934.18);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3355.299);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,2645.418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1990.807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1535.104);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1730.537);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1314.648);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1362.821);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1543.804);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,759.1932);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,564.7711);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,621.7137);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,500.3918);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,331.3154);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1491.483);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,640.6166);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,548.0883);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,478.8805);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,419.5845);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,365.8366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,349.4301);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,323.8872);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,292.1727);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,262.5134);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,242.8353);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,237.7589);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,214.6763);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,207.7108);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,212.101);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,167.2144);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,151.9779);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,144.6516);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,127.8594);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,94.58522);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3626.223);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(1,194.6991);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(2,100.6741);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(3,49.66459);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(4,50.09743);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(5,33.04951);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(6,42.45584);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(7,30.56168);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(8,20.67628);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(9,16.67738);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(10,18.19243);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(11,18.61901);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(12,8.113942);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(13,19.3158);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(14,16.34579);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(15,12.88891);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(16,6.557498);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(17,4.109054);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(18,1.942443);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(19,6.910111);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(20,2.812335);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(1,20.89751);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(2,13.4148);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(3,12.20242);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(4,11.10948);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(5,10.60647);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(6,10.67035);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(7,9.005841);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(8,8.750781);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(9,8.27116);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(10,7.965407);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(11,7.408958);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(12,7.071475);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(13,7.016393);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(14,6.438208);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(15,6.184144);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(16,5.637679);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(17,4.242009);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(18,3.840755);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(19,2.794125);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(20,1.270367);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetEntries(250.0168);
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
   175236.5,
   34547.83,
   25202.23,
   19093.83,
   14777.26,
   11507,
   9982.961,
   8492.852,
   7125.11,
   5912.988,
   4685.995,
   4747.302,
   3942.206,
   3629.102,
   3471.922,
   2553.63,
   1884.87,
   1690.724,
   1183.255,
   664.6647};
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
   1539.563,
   664.0074,
   567.4994,
   497.9687,
   433.8116,
   379.1256,
   360.661,
   333.8611,
   301.8913,
   272.129,
   251.0144,
   246.0812,
   222.3794,
   214.6389,
   217.986,
   174.2358,
   157.5749,
   149.7151,
   131.1094,
   96.86083};
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
   1539.563,
   664.0074,
   567.4994,
   497.9687,
   433.8116,
   379.1256,
   360.661,
   333.8611,
   301.8913,
   272.129,
   251.0144,
   246.0812,
   222.3794,
   214.6389,
   217.986,
   174.2358,
   157.5749,
   149.7151,
   131.1094,
   96.86083};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMinimum(511.0235);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMaximum(194396.9);
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
   Data__334->SetBinContent(1,162080);
   Data__334->SetBinContent(2,36280);
   Data__334->SetBinContent(3,26400);
   Data__334->SetBinContent(4,19900);
   Data__334->SetBinContent(5,15120);
   Data__334->SetBinContent(6,12480);
   Data__334->SetBinContent(7,10400);
   Data__334->SetBinContent(8,8220);
   Data__334->SetBinContent(9,7580);
   Data__334->SetBinContent(10,6160);
   Data__334->SetBinContent(11,5860);
   Data__334->SetBinContent(12,5020);
   Data__334->SetBinContent(13,3880);
   Data__334->SetBinContent(14,3360);
   Data__334->SetBinContent(15,2640);
   Data__334->SetBinContent(16,2380);
   Data__334->SetBinContent(17,1960);
   Data__334->SetBinContent(18,1740);
   Data__334->SetBinContent(19,1480);
   Data__334->SetBinContent(20,700);
   Data__334->SetBinError(1,1800.444);
   Data__334->SetBinError(2,851.8216);
   Data__334->SetBinError(3,726.6361);
   Data__334->SetBinError(4,630.8724);
   Data__334->SetBinError(5,549.9091);
   Data__334->SetBinError(6,499.5998);
   Data__334->SetBinError(7,456.0702);
   Data__334->SetBinError(8,405.4627);
   Data__334->SetBinError(9,389.3584);
   Data__334->SetBinError(10,350.9986);
   Data__334->SetBinError(11,342.3449);
   Data__334->SetBinError(12,316.8596);
   Data__334->SetBinError(13,278.5678);
   Data__334->SetBinError(14,259.2296);
   Data__334->SetBinError(15,229.7825);
   Data__334->SetBinError(16,218.1742);
   Data__334->SetBinError(17,197.9899);
   Data__334->SetBinError(18,186.5476);
   Data__334->SetBinError(19,172.0465);
   Data__334->SetBinError(20,118.3216);
   Data__334->SetEntries(16682);
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
   hframe_copy__335->SetMaximum(1237433);
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
   hframe_copy__336->SetMaximum(1237433);
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
