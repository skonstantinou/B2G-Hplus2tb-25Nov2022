void MVAOutputM250()
{
//=========Macro generated from canvas: MVAOutputM250/MVAOutputM250
//=========  (Fri Nov 18 13:27:16 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM250 = new TCanvas("MVAOutputM250", "MVAOutputM250",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM250->SetHighLightColor(2);
   MVAOutputM250->Range(0,0,1,1);
   MVAOutputM250->SetFillColor(0);
   MVAOutputM250->SetBorderMode(0);
   MVAOutputM250->SetBorderSize(2);
   MVAOutputM250->SetTickx(1);
   MVAOutputM250->SetTicky(1);
   MVAOutputM250->SetLeftMargin(0.16);
   MVAOutputM250->SetRightMargin(0.05);
   MVAOutputM250->SetTopMargin(0.06);
   MVAOutputM250->SetBottomMargin(0.13);
   MVAOutputM250->SetFrameFillStyle(0);
   MVAOutputM250->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM250_2
   TPad *MVAOutputM250_2 = new TPad("MVAOutputM250_2", "MVAOutputM250_2",0,0,1,0.304);
   MVAOutputM250_2->Draw();
   MVAOutputM250_2->cd();
   MVAOutputM250_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM250_2->SetFillColor(0);
   MVAOutputM250_2->SetFillStyle(4000);
   MVAOutputM250_2->SetBorderMode(0);
   MVAOutputM250_2->SetBorderSize(2);
   MVAOutputM250_2->SetTickx(1);
   MVAOutputM250_2->SetTicky(1);
   MVAOutputM250_2->SetLeftMargin(0.16);
   MVAOutputM250_2->SetRightMargin(0.05);
   MVAOutputM250_2->SetTopMargin(0);
   MVAOutputM250_2->SetBottomMargin(0.3421053);
   MVAOutputM250_2->SetFrameFillStyle(0);
   MVAOutputM250_2->SetFrameBorderMode(0);
   MVAOutputM250_2->SetFrameFillStyle(0);
   MVAOutputM250_2->SetFrameBorderMode(0);
   
   TH1F *hframe__57 = new TH1F("hframe__57","",1000,0,1.01);
   hframe__57->SetMinimum(0.3);
   hframe__57->SetMaximum(1.7);
   hframe__57->SetDirectory(0);
   hframe__57->SetStats(0);
   hframe__57->SetLineStyle(0);
   hframe__57->SetMarkerStyle(20);
   hframe__57->GetXaxis()->SetTitle("DNN Output");
   hframe__57->GetXaxis()->SetLabelFont(43);
   hframe__57->GetXaxis()->SetLabelOffset(0.007);
   hframe__57->GetXaxis()->SetLabelSize(27);
   hframe__57->GetXaxis()->SetTitleSize(33);
   hframe__57->GetXaxis()->SetTitleOffset(2.960526);
   hframe__57->GetXaxis()->SetTitleFont(43);
   hframe__57->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__57->GetYaxis()->SetNdivisions(505);
   hframe__57->GetYaxis()->SetLabelFont(43);
   hframe__57->GetYaxis()->SetLabelOffset(0.007);
   hframe__57->GetYaxis()->SetLabelSize(21);
   hframe__57->GetYaxis()->SetTitleSize(33);
   hframe__57->GetYaxis()->SetTitleOffset(1.5625);
   hframe__57->GetYaxis()->SetTitleFont(43);
   hframe__57->GetZaxis()->SetLabelFont(43);
   hframe__57->GetZaxis()->SetLabelOffset(0.007);
   hframe__57->GetZaxis()->SetLabelSize(27);
   hframe__57->GetZaxis()->SetTitleSize(33);
   hframe__57->GetZaxis()->SetTitleOffset(1);
   hframe__57->GetZaxis()->SetTitleFont(43);
   hframe__57->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3033[18] = {
   0.05,
   0.15,
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
   Double_t BackgroundStatSystError_fy3033[18] = {
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
   Double_t BackgroundStatSystError_felx3033[18] = {
   0.05,
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
   0.025};
   Double_t BackgroundStatSystError_fely3033[18] = {
   0.0690867,
   0.04198452,
   0.04886247,
   0.03974198,
   0.03546549,
   0.02939568,
   0.02644068,
   0.02353202,
   0.02157763,
   0.01989501,
   0.01934892,
   0.02062516,
   0.02527762,
   0.03343044,
   0.05670928,
   0.1322727,
   0.4988895,
   -1.927245};
   Double_t BackgroundStatSystError_fehx3033[18] = {
   0.05,
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
   0.025};
   Double_t BackgroundStatSystError_fehy3033[18] = {
   0.0690867,
   0.04198452,
   0.04886247,
   0.03974198,
   0.03546549,
   0.02939568,
   0.02644068,
   0.02353202,
   0.02157763,
   0.01989501,
   0.01934892,
   0.02062516,
   0.02527762,
   0.03343044,
   0.05670928,
   0.1322727,
   0.4988895,
   -1.927245};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,BackgroundStatSystError_fx3033,BackgroundStatSystError_fy3033,BackgroundStatSystError_felx3033,BackgroundStatSystError_fehx3033,BackgroundStatSystError_fely3033,BackgroundStatSystError_fehy3033);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1218;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError302530293033 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError302530293033","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMinimum(0.4013326);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMaximum(1.598667);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError302530293033);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3034[18] = {
   0.05,
   0.15,
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
   Double_t BackgroundStatError_fy3034[18] = {
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
   Double_t BackgroundStatError_felx3034[18] = {
   0.05,
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
   0.025};
   Double_t BackgroundStatError_fely3034[18] = {
   0.0690867,
   0.04198452,
   0.04886247,
   0.03974198,
   0.03546549,
   0.02939568,
   0.02644068,
   0.02353202,
   0.02157763,
   0.01989501,
   0.01934892,
   0.02062516,
   0.02527762,
   0.03343044,
   0.05670928,
   0.1322727,
   0.4988895,
   -1.927245};
   Double_t BackgroundStatError_fehx3034[18] = {
   0.05,
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
   0.025};
   Double_t BackgroundStatError_fehy3034[18] = {
   0.0690867,
   0.04198452,
   0.04886247,
   0.03974198,
   0.03546549,
   0.02939568,
   0.02644068,
   0.02353202,
   0.02157763,
   0.01989501,
   0.01934892,
   0.02062516,
   0.02527762,
   0.03343044,
   0.05670928,
   0.1322727,
   0.4988895,
   -1.927245};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3034,BackgroundStatError_fy3034,BackgroundStatError_felx3034,BackgroundStatError_fehx3034,BackgroundStatError_fely3034,BackgroundStatError_fehy3034);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1217;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError302630303034 = new TH1F("Graph_Graph_Graph_BackgroundStatError302630303034","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMinimum(0.4013326);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMaximum(1.598667);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError302630303034);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx9[2] = {
   0,
   1.01};
   Double_t Graph0_fy9[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx9,Graph0_fy9);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0789 = new TH1F("Graph_Graph_Graph_Graph0789","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0789->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0789->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0789->SetDirectory(0);
   Graph_Graph_Graph_Graph0789->SetStats(0);
   Graph_Graph_Graph_Graph0789->SetLineStyle(0);
   Graph_Graph_Graph_Graph0789->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0789);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3035[5] = {
   0.05,
   0.15,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3035[5] = {
   1.044794,
   0.8868906,
   0.9879139,
   0.9968683,
   0.09021318};
   Double_t Graph1_felx3035[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3035[5] = {
   0.08109173,
   0.04401564,
   0.053034,
   0.0463284,
   0.01194903};
   Double_t Graph1_fehx3035[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3035[5] = {
   0.08109173,
   0.04401564,
   0.053034,
   0.0463284,
   0.01194903};
   grae = new TGraphAsymmErrors(5,Graph1_fx3035,Graph1_fy3035,Graph1_felx3035,Graph1_fehx3035,Graph1_fely3035,Graph1_fehy3035);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1302730313035 = new TH1F("Graph_Graph_Graph_Graph1302730313035","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1302730313035->SetMinimum(0.07043774);
   Graph_Graph_Graph_Graph1302730313035->SetMaximum(1.230648);
   Graph_Graph_Graph_Graph1302730313035->SetDirectory(0);
   Graph_Graph_Graph_Graph1302730313035->SetStats(0);
   Graph_Graph_Graph_Graph1302730313035->SetLineStyle(0);
   Graph_Graph_Graph_Graph1302730313035->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1302730313035);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__58 = new TH1F("hframe_copy__58","",1000,0,1.01);
   hframe_copy__58->SetMinimum(0.3);
   hframe_copy__58->SetMaximum(1.7);
   hframe_copy__58->SetDirectory(0);
   hframe_copy__58->SetStats(0);
   hframe_copy__58->SetLineStyle(0);
   hframe_copy__58->SetMarkerStyle(20);
   hframe_copy__58->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__58->GetXaxis()->SetLabelFont(43);
   hframe_copy__58->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__58->GetXaxis()->SetLabelSize(27);
   hframe_copy__58->GetXaxis()->SetTitleSize(33);
   hframe_copy__58->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__58->GetXaxis()->SetTitleFont(43);
   hframe_copy__58->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__58->GetYaxis()->SetNdivisions(505);
   hframe_copy__58->GetYaxis()->SetLabelFont(43);
   hframe_copy__58->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__58->GetYaxis()->SetLabelSize(21);
   hframe_copy__58->GetYaxis()->SetTitleSize(33);
   hframe_copy__58->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__58->GetYaxis()->SetTitleFont(43);
   hframe_copy__58->GetZaxis()->SetLabelFont(43);
   hframe_copy__58->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__58->GetZaxis()->SetLabelSize(27);
   hframe_copy__58->GetZaxis()->SetTitleSize(33);
   hframe_copy__58->GetZaxis()->SetTitleOffset(1);
   hframe_copy__58->GetZaxis()->SetTitleFont(43);
   hframe_copy__58->Draw("sameaxis");
   MVAOutputM250_2->Modified();
   MVAOutputM250->cd();
  
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
   MVAOutputM250->cd();
  
// ------------>Primitives in pad: MVAOutputM250_1
   TPad *MVAOutputM250_1 = new TPad("MVAOutputM250_1", "MVAOutputM250_1",0,0.2897959,1,1);
   MVAOutputM250_1->Draw();
   MVAOutputM250_1->cd();
   MVAOutputM250_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM250_1->SetFillColor(0);
   MVAOutputM250_1->SetFillStyle(4000);
   MVAOutputM250_1->SetBorderMode(0);
   MVAOutputM250_1->SetBorderSize(2);
   MVAOutputM250_1->SetLogy();
   MVAOutputM250_1->SetTickx(1);
   MVAOutputM250_1->SetTicky(1);
   MVAOutputM250_1->SetLeftMargin(0.16);
   MVAOutputM250_1->SetRightMargin(0.05);
   MVAOutputM250_1->SetTopMargin(0.06);
   MVAOutputM250_1->SetBottomMargin(0.02);
   MVAOutputM250_1->SetFrameFillStyle(0);
   MVAOutputM250_1->SetFrameBorderMode(0);
   MVAOutputM250_1->SetFrameFillStyle(0);
   MVAOutputM250_1->SetFrameBorderMode(0);
   
   TH1F *hframe__59 = new TH1F("hframe__59","",1000,0,1.01);
   hframe__59->SetMinimum(0.01);
   hframe__59->SetMaximum(500000);
   hframe__59->SetDirectory(0);
   hframe__59->SetStats(0);
   hframe__59->SetLineStyle(0);
   hframe__59->SetMarkerStyle(20);
   hframe__59->GetXaxis()->SetLabelFont(43);
   hframe__59->GetXaxis()->SetLabelOffset(0.007);
   hframe__59->GetXaxis()->SetLabelSize(0);
   hframe__59->GetXaxis()->SetTitleSize(0);
   hframe__59->GetXaxis()->SetTitleOffset(0.9);
   hframe__59->GetXaxis()->SetTitleFont(43);
   hframe__59->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__59->GetYaxis()->SetLabelFont(43);
   hframe__59->GetYaxis()->SetLabelOffset(0.007);
   hframe__59->GetYaxis()->SetLabelSize(27);
   hframe__59->GetYaxis()->SetTitleSize(33);
   hframe__59->GetYaxis()->SetTitleOffset(1.5625);
   hframe__59->GetYaxis()->SetTitleFont(43);
   hframe__59->GetZaxis()->SetLabelFont(43);
   hframe__59->GetZaxis()->SetLabelOffset(0.007);
   hframe__59->GetZaxis()->SetLabelSize(27);
   hframe__59->GetZaxis()->SetTitleSize(33);
   hframe__59->GetZaxis()->SetTitleOffset(1);
   hframe__59->GetZaxis()->SetTitleFont(43);
   hframe__59->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis49[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_7_stack_8_stack_9 = new TH1F("StackedMCstackHist_stack_7_stack_8_stack_9","StackedMCstackHist",18, xAxis49);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMinimum(16.39199);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMaximum(65567.98);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetDirectory(0);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetStats(0);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetLineStyle(0);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMarkerStyle(20);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_7_stack_8_stack_9);
   
   Double_t xAxis50[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM250Inclusive",18, xAxis50);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,83.52279);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,168.9954);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,305.1394);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,372.7981);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,411.0998);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,626.8142);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,897.8727);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1080.277);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1269.481);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1481.186);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1676.377);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1470.398);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,1020.953);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,527.192);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,176.3931);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,52.01377);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,5.507607);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.001205485);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,10.86559);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,16.67639);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,33.81247);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,36.08085);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,35.51898);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,51.7656);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,57.00239);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,58.85183);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,58.40249);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,61.45692);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,68.30214);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,66.58788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,50.90522);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,32.90322);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,17.24636);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,10.66595);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,2.618611);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.003370174);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3990.175);
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
   Double_t xAxis51[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM250Inclusive",18, xAxis51);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,761.0188);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1989.636);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3270.524);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4587.241);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,6130.901);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,8245.636);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,10566.87);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,13603.14);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,16881.91);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,20202.25);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,21491.49);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,19018.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,13483.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,7311.036);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2772.891);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,573.1014);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,31.67947);
   TT_stack_2_stack_2_stack_2->SetBinError(1,21.49486);
   TT_stack_2_stack_2_stack_2->SetBinError(2,34.99313);
   TT_stack_2_stack_2_stack_2->SetBinError(3,63.19868);
   TT_stack_2_stack_2_stack_2->SetBinError(4,74.89801);
   TT_stack_2_stack_2_stack_2->SetBinError(5,87.23227);
   TT_stack_2_stack_2_stack_2->SetBinError(6,100.7385);
   TT_stack_2_stack_2_stack_2->SetBinError(7,114.4821);
   TT_stack_2_stack_2_stack_2->SetBinError(8,129.5772);
   TT_stack_2_stack_2_stack_2->SetBinError(9,144.6586);
   TT_stack_2_stack_2_stack_2->SetBinError(10,158.2623);
   TT_stack_2_stack_2_stack_2->SetBinError(11,162.942);
   TT_stack_2_stack_2_stack_2->SetBinError(12,153.7408);
   TT_stack_2_stack_2_stack_2->SetBinError(13,129.5601);
   TT_stack_2_stack_2_stack_2->SetBinError(14,95.4333);
   TT_stack_2_stack_2_stack_2->SetBinError(15,58.67863);
   TT_stack_2_stack_2_stack_2->SetBinError(16,26.48918);
   TT_stack_2_stack_2_stack_2->SetBinError(17,6.39569);
   TT_stack_2_stack_2_stack_2->SetEntries(122998.1);
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
   Double_t xAxis52[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM250Inclusive",18, xAxis52);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,744.2885);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2419.159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3449.24);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,4329.052);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,6094.734);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9310.855);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,11112);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13337.74);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,15030.96);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,17708.66);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,17812.12);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,15981.75);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,10242.4);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,6867.545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2423.279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,374.8624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,25.82403);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,-0.003690902);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,107.0921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,188.2467);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,335.6874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,359.6841);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,438.1592);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,522.3731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,583.084);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,643.8534);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,698.7945);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,765.096);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,772.9843);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,733.3138);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,609.8524);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,481.145);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,298.4724);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,129.1505);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,30.6665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.003403837);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4255.644);
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
   Double_t xAxis53[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__60 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__60","h_SR_MVAOutputM250Inclusive",18, xAxis53);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(1,66.5731);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(2,193.373);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(3,694.5889);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(4,944.451);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(5,1234.161);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(6,1538.637);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(7,1547.274);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(8,1313.374);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(9,1195.589);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(10,1077.112);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(11,886.1498);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(12,526.8752);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(13,330.2354);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(14,183.5302);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(15,67.65211);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(16,11.94581);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(17,7.065573);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(1,7.748352);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(2,14.78831);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(3,34.05598);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(4,43.07634);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(5,48.97939);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(6,52.29288);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(7,52.33339);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(8,50.40503);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(9,47.94418);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(10,44.83513);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(11,40.23952);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(12,33.31872);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(13,26.27146);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(14,18.06691);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(15,12.16114);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(16,6.443636);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(17,2.377569);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetEntries(6361.496);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3036[18] = {
   0.05,
   0.15,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3036[18] = {
   1588.83,
   4577.791,
   7024.904,
   9289.091,
   12636.73,
   18183.31,
   22576.74,
   28021.16,
   33182.35,
   39392.1,
   40979.99,
   36470.49,
   24746.69,
   14705.77,
   5372.564,
   999.9775,
   63.01112,
   -0.002485417};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3036[18] = {
   0.05,
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
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3036[18] = {
   109.767,
   192.1963,
   343.2541,
   369.1668,
   448.1679,
   534.5106,
   596.9443,
   659.3944,
   715.9963,
   783.7064,
   792.9186,
   752.2096,
   625.5375,
   491.6204,
   304.6742,
   132.2698,
   31.43558,
   0.004790008};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3036[18] = {
   0.05,
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
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3036[18] = {
   109.767,
   192.1963,
   343.2541,
   369.1668,
   448.1679,
   534.5106,
   596.9443,
   659.3944,
   715.9963,
   783.7064,
   792.9186,
   752.2096,
   625.5375,
   491.6204,
   304.6742,
   132.2698,
   31.43558,
   0.004790008};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3036,BkgSum-SR-Inclusive_sum_errors_fy3036,BkgSum-SR-Inclusive_sum_errors_felx3036,BkgSum-SR-Inclusive_sum_errors_fehx3036,BkgSum-SR-Inclusive_sum_errors_fely3036,BkgSum-SR-Inclusive_sum_errors_fehy3036);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1216;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMinimum(45.9502);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMaximum(45950.2);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors302830323036);
   
   grae->Draw("e2 ");
   Double_t xAxis54[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__61 = new TH1F("Data__61","h_SR_MVAOutputM250Inclusive",18, xAxis54);
   Data__61->SetBinContent(1,1660);
   Data__61->SetBinContent(2,4060);
   Data__61->SetBinContent(3,6940);
   Data__61->SetBinContent(4,9260);
   Data__61->SetBinContent(5,1140);
   Data__61->SetBinError(1,128.841);
   Data__61->SetBinError(2,201.4944);
   Data__61->SetBinError(3,372.5587);
   Data__61->SetBinError(4,430.3487);
   Data__61->SetBinError(5,150.9967);
   Data__61->SetEntries(1316.247);
   Data__61->SetDirectory(0);
   Data__61->SetFillStyle(3001);
   Data__61->SetLineWidth(2);
   Data__61->SetMarkerStyle(20);
   Data__61->SetMarkerSize(1.2);
   Data__61->GetXaxis()->SetRange(1,200);
   Data__61->GetXaxis()->SetLabelFont(42);
   Data__61->GetXaxis()->SetTitleOffset(1);
   Data__61->GetXaxis()->SetTitleFont(42);
   Data__61->GetYaxis()->SetLabelFont(42);
   Data__61->GetYaxis()->SetTitleFont(42);
   Data__61->GetZaxis()->SetLabelFont(42);
   Data__61->GetZaxis()->SetTitleOffset(1);
   Data__61->GetZaxis()->SetTitleFont(42);
   Data__61->Draw("EP same");
      tex = new TLatex(0.19,0.885,"Data blinded in");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.19,0.85,"signal region");
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

   ci = 1216;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1216;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__62 = new TH1F("hframe_copy__62","",1000,0,1.01);
   hframe_copy__62->SetMinimum(0.01);
   hframe_copy__62->SetMaximum(500000);
   hframe_copy__62->SetDirectory(0);
   hframe_copy__62->SetStats(0);
   hframe_copy__62->SetLineStyle(0);
   hframe_copy__62->SetMarkerStyle(20);
   hframe_copy__62->GetXaxis()->SetLabelFont(43);
   hframe_copy__62->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__62->GetXaxis()->SetLabelSize(0);
   hframe_copy__62->GetXaxis()->SetTitleSize(0);
   hframe_copy__62->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__62->GetXaxis()->SetTitleFont(43);
   hframe_copy__62->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__62->GetYaxis()->SetLabelFont(43);
   hframe_copy__62->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__62->GetYaxis()->SetLabelSize(27);
   hframe_copy__62->GetYaxis()->SetTitleSize(33);
   hframe_copy__62->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__62->GetYaxis()->SetTitleFont(43);
   hframe_copy__62->GetZaxis()->SetLabelFont(43);
   hframe_copy__62->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__62->GetZaxis()->SetLabelSize(27);
   hframe_copy__62->GetZaxis()->SetTitleSize(33);
   hframe_copy__62->GetZaxis()->SetTitleOffset(1);
   hframe_copy__62->GetZaxis()->SetTitleFont(43);
   hframe_copy__62->Draw("sameaxis");
   
   TH1F *hframe_copy__63 = new TH1F("hframe_copy__63","",1000,0,1.01);
   hframe_copy__63->SetMinimum(0.01);
   hframe_copy__63->SetMaximum(500000);
   hframe_copy__63->SetDirectory(0);
   hframe_copy__63->SetStats(0);
   hframe_copy__63->SetLineStyle(0);
   hframe_copy__63->SetMarkerStyle(20);
   hframe_copy__63->GetXaxis()->SetLabelFont(43);
   hframe_copy__63->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__63->GetXaxis()->SetLabelSize(0);
   hframe_copy__63->GetXaxis()->SetTitleSize(0);
   hframe_copy__63->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__63->GetXaxis()->SetTitleFont(43);
   hframe_copy__63->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__63->GetYaxis()->SetLabelFont(43);
   hframe_copy__63->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__63->GetYaxis()->SetLabelSize(27);
   hframe_copy__63->GetYaxis()->SetTitleSize(33);
   hframe_copy__63->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__63->GetYaxis()->SetTitleFont(43);
   hframe_copy__63->GetZaxis()->SetLabelFont(43);
   hframe_copy__63->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__63->GetZaxis()->SetLabelSize(27);
   hframe_copy__63->GetZaxis()->SetTitleSize(33);
   hframe_copy__63->GetZaxis()->SetTitleOffset(1);
   hframe_copy__63->GetZaxis()->SetTitleFont(43);
   hframe_copy__63->Draw("sameaxis");
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
   MVAOutputM250_1->Modified();
   MVAOutputM250->cd();
   MVAOutputM250->Modified();
   MVAOutputM250->cd();
   MVAOutputM250->SetSelected(MVAOutputM250);
}
