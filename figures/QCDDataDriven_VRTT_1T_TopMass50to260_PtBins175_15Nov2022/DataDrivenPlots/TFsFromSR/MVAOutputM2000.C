void MVAOutputM2000()
{
//=========Macro generated from canvas: MVAOutputM2000/MVAOutputM2000
//=========  (Fri Nov 18 13:27:33 2022) by ROOT version 6.20/02
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
   0.009430113,
   0.01762794,
   0.02087266,
   0.02421795,
   0.02718945,
   0.03013902,
   0.03308929,
   0.03677723,
   0.03948294,
   0.04538856,
   0.04929658,
   0.05566871,
   0.05665378,
   0.06286362,
   0.06418087,
   0.07472035,
   0.0845764,
   0.09598103,
   0.1030301,
   0.1288623};
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
   0.009430113,
   0.01762794,
   0.02087266,
   0.02421795,
   0.02718945,
   0.03013902,
   0.03308929,
   0.03677723,
   0.03948294,
   0.04538856,
   0.04929658,
   0.05566871,
   0.05665378,
   0.06286362,
   0.06418087,
   0.07472035,
   0.0845764,
   0.09598103,
   0.1030301,
   0.1288623};
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
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMinimum(0.8453652);
   Graph_Graph_Graph_BackgroundStatSystError316931733177->SetMaximum(1.154635);
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
   0.009430113,
   0.01762794,
   0.02087266,
   0.02421795,
   0.02718945,
   0.03013902,
   0.03308929,
   0.03677723,
   0.03948294,
   0.04538856,
   0.04929658,
   0.05566871,
   0.05665378,
   0.06286362,
   0.06418087,
   0.07472035,
   0.0845764,
   0.09598103,
   0.1030301,
   0.1288623};
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
   0.009430113,
   0.01762794,
   0.02087266,
   0.02421795,
   0.02718945,
   0.03013902,
   0.03308929,
   0.03677723,
   0.03948294,
   0.04538856,
   0.04929658,
   0.05566871,
   0.05665378,
   0.06286362,
   0.06418087,
   0.07472035,
   0.0845764,
   0.09598103,
   0.1030301,
   0.1288623};
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
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMinimum(0.8453652);
   Graph_Graph_Graph_BackgroundStatError317031743178->SetMaximum(1.154635);
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
   0.9169006,
   1.037928,
   1.035837,
   1.056972,
   1.000598,
   1.003811,
   1.030996,
   1.062936,
   0.9369482,
   1.174269,
   1.086325,
   1.05305,
   0.9822577,
   1.095245,
   1.02904,
   1.075042,
   0.9219966,
   1.033352,
   0.6201772,
   1.021818};
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
   0.01095593,
   0.02274169,
   0.02657739,
   0.03111433,
   0.03382638,
   0.03720371,
   0.04157377,
   0.04744116,
   0.04726279,
   0.06096503,
   0.06368148,
   0.07051746,
   0.06810732,
   0.0825572,
   0.08084899,
   0.09465213,
   0.09884842,
   0.117004,
   0.09457614,
   0.1595812};
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
   0.01095593,
   0.02274169,
   0.02657739,
   0.03111433,
   0.03382638,
   0.03720371,
   0.04157377,
   0.04744116,
   0.04726279,
   0.06096503,
   0.06368148,
   0.07051746,
   0.06810732,
   0.0825572,
   0.08084899,
   0.09465213,
   0.09884842,
   0.117004,
   0.09457614,
   0.1595812};
   grae = new TGraphAsymmErrors(20,Graph1_fx3179,Graph1_fy3179,Graph1_felx3179,Graph1_fehx3179,Graph1_fely3179,Graph1_fehy3179);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1317131753179 = new TH1F("Graph_Graph_Graph_Graph1317131753179","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1317131753179->SetMinimum(0.4546377);
   Graph_Graph_Graph_Graph1317131753179->SetMaximum(1.306198);
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
   MVAOutputM2000_1->Range(-0.204557,-2.174635,1.073924,6.557134);
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
   hframe__311->SetMaximum(1079514);
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
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMinimum(7.810374);
   StackedMCstackHist_stack_43_stack_44_stack_45->SetMaximum(269709);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,3650.488);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1010.28);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,750.3426);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,652.0103);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,413.4805);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,435.8977);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,290.4768);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,258.7933);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,247.0473);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,157.1841);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,148.6369);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,160.756);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,136.4644);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,85.93292);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,64.89486);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,71.11684);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,108.0473);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,48.10308);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,37.40479);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,39.03384);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,141.7532);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,60.12214);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,53.885);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,60.50823);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,42.79974);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,58.78564);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,34.63637);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,31.82347);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,28.03684);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,25.96377);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,25.25632);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,24.60807);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,23.67762);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,18.07421);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,17.25453);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,17.70308);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,21.79861);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,12.8336);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,12.121);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,10.01406);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1792.93);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,95460.8);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,25223.08);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,17442.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,12916.27);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,10226.67);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,8359.254);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,7023.273);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5766.434);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,4875.058);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4016.887);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3377.219);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2769.927);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2444.818);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2038.171);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1786.894);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1417.772);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1057.328);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,855.5375);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,614.1905);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,442.4462);
   TT_stack_2_stack_2_stack_2->SetBinError(1,334.2171);
   TT_stack_2_stack_2_stack_2->SetBinError(2,172.1128);
   TT_stack_2_stack_2_stack_2->SetBinError(3,143.6232);
   TT_stack_2_stack_2_stack_2->SetBinError(4,123.7082);
   TT_stack_2_stack_2_stack_2->SetBinError(5,110.1976);
   TT_stack_2_stack_2_stack_2->SetBinError(6,99.75493);
   TT_stack_2_stack_2_stack_2->SetBinError(7,91.64536);
   TT_stack_2_stack_2_stack_2->SetBinError(8,82.81827);
   TT_stack_2_stack_2_stack_2->SetBinError(9,76.22093);
   TT_stack_2_stack_2_stack_2->SetBinError(10,68.79289);
   TT_stack_2_stack_2_stack_2->SetBinError(11,63.00132);
   TT_stack_2_stack_2_stack_2->SetBinError(12,57.11767);
   TT_stack_2_stack_2_stack_2->SetBinError(13,53.80955);
   TT_stack_2_stack_2_stack_2->SetBinError(14,48.99392);
   TT_stack_2_stack_2_stack_2->SetBinError(15,45.97465);
   TT_stack_2_stack_2_stack_2->SetBinError(16,40.88154);
   TT_stack_2_stack_2_stack_2->SetBinError(17,35.3181);
   TT_stack_2_stack_2_stack_2->SetBinError(18,31.76971);
   TT_stack_2_stack_2_stack_2->SetBinError(19,26.97017);
   TT_stack_2_stack_2_stack_2->SetBinError(20,22.81522);
   TT_stack_2_stack_2_stack_2->SetEntries(176806.1);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,53664.28);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,13904.29);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11136.28);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8267.682);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,6849.401);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,5709.572);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,4616.461);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3420.309);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,3266.833);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,2144.752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1831.659);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1304.633);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1653.859);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1089.789);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1296.778);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,911.0185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,721.8337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,606.0101);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,735.1052);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,321.0111);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1394.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,683.6529);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,592.6423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,510.5762);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,460.6024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,421.5454);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,382.4117);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,335.8596);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,321.1089);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,277.2164);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,255.2362);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,227.4239);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,232.6232);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,195.1713);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,196.0205);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,173.6999);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,154.1229);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,140.7884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,139.7786);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,100.3643);
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
   Double_t xAxis269[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__312 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__312","h_SR_MVAOutputM2000Inclusive",20, xAxis269);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(1,132.4984);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(2,71.43365);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(3,83.74407);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(4,68.47324);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(5,47.48283);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(6,59.45284);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(7,35.54245);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(8,25.06968);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(9,15.3416);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(10,27.1953);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(11,11.52859);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(12,11.25863);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(13,22.25209);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(14,12.70389);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(15,9.371475);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(16,3.686244);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(17,9.00905);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(18,1.707758);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(19,2.114386);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinContent(20,4.497137);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(1,17.13333);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(2,13.48186);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(3,12.52852);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(4,11.98504);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(5,11.24223);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(6,10.80015);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(7,10.45559);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(8,9.701469);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(9,9.38068);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(10,8.663052);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(11,8.054053);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(12,7.620314);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(13,6.742828);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(14,6.963294);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(15,5.436939);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(16,5.265375);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(17,4.566375);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(18,3.847064);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(19,3.363899);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetBinError(20,2.465013);
   ChargedHiggs_HplusTBHplusToTB_M_800__312->SetEntries(250.0168);
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
   152775.6,
   40137.65,
   29328.95,
   21835.97,
   17489.55,
   14504.72,
   11930.21,
   9445.535,
   8388.938,
   6318.823,
   5357.515,
   4235.315,
   4235.141,
   3213.893,
   3148.567,
   2399.907,
   1887.209,
   1509.651,
   1386.7,
   802.4911};
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
   1440.691,
   707.5441,
   612.1733,
   528.8223,
   475.5312,
   437.1582,
   394.7623,
   347.3806,
   331.2199,
   286.8022,
   264.1071,
   235.7745,
   239.9368,
   202.0369,
   202.0778,
   179.3219,
   159.6133,
   144.8978,
   142.8719,
   103.4109};
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
   1440.691,
   707.5441,
   612.1733,
   528.8223,
   475.5312,
   437.1582,
   394.7623,
   347.3806,
   331.2199,
   286.8022,
   264.1071,
   235.7745,
   239.9368,
   202.0369,
   202.0778,
   179.3219,
   159.6133,
   144.8978,
   142.8719,
   103.4109};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMinimum(629.1722);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors317231763180->SetMaximum(169568);
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
   Data__313->SetBinContent(1,140080);
   Data__313->SetBinContent(2,41660);
   Data__313->SetBinContent(3,30380);
   Data__313->SetBinContent(4,23080);
   Data__313->SetBinContent(5,17500);
   Data__313->SetBinContent(6,14560);
   Data__313->SetBinContent(7,12300);
   Data__313->SetBinContent(8,10040);
   Data__313->SetBinContent(9,7860);
   Data__313->SetBinContent(10,7420);
   Data__313->SetBinContent(11,5820);
   Data__313->SetBinContent(12,4460);
   Data__313->SetBinContent(13,4160);
   Data__313->SetBinContent(14,3520);
   Data__313->SetBinContent(15,3240);
   Data__313->SetBinContent(16,2580);
   Data__313->SetBinContent(17,1740);
   Data__313->SetBinContent(18,1560);
   Data__313->SetBinContent(19,860);
   Data__313->SetBinContent(20,820);
   Data__313->SetBinError(1,1673.798);
   Data__313->SetBinError(2,912.7979);
   Data__313->SetBinError(3,779.487);
   Data__313->SetBinError(4,679.4115);
   Data__313->SetBinError(5,591.608);
   Data__313->SetBinError(6,539.6295);
   Data__313->SetBinError(7,495.9839);
   Data__313->SetBinError(8,448.1071);
   Data__313->SetBinError(9,396.4846);
   Data__313->SetBinError(10,385.2272);
   Data__313->SetBinError(11,341.1744);
   Data__313->SetBinError(12,298.6637);
   Data__313->SetBinError(13,288.4441);
   Data__313->SetBinError(14,265.33);
   Data__313->SetBinError(15,254.5584);
   Data__313->SetBinError(16,227.1563);
   Data__313->SetBinError(17,186.5476);
   Data__313->SetBinError(18,176.6352);
   Data__313->SetBinError(19,131.1488);
   Data__313->SetBinError(20,128.0625);
   Data__313->SetEntries(16682);
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
   hframe_copy__314->SetMaximum(1079514);
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
   hframe_copy__315->SetMaximum(1079514);
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
