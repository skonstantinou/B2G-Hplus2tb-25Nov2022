void MVAOutputM220()
{
//=========Macro generated from canvas: MVAOutputM220/MVAOutputM220
//=========  (Fri Nov 18 13:27:27 2022) by ROOT version 6.20/02
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
   0.03114756,
   0.0178901,
   0.01903751,
   0.01561922,
   0.01325403,
   0.01130171,
   0.009862185,
   0.008767223,
   0.007930975,
   0.007662084,
   0.008223382,
   0.009963156,
   0.0137681,
   0.02248266,
   0.04428979,
   0.1082981,
   0.7493762,
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
   0.03114756,
   0.0178901,
   0.01903751,
   0.01561922,
   0.01325403,
   0.01130171,
   0.009862185,
   0.008767223,
   0.007930975,
   0.007662084,
   0.008223382,
   0.009963156,
   0.0137681,
   0.02248266,
   0.04428979,
   0.1082981,
   0.7493762,
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
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMinimum(1.594973e-08);
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
   0.03114756,
   0.0178901,
   0.01903751,
   0.01561922,
   0.01325403,
   0.01130171,
   0.009862185,
   0.008767223,
   0.007930975,
   0.007662084,
   0.008223382,
   0.009963156,
   0.0137681,
   0.02248266,
   0.04428979,
   0.1082981,
   0.7493762,
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
   0.03114756,
   0.0178901,
   0.01903751,
   0.01561922,
   0.01325403,
   0.01130171,
   0.009862185,
   0.008767223,
   0.007930975,
   0.007662084,
   0.008223382,
   0.009963156,
   0.0137681,
   0.02248266,
   0.04428979,
   0.1082981,
   0.7493762,
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
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMinimum(1.594973e-08);
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
   1.004282,
   0.9680603,
   0.9967043,
   1.002285,
   0.9609842,
   0.9856245,
   0.9464533,
   0.9427206,
   0.9470255,
   0.9109923,
   0.9390343,
   0.8984916,
   0.9344034,
   0.9553284,
   0.9247015,
   1.021774,
   0.8559976};
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
   0.04598293,
   0.02647505,
   0.02785873,
   0.02346814,
   0.01944659,
   0.01712641,
   0.01478833,
   0.01338034,
   0.01236069,
   0.01167747,
   0.01261614,
   0.01445986,
   0.02000813,
   0.03179134,
   0.05606826,
   0.1490411,
   0.8559976};
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
   0.04598293,
   0.02647505,
   0.02785873,
   0.02346814,
   0.01944659,
   0.01712641,
   0.01478833,
   0.01338034,
   0.01236069,
   0.01167747,
   0.01261614,
   0.01445986,
   0.02000813,
   0.03179134,
   0.05606826,
   0.1490411,
   0.8559976};
   grae = new TGraphAsymmErrors(17,Graph1_fx3023,Graph1_fy3023,Graph1_felx3023,Graph1_fehx3023,Graph1_fely3023,Graph1_fehy3023);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1301530193023 = new TH1F("Graph_Graph_Graph_Graph1301530193023","Graph",100,0,1.045);
   Graph_Graph_Graph_Graph1301530193023->SetMinimum(-0.1711995);
   Graph_Graph_Graph_Graph1301530193023->SetMaximum(1.883195);
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
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMinimum(53.44501);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMaximum(213780.1);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,138.6844);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,417.9804);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,772.5482);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1193.874);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1374.287);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1660.767);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,2168.11);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,2588.432);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,2955.576);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,3118.582);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,2883.058);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,2012.811);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,1165.385);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,433.1839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,160.9604);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,28.66388);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,1.138891);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,17.73292);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,29.34036);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,56.45482);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,83.13731);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,75.94919);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,83.89142);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,107.3594);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,106.4279);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,112.205);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,125.2471);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,116.0289);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,94.33886);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,67.43734);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,40.62573);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,23.949);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,8.086865);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.9096748);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5099.209);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,3618.275);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,10621.06);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,19149.16);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,28070.52);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,39234.7);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,53207.46);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,68992.12);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,86068.42);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,103358.6);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,111383.7);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,100046.1);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,71918.85);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,39968.22);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,16356.49);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,4798.043);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,730.2943);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,12.4614);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.7938436);
   TT_stack_2_stack_2_stack_2->SetBinError(1,44.43099);
   TT_stack_2_stack_2_stack_2->SetBinError(2,76.05901);
   TT_stack_2_stack_2_stack_2->SetBinError(3,144.7751);
   TT_stack_2_stack_2_stack_2->SetBinError(4,175.1225);
   TT_stack_2_stack_2_stack_2->SetBinError(5,207.2427);
   TT_stack_2_stack_2_stack_2->SetBinError(6,241.1447);
   TT_stack_2_stack_2_stack_2->SetBinError(7,274.9421);
   TT_stack_2_stack_2_stack_2->SetBinError(8,307.3941);
   TT_stack_2_stack_2_stack_2->SetBinError(9,337.4252);
   TT_stack_2_stack_2_stack_2->SetBinError(10,350.7889);
   TT_stack_2_stack_2_stack_2->SetBinError(11,332.9015);
   TT_stack_2_stack_2_stack_2->SetBinError(12,282.785);
   TT_stack_2_stack_2_stack_2->SetBinError(13,210.5765);
   TT_stack_2_stack_2_stack_2->SetBinError(14,134.5032);
   TT_stack_2_stack_2_stack_2->SetBinError(15,72.4633);
   TT_stack_2_stack_2_stack_2->SetBinError(16,28.07553);
   TT_stack_2_stack_2_stack_2->SetBinError(17,3.960256);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.7938436);
   TT_stack_2_stack_2_stack_2->SetEntries(694106.9);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,992.7007);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2772.084);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5762.938);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7132.448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,10213.91);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,12337.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,15394.49);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,16655.37);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,17652.95);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,19110.22);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,15064.41);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,12012.38);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5548.59);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2114.819);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,923.9755);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,161.0104);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,9.764262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,139.9921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,233.2463);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,463.6232);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,534.417);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,636.4196);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,715.3453);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,800.9655);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,864.0931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,916.6226);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,953.5856);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,903.9955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,802.7065);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,603.494);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,401.1275);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,249.1283);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,95.2506);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,17.0308);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3094.865);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(1,11.85952);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(2,44.43752);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(3,91.73006);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(4,131.7505);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(5,242.7749);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(6,268.091);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(7,262.6368);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(8,255.3225);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(9,230.578);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(10,199.1709);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(11,165.0834);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(12,99.14637);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(13,48.76021);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(14,20.97107);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(15,4.690541);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(16,0.9792039);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(17,-0.5758535);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(1,3.988591);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(2,7.921988);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(3,16.80424);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(4,21.19167);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(5,24.27747);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(6,25.67678);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(7,25.72343);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(8,25.17642);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(9,24.19752);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(10,22.16686);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(11,18.70329);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(12,14.6648);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(13,10.54487);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(14,6.653667);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(15,3.071257);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(16,1.978144);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(17,0.5758535);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetEntries(835.5056);
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
   4749.661,
   13811.12,
   25684.65,
   36396.84,
   50822.89,
   67206.12,
   86554.72,
   105312.2,
   123967.1,
   133612.5,
   117993.6,
   85944.04,
   46682.19,
   18904.49,
   5882.979,
   919.9685,
   23.36455,
   0.7938436};
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
   147.9403,
   247.0823,
   488.9718,
   568.4903,
   673.608,
   759.5443,
   853.6187,
   923.2957,
   983.1799,
   1023.751,
   970.3061,
   856.2739,
   642.7249,
   425.0233,
   260.5559,
   99.63087,
   17.50884,
   0.7938436};
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
   147.9403,
   247.0823,
   488.9718,
   568.4903,
   673.608,
   759.5443,
   853.6187,
   923.2957,
   983.1799,
   1023.751,
   970.3061,
   856.2739,
   642.7249,
   425.0233,
   260.5559,
   99.63087,
   17.50884,
   0.7938436};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMinimum(1.266159e-08);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMaximum(148099.9);
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
   Data__40->SetBinContent(1,4770);
   Data__40->SetBinContent(2,13370);
   Data__40->SetBinContent(3,25600);
   Data__40->SetBinContent(4,36480);
   Data__40->SetBinContent(5,48840);
   Data__40->SetBinContent(6,66240);
   Data__40->SetBinContent(7,81920);
   Data__40->SetBinContent(8,99280);
   Data__40->SetBinContent(9,117400);
   Data__40->SetBinContent(10,121720);
   Data__40->SetBinContent(11,110800);
   Data__40->SetBinContent(12,77220);
   Data__40->SetBinContent(13,43620);
   Data__40->SetBinContent(14,18060);
   Data__40->SetBinContent(15,5440);
   Data__40->SetBinContent(16,940);
   Data__40->SetBinContent(17,20);
   Data__40->SetBinError(1,218.4033);
   Data__40->SetBinError(2,365.6501);
   Data__40->SetBinError(3,715.5418);
   Data__40->SetBinError(4,854.1663);
   Data__40->SetBinError(5,988.3319);
   Data__40->SetBinError(6,1151);
   Data__40->SetBinError(7,1280);
   Data__40->SetBinError(8,1409.113);
   Data__40->SetBinError(9,1532.319);
   Data__40->SetBinError(10,1560.256);
   Data__40->SetBinError(11,1488.624);
   Data__40->SetBinError(12,1242.739);
   Data__40->SetBinError(13,934.0236);
   Data__40->SetBinError(14,600.9992);
   Data__40->SetBinError(15,329.8485);
   Data__40->SetBinError(16,137.1131);
   Data__40->SetBinError(17,20);
   Data__40->SetEntries(44044.27);
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
