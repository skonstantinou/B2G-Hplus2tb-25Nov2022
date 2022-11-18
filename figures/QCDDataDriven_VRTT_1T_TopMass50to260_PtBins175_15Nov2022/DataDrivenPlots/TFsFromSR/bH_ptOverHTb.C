void bH_ptOverHTb()
{
//=========Macro generated from canvas: bH_ptOverHTb/bH_ptOverHTb
//=========  (Fri Nov 18 13:27:50 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3297[22] = {
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
   Double_t BackgroundStatSystError_fy3297[22] = {
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
   Double_t BackgroundStatSystError_felx3297[22] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
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
   Double_t BackgroundStatSystError_fely3297[22] = {
   0.2549425,
   0.09875285,
   0.04183664,
   0.03071259,
   0.02551262,
   0.02437431,
   0.02237467,
   0.02187999,
   0.02130627,
   0.02163945,
   0.02122054,
   0.02132312,
   0.0219034,
   0.02354679,
   0.02607181,
   0.02919102,
   0.03660905,
   0.04663411,
   0.06936514,
   0.1185465,
   0.2339667,
   3.361343};
   Double_t BackgroundStatSystError_fehx3297[22] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
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
   Double_t BackgroundStatSystError_fehy3297[22] = {
   0.2549425,
   0.09875285,
   0.04183664,
   0.03071259,
   0.02551262,
   0.02437431,
   0.02237467,
   0.02187999,
   0.02130627,
   0.02163945,
   0.02122054,
   0.02132312,
   0.0219034,
   0.02354679,
   0.02607181,
   0.02919102,
   0.03660905,
   0.04663411,
   0.06936514,
   0.1185465,
   0.2339667,
   3.361343};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,BackgroundStatSystError_fx3297,BackgroundStatSystError_fy3297,BackgroundStatSystError_felx3297,BackgroundStatSystError_fehx3297,BackgroundStatSystError_fely3297,BackgroundStatSystError_fehy3297);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError328932933297 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError328932933297","Graph",100,0,1.008);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMinimum(-3.033612);
   Graph_Graph_Graph_BackgroundStatSystError328932933297->SetMaximum(5.033612);
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
   0.2549425,
   0.09875285,
   0.04183664,
   0.03071259,
   0.02551262,
   0.02437431,
   0.02237467,
   0.02187999,
   0.02130627,
   0.02163945,
   0.02122054,
   0.02132312,
   0.0219034,
   0.02354679,
   0.02607181,
   0.02919102,
   0.03660905,
   0.04663411,
   0.06936514,
   0.1185465,
   0.2339667,
   3.361343,
   0,
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
   0.2549425,
   0.09875285,
   0.04183664,
   0.03071259,
   0.02551262,
   0.02437431,
   0.02237467,
   0.02187999,
   0.02130627,
   0.02163945,
   0.02122054,
   0.02132312,
   0.0219034,
   0.02354679,
   0.02607181,
   0.02919102,
   0.03660905,
   0.04663411,
   0.06936514,
   0.1185465,
   0.2339667,
   3.361343,
   0,
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
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMinimum(-3.033612);
   Graph_Graph_Graph_BackgroundStatError329032943298->SetMaximum(5.033612);
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
   0.2471356,
   0.9651065,
   0.8418919,
   0.8755568,
   0.9339112,
   0.8891037,
   0.9165908,
   0.9744031,
   0.9538616,
   1.055135,
   0.9704637,
   0.9956527,
   0.9641148,
   1.027591,
   1.090404,
   1.051716,
   1.080958,
   1.052691,
   1.341193,
   1.201777,
   1.664412};
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
   0.1426838,
   0.1187964,
   0.04648571,
   0.03516321,
   0.03031604,
   0.0277574,
   0.02584254,
   0.02595871,
   0.02508425,
   0.02738073,
   0.02530305,
   0.02653423,
   0.02684318,
   0.0303284,
   0.03535877,
   0.03848027,
   0.04772547,
   0.06008026,
   0.1031687,
   0.1526259,
   0.3328825};
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
   0.1426838,
   0.1187964,
   0.04648571,
   0.03516321,
   0.03031604,
   0.0277574,
   0.02584254,
   0.02595871,
   0.02508425,
   0.02738073,
   0.02530305,
   0.02653423,
   0.02684318,
   0.0303284,
   0.03535877,
   0.03848027,
   0.04772547,
   0.06008026,
   0.1031687,
   0.1526259,
   0.3328825};
   grae = new TGraphAsymmErrors(21,Graph1_fx3299,Graph1_fy3299,Graph1_felx3299,Graph1_fehx3299,Graph1_fely3299,Graph1_fehy3299);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1329132953299 = new TH1F("Graph_Graph_Graph_Graph1329132953299","Graph",100,0,0.964);
   Graph_Graph_Graph_Graph1329132953299->SetMinimum(0.09400662);
   Graph_Graph_Graph_Graph1329132953299->SetMaximum(2.186579);
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
   bH_ptOverHTb_1->Range(-0.2025316,-2.131194,1.063291,4.42852);
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
   hframe__521->SetMaximum(10837.7);
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
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMinimum(0.6063773);
   StackedMCstackHist_stack_73_stack_74_stack_75->SetMaximum(2425.509);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.115758);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,3.021273);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,7.333853);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,19.07796);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,23.76905);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,32.51397);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,37.33966);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,35.69414);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,36.59196);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,33.95176);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,36.09418);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,38.87721);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,33.10284);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,31.88001);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,26.29134);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,19.325);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,11.39662);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,6.343954);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,3.761047);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,1.318155);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.5142709);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.005547151);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.09782297);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.7065253);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.375535);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.845866);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.087755);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.842929);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.63885);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.829477);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.765406);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.729739);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,3.35374);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,3.680877);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,3.126467);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,2.497983);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,3.02017);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.831941);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.633188);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.311647);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.9296936);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.5046805);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.2090606);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.00369718);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(52636);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,3.550033);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,48.96145);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,229.1577);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,473.7274);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,668.6921);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,752.4918);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,843.084);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,876.9763);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,900.669);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,897.6072);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,884.7708);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,856.1219);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,787.26);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,679.7903);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,562.4674);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,418.3265);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,265.215);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,157.4936);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,72.86578);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,22.5392);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,3.811854);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.1270607);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.4311195);
   TT_stack_2_stack_2_stack_2->SetBinError(3,1.657574);
   TT_stack_2_stack_2_stack_2->SetBinError(4,3.586946);
   TT_stack_2_stack_2_stack_2->SetBinError(5,5.17471);
   TT_stack_2_stack_2_stack_2->SetBinError(6,6.216942);
   TT_stack_2_stack_2_stack_2->SetBinError(7,6.626725);
   TT_stack_2_stack_2_stack_2->SetBinError(8,7.041573);
   TT_stack_2_stack_2_stack_2->SetBinError(9,7.202895);
   TT_stack_2_stack_2_stack_2->SetBinError(10,7.300435);
   TT_stack_2_stack_2_stack_2->SetBinError(11,7.289272);
   TT_stack_2_stack_2_stack_2->SetBinError(12,7.246333);
   TT_stack_2_stack_2_stack_2->SetBinError(13,7.111909);
   TT_stack_2_stack_2_stack_2->SetBinError(14,6.826326);
   TT_stack_2_stack_2_stack_2->SetBinError(15,6.357648);
   TT_stack_2_stack_2_stack_2->SetBinError(16,5.777158);
   TT_stack_2_stack_2_stack_2->SetBinError(17,4.981126);
   TT_stack_2_stack_2_stack_2->SetBinError(18,3.969741);
   TT_stack_2_stack_2_stack_2->SetBinError(19,3.062056);
   TT_stack_2_stack_2_stack_2->SetBinError(20,2.080988);
   TT_stack_2_stack_2_stack_2->SetBinError(21,1.173459);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.484212);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.09528303);
   TT_stack_2_stack_2_stack_2->SetEntries(185137);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,8.473293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,16.40351);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,153.1071);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,215.3155);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,323.6955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,368.9655);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,492.0536);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,533.3431);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,578.6823);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,475.8433);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,594.9054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,519.1486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,517.6522);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,405.5054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,283.3952);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,272.6164);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,197.9673);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,127.7959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,49.3804);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,27.73291);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,10.69419);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,-0.09776381);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,3.063031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,6.508519);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,15.84031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,21.04282);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,25.08161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,27.18725);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,29.77378);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,30.67773);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,31.34147);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,29.44397);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,31.15862);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,29.07126);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,28.32898);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,25.40356);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,21.78413);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,20.04266);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,16.83525);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,13.1858);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,8.438108);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,5.980959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,3.474451);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.06800896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3639.596);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(2,-0.00592979);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(3,0.2266305);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(4,1.070592);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(5,1.231404);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(6,2.088642);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(7,1.84916);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(8,0.8708019);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(9,1.81758);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(10,2.389282);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(11,1.277771);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(12,2.486659);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(13,3.115841);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(14,3.283465);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(15,2.187509);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(16,2.436532);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(17,1.587255);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(18,1.830955);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(19,2.442954);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(20,0.4767648);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(21,0.00656837);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinContent(22,0.04772413);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(2,0.07314855);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(3,0.1933545);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(4,0.3380199);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(5,0.3637958);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(6,0.4104621);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(7,0.4320765);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(8,0.4532218);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(9,0.4706843);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(10,0.5135623);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(11,0.5434379);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(12,0.5605916);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(13,0.6005651);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(14,0.6187014);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(15,0.6132778);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(16,0.5908207);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(17,0.5842693);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(18,0.5075824);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(19,0.4145635);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(20,0.2569148);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(21,0.1588433);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetBinError(22,0.07789376);
   ChargedHiggs_HplusTBHplusToTB_M_800__522->SetEntries(5945);
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
   12.13908,
   68.38624,
   389.5987,
   708.1208,
   1016.157,
   1153.971,
   1372.477,
   1446.013,
   1515.943,
   1407.402,
   1515.77,
   1414.148,
   1338.015,
   1117.176,
   872.1539,
   710.2679,
   474.579,
   291.6335,
   126.0072,
   51.59026,
   15.02032,
   0.03484404,
   0,
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
   3.094768,
   6.753336,
   16.2995,
   21.74822,
   25.92482,
   28.12725,
   30.70872,
   31.63875,
   32.2991,
   30.45542,
   32.16546,
   30.15404,
   29.30707,
   26.3059,
   22.73863,
   20.73344,
   17.37389,
   13.60007,
   8.740509,
   6.115846,
   3.514253,
   0.1171228,
   0,
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
   3.094768,
   6.753336,
   16.2995,
   21.74822,
   25.92482,
   28.12725,
   30.70872,
   31.63875,
   32.2991,
   30.45542,
   32.16546,
   30.15404,
   29.30707,
   26.3059,
   22.73863,
   20.73344,
   17.37389,
   13.60007,
   8.740509,
   6.115846,
   3.514253,
   0.1171228,
   0,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMinimum(1.703067);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors329232963300->SetMaximum(1703.067);
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
   Data__523->SetBinContent(2,3);
   Data__523->SetBinContent(3,66);
   Data__523->SetBinContent(4,328);
   Data__523->SetBinContent(5,620);
   Data__523->SetBinContent(6,949);
   Data__523->SetBinContent(7,1026);
   Data__523->SetBinContent(8,1258);
   Data__523->SetBinContent(9,1409);
   Data__523->SetBinContent(10,1446);
   Data__523->SetBinContent(11,1485);
   Data__523->SetBinContent(12,1471);
   Data__523->SetBinContent(13,1408);
   Data__523->SetBinContent(14,1290);
   Data__523->SetBinContent(15,1148);
   Data__523->SetBinContent(16,951);
   Data__523->SetBinContent(17,747);
   Data__523->SetBinContent(18,513);
   Data__523->SetBinContent(19,307);
   Data__523->SetBinContent(20,169);
   Data__523->SetBinContent(21,62);
   Data__523->SetBinContent(22,25);
   Data__523->SetBinContent(24,1);
   Data__523->SetBinError(2,1.732051);
   Data__523->SetBinError(3,8.124038);
   Data__523->SetBinError(4,18.11077);
   Data__523->SetBinError(5,24.8998);
   Data__523->SetBinError(6,30.80584);
   Data__523->SetBinError(7,32.03123);
   Data__523->SetBinError(8,35.4683);
   Data__523->SetBinError(9,37.53665);
   Data__523->SetBinError(10,38.02631);
   Data__523->SetBinError(11,38.5357);
   Data__523->SetBinError(12,38.35362);
   Data__523->SetBinError(13,37.52333);
   Data__523->SetBinError(14,35.91657);
   Data__523->SetBinError(15,33.88215);
   Data__523->SetBinError(16,30.83829);
   Data__523->SetBinError(17,27.3313);
   Data__523->SetBinError(18,22.6495);
   Data__523->SetBinError(19,17.52142);
   Data__523->SetBinError(20,13);
   Data__523->SetBinError(21,7.874008);
   Data__523->SetBinError(22,5);
   Data__523->SetBinError(24,1);
   Data__523->SetEntries(16686);
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
   hframe_copy__524->SetMaximum(10837.7);
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
   hframe_copy__525->SetMaximum(10837.7);
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
