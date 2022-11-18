void Jet_N()
{
//=========Macro generated from canvas: Jet_N/Jet_N
//=========  (Fri Nov 18 13:31:10 2022) by ROOT version 6.20/02
   TCanvas *Jet_N = new TCanvas("Jet_N", "Jet_N",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Jet_N->SetHighLightColor(2);
   Jet_N->Range(0,0,1,1);
   Jet_N->SetFillColor(0);
   Jet_N->SetBorderMode(0);
   Jet_N->SetBorderSize(2);
   Jet_N->SetTickx(1);
   Jet_N->SetTicky(1);
   Jet_N->SetLeftMargin(0.16);
   Jet_N->SetRightMargin(0.05);
   Jet_N->SetTopMargin(0.06);
   Jet_N->SetBottomMargin(0.13);
   Jet_N->SetFrameFillStyle(0);
   Jet_N->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Jet_N_2
   TPad *Jet_N_2 = new TPad("Jet_N_2", "Jet_N_2",0,0,1,0.304);
   Jet_N_2->Draw();
   Jet_N_2->cd();
   Jet_N_2->Range(5.177215,-0.428,16.56962,1.7);
   Jet_N_2->SetFillColor(0);
   Jet_N_2->SetFillStyle(4000);
   Jet_N_2->SetBorderMode(0);
   Jet_N_2->SetBorderSize(2);
   Jet_N_2->SetTickx(1);
   Jet_N_2->SetTicky(1);
   Jet_N_2->SetLeftMargin(0.16);
   Jet_N_2->SetRightMargin(0.05);
   Jet_N_2->SetTopMargin(0);
   Jet_N_2->SetBottomMargin(0.3421053);
   Jet_N_2->SetFrameFillStyle(0);
   Jet_N_2->SetFrameBorderMode(0);
   Jet_N_2->SetFrameFillStyle(0);
   Jet_N_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1191 = new TH1F("hframe__1191","",1000,7,16);
   hframe__1191->SetMinimum(0.3);
   hframe__1191->SetMaximum(1.7);
   hframe__1191->SetDirectory(0);
   hframe__1191->SetStats(0);
   hframe__1191->SetLineStyle(0);
   hframe__1191->SetMarkerStyle(20);
   hframe__1191->GetXaxis()->SetTitle("jet multiplicity");
   hframe__1191->GetXaxis()->SetNdivisions(8);
   hframe__1191->GetXaxis()->SetLabelFont(43);
   hframe__1191->GetXaxis()->SetLabelOffset(0.007);
   hframe__1191->GetXaxis()->SetLabelSize(27);
   hframe__1191->GetXaxis()->SetTitleSize(33);
   hframe__1191->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1191->GetXaxis()->SetTitleFont(43);
   hframe__1191->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1191->GetYaxis()->SetNdivisions(505);
   hframe__1191->GetYaxis()->SetLabelFont(43);
   hframe__1191->GetYaxis()->SetLabelOffset(0.007);
   hframe__1191->GetYaxis()->SetLabelSize(21);
   hframe__1191->GetYaxis()->SetTitleSize(33);
   hframe__1191->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1191->GetYaxis()->SetTitleFont(43);
   hframe__1191->GetZaxis()->SetLabelFont(43);
   hframe__1191->GetZaxis()->SetLabelOffset(0.007);
   hframe__1191->GetZaxis()->SetLabelSize(27);
   hframe__1191->GetZaxis()->SetTitleSize(33);
   hframe__1191->GetZaxis()->SetTitleOffset(1);
   hframe__1191->GetZaxis()->SetTitleFont(43);
   hframe__1191->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3723[8] = {
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   15};
   Double_t BackgroundStatSystError_fy3723[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3723[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   1};
   Double_t BackgroundStatSystError_fely3723[8] = {
   0.01406485,
   0.01202835,
   0.01458619,
   0.02189533,
   0.03548338,
   0.06351271,
   0.112233,
   0.207186};
   Double_t BackgroundStatSystError_fehx3723[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   1};
   Double_t BackgroundStatSystError_fehy3723[8] = {
   0.01406485,
   0.01202835,
   0.01458619,
   0.02189533,
   0.03548338,
   0.06351271,
   0.112233,
   0.207186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,BackgroundStatSystError_fx3723,BackgroundStatSystError_fy3723,BackgroundStatSystError_felx3723,BackgroundStatSystError_fehx3723,BackgroundStatSystError_fely3723,BackgroundStatSystError_fehy3723);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1394;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError371537193723 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError371537193723","Graph",100,6.1,16.9);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetMinimum(0.7513768);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetMaximum(1.248623);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError371537193723);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3724[8] = {
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   15};
   Double_t BackgroundStatError_fy3724[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3724[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   1};
   Double_t BackgroundStatError_fely3724[8] = {
   0.01406485,
   0.01202835,
   0.01458619,
   0.02189533,
   0.03548338,
   0.06351271,
   0.112233,
   0.207186};
   Double_t BackgroundStatError_fehx3724[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   1};
   Double_t BackgroundStatError_fehy3724[8] = {
   0.01406485,
   0.01202835,
   0.01458619,
   0.02189533,
   0.03548338,
   0.06351271,
   0.112233,
   0.207186};
   grae = new TGraphAsymmErrors(8,BackgroundStatError_fx3724,BackgroundStatError_fy3724,BackgroundStatError_felx3724,BackgroundStatError_fehx3724,BackgroundStatError_fely3724,BackgroundStatError_fehy3724);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1393;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError371637203724 = new TH1F("Graph_Graph_Graph_BackgroundStatError371637203724","Graph",100,6.1,16.9);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetMinimum(0.7513768);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetMaximum(1.248623);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError371637203724);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx171[2] = {
   7,
   16};
   Double_t Graph0_fy171[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx171,Graph0_fy171);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0169170171 = new TH1F("Graph_Graph_Graph_Graph0169170171","Graph",100,6.1,16.9);
   Graph_Graph_Graph_Graph0169170171->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0169170171->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0169170171->SetDirectory(0);
   Graph_Graph_Graph_Graph0169170171->SetStats(0);
   Graph_Graph_Graph_Graph0169170171->SetLineStyle(0);
   Graph_Graph_Graph_Graph0169170171->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0169170171);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3725[8] = {
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   15};
   Double_t Graph1_fy3725[8] = {
   1.020908,
   1.013912,
   1.011331,
   0.9937358,
   1.013975,
   1.038683,
   0.6573098,
   1.096151};
   Double_t Graph1_felx3725[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   1};
   Double_t Graph1_fely3725[8] = {
   0.01796604,
   0.01396408,
   0.01607313,
   0.0228581,
   0.03632942,
   0.06622404,
   0.0841599,
   0.2237509};
   Double_t Graph1_fehx3725[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   1};
   Double_t Graph1_fehy3725[8] = {
   0.01796604,
   0.01396408,
   0.01607313,
   0.0228581,
   0.03632942,
   0.06622404,
   0.0841599,
   0.2237509};
   grae = new TGraphAsymmErrors(8,Graph1_fx3725,Graph1_fy3725,Graph1_felx3725,Graph1_fehx3725,Graph1_fely3725,Graph1_fehy3725);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1371737213725 = new TH1F("Graph_Graph_Graph_Graph1371737213725","Graph",100,6.1,16.9);
   Graph_Graph_Graph_Graph1371737213725->SetMinimum(0.4984747);
   Graph_Graph_Graph_Graph1371737213725->SetMaximum(1.394577);
   Graph_Graph_Graph_Graph1371737213725->SetDirectory(0);
   Graph_Graph_Graph_Graph1371737213725->SetStats(0);
   Graph_Graph_Graph_Graph1371737213725->SetLineStyle(0);
   Graph_Graph_Graph_Graph1371737213725->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1371737213725);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1192 = new TH1F("hframe_copy__1192","",1000,7,16);
   hframe_copy__1192->SetMinimum(0.3);
   hframe_copy__1192->SetMaximum(1.7);
   hframe_copy__1192->SetDirectory(0);
   hframe_copy__1192->SetStats(0);
   hframe_copy__1192->SetLineStyle(0);
   hframe_copy__1192->SetMarkerStyle(20);
   hframe_copy__1192->GetXaxis()->SetTitle("jet multiplicity");
   hframe_copy__1192->GetXaxis()->SetNdivisions(8);
   hframe_copy__1192->GetXaxis()->SetLabelFont(43);
   hframe_copy__1192->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1192->GetXaxis()->SetLabelSize(27);
   hframe_copy__1192->GetXaxis()->SetTitleSize(33);
   hframe_copy__1192->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1192->GetXaxis()->SetTitleFont(43);
   hframe_copy__1192->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1192->GetYaxis()->SetNdivisions(505);
   hframe_copy__1192->GetYaxis()->SetLabelFont(43);
   hframe_copy__1192->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1192->GetYaxis()->SetLabelSize(21);
   hframe_copy__1192->GetYaxis()->SetTitleSize(33);
   hframe_copy__1192->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1192->GetYaxis()->SetTitleFont(43);
   hframe_copy__1192->GetZaxis()->SetLabelFont(43);
   hframe_copy__1192->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1192->GetZaxis()->SetLabelSize(27);
   hframe_copy__1192->GetZaxis()->SetTitleSize(33);
   hframe_copy__1192->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1192->GetZaxis()->SetTitleFont(43);
   hframe_copy__1192->Draw("sameaxis");
   Jet_N_2->Modified();
   Jet_N->cd();
  
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
   Jet_N->cd();
  
// ------------>Primitives in pad: Jet_N_1
   TPad *Jet_N_1 = new TPad("Jet_N_1", "Jet_N_1",0,0.2897959,1,1);
   Jet_N_1->Draw();
   Jet_N_1->cd();
   Jet_N_1->Range(5.177215,-2.142762,16.56962,4.995361);
   Jet_N_1->SetFillColor(0);
   Jet_N_1->SetFillStyle(4000);
   Jet_N_1->SetBorderMode(0);
   Jet_N_1->SetBorderSize(2);
   Jet_N_1->SetLogy();
   Jet_N_1->SetTickx(1);
   Jet_N_1->SetTicky(1);
   Jet_N_1->SetLeftMargin(0.16);
   Jet_N_1->SetRightMargin(0.05);
   Jet_N_1->SetTopMargin(0.06);
   Jet_N_1->SetBottomMargin(0.02);
   Jet_N_1->SetFrameFillStyle(0);
   Jet_N_1->SetFrameBorderMode(0);
   Jet_N_1->SetFrameFillStyle(0);
   Jet_N_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1193 = new TH1F("hframe__1193","",1000,7,16);
   hframe__1193->SetMinimum(0.01);
   hframe__1193->SetMaximum(36904);
   hframe__1193->SetDirectory(0);
   hframe__1193->SetStats(0);
   hframe__1193->SetLineStyle(0);
   hframe__1193->SetMarkerStyle(20);
   hframe__1193->GetXaxis()->SetNdivisions(8);
   hframe__1193->GetXaxis()->SetLabelFont(43);
   hframe__1193->GetXaxis()->SetLabelOffset(0.007);
   hframe__1193->GetXaxis()->SetLabelSize(0);
   hframe__1193->GetXaxis()->SetTitleSize(0);
   hframe__1193->GetXaxis()->SetTitleOffset(0.9);
   hframe__1193->GetXaxis()->SetTitleFont(43);
   hframe__1193->GetYaxis()->SetTitle("< Events / 1-2  >");
   hframe__1193->GetYaxis()->SetLabelFont(43);
   hframe__1193->GetYaxis()->SetLabelOffset(0.007);
   hframe__1193->GetYaxis()->SetLabelSize(27);
   hframe__1193->GetYaxis()->SetTitleSize(33);
   hframe__1193->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1193->GetYaxis()->SetTitleFont(43);
   hframe__1193->GetZaxis()->SetLabelFont(43);
   hframe__1193->GetZaxis()->SetLabelOffset(0.007);
   hframe__1193->GetZaxis()->SetLabelSize(27);
   hframe__1193->GetZaxis()->SetTitleSize(33);
   hframe__1193->GetZaxis()->SetTitleOffset(1);
   hframe__1193->GetZaxis()->SetTitleFont(43);
   hframe__1193->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis607[9] = {7, 8, 9, 10, 11, 12, 13, 14, 16}; 
   
   TH1F *StackedMCstackHist_stack_169_stack_170_stack_171 = new TH1F("StackedMCstackHist_stack_169_stack_170_stack_171","StackedMCstackHist",8, xAxis607);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetMinimum(0.05956893);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetMaximum(9810.245);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetDirectory(0);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetStats(0);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetLineStyle(0);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetMarkerStyle(20);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_169_stack_170_stack_171);
   
   Double_t xAxis608[9] = {7, 8, 9, 10, 11, 12, 13, 14, 16}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_Jet_NInclusive",8, xAxis608);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,131.6572);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,227.0171);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,139.8912);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,66.4781);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,19.70556);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,6.72263);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.716062);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.3696418);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,4.839258);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,5.868414);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,4.192584);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.924667);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.543345);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.9570175);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.5223094);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.1567313);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4022.576);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,18);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis609[9] = {7, 8, 9, 10, 11, 12, 13, 14, 16}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_Jet_NInclusive",8, xAxis609);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2001.596);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,2788.979);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1780.034);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,756.2817);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,257.5133);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,75.8347);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,17.92679);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2.702087);
   TT_stack_2_stack_2_stack_2->SetBinError(1,10.94869);
   TT_stack_2_stack_2_stack_2->SetBinError(2,13.08689);
   TT_stack_2_stack_2_stack_2->SetBinError(3,10.58739);
   TT_stack_2_stack_2_stack_2->SetBinError(4,6.988323);
   TT_stack_2_stack_2_stack_2->SetBinError(5,4.100012);
   TT_stack_2_stack_2_stack_2->SetBinError(6,2.251389);
   TT_stack_2_stack_2_stack_2->SetBinError(7,1.109709);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.3265018);
   TT_stack_2_stack_2_stack_2->SetEntries(124126.7);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,18);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis610[9] = {7, 8, 9, 10, 11, 12, 13, 14, 16}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_Jet_NInclusive",8, xAxis610);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1029.618);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2183.668);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,1994.718);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,1079.154);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,491.0448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,154.281);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,73.15965);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,7.875668);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,42.84451);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,60.87668);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,55.95273);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,40.94817);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,26.90628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,14.84198);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,10.34304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,2.239045);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4312.856);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,18);
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
   Double_t xAxis611[9] = {7, 8, 9, 10, 11, 12, 13, 14, 16}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1194 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1194","h_SR_Jet_NInclusive",8, xAxis611);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(1,108.0467);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(2,209.5702);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(3,174.3835);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(4,81.36813);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(5,26.58);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(6,4.521743);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(7,-0.3092171);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(8,-0.1177802);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(1,2.557676);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(2,3.882639);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(3,3.995196);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(4,3.293368);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(5,2.332496);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(6,1.4554);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(7,0.8437576);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(8,0.2682077);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetEntries(6427.466);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetXaxis()->SetRange(1,18);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3726[8] = {
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   15};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3726[8] = {
   3162.872,
   5199.665,
   3914.644,
   1901.914,
   768.2637,
   236.8383,
   92.80251,
   10.9474};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3726[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   1};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3726[8] = {
   44.48533,
   62.54339,
   57.09973,
   41.64304,
   27.26059,
   15.04224,
   10.4155,
   2.268147};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3726[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   1};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3726[8] = {
   44.48533,
   62.54339,
   57.09973,
   41.64304,
   27.26059,
   15.04224,
   10.4155,
   2.268147};
   grae = new TGraphAsymmErrors(8,BkgSum-SR-Inclusive_sum_errors_fx3726,BkgSum-SR-Inclusive_sum_errors_fy3726,BkgSum-SR-Inclusive_sum_errors_felx3726,BkgSum-SR-Inclusive_sum_errors_fehx3726,BkgSum-SR-Inclusive_sum_errors_fely3726,BkgSum-SR-Inclusive_sum_errors_fehy3726);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1392;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726","Graph",100,6.1,16.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetMinimum(7.811323);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetMaximum(5787.561);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors371837223726);
   
   grae->Draw("e2 ");
   Double_t xAxis612[9] = {7, 8, 9, 10, 11, 12, 13, 14, 16}; 
   
   TH1F *Data__1195 = new TH1F("Data__1195","h_SR_Jet_NInclusive",8, xAxis612);
   Data__1195->SetBinContent(1,3229);
   Data__1195->SetBinContent(2,5272);
   Data__1195->SetBinContent(3,3959);
   Data__1195->SetBinContent(4,1890);
   Data__1195->SetBinContent(5,779);
   Data__1195->SetBinContent(6,246);
   Data__1195->SetBinContent(7,61);
   Data__1195->SetBinContent(8,12);
   Data__1195->SetBinError(1,56.82429);
   Data__1195->SetBinError(2,72.60854);
   Data__1195->SetBinError(3,62.92058);
   Data__1195->SetBinError(4,43.47413);
   Data__1195->SetBinError(5,27.91057);
   Data__1195->SetBinError(6,15.68439);
   Data__1195->SetBinError(7,7.81025);
   Data__1195->SetBinError(8,2.44949);
   Data__1195->SetEntries(15454);
   Data__1195->SetDirectory(0);
   Data__1195->SetFillStyle(3001);
   Data__1195->SetLineWidth(2);
   Data__1195->SetMarkerStyle(20);
   Data__1195->SetMarkerSize(1.2);
   Data__1195->GetXaxis()->SetRange(1,18);
   Data__1195->GetXaxis()->SetLabelFont(42);
   Data__1195->GetXaxis()->SetTitleOffset(1);
   Data__1195->GetXaxis()->SetTitleFont(42);
   Data__1195->GetYaxis()->SetLabelFont(42);
   Data__1195->GetYaxis()->SetTitleFont(42);
   Data__1195->GetZaxis()->SetLabelFont(42);
   Data__1195->GetZaxis()->SetTitleOffset(1);
   Data__1195->GetZaxis()->SetTitleFont(42);
   Data__1195->Draw("EP same");
   
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

   ci = 1392;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1392;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1196 = new TH1F("hframe_copy__1196","",1000,7,16);
   hframe_copy__1196->SetMinimum(0.01);
   hframe_copy__1196->SetMaximum(36904);
   hframe_copy__1196->SetDirectory(0);
   hframe_copy__1196->SetStats(0);
   hframe_copy__1196->SetLineStyle(0);
   hframe_copy__1196->SetMarkerStyle(20);
   hframe_copy__1196->GetXaxis()->SetNdivisions(8);
   hframe_copy__1196->GetXaxis()->SetLabelFont(43);
   hframe_copy__1196->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1196->GetXaxis()->SetLabelSize(0);
   hframe_copy__1196->GetXaxis()->SetTitleSize(0);
   hframe_copy__1196->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1196->GetXaxis()->SetTitleFont(43);
   hframe_copy__1196->GetYaxis()->SetTitle("< Events / 1-2  >");
   hframe_copy__1196->GetYaxis()->SetLabelFont(43);
   hframe_copy__1196->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1196->GetYaxis()->SetLabelSize(27);
   hframe_copy__1196->GetYaxis()->SetTitleSize(33);
   hframe_copy__1196->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1196->GetYaxis()->SetTitleFont(43);
   hframe_copy__1196->GetZaxis()->SetLabelFont(43);
   hframe_copy__1196->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1196->GetZaxis()->SetLabelSize(27);
   hframe_copy__1196->GetZaxis()->SetTitleSize(33);
   hframe_copy__1196->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1196->GetZaxis()->SetTitleFont(43);
   hframe_copy__1196->Draw("sameaxis");
   
   TH1F *hframe_copy__1197 = new TH1F("hframe_copy__1197","",1000,7,16);
   hframe_copy__1197->SetMinimum(0.01);
   hframe_copy__1197->SetMaximum(36904);
   hframe_copy__1197->SetDirectory(0);
   hframe_copy__1197->SetStats(0);
   hframe_copy__1197->SetLineStyle(0);
   hframe_copy__1197->SetMarkerStyle(20);
   hframe_copy__1197->GetXaxis()->SetNdivisions(8);
   hframe_copy__1197->GetXaxis()->SetLabelFont(43);
   hframe_copy__1197->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1197->GetXaxis()->SetLabelSize(0);
   hframe_copy__1197->GetXaxis()->SetTitleSize(0);
   hframe_copy__1197->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1197->GetXaxis()->SetTitleFont(43);
   hframe_copy__1197->GetYaxis()->SetTitle("< Events / 1-2  >");
   hframe_copy__1197->GetYaxis()->SetLabelFont(43);
   hframe_copy__1197->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1197->GetYaxis()->SetLabelSize(27);
   hframe_copy__1197->GetYaxis()->SetTitleSize(33);
   hframe_copy__1197->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1197->GetYaxis()->SetTitleFont(43);
   hframe_copy__1197->GetZaxis()->SetLabelFont(43);
   hframe_copy__1197->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1197->GetZaxis()->SetLabelSize(27);
   hframe_copy__1197->GetZaxis()->SetTitleSize(33);
   hframe_copy__1197->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1197->GetZaxis()->SetTitleFont(43);
   hframe_copy__1197->Draw("sameaxis");
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
   Jet_N_1->Modified();
   Jet_N->cd();
   Jet_N->Modified();
   Jet_N->cd();
   Jet_N->SetSelected(Jet_N);
}
