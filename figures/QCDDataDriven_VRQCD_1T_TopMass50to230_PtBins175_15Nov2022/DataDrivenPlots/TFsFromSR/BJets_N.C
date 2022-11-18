void BJets_N()
{
//=========Macro generated from canvas: BJets_N/BJets_N
//=========  (Thu Nov 17 21:21:46 2022) by ROOT version 6.20/02
   TCanvas *BJets_N = new TCanvas("BJets_N", "BJets_N",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   BJets_N->SetHighLightColor(2);
   BJets_N->Range(0,0,1,1);
   BJets_N->SetFillColor(0);
   BJets_N->SetBorderMode(0);
   BJets_N->SetBorderSize(2);
   BJets_N->SetTickx(1);
   BJets_N->SetTicky(1);
   BJets_N->SetLeftMargin(0.16);
   BJets_N->SetRightMargin(0.05);
   BJets_N->SetTopMargin(0.06);
   BJets_N->SetBottomMargin(0.13);
   BJets_N->SetFrameFillStyle(0);
   BJets_N->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: BJets_N_2
   TPad *BJets_N_2 = new TPad("BJets_N_2", "BJets_N_2",0,0,1,0.304);
   BJets_N_2->Draw();
   BJets_N_2->cd();
   BJets_N_2->Range(-3.645569,-0.428,19.13924,1.7);
   BJets_N_2->SetFillColor(0);
   BJets_N_2->SetFillStyle(4000);
   BJets_N_2->SetBorderMode(0);
   BJets_N_2->SetBorderSize(2);
   BJets_N_2->SetTickx(1);
   BJets_N_2->SetTicky(1);
   BJets_N_2->SetLeftMargin(0.16);
   BJets_N_2->SetRightMargin(0.05);
   BJets_N_2->SetTopMargin(0);
   BJets_N_2->SetBottomMargin(0.3421053);
   BJets_N_2->SetFrameFillStyle(0);
   BJets_N_2->SetFrameBorderMode(0);
   BJets_N_2->SetFrameFillStyle(0);
   BJets_N_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1464 = new TH1F("hframe__1464","",1000,0,18);
   hframe__1464->SetMinimum(0.3);
   hframe__1464->SetMaximum(1.7);
   hframe__1464->SetDirectory(0);
   hframe__1464->SetStats(0);
   hframe__1464->SetLineStyle(0);
   hframe__1464->SetMarkerStyle(20);
   hframe__1464->GetXaxis()->SetNdivisions(8);
   hframe__1464->GetXaxis()->SetLabelFont(43);
   hframe__1464->GetXaxis()->SetLabelOffset(0.007);
   hframe__1464->GetXaxis()->SetLabelSize(27);
   hframe__1464->GetXaxis()->SetTitleSize(33);
   hframe__1464->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1464->GetXaxis()->SetTitleFont(43);
   hframe__1464->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1464->GetYaxis()->SetNdivisions(505);
   hframe__1464->GetYaxis()->SetLabelFont(43);
   hframe__1464->GetYaxis()->SetLabelOffset(0.007);
   hframe__1464->GetYaxis()->SetLabelSize(21);
   hframe__1464->GetYaxis()->SetTitleSize(33);
   hframe__1464->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1464->GetYaxis()->SetTitleFont(43);
   hframe__1464->GetZaxis()->SetLabelFont(43);
   hframe__1464->GetZaxis()->SetLabelOffset(0.007);
   hframe__1464->GetZaxis()->SetLabelSize(27);
   hframe__1464->GetZaxis()->SetTitleSize(33);
   hframe__1464->GetZaxis()->SetTitleOffset(1);
   hframe__1464->GetZaxis()->SetTitleFont(43);
   hframe__1464->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3897[1] = {
   2.5};
   Double_t BackgroundStatSystError_fy3897[1] = {
   1};
   Double_t BackgroundStatSystError_felx3897[1] = {
   0.5};
   Double_t BackgroundStatSystError_fely3897[1] = {
   0.01470432};
   Double_t BackgroundStatSystError_fehx3897[1] = {
   0.5};
   Double_t BackgroundStatSystError_fehy3897[1] = {
   0.01470432};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,BackgroundStatSystError_fx3897,BackgroundStatSystError_fy3897,BackgroundStatSystError_felx3897,BackgroundStatSystError_fehx3897,BackgroundStatSystError_fely3897,BackgroundStatSystError_fehy3897);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1439;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError388938933897 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError388938933897","Graph",100,1.9,3.1);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->SetMinimum(0.9823548);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->SetMaximum(1.017645);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError388938933897->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError388938933897);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3898[18] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5};
   Double_t BackgroundStatError_fy3898[18] = {
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
   Double_t BackgroundStatError_felx3898[18] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BackgroundStatError_fely3898[18] = {
   0,
   0,
   0.01470432,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BackgroundStatError_fehx3898[18] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BackgroundStatError_fehy3898[18] = {
   0,
   0,
   0.01470432,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3898,BackgroundStatError_fy3898,BackgroundStatError_felx3898,BackgroundStatError_fehx3898,BackgroundStatError_fely3898,BackgroundStatError_fehy3898);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1438;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError389038943898 = new TH1F("Graph_Graph_Graph_BackgroundStatError389038943898","Graph",100,0,19.8);
   Graph_Graph_Graph_BackgroundStatError389038943898->SetMinimum(0.9823548);
   Graph_Graph_Graph_BackgroundStatError389038943898->SetMaximum(1.017645);
   Graph_Graph_Graph_BackgroundStatError389038943898->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError389038943898->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError389038943898->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError389038943898->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError389038943898->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError389038943898->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError389038943898);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx210[2] = {
   0,
   18};
   Double_t Graph0_fy210[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx210,Graph0_fy210);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0208209210 = new TH1F("Graph_Graph_Graph_Graph0208209210","Graph",100,0,19.8);
   Graph_Graph_Graph_Graph0208209210->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0208209210->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0208209210->SetDirectory(0);
   Graph_Graph_Graph_Graph0208209210->SetStats(0);
   Graph_Graph_Graph_Graph0208209210->SetLineStyle(0);
   Graph_Graph_Graph_Graph0208209210->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0208209210->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0208209210->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0208209210->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0208209210->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0208209210->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0208209210->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0208209210->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0208209210->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0208209210->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0208209210->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0208209210->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0208209210->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0208209210->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0208209210->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0208209210->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0208209210->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0208209210->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0208209210->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0208209210->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0208209210);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3899[1] = {
   2.5};
   Double_t Graph1_fy3899[1] = {
   1.016473};
   Double_t Graph1_felx3899[1] = {
   0.5};
   Double_t Graph1_fely3899[1] = {
   0.01091028};
   Double_t Graph1_fehx3899[1] = {
   0.5};
   Double_t Graph1_fehy3899[1] = {
   0.01091028};
   grae = new TGraphAsymmErrors(1,Graph1_fx3899,Graph1_fy3899,Graph1_felx3899,Graph1_fehx3899,Graph1_fely3899,Graph1_fehy3899);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1389138953899 = new TH1F("Graph_Graph_Graph_Graph1389138953899","Graph",100,1.9,3.1);
   Graph_Graph_Graph_Graph1389138953899->SetMinimum(1.00338);
   Graph_Graph_Graph_Graph1389138953899->SetMaximum(1.029565);
   Graph_Graph_Graph_Graph1389138953899->SetDirectory(0);
   Graph_Graph_Graph_Graph1389138953899->SetStats(0);
   Graph_Graph_Graph_Graph1389138953899->SetLineStyle(0);
   Graph_Graph_Graph_Graph1389138953899->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1389138953899->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1389138953899->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1389138953899->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1389138953899->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1389138953899->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1389138953899->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1389138953899->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1389138953899->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1389138953899->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1389138953899->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1389138953899->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1389138953899->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1389138953899->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1389138953899->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1389138953899->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1389138953899->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1389138953899->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1389138953899->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1389138953899->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1389138953899->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1389138953899);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1465 = new TH1F("hframe_copy__1465","",1000,0,18);
   hframe_copy__1465->SetMinimum(0.3);
   hframe_copy__1465->SetMaximum(1.7);
   hframe_copy__1465->SetDirectory(0);
   hframe_copy__1465->SetStats(0);
   hframe_copy__1465->SetLineStyle(0);
   hframe_copy__1465->SetMarkerStyle(20);
   hframe_copy__1465->GetXaxis()->SetNdivisions(8);
   hframe_copy__1465->GetXaxis()->SetLabelFont(43);
   hframe_copy__1465->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1465->GetXaxis()->SetLabelSize(27);
   hframe_copy__1465->GetXaxis()->SetTitleSize(33);
   hframe_copy__1465->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1465->GetXaxis()->SetTitleFont(43);
   hframe_copy__1465->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1465->GetYaxis()->SetNdivisions(505);
   hframe_copy__1465->GetYaxis()->SetLabelFont(43);
   hframe_copy__1465->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1465->GetYaxis()->SetLabelSize(21);
   hframe_copy__1465->GetYaxis()->SetTitleSize(33);
   hframe_copy__1465->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1465->GetYaxis()->SetTitleFont(43);
   hframe_copy__1465->GetZaxis()->SetLabelFont(43);
   hframe_copy__1465->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1465->GetZaxis()->SetLabelSize(27);
   hframe_copy__1465->GetZaxis()->SetTitleSize(33);
   hframe_copy__1465->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1465->GetZaxis()->SetTitleFont(43);
   hframe_copy__1465->Draw("sameaxis");
   BJets_N_2->Modified();
   BJets_N->cd();
  
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
   BJets_N->cd();
  
// ------------>Primitives in pad: BJets_N_1
   TPad *BJets_N_1 = new TPad("BJets_N_1", "BJets_N_1",0,0.2897959,1,1);
   BJets_N_1->Draw();
   BJets_N_1->cd();
   BJets_N_1->Range(-3.645569,-1.224748,19.13924,5.16713);
   BJets_N_1->SetFillColor(0);
   BJets_N_1->SetFillStyle(4000);
   BJets_N_1->SetBorderMode(0);
   BJets_N_1->SetBorderSize(2);
   BJets_N_1->SetLogy();
   BJets_N_1->SetTickx(1);
   BJets_N_1->SetTicky(1);
   BJets_N_1->SetLeftMargin(0.16);
   BJets_N_1->SetRightMargin(0.05);
   BJets_N_1->SetTopMargin(0.06);
   BJets_N_1->SetBottomMargin(0.02);
   BJets_N_1->SetFrameFillStyle(0);
   BJets_N_1->SetFrameBorderMode(0);
   BJets_N_1->SetFrameFillStyle(0);
   BJets_N_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1466 = new TH1F("hframe__1466","",1000,0,18);
   hframe__1466->SetMinimum(0.08);
   hframe__1466->SetMaximum(60760);
   hframe__1466->SetDirectory(0);
   hframe__1466->SetStats(0);
   hframe__1466->SetLineStyle(0);
   hframe__1466->SetMarkerStyle(20);
   hframe__1466->GetXaxis()->SetNdivisions(8);
   hframe__1466->GetXaxis()->SetLabelFont(43);
   hframe__1466->GetXaxis()->SetLabelOffset(0.007);
   hframe__1466->GetXaxis()->SetLabelSize(0);
   hframe__1466->GetXaxis()->SetTitleSize(0);
   hframe__1466->GetXaxis()->SetTitleOffset(0.9);
   hframe__1466->GetXaxis()->SetTitleFont(43);
   hframe__1466->GetYaxis()->SetTitle("Events / 1");
   hframe__1466->GetYaxis()->SetLabelFont(43);
   hframe__1466->GetYaxis()->SetLabelOffset(0.007);
   hframe__1466->GetYaxis()->SetLabelSize(27);
   hframe__1466->GetYaxis()->SetTitleSize(33);
   hframe__1466->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1466->GetYaxis()->SetTitleFont(43);
   hframe__1466->GetZaxis()->SetLabelFont(43);
   hframe__1466->GetZaxis()->SetLabelOffset(0.007);
   hframe__1466->GetZaxis()->SetLabelSize(27);
   hframe__1466->GetZaxis()->SetTitleSize(33);
   hframe__1466->GetZaxis()->SetTitleOffset(1);
   hframe__1466->GetZaxis()->SetTitleFont(43);
   hframe__1466->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_208_stack_209_stack_210 = new TH1F("StackedMCstackHist_stack_208_stack_209_stack_210","StackedMCstackHist",18,0,18);
   StackedMCstackHist_stack_208_stack_209_stack_210->SetMinimum(3.415734);
   StackedMCstackHist_stack_208_stack_209_stack_210->SetMaximum(13662.93);
   StackedMCstackHist_stack_208_stack_209_stack_210->SetDirectory(0);
   StackedMCstackHist_stack_208_stack_209_stack_210->SetStats(0);
   StackedMCstackHist_stack_208_stack_209_stack_210->SetLineStyle(0);
   StackedMCstackHist_stack_208_stack_209_stack_210->SetMarkerStyle(20);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_208_stack_209_stack_210->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_208_stack_209_stack_210);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_BJets_NInclusive",18,0,18);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,114.2639);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,5.964236);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_BJets_NInclusive",18,0,18);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1366.367);
   TT_stack_2_stack_2_stack_2->SetBinError(3,9.158677);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_BJets_NInclusive",18,0,18);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,7058.704);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,125.0885);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3207.877);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1467 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1467","h_SR_BJets_NInclusive",18,0,18);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetBinContent(3,5.953856);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetBinError(3,0.9225406);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetEntries(1103);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->GetXaxis()->SetRange(1,18);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1467->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3900[18] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3900[18] = {
   0,
   0,
   8539.334,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3900[18] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3900[18] = {
   0,
   0,
   125.5651,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3900[18] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3900[18] = {
   0,
   0,
   125.5651,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3900,BkgSum-SR-Inclusive_sum_errors_fy3900,BkgSum-SR-Inclusive_sum_errors_felx3900,BkgSum-SR-Inclusive_sum_errors_fehx3900,BkgSum-SR-Inclusive_sum_errors_fely3900,BkgSum-SR-Inclusive_sum_errors_fehy3900);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1437;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900","Graph",100,0,19.8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->SetMinimum(9.531389);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->SetMaximum(9531.389);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors389238963900->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors389238963900);
   
   grae->Draw("e2 ");
   
   TH1F *Data__1468 = new TH1F("Data__1468","h_SR_BJets_NInclusive",18,0,18);
   Data__1468->SetBinContent(3,8680);
   Data__1468->SetBinError(3,93.16652);
   Data__1468->SetEntries(8684);
   Data__1468->SetDirectory(0);
   Data__1468->SetFillStyle(3001);
   Data__1468->SetLineWidth(2);
   Data__1468->SetMarkerStyle(20);
   Data__1468->SetMarkerSize(1.2);
   Data__1468->GetXaxis()->SetRange(1,18);
   Data__1468->GetXaxis()->SetLabelFont(42);
   Data__1468->GetXaxis()->SetTitleOffset(1);
   Data__1468->GetXaxis()->SetTitleFont(42);
   Data__1468->GetYaxis()->SetLabelFont(42);
   Data__1468->GetYaxis()->SetTitleFont(42);
   Data__1468->GetZaxis()->SetLabelFont(42);
   Data__1468->GetZaxis()->SetTitleOffset(1);
   Data__1468->GetZaxis()->SetTitleFont(42);
   Data__1468->Draw("EP same");
   
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

   ci = 1437;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1437;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1469 = new TH1F("hframe_copy__1469","",1000,0,18);
   hframe_copy__1469->SetMinimum(0.08);
   hframe_copy__1469->SetMaximum(60760);
   hframe_copy__1469->SetDirectory(0);
   hframe_copy__1469->SetStats(0);
   hframe_copy__1469->SetLineStyle(0);
   hframe_copy__1469->SetMarkerStyle(20);
   hframe_copy__1469->GetXaxis()->SetNdivisions(8);
   hframe_copy__1469->GetXaxis()->SetLabelFont(43);
   hframe_copy__1469->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1469->GetXaxis()->SetLabelSize(0);
   hframe_copy__1469->GetXaxis()->SetTitleSize(0);
   hframe_copy__1469->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1469->GetXaxis()->SetTitleFont(43);
   hframe_copy__1469->GetYaxis()->SetTitle("Events / 1");
   hframe_copy__1469->GetYaxis()->SetLabelFont(43);
   hframe_copy__1469->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1469->GetYaxis()->SetLabelSize(27);
   hframe_copy__1469->GetYaxis()->SetTitleSize(33);
   hframe_copy__1469->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1469->GetYaxis()->SetTitleFont(43);
   hframe_copy__1469->GetZaxis()->SetLabelFont(43);
   hframe_copy__1469->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1469->GetZaxis()->SetLabelSize(27);
   hframe_copy__1469->GetZaxis()->SetTitleSize(33);
   hframe_copy__1469->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1469->GetZaxis()->SetTitleFont(43);
   hframe_copy__1469->Draw("sameaxis");
   
   TH1F *hframe_copy__1470 = new TH1F("hframe_copy__1470","",1000,0,18);
   hframe_copy__1470->SetMinimum(0.08);
   hframe_copy__1470->SetMaximum(60760);
   hframe_copy__1470->SetDirectory(0);
   hframe_copy__1470->SetStats(0);
   hframe_copy__1470->SetLineStyle(0);
   hframe_copy__1470->SetMarkerStyle(20);
   hframe_copy__1470->GetXaxis()->SetNdivisions(8);
   hframe_copy__1470->GetXaxis()->SetLabelFont(43);
   hframe_copy__1470->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1470->GetXaxis()->SetLabelSize(0);
   hframe_copy__1470->GetXaxis()->SetTitleSize(0);
   hframe_copy__1470->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1470->GetXaxis()->SetTitleFont(43);
   hframe_copy__1470->GetYaxis()->SetTitle("Events / 1");
   hframe_copy__1470->GetYaxis()->SetLabelFont(43);
   hframe_copy__1470->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1470->GetYaxis()->SetLabelSize(27);
   hframe_copy__1470->GetYaxis()->SetTitleSize(33);
   hframe_copy__1470->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1470->GetYaxis()->SetTitleFont(43);
   hframe_copy__1470->GetZaxis()->SetLabelFont(43);
   hframe_copy__1470->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1470->GetZaxis()->SetLabelSize(27);
   hframe_copy__1470->GetZaxis()->SetTitleSize(33);
   hframe_copy__1470->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1470->GetZaxis()->SetTitleFont(43);
   hframe_copy__1470->Draw("sameaxis");
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
   BJets_N_1->Modified();
   BJets_N->cd();
   BJets_N->Modified();
   BJets_N->cd();
   BJets_N->SetSelected(BJets_N);
}
