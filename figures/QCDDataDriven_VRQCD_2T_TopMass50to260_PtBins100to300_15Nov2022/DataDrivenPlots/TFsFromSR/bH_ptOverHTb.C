void bH_ptOverHTb()
{
//=========Macro generated from canvas: bH_ptOverHTb/bH_ptOverHTb
//=========  (Fri Nov 18 13:28:38 2022) by ROOT version 6.20/02
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
   0.2118273,
   0.0703468,
   0.03954187,
   0.03238133,
   0.02820468,
   0.0277017,
   0.02708326,
   0.02781957,
   0.02849322,
   0.02963057,
   0.03056854,
   0.03214971,
   0.03319894,
   0.03459699,
   0.03718434,
   0.04308733,
   0.04807772,
   0.05812538,
   0.0785356,
   0.1062438,
   0.1947172,
   0.6461792,
   0.9965782};
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
   0.2118273,
   0.0703468,
   0.03954187,
   0.03238133,
   0.02820468,
   0.0277017,
   0.02708326,
   0.02781957,
   0.02849322,
   0.02963057,
   0.03056854,
   0.03214971,
   0.03319894,
   0.03459699,
   0.03718434,
   0.04308733,
   0.04807772,
   0.05812538,
   0.0785356,
   0.1062438,
   0.1947172,
   0.6461792,
   0.9965782};
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
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMinimum(0.00307965);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMaximum(2.195894);
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
   0.2118273,
   0.0703468,
   0.03954187,
   0.03238133,
   0.02820468,
   0.0277017,
   0.02708326,
   0.02781957,
   0.02849322,
   0.02963057,
   0.03056854,
   0.03214971,
   0.03319894,
   0.03459699,
   0.03718434,
   0.04308733,
   0.04807772,
   0.05812538,
   0.0785356,
   0.1062438,
   0.1947172,
   0.6461792,
   0.9965782,
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
   0.2118273,
   0.0703468,
   0.03954187,
   0.03238133,
   0.02820468,
   0.0277017,
   0.02708326,
   0.02781957,
   0.02849322,
   0.02963057,
   0.03056854,
   0.03214971,
   0.03319894,
   0.03459699,
   0.03718434,
   0.04308733,
   0.04807772,
   0.05812538,
   0.0785356,
   0.1062438,
   0.1947172,
   0.6461792,
   0.9965782,
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
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMinimum(0.00307965);
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMaximum(2.195894);
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
   1.212982,
   1.141765,
   0.9801708,
   1.062121,
   0.8683996,
   0.9628604,
   0.9631942,
   0.9854807,
   0.939141,
   0.9723977,
   0.951056,
   1.078817,
   1.069259,
   1.080181,
   1.029497,
   1.106446,
   1.175748,
   0.9165931,
   1.193546,
   0.9100355,
   1.002985,
   1.525407};
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
   0.3131907,
   0.09826752,
   0.04840719,
   0.04082064,
   0.03051245,
   0.03064819,
   0.02947326,
   0.0301835,
   0.02952165,
   0.03064285,
   0.03105308,
   0.03469243,
   0.03568164,
   0.03749363,
   0.03871821,
   0.04679767,
   0.05417562,
   0.05706459,
   0.09127276,
   0.1065116,
   0.1930246,
   0.6821828};
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
   0.3131907,
   0.09826752,
   0.04840719,
   0.04082064,
   0.03051245,
   0.03064819,
   0.02947326,
   0.0301835,
   0.02952165,
   0.03064285,
   0.03105308,
   0.03469243,
   0.03568164,
   0.03749363,
   0.03871821,
   0.04679767,
   0.05417562,
   0.05706459,
   0.09127276,
   0.1065116,
   0.1930246,
   0.6821828};
   grae = new TGraphAsymmErrors(22,Graph1_fx3299,Graph1_fy3299,Graph1_felx3299,Graph1_fehx3299,Graph1_fely3299,Graph1_fehy3299);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1329132953299 = new TH1F("Graph_Graph_Graph_Graph1329132953299","Graph",100,0,1.008);
   Graph_Graph_Graph_Graph1329132953299->SetMinimum(0.6631173);
   Graph_Graph_Graph_Graph1329132953299->SetMaximum(2.347996);
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
   bH_ptOverHTb_1->Range(-0.2025316,-2.128295,1.063291,4.286445);
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
   hframe__521->SetMaximum(7971.886);
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
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMinimum(0.4435243);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMaximum(1774.097);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.1977888);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,3.674091);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,11.91694);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,16.84073);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,25.38261);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,26.76605);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,25.81459);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,25.0537);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,19.17081);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,23.59584);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,22.17737);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,17.32876);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,15.08184);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,13.21293);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,11.15018);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,10.55543);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,8.162582);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,4.701646);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,2.526321);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,1.589859);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.4734425);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.08937381);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.2995495);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.7466007);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.580754);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.015211);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.315434);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.401154);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.229305);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.228494);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.953462);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.690626);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.973525);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.396752);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.624603);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.435723);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.472206);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.399038);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.107983);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.801894);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.6144015);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.5072329);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.1919631);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.06221943);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(45451);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,8.268891);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,72.40802);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,213.9766);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,328.2334);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,381.8788);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,393.0605);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,377.2645);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,345.8467);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,319.9415);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,284.5522);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,247.5061);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,217.8877);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,190.4036);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,169.1981);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,141.1104);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,108.9108);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,73.93881);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,46.3721);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,26.00694);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,9.552934);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,2.790898);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.3013131);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.05034937);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.6693311);
   TT_stack_2_stack_2_stack_2->SetBinError(3,2.003121);
   TT_stack_2_stack_2_stack_2->SetBinError(4,3.480035);
   TT_stack_2_stack_2_stack_2->SetBinError(5,4.356007);
   TT_stack_2_stack_2_stack_2->SetBinError(6,4.733127);
   TT_stack_2_stack_2_stack_2->SetBinError(7,4.807865);
   TT_stack_2_stack_2_stack_2->SetBinError(8,4.737862);
   TT_stack_2_stack_2_stack_2->SetBinError(9,4.554895);
   TT_stack_2_stack_2_stack_2->SetBinError(10,4.363023);
   TT_stack_2_stack_2_stack_2->SetBinError(11,4.122864);
   TT_stack_2_stack_2_stack_2->SetBinError(12,3.841235);
   TT_stack_2_stack_2_stack_2->SetBinError(13,3.584493);
   TT_stack_2_stack_2_stack_2->SetBinError(14,3.36539);
   TT_stack_2_stack_2_stack_2->SetBinError(15,3.168653);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.913668);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.561292);
   TT_stack_2_stack_2_stack_2->SetBinError(18,2.110024);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.679083);
   TT_stack_2_stack_2_stack_2->SetBinError(20,1.250803);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.7675201);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.400404);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.1529976);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.05034937);
   TT_stack_2_stack_2_stack_2->SetEntries(70981);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,3.899534);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,42.15585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,192.4009);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,292.3296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,525.4889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,605.2441);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,705.7316);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,710.8051);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,738.4681);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,727.4365);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,716.5886);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,661.1355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,634.3483);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,585.9788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,534.4827);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,385.7552);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,318.4946);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,230.4034);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,114.7373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,69.07386);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,23.65529);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,2.887127);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.0001731781);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,2.514767);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,8.038258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,16.09245);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,20.07418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,25.77486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,27.88302);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,29.57019);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,29.66227);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,30.32932);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,30.28744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,29.75498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,28.49303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,27.63001);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,26.35538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,25.32657);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,21.57211);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,19.11172);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,16.25481);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,11.16521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,8.472723);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,5.222874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,2.111606);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.0001731781);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7515.688);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(2,0.289476);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(3,0.909862);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(4,1.645191);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(5,1.238935);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(6,1.808205);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(7,1.956506);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(8,1.445557);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(9,2.044028);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(10,1.190306);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(11,1.774486);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(12,1.682311);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(13,1.378168);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(14,1.392098);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(15,0.9928732);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(16,-0.1400893);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(17,0.5485179);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(18,0.3703964);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(19,0.5243699);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(20,0.08631164);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(21,0.03634784);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(22,0.03581557);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(23,0.05115089);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(2,0.1157434);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(3,0.3376184);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(4,0.4360288);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(5,0.5100383);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(6,0.4763582);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(7,0.5089653);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(8,0.4765708);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(9,0.4839482);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(10,0.4848817);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(11,0.448775);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(12,0.4400291);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(13,0.4471702);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(14,0.4145745);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(15,0.3861322);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(16,0.3780682);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(17,0.337206);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(18,0.3041112);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(19,0.2732281);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(20,0.1386674);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(21,0.08199775);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(22,0.03581557);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(23,0.05115089);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetEntries(4205);
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
   12.36621,
   118.238,
   418.2944,
   637.4037,
   932.7504,
   1025.071,
   1108.811,
   1081.706,
   1077.58,
   1035.584,
   986.2721,
   896.3519,
   839.8337,
   768.3898,
   686.7432,
   505.2214,
   400.5959,
   281.4771,
   143.2705,
   80.21665,
   26.91963,
   3.277814,
   0.05052254,
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
   2.619502,
   8.317662,
   16.54014,
   20.63998,
   26.30793,
   28.3962,
   30.03021,
   30.09258,
   30.70374,
   30.68496,
   30.1489,
   28.81746,
   27.88159,
   26.58398,
   25.53609,
   21.76864,
   19.25974,
   16.36097,
   11.25184,
   8.522524,
   5.241716,
   2.118055,
   0.05034966,
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
   2.619502,
   8.317662,
   16.54014,
   20.63998,
   26.30793,
   28.3962,
   30.03021,
   30.09258,
   30.70374,
   30.68496,
   30.1489,
   28.81746,
   27.88159,
   26.58398,
   25.53609,
   21.76864,
   19.25974,
   16.36097,
   11.25184,
   8.522524,
   5.241716,
   2.118055,
   0.05034966,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMinimum(1.252725);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMaximum(1252.725);
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
   Data__523->SetBinContent(2,15);
   Data__523->SetBinContent(3,135);
   Data__523->SetBinContent(4,410);
   Data__523->SetBinContent(5,677);
   Data__523->SetBinContent(6,810);
   Data__523->SetBinContent(7,987);
   Data__523->SetBinContent(8,1068);
   Data__523->SetBinContent(9,1066);
   Data__523->SetBinContent(10,1012);
   Data__523->SetBinContent(11,1007);
   Data__523->SetBinContent(12,938);
   Data__523->SetBinContent(13,967);
   Data__523->SetBinContent(14,898);
   Data__523->SetBinContent(15,830);
   Data__523->SetBinContent(16,707);
   Data__523->SetBinContent(17,559);
   Data__523->SetBinContent(18,471);
   Data__523->SetBinContent(19,258);
   Data__523->SetBinContent(20,171);
   Data__523->SetBinContent(21,73);
   Data__523->SetBinContent(22,27);
   Data__523->SetBinContent(23,5);
   Data__523->SetBinError(2,3.872983);
   Data__523->SetBinError(3,11.61895);
   Data__523->SetBinError(4,20.24846);
   Data__523->SetBinError(5,26.01922);
   Data__523->SetBinError(6,28.4605);
   Data__523->SetBinError(7,31.41656);
   Data__523->SetBinError(8,32.68027);
   Data__523->SetBinError(9,32.64966);
   Data__523->SetBinError(10,31.81195);
   Data__523->SetBinError(11,31.73326);
   Data__523->SetBinError(12,30.62679);
   Data__523->SetBinError(13,31.09662);
   Data__523->SetBinError(14,29.96665);
   Data__523->SetBinError(15,28.80972);
   Data__523->SetBinError(16,26.58947);
   Data__523->SetBinError(17,23.64318);
   Data__523->SetBinError(18,21.70253);
   Data__523->SetBinError(19,16.06238);
   Data__523->SetBinError(20,13.0767);
   Data__523->SetBinError(21,8.544004);
   Data__523->SetBinError(22,5.196152);
   Data__523->SetBinError(23,2.236068);
   Data__523->SetEntries(13095);
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
   hframe_copy__524->SetMaximum(7971.886);
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
   hframe_copy__525->SetMaximum(7971.886);
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
