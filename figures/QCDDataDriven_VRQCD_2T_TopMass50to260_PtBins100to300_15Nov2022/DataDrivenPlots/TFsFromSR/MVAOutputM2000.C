void MVAOutputM2000()
{
//=========Macro generated from canvas: MVAOutputM2000/MVAOutputM2000
//=========  (Fri Nov 18 13:28:03 2022) by ROOT version 6.20/02
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
   0.01206118,
   0.02569748,
   0.02998629,
   0.03455839,
   0.03717271,
   0.04061062,
   0.04276987,
   0.04601276,
   0.05179129,
   0.05362257,
   0.05808781,
   0.06099941,
   0.06358871,
   0.06877986,
   0.07260271,
   0.07440894,
   0.08409329,
   0.09818904,
   0.09317442,
   0.09107481};
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
   0.01206118,
   0.02569748,
   0.02998629,
   0.03455839,
   0.03717271,
   0.04061062,
   0.04276987,
   0.04601276,
   0.05179129,
   0.05362257,
   0.05808781,
   0.06099941,
   0.06358871,
   0.06877986,
   0.07260271,
   0.07440894,
   0.08409329,
   0.09818904,
   0.09317442,
   0.09107481};
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
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMinimum(0.8821732);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMaximum(1.117827);
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
   0.01206118,
   0.02569748,
   0.02998629,
   0.03455839,
   0.03717271,
   0.04061062,
   0.04276987,
   0.04601276,
   0.05179129,
   0.05362257,
   0.05808781,
   0.06099941,
   0.06358871,
   0.06877986,
   0.07260271,
   0.07440894,
   0.08409329,
   0.09818904,
   0.09317442,
   0.09107481};
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
   0.01206118,
   0.02569748,
   0.02998629,
   0.03455839,
   0.03717271,
   0.04061062,
   0.04276987,
   0.04601276,
   0.05179129,
   0.05362257,
   0.05808781,
   0.06099941,
   0.06358871,
   0.06877986,
   0.07260271,
   0.07440894,
   0.08409329,
   0.09818904,
   0.09317442,
   0.09107481};
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
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMinimum(0.8821732);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMaximum(1.117827);
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
   0.9411328,
   1.053485,
   1.015455,
   1.082631,
   1.054548,
   1.112595,
   0.944474,
   1.037923,
   1.105354,
   1.09927,
   1.070906,
   1.124867,
   1.02046,
   1.066199,
   1.051892,
   0.9138715,
   1.087157,
   1.13584,
   1.13064,
   0.7644089};
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
   0.01279654,
   0.02909558,
   0.03277365,
   0.03815772,
   0.04020425,
   0.0459217,
   0.04370504,
   0.05058529,
   0.05685327,
   0.05875844,
   0.06299446,
   0.07142913,
   0.06911427,
   0.0752039,
   0.07906507,
   0.0746173,
   0.09322294,
   0.1108466,
   0.1073156,
   0.08546351};
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
   0.01279654,
   0.02909558,
   0.03277365,
   0.03815772,
   0.04020425,
   0.0459217,
   0.04370504,
   0.05058529,
   0.05685327,
   0.05875844,
   0.06299446,
   0.07142913,
   0.06911427,
   0.0752039,
   0.07906507,
   0.0746173,
   0.09322294,
   0.1108466,
   0.1073156,
   0.08546351};
   grae = new TGraphAsymmErrors(20,Graph1_fx3179,Graph1_fy3179,Graph1_felx3179,Graph1_fehx3179,Graph1_fely3179,Graph1_fehy3179);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1317131753179 = new TH1F("Graph_Graph_Graph_Graph1317131753179","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1317131753179->SetMinimum(0.6221712);
   Graph_Graph_Graph_Graph1317131753179->SetMaximum(1.303461);
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
   MVAOutputM2000_1->Range(-0.204557,-2.171974,1.073924,6.426723);
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
   hframe__311->SetMaximum(814330.8);
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
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMinimum(4.93021);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMaximum(204558);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2477.698);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,610.1312);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,442.822);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,292.5166);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,309.2119);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,232.463);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,225.0281);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,140.2033);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,125.712);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,130.6934);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,74.8972);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,101.5626);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,101.5408);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,79.95526);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,84.26653);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,42.61146);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,80.88709);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,58.3077);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,70.897);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,27.854);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,105.7754);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,58.68528);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,53.1548);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,32.5722);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,33.38545);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,31.00041);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,41.39541);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,23.96355);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,20.57268);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,20.36639);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,16.33227);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,18.76879);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,17.45516);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,13.76211);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,16.78178);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,11.63592);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,15.59333);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,16.5468);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,14.45723);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,11.69946);
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
   Double_t xAxis267[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM2000Inclusive",20, xAxis267);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,39723.93);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,7908.393);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,5289.065);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4192.159);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3357.965);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2804.908);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2253.651);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1930.462);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1770.041);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1506.461);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1428.671);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1234.04);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1057.514);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,987.6194);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,859.9781);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,676.5289);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,617.7601);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,521.5279);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,532.203);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,536.3561);
   TT_stack_2_stack_2_stack_2->SetBinError(1,215.7713);
   TT_stack_2_stack_2_stack_2->SetBinError(2,97.23733);
   TT_stack_2_stack_2_stack_2->SetBinError(3,78.93751);
   TT_stack_2_stack_2_stack_2->SetBinError(4,70.67355);
   TT_stack_2_stack_2_stack_2->SetBinError(5,62.8667);
   TT_stack_2_stack_2_stack_2->SetBinError(6,57.5778);
   TT_stack_2_stack_2_stack_2->SetBinError(7,51.86062);
   TT_stack_2_stack_2_stack_2->SetBinError(8,47.95353);
   TT_stack_2_stack_2_stack_2->SetBinError(9,46.1595);
   TT_stack_2_stack_2_stack_2->SetBinError(10,42.9029);
   TT_stack_2_stack_2_stack_2->SetBinError(11,41.29854);
   TT_stack_2_stack_2_stack_2->SetBinError(12,38.47672);
   TT_stack_2_stack_2_stack_2->SetBinError(13,35.71749);
   TT_stack_2_stack_2_stack_2->SetBinError(14,34.3087);
   TT_stack_2_stack_2_stack_2->SetBinError(15,32.16905);
   TT_stack_2_stack_2_stack_2->SetBinError(16,28.5699);
   TT_stack_2_stack_2_stack_2->SetBinError(17,27.02923);
   TT_stack_2_stack_2_stack_2->SetBinError(18,24.92042);
   TT_stack_2_stack_2_stack_2->SetBinError(19,25.32947);
   TT_stack_2_stack_2_stack_2->SetBinError(20,24.90225);
   TT_stack_2_stack_2_stack_2->SetEntries(67019.12);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,72744.97);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16370.3);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,13175.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10386.51);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9381.073);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,7514.539);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,7410.423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,6041.688);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4943.686);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4730.71);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3893.732);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3073.807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3113.528);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2702.827);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2421.119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2563.597);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1803.291);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1269.016);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1360.389);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1528.91);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1365.407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,629.4153);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,558.9306);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,507.9984);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,479.7873);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,423.5007);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,417.7181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,369.4022);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,350.5998);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,338.1425);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,310.3559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,265.5426);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,268.7638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,256.6795);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,241.6255);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,242.3092);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,208.0693);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,179.0554);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,180.6073);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,188.6346);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7148.649);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(1,153.4113);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(2,47.7017);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(3,37.12476);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(4,24.89712);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(5,38.18055);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(6,11.16258);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(7,10.86193);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(8,12.93631);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(9,17.24519);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(10,2.029259);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(11,18.03511);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(12,16.75722);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(13,8.511292);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(14,10.89507);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(15,9.344653);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(16,5.611647);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(17,1.848129);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(18,-2.952911);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(19,-2.395481);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(20,4.010977);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(1,20.40767);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(2,11.36518);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(3,9.72676);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(4,9.023003);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(5,8.759879);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(6,8.199247);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(7,7.705974);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(8,6.509128);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(9,6.722787);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(10,6.36661);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(11,6.08438);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(12,5.372726);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(13,5.542035);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(14,4.871829);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(15,4.643958);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(16,4.141282);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(17,4.231481);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(18,3.164583);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(19,2.348321);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(20,2.501558);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetEntries(144.4332);
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
   114946.6,
   24888.82,
   18907.79,
   14871.18,
   13048.25,
   10551.91,
   9889.103,
   8112.353,
   6839.438,
   6367.864,
   5397.3,
   4409.41,
   4272.583,
   3770.402,
   3365.364,
   3282.737,
   2501.939,
   1848.852,
   1963.489,
   2093.121};
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
   1386.392,
   639.5801,
   566.9744,
   513.9242,
   485.0388,
   428.5196,
   422.9556,
   373.2717,
   354.2233,
   341.4612,
   313.5173,
   268.9714,
   271.6881,
   259.3277,
   244.3345,
   244.265,
   210.3963,
   181.537,
   182.947,
   190.6306};
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
   1386.392,
   639.5801,
   566.9744,
   513.9242,
   485.0388,
   428.5196,
   422.9556,
   373.2717,
   354.2233,
   341.4612,
   313.5173,
   268.9714,
   271.6881,
   259.3277,
   244.3345,
   244.265,
   210.3963,
   181.537,
   182.947,
   190.6306};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMinimum(1500.583);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMaximum(127799.5);
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
   Data__313->SetBinContent(1,108180);
   Data__313->SetBinContent(2,26220);
   Data__313->SetBinContent(3,19200);
   Data__313->SetBinContent(4,16100);
   Data__313->SetBinContent(5,13760);
   Data__313->SetBinContent(6,11740);
   Data__313->SetBinContent(7,9340);
   Data__313->SetBinContent(8,8420);
   Data__313->SetBinContent(9,7560);
   Data__313->SetBinContent(10,7000);
   Data__313->SetBinContent(11,5780);
   Data__313->SetBinContent(12,4960);
   Data__313->SetBinContent(13,4360);
   Data__313->SetBinContent(14,4020);
   Data__313->SetBinContent(15,3540);
   Data__313->SetBinContent(16,3000);
   Data__313->SetBinContent(17,2720);
   Data__313->SetBinContent(18,2100);
   Data__313->SetBinContent(19,2220);
   Data__313->SetBinContent(20,1600);
   Data__313->SetBinError(1,1470.918);
   Data__313->SetBinError(2,724.1547);
   Data__313->SetBinError(3,619.6773);
   Data__313->SetBinError(4,567.4504);
   Data__313->SetBinError(5,524.5951);
   Data__313->SetBinError(6,484.5617);
   Data__313->SetBinError(7,432.2037);
   Data__313->SetBinError(8,410.3657);
   Data__313->SetBinError(9,388.8444);
   Data__313->SetBinError(10,374.1657);
   Data__313->SetBinError(11,340);
   Data__313->SetBinError(12,314.9603);
   Data__313->SetBinError(13,295.2965);
   Data__313->SetBinError(14,283.5489);
   Data__313->SetBinError(15,266.0827);
   Data__313->SetBinError(16,244.949);
   Data__313->SetBinError(17,233.2381);
   Data__313->SetBinError(18,204.939);
   Data__313->SetBinError(19,210.7131);
   Data__313->SetBinError(20,178.8854);
   Data__313->SetEntries(13091);
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
   hframe_copy__314->SetMaximum(814330.8);
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
   hframe_copy__315->SetMaximum(814330.8);
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
