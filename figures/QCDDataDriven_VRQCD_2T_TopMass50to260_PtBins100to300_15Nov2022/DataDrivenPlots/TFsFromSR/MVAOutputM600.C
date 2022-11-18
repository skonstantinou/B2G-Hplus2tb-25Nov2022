void MVAOutputM600()
{
//=========Macro generated from canvas: MVAOutputM600/MVAOutputM600
//=========  (Fri Nov 18 13:27:50 2022) by ROOT version 6.20/02
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
   0.02674497,
   0.0293862,
   0.02763452,
   0.02790812,
   0.02788417,
   0.02991922,
   0.03048933,
   0.0320866,
   0.03346498,
   0.03506317,
   0.03807633,
   0.03990331,
   0.04123866,
   0.04406564,
   0.0470364,
   0.04551855,
   0.05015147,
   0.06868225,
   0.18327};
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
   0.02674497,
   0.0293862,
   0.02763452,
   0.02790812,
   0.02788417,
   0.02991922,
   0.03048933,
   0.0320866,
   0.03346498,
   0.03506317,
   0.03807633,
   0.03990331,
   0.04123866,
   0.04406564,
   0.0470364,
   0.04551855,
   0.05015147,
   0.06868225,
   0.18327};
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
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMinimum(0.780076);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMaximum(1.219924);
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
   0.02674497,
   0.0293862,
   0.02763452,
   0.02790812,
   0.02788417,
   0.02991922,
   0.03048933,
   0.0320866,
   0.03346498,
   0.03506317,
   0.03807633,
   0.03990331,
   0.04123866,
   0.04406564,
   0.0470364,
   0.04551855,
   0.05015147,
   0.06868225,
   0.18327};
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
   0.02674497,
   0.0293862,
   0.02763452,
   0.02790812,
   0.02788417,
   0.02991922,
   0.03048933,
   0.0320866,
   0.03346498,
   0.03506317,
   0.03807633,
   0.03990331,
   0.04123866,
   0.04406564,
   0.0470364,
   0.04551855,
   0.05015147,
   0.06868225,
   0.18327};
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
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMinimum(0.780076);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMaximum(1.219924);
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
   0.9166897,
   0.9127353,
   0.9937099,
   1.004153,
   0.9663473,
   1.028487,
   0.9852209,
   1.051785,
   1.025403,
   1.044853,
   1.014812,
   1.034829,
   0.974392,
   1.118973,
   1.161193,
   1.048703,
   0.96545,
   0.9996211,
   1.114592};
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
   0.02678822,
   0.03098025,
   0.0304928,
   0.0312126,
   0.03022789,
   0.03387141,
   0.0328407,
   0.03582394,
   0.03671533,
   0.03891237,
   0.0410549,
   0.04296892,
   0.04260719,
   0.04865102,
   0.05379125,
   0.04932684,
   0.05109703,
   0.07140151,
   0.1911509};
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
   0.02678822,
   0.03098025,
   0.0304928,
   0.0312126,
   0.03022789,
   0.03387141,
   0.0328407,
   0.03582394,
   0.03671533,
   0.03891237,
   0.0410549,
   0.04296892,
   0.04260719,
   0.04865102,
   0.05379125,
   0.04932684,
   0.05109703,
   0.07140151,
   0.1911509};
   grae = new TGraphAsymmErrors(19,Graph1_fx3095,Graph1_fy3095,Graph1_felx3095,Graph1_fehx3095,Graph1_fely3095,Graph1_fehy3095);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1308730913095 = new TH1F("Graph_Graph_Graph_Graph1308730913095","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1308730913095->SetMinimum(0.8393562);
   Graph_Graph_Graph_Graph1308730913095->SetMaximum(1.348141);
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
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMinimum(0.8804368);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMaximum(38107.74);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,262.3961);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,433.6871);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,384.2675);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,465.0555);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,339.8579);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,473.0123);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,415.1534);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,369.3514);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,340.4028);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,280.8433);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,250.438);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,288.6039);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,262.5458);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,275.9947);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,195.9622);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,186.7418);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,150.9261);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,63.67681);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,7.945753);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,23.47745);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,37.10789);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,39.32083);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,45.97953);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,36.11972);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,61.05629);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,41.52713);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,35.64638);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,36.65067);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,32.89705);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,29.17253);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,46.79104);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,45.8031);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,34.55268);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,25.08625);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,25.40132);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,23.78005);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,14.83977);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,5.052872);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1212.95);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,3559.708);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,6187.316);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,7331.053);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,7133.958);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,6656.175);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,6243.036);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5709.41);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5323.047);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,4823.369);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4199.776);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3594.136);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3222.021);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2811.865);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2373.846);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2161.548);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1945.805);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1495.067);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,771.507);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,86.87803);
   TT_stack_2_stack_2_stack_2->SetBinError(1,45.89227);
   TT_stack_2_stack_2_stack_2->SetBinError(2,84.94941);
   TT_stack_2_stack_2_stack_2->SetBinError(3,92.59512);
   TT_stack_2_stack_2_stack_2->SetBinError(4,91.60696);
   TT_stack_2_stack_2_stack_2->SetBinError(5,88.57251);
   TT_stack_2_stack_2_stack_2->SetBinError(6,85.8997);
   TT_stack_2_stack_2_stack_2->SetBinError(7,81.826);
   TT_stack_2_stack_2_stack_2->SetBinError(8,79.1867);
   TT_stack_2_stack_2_stack_2->SetBinError(9,75.37232);
   TT_stack_2_stack_2_stack_2->SetBinError(10,70.38772);
   TT_stack_2_stack_2_stack_2->SetBinError(11,65.22828);
   TT_stack_2_stack_2_stack_2->SetBinError(12,62.27802);
   TT_stack_2_stack_2_stack_2->SetBinError(13,57.77427);
   TT_stack_2_stack_2_stack_2->SetBinError(14,53.30703);
   TT_stack_2_stack_2_stack_2->SetBinError(15,51.03088);
   TT_stack_2_stack_2_stack_2->SetBinError(16,48.60455);
   TT_stack_2_stack_2_stack_2->SetBinError(17,42.41965);
   TT_stack_2_stack_2_stack_2->SetBinError(18,30.799);
   TT_stack_2_stack_2_stack_2->SetBinError(19,10.4975);
   TT_stack_2_stack_2_stack_2->SetEntries(65555.95);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,8952.12);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,12398.75);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,13659.13);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,13015.37);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,14155.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,11213.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,12145.45);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,10698.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,10049.76);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,9320.36);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,8197.064);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,7698.96);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,7660.488);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,6805.253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,5668.714);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,6487.625);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,5749.521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,3086.302);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,515.2651);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,337.7349);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,551.1772);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,582.043);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,566.1042);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,581.9925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,525.9749);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,549.4307);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,518.7184);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,502.1745);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,477.628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,452.8993);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,440.4645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,436.5102);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,411.7734);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,373.2177);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,388.5262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,367.694);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,267.1579);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,111.2024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(6991.007);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(1,6.677967);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(2,15.33466);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(3,21.23476);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(4,32.87878);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(5,21.50103);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(6,18.97425);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(7,33.0212);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(8,28.6887);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(9,32.01389);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(10,49.78049);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(11,40.12025);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(12,18.54608);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(13,23.12727);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(14,27.29764);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(15,23.86407);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(16,11.42794);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(17,4.098905);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(18,9.713617);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(19,0.2369347);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(1,4.348279);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(2,7.07203);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(3,7.18439);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(4,7.61028);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(5,8.399721);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(6,8.068882);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(7,9.133809);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(8,9.342901);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(9,8.989893);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(10,8.965273);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(11,9.098704);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(12,8.889759);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(13,8.774974);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(14,8.202189);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(15,8.80764);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(16,8.407348);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(17,7.5933);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(18,5.745544);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(19,2.021323);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetEntries(146.5736);
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
   12774.22,
   19019.75,
   21374.45,
   20614.38,
   21151.82,
   17929.25,
   18270.01,
   16391.18,
   15213.53,
   13800.98,
   12041.64,
   11209.58,
   10734.9,
   9455.095,
   8026.225,
   8620.172,
   7395.515,
   3921.486,
   610.0889};
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
   341.6462,
   558.9184,
   590.6725,
   575.3085,
   589.8008,
   536.4292,
   557.0405,
   525.9372,
   509.1204,
   483.9062,
   458.5014,
   447.2996,
   442.6928,
   416.6448,
   377.5247,
   392.3777,
   370.896,
   269.3365,
   111.811};
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
   341.6462,
   558.9184,
   590.6725,
   575.3085,
   589.8008,
   536.4292,
   557.0405,
   525.9372,
   509.1204,
   483.9062,
   458.5014,
   447.2996,
   442.6928,
   416.6448,
   377.5247,
   392.3777,
   370.896,
   269.3365,
   111.811};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMinimum(448.4501);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMaximum(24111.8);
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
   Data__166->SetBinContent(1,11710);
   Data__166->SetBinContent(2,17360);
   Data__166->SetBinContent(3,21240);
   Data__166->SetBinContent(4,20700);
   Data__166->SetBinContent(5,20440);
   Data__166->SetBinContent(6,18440);
   Data__166->SetBinContent(7,18000);
   Data__166->SetBinContent(8,17240);
   Data__166->SetBinContent(9,15600);
   Data__166->SetBinContent(10,14420);
   Data__166->SetBinContent(11,12220);
   Data__166->SetBinContent(12,11600);
   Data__166->SetBinContent(13,10460);
   Data__166->SetBinContent(14,10580);
   Data__166->SetBinContent(15,9320);
   Data__166->SetBinContent(16,9040);
   Data__166->SetBinContent(17,7140);
   Data__166->SetBinContent(18,3920);
   Data__166->SetBinContent(19,680);
   Data__166->SetBinError(1,342.1988);
   Data__166->SetBinError(2,589.2368);
   Data__166->SetBinError(3,651.7668);
   Data__166->SetBinError(4,643.4283);
   Data__166->SetBinError(5,639.3747);
   Data__166->SetBinError(6,607.2891);
   Data__166->SetBinError(7,600);
   Data__166->SetBinError(8,587.1967);
   Data__166->SetBinError(9,558.5696);
   Data__166->SetBinError(10,537.0289);
   Data__166->SetBinError(11,494.3683);
   Data__166->SetBinError(12,481.6638);
   Data__166->SetBinError(13,457.3839);
   Data__166->SetBinError(14,460);
   Data__166->SetBinError(15,431.7407);
   Data__166->SetBinError(16,425.2058);
   Data__166->SetBinError(17,377.8889);
   Data__166->SetBinError(18,280);
   Data__166->SetBinError(19,116.619);
   Data__166->SetEntries(12805.27);
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
