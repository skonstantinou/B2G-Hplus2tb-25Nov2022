void MVAOutputM2000()
{
//=========Macro generated from canvas: MVAOutputM2000/MVAOutputM2000
//=========  (Fri Nov 18 13:27:31 2022) by ROOT version 6.20/02
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
   0.01011169,
   0.02195458,
   0.02802281,
   0.03271065,
   0.03578323,
   0.04085223,
   0.04316183,
   0.04664651,
   0.04971108,
   0.04958346,
   0.05419938,
   0.05633074,
   0.05968011,
   0.05847575,
   0.06440376,
   0.0665227,
   0.07499052,
   0.07923458,
   0.08581554,
   0.08589177};
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
   0.01011169,
   0.02195458,
   0.02802281,
   0.03271065,
   0.03578323,
   0.04085223,
   0.04316183,
   0.04664651,
   0.04971108,
   0.04958346,
   0.05419938,
   0.05633074,
   0.05968011,
   0.05847575,
   0.06440376,
   0.0665227,
   0.07499052,
   0.07923458,
   0.08581554,
   0.08589177};
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
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMinimum(0.8969299);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMaximum(1.10307);
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
   0.01011169,
   0.02195458,
   0.02802281,
   0.03271065,
   0.03578323,
   0.04085223,
   0.04316183,
   0.04664651,
   0.04971108,
   0.04958346,
   0.05419938,
   0.05633074,
   0.05968011,
   0.05847575,
   0.06440376,
   0.0665227,
   0.07499052,
   0.07923458,
   0.08581554,
   0.08589177};
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
   0.01011169,
   0.02195458,
   0.02802281,
   0.03271065,
   0.03578323,
   0.04085223,
   0.04316183,
   0.04664651,
   0.04971108,
   0.04958346,
   0.05419938,
   0.05633074,
   0.05968011,
   0.05847575,
   0.06440376,
   0.0665227,
   0.07499052,
   0.07923458,
   0.08581554,
   0.08589177};
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
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMinimum(0.8969299);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMaximum(1.10307);
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
   
   Double_t Graph1_fx3179[8] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.975};
   Double_t Graph1_fy3179[8] = {
   1.013724,
   1.033924,
   1.035119,
   1.016547,
   0.9401409,
   1.024784,
   0.1078897,
   0.1451625};
   Double_t Graph1_felx3179[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3179[8] = {
   0.01142845,
   0.02542266,
   0.0321751,
   0.03677738,
   0.03863955,
   0.04667763,
   0.01645303,
   0.04026084};
   Double_t Graph1_fehx3179[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3179[8] = {
   0.01142845,
   0.02542266,
   0.0321751,
   0.03677738,
   0.03863955,
   0.04667763,
   0.01645303,
   0.04026084};
   grae = new TGraphAsymmErrors(8,Graph1_fx3179,Graph1_fy3179,Graph1_felx3179,Graph1_fehx3179,Graph1_fely3179,Graph1_fehy3179);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1317131753179 = new TH1F("Graph_Graph_Graph_Graph1317131753179","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1317131753179->SetMinimum(0.08229304);
   Graph_Graph_Graph_Graph1317131753179->SetMaximum(1.169464);
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
   MVAOutputM2000_1->Range(-0.204557,-2.174826,1.073924,6.56647);
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
   hframe__311->SetMaximum(1101520);
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
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMinimum(27.11368);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMaximum(258672.6);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,5266.292);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1191.308);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,763.4717);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,715.2314);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,535.5923);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,407.2726);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,355.4684);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,327.9088);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,306.7947);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,278.0231);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,241.587);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,258.4422);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,241.9893);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,197.9086);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,165.0047);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,143.5729);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,99.2285);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,127.8237);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,153.0685);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,102.5557);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,130.4847);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,56.18867);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,43.56037);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,42.88213);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,38.9748);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,31.06862);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,29.5884);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,31.35477);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,28.63921);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,28.46037);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,24.79814);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,28.81841);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,26.39628);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,21.76358);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,21.70011);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,21.39075);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,18.91279);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,17.95237);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,22.35192);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,21.11851);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4024.202);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,80420.48);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,15603.11);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,9447.104);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,7118.58);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,5662.297);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4498.039);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,3976.173);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3566.406);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,3110.461);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2847.829);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2616.304);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2462.233);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2131.996);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2037.111);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1792.37);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1659.337);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1414.086);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1301.018);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1036.88);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,969.8172);
   TT_stack_2_stack_2_stack_2->SetBinError(1,316.7174);
   TT_stack_2_stack_2_stack_2->SetBinError(2,139.5302);
   TT_stack_2_stack_2_stack_2->SetBinError(3,107.9725);
   TT_stack_2_stack_2_stack_2->SetBinError(4,93.26359);
   TT_stack_2_stack_2_stack_2->SetBinError(5,83.77141);
   TT_stack_2_stack_2_stack_2->SetBinError(6,74.10171);
   TT_stack_2_stack_2_stack_2->SetBinError(7,69.77118);
   TT_stack_2_stack_2_stack_2->SetBinError(8,66.48075);
   TT_stack_2_stack_2_stack_2->SetBinError(9,61.615);
   TT_stack_2_stack_2_stack_2->SetBinError(10,58.62031);
   TT_stack_2_stack_2_stack_2->SetBinError(11,56.20288);
   TT_stack_2_stack_2_stack_2->SetBinError(12,55.22961);
   TT_stack_2_stack_2_stack_2->SetBinError(13,50.78152);
   TT_stack_2_stack_2_stack_2->SetBinError(14,49.78818);
   TT_stack_2_stack_2_stack_2->SetBinError(15,46.65637);
   TT_stack_2_stack_2_stack_2->SetBinError(16,44.81566);
   TT_stack_2_stack_2_stack_2->SetBinError(17,41.53231);
   TT_stack_2_stack_2_stack_2->SetBinError(18,39.61445);
   TT_stack_2_stack_2_stack_2->SetBinError(19,34.82585);
   TT_stack_2_stack_2_stack_2->SetBinError(20,33.46143);
   TT_stack_2_stack_2_stack_2->SetEntries(124130.8);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,69542.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,15200.19);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9787.131);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7197.464);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,6395.967);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,4501.549);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,3639.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3267.715);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,3127.548);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,2756.099);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2506.298);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2112.324);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1643.25);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2202.47);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1596.858);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1731.103);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1284.448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,757.7075);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,458.7173);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,718.7229);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1531.801);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,686.1336);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,548.1638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,480.8483);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,441.0757);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,375.7971);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,335.5965);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,325.8974);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,318.1754);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,284.2744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,284.1717);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,265.0233);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,232.8177);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,253.7326);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,223.0476);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,229.7875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,204.7823);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,167.7023);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,135.294);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,148.6647);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4316.857);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(1,1984.987);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(2,781.9391);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(3,709.2021);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(4,636.72);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(5,607.5925);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(6,671.7413);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(7,683.6237);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(8,650.4175);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(9,627.9491);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(10,685.5655);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(11,666.2556);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(12,599.9846);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(13,547.889);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(14,549.3455);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(15,470.9848);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(16,436.6634);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(17,294.9787);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(18,177.2097);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(19,143.2584);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(20,152.2256);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(1,61.0289);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(2,38.33072);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(3,35.4253);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(4,34.82861);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(5,34.43106);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(6,34.69435);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(7,34.80338);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(8,34.70461);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(9,34.58965);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(10,34.48109);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(11,34.46321);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(12,33.99063);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(13,33.56064);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(14,32.51096);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(15,30.61396);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(16,28.22369);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(17,24.6739);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(18,21.41037);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(19,18.05298);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(20,16.96625);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetEntries(6400.652);
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
   155229.7,
   31994.61,
   19997.71,
   15031.28,
   12593.86,
   9406.86,
   7971.101,
   7162.03,
   6544.805,
   5881.951,
   5364.189,
   4833,
   4017.236,
   4437.49,
   3554.233,
   3534.013,
   2797.763,
   2186.549,
   1648.666,
   1791.096};
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
   1569.634,
   702.428,
   560.3919,
   491.6829,
   450.649,
   384.2913,
   344.0473,
   334.0837,
   325.3493,
   291.6475,
   290.7357,
   272.2465,
   239.7491,
   259.4856,
   228.9059,
   235.0921,
   209.8057,
   173.2503,
   141.4811,
   153.8404};
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
   1569.634,
   702.428,
   560.3919,
   491.6829,
   450.649,
   384.2913,
   344.0473,
   334.0837,
   325.3493,
   291.6475,
   290.7357,
   272.2465,
   239.7491,
   259.4856,
   228.9059,
   235.0921,
   209.8057,
   173.2503,
   141.4811,
   153.8404};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMinimum(1356.466);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMaximum(172328.5);
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
   Data__313->SetBinContent(1,157360);
   Data__313->SetBinContent(2,33080);
   Data__313->SetBinContent(3,20700);
   Data__313->SetBinContent(4,15280);
   Data__313->SetBinContent(5,11840);
   Data__313->SetBinContent(6,9640);
   Data__313->SetBinContent(7,860);
   Data__313->SetBinContent(20,260);
   Data__313->SetBinError(1,1774.035);
   Data__313->SetBinError(2,813.388);
   Data__313->SetBinError(3,643.4283);
   Data__313->SetBinError(4,552.811);
   Data__313->SetBinError(5,486.621);
   Data__313->SetBinError(6,439.09);
   Data__313->SetBinError(7,131.1488);
   Data__313->SetBinError(20,72.11103);
   Data__313->SetEntries(12451);
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
   hframe_copy__314->SetMaximum(1101520);
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
   hframe_copy__315->SetMaximum(1101520);
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
