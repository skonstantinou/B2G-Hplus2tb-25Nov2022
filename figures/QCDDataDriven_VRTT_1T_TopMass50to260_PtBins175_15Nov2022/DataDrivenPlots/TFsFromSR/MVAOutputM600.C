void MVAOutputM600()
{
//=========Macro generated from canvas: MVAOutputM600/MVAOutputM600
//=========  (Fri Nov 18 13:27:25 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM600 = new TCanvas("MVAOutputM600", "MVAOutputM600",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM600->SetHighLightColor(2);
   MVAOutputM600->Range(0,0,1,1);
   MVAOutputM600->SetFillColor(0);
   MVAOutputM600->SetBorderMode(0);
   MVAOutputM600->SetBorderSize(2);
   MVAOutputM600->SetTickx(1);
   MVAOutputM600->SetTicky(1);
   MVAOutputM600->SetLeftMargin(0.16);
   MVAOutputM600->SetRightMargin(0.05);
   MVAOutputM600->SetTopMargin(0.06);
   MVAOutputM600->SetBottomMargin(0.13);
   MVAOutputM600->SetFrameFillStyle(0);
   MVAOutputM600->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM600_2
   TPad *MVAOutputM600_2 = new TPad("MVAOutputM600_2", "MVAOutputM600_2",0,0,1,0.304);
   MVAOutputM600_2->Draw();
   MVAOutputM600_2->cd();
   MVAOutputM600_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM600_2->SetFillColor(0);
   MVAOutputM600_2->SetFillStyle(4000);
   MVAOutputM600_2->SetBorderMode(0);
   MVAOutputM600_2->SetBorderSize(2);
   MVAOutputM600_2->SetTickx(1);
   MVAOutputM600_2->SetTicky(1);
   MVAOutputM600_2->SetLeftMargin(0.16);
   MVAOutputM600_2->SetRightMargin(0.05);
   MVAOutputM600_2->SetTopMargin(0);
   MVAOutputM600_2->SetBottomMargin(0.3421053);
   MVAOutputM600_2->SetFrameFillStyle(0);
   MVAOutputM600_2->SetFrameBorderMode(0);
   MVAOutputM600_2->SetFrameFillStyle(0);
   MVAOutputM600_2->SetFrameBorderMode(0);
   
   TH1F *hframe__162 = new TH1F("hframe__162","",1000,0,1.01);
   hframe__162->SetMinimum(0.3);
   hframe__162->SetMaximum(1.7);
   hframe__162->SetDirectory(0);
   hframe__162->SetStats(0);
   hframe__162->SetLineStyle(0);
   hframe__162->SetMarkerStyle(20);
   hframe__162->GetXaxis()->SetTitle("DNN Output");
   hframe__162->GetXaxis()->SetLabelFont(43);
   hframe__162->GetXaxis()->SetLabelOffset(0.007);
   hframe__162->GetXaxis()->SetLabelSize(27);
   hframe__162->GetXaxis()->SetTitleSize(33);
   hframe__162->GetXaxis()->SetTitleOffset(2.960526);
   hframe__162->GetXaxis()->SetTitleFont(43);
   hframe__162->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__162->GetYaxis()->SetNdivisions(505);
   hframe__162->GetYaxis()->SetLabelFont(43);
   hframe__162->GetYaxis()->SetLabelOffset(0.007);
   hframe__162->GetYaxis()->SetLabelSize(21);
   hframe__162->GetYaxis()->SetTitleSize(33);
   hframe__162->GetYaxis()->SetTitleOffset(1.5625);
   hframe__162->GetYaxis()->SetTitleFont(43);
   hframe__162->GetZaxis()->SetLabelFont(43);
   hframe__162->GetZaxis()->SetLabelOffset(0.007);
   hframe__162->GetZaxis()->SetLabelSize(27);
   hframe__162->GetZaxis()->SetTitleSize(33);
   hframe__162->GetZaxis()->SetTitleOffset(1);
   hframe__162->GetZaxis()->SetTitleFont(43);
   hframe__162->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3093[19] = {
   0.05,
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
   Double_t BackgroundStatSystError_fy3093[19] = {
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
   Double_t BackgroundStatSystError_felx3093[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3093[19] = {
   0.03719716,
   0.02582466,
   0.02226811,
   0.02077102,
   0.02080145,
   0.02184699,
   0.02200831,
   0.02370266,
   0.02505973,
   0.02640708,
   0.02762939,
   0.02937813,
   0.02972229,
   0.0306583,
   0.03126018,
   0.03404173,
   0.03599265,
   0.04245851,
   0.09859769};
   Double_t BackgroundStatSystError_fehx3093[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3093[19] = {
   0.03719716,
   0.02582466,
   0.02226811,
   0.02077102,
   0.02080145,
   0.02184699,
   0.02200831,
   0.02370266,
   0.02505973,
   0.02640708,
   0.02762939,
   0.02937813,
   0.02972229,
   0.0306583,
   0.03126018,
   0.03404173,
   0.03599265,
   0.04245851,
   0.09859769};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3093,BackgroundStatSystError_fy3093,BackgroundStatSystError_felx3093,BackgroundStatSystError_fehx3093,BackgroundStatSystError_fely3093,BackgroundStatSystError_fehy3093);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1233;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError308530893093 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError308530893093","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMinimum(0.8816828);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMaximum(1.118317);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError308530893093);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3094[19] = {
   0.05,
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
   Double_t BackgroundStatError_fy3094[19] = {
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
   Double_t BackgroundStatError_felx3094[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3094[19] = {
   0.03719716,
   0.02582466,
   0.02226811,
   0.02077102,
   0.02080145,
   0.02184699,
   0.02200831,
   0.02370266,
   0.02505973,
   0.02640708,
   0.02762939,
   0.02937813,
   0.02972229,
   0.0306583,
   0.03126018,
   0.03404173,
   0.03599265,
   0.04245851,
   0.09859769};
   Double_t BackgroundStatError_fehx3094[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3094[19] = {
   0.03719716,
   0.02582466,
   0.02226811,
   0.02077102,
   0.02080145,
   0.02184699,
   0.02200831,
   0.02370266,
   0.02505973,
   0.02640708,
   0.02762939,
   0.02937813,
   0.02972229,
   0.0306583,
   0.03126018,
   0.03404173,
   0.03599265,
   0.04245851,
   0.09859769};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3094,BackgroundStatError_fy3094,BackgroundStatError_felx3094,BackgroundStatError_fehx3094,BackgroundStatError_fely3094,BackgroundStatError_fehy3094);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1232;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError308630903094 = new TH1F("Graph_Graph_Graph_BackgroundStatError308630903094","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMinimum(0.8816828);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMaximum(1.118317);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError308630903094->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError308630903094);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx24[2] = {
   0,
   1.01};
   Double_t Graph0_fy24[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx24,Graph0_fy24);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0222324 = new TH1F("Graph_Graph_Graph_Graph0222324","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0222324->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0222324->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0222324->SetDirectory(0);
   Graph_Graph_Graph_Graph0222324->SetStats(0);
   Graph_Graph_Graph_Graph0222324->SetLineStyle(0);
   Graph_Graph_Graph_Graph0222324->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0222324->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0222324->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0222324->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0222324);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3095[19] = {
   0.05,
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
   Double_t Graph1_fy3095[19] = {
   0.8643908,
   0.8788341,
   0.9563561,
   0.9431668,
   0.9941985,
   1.030854,
   0.934616,
   0.9907529,
   1.083207,
   0.9709537,
   0.9991506,
   1.048306,
   1.010499,
   0.970534,
   0.9208138,
   1.057848,
   0.9740391,
   1.048393,
   0.9864222};
   Double_t Graph1_felx3095[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3095[19] = {
   0.04106845,
   0.02929447,
   0.02695298,
   0.02548169,
   0.02596606,
   0.0272793,
   0.02615398,
   0.02913979,
   0.03230935,
   0.03187312,
   0.03415026,
   0.03717958,
   0.03636866,
   0.03755109,
   0.03648397,
   0.04269128,
   0.04313117,
   0.05228908,
   0.1124132};
   Double_t Graph1_fehx3095[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3095[19] = {
   0.04106845,
   0.02929447,
   0.02695298,
   0.02548169,
   0.02596606,
   0.0272793,
   0.02615398,
   0.02913979,
   0.03230935,
   0.03187312,
   0.03415026,
   0.03717958,
   0.03636866,
   0.03755109,
   0.03648397,
   0.04269128,
   0.04313117,
   0.05228908,
   0.1124132};
   grae = new TGraphAsymmErrors(19,Graph1_fx3095,Graph1_fy3095,Graph1_felx3095,Graph1_fehx3095,Graph1_fely3095,Graph1_fehy3095);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1308730913095 = new TH1F("Graph_Graph_Graph_Graph1308730913095","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1308730913095->SetMinimum(0.794103);
   Graph_Graph_Graph_Graph1308730913095->SetMaximum(1.144736);
   Graph_Graph_Graph_Graph1308730913095->SetDirectory(0);
   Graph_Graph_Graph_Graph1308730913095->SetStats(0);
   Graph_Graph_Graph_Graph1308730913095->SetLineStyle(0);
   Graph_Graph_Graph_Graph1308730913095->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1308730913095->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1308730913095->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1308730913095->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1308730913095);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__163 = new TH1F("hframe_copy__163","",1000,0,1.01);
   hframe_copy__163->SetMinimum(0.3);
   hframe_copy__163->SetMaximum(1.7);
   hframe_copy__163->SetDirectory(0);
   hframe_copy__163->SetStats(0);
   hframe_copy__163->SetLineStyle(0);
   hframe_copy__163->SetMarkerStyle(20);
   hframe_copy__163->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__163->GetXaxis()->SetLabelFont(43);
   hframe_copy__163->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__163->GetXaxis()->SetLabelSize(27);
   hframe_copy__163->GetXaxis()->SetTitleSize(33);
   hframe_copy__163->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__163->GetXaxis()->SetTitleFont(43);
   hframe_copy__163->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__163->GetYaxis()->SetNdivisions(505);
   hframe_copy__163->GetYaxis()->SetLabelFont(43);
   hframe_copy__163->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__163->GetYaxis()->SetLabelSize(21);
   hframe_copy__163->GetYaxis()->SetTitleSize(33);
   hframe_copy__163->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__163->GetYaxis()->SetTitleFont(43);
   hframe_copy__163->GetZaxis()->SetLabelFont(43);
   hframe_copy__163->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__163->GetZaxis()->SetLabelSize(27);
   hframe_copy__163->GetZaxis()->SetTitleSize(33);
   hframe_copy__163->GetZaxis()->SetTitleOffset(1);
   hframe_copy__163->GetZaxis()->SetTitleFont(43);
   hframe_copy__163->Draw("sameaxis");
   MVAOutputM600_2->Modified();
   MVAOutputM600->cd();
  
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
   MVAOutputM600->cd();
  
// ------------>Primitives in pad: MVAOutputM600_1
   TPad *MVAOutputM600_1 = new TPad("MVAOutputM600_1", "MVAOutputM600_1",0,0.2897959,1,1);
   MVAOutputM600_1->Draw();
   MVAOutputM600_1->cd();
   MVAOutputM600_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM600_1->SetFillColor(0);
   MVAOutputM600_1->SetFillStyle(4000);
   MVAOutputM600_1->SetBorderMode(0);
   MVAOutputM600_1->SetBorderSize(2);
   MVAOutputM600_1->SetLogy();
   MVAOutputM600_1->SetTickx(1);
   MVAOutputM600_1->SetTicky(1);
   MVAOutputM600_1->SetLeftMargin(0.16);
   MVAOutputM600_1->SetRightMargin(0.05);
   MVAOutputM600_1->SetTopMargin(0.06);
   MVAOutputM600_1->SetBottomMargin(0.02);
   MVAOutputM600_1->SetFrameFillStyle(0);
   MVAOutputM600_1->SetFrameBorderMode(0);
   MVAOutputM600_1->SetFrameFillStyle(0);
   MVAOutputM600_1->SetFrameBorderMode(0);
   
   TH1F *hframe__164 = new TH1F("hframe__164","",1000,0,1.01);
   hframe__164->SetMinimum(0.01);
   hframe__164->SetMaximum(500000);
   hframe__164->SetDirectory(0);
   hframe__164->SetStats(0);
   hframe__164->SetLineStyle(0);
   hframe__164->SetMarkerStyle(20);
   hframe__164->GetXaxis()->SetLabelFont(43);
   hframe__164->GetXaxis()->SetLabelOffset(0.007);
   hframe__164->GetXaxis()->SetLabelSize(0);
   hframe__164->GetXaxis()->SetTitleSize(0);
   hframe__164->GetXaxis()->SetTitleOffset(0.9);
   hframe__164->GetXaxis()->SetTitleFont(43);
   hframe__164->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__164->GetYaxis()->SetLabelFont(43);
   hframe__164->GetYaxis()->SetLabelOffset(0.007);
   hframe__164->GetYaxis()->SetLabelSize(27);
   hframe__164->GetYaxis()->SetTitleSize(33);
   hframe__164->GetYaxis()->SetTitleOffset(1.5625);
   hframe__164->GetYaxis()->SetTitleFont(43);
   hframe__164->GetZaxis()->SetLabelFont(43);
   hframe__164->GetZaxis()->SetLabelOffset(0.007);
   hframe__164->GetZaxis()->SetLabelSize(27);
   hframe__164->GetZaxis()->SetTitleSize(33);
   hframe__164->GetZaxis()->SetTitleOffset(1);
   hframe__164->GetZaxis()->SetTitleFont(43);
   hframe__164->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis139[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_22_stack_23_stack_24 = new TH1F("StackedMCstackHist_stack_22_stack_23_stack_24","StackedMCstackHist",19, xAxis139);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMinimum(14.36465);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMaximum(46721.81);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetDirectory(0);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetStats(0);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetLineStyle(0);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMarkerStyle(20);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_22_stack_23_stack_24->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_22_stack_23_stack_24);
   
   Double_t xAxis140[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM600Inclusive",19, xAxis140);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,113.9472);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,510.4045);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,559.8407);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,746.0117);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,807.6902);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,715.3837);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,660.1083);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,487.0757);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,570.23);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,636.1512);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,430.8386);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,454.7127);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,361.4201);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,431.2586);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,368.9841);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,281.3857);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,259.2334);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,203.1493);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,54.61887);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,14.62812);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,52.47395);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,44.50763);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,60.69332);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,65.64969);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,79.37562);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,51.71794);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,41.60299);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,52.84101);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,64.05208);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,49.06817);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,39.36891);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,38.87911);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,38.38974);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,36.41551);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,33.49771);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,35.95147);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,27.54405);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,15.34478);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1773.179);
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
   Double_t xAxis141[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM600Inclusive",19, xAxis141);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,3175.669);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,12746.82);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,17100.53);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,19178.09);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,18817.9);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,17430.74);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,16225.61);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,14462.45);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,12854.12);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,11458.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,10369.73);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,9453.56);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,8520.567);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,8081.372);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,7470.898);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,6868.9);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,5834.624);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,4177.464);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,711.2097);
   TT_stack_2_stack_2_stack_2->SetBinError(1,42.92133);
   TT_stack_2_stack_2_stack_2->SetBinError(2,121.7763);
   TT_stack_2_stack_2_stack_2->SetBinError(3,141.0809);
   TT_stack_2_stack_2_stack_2->SetBinError(4,150.0583);
   TT_stack_2_stack_2_stack_2->SetBinError(5,148.7494);
   TT_stack_2_stack_2_stack_2->SetBinError(6,143.0683);
   TT_stack_2_stack_2_stack_2->SetBinError(7,138.2502);
   TT_stack_2_stack_2_stack_2->SetBinError(8,130.54);
   TT_stack_2_stack_2_stack_2->SetBinError(9,123.1364);
   TT_stack_2_stack_2_stack_2->SetBinError(10,116.2911);
   TT_stack_2_stack_2_stack_2->SetBinError(11,110.6786);
   TT_stack_2_stack_2_stack_2->SetBinError(12,105.433);
   TT_stack_2_stack_2_stack_2->SetBinError(13,100.3064);
   TT_stack_2_stack_2_stack_2->SetBinError(14,97.9111);
   TT_stack_2_stack_2_stack_2->SetBinError(15,94.15437);
   TT_stack_2_stack_2_stack_2->SetBinError(16,90.63359);
   TT_stack_2_stack_2_stack_2->SetBinError(17,83.48587);
   TT_stack_2_stack_2_stack_2->SetBinError(18,70.77062);
   TT_stack_2_stack_2_stack_2->SetBinError(19,28.98804);
   TT_stack_2_stack_2_stack_2->SetEntries(175408.4);
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
   Double_t xAxis142[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM600Inclusive",19, xAxis142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1835.38);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,7224.456);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,8668.734);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9126.96);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9865.499);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9559.049);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,10441.02);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,8386.268);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,7328.838);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,7020.872);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,6333.982);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,5259.057);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,6397.59);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,5252.988);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,5995.705);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,4458.183);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,4378.002);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,3288.269);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,795.369);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,185.1637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,512.0415);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,567.3289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,581.3043);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,591.5182);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,582.7421);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,583.0202);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,535.883);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,502.5111);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,487.005);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,457.6751);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,431.1408);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,441.2186);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,408.7167);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,420.5564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,383.177);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,365.7851);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,316.6296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,150.3956);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3607.491);
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
   Double_t xAxis143[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__165 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__165","h_SR_MVAOutputM600Inclusive",19, xAxis143);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(1,2.81161);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(2,9.17346);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(3,27.01951);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(4,29.66841);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(5,27.02439);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(6,42.06615);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(7,30.33913);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(8,41.73193);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(9,42.62281);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(10,23.10761);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(11,39.43476);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(12,56.52098);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(13,46.56601);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(14,53.2748);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(15,64.57256);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(16,46.30151);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(17,35.30192);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(18,27.36971);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(19,6.644363);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(1,1.715769);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(2,4.749727);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(3,6.267416);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(4,7.236171);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(5,7.808904);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(6,8.986699);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(7,9.554884);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(8,9.767273);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(9,10.00162);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(10,10.55417);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(11,11.02722);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(12,11.20752);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(13,11.71306);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(14,11.16525);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(15,11.85805);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(16,12.15497);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(17,11.2151);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(18,10.01031);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(19,4.837916);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetEntries(249.1578);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3096[19] = {
   0.05,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3096[19] = {
   5124.997,
   20481.68,
   26329.1,
   29051.07,
   29491.09,
   27705.17,
   27326.73,
   23335.79,
   20753.19,
   19115.23,
   17134.55,
   15167.33,
   15279.58,
   13765.62,
   13835.59,
   11608.47,
   10471.86,
   7668.882,
   1561.198};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3096[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3096[19] = {
   190.6353,
   528.9324,
   586.2993,
   603.4202,
   613.4575,
   605.2747,
   601.4153,
   553.1203,
   520.0693,
   504.7774,
   473.4173,
   445.5877,
   454.144,
   422.0304,
   432.5029,
   395.1724,
   376.9099,
   325.6093,
   153.9305};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3096[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3096[19] = {
   190.6353,
   528.9324,
   586.2993,
   603.4202,
   613.4575,
   605.2747,
   601.4153,
   553.1203,
   520.0693,
   504.7774,
   473.4173,
   445.5877,
   454.144,
   422.0304,
   432.5029,
   395.1724,
   376.9099,
   325.6093,
   153.9305};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3096,BkgSum-SR-Inclusive_sum_errors_fy3096,BkgSum-SR-Inclusive_sum_errors_felx3096,BkgSum-SR-Inclusive_sum_errors_fehx3096,BkgSum-SR-Inclusive_sum_errors_fely3096,BkgSum-SR-Inclusive_sum_errors_fehy3096);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1231;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMinimum(1266.54);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMaximum(32974.28);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors308830923096);
   
   grae->Draw("e2 ");
   Double_t xAxis144[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__166 = new TH1F("Data__166","h_SR_MVAOutputM600Inclusive",19, xAxis144);
   Data__166->SetBinContent(1,4430);
   Data__166->SetBinContent(2,18000);
   Data__166->SetBinContent(3,25180);
   Data__166->SetBinContent(4,27400);
   Data__166->SetBinContent(5,29320);
   Data__166->SetBinContent(6,28560);
   Data__166->SetBinContent(7,25540);
   Data__166->SetBinContent(8,23120);
   Data__166->SetBinContent(9,22480);
   Data__166->SetBinContent(10,18560);
   Data__166->SetBinContent(11,17120);
   Data__166->SetBinContent(12,15900);
   Data__166->SetBinContent(13,15440);
   Data__166->SetBinContent(14,13360);
   Data__166->SetBinContent(15,12740);
   Data__166->SetBinContent(16,12280);
   Data__166->SetBinContent(17,10200);
   Data__166->SetBinContent(18,8040);
   Data__166->SetBinContent(19,1540);
   Data__166->SetBinError(1,210.4757);
   Data__166->SetBinError(2,600);
   Data__166->SetBinError(3,709.6478);
   Data__166->SetBinError(4,740.2702);
   Data__166->SetBinError(5,765.7676);
   Data__166->SetBinError(6,755.7777);
   Data__166->SetBinError(7,714.7027);
   Data__166->SetBinError(8,680);
   Data__166->SetBinError(9,670.5222);
   Data__166->SetBinError(10,609.2618);
   Data__166->SetBinError(11,585.1496);
   Data__166->SetBinError(12,563.9149);
   Data__166->SetBinError(13,555.6978);
   Data__166->SetBinError(14,516.9139);
   Data__166->SetBinError(15,504.7772);
   Data__166->SetBinError(16,495.5805);
   Data__166->SetBinError(17,451.6636);
   Data__166->SetBinError(18,400.9988);
   Data__166->SetBinError(19,175.4993);
   Data__166->SetEntries(16572);
   Data__166->SetDirectory(0);
   Data__166->SetFillStyle(3001);
   Data__166->SetLineWidth(2);
   Data__166->SetMarkerStyle(20);
   Data__166->SetMarkerSize(1.2);
   Data__166->GetXaxis()->SetRange(1,200);
   Data__166->GetXaxis()->SetLabelFont(42);
   Data__166->GetXaxis()->SetTitleOffset(1);
   Data__166->GetXaxis()->SetTitleFont(42);
   Data__166->GetYaxis()->SetLabelFont(42);
   Data__166->GetYaxis()->SetTitleFont(42);
   Data__166->GetZaxis()->SetLabelFont(42);
   Data__166->GetZaxis()->SetTitleOffset(1);
   Data__166->GetZaxis()->SetTitleFont(42);
   Data__166->Draw("EP same");
   
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

   ci = 1231;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1231;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__167 = new TH1F("hframe_copy__167","",1000,0,1.01);
   hframe_copy__167->SetMinimum(0.01);
   hframe_copy__167->SetMaximum(500000);
   hframe_copy__167->SetDirectory(0);
   hframe_copy__167->SetStats(0);
   hframe_copy__167->SetLineStyle(0);
   hframe_copy__167->SetMarkerStyle(20);
   hframe_copy__167->GetXaxis()->SetLabelFont(43);
   hframe_copy__167->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__167->GetXaxis()->SetLabelSize(0);
   hframe_copy__167->GetXaxis()->SetTitleSize(0);
   hframe_copy__167->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__167->GetXaxis()->SetTitleFont(43);
   hframe_copy__167->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__167->GetYaxis()->SetLabelFont(43);
   hframe_copy__167->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__167->GetYaxis()->SetLabelSize(27);
   hframe_copy__167->GetYaxis()->SetTitleSize(33);
   hframe_copy__167->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__167->GetYaxis()->SetTitleFont(43);
   hframe_copy__167->GetZaxis()->SetLabelFont(43);
   hframe_copy__167->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__167->GetZaxis()->SetLabelSize(27);
   hframe_copy__167->GetZaxis()->SetTitleSize(33);
   hframe_copy__167->GetZaxis()->SetTitleOffset(1);
   hframe_copy__167->GetZaxis()->SetTitleFont(43);
   hframe_copy__167->Draw("sameaxis");
   
   TH1F *hframe_copy__168 = new TH1F("hframe_copy__168","",1000,0,1.01);
   hframe_copy__168->SetMinimum(0.01);
   hframe_copy__168->SetMaximum(500000);
   hframe_copy__168->SetDirectory(0);
   hframe_copy__168->SetStats(0);
   hframe_copy__168->SetLineStyle(0);
   hframe_copy__168->SetMarkerStyle(20);
   hframe_copy__168->GetXaxis()->SetLabelFont(43);
   hframe_copy__168->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__168->GetXaxis()->SetLabelSize(0);
   hframe_copy__168->GetXaxis()->SetTitleSize(0);
   hframe_copy__168->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__168->GetXaxis()->SetTitleFont(43);
   hframe_copy__168->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__168->GetYaxis()->SetLabelFont(43);
   hframe_copy__168->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__168->GetYaxis()->SetLabelSize(27);
   hframe_copy__168->GetYaxis()->SetTitleSize(33);
   hframe_copy__168->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__168->GetYaxis()->SetTitleFont(43);
   hframe_copy__168->GetZaxis()->SetLabelFont(43);
   hframe_copy__168->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__168->GetZaxis()->SetLabelSize(27);
   hframe_copy__168->GetZaxis()->SetTitleSize(33);
   hframe_copy__168->GetZaxis()->SetTitleOffset(1);
   hframe_copy__168->GetZaxis()->SetTitleFont(43);
   hframe_copy__168->Draw("sameaxis");
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
   MVAOutputM600_1->Modified();
   MVAOutputM600->cd();
   MVAOutputM600->Modified();
   MVAOutputM600->cd();
   MVAOutputM600->SetSelected(MVAOutputM600);
}
