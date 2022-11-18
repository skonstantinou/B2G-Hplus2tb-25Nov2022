void MVAOutputM220()
{
//=========Macro generated from canvas: MVAOutputM220/MVAOutputM220
//=========  (Fri Nov 18 13:27:15 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM220 = new TCanvas("MVAOutputM220", "MVAOutputM220",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM220->SetHighLightColor(2);
   MVAOutputM220->Range(0,0,1,1);
   MVAOutputM220->SetFillColor(0);
   MVAOutputM220->SetBorderMode(0);
   MVAOutputM220->SetBorderSize(2);
   MVAOutputM220->SetTickx(1);
   MVAOutputM220->SetTicky(1);
   MVAOutputM220->SetLeftMargin(0.16);
   MVAOutputM220->SetRightMargin(0.05);
   MVAOutputM220->SetTopMargin(0.06);
   MVAOutputM220->SetBottomMargin(0.13);
   MVAOutputM220->SetFrameFillStyle(0);
   MVAOutputM220->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM220_2
   TPad *MVAOutputM220_2 = new TPad("MVAOutputM220_2", "MVAOutputM220_2",0,0,1,0.304);
   MVAOutputM220_2->Draw();
   MVAOutputM220_2->cd();
   MVAOutputM220_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM220_2->SetFillColor(0);
   MVAOutputM220_2->SetFillStyle(4000);
   MVAOutputM220_2->SetBorderMode(0);
   MVAOutputM220_2->SetBorderSize(2);
   MVAOutputM220_2->SetTickx(1);
   MVAOutputM220_2->SetTicky(1);
   MVAOutputM220_2->SetLeftMargin(0.16);
   MVAOutputM220_2->SetRightMargin(0.05);
   MVAOutputM220_2->SetTopMargin(0);
   MVAOutputM220_2->SetBottomMargin(0.3421053);
   MVAOutputM220_2->SetFrameFillStyle(0);
   MVAOutputM220_2->SetFrameBorderMode(0);
   MVAOutputM220_2->SetFrameFillStyle(0);
   MVAOutputM220_2->SetFrameBorderMode(0);
   
   TH1F *hframe__36 = new TH1F("hframe__36","",1000,0,1.01);
   hframe__36->SetMinimum(0.3);
   hframe__36->SetMaximum(1.7);
   hframe__36->SetDirectory(0);
   hframe__36->SetStats(0);
   hframe__36->SetLineStyle(0);
   hframe__36->SetMarkerStyle(20);
   hframe__36->GetXaxis()->SetTitle("DNN Output");
   hframe__36->GetXaxis()->SetLabelFont(43);
   hframe__36->GetXaxis()->SetLabelOffset(0.007);
   hframe__36->GetXaxis()->SetLabelSize(27);
   hframe__36->GetXaxis()->SetTitleSize(33);
   hframe__36->GetXaxis()->SetTitleOffset(2.960526);
   hframe__36->GetXaxis()->SetTitleFont(43);
   hframe__36->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__36->GetYaxis()->SetNdivisions(505);
   hframe__36->GetYaxis()->SetLabelFont(43);
   hframe__36->GetYaxis()->SetLabelOffset(0.007);
   hframe__36->GetYaxis()->SetLabelSize(21);
   hframe__36->GetYaxis()->SetTitleSize(33);
   hframe__36->GetYaxis()->SetTitleOffset(1.5625);
   hframe__36->GetYaxis()->SetTitleFont(43);
   hframe__36->GetZaxis()->SetLabelFont(43);
   hframe__36->GetZaxis()->SetLabelOffset(0.007);
   hframe__36->GetZaxis()->SetLabelSize(27);
   hframe__36->GetZaxis()->SetTitleSize(33);
   hframe__36->GetZaxis()->SetTitleOffset(1);
   hframe__36->GetZaxis()->SetTitleFont(43);
   hframe__36->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3021[18] = {
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
   Double_t BackgroundStatSystError_fy3021[18] = {
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
   Double_t BackgroundStatSystError_felx3021[18] = {
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
   Double_t BackgroundStatSystError_fely3021[18] = {
   0.06393987,
   0.04153777,
   0.04672433,
   0.039337,
   0.03377963,
   0.02941283,
   0.02570859,
   0.02321826,
   0.02147283,
   0.01998875,
   0.02010938,
   0.02150921,
   0.02534118,
   0.03303622,
   0.05325234,
   0.1110806,
   0.5071286,
   -0.5815643};
   Double_t BackgroundStatSystError_fehx3021[18] = {
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
   Double_t BackgroundStatSystError_fehy3021[18] = {
   0.06393987,
   0.04153777,
   0.04672433,
   0.039337,
   0.03377963,
   0.02941283,
   0.02570859,
   0.02321826,
   0.02147283,
   0.01998875,
   0.02010938,
   0.02150921,
   0.02534118,
   0.03303622,
   0.05325234,
   0.1110806,
   0.5071286,
   -0.5815643};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,BackgroundStatSystError_fx3021,BackgroundStatSystError_fy3021,BackgroundStatSystError_felx3021,BackgroundStatSystError_fehx3021,BackgroundStatSystError_fely3021,BackgroundStatSystError_fehy3021);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1215;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError301330173021 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError301330173021","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMinimum(0.3914456);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMaximum(1.608554);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError301330173021);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3022[18] = {
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
   Double_t BackgroundStatError_fy3022[18] = {
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
   Double_t BackgroundStatError_felx3022[18] = {
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
   Double_t BackgroundStatError_fely3022[18] = {
   0.06393987,
   0.04153777,
   0.04672433,
   0.039337,
   0.03377963,
   0.02941283,
   0.02570859,
   0.02321826,
   0.02147283,
   0.01998875,
   0.02010938,
   0.02150921,
   0.02534118,
   0.03303622,
   0.05325234,
   0.1110806,
   0.5071286,
   -0.5815643};
   Double_t BackgroundStatError_fehx3022[18] = {
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
   Double_t BackgroundStatError_fehy3022[18] = {
   0.06393987,
   0.04153777,
   0.04672433,
   0.039337,
   0.03377963,
   0.02941283,
   0.02570859,
   0.02321826,
   0.02147283,
   0.01998875,
   0.02010938,
   0.02150921,
   0.02534118,
   0.03303622,
   0.05325234,
   0.1110806,
   0.5071286,
   -0.5815643};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3022,BackgroundStatError_fy3022,BackgroundStatError_felx3022,BackgroundStatError_fehx3022,BackgroundStatError_fely3022,BackgroundStatError_fehy3022);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1214;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError301430183022 = new TH1F("Graph_Graph_Graph_BackgroundStatError301430183022","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMinimum(0.3914456);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMaximum(1.608554);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError301430183022);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx6[2] = {
   0,
   1.01};
   Double_t Graph0_fy6[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx6,Graph0_fy6);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0456 = new TH1F("Graph_Graph_Graph_Graph0456","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0456->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0456->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0456->SetDirectory(0);
   Graph_Graph_Graph_Graph0456->SetStats(0);
   Graph_Graph_Graph_Graph0456->SetLineStyle(0);
   Graph_Graph_Graph_Graph0456->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0456);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3023[5] = {
   0.05,
   0.15,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3023[5] = {
   0.915236,
   0.9371829,
   0.9800916,
   0.9927424,
   0.09300111};
   Double_t Graph1_felx3023[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3023[5] = {
   0.06998985,
   0.04493448,
   0.0523881,
   0.04448585,
   0.01153537};
   Double_t Graph1_fehx3023[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3023[5] = {
   0.06998985,
   0.04493448,
   0.0523881,
   0.04448585,
   0.01153537};
   grae = new TGraphAsymmErrors(5,Graph1_fx3023,Graph1_fy3023,Graph1_felx3023,Graph1_fehx3023,Graph1_fely3023,Graph1_fehy3023);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1301530193023 = new TH1F("Graph_Graph_Graph_Graph1301530193023","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1301530193023->SetMinimum(0.07331917);
   Graph_Graph_Graph_Graph1301530193023->SetMaximum(1.132804);
   Graph_Graph_Graph_Graph1301530193023->SetDirectory(0);
   Graph_Graph_Graph_Graph1301530193023->SetStats(0);
   Graph_Graph_Graph_Graph1301530193023->SetLineStyle(0);
   Graph_Graph_Graph_Graph1301530193023->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1301530193023);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__37 = new TH1F("hframe_copy__37","",1000,0,1.01);
   hframe_copy__37->SetMinimum(0.3);
   hframe_copy__37->SetMaximum(1.7);
   hframe_copy__37->SetDirectory(0);
   hframe_copy__37->SetStats(0);
   hframe_copy__37->SetLineStyle(0);
   hframe_copy__37->SetMarkerStyle(20);
   hframe_copy__37->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__37->GetXaxis()->SetLabelFont(43);
   hframe_copy__37->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__37->GetXaxis()->SetLabelSize(27);
   hframe_copy__37->GetXaxis()->SetTitleSize(33);
   hframe_copy__37->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__37->GetXaxis()->SetTitleFont(43);
   hframe_copy__37->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__37->GetYaxis()->SetNdivisions(505);
   hframe_copy__37->GetYaxis()->SetLabelFont(43);
   hframe_copy__37->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__37->GetYaxis()->SetLabelSize(21);
   hframe_copy__37->GetYaxis()->SetTitleSize(33);
   hframe_copy__37->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__37->GetYaxis()->SetTitleFont(43);
   hframe_copy__37->GetZaxis()->SetLabelFont(43);
   hframe_copy__37->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__37->GetZaxis()->SetLabelSize(27);
   hframe_copy__37->GetZaxis()->SetTitleSize(33);
   hframe_copy__37->GetZaxis()->SetTitleOffset(1);
   hframe_copy__37->GetZaxis()->SetTitleFont(43);
   hframe_copy__37->Draw("sameaxis");
   MVAOutputM220_2->Modified();
   MVAOutputM220->cd();
  
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
   MVAOutputM220->cd();
  
// ------------>Primitives in pad: MVAOutputM220_1
   TPad *MVAOutputM220_1 = new TPad("MVAOutputM220_1", "MVAOutputM220_1",0,0.2897959,1,1);
   MVAOutputM220_1->Draw();
   MVAOutputM220_1->cd();
   MVAOutputM220_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM220_1->SetFillColor(0);
   MVAOutputM220_1->SetFillStyle(4000);
   MVAOutputM220_1->SetBorderMode(0);
   MVAOutputM220_1->SetBorderSize(2);
   MVAOutputM220_1->SetLogy();
   MVAOutputM220_1->SetTickx(1);
   MVAOutputM220_1->SetTicky(1);
   MVAOutputM220_1->SetLeftMargin(0.16);
   MVAOutputM220_1->SetRightMargin(0.05);
   MVAOutputM220_1->SetTopMargin(0.06);
   MVAOutputM220_1->SetBottomMargin(0.02);
   MVAOutputM220_1->SetFrameFillStyle(0);
   MVAOutputM220_1->SetFrameBorderMode(0);
   MVAOutputM220_1->SetFrameFillStyle(0);
   MVAOutputM220_1->SetFrameBorderMode(0);
   
   TH1F *hframe__38 = new TH1F("hframe__38","",1000,0,1.01);
   hframe__38->SetMinimum(0.01);
   hframe__38->SetMaximum(500000);
   hframe__38->SetDirectory(0);
   hframe__38->SetStats(0);
   hframe__38->SetLineStyle(0);
   hframe__38->SetMarkerStyle(20);
   hframe__38->GetXaxis()->SetLabelFont(43);
   hframe__38->GetXaxis()->SetLabelOffset(0.007);
   hframe__38->GetXaxis()->SetLabelSize(0);
   hframe__38->GetXaxis()->SetTitleSize(0);
   hframe__38->GetXaxis()->SetTitleOffset(0.9);
   hframe__38->GetXaxis()->SetTitleFont(43);
   hframe__38->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__38->GetYaxis()->SetLabelFont(43);
   hframe__38->GetYaxis()->SetLabelOffset(0.007);
   hframe__38->GetYaxis()->SetLabelSize(27);
   hframe__38->GetYaxis()->SetTitleSize(33);
   hframe__38->GetYaxis()->SetTitleOffset(1.5625);
   hframe__38->GetYaxis()->SetTitleFont(43);
   hframe__38->GetZaxis()->SetLabelFont(43);
   hframe__38->GetZaxis()->SetLabelOffset(0.007);
   hframe__38->GetZaxis()->SetLabelSize(27);
   hframe__38->GetZaxis()->SetTitleSize(33);
   hframe__38->GetZaxis()->SetTitleOffset(1);
   hframe__38->GetZaxis()->SetTitleFont(43);
   hframe__38->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis31[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_4_stack_5_stack_6 = new TH1F("StackedMCstackHist_stack_4_stack_5_stack_6","StackedMCstackHist",18, xAxis31);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMinimum(15.50749);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMaximum(62029.98);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetDirectory(0);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetStats(0);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetLineStyle(0);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMarkerStyle(20);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_4_stack_5_stack_6);
   
   Double_t xAxis32[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM220Inclusive",18, xAxis32);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,92.2915);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,178.1186);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,307.5917);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,401.2111);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,444.8884);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,700.8853);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,908.0035);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1195.601);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1259.695);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1543.915);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1391.932);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1344.131);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,992.7324);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,575.8414);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,223.0789);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,39.00624);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,9.209786);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,-0.003277464);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,11.33132);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,17.56162);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,33.15204);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,36.25946);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,37.05113);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,47.63038);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,59.2089);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,63.77203);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,60.05854);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,63.34222);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,60.07891);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,57.02577);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,57.76099);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,35.23838);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,22.96266);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,8.493742);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,5.437878);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.00231929);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3992.274);
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
   Double_t xAxis33[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM220Inclusive",18, xAxis33);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,825.6084);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,2079.165);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3510.326);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4774.758);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,6558.557);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,8639.949);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,11014.54);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,14185.31);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,16993.85);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,19869.16);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,20225.3);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,17709.83);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,13171.06);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,7463.267);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,3005.323);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,694.0208);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,46.85153);
   TT_stack_2_stack_2_stack_2->SetBinError(1,22.4145);
   TT_stack_2_stack_2_stack_2->SetBinError(2,35.63392);
   TT_stack_2_stack_2_stack_2->SetBinError(3,65.52083);
   TT_stack_2_stack_2_stack_2->SetBinError(4,76.67235);
   TT_stack_2_stack_2_stack_2->SetBinError(5,90.02746);
   TT_stack_2_stack_2_stack_2->SetBinError(6,103.2169);
   TT_stack_2_stack_2_stack_2->SetBinError(7,116.5595);
   TT_stack_2_stack_2_stack_2->SetBinError(8,132.4744);
   TT_stack_2_stack_2_stack_2->SetBinError(9,145.1536);
   TT_stack_2_stack_2_stack_2->SetBinError(10,157.1739);
   TT_stack_2_stack_2_stack_2->SetBinError(11,158.2345);
   TT_stack_2_stack_2_stack_2->SetBinError(12,148.0665);
   TT_stack_2_stack_2_stack_2->SetBinError(13,128.2788);
   TT_stack_2_stack_2_stack_2->SetBinError(14,96.33454);
   TT_stack_2_stack_2_stack_2->SetBinError(15,60.86861);
   TT_stack_2_stack_2_stack_2->SetBinError(16,29.21982);
   TT_stack_2_stack_2_stack_2->SetBinError(17,7.638082);
   TT_stack_2_stack_2_stack_2->SetEntries(122917.6);
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
   Double_t xAxis34[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM220Inclusive",18, xAxis34);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,950.4706);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2384.286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3324.272);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,4856.845);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,6974.883);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,8879.334);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,11298.22);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13114.59);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,15558.72);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,17355.66);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,16112.25);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,14716.09);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,10844.62);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,7171.418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2756.396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,797.5033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,-2.405795);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,-0.002083975);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,116.7933);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,188.6633);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,325.5349);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,385.4397);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,462.0377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,523.7114);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,582.4819);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,645.0731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,708.8476);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,756.1836);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,739.5965);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,708.8255);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,617.9303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,491.9171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,311.9941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,167.267);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,25.54382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.002083975);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4251.738);
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
   Double_t xAxis35[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__39 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__39","h_SR_MVAOutputM220Inclusive",18, xAxis35);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(1,70.5442);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(2,272.9153);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(3,704.812);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(4,1105.943);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(5,1330.024);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(6,1647.691);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(7,1552.51);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(8,1294.131);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(9,1159.768);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(10,965.3519);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(11,725.3425);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(12,418.1589);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(13,249.1528);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(14,159.4927);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(15,57.98893);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(16,18.45998);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(17,2.789853);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(1,8.428316);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(2,16.39201);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(3,36.76111);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(4,45.88099);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(5,51.01741);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(6,53.70163);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(7,52.87659);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(8,49.96937);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(9,46.79443);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(10,42.01131);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(11,36.41613);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(12,30.39921);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(13,23.3344);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(14,16.77871);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(15,11.23714);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(16,5.999164);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(17,2.246173);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetEntries(6324.626);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3024[18] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3024[18] = {
   1868.37,
   4641.57,
   7142.189,
   10032.81,
   13978.33,
   18220.17,
   23220.77,
   28495.5,
   33812.27,
   38768.73,
   37729.48,
   33770.05,
   25008.41,
   15210.53,
   5984.799,
   1530.53,
   53.65552,
   -0.005361439};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3024[18] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3024[18] = {
   119.4634,
   192.8004,
   333.714,
   394.6609,
   472.1827,
   535.9067,
   596.9732,
   661.6159,
   726.0451,
   774.9383,
   758.7164,
   726.3671,
   633.7426,
   502.4983,
   318.7045,
   170.0123,
   27.21025,
   0.003118021};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3024[18] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3024[18] = {
   119.4634,
   192.8004,
   333.714,
   394.6609,
   472.1827,
   535.9067,
   596.9732,
   661.6159,
   726.0451,
   774.9383,
   758.7164,
   726.3671,
   633.7426,
   502.4983,
   318.7045,
   170.0123,
   27.21025,
   0.003118021};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3024,BkgSum-SR-Inclusive_sum_errors_fy3024,BkgSum-SR-Inclusive_sum_errors_felx3024,BkgSum-SR-Inclusive_sum_errors_fehx3024,BkgSum-SR-Inclusive_sum_errors_fely3024,BkgSum-SR-Inclusive_sum_errors_fehy3024);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1213;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMinimum(43.49804);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMaximum(43498.04);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors301630203024);
   
   grae->Draw("e2 ");
   Double_t xAxis36[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__40 = new TH1F("Data__40","h_SR_MVAOutputM220Inclusive",18, xAxis36);
   Data__40->SetBinContent(1,1710);
   Data__40->SetBinContent(2,4350);
   Data__40->SetBinContent(3,7000);
   Data__40->SetBinContent(4,9960);
   Data__40->SetBinContent(5,1300);
   Data__40->SetBinError(1,130.767);
   Data__40->SetBinError(2,208.5665);
   Data__40->SetBinError(3,374.1657);
   Data__40->SetBinError(4,446.3183);
   Data__40->SetBinError(5,161.2452);
   Data__40->SetEntries(1389.062);
   Data__40->SetDirectory(0);
   Data__40->SetFillStyle(3001);
   Data__40->SetLineWidth(2);
   Data__40->SetMarkerStyle(20);
   Data__40->SetMarkerSize(1.2);
   Data__40->GetXaxis()->SetRange(1,200);
   Data__40->GetXaxis()->SetLabelFont(42);
   Data__40->GetXaxis()->SetTitleOffset(1);
   Data__40->GetXaxis()->SetTitleFont(42);
   Data__40->GetYaxis()->SetLabelFont(42);
   Data__40->GetYaxis()->SetTitleFont(42);
   Data__40->GetZaxis()->SetLabelFont(42);
   Data__40->GetZaxis()->SetTitleOffset(1);
   Data__40->GetZaxis()->SetTitleFont(42);
   Data__40->Draw("EP same");
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

   ci = 1213;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1213;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__41 = new TH1F("hframe_copy__41","",1000,0,1.01);
   hframe_copy__41->SetMinimum(0.01);
   hframe_copy__41->SetMaximum(500000);
   hframe_copy__41->SetDirectory(0);
   hframe_copy__41->SetStats(0);
   hframe_copy__41->SetLineStyle(0);
   hframe_copy__41->SetMarkerStyle(20);
   hframe_copy__41->GetXaxis()->SetLabelFont(43);
   hframe_copy__41->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__41->GetXaxis()->SetLabelSize(0);
   hframe_copy__41->GetXaxis()->SetTitleSize(0);
   hframe_copy__41->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__41->GetXaxis()->SetTitleFont(43);
   hframe_copy__41->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__41->GetYaxis()->SetLabelFont(43);
   hframe_copy__41->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__41->GetYaxis()->SetLabelSize(27);
   hframe_copy__41->GetYaxis()->SetTitleSize(33);
   hframe_copy__41->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__41->GetYaxis()->SetTitleFont(43);
   hframe_copy__41->GetZaxis()->SetLabelFont(43);
   hframe_copy__41->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__41->GetZaxis()->SetLabelSize(27);
   hframe_copy__41->GetZaxis()->SetTitleSize(33);
   hframe_copy__41->GetZaxis()->SetTitleOffset(1);
   hframe_copy__41->GetZaxis()->SetTitleFont(43);
   hframe_copy__41->Draw("sameaxis");
   
   TH1F *hframe_copy__42 = new TH1F("hframe_copy__42","",1000,0,1.01);
   hframe_copy__42->SetMinimum(0.01);
   hframe_copy__42->SetMaximum(500000);
   hframe_copy__42->SetDirectory(0);
   hframe_copy__42->SetStats(0);
   hframe_copy__42->SetLineStyle(0);
   hframe_copy__42->SetMarkerStyle(20);
   hframe_copy__42->GetXaxis()->SetLabelFont(43);
   hframe_copy__42->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__42->GetXaxis()->SetLabelSize(0);
   hframe_copy__42->GetXaxis()->SetTitleSize(0);
   hframe_copy__42->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__42->GetXaxis()->SetTitleFont(43);
   hframe_copy__42->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__42->GetYaxis()->SetLabelFont(43);
   hframe_copy__42->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__42->GetYaxis()->SetLabelSize(27);
   hframe_copy__42->GetYaxis()->SetTitleSize(33);
   hframe_copy__42->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__42->GetYaxis()->SetTitleFont(43);
   hframe_copy__42->GetZaxis()->SetLabelFont(43);
   hframe_copy__42->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__42->GetZaxis()->SetLabelSize(27);
   hframe_copy__42->GetZaxis()->SetTitleSize(33);
   hframe_copy__42->GetZaxis()->SetTitleOffset(1);
   hframe_copy__42->GetZaxis()->SetTitleFont(43);
   hframe_copy__42->Draw("sameaxis");
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
   MVAOutputM220_1->Modified();
   MVAOutputM220->cd();
   MVAOutputM220->Modified();
   MVAOutputM220->cd();
   MVAOutputM220->SetSelected(MVAOutputM220);
}
