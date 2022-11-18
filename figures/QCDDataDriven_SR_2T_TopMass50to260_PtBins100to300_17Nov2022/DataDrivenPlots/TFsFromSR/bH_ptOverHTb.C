void bH_ptOverHTb()
{
//=========Macro generated from canvas: bH_ptOverHTb/bH_ptOverHTb
//=========  (Fri Nov 18 13:27:53 2022) by ROOT version 6.20/02
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
   0.1945429,
   0.05081956,
   0.02726719,
   0.02186828,
   0.02049369,
   0.02076477,
   0.02242564,
   0.02411014,
   0.02650421,
   0.0286704,
   0.03076523,
   0.03405585,
   0.03738902,
   0.04084892,
   0.04591145,
   0.05106033,
   0.06009515,
   0.07525239,
   0.09291223,
   0.1458193,
   0.259438,
   0.5450757,
   -5.592179};
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
   0.1945429,
   0.05081956,
   0.02726719,
   0.02186828,
   0.02049369,
   0.02076477,
   0.02242564,
   0.02411014,
   0.02650421,
   0.0286704,
   0.03076523,
   0.03405585,
   0.03738902,
   0.04084892,
   0.04591145,
   0.05106033,
   0.06009515,
   0.07525239,
   0.09291223,
   0.1458193,
   0.259438,
   0.5450757,
   -5.592179};
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
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMinimum(-0.2000001);
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
   0.1945429,
   0.05081956,
   0.02726719,
   0.02186828,
   0.02049369,
   0.02076477,
   0.02242564,
   0.02411014,
   0.02650421,
   0.0286704,
   0.03076523,
   0.03405585,
   0.03738902,
   0.04084892,
   0.04591145,
   0.05106033,
   0.06009515,
   0.07525239,
   0.09291223,
   0.1458193,
   0.259438,
   0.5450757,
   -5.592179,
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
   0.1945429,
   0.05081956,
   0.02726719,
   0.02186828,
   0.02049369,
   0.02076477,
   0.02242564,
   0.02411014,
   0.02650421,
   0.0286704,
   0.03076523,
   0.03405585,
   0.03738902,
   0.04084892,
   0.04591145,
   0.05106033,
   0.06009515,
   0.07525239,
   0.09291223,
   0.1458193,
   0.259438,
   0.5450757,
   -5.592179,
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
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMinimum(-0.2000001);
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
   0.8836728,
   1.019579,
   0.9995354,
   1.021066,
   1.083769,
   1.021312,
   1.053151,
   1.018271,
   0.9791068,
   0.9605132,
   0.9713801,
   0.9909646,
   0.9546903,
   0.999569,
   0.9393703,
   0.9451903,
   1.069012,
   0.8705817,
   1.123409,
   0.9250549,
   1.07916,
   1.075052};
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
   0.1928332,
   0.05735579,
   0.03260125,
   0.02588505,
   0.02520392,
   0.02449113,
   0.02594252,
   0.02722415,
   0.02858782,
   0.03080848,
   0.03345611,
   0.03700825,
   0.04019971,
   0.04510992,
   0.04685153,
   0.05438959,
   0.06720818,
   0.07606307,
   0.1158708,
   0.1563628,
   0.3115268,
   0.6206815};
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
   0.1928332,
   0.05735579,
   0.03260125,
   0.02588505,
   0.02520392,
   0.02449113,
   0.02594252,
   0.02722415,
   0.02858782,
   0.03080848,
   0.03345611,
   0.03700825,
   0.04019971,
   0.04510992,
   0.04685153,
   0.05438959,
   0.06720818,
   0.07606307,
   0.1158708,
   0.1563628,
   0.3115268,
   0.6206815};
   grae = new TGraphAsymmErrors(22,Graph1_fx3299,Graph1_fy3299,Graph1_felx3299,Graph1_fehx3299,Graph1_fely3299,Graph1_fehy3299);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1329132953299 = new TH1F("Graph_Graph_Graph_Graph1329132953299","Graph",100,0,1.008);
   Graph_Graph_Graph_Graph1329132953299->SetMinimum(0.3302341);
   Graph_Graph_Graph_Graph1329132953299->SetMaximum(1.81987);
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
   bH_ptOverHTb_1->Range(-0.2025316,-2.13287,1.063291,4.510646);
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
   hframe__521->SetMaximum(12943);
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
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMinimum(0.6824335);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMaximum(2729.734);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.9286866);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,8.881634);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,35.39837);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,55.41126);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,63.30758);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,65.79276);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,61.02531);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,54.33298);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,48.20866);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,38.96422);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,33.86326);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,30.50069);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,23.26826);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,22.65315);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,14.18402);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,13.08515);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,10.59363);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,7.083107);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,3.483586);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,2.500765);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.4603767);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,-0.000822739);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.0004204984);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.3507836);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.330585);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.410746);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,3.217187);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.968323);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.985435);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.777764);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.741084);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.555102);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.218135);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.566577);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.131469);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.678579);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.778367);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.393089);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.391168);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.4166);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.050387);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.8041064);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.5980942);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.313707);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.005868779);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.000238103);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(451608);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,14.0219);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,162.6011);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,526.1816);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,844.8974);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,966.8187);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,938.7904);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,816.7123);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,689.9359);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,565.616);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,456.3107);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,386.1642);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,307.3274);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,263.0542);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,217.2649);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,171.3418);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,137.9696);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,97.67868);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,62.20781);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,38.33775);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,15.10695);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,4.6424);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.5590407);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.04237641);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.9429498);
   TT_stack_2_stack_2_stack_2->SetBinError(3,3.176274);
   TT_stack_2_stack_2_stack_2->SetBinError(4,5.74741);
   TT_stack_2_stack_2_stack_2->SetBinError(5,7.28832);
   TT_stack_2_stack_2_stack_2->SetBinError(6,7.797151);
   TT_stack_2_stack_2_stack_2->SetBinError(7,7.676743);
   TT_stack_2_stack_2_stack_2->SetBinError(8,7.142295);
   TT_stack_2_stack_2_stack_2->SetBinError(9,6.538715);
   TT_stack_2_stack_2_stack_2->SetBinError(10,5.921826);
   TT_stack_2_stack_2_stack_2->SetBinError(11,5.295466);
   TT_stack_2_stack_2_stack_2->SetBinError(12,4.843255);
   TT_stack_2_stack_2_stack_2->SetBinError(13,4.303847);
   TT_stack_2_stack_2_stack_2->SetBinError(14,3.974321);
   TT_stack_2_stack_2_stack_2->SetBinError(15,3.600571);
   TT_stack_2_stack_2_stack_2->SetBinError(16,3.180843);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.848274);
   TT_stack_2_stack_2_stack_2->SetBinError(18,2.396005);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.922477);
   TT_stack_2_stack_2_stack_2->SetBinError(20,1.499128);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.9519064);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.5215283);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.1927241);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.04237641);
   TT_stack_2_stack_2_stack_2->SetEntries(133616);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,0.002807253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,8.813866);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,138.4492);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,378.857);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,623.5887);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,675.9576);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,698.128);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,687.09);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,629.629);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,584.2061);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,516.684);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,447.8099);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,385.7094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,304.445);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,251.2937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,242.4204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,168.4576);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,128.3949);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,81.18319);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,41.85257);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,20.22787);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,6.016978);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,2.232345);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,-0.05521914);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.002807253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,4.512407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,15.36953);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,24.87414);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,32.35871);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,33.95396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,34.38358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,34.24527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,32.35721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,31.09095);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,28.43955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,26.13051);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,24.1681);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,21.66279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,19.65951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,19.33833);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,16.0035);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,13.94752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,11.1096);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,7.585923);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,5.401408);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,2.819959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,1.508798);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.05504447);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4622.139);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(2,1.66557);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(3,12.05352);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(4,24.62899);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(5,27.67516);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(6,32.30172);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(7,30.5002);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(8,31.27575);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(9,32.24432);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(10,35.37847);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(11,33.90601);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(12,41.87836);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(13,43.92718);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(14,44.42184);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(15,46.053);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(16,49.74478);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(17,44.42491);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(18,30.18243);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(19,23.33358);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(20,13.78081);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(21,3.645021);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(22,0.8476265);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(23,0.05756502);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(2,0.3672674);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(3,1.109123);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(4,1.577865);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(5,1.696553);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(6,1.709365);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(7,1.708016);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(8,1.725827);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(9,1.744402);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(10,1.8117);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(11,1.899301);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(12,1.969946);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(13,2.027679);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(14,2.087814);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(15,2.128981);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(16,2.068772);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(17,1.930835);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(18,1.738302);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(19,1.430569);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(20,1.047523);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(21,0.6159408);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(22,0.2433232);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(23,0.06199893);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetEntries(120993);
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
   0.002807253,
   23.76445,
   309.9319,
   940.437,
   1523.897,
   1706.084,
   1702.711,
   1564.828,
   1373.898,
   1198.031,
   1011.959,
   867.8374,
   723.5374,
   590.7675,
   491.2117,
   427.9463,
   319.5124,
   236.6672,
   150.4741,
   83.67391,
   37.83559,
   11.11975,
   2.790563,
   -0.01242223,
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
   0.002807253,
   4.623205,
   15.7506,
   25.64307,
   33.32501,
   34.96395,
   35.35641,
   35.09226,
   33.12488,
   31.75286,
   29.01327,
   26.69922,
   24.64068,
   22.08822,
   20.06547,
   19.64763,
   16.31441,
   14.22255,
   11.32354,
   7.77433,
   5.51716,
   2.884887,
   1.521068,
   0.06946734,
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
   0.002807253,
   4.623205,
   15.7506,
   25.64307,
   33.32501,
   34.96395,
   35.35641,
   35.09226,
   33.12488,
   31.75286,
   29.01327,
   26.69922,
   24.64068,
   22.08822,
   20.06547,
   19.64763,
   16.31441,
   14.22255,
   11.32354,
   7.77433,
   5.51716,
   2.884887,
   1.521068,
   0.06946734,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMinimum(1.915153);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMaximum(1915.153);
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
   Data__523->SetBinContent(2,21);
   Data__523->SetBinContent(3,316);
   Data__523->SetBinContent(4,940);
   Data__523->SetBinContent(5,1556);
   Data__523->SetBinContent(6,1849);
   Data__523->SetBinContent(7,1739);
   Data__523->SetBinContent(8,1648);
   Data__523->SetBinContent(9,1399);
   Data__523->SetBinContent(10,1173);
   Data__523->SetBinContent(11,972);
   Data__523->SetBinContent(12,843);
   Data__523->SetBinContent(13,717);
   Data__523->SetBinContent(14,564);
   Data__523->SetBinContent(15,491);
   Data__523->SetBinContent(16,402);
   Data__523->SetBinContent(17,302);
   Data__523->SetBinContent(18,253);
   Data__523->SetBinContent(19,131);
   Data__523->SetBinContent(20,94);
   Data__523->SetBinContent(21,35);
   Data__523->SetBinContent(22,12);
   Data__523->SetBinContent(23,3);
   Data__523->SetBinError(2,4.582576);
   Data__523->SetBinError(3,17.77639);
   Data__523->SetBinError(4,30.65942);
   Data__523->SetBinError(5,39.44617);
   Data__523->SetBinError(6,43);
   Data__523->SetBinError(7,41.70132);
   Data__523->SetBinError(8,40.59557);
   Data__523->SetBinError(9,37.40321);
   Data__523->SetBinError(10,34.24909);
   Data__523->SetBinError(11,31.17691);
   Data__523->SetBinError(12,29.03446);
   Data__523->SetBinError(13,26.77686);
   Data__523->SetBinError(14,23.74868);
   Data__523->SetBinError(15,22.15852);
   Data__523->SetBinError(16,20.04994);
   Data__523->SetBinError(17,17.37815);
   Data__523->SetBinError(18,15.90597);
   Data__523->SetBinError(19,11.44552);
   Data__523->SetBinError(20,9.69536);
   Data__523->SetBinError(21,5.91608);
   Data__523->SetBinError(22,3.464102);
   Data__523->SetBinError(23,1.732051);
   Data__523->SetEntries(15464);
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
   hframe_copy__524->SetMaximum(12943);
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
   hframe_copy__525->SetMaximum(12943);
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
