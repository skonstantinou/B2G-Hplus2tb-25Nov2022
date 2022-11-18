void bH_ptOverHTb()
{
//=========Macro generated from canvas: bH_ptOverHTb/bH_ptOverHTb
//=========  (Fri Nov 18 13:28:07 2022) by ROOT version 6.20/02
   TCanvas *bH_ptOverHTb = new TCanvas("bH_ptOverHTb", "bH_ptOverHTb",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   bH_ptOverHTb->SetHighLightColor(2);
   bH_ptOverHTb->Range(0,0,1,1);
   bH_ptOverHTb->SetFillColor(0);
   bH_ptOverHTb->SetBorderMode(0);
   bH_ptOverHTb->SetBorderSize(2);
   bH_ptOverHTb->SetTickx(1);
   bH_ptOverHTb->SetTicky(1);
   bH_ptOverHTb->SetLeftMargin(0.16);
   bH_ptOverHTb->SetRightMargin(0.05);
   bH_ptOverHTb->SetTopMargin(0.06);
   bH_ptOverHTb->SetBottomMargin(0.13);
   bH_ptOverHTb->SetFrameFillStyle(0);
   bH_ptOverHTb->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: bH_ptOverHTb_2
   TPad *bH_ptOverHTb_2 = new TPad("bH_ptOverHTb_2", "bH_ptOverHTb_2",0,0,1,0.304);
   bH_ptOverHTb_2->Draw();
   bH_ptOverHTb_2->cd();
   bH_ptOverHTb_2->Range(-0.2025316,-0.428,1.063291,1.7);
   bH_ptOverHTb_2->SetFillColor(0);
   bH_ptOverHTb_2->SetFillStyle(4000);
   bH_ptOverHTb_2->SetBorderMode(0);
   bH_ptOverHTb_2->SetBorderSize(2);
   bH_ptOverHTb_2->SetTickx(1);
   bH_ptOverHTb_2->SetTicky(1);
   bH_ptOverHTb_2->SetLeftMargin(0.16);
   bH_ptOverHTb_2->SetRightMargin(0.05);
   bH_ptOverHTb_2->SetTopMargin(0);
   bH_ptOverHTb_2->SetBottomMargin(0.3421053);
   bH_ptOverHTb_2->SetFrameFillStyle(0);
   bH_ptOverHTb_2->SetFrameBorderMode(0);
   bH_ptOverHTb_2->SetFrameFillStyle(0);
   bH_ptOverHTb_2->SetFrameBorderMode(0);
   
   TH1F *hframe__519 = new TH1F("hframe__519","",1000,0,1);
   hframe__519->SetMinimum(0.3);
   hframe__519->SetMaximum(1.7);
   hframe__519->SetDirectory(0);
   hframe__519->SetStats(0);
   hframe__519->SetLineStyle(0);
   hframe__519->SetMarkerStyle(20);
   hframe__519->GetXaxis()->SetTitle("bH_ptOverHTb");
   hframe__519->GetXaxis()->SetLabelFont(43);
   hframe__519->GetXaxis()->SetLabelOffset(0.007);
   hframe__519->GetXaxis()->SetLabelSize(27);
   hframe__519->GetXaxis()->SetTitleSize(33);
   hframe__519->GetXaxis()->SetTitleOffset(2.960526);
   hframe__519->GetXaxis()->SetTitleFont(43);
   hframe__519->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__519->GetYaxis()->SetNdivisions(505);
   hframe__519->GetYaxis()->SetLabelFont(43);
   hframe__519->GetYaxis()->SetLabelOffset(0.007);
   hframe__519->GetYaxis()->SetLabelSize(21);
   hframe__519->GetYaxis()->SetTitleSize(33);
   hframe__519->GetYaxis()->SetTitleOffset(1.5625);
   hframe__519->GetYaxis()->SetTitleFont(43);
   hframe__519->GetZaxis()->SetLabelFont(43);
   hframe__519->GetZaxis()->SetLabelOffset(0.007);
   hframe__519->GetZaxis()->SetLabelSize(27);
   hframe__519->GetZaxis()->SetTitleSize(33);
   hframe__519->GetZaxis()->SetTitleOffset(1);
   hframe__519->GetZaxis()->SetTitleFont(43);
   hframe__519->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3297[24] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94};
   Double_t BackgroundStatSystError_fy3297[24] = {
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
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3297[24] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BackgroundStatSystError_fely3297[24] = {
   1,
   0.8185429,
   0.4328251,
   0.156169,
   0.09478813,
   0.08107252,
   0.07008043,
   0.06337242,
   0.05768703,
   0.05328913,
   0.0476861,
   0.04948234,
   0.04839491,
   0.05010772,
   0.05062594,
   0.05238692,
   0.0554709,
   0.0671976,
   0.08713867,
   0.1249925,
   0.1768565,
   0.342577,
   0.6765902,
   1};
   Double_t BackgroundStatSystError_fehx3297[24] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BackgroundStatSystError_fehy3297[24] = {
   1,
   0.8185429,
   0.4328251,
   0.156169,
   0.09478813,
   0.08107252,
   0.07008043,
   0.06337242,
   0.05768703,
   0.05328913,
   0.0476861,
   0.04948234,
   0.04839491,
   0.05010772,
   0.05062594,
   0.05238692,
   0.0554709,
   0.0671976,
   0.08713867,
   0.1249925,
   0.1768565,
   0.342577,
   0.6765902,
   1};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,BackgroundStatSystError_fx3297,BackgroundStatSystError_fy3297,BackgroundStatSystError_felx3297,BackgroundStatSystError_fehx3297,BackgroundStatSystError_fely3297,BackgroundStatSystError_fehy3297);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1284;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError328932933297 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError328932933297","Graph",100,0,1.056);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMinimum(-0.2);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMaximum(2.2);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError328932933297);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3298[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t BackgroundStatError_fy3298[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3298[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BackgroundStatError_fely3298[25] = {
   1,
   0.8185429,
   0.4328251,
   0.156169,
   0.09478813,
   0.08107252,
   0.07008043,
   0.06337242,
   0.05768703,
   0.05328913,
   0.0476861,
   0.04948234,
   0.04839491,
   0.05010772,
   0.05062594,
   0.05238692,
   0.0554709,
   0.0671976,
   0.08713867,
   0.1249925,
   0.1768565,
   0.342577,
   0.6765902,
   1,
   0};
   Double_t BackgroundStatError_fehx3298[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BackgroundStatError_fehy3298[25] = {
   1,
   0.8185429,
   0.4328251,
   0.156169,
   0.09478813,
   0.08107252,
   0.07008043,
   0.06337242,
   0.05768703,
   0.05328913,
   0.0476861,
   0.04948234,
   0.04839491,
   0.05010772,
   0.05062594,
   0.05238692,
   0.0554709,
   0.0671976,
   0.08713867,
   0.1249925,
   0.1768565,
   0.342577,
   0.6765902,
   1,
   0};
   grae = new TGraphAsymmErrors(25,BackgroundStatError_fx3298,BackgroundStatError_fy3298,BackgroundStatError_felx3298,BackgroundStatError_fehx3298,BackgroundStatError_fely3298,BackgroundStatError_fehy3298);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1283;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError329032943298 = new TH1F("Graph_Graph_Graph_BackgroundStatError329032943298","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMinimum(-0.2);
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMaximum(2.2);
   Graph_Graph_Graph_BackgroundStatError329032943298->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError329032943298->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError329032943298->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError329032943298->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError329032943298->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError329032943298);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx75[2] = {
   0,
   1};
   Double_t Graph0_fy75[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx75,Graph0_fy75);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0737475 = new TH1F("Graph_Graph_Graph_Graph0737475","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph0737475->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0737475->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0737475->SetDirectory(0);
   Graph_Graph_Graph_Graph0737475->SetStats(0);
   Graph_Graph_Graph_Graph0737475->SetLineStyle(0);
   Graph_Graph_Graph_Graph0737475->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0737475->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0737475->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0737475->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0737475->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0737475->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0737475->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0737475->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0737475->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0737475->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0737475->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0737475->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0737475->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0737475->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0737475->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0737475->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0737475->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0737475->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0737475->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0737475);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3299[22] = {
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9};
   Double_t Graph1_fy3299[22] = {
   1.102874,
   1.56441,
   1.258195,
   0.7970095,
   0.8224783,
   0.8435536,
   0.8411631,
   0.9884156,
   0.9218156,
   0.842819,
   1.00044,
   1.023096,
   1.201951,
   1.112277,
   1.114876,
   1.035948,
   1.163804,
   1.153527,
   1.399262,
   1.231382,
   1.771142,
   1.09716};
   Double_t Graph1_felx3299[22] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph1_fely3299[22] = {
   0.7798499,
   0.4716874,
   0.1443249,
   0.06573623,
   0.05495414,
   0.04775682,
   0.04253944,
   0.04222302,
   0.0374462,
   0.03190117,
   0.03612379,
   0.03594791,
   0.04056387,
   0.0395981,
   0.04073668,
   0.04147112,
   0.0529549,
   0.06797226,
   0.1070042,
   0.1441223,
   0.3288927,
   0.5485801};
   Double_t Graph1_fehx3299[22] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph1_fehy3299[22] = {
   0.7798499,
   0.4716874,
   0.1443249,
   0.06573623,
   0.05495414,
   0.04775682,
   0.04253944,
   0.04222302,
   0.0374462,
   0.03190117,
   0.03612379,
   0.03594791,
   0.04056387,
   0.0395981,
   0.04073668,
   0.04147112,
   0.0529549,
   0.06797226,
   0.1070042,
   0.1441223,
   0.3288927,
   0.5485801};
   grae = new TGraphAsymmErrors(22,Graph1_fx3299,Graph1_fy3299,Graph1_felx3299,Graph1_fehx3299,Graph1_fely3299,Graph1_fehy3299);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1329132953299 = new TH1F("Graph_Graph_Graph_Graph1329132953299","Graph",100,0,1.008);
   Graph_Graph_Graph_Graph1329132953299->SetMinimum(0.1453234);
   Graph_Graph_Graph_Graph1329132953299->SetMaximum(2.277735);
   Graph_Graph_Graph_Graph1329132953299->SetDirectory(0);
   Graph_Graph_Graph_Graph1329132953299->SetStats(0);
   Graph_Graph_Graph_Graph1329132953299->SetLineStyle(0);
   Graph_Graph_Graph_Graph1329132953299->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1329132953299->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1329132953299->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1329132953299->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1329132953299->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1329132953299->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1329132953299->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1329132953299->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1329132953299->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1329132953299->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1329132953299->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1329132953299->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1329132953299->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1329132953299->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1329132953299->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1329132953299->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1329132953299->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1329132953299->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1329132953299->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1329132953299->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1329132953299);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__520 = new TH1F("hframe_copy__520","",1000,0,1);
   hframe_copy__520->SetMinimum(0.3);
   hframe_copy__520->SetMaximum(1.7);
   hframe_copy__520->SetDirectory(0);
   hframe_copy__520->SetStats(0);
   hframe_copy__520->SetLineStyle(0);
   hframe_copy__520->SetMarkerStyle(20);
   hframe_copy__520->GetXaxis()->SetTitle("bH_ptOverHTb");
   hframe_copy__520->GetXaxis()->SetLabelFont(43);
   hframe_copy__520->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__520->GetXaxis()->SetLabelSize(27);
   hframe_copy__520->GetXaxis()->SetTitleSize(33);
   hframe_copy__520->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__520->GetXaxis()->SetTitleFont(43);
   hframe_copy__520->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__520->GetYaxis()->SetNdivisions(505);
   hframe_copy__520->GetYaxis()->SetLabelFont(43);
   hframe_copy__520->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__520->GetYaxis()->SetLabelSize(21);
   hframe_copy__520->GetYaxis()->SetTitleSize(33);
   hframe_copy__520->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__520->GetYaxis()->SetTitleFont(43);
   hframe_copy__520->GetZaxis()->SetLabelFont(43);
   hframe_copy__520->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__520->GetZaxis()->SetLabelSize(27);
   hframe_copy__520->GetZaxis()->SetTitleSize(33);
   hframe_copy__520->GetZaxis()->SetTitleOffset(1);
   hframe_copy__520->GetZaxis()->SetTitleFont(43);
   hframe_copy__520->Draw("sameaxis");
   bH_ptOverHTb_2->Modified();
   bH_ptOverHTb->cd();
  
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
   bH_ptOverHTb->cd();
  
// ------------>Primitives in pad: bH_ptOverHTb_1
   TPad *bH_ptOverHTb_1 = new TPad("bH_ptOverHTb_1", "bH_ptOverHTb_1",0,0.2897959,1,1);
   bH_ptOverHTb_1->Draw();
   bH_ptOverHTb_1->cd();
   bH_ptOverHTb_1->Range(-0.2025316,-2.125839,1.063291,4.166109);
   bH_ptOverHTb_1->SetFillColor(0);
   bH_ptOverHTb_1->SetFillStyle(4000);
   bH_ptOverHTb_1->SetBorderMode(0);
   bH_ptOverHTb_1->SetBorderSize(2);
   bH_ptOverHTb_1->SetLogy();
   bH_ptOverHTb_1->SetTickx(1);
   bH_ptOverHTb_1->SetTicky(1);
   bH_ptOverHTb_1->SetLeftMargin(0.16);
   bH_ptOverHTb_1->SetRightMargin(0.05);
   bH_ptOverHTb_1->SetTopMargin(0.06);
   bH_ptOverHTb_1->SetBottomMargin(0.02);
   bH_ptOverHTb_1->SetFrameFillStyle(0);
   bH_ptOverHTb_1->SetFrameBorderMode(0);
   bH_ptOverHTb_1->SetFrameFillStyle(0);
   bH_ptOverHTb_1->SetFrameBorderMode(0);
   
   TH1F *hframe__521 = new TH1F("hframe__521","",1000,0,1);
   hframe__521->SetMinimum(0.01);
   hframe__521->SetMaximum(6146);
   hframe__521->SetDirectory(0);
   hframe__521->SetStats(0);
   hframe__521->SetLineStyle(0);
   hframe__521->SetMarkerStyle(20);
   hframe__521->GetXaxis()->SetLabelFont(43);
   hframe__521->GetXaxis()->SetLabelOffset(0.007);
   hframe__521->GetXaxis()->SetLabelSize(0);
   hframe__521->GetXaxis()->SetTitleSize(0);
   hframe__521->GetXaxis()->SetTitleOffset(0.9);
   hframe__521->GetXaxis()->SetTitleFont(43);
   hframe__521->GetYaxis()->SetTitle("Events / 0.04");
   hframe__521->GetYaxis()->SetLabelFont(43);
   hframe__521->GetYaxis()->SetLabelOffset(0.007);
   hframe__521->GetYaxis()->SetLabelSize(27);
   hframe__521->GetYaxis()->SetTitleSize(33);
   hframe__521->GetYaxis()->SetTitleOffset(1.5625);
   hframe__521->GetYaxis()->SetTitleFont(43);
   hframe__521->GetZaxis()->SetLabelFont(43);
   hframe__521->GetZaxis()->SetLabelOffset(0.007);
   hframe__521->GetZaxis()->SetLabelSize(27);
   hframe__521->GetZaxis()->SetTitleSize(33);
   hframe__521->GetZaxis()->SetTitleOffset(1);
   hframe__521->GetZaxis()->SetTitleFont(43);
   hframe__521->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_73_stack_74_stack_75 = new TH1F("StackedMCstackHist_stack_73_stack_74_stack_75","StackedMCstackHist",25,0,1);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMinimum(0.3312692);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMaximum(1325.077);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetDirectory(0);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetStats(0);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetLineStyle(0);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMarkerStyle(20);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_73_stack_74_stack_75->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_73_stack_74_stack_75);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_bH_ptOverHTbInclusive",25,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,-0.04232349);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.09737349);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.9488584);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,3.578018);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,5.131086);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,4.628339);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,6.586356);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,6.897852);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,6.878679);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,10.69332);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,13.36929);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,11.54059);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,9.207527);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,10.52386);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,8.31652);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,6.41168);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,2.742247);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,3.033357);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,1.63339);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,1.397839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.5609983);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.1290637);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.04014925);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.1877468);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.34968);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.8279613);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.924337);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.9325338);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.848515);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.765159);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.266223);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.737042);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.192012);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.055373);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.33628);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,2.061339);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.125548);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.024589);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.6975332);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.6168464);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.6102645);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.4855677);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.3586245);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.128841);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(13272);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,50);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_bH_ptOverHTbInclusive",25,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.0268257);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.4592112);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4.317531);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,18.79047);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,45.12636);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,61.31297);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,76.5282);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,94.13195);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,104.2108);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,116.0411);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,121.2533);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,121.6973);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,125.021);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,121.4347);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,111.5156);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,89.54861);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,66.64259);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,44.15199);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,25.19328);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,12.27897);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,5.418756);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,1.19455);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.07047924);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.0268257);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1601362);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.4994224);
   TT_stack_2_stack_2_stack_2->SetBinError(4,1.039467);
   TT_stack_2_stack_2_stack_2->SetBinError(5,1.630743);
   TT_stack_2_stack_2_stack_2->SetBinError(6,1.911972);
   TT_stack_2_stack_2_stack_2->SetBinError(7,2.152908);
   TT_stack_2_stack_2_stack_2->SetBinError(8,2.393977);
   TT_stack_2_stack_2_stack_2->SetBinError(9,2.527844);
   TT_stack_2_stack_2_stack_2->SetBinError(10,2.671939);
   TT_stack_2_stack_2_stack_2->SetBinError(11,2.741743);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.750866);
   TT_stack_2_stack_2_stack_2->SetBinError(13,2.787011);
   TT_stack_2_stack_2_stack_2->SetBinError(14,2.730535);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.625612);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.354154);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.028297);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.646805);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.24779);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.8770518);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.5857402);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.2664134);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.07047924);
   TT_stack_2_stack_2_stack_2->SetEntries(23419);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,50);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_bH_ptOverHTbInclusive",25,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1.396556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,2.616501);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,40.66466);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,135.7351);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,205.9036);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,288.7073);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,364.1143);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,443.314);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,534.4786);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,696.2265);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,631.5963);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,655.1533);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,599.837);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,587.3163);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,573.9584);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,529.2925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,368.1243);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,221.4423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,108.2949);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,52.46641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,14.61807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,3.446233);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.0003680486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,1.475172);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,2.996234);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,9.369261);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,17.38675);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,21.91264);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,25.81382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,29.30188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,31.83404);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,34.90718);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,39.35875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,37.77285);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,38.15816);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,36.47619);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,35.75632);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,35.09791);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,33.33535);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,27.83084);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,21.71125);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,15.23758);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,10.45694);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,5.591407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,2.462321);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.0003680486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3207.878);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,50);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__522 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__522","h_SR_bH_ptOverHTbInclusive",25,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(2,-0.0401254);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(3,-0.05927724);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(4,0.1146362);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(5,0.1871596);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(6,0.2886997);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(7,0.2287513);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(8,0.5296035);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(9,0.324486);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(10,0.7386559);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(11,0.2420495);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(12,0.2628738);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(13,0.2834484);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(14,0.265849);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(15,0.6838644);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(16,0.8140185);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(17,0.3741713);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(18,0.4100259);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(19,0.02715287);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(20,0.04365537);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(21,0.2104642);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(22,0.0236925);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(2,0.02862885);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(3,0.07577541);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(4,0.110004);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(5,0.1103516);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(6,0.167839);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(7,0.1850151);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(8,0.1803849);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(9,0.2439489);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(10,0.2164876);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(11,0.264773);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(12,0.2515744);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(13,0.2667982);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(14,0.2762698);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(15,0.2953511);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(16,0.2623117);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(17,0.2651171);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(18,0.2045039);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(19,0.1790764);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(20,0.1681113);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(21,0.09009626);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(22,0.03778509);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetEntries(1103);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->GetXaxis()->SetRange(1,50);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3300[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3300[25] = {
   0.0268257,
   1.813443,
   7.031405,
   60.40399,
   184.4395,
   272.3476,
   369.8639,
   464.8326,
   554.4227,
   657.3983,
   828.1731,
   766.6628,
   791.7149,
   730.4792,
   709.3558,
   671.8236,
   602.3467,
   415.0185,
   249.669,
   122.2073,
   59.283,
   16.37362,
   3.645776,
   0.0003680486,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3300[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3300[25] = {
   0.0268257,
   1.484381,
   3.043368,
   9.433229,
   17.48267,
   22.07991,
   25.92022,
   29.45757,
   31.983,
   35.03218,
   39.49235,
   37.93627,
   38.31497,
   36.60265,
   35.9118,
   35.19477,
   33.41271,
   27.88825,
   21.75582,
   15.275,
   10.48458,
   5.609226,
   2.466696,
   0.0003680486,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3300[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3300[25] = {
   0.0268257,
   1.484381,
   3.043368,
   9.433229,
   17.48267,
   22.07991,
   25.92022,
   29.45757,
   31.983,
   35.03218,
   39.49235,
   37.93627,
   38.31497,
   36.60265,
   35.9118,
   35.19477,
   33.41271,
   27.88825,
   21.75582,
   15.275,
   10.48458,
   5.609226,
   2.466696,
   0.0003680486,
   0};
   grae = new TGraphAsymmErrors(25,BkgSum-SR-Inclusive_sum_errors_fx3300,BkgSum-SR-Inclusive_sum_errors_fy3300,BkgSum-SR-Inclusive_sum_errors_felx3300,BkgSum-SR-Inclusive_sum_errors_fehx3300,BkgSum-SR-Inclusive_sum_errors_fely3300,BkgSum-SR-Inclusive_sum_errors_fehy3300);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1282;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMinimum(0.954432);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMaximum(954.432);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors329232963300);
   
   grae->Draw("e2 ");
   
   TH1F *Data__523 = new TH1F("Data__523","h_SR_bH_ptOverHTbInclusive",25,0,1);
   Data__523->SetBinContent(2,2);
   Data__523->SetBinContent(3,11);
   Data__523->SetBinContent(4,76);
   Data__523->SetBinContent(5,147);
   Data__523->SetBinContent(6,224);
   Data__523->SetBinContent(7,312);
   Data__523->SetBinContent(8,391);
   Data__523->SetBinContent(9,548);
   Data__523->SetBinContent(10,606);
   Data__523->SetBinContent(11,698);
   Data__523->SetBinContent(12,767);
   Data__523->SetBinContent(13,810);
   Data__523->SetBinContent(14,878);
   Data__523->SetBinContent(15,789);
   Data__523->SetBinContent(16,749);
   Data__523->SetBinContent(17,624);
   Data__523->SetBinContent(18,483);
   Data__523->SetBinContent(19,288);
   Data__523->SetBinContent(20,171);
   Data__523->SetBinContent(21,73);
   Data__523->SetBinContent(22,29);
   Data__523->SetBinContent(23,4);
   Data__523->SetBinError(2,1.414214);
   Data__523->SetBinError(3,3.316625);
   Data__523->SetBinError(4,8.717798);
   Data__523->SetBinError(5,12.12436);
   Data__523->SetBinError(6,14.96663);
   Data__523->SetBinError(7,17.66352);
   Data__523->SetBinError(8,19.77372);
   Data__523->SetBinError(9,23.4094);
   Data__523->SetBinError(10,24.61707);
   Data__523->SetBinError(11,26.41969);
   Data__523->SetBinError(12,27.69476);
   Data__523->SetBinError(13,28.4605);
   Data__523->SetBinError(14,29.63106);
   Data__523->SetBinError(15,28.08914);
   Data__523->SetBinError(16,27.36786);
   Data__523->SetBinError(17,24.97999);
   Data__523->SetBinError(18,21.97726);
   Data__523->SetBinError(19,16.97056);
   Data__523->SetBinError(20,13.0767);
   Data__523->SetBinError(21,8.544004);
   Data__523->SetBinError(22,5.385165);
   Data__523->SetBinError(23,2);
   Data__523->SetEntries(8684);
   Data__523->SetDirectory(0);
   Data__523->SetFillStyle(3001);
   Data__523->SetLineWidth(2);
   Data__523->SetMarkerStyle(20);
   Data__523->SetMarkerSize(1.2);
   Data__523->GetXaxis()->SetRange(1,50);
   Data__523->GetXaxis()->SetLabelFont(42);
   Data__523->GetXaxis()->SetTitleOffset(1);
   Data__523->GetXaxis()->SetTitleFont(42);
   Data__523->GetYaxis()->SetLabelFont(42);
   Data__523->GetYaxis()->SetTitleFont(42);
   Data__523->GetZaxis()->SetLabelFont(42);
   Data__523->GetZaxis()->SetTitleOffset(1);
   Data__523->GetZaxis()->SetTitleFont(42);
   Data__523->Draw("EP same");
   
   TLegend *leg = new TLegend(0.65,0.51,0.85,0.91,NULL,"brNDC");
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

   ci = 1282;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1282;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__524 = new TH1F("hframe_copy__524","",1000,0,1);
   hframe_copy__524->SetMinimum(0.01);
   hframe_copy__524->SetMaximum(6146);
   hframe_copy__524->SetDirectory(0);
   hframe_copy__524->SetStats(0);
   hframe_copy__524->SetLineStyle(0);
   hframe_copy__524->SetMarkerStyle(20);
   hframe_copy__524->GetXaxis()->SetLabelFont(43);
   hframe_copy__524->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__524->GetXaxis()->SetLabelSize(0);
   hframe_copy__524->GetXaxis()->SetTitleSize(0);
   hframe_copy__524->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__524->GetXaxis()->SetTitleFont(43);
   hframe_copy__524->GetYaxis()->SetTitle("Events / 0.04");
   hframe_copy__524->GetYaxis()->SetLabelFont(43);
   hframe_copy__524->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__524->GetYaxis()->SetLabelSize(27);
   hframe_copy__524->GetYaxis()->SetTitleSize(33);
   hframe_copy__524->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__524->GetYaxis()->SetTitleFont(43);
   hframe_copy__524->GetZaxis()->SetLabelFont(43);
   hframe_copy__524->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__524->GetZaxis()->SetLabelSize(27);
   hframe_copy__524->GetZaxis()->SetTitleSize(33);
   hframe_copy__524->GetZaxis()->SetTitleOffset(1);
   hframe_copy__524->GetZaxis()->SetTitleFont(43);
   hframe_copy__524->Draw("sameaxis");
   
   TH1F *hframe_copy__525 = new TH1F("hframe_copy__525","",1000,0,1);
   hframe_copy__525->SetMinimum(0.01);
   hframe_copy__525->SetMaximum(6146);
   hframe_copy__525->SetDirectory(0);
   hframe_copy__525->SetStats(0);
   hframe_copy__525->SetLineStyle(0);
   hframe_copy__525->SetMarkerStyle(20);
   hframe_copy__525->GetXaxis()->SetLabelFont(43);
   hframe_copy__525->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__525->GetXaxis()->SetLabelSize(0);
   hframe_copy__525->GetXaxis()->SetTitleSize(0);
   hframe_copy__525->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__525->GetXaxis()->SetTitleFont(43);
   hframe_copy__525->GetYaxis()->SetTitle("Events / 0.04");
   hframe_copy__525->GetYaxis()->SetLabelFont(43);
   hframe_copy__525->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__525->GetYaxis()->SetLabelSize(27);
   hframe_copy__525->GetYaxis()->SetTitleSize(33);
   hframe_copy__525->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__525->GetYaxis()->SetTitleFont(43);
   hframe_copy__525->GetZaxis()->SetLabelFont(43);
   hframe_copy__525->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__525->GetZaxis()->SetLabelSize(27);
   hframe_copy__525->GetZaxis()->SetTitleSize(33);
   hframe_copy__525->GetZaxis()->SetTitleOffset(1);
   hframe_copy__525->GetZaxis()->SetTitleFont(43);
   hframe_copy__525->Draw("sameaxis");
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
   bH_ptOverHTb_1->Modified();
   bH_ptOverHTb->cd();
   bH_ptOverHTb->Modified();
   bH_ptOverHTb->cd();
   bH_ptOverHTb->SetSelected(bH_ptOverHTb);
}
