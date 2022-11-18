void bH_ptOverHTb()
{
//=========Macro generated from canvas: bH_ptOverHTb/bH_ptOverHTb
//=========  (Fri Nov 18 13:28:14 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3297[23] = {
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
   Double_t BackgroundStatSystError_fy3297[23] = {
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
   Double_t BackgroundStatSystError_felx3297[23] = {
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
   Double_t BackgroundStatSystError_fely3297[23] = {
   0.07534508,
   0.02245076,
   0.01169258,
   0.008958512,
   0.008471491,
   0.008601432,
   0.00907721,
   0.009898427,
   0.01077187,
   0.01154404,
   0.01269663,
   0.01372431,
   0.01497746,
   0.01671229,
   0.01879532,
   0.0207724,
   0.02536946,
   0.03313397,
   0.04530606,
   0.07731793,
   0.1634885,
   0.5161034,
   -1};
   Double_t BackgroundStatSystError_fehx3297[23] = {
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
   Double_t BackgroundStatSystError_fehy3297[23] = {
   0.07534508,
   0.02245076,
   0.01169258,
   0.008958512,
   0.008471491,
   0.008601432,
   0.00907721,
   0.009898427,
   0.01077187,
   0.01154404,
   0.01269663,
   0.01372431,
   0.01497746,
   0.01671229,
   0.01879532,
   0.0207724,
   0.02536946,
   0.03313397,
   0.04530606,
   0.07731793,
   0.1634885,
   0.5161034,
   -1};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,BackgroundStatSystError_fx3297,BackgroundStatSystError_fy3297,BackgroundStatSystError_felx3297,BackgroundStatSystError_fehx3297,BackgroundStatSystError_fely3297,BackgroundStatSystError_fehy3297);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError328932933297 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError328932933297","Graph",100,0,1.052);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMinimum(0.380676);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMaximum(1.619324);
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
   0,
   0.07534508,
   0.02245076,
   0.01169258,
   0.008958512,
   0.008471491,
   0.008601432,
   0.00907721,
   0.009898427,
   0.01077187,
   0.01154404,
   0.01269663,
   0.01372431,
   0.01497746,
   0.01671229,
   0.01879532,
   0.0207724,
   0.02536946,
   0.03313397,
   0.04530606,
   0.07731793,
   0.1634885,
   0.5161034,
   -1,
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
   0,
   0.07534508,
   0.02245076,
   0.01169258,
   0.008958512,
   0.008471491,
   0.008601432,
   0.00907721,
   0.009898427,
   0.01077187,
   0.01154404,
   0.01269663,
   0.01372431,
   0.01497746,
   0.01671229,
   0.01879532,
   0.0207724,
   0.02536946,
   0.03313397,
   0.04530606,
   0.07731793,
   0.1634885,
   0.5161034,
   -1,
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
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMinimum(0.380676);
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMaximum(1.619324);
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
   
   Double_t Graph1_fx3299[21] = {
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
   0.86};
   Double_t Graph1_fy3299[21] = {
   1.058038,
   0.9336836,
   0.9118328,
   0.8998023,
   0.9437788,
   0.9181065,
   0.9233405,
   0.9624597,
   0.9365297,
   0.9766073,
   0.9335491,
   0.9826777,
   0.9922085,
   0.9672802,
   0.9788181,
   0.9816229,
   0.9224671,
   0.9117944,
   1.019246,
   1.097369,
   0.9316541};
   Double_t Graph1_felx3299[21] = {
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
   Double_t Graph1_fely3299[21] = {
   0.1354679,
   0.03554473,
   0.01924452,
   0.01477072,
   0.01397003,
   0.01359449,
   0.01410873,
   0.01506974,
   0.01563491,
   0.01686063,
   0.01755176,
   0.01949819,
   0.02132919,
   0.02299141,
   0.02603019,
   0.02975981,
   0.03428322,
   0.04366703,
   0.06472216,
   0.1014518,
   0.1827124};
   Double_t Graph1_fehx3299[21] = {
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
   Double_t Graph1_fehy3299[21] = {
   0.1354679,
   0.03554473,
   0.01924452,
   0.01477072,
   0.01397003,
   0.01359449,
   0.01410873,
   0.01506974,
   0.01563491,
   0.01686063,
   0.01755176,
   0.01949819,
   0.02132919,
   0.02299141,
   0.02603019,
   0.02975981,
   0.03428322,
   0.04366703,
   0.06472216,
   0.1014518,
   0.1827124};
   grae = new TGraphAsymmErrors(21,Graph1_fx3299,Graph1_fy3299,Graph1_felx3299,Graph1_fehx3299,Graph1_fely3299,Graph1_fehy3299);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1329132953299 = new TH1F("Graph_Graph_Graph_Graph1329132953299","Graph",100,0,0.964);
   Graph_Graph_Graph_Graph1329132953299->SetMinimum(0.7039538);
   Graph_Graph_Graph_Graph1329132953299->SetMaximum(1.243808);
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
   bH_ptOverHTb_1->Range(-0.2025316,-2.142282,1.063291,4.971831);
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
   hframe__521->SetMaximum(35073.95);
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
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMinimum(1.987133);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMaximum(7948.534);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.8658391);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,21.22151);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,50.37348);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,92.47185);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,108.7634);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,111.7306);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,119.9909);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,111.5789);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,101.6489);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,88.64925);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,73.1841);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,76.91978);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,59.50136);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,44.67839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,38.54221);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,29.74379);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,25.94779);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,14.30064);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,7.308557);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,3.091827);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,1.05684);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,-0.03457524);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.5408492);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.125852);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,3.508647);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,4.60287);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,5.526158);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,5.081205);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,4.981072);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,4.930968);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,5.056481);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,4.220071);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,3.742575);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,4.307727);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,3.432276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,3.681346);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.936286);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,2.511725);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,2.194982);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.712232);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,1.154398);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.8001767);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.3489349);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.0426743);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(189561);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,55.35529);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,637.5983);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2188.167);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3642.311);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4251.134);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,4250.764);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3941.667);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,3531.121);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,3089.964);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2700.844);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2303.054);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1963.818);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1646.358);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1359.3);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1061.477);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,819.8763);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,559.168);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,334.9205);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,171.8081);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,63.84805);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,14.7958);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,1.346711);
   TT_stack_2_stack_2_stack_2->SetBinError(2,1.685255);
   TT_stack_2_stack_2_stack_2->SetBinError(3,5.782587);
   TT_stack_2_stack_2_stack_2->SetBinError(4,10.82043);
   TT_stack_2_stack_2_stack_2->SetBinError(5,14.09704);
   TT_stack_2_stack_2_stack_2->SetBinError(6,15.33181);
   TT_stack_2_stack_2_stack_2->SetBinError(7,15.36355);
   TT_stack_2_stack_2_stack_2->SetBinError(8,14.81179);
   TT_stack_2_stack_2_stack_2->SetBinError(9,14.015);
   TT_stack_2_stack_2_stack_2->SetBinError(10,13.0952);
   TT_stack_2_stack_2_stack_2->SetBinError(11,12.2336);
   TT_stack_2_stack_2_stack_2->SetBinError(12,11.27365);
   TT_stack_2_stack_2_stack_2->SetBinError(13,10.38911);
   TT_stack_2_stack_2_stack_2->SetBinError(14,9.49851);
   TT_stack_2_stack_2_stack_2->SetBinError(15,8.620621);
   TT_stack_2_stack_2_stack_2->SetBinError(16,7.608871);
   TT_stack_2_stack_2_stack_2->SetBinError(17,6.69085);
   TT_stack_2_stack_2_stack_2->SetBinError(18,5.518201);
   TT_stack_2_stack_2_stack_2->SetBinError(19,4.287576);
   TT_stack_2_stack_2_stack_2->SetBinError(20,3.073615);
   TT_stack_2_stack_2_stack_2->SetBinError(21,1.870469);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.9231812);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.2969324);
   TT_stack_2_stack_2_stack_2->SetEntries(739478);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1.432752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,80.18861);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,223.5341);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,389.4561);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,475.9815);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,605.339);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,576.9342);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,595.3992);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,639.5525);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,645.8692);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,654.133);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,544.037);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,475.1337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,425.8947);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,344.5805);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,258.7485);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,199.736);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,128.9569);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,64.20053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,39.67879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,12.05471);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.4411168);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,-0.04430955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,3.967012);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,15.40498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,26.44535);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,33.84038);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,37.58592);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,39.54791);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,39.09822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,39.23151);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,38.80802);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,37.48713);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,36.59592);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,33.64418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,31.06523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,29.10933);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,25.89785);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,21.88617);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,19.005);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,15.15636);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,10.52346);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,7.98855);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,4.454513);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.8536867);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.04430954);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3287.287);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(2,0.2750948);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(3,2.826712);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(4,5.697239);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(5,7.620517);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(6,7.046094);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(7,8.601408);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(8,8.208637);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(9,7.443404);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(10,8.173979);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(11,9.112112);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(12,5.738448);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(13,6.874161);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(14,5.072639);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(15,7.259714);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(16,6.078991);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(17,4.240038);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(18,2.560929);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(19,2.013958);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(20,1.228143);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(21,0.3933217);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(22,0.1654275);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(23,0.0542303);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(2,0.1562192);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(3,0.5236612);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(4,0.7896911);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(5,0.8755503);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(6,0.9287467);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(7,0.948927);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(8,0.9589758);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(9,0.9774643);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(10,0.9755609);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(11,0.9998978);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(12,0.9945823);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(13,0.9748205);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(14,0.9718328);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(15,0.9473214);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(16,0.8894228);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(17,0.7911299);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(18,0.670202);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(19,0.5715378);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(20,0.4389908);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(21,0.2116635);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(22,0.1008161);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(23,0.0542303);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetEntries(19326);
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
   0,
   57.65388,
   739.0084,
   2462.074,
   4124.239,
   4835.879,
   4967.833,
   4638.592,
   4238.1,
   3831.165,
   3435.363,
   3030.371,
   2584.774,
   2180.993,
   1829.873,
   1444.599,
   1108.369,
   784.8518,
   478.178,
   243.3172,
   106.6187,
   27.90735,
   1.753253,
   -0.04430955,
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
   0,
   4.343936,
   16.5913,
   28.788,
   36.94705,
   40.96711,
   42.73048,
   42.10548,
   41.95052,
   41.26881,
   39.65797,
   38.4755,
   35.47423,
   32.66574,
   30.58137,
   27.1517,
   23.02348,
   19.91126,
   15.84393,
   11.02375,
   8.243535,
   4.562533,
   0.9048596,
   0.04430954,
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
   0,
   4.343936,
   16.5913,
   28.788,
   36.94705,
   40.96711,
   42.73048,
   42.10548,
   41.95052,
   41.26881,
   39.65797,
   38.4755,
   35.47423,
   32.66574,
   30.58137,
   27.1517,
   23.02348,
   19.91126,
   15.84393,
   11.02375,
   8.243535,
   4.562533,
   0.9048596,
   0.04430954,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMinimum(5.511625);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMaximum(5511.625);
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
   Data__523->SetBinContent(2,61);
   Data__523->SetBinContent(3,690);
   Data__523->SetBinContent(4,2245);
   Data__523->SetBinContent(5,3711);
   Data__523->SetBinContent(6,4564);
   Data__523->SetBinContent(7,4561);
   Data__523->SetBinContent(8,4283);
   Data__523->SetBinContent(9,4079);
   Data__523->SetBinContent(10,3588);
   Data__523->SetBinContent(11,3355);
   Data__523->SetBinContent(12,2829);
   Data__523->SetBinContent(13,2540);
   Data__523->SetBinContent(14,2164);
   Data__523->SetBinContent(15,1770);
   Data__523->SetBinContent(16,1414);
   Data__523->SetBinContent(17,1088);
   Data__523->SetBinContent(18,724);
   Data__523->SetBinContent(19,436);
   Data__523->SetBinContent(20,248);
   Data__523->SetBinContent(21,117);
   Data__523->SetBinContent(22,26);
   Data__523->SetBinError(2,7.81025);
   Data__523->SetBinError(3,26.26785);
   Data__523->SetBinError(4,47.38143);
   Data__523->SetBinError(5,60.91798);
   Data__523->SetBinError(6,67.55738);
   Data__523->SetBinError(7,67.53518);
   Data__523->SetBinError(8,65.44463);
   Data__523->SetBinError(9,63.86705);
   Data__523->SetBinError(10,59.89992);
   Data__523->SetBinError(11,57.92236);
   Data__523->SetBinError(12,53.18834);
   Data__523->SetBinError(13,50.39841);
   Data__523->SetBinError(14,46.51881);
   Data__523->SetBinError(15,42.07137);
   Data__523->SetBinError(16,37.60319);
   Data__523->SetBinError(17,32.98485);
   Data__523->SetBinError(18,26.90725);
   Data__523->SetBinError(19,20.88061);
   Data__523->SetBinError(20,15.74802);
   Data__523->SetBinError(21,10.81665);
   Data__523->SetBinError(22,5.09902);
   Data__523->SetEntries(44497);
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
   hframe_copy__524->SetMaximum(35073.95);
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
   hframe_copy__525->SetMaximum(35073.95);
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
