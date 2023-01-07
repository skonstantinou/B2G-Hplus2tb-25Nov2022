void MVAOutputM600()
{
//=========Macro generated from canvas: MVAOutputM600/MVAOutputM600
//=========  (Tue Dec 27 11:55:06 2022) by ROOT version 6.20/02
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
   0.03210502,
   0.03292631,
   0.03213588,
   0.03437062,
   0.0374516,
   0.03930392,
   0.04158751,
   0.04638076,
   0.04698959,
   0.05249335,
   0.05409641,
   0.05602596,
   0.06074731,
   0.06121716,
   0.06857891,
   0.06382518,
   0.09016274,
   0.1632952,
   0.9577849};
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
   0.03210502,
   0.03292631,
   0.03213588,
   0.03437062,
   0.0374516,
   0.03930392,
   0.04158751,
   0.04638076,
   0.04698959,
   0.05249335,
   0.05409641,
   0.05602596,
   0.06074731,
   0.06121716,
   0.06857891,
   0.06382518,
   0.09016274,
   0.1632952,
   0.9577849};
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
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMinimum(0.03799361);
   Graph_Graph_Graph_BackgroundStatSystError308530893093->SetMaximum(2.149342);
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
   0.03210502,
   0.03292631,
   0.03213588,
   0.03437062,
   0.0374516,
   0.03930392,
   0.04158751,
   0.04638076,
   0.04698959,
   0.05249335,
   0.05409641,
   0.05602596,
   0.06074731,
   0.06121716,
   0.06857891,
   0.06382518,
   0.09016274,
   0.1632952,
   0.9577849};
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
   0.03210502,
   0.03292631,
   0.03213588,
   0.03437062,
   0.0374516,
   0.03930392,
   0.04158751,
   0.04638076,
   0.04698959,
   0.05249335,
   0.05409641,
   0.05602596,
   0.06074731,
   0.06121716,
   0.06857891,
   0.06382518,
   0.09016274,
   0.1632952,
   0.9577849};
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
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMinimum(0.03799361);
   Graph_Graph_Graph_BackgroundStatError308630903094->SetMaximum(2.149342);
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
   1.074788,
   1.092205,
   1.030389,
   1.006311,
   1.042232,
   0.09533694};
   Double_t Graph1_felx3095[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3095[6] = {
   0.03520584,
   0.03671408,
   0.03505453,
   0.03737344,
   0.0413597,
   0.01322085};
   Double_t Graph1_fehx3095[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3095[6] = {
   0.03520584,
   0.03671408,
   0.03505453,
   0.03737344,
   0.0413597,
   0.01322085};
   grae = new TGraphAsymmErrors(6,Graph1_fx3095,Graph1_fy3095,Graph1_felx3095,Graph1_fehx3095,Graph1_fely3095,Graph1_fehy3095);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1308730913095 = new TH1F("Graph_Graph_Graph_Graph1308730913095","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1308730913095->SetMinimum(0.07390447);
   Graph_Graph_Graph_Graph1308730913095->SetMaximum(1.2336);
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
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMinimum(6.708148);
   StackedMCstackHist_stack_22_stack_23_stack_24->SetMaximum(26832.59);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,175.6874);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,369.816);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,378.9583);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,348.3317);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,339.2248);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,299.2214);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,288.8937);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,258.3637);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,209.6063);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,191.0773);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,200.3808);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,145.4719);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,166.8893);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,152.5165);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,150.052);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,167.2177);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,102.8595);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,22.47428);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.1391468);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,14.75626);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,31.21916);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,34.81374);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,31.50493);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,31.07672);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,26.97273);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,30.62372);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,28.86925);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,27.23317);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,21.99662);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,24.79213);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,20.37321);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,22.86252);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,20.43136);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,20.73213);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,24.67103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,18.30855);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,6.054363);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.1068023);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1372.485);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2954.126);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,5575.154);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,5427.415);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4928.685);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4245.356);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3699.575);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,3222.528);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2773.009);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2420.614);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2168.712);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1952.801);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1759.461);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1465.641);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1382.614);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1285.178);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1119.037);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,756.6613);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,163.7719);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,2.349898);
   TT_stack_2_stack_2_stack_2->SetBinError(1,42.88697);
   TT_stack_2_stack_2_stack_2->SetBinError(2,83.51193);
   TT_stack_2_stack_2_stack_2->SetBinError(3,82.87819);
   TT_stack_2_stack_2_stack_2->SetBinError(4,79.28978);
   TT_stack_2_stack_2_stack_2->SetBinError(5,72.90291);
   TT_stack_2_stack_2_stack_2->SetBinError(6,68.79812);
   TT_stack_2_stack_2_stack_2->SetBinError(7,64.05026);
   TT_stack_2_stack_2_stack_2->SetBinError(8,59.32642);
   TT_stack_2_stack_2_stack_2->SetBinError(9,55.62032);
   TT_stack_2_stack_2_stack_2->SetBinError(10,52.14753);
   TT_stack_2_stack_2_stack_2->SetBinError(11,49.72951);
   TT_stack_2_stack_2_stack_2->SetBinError(12,46.67131);
   TT_stack_2_stack_2_stack_2->SetBinError(13,42.54884);
   TT_stack_2_stack_2_stack_2->SetBinError(14,41.63879);
   TT_stack_2_stack_2_stack_2->SetBinError(15,40.05027);
   TT_stack_2_stack_2_stack_2->SetBinError(16,37.21165);
   TT_stack_2_stack_2_stack_2->SetBinError(17,30.35663);
   TT_stack_2_stack_2_stack_2->SetBinError(18,14.08532);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.763306);
   TT_stack_2_stack_2_stack_2->SetEntries(38739.01);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,5541.667);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,10260.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,10964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9132.051);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7600.812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6909.882);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,6341.341);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,4858.031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4966.6);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3838.667);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3626.753);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3583.004);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2986.75);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3001.513);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2197.355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2933.079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1109.874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,443.4921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,18.28742);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,274.6788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,526.0943);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,531.3808);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,487.844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,449.4286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,422.3377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,403.5547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,359.9192);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,351.5585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,320.4177);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,307.6966);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,303.2204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,276.4204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,273.82);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,245.0026);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,265.5729);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,173.9913);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,101.684);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,19.82082);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3575.638);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(1,11.50239);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(2,39.69928);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(3,87.5749);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(4,91.25949);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(5,84.83096);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(6,131.6526);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(7,125.7163);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(8,142.6993);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(9,178.954);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(10,202.2322);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(11,253.643);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(12,293.9382);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(13,349.0915);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(14,353.2033);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(15,411.4273);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(16,398.0233);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(17,335.2613);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(18,82.83167);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinContent(19,-1.024688);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(1,3.43976);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(2,9.709307);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(3,11.45272);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(4,12.92098);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(5,14.40826);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(6,15.99643);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(7,16.73961);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(8,17.93592);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(9,19.26786);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(10,20.52821);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(11,21.81604);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(12,23.74836);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(13,25.08162);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(14,26.37355);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(15,27.48692);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(16,28.33702);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(17,24.46699);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(18,12.62605);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetBinError(19,2.134518);
   ChargedHiggs_HplusTBHplusToTB_M_800__165->SetEntries(1836.921);
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
   8671.48,
   16205.75,
   16770.37,
   14409.07,
   12185.39,
   10908.68,
   9852.763,
   7889.403,
   7596.82,
   6198.457,
   5779.935,
   5487.937,
   4619.28,
   4536.643,
   3632.585,
   4219.333,
   1969.394,
   629.7383,
   20.77647};
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
   278.3981,
   533.5954,
   538.9307,
   495.2486,
   456.3624,
   428.7538,
   409.7519,
   365.9165,
   356.9715,
   325.3778,
   312.6737,
   307.4669,
   280.6088,
   277.7204,
   249.1187,
   269.2997,
   177.566,
   102.8333,
   19.89939};
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
   278.3981,
   533.5954,
   538.9307,
   495.2486,
   456.3624,
   428.7538,
   409.7519,
   365.9165,
   356.9715,
   325.3778,
   312.6737,
   307.4669,
   280.6088,
   277.7204,
   249.1187,
   269.2997,
   177.566,
   102.8333,
   19.89939};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMinimum(0.7893731);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors308830923096->SetMaximum(19040.15);
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
   Data__166->SetBinContent(1,9320);
   Data__166->SetBinContent(2,17700);
   Data__166->SetBinContent(3,17280);
   Data__166->SetBinContent(4,14500);
   Data__166->SetBinContent(5,12700);
   Data__166->SetBinContent(6,1040);
   Data__166->SetBinError(1,305.2868);
   Data__166->SetBinError(2,594.979);
   Data__166->SetBinError(3,587.8775);
   Data__166->SetBinError(4,538.5165);
   Data__166->SetBinError(5,503.9841);
   Data__166->SetBinError(6,144.2221);
   Data__166->SetEntries(3875.996);
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
