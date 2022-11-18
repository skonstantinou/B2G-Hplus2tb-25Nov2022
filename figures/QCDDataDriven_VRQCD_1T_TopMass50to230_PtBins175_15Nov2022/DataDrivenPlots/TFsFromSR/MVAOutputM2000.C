void MVAOutputM2000()
{
//=========Macro generated from canvas: MVAOutputM2000/MVAOutputM2000
//=========  (Fri Nov 18 13:27:50 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM2000 = new TCanvas("MVAOutputM2000", "MVAOutputM2000",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM2000->SetHighLightColor(2);
   MVAOutputM2000->Range(0,0,1,1);
   MVAOutputM2000->SetFillColor(0);
   MVAOutputM2000->SetBorderMode(0);
   MVAOutputM2000->SetBorderSize(2);
   MVAOutputM2000->SetTickx(1);
   MVAOutputM2000->SetTicky(1);
   MVAOutputM2000->SetLeftMargin(0.16);
   MVAOutputM2000->SetRightMargin(0.05);
   MVAOutputM2000->SetTopMargin(0.06);
   MVAOutputM2000->SetBottomMargin(0.13);
   MVAOutputM2000->SetFrameFillStyle(0);
   MVAOutputM2000->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM2000_2
   TPad *MVAOutputM2000_2 = new TPad("MVAOutputM2000_2", "MVAOutputM2000_2",0,0,1,0.304);
   MVAOutputM2000_2->Draw();
   MVAOutputM2000_2->cd();
   MVAOutputM2000_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM2000_2->SetFillColor(0);
   MVAOutputM2000_2->SetFillStyle(4000);
   MVAOutputM2000_2->SetBorderMode(0);
   MVAOutputM2000_2->SetBorderSize(2);
   MVAOutputM2000_2->SetTickx(1);
   MVAOutputM2000_2->SetTicky(1);
   MVAOutputM2000_2->SetLeftMargin(0.16);
   MVAOutputM2000_2->SetRightMargin(0.05);
   MVAOutputM2000_2->SetTopMargin(0);
   MVAOutputM2000_2->SetBottomMargin(0.3421053);
   MVAOutputM2000_2->SetFrameFillStyle(0);
   MVAOutputM2000_2->SetFrameBorderMode(0);
   MVAOutputM2000_2->SetFrameFillStyle(0);
   MVAOutputM2000_2->SetFrameBorderMode(0);
   
   TH1F *hframe__309 = new TH1F("hframe__309","",1000,0,1.01);
   hframe__309->SetMinimum(0.3);
   hframe__309->SetMaximum(1.7);
   hframe__309->SetDirectory(0);
   hframe__309->SetStats(0);
   hframe__309->SetLineStyle(0);
   hframe__309->SetMarkerStyle(20);
   hframe__309->GetXaxis()->SetTitle("DNN Output");
   hframe__309->GetXaxis()->SetLabelFont(43);
   hframe__309->GetXaxis()->SetLabelOffset(0.007);
   hframe__309->GetXaxis()->SetLabelSize(27);
   hframe__309->GetXaxis()->SetTitleSize(33);
   hframe__309->GetXaxis()->SetTitleOffset(2.960526);
   hframe__309->GetXaxis()->SetTitleFont(43);
   hframe__309->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__309->GetYaxis()->SetNdivisions(505);
   hframe__309->GetYaxis()->SetLabelFont(43);
   hframe__309->GetYaxis()->SetLabelOffset(0.007);
   hframe__309->GetYaxis()->SetLabelSize(21);
   hframe__309->GetYaxis()->SetTitleSize(33);
   hframe__309->GetYaxis()->SetTitleOffset(1.5625);
   hframe__309->GetYaxis()->SetTitleFont(43);
   hframe__309->GetZaxis()->SetLabelFont(43);
   hframe__309->GetZaxis()->SetLabelOffset(0.007);
   hframe__309->GetZaxis()->SetLabelSize(27);
   hframe__309->GetZaxis()->SetTitleSize(33);
   hframe__309->GetZaxis()->SetTitleOffset(1);
   hframe__309->GetZaxis()->SetTitleFont(43);
   hframe__309->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3177[20] = {
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
   Double_t BackgroundStatSystError_fy3177[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t BackgroundStatSystError_felx3177[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3177[20] = {
   0.02277029,
   0.03792265,
   0.04616513,
   0.0580823,
   0.06581673,
   0.07296723,
   0.07826526,
   0.08716848,
   0.09775569,
   0.1241132,
   0.127042,
   0.144603,
   0.130383,
   0.1533992,
   0.1886509,
   0.1562348,
   0.1808057,
   0.2259272,
   0.2796329,
   0.3225778};
   Double_t BackgroundStatSystError_fehx3177[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3177[20] = {
   0.02277029,
   0.03792265,
   0.04616513,
   0.0580823,
   0.06581673,
   0.07296723,
   0.07826526,
   0.08716848,
   0.09775569,
   0.1241132,
   0.127042,
   0.144603,
   0.130383,
   0.1533992,
   0.1886509,
   0.1562348,
   0.1808057,
   0.2259272,
   0.2796329,
   0.3225778};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3177,BackgroundStatSystError_fy3177,BackgroundStatSystError_felx3177,BackgroundStatSystError_fehx3177,BackgroundStatSystError_fely3177,BackgroundStatSystError_fehy3177);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1254;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError316931733177 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError316931733177","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMinimum(0.6129066);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMaximum(1.387093);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError316931733177);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3178[20] = {
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
   Double_t BackgroundStatError_fy3178[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t BackgroundStatError_felx3178[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3178[20] = {
   0.02277029,
   0.03792265,
   0.04616513,
   0.0580823,
   0.06581673,
   0.07296723,
   0.07826526,
   0.08716848,
   0.09775569,
   0.1241132,
   0.127042,
   0.144603,
   0.130383,
   0.1533992,
   0.1886509,
   0.1562348,
   0.1808057,
   0.2259272,
   0.2796329,
   0.3225778};
   Double_t BackgroundStatError_fehx3178[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3178[20] = {
   0.02277029,
   0.03792265,
   0.04616513,
   0.0580823,
   0.06581673,
   0.07296723,
   0.07826526,
   0.08716848,
   0.09775569,
   0.1241132,
   0.127042,
   0.144603,
   0.130383,
   0.1533992,
   0.1886509,
   0.1562348,
   0.1808057,
   0.2259272,
   0.2796329,
   0.3225778};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3178,BackgroundStatError_fy3178,BackgroundStatError_felx3178,BackgroundStatError_fehx3178,BackgroundStatError_fely3178,BackgroundStatError_fehy3178);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1253;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError317031743178 = new TH1F("Graph_Graph_Graph_BackgroundStatError317031743178","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMinimum(0.6129066);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMaximum(1.387093);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError317031743178->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError317031743178->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError317031743178);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx45[2] = {
   0,
   1.01};
   Double_t Graph0_fy45[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx45,Graph0_fy45);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0434445 = new TH1F("Graph_Graph_Graph_Graph0434445","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0434445->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0434445->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0434445->SetDirectory(0);
   Graph_Graph_Graph_Graph0434445->SetStats(0);
   Graph_Graph_Graph_Graph0434445->SetLineStyle(0);
   Graph_Graph_Graph_Graph0434445->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0434445->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0434445->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0434445->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0434445->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0434445->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0434445->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0434445->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0434445->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0434445->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0434445->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0434445->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0434445->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0434445->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0434445->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0434445->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0434445->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0434445->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0434445->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0434445);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3179[20] = {
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
   Double_t Graph1_fy3179[20] = {
   0.9249989,
   1.04904,
   1.085833,
   1.201153,
   1.010632,
   1.150325,
   1.13299,
   1.064374,
   0.9412954,
   1.152409,
   1.050607,
   1.321073,
   0.9054885,
   1.110045,
   1.261885,
   0.722386,
   0.8901593,
   1.130803,
   1.89435,
   1.113653};
   Double_t Graph1_felx3179[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3179[20] = {
   0.01605359,
   0.02868973,
   0.03547263,
   0.04693294,
   0.04868045,
   0.05773315,
   0.06180968,
   0.06613701,
   0.06996593,
   0.09881827,
   0.09712863,
   0.1231907,
   0.09193843,
   0.1204013,
   0.1553273,
   0.09740651,
   0.1246472,
   0.1704749,
   0.2888857,
   0.2624905};
   Double_t Graph1_fehx3179[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3179[20] = {
   0.01605359,
   0.02868973,
   0.03547263,
   0.04693294,
   0.04868045,
   0.05773315,
   0.06180968,
   0.06613701,
   0.06996593,
   0.09881827,
   0.09712863,
   0.1231907,
   0.09193843,
   0.1204013,
   0.1553273,
   0.09740651,
   0.1246472,
   0.1704749,
   0.2888857,
   0.2624905};
   grae = new TGraphAsymmErrors(20,Graph1_fx3179,Graph1_fy3179,Graph1_felx3179,Graph1_fehx3179,Graph1_fely3179,Graph1_fehy3179);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1317131753179 = new TH1F("Graph_Graph_Graph_Graph1317131753179","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1317131753179->SetMinimum(0.4691539);
   Graph_Graph_Graph_Graph1317131753179->SetMaximum(2.339061);
   Graph_Graph_Graph_Graph1317131753179->SetDirectory(0);
   Graph_Graph_Graph_Graph1317131753179->SetStats(0);
   Graph_Graph_Graph_Graph1317131753179->SetLineStyle(0);
   Graph_Graph_Graph_Graph1317131753179->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1317131753179->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1317131753179->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1317131753179->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1317131753179->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1317131753179->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1317131753179->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1317131753179->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1317131753179->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1317131753179->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1317131753179->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1317131753179->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1317131753179->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1317131753179->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1317131753179->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1317131753179->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1317131753179->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1317131753179->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1317131753179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1317131753179->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1317131753179);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__310 = new TH1F("hframe_copy__310","",1000,0,1.01);
   hframe_copy__310->SetMinimum(0.3);
   hframe_copy__310->SetMaximum(1.7);
   hframe_copy__310->SetDirectory(0);
   hframe_copy__310->SetStats(0);
   hframe_copy__310->SetLineStyle(0);
   hframe_copy__310->SetMarkerStyle(20);
   hframe_copy__310->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__310->GetXaxis()->SetLabelFont(43);
   hframe_copy__310->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__310->GetXaxis()->SetLabelSize(27);
   hframe_copy__310->GetXaxis()->SetTitleSize(33);
   hframe_copy__310->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__310->GetXaxis()->SetTitleFont(43);
   hframe_copy__310->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__310->GetYaxis()->SetNdivisions(505);
   hframe_copy__310->GetYaxis()->SetLabelFont(43);
   hframe_copy__310->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__310->GetYaxis()->SetLabelSize(21);
   hframe_copy__310->GetYaxis()->SetTitleSize(33);
   hframe_copy__310->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__310->GetYaxis()->SetTitleFont(43);
   hframe_copy__310->GetZaxis()->SetLabelFont(43);
   hframe_copy__310->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__310->GetZaxis()->SetLabelSize(27);
   hframe_copy__310->GetZaxis()->SetTitleSize(33);
   hframe_copy__310->GetZaxis()->SetTitleOffset(1);
   hframe_copy__310->GetZaxis()->SetTitleFont(43);
   hframe_copy__310->Draw("sameaxis");
   MVAOutputM2000_2->Modified();
   MVAOutputM2000->cd();
  
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
   MVAOutputM2000->cd();
  
// ------------>Primitives in pad: MVAOutputM2000_1
   TPad *MVAOutputM2000_1 = new TPad("MVAOutputM2000_1", "MVAOutputM2000_1",0,0.2897959,1,1);
   MVAOutputM2000_1->Draw();
   MVAOutputM2000_1->cd();
   MVAOutputM2000_1->Range(-0.204557,-2.167628,1.073924,6.213788);
   MVAOutputM2000_1->SetFillColor(0);
   MVAOutputM2000_1->SetFillStyle(4000);
   MVAOutputM2000_1->SetBorderMode(0);
   MVAOutputM2000_1->SetBorderSize(2);
   MVAOutputM2000_1->SetLogy();
   MVAOutputM2000_1->SetTickx(1);
   MVAOutputM2000_1->SetTicky(1);
   MVAOutputM2000_1->SetLeftMargin(0.16);
   MVAOutputM2000_1->SetRightMargin(0.05);
   MVAOutputM2000_1->SetTopMargin(0.06);
   MVAOutputM2000_1->SetBottomMargin(0.02);
   MVAOutputM2000_1->SetFrameFillStyle(0);
   MVAOutputM2000_1->SetFrameBorderMode(0);
   MVAOutputM2000_1->SetFrameFillStyle(0);
   MVAOutputM2000_1->SetFrameBorderMode(0);
   
   TH1F *hframe__311 = new TH1F("hframe__311","",1000,0,1.01);
   hframe__311->SetMinimum(0.01);
   hframe__311->SetMaximum(513928.8);
   hframe__311->SetDirectory(0);
   hframe__311->SetStats(0);
   hframe__311->SetLineStyle(0);
   hframe__311->SetMarkerStyle(20);
   hframe__311->GetXaxis()->SetLabelFont(43);
   hframe__311->GetXaxis()->SetLabelOffset(0.007);
   hframe__311->GetXaxis()->SetLabelSize(0);
   hframe__311->GetXaxis()->SetTitleSize(0);
   hframe__311->GetXaxis()->SetTitleOffset(0.9);
   hframe__311->GetXaxis()->SetTitleFont(43);
   hframe__311->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__311->GetYaxis()->SetLabelFont(43);
   hframe__311->GetYaxis()->SetLabelOffset(0.007);
   hframe__311->GetYaxis()->SetLabelSize(27);
   hframe__311->GetYaxis()->SetTitleSize(33);
   hframe__311->GetYaxis()->SetTitleOffset(1.5625);
   hframe__311->GetYaxis()->SetTitleFont(43);
   hframe__311->GetZaxis()->SetLabelFont(43);
   hframe__311->GetZaxis()->SetLabelOffset(0.007);
   hframe__311->GetZaxis()->SetLabelSize(27);
   hframe__311->GetZaxis()->SetTitleSize(33);
   hframe__311->GetZaxis()->SetTitleOffset(1);
   hframe__311->GetZaxis()->SetTitleFont(43);
   hframe__311->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis265[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_43_stack_44_stack_45 = new TH1F("StackedMCstackHist_stack_43_stack_44_stack_45","StackedMCstackHist",20, xAxis265);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMinimum(0.2758041);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMaximum(141829.6);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetDirectory(0);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetStats(0);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetLineStyle(0);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMarkerStyle(20);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_43_stack_44_stack_45->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_43_stack_44_stack_45);
   
   Double_t xAxis266[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM2000Inclusive",20, xAxis266);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,931.5496);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,330.9169);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,247.6317);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,145.5874);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,93.99041);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,93.41949);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,87.28083);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,72.22982);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,58.67316);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,33.00025);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,20.75685);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,52.05933);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,10.17024);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,23.79493);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,29.60935);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,19.17143);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,11.54895);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,8.007499);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,8.575907);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,7.304199);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,79.02558);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,42.57198);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,30.16088);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,37.52683);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,16.09024);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,17.18848);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,34.31883);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,15.64665);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,17.14958);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,11.31786);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,7.495534);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,30.69141);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,4.724888);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,10.40215);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,9.947823);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,9.651833);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,5.537196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,6.953478);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,5.081308);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,5.359511);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(367.0359);
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
   Double_t xAxis267[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM2000Inclusive",20, xAxis267);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,12677.51);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,3772.609);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2501.65);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1712.302);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1241.173);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,979.305);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,784.0993);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,635.6404);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,558.3519);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,403.4214);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,377.5133);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,333.7015);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,290.7771);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,251.9321);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,191.1887);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,190.0282);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,131.3808);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,104.5504);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,101.1459);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,89.04924);
   TT_stack_2_stack_2_stack_2->SetBinError(1,124.5377);
   TT_stack_2_stack_2_stack_2->SetBinError(2,68.23296);
   TT_stack_2_stack_2_stack_2->SetBinError(3,55.4665);
   TT_stack_2_stack_2_stack_2->SetBinError(4,46.16102);
   TT_stack_2_stack_2_stack_2->SetBinError(5,39.23513);
   TT_stack_2_stack_2_stack_2->SetBinError(6,34.57499);
   TT_stack_2_stack_2_stack_2->SetBinError(7,31.03159);
   TT_stack_2_stack_2_stack_2->SetBinError(8,27.83922);
   TT_stack_2_stack_2_stack_2->SetBinError(9,26.29246);
   TT_stack_2_stack_2_stack_2->SetBinError(10,22.05293);
   TT_stack_2_stack_2_stack_2->SetBinError(11,21.40999);
   TT_stack_2_stack_2_stack_2->SetBinError(12,20.42822);
   TT_stack_2_stack_2_stack_2->SetBinError(13,18.88733);
   TT_stack_2_stack_2_stack_2->SetBinError(14,17.78815);
   TT_stack_2_stack_2_stack_2->SetBinError(15,15.19231);
   TT_stack_2_stack_2_stack_2->SetBinError(16,15.30041);
   TT_stack_2_stack_2_stack_2->SetBinError(17,12.55941);
   TT_stack_2_stack_2_stack_2->SetBinError(18,11.23664);
   TT_stack_2_stack_2_stack_2->SetBinError(19,11.24625);
   TT_stack_2_stack_2_stack_2->SetBinError(20,10.25309);
   TT_stack_2_stack_2_stack_2->SetEntries(22257.12);
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
   Double_t xAxis268[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM2000Inclusive",20, xAxis268);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,58174.81);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,21386.44);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,14509.35);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9048.296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7194.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,5829.673);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,5059.828);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,4158.838);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,3228.739);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1923.851);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1829.014);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1355.248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1841.543);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1255.743);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,825.2563);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1313.532);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1002.932);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,665.6503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,344.2597);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,226.9071);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1627.871);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,963.2958);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,794.2416);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,630.6566);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,559.7676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,502.1666);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,461.896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,423.0199);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,374.6325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,291.8904);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,282.0478);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,249.041);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,278.665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,234.0207);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,196.5018);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,237.2149);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,206.7232);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,175.3211);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,126.3469);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,103.6329);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3184.306);
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
   Double_t xAxis269[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__312 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__312","h_SR_MVAOutputM2000Inclusive",20, xAxis269);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(1,35.33588);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(2,19.19772);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(3,13.35213);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(4,14.0995);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(5,3.814668);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(6,10.50064);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(7,5.098309);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(8,-0.6017721);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(9,3.191452);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(10,6.765704);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(11,2.921723);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(12,1.173652);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(13,1.90806);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(14,-0.2925735);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(15,0.8498836);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(16,1.083307);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(17,-2.25761);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(18,-0.05593387);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(19,0.5775853);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(20,2.414773);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(1,9.098971);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(2,7.651451);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(3,6.986582);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(4,5.328969);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(5,5.097068);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(6,3.966897);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(7,3.499801);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(8,3.381807);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(9,3.341825);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(10,3.306534);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(11,2.97899);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(12,2.333307);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(13,2.144222);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(14,2.057344);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(15,1.216971);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(16,1.698788);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(17,1.677139);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(18,1.089499);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(19,1.184278);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(20,1.210546);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetEntries(41.65101);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3180[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3180[20] = {
   71783.87,
   25489.97,
   17258.63,
   10906.19,
   8529.313,
   6902.397,
   5931.208,
   4866.708,
   3845.764,
   2360.273,
   2227.284,
   1741.009,
   2142.49,
   1531.47,
   1046.054,
   1522.732,
   1145.862,
   778.2083,
   453.9815,
   323.2606};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3180[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3180[20] = {
   1634.54,
   966.6473,
   796.7471,
   633.4563,
   561.3715,
   503.6488,
   464.2076,
   424.2236,
   375.9453,
   292.941,
   282.9586,
   251.7552,
   279.3443,
   234.9261,
   197.3391,
   237.9037,
   207.1784,
   175.8184,
   126.9482,
   104.2767};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3180[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3180[20] = {
   1634.54,
   966.6473,
   796.7471,
   633.4563,
   561.3715,
   503.6488,
   464.2076,
   424.2236,
   375.9453,
   292.941,
   282.9586,
   251.7552,
   279.3443,
   234.9261,
   197.3391,
   237.9037,
   207.1784,
   175.8184,
   126.9482,
   104.2767};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3180,BkgSum-SR-Inclusive_sum_errors_fy3180,BkgSum-SR-Inclusive_sum_errors_felx3180,BkgSum-SR-Inclusive_sum_errors_fehx3180,BkgSum-SR-Inclusive_sum_errors_fely3180,BkgSum-SR-Inclusive_sum_errors_fehy3180);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1252;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMinimum(197.0855);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMaximum(80738.35);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors317231763180);
   
   grae->Draw("e2 ");
   Double_t xAxis270[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__313 = new TH1F("Data__313","h_SR_MVAOutputM2000Inclusive",20, xAxis270);
   Data__313->SetBinContent(1,66400);
   Data__313->SetBinContent(2,26740);
   Data__313->SetBinContent(3,18740);
   Data__313->SetBinContent(4,13100);
   Data__313->SetBinContent(5,8620);
   Data__313->SetBinContent(6,7940);
   Data__313->SetBinContent(7,6720);
   Data__313->SetBinContent(8,5180);
   Data__313->SetBinContent(9,3620);
   Data__313->SetBinContent(10,2720);
   Data__313->SetBinContent(11,2340);
   Data__313->SetBinContent(12,2300);
   Data__313->SetBinContent(13,1940);
   Data__313->SetBinContent(14,1700);
   Data__313->SetBinContent(15,1320);
   Data__313->SetBinContent(16,1100);
   Data__313->SetBinContent(17,1020);
   Data__313->SetBinContent(18,880);
   Data__313->SetBinContent(19,860);
   Data__313->SetBinContent(20,360);
   Data__313->SetBinError(1,1152.389);
   Data__313->SetBinError(2,731.3002);
   Data__313->SetBinError(3,612.2091);
   Data__313->SetBinError(4,511.8594);
   Data__313->SetBinError(5,415.2108);
   Data__313->SetBinError(6,398.4972);
   Data__313->SetBinError(7,366.6061);
   Data__313->SetBinError(8,321.8695);
   Data__313->SetBinError(9,269.0725);
   Data__313->SetBinError(10,233.2381);
   Data__313->SetBinError(11,216.3331);
   Data__313->SetBinError(12,214.4761);
   Data__313->SetBinError(13,196.9772);
   Data__313->SetBinError(14,184.3909);
   Data__313->SetBinError(15,162.4808);
   Data__313->SetBinError(16,148.324);
   Data__313->SetBinError(17,142.8286);
   Data__313->SetBinError(18,132.665);
   Data__313->SetBinError(19,131.1488);
   Data__313->SetBinError(20,84.85281);
   Data__313->SetEntries(8680);
   Data__313->SetDirectory(0);
   Data__313->SetFillStyle(3001);
   Data__313->SetLineWidth(2);
   Data__313->SetMarkerStyle(20);
   Data__313->SetMarkerSize(1.2);
   Data__313->GetXaxis()->SetRange(1,200);
   Data__313->GetXaxis()->SetLabelFont(42);
   Data__313->GetXaxis()->SetTitleOffset(1);
   Data__313->GetXaxis()->SetTitleFont(42);
   Data__313->GetYaxis()->SetLabelFont(42);
   Data__313->GetYaxis()->SetTitleFont(42);
   Data__313->GetZaxis()->SetLabelFont(42);
   Data__313->GetZaxis()->SetTitleOffset(1);
   Data__313->GetZaxis()->SetTitleFont(42);
   Data__313->Draw("EP same");
   
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

   ci = 1252;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1252;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__314 = new TH1F("hframe_copy__314","",1000,0,1.01);
   hframe_copy__314->SetMinimum(0.01);
   hframe_copy__314->SetMaximum(513928.8);
   hframe_copy__314->SetDirectory(0);
   hframe_copy__314->SetStats(0);
   hframe_copy__314->SetLineStyle(0);
   hframe_copy__314->SetMarkerStyle(20);
   hframe_copy__314->GetXaxis()->SetLabelFont(43);
   hframe_copy__314->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__314->GetXaxis()->SetLabelSize(0);
   hframe_copy__314->GetXaxis()->SetTitleSize(0);
   hframe_copy__314->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__314->GetXaxis()->SetTitleFont(43);
   hframe_copy__314->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__314->GetYaxis()->SetLabelFont(43);
   hframe_copy__314->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__314->GetYaxis()->SetLabelSize(27);
   hframe_copy__314->GetYaxis()->SetTitleSize(33);
   hframe_copy__314->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__314->GetYaxis()->SetTitleFont(43);
   hframe_copy__314->GetZaxis()->SetLabelFont(43);
   hframe_copy__314->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__314->GetZaxis()->SetLabelSize(27);
   hframe_copy__314->GetZaxis()->SetTitleSize(33);
   hframe_copy__314->GetZaxis()->SetTitleOffset(1);
   hframe_copy__314->GetZaxis()->SetTitleFont(43);
   hframe_copy__314->Draw("sameaxis");
   
   TH1F *hframe_copy__315 = new TH1F("hframe_copy__315","",1000,0,1.01);
   hframe_copy__315->SetMinimum(0.01);
   hframe_copy__315->SetMaximum(513928.8);
   hframe_copy__315->SetDirectory(0);
   hframe_copy__315->SetStats(0);
   hframe_copy__315->SetLineStyle(0);
   hframe_copy__315->SetMarkerStyle(20);
   hframe_copy__315->GetXaxis()->SetLabelFont(43);
   hframe_copy__315->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__315->GetXaxis()->SetLabelSize(0);
   hframe_copy__315->GetXaxis()->SetTitleSize(0);
   hframe_copy__315->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__315->GetXaxis()->SetTitleFont(43);
   hframe_copy__315->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__315->GetYaxis()->SetLabelFont(43);
   hframe_copy__315->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__315->GetYaxis()->SetLabelSize(27);
   hframe_copy__315->GetYaxis()->SetTitleSize(33);
   hframe_copy__315->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__315->GetYaxis()->SetTitleFont(43);
   hframe_copy__315->GetZaxis()->SetLabelFont(43);
   hframe_copy__315->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__315->GetZaxis()->SetLabelSize(27);
   hframe_copy__315->GetZaxis()->SetTitleSize(33);
   hframe_copy__315->GetZaxis()->SetTitleOffset(1);
   hframe_copy__315->GetZaxis()->SetTitleFont(43);
   hframe_copy__315->Draw("sameaxis");
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
   MVAOutputM2000_1->Modified();
   MVAOutputM2000->cd();
   MVAOutputM2000->Modified();
   MVAOutputM2000->cd();
   MVAOutputM2000->SetSelected(MVAOutputM2000);
}
