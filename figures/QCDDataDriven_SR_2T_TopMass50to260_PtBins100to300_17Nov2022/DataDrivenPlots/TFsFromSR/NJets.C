void NJets()
{
//=========Macro generated from canvas: NJets/NJets
//=========  (Fri Nov 18 13:31:01 2022) by ROOT version 6.20/02
   TCanvas *NJets = new TCanvas("NJets", "NJets",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   NJets->SetHighLightColor(2);
   NJets->Range(0,0,1,1);
   NJets->SetFillColor(0);
   NJets->SetBorderMode(0);
   NJets->SetBorderSize(2);
   NJets->SetTickx(1);
   NJets->SetTicky(1);
   NJets->SetLeftMargin(0.16);
   NJets->SetRightMargin(0.05);
   NJets->SetTopMargin(0.06);
   NJets->SetBottomMargin(0.13);
   NJets->SetFrameFillStyle(0);
   NJets->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: NJets_2
   TPad *NJets_2 = new TPad("NJets_2", "NJets_2",0,0,1,0.304);
   NJets_2->Draw();
   NJets_2->cd();
   NJets_2->Range(5.379747,-0.428,15.50633,1.7);
   NJets_2->SetFillColor(0);
   NJets_2->SetFillStyle(4000);
   NJets_2->SetBorderMode(0);
   NJets_2->SetBorderSize(2);
   NJets_2->SetTickx(1);
   NJets_2->SetTicky(1);
   NJets_2->SetLeftMargin(0.16);
   NJets_2->SetRightMargin(0.05);
   NJets_2->SetTopMargin(0);
   NJets_2->SetBottomMargin(0.3421053);
   NJets_2->SetFrameFillStyle(0);
   NJets_2->SetFrameBorderMode(0);
   NJets_2->SetFrameFillStyle(0);
   NJets_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1170 = new TH1F("hframe__1170","",1000,7,15);
   hframe__1170->SetMinimum(0.3);
   hframe__1170->SetMaximum(1.7);
   hframe__1170->SetDirectory(0);
   hframe__1170->SetStats(0);
   hframe__1170->SetLineStyle(0);
   hframe__1170->SetMarkerStyle(20);
   hframe__1170->GetXaxis()->SetNdivisions(8);
   hframe__1170->GetXaxis()->SetLabelFont(43);
   hframe__1170->GetXaxis()->SetLabelOffset(0.007);
   hframe__1170->GetXaxis()->SetLabelSize(27);
   hframe__1170->GetXaxis()->SetTitleSize(33);
   hframe__1170->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1170->GetXaxis()->SetTitleFont(43);
   hframe__1170->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1170->GetYaxis()->SetNdivisions(505);
   hframe__1170->GetYaxis()->SetLabelFont(43);
   hframe__1170->GetYaxis()->SetLabelOffset(0.007);
   hframe__1170->GetYaxis()->SetLabelSize(21);
   hframe__1170->GetYaxis()->SetTitleSize(33);
   hframe__1170->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1170->GetYaxis()->SetTitleFont(43);
   hframe__1170->GetZaxis()->SetLabelFont(43);
   hframe__1170->GetZaxis()->SetLabelOffset(0.007);
   hframe__1170->GetZaxis()->SetLabelSize(27);
   hframe__1170->GetZaxis()->SetTitleSize(33);
   hframe__1170->GetZaxis()->SetTitleOffset(1);
   hframe__1170->GetZaxis()->SetTitleFont(43);
   hframe__1170->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3711[1] = {
   11};
   Double_t BackgroundStatSystError_fy3711[1] = {
   1};
   Double_t BackgroundStatSystError_felx3711[1] = {
   4};
   Double_t BackgroundStatSystError_fely3711[1] = {
   0.007155399};
   Double_t BackgroundStatSystError_fehx3711[1] = {
   4};
   Double_t BackgroundStatSystError_fehy3711[1] = {
   0.007155399};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,BackgroundStatSystError_fx3711,BackgroundStatSystError_fy3711,BackgroundStatSystError_felx3711,BackgroundStatSystError_fehx3711,BackgroundStatSystError_fely3711,BackgroundStatSystError_fehy3711);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1391;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError370337073711 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError370337073711","Graph",100,6.2,15.8);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->SetMinimum(0.9914135);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->SetMaximum(1.008586);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError370337073711->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError370337073711);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3712[1] = {
   11};
   Double_t BackgroundStatError_fy3712[1] = {
   1};
   Double_t BackgroundStatError_felx3712[1] = {
   4};
   Double_t BackgroundStatError_fely3712[1] = {
   0.007155399};
   Double_t BackgroundStatError_fehx3712[1] = {
   4};
   Double_t BackgroundStatError_fehy3712[1] = {
   0.007155399};
   grae = new TGraphAsymmErrors(1,BackgroundStatError_fx3712,BackgroundStatError_fy3712,BackgroundStatError_felx3712,BackgroundStatError_fehx3712,BackgroundStatError_fely3712,BackgroundStatError_fehy3712);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1390;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError370437083712 = new TH1F("Graph_Graph_Graph_BackgroundStatError370437083712","Graph",100,6.2,15.8);
   Graph_Graph_Graph_BackgroundStatError370437083712->SetMinimum(0.9914135);
   Graph_Graph_Graph_BackgroundStatError370437083712->SetMaximum(1.008586);
   Graph_Graph_Graph_BackgroundStatError370437083712->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError370437083712->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError370437083712->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError370437083712->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError370437083712->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError370437083712->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError370437083712);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx168[2] = {
   7,
   15};
   Double_t Graph0_fy168[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx168,Graph0_fy168);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0166167168 = new TH1F("Graph_Graph_Graph_Graph0166167168","Graph",100,6.2,15.8);
   Graph_Graph_Graph_Graph0166167168->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0166167168->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0166167168->SetDirectory(0);
   Graph_Graph_Graph_Graph0166167168->SetStats(0);
   Graph_Graph_Graph_Graph0166167168->SetLineStyle(0);
   Graph_Graph_Graph_Graph0166167168->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0166167168->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0166167168->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0166167168->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0166167168->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0166167168->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0166167168->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0166167168->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0166167168->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0166167168->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0166167168->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0166167168->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0166167168->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0166167168->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0166167168->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0166167168->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0166167168->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0166167168->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0166167168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0166167168->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0166167168);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3713[1] = {
   11};
   Double_t Graph1_fy3713[1] = {
   1.010531};
   Double_t Graph1_felx3713[1] = {
   4};
   Double_t Graph1_fely3713[1] = {
   0.008127271};
   Double_t Graph1_fehx3713[1] = {
   4};
   Double_t Graph1_fehy3713[1] = {
   0.008127271};
   grae = new TGraphAsymmErrors(1,Graph1_fx3713,Graph1_fy3713,Graph1_felx3713,Graph1_fehx3713,Graph1_fely3713,Graph1_fehy3713);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1370537093713 = new TH1F("Graph_Graph_Graph_Graph1370537093713","Graph",100,6.2,15.8);
   Graph_Graph_Graph_Graph1370537093713->SetMinimum(1.000778);
   Graph_Graph_Graph_Graph1370537093713->SetMaximum(1.020283);
   Graph_Graph_Graph_Graph1370537093713->SetDirectory(0);
   Graph_Graph_Graph_Graph1370537093713->SetStats(0);
   Graph_Graph_Graph_Graph1370537093713->SetLineStyle(0);
   Graph_Graph_Graph_Graph1370537093713->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1370537093713->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1370537093713->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1370537093713->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1370537093713->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1370537093713->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1370537093713->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1370537093713->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1370537093713->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1370537093713->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1370537093713->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1370537093713->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1370537093713->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1370537093713->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1370537093713->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1370537093713->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1370537093713->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1370537093713->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1370537093713->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1370537093713->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1370537093713->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1370537093713);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1171 = new TH1F("hframe_copy__1171","",1000,7,15);
   hframe_copy__1171->SetMinimum(0.3);
   hframe_copy__1171->SetMaximum(1.7);
   hframe_copy__1171->SetDirectory(0);
   hframe_copy__1171->SetStats(0);
   hframe_copy__1171->SetLineStyle(0);
   hframe_copy__1171->SetMarkerStyle(20);
   hframe_copy__1171->GetXaxis()->SetNdivisions(8);
   hframe_copy__1171->GetXaxis()->SetLabelFont(43);
   hframe_copy__1171->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1171->GetXaxis()->SetLabelSize(27);
   hframe_copy__1171->GetXaxis()->SetTitleSize(33);
   hframe_copy__1171->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1171->GetXaxis()->SetTitleFont(43);
   hframe_copy__1171->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1171->GetYaxis()->SetNdivisions(505);
   hframe_copy__1171->GetYaxis()->SetLabelFont(43);
   hframe_copy__1171->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1171->GetYaxis()->SetLabelSize(21);
   hframe_copy__1171->GetYaxis()->SetTitleSize(33);
   hframe_copy__1171->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1171->GetYaxis()->SetTitleFont(43);
   hframe_copy__1171->GetZaxis()->SetLabelFont(43);
   hframe_copy__1171->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1171->GetZaxis()->SetLabelSize(27);
   hframe_copy__1171->GetZaxis()->SetTitleSize(33);
   hframe_copy__1171->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1171->GetZaxis()->SetTitleFont(43);
   hframe_copy__1171->Draw("sameaxis");
   NJets_2->Modified();
   NJets->cd();
  
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
   NJets->cd();
  
// ------------>Primitives in pad: NJets_1
   TPad *NJets_1 = new TPad("NJets_1", "NJets_1",0,0.2897959,1,1);
   NJets_1->Draw();
   NJets_1->cd();
   NJets_1->Range(5.379747,-1.230197,15.50633,5.43417);
   NJets_1->SetFillColor(0);
   NJets_1->SetFillStyle(4000);
   NJets_1->SetBorderMode(0);
   NJets_1->SetBorderSize(2);
   NJets_1->SetLogy();
   NJets_1->SetTickx(1);
   NJets_1->SetTicky(1);
   NJets_1->SetLeftMargin(0.16);
   NJets_1->SetRightMargin(0.05);
   NJets_1->SetTopMargin(0.06);
   NJets_1->SetBottomMargin(0.02);
   NJets_1->SetFrameFillStyle(0);
   NJets_1->SetFrameBorderMode(0);
   NJets_1->SetFrameFillStyle(0);
   NJets_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1172 = new TH1F("hframe__1172","",1000,7,15);
   hframe__1172->SetMinimum(0.08);
   hframe__1172->SetMaximum(108220);
   hframe__1172->SetDirectory(0);
   hframe__1172->SetStats(0);
   hframe__1172->SetLineStyle(0);
   hframe__1172->SetMarkerStyle(20);
   hframe__1172->GetXaxis()->SetNdivisions(8);
   hframe__1172->GetXaxis()->SetLabelFont(43);
   hframe__1172->GetXaxis()->SetLabelOffset(0.007);
   hframe__1172->GetXaxis()->SetLabelSize(0);
   hframe__1172->GetXaxis()->SetTitleSize(0);
   hframe__1172->GetXaxis()->SetTitleOffset(0.9);
   hframe__1172->GetXaxis()->SetTitleFont(43);
   hframe__1172->GetYaxis()->SetTitle("Events / 8");
   hframe__1172->GetYaxis()->SetLabelFont(43);
   hframe__1172->GetYaxis()->SetLabelOffset(0.007);
   hframe__1172->GetYaxis()->SetLabelSize(27);
   hframe__1172->GetYaxis()->SetTitleSize(33);
   hframe__1172->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1172->GetYaxis()->SetTitleFont(43);
   hframe__1172->GetZaxis()->SetLabelFont(43);
   hframe__1172->GetZaxis()->SetLabelOffset(0.007);
   hframe__1172->GetZaxis()->SetLabelSize(27);
   hframe__1172->GetZaxis()->SetTitleSize(33);
   hframe__1172->GetZaxis()->SetTitleOffset(1);
   hframe__1172->GetZaxis()->SetTitleFont(43);
   hframe__1172->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis589[2] = {7, 15}; 
   
   TH1F *StackedMCstackHist_stack_166_stack_167_stack_168 = new TH1F("StackedMCstackHist_stack_166_stack_167_stack_168","StackedMCstackHist",1, xAxis589);
   StackedMCstackHist_stack_166_stack_167_stack_168->SetMinimum(303.794);
   StackedMCstackHist_stack_166_stack_167_stack_168->SetMaximum(19777.14);
   StackedMCstackHist_stack_166_stack_167_stack_168->SetDirectory(0);
   StackedMCstackHist_stack_166_stack_167_stack_168->SetStats(0);
   StackedMCstackHist_stack_166_stack_167_stack_168->SetLineStyle(0);
   StackedMCstackHist_stack_166_stack_167_stack_168->SetMarkerStyle(20);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_166_stack_167_stack_168->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_166_stack_167_stack_168);
   
   Double_t xAxis590[2] = {7, 15}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_NJetsInclusive",1, xAxis590);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,593.9271);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,9.362532);
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
   Double_t xAxis591[2] = {7, 15}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_NJetsInclusive",1, xAxis591);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,7683.571);
   TT_stack_2_stack_2_stack_2->SetBinError(1,21.8084);
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
   Double_t xAxis592[2] = {7, 15}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_NJetsInclusive",1, xAxis592);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,7021.395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,106.866);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4622.14);
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
   Double_t xAxis593[2] = {7, 15}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1173 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1173","h_SR_NJetsInclusive",1, xAxis593);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetBinContent(1,603.9255);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetBinError(1,7.548698);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetEntries(120993);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->GetXaxis()->SetRange(1,18);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1173->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3714[1] = {
   11};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3714[1] = {
   15298.89};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3714[1] = {
   4};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3714[1] = {
   109.4697};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3714[1] = {
   4};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3714[1] = {
   109.4697};
   grae = new TGraphAsymmErrors(1,BkgSum-SR-Inclusive_sum_errors_fx3714,BkgSum-SR-Inclusive_sum_errors_fy3714,BkgSum-SR-Inclusive_sum_errors_felx3714,BkgSum-SR-Inclusive_sum_errors_fehx3714,BkgSum-SR-Inclusive_sum_errors_fely3714,BkgSum-SR-Inclusive_sum_errors_fehy3714);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1389;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714","Graph",100,6.2,15.8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->SetMinimum(15167.53);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->SetMaximum(15430.26);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors370637103714->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors370637103714);
   
   grae->Draw("e2 ");
   Double_t xAxis594[2] = {7, 15}; 
   
   TH1F *Data__1174 = new TH1F("Data__1174","h_SR_NJetsInclusive",1, xAxis594);
   Data__1174->SetBinContent(1,15460);
   Data__1174->SetBinError(1,124.3382);
   Data__1174->SetEntries(15464);
   Data__1174->SetDirectory(0);
   Data__1174->SetFillStyle(3001);
   Data__1174->SetLineWidth(2);
   Data__1174->SetMarkerStyle(20);
   Data__1174->SetMarkerSize(1.2);
   Data__1174->GetXaxis()->SetRange(1,18);
   Data__1174->GetXaxis()->SetLabelFont(42);
   Data__1174->GetXaxis()->SetTitleOffset(1);
   Data__1174->GetXaxis()->SetTitleFont(42);
   Data__1174->GetYaxis()->SetLabelFont(42);
   Data__1174->GetYaxis()->SetTitleFont(42);
   Data__1174->GetZaxis()->SetLabelFont(42);
   Data__1174->GetZaxis()->SetTitleOffset(1);
   Data__1174->GetZaxis()->SetTitleFont(42);
   Data__1174->Draw("EP same");
   
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

   ci = 1389;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1389;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1175 = new TH1F("hframe_copy__1175","",1000,7,15);
   hframe_copy__1175->SetMinimum(0.08);
   hframe_copy__1175->SetMaximum(108220);
   hframe_copy__1175->SetDirectory(0);
   hframe_copy__1175->SetStats(0);
   hframe_copy__1175->SetLineStyle(0);
   hframe_copy__1175->SetMarkerStyle(20);
   hframe_copy__1175->GetXaxis()->SetNdivisions(8);
   hframe_copy__1175->GetXaxis()->SetLabelFont(43);
   hframe_copy__1175->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1175->GetXaxis()->SetLabelSize(0);
   hframe_copy__1175->GetXaxis()->SetTitleSize(0);
   hframe_copy__1175->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1175->GetXaxis()->SetTitleFont(43);
   hframe_copy__1175->GetYaxis()->SetTitle("Events / 8");
   hframe_copy__1175->GetYaxis()->SetLabelFont(43);
   hframe_copy__1175->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1175->GetYaxis()->SetLabelSize(27);
   hframe_copy__1175->GetYaxis()->SetTitleSize(33);
   hframe_copy__1175->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1175->GetYaxis()->SetTitleFont(43);
   hframe_copy__1175->GetZaxis()->SetLabelFont(43);
   hframe_copy__1175->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1175->GetZaxis()->SetLabelSize(27);
   hframe_copy__1175->GetZaxis()->SetTitleSize(33);
   hframe_copy__1175->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1175->GetZaxis()->SetTitleFont(43);
   hframe_copy__1175->Draw("sameaxis");
   
   TH1F *hframe_copy__1176 = new TH1F("hframe_copy__1176","",1000,7,15);
   hframe_copy__1176->SetMinimum(0.08);
   hframe_copy__1176->SetMaximum(108220);
   hframe_copy__1176->SetDirectory(0);
   hframe_copy__1176->SetStats(0);
   hframe_copy__1176->SetLineStyle(0);
   hframe_copy__1176->SetMarkerStyle(20);
   hframe_copy__1176->GetXaxis()->SetNdivisions(8);
   hframe_copy__1176->GetXaxis()->SetLabelFont(43);
   hframe_copy__1176->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1176->GetXaxis()->SetLabelSize(0);
   hframe_copy__1176->GetXaxis()->SetTitleSize(0);
   hframe_copy__1176->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1176->GetXaxis()->SetTitleFont(43);
   hframe_copy__1176->GetYaxis()->SetTitle("Events / 8");
   hframe_copy__1176->GetYaxis()->SetLabelFont(43);
   hframe_copy__1176->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1176->GetYaxis()->SetLabelSize(27);
   hframe_copy__1176->GetYaxis()->SetTitleSize(33);
   hframe_copy__1176->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1176->GetYaxis()->SetTitleFont(43);
   hframe_copy__1176->GetZaxis()->SetLabelFont(43);
   hframe_copy__1176->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1176->GetZaxis()->SetLabelSize(27);
   hframe_copy__1176->GetZaxis()->SetTitleSize(33);
   hframe_copy__1176->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1176->GetZaxis()->SetTitleFont(43);
   hframe_copy__1176->Draw("sameaxis");
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
   NJets_1->Modified();
   NJets->cd();
   NJets->Modified();
   NJets->cd();
   NJets->SetSelected(NJets);
}
