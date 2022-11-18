void MVAOutputM700()
{
//=========Macro generated from canvas: MVAOutputM700/MVAOutputM700
//=========  (Fri Nov 18 13:27:43 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM700 = new TCanvas("MVAOutputM700", "MVAOutputM700",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM700->SetHighLightColor(2);
   MVAOutputM700->Range(0,0,1,1);
   MVAOutputM700->SetFillColor(0);
   MVAOutputM700->SetBorderMode(0);
   MVAOutputM700->SetBorderSize(2);
   MVAOutputM700->SetTickx(1);
   MVAOutputM700->SetTicky(1);
   MVAOutputM700->SetLeftMargin(0.16);
   MVAOutputM700->SetRightMargin(0.05);
   MVAOutputM700->SetTopMargin(0.06);
   MVAOutputM700->SetBottomMargin(0.13);
   MVAOutputM700->SetFrameFillStyle(0);
   MVAOutputM700->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM700_2
   TPad *MVAOutputM700_2 = new TPad("MVAOutputM700_2", "MVAOutputM700_2",0,0,1,0.304);
   MVAOutputM700_2->Draw();
   MVAOutputM700_2->cd();
   MVAOutputM700_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM700_2->SetFillColor(0);
   MVAOutputM700_2->SetFillStyle(4000);
   MVAOutputM700_2->SetBorderMode(0);
   MVAOutputM700_2->SetBorderSize(2);
   MVAOutputM700_2->SetTickx(1);
   MVAOutputM700_2->SetTicky(1);
   MVAOutputM700_2->SetLeftMargin(0.16);
   MVAOutputM700_2->SetRightMargin(0.05);
   MVAOutputM700_2->SetTopMargin(0);
   MVAOutputM700_2->SetBottomMargin(0.3421053);
   MVAOutputM700_2->SetFrameFillStyle(0);
   MVAOutputM700_2->SetFrameBorderMode(0);
   MVAOutputM700_2->SetFrameFillStyle(0);
   MVAOutputM700_2->SetFrameBorderMode(0);
   
   TH1F *hframe__183 = new TH1F("hframe__183","",1000,0,1.01);
   hframe__183->SetMinimum(0.3);
   hframe__183->SetMaximum(1.7);
   hframe__183->SetDirectory(0);
   hframe__183->SetStats(0);
   hframe__183->SetLineStyle(0);
   hframe__183->SetMarkerStyle(20);
   hframe__183->GetXaxis()->SetTitle("DNN Output");
   hframe__183->GetXaxis()->SetLabelFont(43);
   hframe__183->GetXaxis()->SetLabelOffset(0.007);
   hframe__183->GetXaxis()->SetLabelSize(27);
   hframe__183->GetXaxis()->SetTitleSize(33);
   hframe__183->GetXaxis()->SetTitleOffset(2.960526);
   hframe__183->GetXaxis()->SetTitleFont(43);
   hframe__183->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__183->GetYaxis()->SetNdivisions(505);
   hframe__183->GetYaxis()->SetLabelFont(43);
   hframe__183->GetYaxis()->SetLabelOffset(0.007);
   hframe__183->GetYaxis()->SetLabelSize(21);
   hframe__183->GetYaxis()->SetTitleSize(33);
   hframe__183->GetYaxis()->SetTitleOffset(1.5625);
   hframe__183->GetYaxis()->SetTitleFont(43);
   hframe__183->GetZaxis()->SetLabelFont(43);
   hframe__183->GetZaxis()->SetLabelOffset(0.007);
   hframe__183->GetZaxis()->SetLabelSize(27);
   hframe__183->GetZaxis()->SetTitleSize(33);
   hframe__183->GetZaxis()->SetTitleOffset(1);
   hframe__183->GetZaxis()->SetTitleFont(43);
   hframe__183->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3105[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
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
   Double_t BackgroundStatSystError_fy3105[20] = {
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
   Double_t BackgroundStatSystError_felx3105[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3105[20] = {
   0.05112419,
   0.04093362,
   0.0436003,
   0.04810736,
   0.05146013,
   0.05861423,
   0.06296401,
   0.06628844,
   0.06662117,
   0.07596429,
   0.07383385,
   0.07974249,
   0.07813308,
   0.0867776,
   0.09312187,
   0.09133033,
   0.1020264,
   0.09926963,
   0.1368664,
   0.2340785};
   Double_t BackgroundStatSystError_fehx3105[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3105[20] = {
   0.05112419,
   0.04093362,
   0.0436003,
   0.04810736,
   0.05146013,
   0.05861423,
   0.06296401,
   0.06628844,
   0.06662117,
   0.07596429,
   0.07383385,
   0.07974249,
   0.07813308,
   0.0867776,
   0.09312187,
   0.09133033,
   0.1020264,
   0.09926963,
   0.1368664,
   0.2340785};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3105,BackgroundStatSystError_fy3105,BackgroundStatSystError_felx3105,BackgroundStatSystError_fehx3105,BackgroundStatSystError_fely3105,BackgroundStatSystError_fehy3105);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1236;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError309731013105 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError309731013105","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMinimum(0.7191058);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMaximum(1.280894);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError309731013105->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError309731013105);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3106[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
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
   Double_t BackgroundStatError_fy3106[20] = {
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
   Double_t BackgroundStatError_felx3106[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fely3106[20] = {
   0.05112419,
   0.04093362,
   0.0436003,
   0.04810736,
   0.05146013,
   0.05861423,
   0.06296401,
   0.06628844,
   0.06662117,
   0.07596429,
   0.07383385,
   0.07974249,
   0.07813308,
   0.0867776,
   0.09312187,
   0.09133033,
   0.1020264,
   0.09926963,
   0.1368664,
   0.2340785};
   Double_t BackgroundStatError_fehx3106[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fehy3106[20] = {
   0.05112419,
   0.04093362,
   0.0436003,
   0.04810736,
   0.05146013,
   0.05861423,
   0.06296401,
   0.06628844,
   0.06662117,
   0.07596429,
   0.07383385,
   0.07974249,
   0.07813308,
   0.0867776,
   0.09312187,
   0.09133033,
   0.1020264,
   0.09926963,
   0.1368664,
   0.2340785};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3106,BackgroundStatError_fy3106,BackgroundStatError_felx3106,BackgroundStatError_fehx3106,BackgroundStatError_fely3106,BackgroundStatError_fehy3106);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1235;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError309831023106 = new TH1F("Graph_Graph_Graph_BackgroundStatError309831023106","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMinimum(0.7191058);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMaximum(1.280894);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError309831023106->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError309831023106->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError309831023106);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx27[2] = {
   0,
   1.01};
   Double_t Graph0_fy27[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx27,Graph0_fy27);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0252627 = new TH1F("Graph_Graph_Graph_Graph0252627","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0252627->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0252627->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0252627->SetDirectory(0);
   Graph_Graph_Graph_Graph0252627->SetStats(0);
   Graph_Graph_Graph_Graph0252627->SetLineStyle(0);
   Graph_Graph_Graph_Graph0252627->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0252627->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0252627->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0252627->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0252627);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3107[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
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
   Double_t Graph1_fy3107[20] = {
   0.7368763,
   0.9013113,
   1.051648,
   1.036198,
   0.9493292,
   1.139415,
   1.117502,
   1.05322,
   0.9917783,
   1.265029,
   1.029988,
   0.9961341,
   1.000708,
   1.111926,
   1.190601,
   1.035096,
   1.444627,
   0.9513575,
   1.0495,
   1.24319};
   Double_t Graph1_felx3107[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3107[20] = {
   0.03182821,
   0.02838864,
   0.03322282,
   0.03594532,
   0.03729317,
   0.04647771,
   0.04895864,
   0.05032482,
   0.04898044,
   0.06365052,
   0.05529267,
   0.05839441,
   0.05702061,
   0.0675447,
   0.07369635,
   0.06825218,
   0.09011335,
   0.07051931,
   0.10495,
   0.1895847};
   Double_t Graph1_fehx3107[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3107[20] = {
   0.03182821,
   0.02838864,
   0.03322282,
   0.03594532,
   0.03729317,
   0.04647771,
   0.04895864,
   0.05032482,
   0.04898044,
   0.06365052,
   0.05529267,
   0.05839441,
   0.05702061,
   0.0675447,
   0.07369635,
   0.06825218,
   0.09011335,
   0.07051931,
   0.10495,
   0.1895847};
   grae = new TGraphAsymmErrors(20,Graph1_fx3107,Graph1_fy3107,Graph1_felx3107,Graph1_fehx3107,Graph1_fely3107,Graph1_fehy3107);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1309931033107 = new TH1F("Graph_Graph_Graph_Graph1309931033107","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1309931033107->SetMinimum(0.6220789);
   Graph_Graph_Graph_Graph1309931033107->SetMaximum(1.61771);
   Graph_Graph_Graph_Graph1309931033107->SetDirectory(0);
   Graph_Graph_Graph_Graph1309931033107->SetStats(0);
   Graph_Graph_Graph_Graph1309931033107->SetLineStyle(0);
   Graph_Graph_Graph_Graph1309931033107->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1309931033107->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1309931033107->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1309931033107->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1309931033107);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__184 = new TH1F("hframe_copy__184","",1000,0,1.01);
   hframe_copy__184->SetMinimum(0.3);
   hframe_copy__184->SetMaximum(1.7);
   hframe_copy__184->SetDirectory(0);
   hframe_copy__184->SetStats(0);
   hframe_copy__184->SetLineStyle(0);
   hframe_copy__184->SetMarkerStyle(20);
   hframe_copy__184->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__184->GetXaxis()->SetLabelFont(43);
   hframe_copy__184->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__184->GetXaxis()->SetLabelSize(27);
   hframe_copy__184->GetXaxis()->SetTitleSize(33);
   hframe_copy__184->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__184->GetXaxis()->SetTitleFont(43);
   hframe_copy__184->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__184->GetYaxis()->SetNdivisions(505);
   hframe_copy__184->GetYaxis()->SetLabelFont(43);
   hframe_copy__184->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__184->GetYaxis()->SetLabelSize(21);
   hframe_copy__184->GetYaxis()->SetTitleSize(33);
   hframe_copy__184->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__184->GetYaxis()->SetTitleFont(43);
   hframe_copy__184->GetZaxis()->SetLabelFont(43);
   hframe_copy__184->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__184->GetZaxis()->SetLabelSize(27);
   hframe_copy__184->GetZaxis()->SetTitleSize(33);
   hframe_copy__184->GetZaxis()->SetTitleOffset(1);
   hframe_copy__184->GetZaxis()->SetTitleFont(43);
   hframe_copy__184->Draw("sameaxis");
   MVAOutputM700_2->Modified();
   MVAOutputM700->cd();
  
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
   MVAOutputM700->cd();
  
// ------------>Primitives in pad: MVAOutputM700_1
   TPad *MVAOutputM700_1 = new TPad("MVAOutputM700_1", "MVAOutputM700_1",0,0.2897959,1,1);
   MVAOutputM700_1->Draw();
   MVAOutputM700_1->cd();
   MVAOutputM700_1->Range(-0.204557,-2.156786,1.073924,5.682494);
   MVAOutputM700_1->SetFillColor(0);
   MVAOutputM700_1->SetFillStyle(4000);
   MVAOutputM700_1->SetBorderMode(0);
   MVAOutputM700_1->SetBorderSize(2);
   MVAOutputM700_1->SetLogy();
   MVAOutputM700_1->SetTickx(1);
   MVAOutputM700_1->SetTicky(1);
   MVAOutputM700_1->SetLeftMargin(0.16);
   MVAOutputM700_1->SetRightMargin(0.05);
   MVAOutputM700_1->SetTopMargin(0.06);
   MVAOutputM700_1->SetBottomMargin(0.02);
   MVAOutputM700_1->SetFrameFillStyle(0);
   MVAOutputM700_1->SetFrameBorderMode(0);
   MVAOutputM700_1->SetFrameFillStyle(0);
   MVAOutputM700_1->SetFrameBorderMode(0);
   
   TH1F *hframe__185 = new TH1F("hframe__185","",1000,0,1.01);
   hframe__185->SetMinimum(0.01);
   hframe__185->SetMaximum(162980.9);
   hframe__185->SetDirectory(0);
   hframe__185->SetStats(0);
   hframe__185->SetLineStyle(0);
   hframe__185->SetMarkerStyle(20);
   hframe__185->GetXaxis()->SetLabelFont(43);
   hframe__185->GetXaxis()->SetLabelOffset(0.007);
   hframe__185->GetXaxis()->SetLabelSize(0);
   hframe__185->GetXaxis()->SetTitleSize(0);
   hframe__185->GetXaxis()->SetTitleOffset(0.9);
   hframe__185->GetXaxis()->SetTitleFont(43);
   hframe__185->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__185->GetYaxis()->SetLabelFont(43);
   hframe__185->GetYaxis()->SetLabelOffset(0.007);
   hframe__185->GetYaxis()->SetLabelSize(27);
   hframe__185->GetYaxis()->SetTitleSize(33);
   hframe__185->GetYaxis()->SetTitleOffset(1.5625);
   hframe__185->GetYaxis()->SetTitleFont(43);
   hframe__185->GetZaxis()->SetLabelFont(43);
   hframe__185->GetZaxis()->SetLabelOffset(0.007);
   hframe__185->GetZaxis()->SetLabelSize(27);
   hframe__185->GetZaxis()->SetTitleSize(33);
   hframe__185->GetZaxis()->SetTitleOffset(1);
   hframe__185->GetZaxis()->SetTitleFont(43);
   hframe__185->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis157[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_25_stack_26_stack_27 = new TH1F("StackedMCstackHist_stack_25_stack_26_stack_27","StackedMCstackHist",20, xAxis157);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMinimum(0.9829918);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMaximum(39760.84);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetDirectory(0);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetStats(0);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetLineStyle(0);
   StackedMCstackHist_stack_25_stack_26_stack_27->SetMarkerStyle(20);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_25_stack_26_stack_27->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_25_stack_26_stack_27);
   
   Double_t xAxis158[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM700Inclusive",20, xAxis158);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,161.4334);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,316.5554);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,288.9638);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,155.4596);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,227.2242);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,146.103);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,147.2964);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,161.8251);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,81.45573);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,83.78173);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,86.96706);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,81.96408);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,58.77528);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,61.15927);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,51.04481);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,51.53421);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,39.6939);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,45.01525);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,30.25874);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,8.76743);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,31.46479);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,53.29159);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,45.70353);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,28.60362);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,50.96861);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,22.42216);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,25.59137);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,38.31107);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,16.54174);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,16.60376);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,17.87268);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,16.68675);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,14.56092);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,12.68785);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,11.55946);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,14.52284);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,13.26544);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,11.06703);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,8.638714);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,5.55189);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(367.0359);
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
   Double_t xAxis159[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM700Inclusive",20, xAxis159);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2359.428);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,3873.163);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3589.164);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3005.48);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2387.85);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1900.406);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1537.253);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1236.818);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1093.068);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,942.3868);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,883.9742);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,796.5994);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,727.9533);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,658.3493);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,565.2621);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,560.6069);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,465.2669);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,417.1875);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,261.4677);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,65.6491);
   TT_stack_2_stack_2_stack_2->SetBinError(1,53.53792);
   TT_stack_2_stack_2_stack_2->SetBinError(2,68.86282);
   TT_stack_2_stack_2_stack_2->SetBinError(3,66.4325);
   TT_stack_2_stack_2_stack_2->SetBinError(4,61.17805);
   TT_stack_2_stack_2_stack_2->SetBinError(5,54.04078);
   TT_stack_2_stack_2_stack_2->SetBinError(6,48.27731);
   TT_stack_2_stack_2_stack_2->SetBinError(7,43.41926);
   TT_stack_2_stack_2_stack_2->SetBinError(8,38.91193);
   TT_stack_2_stack_2_stack_2->SetBinError(9,36.41572);
   TT_stack_2_stack_2_stack_2->SetBinError(10,34.27982);
   TT_stack_2_stack_2_stack_2->SetBinError(11,32.65975);
   TT_stack_2_stack_2_stack_2->SetBinError(12,31.47752);
   TT_stack_2_stack_2_stack_2->SetBinError(13,29.86006);
   TT_stack_2_stack_2_stack_2->SetBinError(14,28.41695);
   TT_stack_2_stack_2_stack_2->SetBinError(15,26.36975);
   TT_stack_2_stack_2_stack_2->SetBinError(16,26.30639);
   TT_stack_2_stack_2_stack_2->SetBinError(17,23.83181);
   TT_stack_2_stack_2_stack_2->SetBinError(18,22.71645);
   TT_stack_2_stack_2_stack_2->SetBinError(19,18.0514);
   TT_stack_2_stack_2_stack_2->SetBinError(20,9.086166);
   TT_stack_2_stack_2_stack_2->SetEntries(22257.12);
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
   Double_t xAxis160[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM700Inclusive",20, xAxis160);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,12027.04);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,18177.69);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,15177.68);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,12878.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,11036.67);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,8502.763);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,7639.821);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,6918.704);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,7093.453);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,5218.748);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,5766.999);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,4964.024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5368.916);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,4154.917);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,3768.033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3831.893);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,3053.051);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,3363.909);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1613.944);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,617.3523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,741.1524);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,911.4292);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,826.9169);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,768.6523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,698.5821);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,616.042);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,584.9325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,548.6332);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,549.3682);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,472.859);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,496.0931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,464.5382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,479.8107);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,421.8445);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,407.2615);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,404.7612);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,361.9851);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,378.9752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,260.0533);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,161.5777);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3184.306);
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
   Double_t xAxis161[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__186 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__186","h_SR_MVAOutputM700Inclusive",20, xAxis161);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(1,6.932821);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(2,11.30408);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(3,-5.81357);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(4,13.3235);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(5,7.96495);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(6,-1.426641);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(7,2.762325);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(8,4.883022);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(9,4.734474);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(10,8.604836);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(11,13.06072);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(12,2.442316);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(13,7.877318);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(14,10.23226);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(15,7.20649);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(16,5.676485);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(17,7.378964);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(18,9.016744);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(19,2.465927);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinContent(20,0.4500875);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(1,3.695116);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(2,4.169477);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(3,4.865195);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(4,5.017105);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(5,4.695553);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(6,4.130859);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(7,4.658085);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(8,4.200197);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(9,3.80006);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(10,3.696981);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(11,4.93949);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(12,4.276041);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(13,3.686443);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(14,4.408353);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(15,4.084773);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(16,3.556616);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(17,4.471126);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(18,3.844452);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(19,3.201991);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetBinError(20,1.981897);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetEntries(41.65101);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__186->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3108[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3108[20] = {
   14547.9,
   22367.41,
   19055.81,
   16039.4,
   13651.75,
   10549.27,
   9324.371,
   8317.348,
   8267.977,
   6244.916,
   6737.94,
   5842.587,
   6155.644,
   4874.425,
   4384.34,
   4444.034,
   3558.012,
   3826.112,
   1905.67,
   691.7689};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3108[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3108[20] = {
   743.7494,
   915.5792,
   830.8391,
   771.6134,
   702.5205,
   618.3374,
   587.0998,
   551.344,
   550.8223,
   474.3906,
   497.4881,
   465.9024,
   480.9594,
   422.9909,
   408.278,
   405.8751,
   363.0112,
   379.8167,
   260.8221,
   161.9282};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3108[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3108[20] = {
   743.7494,
   915.5792,
   830.8391,
   771.6134,
   702.5205,
   618.3374,
   587.0998,
   551.344,
   550.8223,
   474.3906,
   497.4881,
   465.9024,
   480.9594,
   422.9909,
   408.278,
   405.8751,
   363.0112,
   379.8167,
   260.8221,
   161.9282};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3108,BkgSum-SR-Inclusive_sum_errors_fy3108,BkgSum-SR-Inclusive_sum_errors_felx3108,BkgSum-SR-Inclusive_sum_errors_fehx3108,BkgSum-SR-Inclusive_sum_errors_fely3108,BkgSum-SR-Inclusive_sum_errors_fehy3108);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1234;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMinimum(476.8566);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMaximum(25558.3);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors310031043108->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors310031043108);
   
   grae->Draw("e2 ");
   Double_t xAxis162[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__187 = new TH1F("Data__187","h_SR_MVAOutputM700Inclusive",20, xAxis162);
   Data__187->SetBinContent(1,10720);
   Data__187->SetBinContent(2,20160);
   Data__187->SetBinContent(3,20040);
   Data__187->SetBinContent(4,16620);
   Data__187->SetBinContent(5,12960);
   Data__187->SetBinContent(6,12020);
   Data__187->SetBinContent(7,10420);
   Data__187->SetBinContent(8,8760);
   Data__187->SetBinContent(9,8200);
   Data__187->SetBinContent(10,7900);
   Data__187->SetBinContent(11,6940);
   Data__187->SetBinContent(12,5820);
   Data__187->SetBinContent(13,6160);
   Data__187->SetBinContent(14,5420);
   Data__187->SetBinContent(15,5220);
   Data__187->SetBinContent(16,4600);
   Data__187->SetBinContent(17,5140);
   Data__187->SetBinContent(18,3640);
   Data__187->SetBinContent(19,2000);
   Data__187->SetBinContent(20,860);
   Data__187->SetBinError(1,463.0335);
   Data__187->SetBinError(2,634.9803);
   Data__187->SetBinError(3,633.0877);
   Data__187->SetBinError(4,576.5414);
   Data__187->SetBinError(5,509.1169);
   Data__187->SetBinError(6,490.306);
   Data__187->SetBinError(7,456.5085);
   Data__187->SetBinError(8,418.569);
   Data__187->SetBinError(9,404.9691);
   Data__187->SetBinError(10,397.4921);
   Data__187->SetBinError(11,372.5587);
   Data__187->SetBinError(12,341.1744);
   Data__187->SetBinError(13,350.9986);
   Data__187->SetBinError(14,329.2416);
   Data__187->SetBinError(15,323.1099);
   Data__187->SetBinError(16,303.315);
   Data__187->SetBinError(17,320.6244);
   Data__187->SetBinError(18,269.8148);
   Data__187->SetBinError(19,200);
   Data__187->SetBinError(20,131.1488);
   Data__187->SetEntries(8680);
   Data__187->SetDirectory(0);
   Data__187->SetFillStyle(3001);
   Data__187->SetLineWidth(2);
   Data__187->SetMarkerStyle(20);
   Data__187->SetMarkerSize(1.2);
   Data__187->GetXaxis()->SetRange(1,200);
   Data__187->GetXaxis()->SetLabelFont(42);
   Data__187->GetXaxis()->SetTitleOffset(1);
   Data__187->GetXaxis()->SetTitleFont(42);
   Data__187->GetYaxis()->SetLabelFont(42);
   Data__187->GetYaxis()->SetTitleFont(42);
   Data__187->GetZaxis()->SetLabelFont(42);
   Data__187->GetZaxis()->SetTitleOffset(1);
   Data__187->GetZaxis()->SetTitleFont(42);
   Data__187->Draw("EP same");
   
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

   ci = 1234;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1234;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__188 = new TH1F("hframe_copy__188","",1000,0,1.01);
   hframe_copy__188->SetMinimum(0.01);
   hframe_copy__188->SetMaximum(162980.9);
   hframe_copy__188->SetDirectory(0);
   hframe_copy__188->SetStats(0);
   hframe_copy__188->SetLineStyle(0);
   hframe_copy__188->SetMarkerStyle(20);
   hframe_copy__188->GetXaxis()->SetLabelFont(43);
   hframe_copy__188->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__188->GetXaxis()->SetLabelSize(0);
   hframe_copy__188->GetXaxis()->SetTitleSize(0);
   hframe_copy__188->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__188->GetXaxis()->SetTitleFont(43);
   hframe_copy__188->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__188->GetYaxis()->SetLabelFont(43);
   hframe_copy__188->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__188->GetYaxis()->SetLabelSize(27);
   hframe_copy__188->GetYaxis()->SetTitleSize(33);
   hframe_copy__188->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__188->GetYaxis()->SetTitleFont(43);
   hframe_copy__188->GetZaxis()->SetLabelFont(43);
   hframe_copy__188->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__188->GetZaxis()->SetLabelSize(27);
   hframe_copy__188->GetZaxis()->SetTitleSize(33);
   hframe_copy__188->GetZaxis()->SetTitleOffset(1);
   hframe_copy__188->GetZaxis()->SetTitleFont(43);
   hframe_copy__188->Draw("sameaxis");
   
   TH1F *hframe_copy__189 = new TH1F("hframe_copy__189","",1000,0,1.01);
   hframe_copy__189->SetMinimum(0.01);
   hframe_copy__189->SetMaximum(162980.9);
   hframe_copy__189->SetDirectory(0);
   hframe_copy__189->SetStats(0);
   hframe_copy__189->SetLineStyle(0);
   hframe_copy__189->SetMarkerStyle(20);
   hframe_copy__189->GetXaxis()->SetLabelFont(43);
   hframe_copy__189->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__189->GetXaxis()->SetLabelSize(0);
   hframe_copy__189->GetXaxis()->SetTitleSize(0);
   hframe_copy__189->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__189->GetXaxis()->SetTitleFont(43);
   hframe_copy__189->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__189->GetYaxis()->SetLabelFont(43);
   hframe_copy__189->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__189->GetYaxis()->SetLabelSize(27);
   hframe_copy__189->GetYaxis()->SetTitleSize(33);
   hframe_copy__189->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__189->GetYaxis()->SetTitleFont(43);
   hframe_copy__189->GetZaxis()->SetLabelFont(43);
   hframe_copy__189->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__189->GetZaxis()->SetLabelSize(27);
   hframe_copy__189->GetZaxis()->SetTitleSize(33);
   hframe_copy__189->GetZaxis()->SetTitleOffset(1);
   hframe_copy__189->GetZaxis()->SetTitleFont(43);
   hframe_copy__189->Draw("sameaxis");
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
   MVAOutputM700_1->Modified();
   MVAOutputM700->cd();
   MVAOutputM700->Modified();
   MVAOutputM700->cd();
   MVAOutputM700->SetSelected(MVAOutputM700);
}
