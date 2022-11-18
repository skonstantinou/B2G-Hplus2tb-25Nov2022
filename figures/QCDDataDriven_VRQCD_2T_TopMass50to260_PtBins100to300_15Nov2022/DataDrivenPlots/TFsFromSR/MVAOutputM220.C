void MVAOutputM220()
{
//=========Macro generated from canvas: MVAOutputM220/MVAOutputM220
//=========  (Fri Nov 18 13:27:44 2022) by ROOT version 6.20/02
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
   0.04952967,
   0.03540874,
   0.04273467,
   0.03798897,
   0.03817971,
   0.03450897,
   0.03136389,
   0.02848011,
   0.02734348,
   0.02584865,
   0.02509726,
   0.02488469,
   0.02616813,
   0.0321517,
   0.04666438,
   0.08724212,
   0.2555376,
   1};
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
   0.04952967,
   0.03540874,
   0.04273467,
   0.03798897,
   0.03817971,
   0.03450897,
   0.03136389,
   0.02848011,
   0.02734348,
   0.02584865,
   0.02509726,
   0.02488469,
   0.02616813,
   0.0321517,
   0.04666438,
   0.08724212,
   0.2555376,
   1};
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
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMinimum(-0.2);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMaximum(2.2);
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
   0.04952967,
   0.03540874,
   0.04273467,
   0.03798897,
   0.03817971,
   0.03450897,
   0.03136389,
   0.02848011,
   0.02734348,
   0.02584865,
   0.02509726,
   0.02488469,
   0.02616813,
   0.0321517,
   0.04666438,
   0.08724212,
   0.2555376,
   1};
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
   0.04952967,
   0.03540874,
   0.04273467,
   0.03798897,
   0.03817971,
   0.03450897,
   0.03136389,
   0.02848011,
   0.02734348,
   0.02584865,
   0.02509726,
   0.02488469,
   0.02616813,
   0.0321517,
   0.04666438,
   0.08724212,
   0.2555376,
   1};
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
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMinimum(-0.2);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMaximum(2.2);
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
   
   Double_t Graph1_fx3023[17] = {
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
   0.925};
   Double_t Graph1_fy3023[17] = {
   1.000004,
   0.9536909,
   1.051252,
   0.9540846,
   1.07374,
   1.06141,
   0.9378013,
   1.016954,
   1.019917,
   0.9691135,
   0.9795806,
   0.9832016,
   1.024085,
   1.037246,
   1.005986,
   1.196296,
   0.5984677};
   Double_t Graph1_felx3023[17] = {
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
   0.025};
   Double_t Graph1_fely3023[17] = {
   0.05116465,
   0.03758069,
   0.04749074,
   0.03901542,
   0.0415132,
   0.03807786,
   0.03161328,
   0.03103124,
   0.03001054,
   0.02746565,
   0.02727378,
   0.02714411,
   0.02973675,
   0.03549381,
   0.05042551,
   0.105328,
   0.2115903};
   Double_t Graph1_fehx3023[17] = {
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
   0.025};
   Double_t Graph1_fehy3023[17] = {
   0.05116465,
   0.03758069,
   0.04749074,
   0.03901542,
   0.0415132,
   0.03807786,
   0.03161328,
   0.03103124,
   0.03001054,
   0.02746565,
   0.02727378,
   0.02714411,
   0.02973675,
   0.03549381,
   0.05042551,
   0.105328,
   0.2115903};
   grae = new TGraphAsymmErrors(17,Graph1_fx3023,Graph1_fy3023,Graph1_felx3023,Graph1_fehx3023,Graph1_fely3023,Graph1_fehy3023);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1301530193023 = new TH1F("Graph_Graph_Graph_Graph1301530193023","Graph",100,0,1.045);
   Graph_Graph_Graph_Graph1301530193023->SetMinimum(0.2954028);
   Graph_Graph_Graph_Graph1301530193023->SetMaximum(1.393098);
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
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMinimum(10.67533);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMaximum(42701.31);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,71.34786);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,159.751);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,227.4342);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,233.0557);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,239.0882);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,357.1629);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,340.8);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,481.3154);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,496.8377);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,548.3274);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,695.342);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,573.0947);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,552.978);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,330.2269);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,140.4321);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,33.33061);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,-2.368849);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.003673049);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,11.26797);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,17.29656);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,27.03866);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,28.0351);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,28.24706);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,48.99965);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,35.1218);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,41.34604);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,45.32241);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,48.47321);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,69.59452);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,57.03933);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,46.55505);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,35.98544);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,23.20579);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,15.43916);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,3.136697);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.003673049);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1208.395);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,795.1226);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1678.154);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2278.598);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2799.048);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3232.572);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4019.437);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,4734.077);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5804.302);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,6720.876);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,7880.112);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,8754.45);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,9158.834);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,8726.104);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,6154.197);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2998.309);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,900.9203);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,80.8313);
   TT_stack_2_stack_2_stack_2->SetBinError(1,21.6597);
   TT_stack_2_stack_2_stack_2->SetBinError(2,31.59936);
   TT_stack_2_stack_2_stack_2->SetBinError(3,52.23417);
   TT_stack_2_stack_2_stack_2->SetBinError(4,57.88393);
   TT_stack_2_stack_2_stack_2->SetBinError(5,62.00992);
   TT_stack_2_stack_2_stack_2->SetBinError(6,69.12095);
   TT_stack_2_stack_2_stack_2->SetBinError(7,74.63457);
   TT_stack_2_stack_2_stack_2->SetBinError(8,82.40216);
   TT_stack_2_stack_2_stack_2->SetBinError(9,88.77272);
   TT_stack_2_stack_2_stack_2->SetBinError(10,96.7304);
   TT_stack_2_stack_2_stack_2->SetBinError(11,101.5882);
   TT_stack_2_stack_2_stack_2->SetBinError(12,103.971);
   TT_stack_2_stack_2_stack_2->SetBinError(13,101.7756);
   TT_stack_2_stack_2_stack_2->SetBinError(14,85.16473);
   TT_stack_2_stack_2_stack_2->SetBinError(15,59.18053);
   TT_stack_2_stack_2_stack_2->SetBinError(16,32.60545);
   TT_stack_2_stack_2_stack_2->SetBinError(17,9.596863);
   TT_stack_2_stack_2_stack_2->SetEntries(66004.01);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,2953.515);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,4914.807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,6816.181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9503.473);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8989.452);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,10264.31);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,13692.42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,14836.28);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,15431.19);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,17265.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,16888.01);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,16956.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,13883.06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,9982.267);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4773.896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1222.406);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,188.8869);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,187.6207);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,236.3758);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,394.0159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,471.8505);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,470.8567);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,498.0878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,582.8074);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,594.4474);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,611.2261);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,655.2721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,649.4353);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,653.4569);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,595.6875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,521.2967);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,363.7253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,184.6604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,67.56765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(6962.101);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(1,5.048247);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(2,2.94128);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(3,15.76232);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(4,25.99743);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(5,30.75068);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(6,15.71029);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(7,33.78476);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(8,51.3256);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(9,39.48412);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(10,40.61346);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(11,43.75761);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(12,39.19526);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(13,22.28894);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(14,28.32846);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(15,16.70973);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(16,4.133173);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(17,1.395523);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(1,2.653263);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(2,3.915903);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(3,7.354722);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(4,8.715892);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(5,9.250556);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(6,10.29252);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(7,10.45747);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(8,11.20588);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(9,11.2196);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(10,10.78812);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(11,9.848811);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(12,9.700827);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(13,8.624359);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(14,7.1704);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(15,5.507197);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(16,3.788276);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(17,1.419507);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetEntries(146.935);
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
   3819.985,
   6752.712,
   9322.214,
   12535.58,
   12461.11,
   14640.91,
   18767.3,
   21121.9,
   22648.9,
   25693.59,
   26337.8,
   26688.32,
   23162.14,
   16466.69,
   7912.637,
   2156.657,
   267.3494,
   0.003673049};
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
   189.2026,
   239.105,
   398.3818,
   476.2136,
   475.7616,
   505.2426,
   588.6156,
   601.5541,
   619.2997,
   664.1445,
   661.0067,
   664.1305,
   606.1099,
   529.432,
   369.2383,
   188.1514,
   68.31783,
   0.003673049};
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
   189.2026,
   239.105,
   398.3818,
   476.2136,
   475.7616,
   505.2426,
   588.6156,
   601.5541,
   619.2997,
   664.1445,
   661.0067,
   664.1305,
   606.1099,
   529.432,
   369.2383,
   188.1514,
   68.31783,
   0.003673049};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMinimum(0.001101915);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMaximum(30087.7);
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
   Data__40->SetBinContent(1,3820);
   Data__40->SetBinContent(2,6440);
   Data__40->SetBinContent(3,9800);
   Data__40->SetBinContent(4,11960);
   Data__40->SetBinContent(5,13380);
   Data__40->SetBinContent(6,15540);
   Data__40->SetBinContent(7,17600);
   Data__40->SetBinContent(8,21480);
   Data__40->SetBinContent(9,23100);
   Data__40->SetBinContent(10,24900);
   Data__40->SetBinContent(11,25800);
   Data__40->SetBinContent(12,26240);
   Data__40->SetBinContent(13,23720);
   Data__40->SetBinContent(14,17080);
   Data__40->SetBinContent(15,7960);
   Data__40->SetBinContent(16,2580);
   Data__40->SetBinContent(17,160);
   Data__40->SetBinError(1,195.4482);
   Data__40->SetBinError(2,253.7716);
   Data__40->SetBinError(3,442.7189);
   Data__40->SetBinError(4,489.0808);
   Data__40->SetBinError(5,517.3007);
   Data__40->SetBinError(6,557.4944);
   Data__40->SetBinError(7,593.2959);
   Data__40->SetBinError(8,655.4388);
   Data__40->SetBinError(9,679.7058);
   Data__40->SetBinError(10,705.6912);
   Data__40->SetBinError(11,718.3314);
   Data__40->SetBinError(12,724.4308);
   Data__40->SetBinError(13,688.767);
   Data__40->SetBinError(14,584.4656);
   Data__40->SetBinError(15,398.9987);
   Data__40->SetBinError(16,227.1563);
   Data__40->SetBinError(17,56.56854);
   Data__40->SetEntries(12839.84);
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
   MVAOutputM220_1->Modified();
   MVAOutputM220->cd();
   MVAOutputM220->Modified();
   MVAOutputM220->cd();
   MVAOutputM220->SetSelected(MVAOutputM220);
}
