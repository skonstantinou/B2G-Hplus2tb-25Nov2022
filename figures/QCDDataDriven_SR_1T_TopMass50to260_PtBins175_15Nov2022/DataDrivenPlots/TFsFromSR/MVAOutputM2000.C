void MVAOutputM2000()
{
//=========Macro generated from canvas: MVAOutputM2000/MVAOutputM2000
//=========  (Fri Nov 18 13:27:24 2022) by ROOT version 6.20/02
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
   0.0144823,
   0.03042454,
   0.03946957,
   0.04799295,
   0.05355303,
   0.06165272,
   0.07300341,
   0.07522674,
   0.08482711,
   0.08189644,
   0.0966744,
   0.1153657,
   0.1069872,
   0.1226164,
   0.1133008,
   0.1490545,
   0.1572129,
   0.1642076,
   0.179504,
   0.2057071};
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
   0.0144823,
   0.03042454,
   0.03946957,
   0.04799295,
   0.05355303,
   0.06165272,
   0.07300341,
   0.07522674,
   0.08482711,
   0.08189644,
   0.0966744,
   0.1153657,
   0.1069872,
   0.1226164,
   0.1133008,
   0.1490545,
   0.1572129,
   0.1642076,
   0.179504,
   0.2057071};
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
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMinimum(0.7531515);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMaximum(1.246848);
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
   0.0144823,
   0.03042454,
   0.03946957,
   0.04799295,
   0.05355303,
   0.06165272,
   0.07300341,
   0.07522674,
   0.08482711,
   0.08189644,
   0.0966744,
   0.1153657,
   0.1069872,
   0.1226164,
   0.1133008,
   0.1490545,
   0.1572129,
   0.1642076,
   0.179504,
   0.2057071};
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
   0.0144823,
   0.03042454,
   0.03946957,
   0.04799295,
   0.05355303,
   0.06165272,
   0.07300341,
   0.07522674,
   0.08482711,
   0.08189644,
   0.0966744,
   0.1153657,
   0.1069872,
   0.1226164,
   0.1133008,
   0.1490545,
   0.1572129,
   0.1642076,
   0.179504,
   0.2057071};
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
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMinimum(0.7531515);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMaximum(1.246848);
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
   
   Double_t Graph1_fx3179[7] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3179[7] = {
   1.031408,
   1.048675,
   1.034904,
   1.064212,
   0.9637791,
   1.022693,
   0.08731657};
   Double_t Graph1_felx3179[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3179[7] = {
   0.01573981,
   0.03396992,
   0.04377178,
   0.05388846,
   0.05698945,
   0.06772952,
   0.02333633};
   Double_t Graph1_fehx3179[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3179[7] = {
   0.01573981,
   0.03396992,
   0.04377178,
   0.05388846,
   0.05698945,
   0.06772952,
   0.02333633};
   grae = new TGraphAsymmErrors(7,Graph1_fx3179,Graph1_fy3179,Graph1_felx3179,Graph1_fehx3179,Graph1_fely3179,Graph1_fehy3179);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1317131753179 = new TH1F("Graph_Graph_Graph_Graph1317131753179","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1317131753179->SetMinimum(0.05758221);
   Graph_Graph_Graph_Graph1317131753179->SetMaximum(1.223512);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   MVAOutputM2000_1->Range(-0.204557,-2.169108,1.073924,6.286315);
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
   hframe__311->SetMaximum(601160);
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
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMinimum(1.117679);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMaximum(156023.2);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1955.326);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,538.8962);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,337.5601);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,269.3138);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,188.9629);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,145.3737);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,144.2863);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,85.72967);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,61.28143);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,97.01105);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,63.66978);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,43.73989);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,37.26781);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,47.04485);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,57.00386);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,33.19619);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,28.49933);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,10.28701);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,18.64709);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,18.90442);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,76.19379);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,36.76813);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,30.0434);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,28.27467);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,27.94458);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,21.68653);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,19.86273);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,15.37992);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,12.2571);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,17.49088);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,14.31327);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,10.17605);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,10.16582);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,14.83005);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,14.06608);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,11.67607);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,7.824539);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,6.332228);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,6.550059);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,7.239146);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1414.932);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,28534.56);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,5629.644);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3613.242);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2465.99);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1876.367);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1496.829);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1192.817);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1087.07);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,822.0059);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,740.9927);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,615.9247);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,515.2601);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,484.7513);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,417.4911);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,360.4821);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,299.4299);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,236.6103);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,216.1367);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,193.4763);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,118.7508);
   TT_stack_2_stack_2_stack_2->SetBinError(1,191.0127);
   TT_stack_2_stack_2_stack_2->SetBinError(2,84.28033);
   TT_stack_2_stack_2_stack_2->SetBinError(3,67.54511);
   TT_stack_2_stack_2_stack_2->SetBinError(4,55.94368);
   TT_stack_2_stack_2_stack_2->SetBinError(5,48.73542);
   TT_stack_2_stack_2_stack_2->SetBinError(6,43.89158);
   TT_stack_2_stack_2_stack_2->SetBinError(7,38.80284);
   TT_stack_2_stack_2_stack_2->SetBinError(8,37.29729);
   TT_stack_2_stack_2_stack_2->SetBinError(9,32.18252);
   TT_stack_2_stack_2_stack_2->SetBinError(10,30.65139);
   TT_stack_2_stack_2_stack_2->SetBinError(11,28.02999);
   TT_stack_2_stack_2_stack_2->SetBinError(12,25.97156);
   TT_stack_2_stack_2_stack_2->SetBinError(13,25.04745);
   TT_stack_2_stack_2_stack_2->SetBinError(14,23.00721);
   TT_stack_2_stack_2_stack_2->SetBinError(15,21.23617);
   TT_stack_2_stack_2_stack_2->SetBinError(16,19.38531);
   TT_stack_2_stack_2_stack_2->SetBinError(17,17.14798);
   TT_stack_2_stack_2_stack_2->SetBinError(18,16.63054);
   TT_stack_2_stack_2_stack_2->SetBinError(19,15.36804);
   TT_stack_2_stack_2_stack_2->SetBinError(20,11.81325);
   TT_stack_2_stack_2_stack_2->SetEntries(39982.08);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,52774.92);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,12006.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,6852.131);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,4594.063);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,3869.641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,2816.612);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,1869.619);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,1622.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1516.63);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1604.292);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1030.935);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,703.7181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,933.9424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,653.9147);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,842.3377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,418.3408);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,402.3171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,376.8246);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,248.0994);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,232.3082);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1188.201);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,545.2769);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,419.9299);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,346.1279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,312.8313);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,270.5035);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,230.0074);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,206.3665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,200.6441);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,196.8773);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,162.3417);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,142.9788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,153.4057);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,134.3809);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,140.4478);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,109.6236);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,103.2212);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,97.4464);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,80.90508);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,74.83228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3633.413);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(1,565.0304);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(2,382.8494);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(3,363.9479);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(4,349.1399);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(5,290.8492);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(6,279.4658);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(7,226.9393);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(8,197.2313);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(9,186.3161);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(10,188.5244);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(11,122.9195);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(12,103.6277);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(13,94.40171);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(14,83.3799);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(15,60.81059);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(16,32.48485);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(17,29.42264);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(18,20.41614);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(19,18.82732);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(20,24.94793);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(1,32.83253);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(2,27.70848);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(3,27.06329);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(4,25.31468);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(5,23.87906);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(6,22.39082);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(7,21.40767);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(8,20.25199);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(9,18.56319);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(10,17.33788);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(11,16.23092);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(12,14.59412);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(13,14.14449);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(14,12.6008);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(15,11.40962);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(16,9.789222);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(17,8.672809);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(18,7.571491);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(19,6.92333);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(20,6.481393);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetEntries(1850.394);
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
   83264.8,
   18175.31,
   10802.93,
   7329.368,
   5934.97,
   4458.814,
   3206.722,
   2795.19,
   2399.917,
   2442.295,
   1710.529,
   1262.718,
   1455.961,
   1118.451,
   1259.824,
   750.9668,
   667.4267,
   603.2483,
   460.2227,
   369.9633};
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
   1205.866,
   552.9756,
   426.3872,
   351.758,
   317.8356,
   274.898,
   234.1017,
   210.273,
   203.5781,
   200.0153,
   165.3644,
   145.6743,
   155.7692,
   137.1404,
   142.739,
   111.935,
   104.9281,
   99.05793,
   82.61181,
   76.10407};
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
   1205.866,
   552.9756,
   426.3872,
   351.758,
   317.8356,
   274.898,
   234.1017,
   210.273,
   203.5781,
   200.0153,
   165.3644,
   145.6743,
   155.7692,
   137.1404,
   142.739,
   111.935,
   104.9281,
   99.05793,
   82.61181,
   76.10407};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMinimum(264.4733);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMaximum(92888.35);
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
   Data__313->SetBinContent(1,85880);
   Data__313->SetBinContent(2,19060);
   Data__313->SetBinContent(3,11180);
   Data__313->SetBinContent(4,7800);
   Data__313->SetBinContent(5,5720);
   Data__313->SetBinContent(6,4560);
   Data__313->SetBinContent(7,280);
   Data__313->SetBinError(1,1310.572);
   Data__313->SetBinError(2,617.414);
   Data__313->SetBinError(3,472.8636);
   Data__313->SetBinError(4,394.9684);
   Data__313->SetBinError(5,338.2307);
   Data__313->SetBinError(6,301.9934);
   Data__313->SetBinError(7,74.83315);
   Data__313->SetEntries(6724);
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
   hframe_copy__314->SetMaximum(601160);
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
   hframe_copy__315->SetMaximum(601160);
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
   MVAOutputM2000_1->Modified();
   MVAOutputM2000->cd();
   MVAOutputM2000->Modified();
   MVAOutputM2000->cd();
   MVAOutputM2000->SetSelected(MVAOutputM2000);
}
