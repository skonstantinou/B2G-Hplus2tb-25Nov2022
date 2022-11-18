void MVAOutputM800()
{
//=========Macro generated from canvas: MVAOutputM800/MVAOutputM800
//=========  (Fri Nov 18 13:27:35 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM800 = new TCanvas("MVAOutputM800", "MVAOutputM800",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM800->SetHighLightColor(2);
   MVAOutputM800->Range(0,0,1,1);
   MVAOutputM800->SetFillColor(0);
   MVAOutputM800->SetBorderMode(0);
   MVAOutputM800->SetBorderSize(2);
   MVAOutputM800->SetTickx(1);
   MVAOutputM800->SetTicky(1);
   MVAOutputM800->SetLeftMargin(0.16);
   MVAOutputM800->SetRightMargin(0.05);
   MVAOutputM800->SetTopMargin(0.06);
   MVAOutputM800->SetBottomMargin(0.13);
   MVAOutputM800->SetFrameFillStyle(0);
   MVAOutputM800->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM800_2
   TPad *MVAOutputM800_2 = new TPad("MVAOutputM800_2", "MVAOutputM800_2",0,0,1,0.304);
   MVAOutputM800_2->Draw();
   MVAOutputM800_2->cd();
   MVAOutputM800_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM800_2->SetFillColor(0);
   MVAOutputM800_2->SetFillStyle(4000);
   MVAOutputM800_2->SetBorderMode(0);
   MVAOutputM800_2->SetBorderSize(2);
   MVAOutputM800_2->SetTickx(1);
   MVAOutputM800_2->SetTicky(1);
   MVAOutputM800_2->SetLeftMargin(0.16);
   MVAOutputM800_2->SetRightMargin(0.05);
   MVAOutputM800_2->SetTopMargin(0);
   MVAOutputM800_2->SetBottomMargin(0.3421053);
   MVAOutputM800_2->SetFrameFillStyle(0);
   MVAOutputM800_2->SetFrameBorderMode(0);
   MVAOutputM800_2->SetFrameFillStyle(0);
   MVAOutputM800_2->SetFrameBorderMode(0);
   
   TH1F *hframe__204 = new TH1F("hframe__204","",1000,0,1.01);
   hframe__204->SetMinimum(0.3);
   hframe__204->SetMaximum(1.7);
   hframe__204->SetDirectory(0);
   hframe__204->SetStats(0);
   hframe__204->SetLineStyle(0);
   hframe__204->SetMarkerStyle(20);
   hframe__204->GetXaxis()->SetTitle("DNN Output");
   hframe__204->GetXaxis()->SetLabelFont(43);
   hframe__204->GetXaxis()->SetLabelOffset(0.007);
   hframe__204->GetXaxis()->SetLabelSize(27);
   hframe__204->GetXaxis()->SetTitleSize(33);
   hframe__204->GetXaxis()->SetTitleOffset(2.960526);
   hframe__204->GetXaxis()->SetTitleFont(43);
   hframe__204->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__204->GetYaxis()->SetNdivisions(505);
   hframe__204->GetYaxis()->SetLabelFont(43);
   hframe__204->GetYaxis()->SetLabelOffset(0.007);
   hframe__204->GetYaxis()->SetLabelSize(21);
   hframe__204->GetYaxis()->SetTitleSize(33);
   hframe__204->GetYaxis()->SetTitleOffset(1.5625);
   hframe__204->GetYaxis()->SetTitleFont(43);
   hframe__204->GetZaxis()->SetLabelFont(43);
   hframe__204->GetZaxis()->SetLabelOffset(0.007);
   hframe__204->GetZaxis()->SetLabelSize(27);
   hframe__204->GetZaxis()->SetTitleSize(33);
   hframe__204->GetZaxis()->SetTitleOffset(1);
   hframe__204->GetZaxis()->SetTitleFont(43);
   hframe__204->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3117[20] = {
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
   Double_t BackgroundStatSystError_fy3117[20] = {
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
   Double_t BackgroundStatSystError_felx3117[20] = {
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
   Double_t BackgroundStatSystError_fely3117[20] = {
   0.01723209,
   0.01064403,
   0.01024331,
   0.01052612,
   0.01106498,
   0.01139071,
   0.01192911,
   0.01239852,
   0.01275685,
   0.01312831,
   0.01348787,
   0.01360832,
   0.0141647,
   0.01469294,
   0.01490623,
   0.01539274,
   0.0157532,
   0.01645288,
   0.0180693,
   0.02838561};
   Double_t BackgroundStatSystError_fehx3117[20] = {
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
   Double_t BackgroundStatSystError_fehy3117[20] = {
   0.01723209,
   0.01064403,
   0.01024331,
   0.01052612,
   0.01106498,
   0.01139071,
   0.01192911,
   0.01239852,
   0.01275685,
   0.01312831,
   0.01348787,
   0.01360832,
   0.0141647,
   0.01469294,
   0.01490623,
   0.01539274,
   0.0157532,
   0.01645288,
   0.0180693,
   0.02838561};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3117,BackgroundStatSystError_fy3117,BackgroundStatSystError_felx3117,BackgroundStatSystError_fehx3117,BackgroundStatSystError_fely3117,BackgroundStatSystError_fehy3117);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1239;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError310931133117 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError310931133117","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMinimum(0.9659373);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMaximum(1.034063);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError310931133117);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3118[20] = {
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
   Double_t BackgroundStatError_fy3118[20] = {
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
   Double_t BackgroundStatError_felx3118[20] = {
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
   Double_t BackgroundStatError_fely3118[20] = {
   0.01723209,
   0.01064403,
   0.01024331,
   0.01052612,
   0.01106498,
   0.01139071,
   0.01192911,
   0.01239852,
   0.01275685,
   0.01312831,
   0.01348787,
   0.01360832,
   0.0141647,
   0.01469294,
   0.01490623,
   0.01539274,
   0.0157532,
   0.01645288,
   0.0180693,
   0.02838561};
   Double_t BackgroundStatError_fehx3118[20] = {
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
   Double_t BackgroundStatError_fehy3118[20] = {
   0.01723209,
   0.01064403,
   0.01024331,
   0.01052612,
   0.01106498,
   0.01139071,
   0.01192911,
   0.01239852,
   0.01275685,
   0.01312831,
   0.01348787,
   0.01360832,
   0.0141647,
   0.01469294,
   0.01490623,
   0.01539274,
   0.0157532,
   0.01645288,
   0.0180693,
   0.02838561};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3118,BackgroundStatError_fy3118,BackgroundStatError_felx3118,BackgroundStatError_fehx3118,BackgroundStatError_fely3118,BackgroundStatError_fehy3118);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1238;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError311031143118 = new TH1F("Graph_Graph_Graph_BackgroundStatError311031143118","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMinimum(0.9659373);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMaximum(1.034063);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError311031143118);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx30[2] = {
   0,
   1.01};
   Double_t Graph0_fy30[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx30,Graph0_fy30);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0282930 = new TH1F("Graph_Graph_Graph_Graph0282930","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0282930->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0282930->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0282930->SetDirectory(0);
   Graph_Graph_Graph_Graph0282930->SetStats(0);
   Graph_Graph_Graph_Graph0282930->SetLineStyle(0);
   Graph_Graph_Graph_Graph0282930->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0282930);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3119[20] = {
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
   Double_t Graph1_fy3119[20] = {
   0.831395,
   0.9022116,
   0.889964,
   0.9094079,
   0.9346166,
   0.9393746,
   0.9752492,
   0.9455597,
   0.9675758,
   1.025204,
   0.899059,
   0.9772421,
   0.9536872,
   0.9581292,
   0.9292852,
   1.032372,
   1.006132,
   0.9503622,
   0.943627,
   0.9842322};
   Double_t Graph1_felx3119[20] = {
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
   Double_t Graph1_fely3119[20] = {
   0.02435816,
   0.01657738,
   0.01547588,
   0.01590078,
   0.016735,
   0.01743173,
   0.01832606,
   0.01863014,
   0.01943723,
   0.02049998,
   0.01935812,
   0.02083961,
   0.02100205,
   0.0216309,
   0.02178877,
   0.02377829,
   0.02362959,
   0.02397734,
   0.02570132,
   0.04151733};
   Double_t Graph1_fehx3119[20] = {
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
   Double_t Graph1_fehy3119[20] = {
   0.02435816,
   0.01657738,
   0.01547588,
   0.01590078,
   0.016735,
   0.01743173,
   0.01832606,
   0.01863014,
   0.01943723,
   0.02049998,
   0.01935812,
   0.02083961,
   0.02100205,
   0.0216309,
   0.02178877,
   0.02377829,
   0.02362959,
   0.02397734,
   0.02570132,
   0.04151733};
   grae = new TGraphAsymmErrors(20,Graph1_fx3119,Graph1_fy3119,Graph1_felx3119,Graph1_fehx3119,Graph1_fely3119,Graph1_fehy3119);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1311131153119 = new TH1F("Graph_Graph_Graph_Graph1311131153119","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1311131153119->SetMinimum(0.7821255);
   Graph_Graph_Graph_Graph1311131153119->SetMaximum(1.081062);
   Graph_Graph_Graph_Graph1311131153119->SetDirectory(0);
   Graph_Graph_Graph_Graph1311131153119->SetStats(0);
   Graph_Graph_Graph_Graph1311131153119->SetLineStyle(0);
   Graph_Graph_Graph_Graph1311131153119->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1311131153119);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__205 = new TH1F("hframe_copy__205","",1000,0,1.01);
   hframe_copy__205->SetMinimum(0.3);
   hframe_copy__205->SetMaximum(1.7);
   hframe_copy__205->SetDirectory(0);
   hframe_copy__205->SetStats(0);
   hframe_copy__205->SetLineStyle(0);
   hframe_copy__205->SetMarkerStyle(20);
   hframe_copy__205->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__205->GetXaxis()->SetLabelFont(43);
   hframe_copy__205->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__205->GetXaxis()->SetLabelSize(27);
   hframe_copy__205->GetXaxis()->SetTitleSize(33);
   hframe_copy__205->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__205->GetXaxis()->SetTitleFont(43);
   hframe_copy__205->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__205->GetYaxis()->SetNdivisions(505);
   hframe_copy__205->GetYaxis()->SetLabelFont(43);
   hframe_copy__205->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__205->GetYaxis()->SetLabelSize(21);
   hframe_copy__205->GetYaxis()->SetTitleSize(33);
   hframe_copy__205->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__205->GetYaxis()->SetTitleFont(43);
   hframe_copy__205->GetZaxis()->SetLabelFont(43);
   hframe_copy__205->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__205->GetZaxis()->SetLabelSize(27);
   hframe_copy__205->GetZaxis()->SetTitleSize(33);
   hframe_copy__205->GetZaxis()->SetTitleOffset(1);
   hframe_copy__205->GetZaxis()->SetTitleFont(43);
   hframe_copy__205->Draw("sameaxis");
   MVAOutputM800_2->Modified();
   MVAOutputM800->cd();
  
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
   MVAOutputM800->cd();
  
// ------------>Primitives in pad: MVAOutputM800_1
   TPad *MVAOutputM800_1 = new TPad("MVAOutputM800_1", "MVAOutputM800_1",0,0.2897959,1,1);
   MVAOutputM800_1->Draw();
   MVAOutputM800_1->cd();
   MVAOutputM800_1->Range(-0.204557,-2.167839,1.073924,6.224134);
   MVAOutputM800_1->SetFillColor(0);
   MVAOutputM800_1->SetFillStyle(4000);
   MVAOutputM800_1->SetBorderMode(0);
   MVAOutputM800_1->SetBorderSize(2);
   MVAOutputM800_1->SetLogy();
   MVAOutputM800_1->SetTickx(1);
   MVAOutputM800_1->SetTicky(1);
   MVAOutputM800_1->SetLeftMargin(0.16);
   MVAOutputM800_1->SetRightMargin(0.05);
   MVAOutputM800_1->SetTopMargin(0.06);
   MVAOutputM800_1->SetBottomMargin(0.02);
   MVAOutputM800_1->SetFrameFillStyle(0);
   MVAOutputM800_1->SetFrameBorderMode(0);
   MVAOutputM800_1->SetFrameFillStyle(0);
   MVAOutputM800_1->SetFrameBorderMode(0);
   
   TH1F *hframe__206 = new TH1F("hframe__206","",1000,0,1.01);
   hframe__206->SetMinimum(0.01);
   hframe__206->SetMaximum(525552.1);
   hframe__206->SetDirectory(0);
   hframe__206->SetStats(0);
   hframe__206->SetLineStyle(0);
   hframe__206->SetMarkerStyle(20);
   hframe__206->GetXaxis()->SetLabelFont(43);
   hframe__206->GetXaxis()->SetLabelOffset(0.007);
   hframe__206->GetXaxis()->SetLabelSize(0);
   hframe__206->GetXaxis()->SetTitleSize(0);
   hframe__206->GetXaxis()->SetTitleOffset(0.9);
   hframe__206->GetXaxis()->SetTitleFont(43);
   hframe__206->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__206->GetYaxis()->SetLabelFont(43);
   hframe__206->GetYaxis()->SetLabelOffset(0.007);
   hframe__206->GetYaxis()->SetLabelSize(27);
   hframe__206->GetYaxis()->SetTitleSize(33);
   hframe__206->GetYaxis()->SetTitleOffset(1.5625);
   hframe__206->GetYaxis()->SetTitleFont(43);
   hframe__206->GetZaxis()->SetLabelFont(43);
   hframe__206->GetZaxis()->SetLabelOffset(0.007);
   hframe__206->GetZaxis()->SetLabelSize(27);
   hframe__206->GetZaxis()->SetTitleSize(33);
   hframe__206->GetZaxis()->SetTitleOffset(1);
   hframe__206->GetZaxis()->SetTitleFont(43);
   hframe__206->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis175[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_28_stack_29_stack_30 = new TH1F("StackedMCstackHist_stack_28_stack_29_stack_30","StackedMCstackHist",20, xAxis175);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMinimum(134.9295);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMaximum(109970.6);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetDirectory(0);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetStats(0);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetLineStyle(0);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMarkerStyle(20);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_28_stack_29_stack_30);
   
   Double_t xAxis176[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM800Inclusive",20, xAxis176);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,620.1755);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1473.926);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1623.336);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1520.642);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1362.313);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1374.745);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1449.974);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1164.617);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1210.11);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1190.988);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1289.509);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1303.75);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,1277.813);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1062.919);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,1176.027);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,1023.92);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,1113.759);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,1007.237);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,1018.915);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,366.0323);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,49.515);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,77.56971);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,90.59559);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,86.41961);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,78.3367);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,86.77552);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,77.20818);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,85.21378);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,70.84592);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,69.49731);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,73.50026);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,84.63297);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,82.35521);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,66.3739);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,67.80111);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,64.06534);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,71.34027);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,65.65375);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,62.30309);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,36.30265);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5173.507);
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
   Double_t xAxis177[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM800Inclusive",20, xAxis177);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,25423.09);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,59769.55);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,63366.47);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,60172.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,55268.38);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,51417.43);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,47246.99);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,43673.43);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,41270.55);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,39310.35);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,37926.29);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,36391.03);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,34161.52);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,32278);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,30874.54);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,29067.77);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,27829.2);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,25703.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,21721.67);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,8902.648);
   TT_stack_2_stack_2_stack_2->SetBinError(1,166.1963);
   TT_stack_2_stack_2_stack_2->SetBinError(2,255.5261);
   TT_stack_2_stack_2_stack_2->SetBinError(3,263.7117);
   TT_stack_2_stack_2_stack_2->SetBinError(4,257.2147);
   TT_stack_2_stack_2_stack_2->SetBinError(5,246.5093);
   TT_stack_2_stack_2_stack_2->SetBinError(6,237.7321);
   TT_stack_2_stack_2_stack_2->SetBinError(7,228.24);
   TT_stack_2_stack_2_stack_2->SetBinError(8,219.2424);
   TT_stack_2_stack_2_stack_2->SetBinError(9,213.2022);
   TT_stack_2_stack_2_stack_2->SetBinError(10,208.3811);
   TT_stack_2_stack_2_stack_2->SetBinError(11,204.8312);
   TT_stack_2_stack_2_stack_2->SetBinError(12,200.6755);
   TT_stack_2_stack_2_stack_2->SetBinError(13,194.5919);
   TT_stack_2_stack_2_stack_2->SetBinError(14,189.0606);
   TT_stack_2_stack_2_stack_2->SetBinError(15,184.8638);
   TT_stack_2_stack_2_stack_2->SetBinError(16,179.5592);
   TT_stack_2_stack_2_stack_2->SetBinError(17,175.5368);
   TT_stack_2_stack_2_stack_2->SetBinError(18,168.334);
   TT_stack_2_stack_2_stack_2->SetBinError(19,154.462);
   TT_stack_2_stack_2_stack_2->SetBinError(20,99.17905);
   TT_stack_2_stack_2_stack_2->SetEntries(700717.4);
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
   Double_t xAxis178[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM800Inclusive",20, xAxis178);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1981.92);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,4417.397);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9327.807);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10243.94);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,10113.25);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9036.193);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,9380.496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,9648.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,8740.138);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,8288.963);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,8767.712);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,7309.424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,7803.362);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,7613.896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,7097.8);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,6426.141);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,7096.04);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,6350.634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,5830.031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2151.389);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,450.7225);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,645.8677);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,708.3524);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,706.9293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,691.7435);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,657.2278);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,649.5649);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,633.2753);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,613.5781);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,601.6907);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,609.5109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,572.3975);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,574.9193);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,567.4061);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,549.331);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,528.7923);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,535.1768);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,513.064);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,488.646);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,306.4784);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3154.25);
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
   Double_t xAxis179[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__207 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__207","h_SR_MVAOutputM800Inclusive",20, xAxis179);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(1,4.913011);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(2,13.23691);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(3,17.36956);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(4,40.84852);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(5,33.69321);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(6,48.76018);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(7,88.06957);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(8,69.64427);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(9,60.58778);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(10,96.62845);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(11,73.92859);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(12,93.38343);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(13,129.5038);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(14,156.8982);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(15,147.9646);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(16,158.1372);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(17,212.3956);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(18,219.2625);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(19,285.5157);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(20,182.9626);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(1,3.806236);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(2,5.314935);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(3,6.712881);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(4,8.719968);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(5,9.749984);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(6,10.68761);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(7,11.84597);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(8,12.39552);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(9,12.85979);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(10,13.86237);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(11,14.56677);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(12,15.6474);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(13,17.12146);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(14,17.90591);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(15,19.49637);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(16,20.70725);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(17,22.66455);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(18,25.05384);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(19,28.5525);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(20,23.2448);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetEntries(842.8916);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3120[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3120[20] = {
   28025.19,
   65660.88,
   74317.61,
   71936.91,
   66743.95,
   61828.37,
   58077.46,
   54486.25,
   51220.79,
   48790.3,
   47983.5,
   45004.2,
   43242.69,
   40954.81,
   39148.37,
   36517.84,
   36038.99,
   33061.08,
   28570.61,
   11420.07};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3120[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3120[20] = {
   482.9324,
   698.8961,
   761.2585,
   757.2165,
   738.5205,
   704.2691,
   692.8125,
   675.5488,
   653.416,
   640.5344,
   647.1953,
   612.4314,
   612.5198,
   601.7466,
   583.5547,
   562.1096,
   567.7295,
   543.9498,
   516.251,
   324.1656};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3120[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3120[20] = {
   482.9324,
   698.8961,
   761.2585,
   757.2165,
   738.5205,
   704.2691,
   692.8125,
   675.5488,
   653.416,
   640.5344,
   647.1953,
   612.4314,
   612.5198,
   601.7466,
   583.5547,
   562.1096,
   567.7295,
   543.9498,
   516.251,
   324.1656};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3120,BkgSum-SR-Inclusive_sum_errors_fy3120,BkgSum-SR-Inclusive_sum_errors_felx3120,BkgSum-SR-Inclusive_sum_errors_fehx3120,BkgSum-SR-Inclusive_sum_errors_fely3120,BkgSum-SR-Inclusive_sum_errors_fehy3120);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1237;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMinimum(4697.607);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMaximum(81477.16);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors311231163120);
   
   grae->Draw("e2 ");
   Double_t xAxis180[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__208 = new TH1F("Data__208","h_SR_MVAOutputM800Inclusive",20, xAxis180);
   Data__208->SetBinContent(1,23300);
   Data__208->SetBinContent(2,59240);
   Data__208->SetBinContent(3,66140);
   Data__208->SetBinContent(4,65420);
   Data__208->SetBinContent(5,62380);
   Data__208->SetBinContent(6,58080);
   Data__208->SetBinContent(7,56640);
   Data__208->SetBinContent(8,51520);
   Data__208->SetBinContent(9,49560);
   Data__208->SetBinContent(10,50020);
   Data__208->SetBinContent(11,43140);
   Data__208->SetBinContent(12,43980);
   Data__208->SetBinContent(13,41240);
   Data__208->SetBinContent(14,39240);
   Data__208->SetBinContent(15,36380);
   Data__208->SetBinContent(16,37700);
   Data__208->SetBinContent(17,36260);
   Data__208->SetBinContent(18,31420);
   Data__208->SetBinContent(19,26960);
   Data__208->SetBinContent(20,11240);
   Data__208->SetBinError(1,682.6419);
   Data__208->SetBinError(2,1088.485);
   Data__208->SetBinError(3,1150.13);
   Data__208->SetBinError(4,1143.853);
   Data__208->SetBinError(5,1116.96);
   Data__208->SetBinError(6,1077.775);
   Data__208->SetBinError(7,1064.331);
   Data__208->SetBinError(8,1015.086);
   Data__208->SetBinError(9,995.5903);
   Data__208->SetBinError(10,1000.2);
   Data__208->SetBinError(11,928.8703);
   Data__208->SetBinError(12,937.8699);
   Data__208->SetBinError(13,908.185);
   Data__208->SetBinError(14,885.8894);
   Data__208->SetBinError(15,852.9947);
   Data__208->SetBinError(16,868.3317);
   Data__208->SetBinError(17,851.5868);
   Data__208->SetBinError(18,792.7168);
   Data__208->SetBinError(19,734.3024);
   Data__208->SetBinError(20,474.1308);
   Data__208->SetEntries(44493);
   Data__208->SetDirectory(0);
   Data__208->SetFillStyle(3001);
   Data__208->SetLineWidth(2);
   Data__208->SetMarkerStyle(20);
   Data__208->SetMarkerSize(1.2);
   Data__208->GetXaxis()->SetRange(1,200);
   Data__208->GetXaxis()->SetLabelFont(42);
   Data__208->GetXaxis()->SetTitleOffset(1);
   Data__208->GetXaxis()->SetTitleFont(42);
   Data__208->GetYaxis()->SetLabelFont(42);
   Data__208->GetYaxis()->SetTitleFont(42);
   Data__208->GetZaxis()->SetLabelFont(42);
   Data__208->GetZaxis()->SetTitleOffset(1);
   Data__208->GetZaxis()->SetTitleFont(42);
   Data__208->Draw("EP same");
   
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

   ci = 1237;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1237;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__209 = new TH1F("hframe_copy__209","",1000,0,1.01);
   hframe_copy__209->SetMinimum(0.01);
   hframe_copy__209->SetMaximum(525552.1);
   hframe_copy__209->SetDirectory(0);
   hframe_copy__209->SetStats(0);
   hframe_copy__209->SetLineStyle(0);
   hframe_copy__209->SetMarkerStyle(20);
   hframe_copy__209->GetXaxis()->SetLabelFont(43);
   hframe_copy__209->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__209->GetXaxis()->SetLabelSize(0);
   hframe_copy__209->GetXaxis()->SetTitleSize(0);
   hframe_copy__209->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__209->GetXaxis()->SetTitleFont(43);
   hframe_copy__209->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__209->GetYaxis()->SetLabelFont(43);
   hframe_copy__209->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__209->GetYaxis()->SetLabelSize(27);
   hframe_copy__209->GetYaxis()->SetTitleSize(33);
   hframe_copy__209->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__209->GetYaxis()->SetTitleFont(43);
   hframe_copy__209->GetZaxis()->SetLabelFont(43);
   hframe_copy__209->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__209->GetZaxis()->SetLabelSize(27);
   hframe_copy__209->GetZaxis()->SetTitleSize(33);
   hframe_copy__209->GetZaxis()->SetTitleOffset(1);
   hframe_copy__209->GetZaxis()->SetTitleFont(43);
   hframe_copy__209->Draw("sameaxis");
   
   TH1F *hframe_copy__210 = new TH1F("hframe_copy__210","",1000,0,1.01);
   hframe_copy__210->SetMinimum(0.01);
   hframe_copy__210->SetMaximum(525552.1);
   hframe_copy__210->SetDirectory(0);
   hframe_copy__210->SetStats(0);
   hframe_copy__210->SetLineStyle(0);
   hframe_copy__210->SetMarkerStyle(20);
   hframe_copy__210->GetXaxis()->SetLabelFont(43);
   hframe_copy__210->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__210->GetXaxis()->SetLabelSize(0);
   hframe_copy__210->GetXaxis()->SetTitleSize(0);
   hframe_copy__210->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__210->GetXaxis()->SetTitleFont(43);
   hframe_copy__210->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__210->GetYaxis()->SetLabelFont(43);
   hframe_copy__210->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__210->GetYaxis()->SetLabelSize(27);
   hframe_copy__210->GetYaxis()->SetTitleSize(33);
   hframe_copy__210->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__210->GetYaxis()->SetTitleFont(43);
   hframe_copy__210->GetZaxis()->SetLabelFont(43);
   hframe_copy__210->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__210->GetZaxis()->SetLabelSize(27);
   hframe_copy__210->GetZaxis()->SetTitleSize(33);
   hframe_copy__210->GetZaxis()->SetTitleOffset(1);
   hframe_copy__210->GetZaxis()->SetTitleFont(43);
   hframe_copy__210->Draw("sameaxis");
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
   MVAOutputM800_1->Modified();
   MVAOutputM800->cd();
   MVAOutputM800->Modified();
   MVAOutputM800->cd();
   MVAOutputM800->SetSelected(MVAOutputM800);
}
