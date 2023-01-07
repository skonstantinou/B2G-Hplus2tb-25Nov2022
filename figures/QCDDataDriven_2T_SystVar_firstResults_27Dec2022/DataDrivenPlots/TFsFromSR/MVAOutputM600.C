void MVAOutputM600()
{
//=========Macro generated from canvas: MVAOutputM600/MVAOutputM600
//=========  (Tue Dec 27 11:52:06 2022) by ROOT version 6.20/02
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
   0.0277148,
   0.02564649,
   0.02524232,
   0.02508853,
   0.02548435,
   0.02583609,
   0.02641944,
   0.02716821,
   0.02846121,
   0.02973986,
   0.0312111,
   0.03396623,
   0.03441346,
   0.03765163,
   0.03954451,
   0.04201179,
   0.04547499,
   0.06902472,
   0.3030872};
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
   0.0277148,
   0.02564649,
   0.02524232,
   0.02508853,
   0.02548435,
   0.02583609,
   0.02641944,
   0.02716821,
   0.02846121,
   0.02973986,
   0.0312111,
   0.03396623,
   0.03441346,
   0.03765163,
   0.03954451,
   0.04201179,
   0.04547499,
   0.06902472,
   0.3030872};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3093,BackgroundStatSystError_fy3093,BackgroundStatSystError_felx3093,BackgroundStatSystError_fehx3093,BackgroundStatSystError_fely3093,BackgroundStatSystError_fehy3093);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1234;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError308530893093 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError308530893093","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMinimum(0.6362953);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMaximum(1.363705);
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
   0.0277148,
   0.02564649,
   0.02524232,
   0.02508853,
   0.02548435,
   0.02583609,
   0.02641944,
   0.02716821,
   0.02846121,
   0.02973986,
   0.0312111,
   0.03396623,
   0.03441346,
   0.03765163,
   0.03954451,
   0.04201179,
   0.04547499,
   0.06902472,
   0.3030872};
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
   0.0277148,
   0.02564649,
   0.02524232,
   0.02508853,
   0.02548435,
   0.02583609,
   0.02641944,
   0.02716821,
   0.02846121,
   0.02973986,
   0.0312111,
   0.03396623,
   0.03441346,
   0.03765163,
   0.03954451,
   0.04201179,
   0.04547499,
   0.06902472,
   0.3030872};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3094,BackgroundStatError_fy3094,BackgroundStatError_felx3094,BackgroundStatError_fehx3094,BackgroundStatError_fely3094,BackgroundStatError_fehy3094);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1233;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError308630903094 = new TH1F("Graph_Graph_Graph_BackgroundStatError308630903094","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMinimum(0.6362953);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMaximum(1.363705);
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
   
   Double_t Graph1_fx3095[6] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3095[6] = {
   1.012742,
   0.9432614,
   1.026197,
   1.027844,
   1.017647,
   0.07905737};
   Double_t Graph1_felx3095[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3095[6] = {
   0.02873677,
   0.02717306,
   0.02878446,
   0.02909511,
   0.02918304,
   0.008242301};
   Double_t Graph1_fehx3095[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3095[6] = {
   0.02873677,
   0.02717306,
   0.02878446,
   0.02909511,
   0.02918304,
   0.008242301};
   grae = new TGraphAsymmErrors(6,Graph1_fx3095,Graph1_fy3095,Graph1_felx3095,Graph1_fehx3095,Graph1_fely3095,Graph1_fehy3095);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1308730913095 = new TH1F("Graph_Graph_Graph_Graph1308730913095","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1308730913095->SetMinimum(0.06373357);
   Graph_Graph_Graph_Graph1308730913095->SetMaximum(1.155552);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMinimum(2.08465);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMaximum(44140.79);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,371.7572);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,721.4568);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,789.5892);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,935.5625);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,824.1663);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,824.9453);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,766.4082);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,799.5767);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,717.0455);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,661.1133);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,709.4959);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,649.6574);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,560.1152);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,540.4281);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,483.976);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,425.111);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,422.4331);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,187.5731);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,12.06732);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,21.23803);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,43.49391);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,43.95582);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,62.44775);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,45.85438);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,50.79309);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,45.95619);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,50.01245);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,47.37471);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,43.73396);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,42.6948);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,42.01072);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,40.37665);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,38.0411);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,35.34479);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,33.50546);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,34.77133);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,25.19249);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,5.537453);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3995.738);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,5560.611);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,11472.56);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,12377.59);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,12402.15);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,12159.66);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,11540.13);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,11350.53);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,10463.8);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,9734.152);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,8694.008);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,7769.524);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,7041.876);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,6202.563);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,5369.547);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,4877.891);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,4374.046);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,3496.181);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1509.323);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,79.37315);
   TT_stack_2_stack_2_stack_2->SetBinError(1,57.9806);
   TT_stack_2_stack_2_stack_2->SetBinError(2,118.391);
   TT_stack_2_stack_2_stack_2->SetBinError(3,123.7687);
   TT_stack_2_stack_2_stack_2->SetBinError(4,124.3035);
   TT_stack_2_stack_2_stack_2->SetBinError(5,122.8097);
   TT_stack_2_stack_2_stack_2->SetBinError(6,119.9672);
   TT_stack_2_stack_2_stack_2->SetBinError(7,119.0627);
   TT_stack_2_stack_2_stack_2->SetBinError(8,114.4511);
   TT_stack_2_stack_2_stack_2->SetBinError(9,110.2389);
   TT_stack_2_stack_2_stack_2->SetBinError(10,103.8499);
   TT_stack_2_stack_2_stack_2->SetBinError(11,98.06388);
   TT_stack_2_stack_2_stack_2->SetBinError(12,93.09171);
   TT_stack_2_stack_2_stack_2->SetBinError(13,87.12378);
   TT_stack_2_stack_2_stack_2->SetBinError(14,80.71507);
   TT_stack_2_stack_2_stack_2->SetBinError(15,76.91973);
   TT_stack_2_stack_2_stack_2->SetBinError(16,72.47991);
   TT_stack_2_stack_2_stack_2->SetBinError(17,64.54361);
   TT_stack_2_stack_2_stack_2->SetBinError(18,42.4376);
   TT_stack_2_stack_2_stack_2->SetBinError(19,9.568692);
   TT_stack_2_stack_2_stack_2->SetEntries(120906.8);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,6331.372);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,13355.63);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11603.88);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10946.13);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,10914.43);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,10909.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,8407.459);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,9593.772);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,7869.99);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,7649.117);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,7558.083);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,5675.962);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,6187.653);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,4918.52);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,5004.258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3937.655);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2912.382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1504.713);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,113.8489);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,334.2311);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,643.0055);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,611.329);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,593.152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,594.7558);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,587.0332);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,527.01);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,552.7146);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,507.4504);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,492.9896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,488.975);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,442.4076);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,435.1977);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,397.8264);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,401.0876);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,358.2585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,301.8641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,215.409);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,61.23052);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4317.555);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(1,18.1681);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(2,62.71568);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(3,117.3223);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(4,193.9251);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(5,193.597);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(6,267.2609);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(7,368.7508);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(8,503.9732);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(9,527.5825);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(10,663.1669);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(11,792.9212);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(12,880.4278);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(13,949.2911);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(14,1191.188);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(15,1340.478);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(16,1684.143);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(17,1470.03);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(18,730.4708);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(19,32.16879);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(1,4.509436);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(2,11.61272);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(3,15.04976);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(4,18.36372);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(5,20.61134);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(6,23.66705);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(7,26.45281);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(8,29.33643);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(9,31.99509);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(10,34.97683);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(11,37.48847);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(12,40.41163);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(13,43.16868);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(14,46.94292);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(15,50.29623);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(16,55.00228);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(17,54.2488);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(18,36.57472);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(19,8.482163);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetEntries(6379.808);
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
   12263.74,
   25549.65,
   24771.06,
   24283.84,
   23898.26,
   23274.24,
   20524.39,
   20857.15,
   18321.19,
   17004.24,
   16037.1,
   13367.5,
   12950.33,
   10828.49,
   10366.12,
   8736.812,
   6830.997,
   3201.609,
   205.2893};
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
   339.887,
   655.2589,
   625.2791,
   609.2457,
   609.0315,
   601.3153,
   542.2429,
   566.6513,
   521.4431,
   505.7036,
   500.5356,
   454.0435,
   445.6656,
   407.7105,
   409.9233,
   367.0492,
   310.6395,
   220.9902,
   62.22058};
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
   339.887,
   655.2589,
   625.2791,
   609.2457,
   609.0315,
   601.3153,
   542.2429,
   566.6513,
   521.4431,
   505.7036,
   500.5356,
   454.0435,
   445.6656,
   407.7105,
   409.9233,
   367.0492,
   310.6395,
   220.9902,
   62.22058};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3096,BkgSum-SR-Inclusive_sum_errors_fy3096,BkgSum-SR-Inclusive_sum_errors_felx3096,BkgSum-SR-Inclusive_sum_errors_fehx3096,BkgSum-SR-Inclusive_sum_errors_fely3096,BkgSum-SR-Inclusive_sum_errors_fehy3096);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1232;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMinimum(128.7619);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMaximum(28811.09);
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
   Data__166->SetBinContent(1,12420);
   Data__166->SetBinContent(2,24100);
   Data__166->SetBinContent(3,25420);
   Data__166->SetBinContent(4,24960);
   Data__166->SetBinContent(5,24320);
   Data__166->SetBinContent(6,1840);
   Data__166->SetBinError(1,352.4202);
   Data__166->SetBinError(2,694.2622);
   Data__166->SetBinError(3,713.0217);
   Data__166->SetBinError(4,706.5409);
   Data__166->SetBinError(5,697.4238);
   Data__166->SetBinError(6,191.8333);
   Data__166->SetEntries(5981.546);
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
      tex = new TLatex(0.19,0.885,"Data blinded in signal region");
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

   ci = 1232;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1232;
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
   MVAOutputM600_1->Modified();
   MVAOutputM600->cd();
   MVAOutputM600->Modified();
   MVAOutputM600->cd();
   MVAOutputM600->SetSelected(MVAOutputM600);
}
