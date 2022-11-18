void MVAOutputM200()
{
//=========Macro generated from canvas: MVAOutputM200/MVAOutputM200
//=========  (Fri Nov 18 13:27:20 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM200 = new TCanvas("MVAOutputM200", "MVAOutputM200",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM200->SetHighLightColor(2);
   MVAOutputM200->Range(0,0,1,1);
   MVAOutputM200->SetFillColor(0);
   MVAOutputM200->SetBorderMode(0);
   MVAOutputM200->SetBorderSize(2);
   MVAOutputM200->SetTickx(1);
   MVAOutputM200->SetTicky(1);
   MVAOutputM200->SetLeftMargin(0.16);
   MVAOutputM200->SetRightMargin(0.05);
   MVAOutputM200->SetTopMargin(0.06);
   MVAOutputM200->SetBottomMargin(0.13);
   MVAOutputM200->SetFrameFillStyle(0);
   MVAOutputM200->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM200_2
   TPad *MVAOutputM200_2 = new TPad("MVAOutputM200_2", "MVAOutputM200_2",0,0,1,0.304);
   MVAOutputM200_2->Draw();
   MVAOutputM200_2->cd();
   MVAOutputM200_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM200_2->SetFillColor(0);
   MVAOutputM200_2->SetFillStyle(4000);
   MVAOutputM200_2->SetBorderMode(0);
   MVAOutputM200_2->SetBorderSize(2);
   MVAOutputM200_2->SetTickx(1);
   MVAOutputM200_2->SetTicky(1);
   MVAOutputM200_2->SetLeftMargin(0.16);
   MVAOutputM200_2->SetRightMargin(0.05);
   MVAOutputM200_2->SetTopMargin(0);
   MVAOutputM200_2->SetBottomMargin(0.3421053);
   MVAOutputM200_2->SetFrameFillStyle(0);
   MVAOutputM200_2->SetFrameBorderMode(0);
   MVAOutputM200_2->SetFrameFillStyle(0);
   MVAOutputM200_2->SetFrameBorderMode(0);
   
   TH1F *hframe__15 = new TH1F("hframe__15","",1000,0,1.01);
   hframe__15->SetMinimum(0.3);
   hframe__15->SetMaximum(1.7);
   hframe__15->SetDirectory(0);
   hframe__15->SetStats(0);
   hframe__15->SetLineStyle(0);
   hframe__15->SetMarkerStyle(20);
   hframe__15->GetXaxis()->SetTitle("DNN Output");
   hframe__15->GetXaxis()->SetLabelFont(43);
   hframe__15->GetXaxis()->SetLabelOffset(0.007);
   hframe__15->GetXaxis()->SetLabelSize(27);
   hframe__15->GetXaxis()->SetTitleSize(33);
   hframe__15->GetXaxis()->SetTitleOffset(2.960526);
   hframe__15->GetXaxis()->SetTitleFont(43);
   hframe__15->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__15->GetYaxis()->SetNdivisions(505);
   hframe__15->GetYaxis()->SetLabelFont(43);
   hframe__15->GetYaxis()->SetLabelOffset(0.007);
   hframe__15->GetYaxis()->SetLabelSize(21);
   hframe__15->GetYaxis()->SetTitleSize(33);
   hframe__15->GetYaxis()->SetTitleOffset(1.5625);
   hframe__15->GetYaxis()->SetTitleFont(43);
   hframe__15->GetZaxis()->SetLabelFont(43);
   hframe__15->GetZaxis()->SetLabelOffset(0.007);
   hframe__15->GetZaxis()->SetLabelSize(27);
   hframe__15->GetZaxis()->SetTitleSize(33);
   hframe__15->GetZaxis()->SetTitleOffset(1);
   hframe__15->GetZaxis()->SetTitleFont(43);
   hframe__15->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3009[17] = {
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
   Double_t BackgroundStatSystError_fy3009[17] = {
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
   Double_t BackgroundStatSystError_felx3009[17] = {
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
   Double_t BackgroundStatSystError_fely3009[17] = {
   0.04250946,
   0.02300405,
   0.02428743,
   0.02029743,
   0.01835121,
   0.0168941,
   0.01675584,
   0.01771972,
   0.0204469,
   0.02513237,
   0.03157409,
   0.04148331,
   0.05750189,
   0.09052411,
   0.1681517,
   0.4376112,
   1};
   Double_t BackgroundStatSystError_fehx3009[17] = {
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
   Double_t BackgroundStatSystError_fehy3009[17] = {
   0.04250946,
   0.02300405,
   0.02428743,
   0.02029743,
   0.01835121,
   0.0168941,
   0.01675584,
   0.01771972,
   0.0204469,
   0.02513237,
   0.03157409,
   0.04148331,
   0.05750189,
   0.09052411,
   0.1681517,
   0.4376112,
   1};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,BackgroundStatSystError_fx3009,BackgroundStatSystError_fy3009,BackgroundStatSystError_felx3009,BackgroundStatSystError_fehx3009,BackgroundStatSystError_fely3009,BackgroundStatSystError_fehy3009);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1212;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError300130053009 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError300130053009","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMinimum(4.205503e-08);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMaximum(2.2);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError300130053009);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3010[18] = {
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
   Double_t BackgroundStatError_fy3010[18] = {
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
   Double_t BackgroundStatError_felx3010[18] = {
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
   Double_t BackgroundStatError_fely3010[18] = {
   0.04250946,
   0.02300405,
   0.02428743,
   0.02029743,
   0.01835121,
   0.0168941,
   0.01675584,
   0.01771972,
   0.0204469,
   0.02513237,
   0.03157409,
   0.04148331,
   0.05750189,
   0.09052411,
   0.1681517,
   0.4376112,
   1,
   0};
   Double_t BackgroundStatError_fehx3010[18] = {
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
   Double_t BackgroundStatError_fehy3010[18] = {
   0.04250946,
   0.02300405,
   0.02428743,
   0.02029743,
   0.01835121,
   0.0168941,
   0.01675584,
   0.01771972,
   0.0204469,
   0.02513237,
   0.03157409,
   0.04148331,
   0.05750189,
   0.09052411,
   0.1681517,
   0.4376112,
   1,
   0};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3010,BackgroundStatError_fy3010,BackgroundStatError_felx3010,BackgroundStatError_fehx3010,BackgroundStatError_fely3010,BackgroundStatError_fehy3010);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1211;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError300230063010 = new TH1F("Graph_Graph_Graph_BackgroundStatError300230063010","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMinimum(4.205503e-08);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMaximum(2.2);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError300230063010);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx3[2] = {
   0,
   1.01};
   Double_t Graph0_fy3[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx3,Graph0_fy3);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0123 = new TH1F("Graph_Graph_Graph_Graph0123","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0123->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0123->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0123->SetDirectory(0);
   Graph_Graph_Graph_Graph0123->SetStats(0);
   Graph_Graph_Graph_Graph0123->SetLineStyle(0);
   Graph_Graph_Graph_Graph0123->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0123);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3011[15] = {
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
   0.825};
   Double_t Graph1_fy3011[15] = {
   0.9722517,
   1.033064,
   0.9582778,
   0.961906,
   0.9636437,
   0.9924217,
   1.010755,
   0.9780265,
   0.9760841,
   0.9516947,
   0.9744473,
   0.9606696,
   0.8841182,
   0.9678021,
   1.047053};
   Double_t Graph1_felx3011[15] = {
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
   0.025};
   Double_t Graph1_fely3011[15] = {
   0.05075113,
   0.02815819,
   0.02882772,
   0.02425316,
   0.02209588,
   0.02072498,
   0.02099824,
   0.02188028,
   0.02534642,
   0.03032351,
   0.03813307,
   0.04967504,
   0.06664292,
   0.1043608,
   0.2137288};
   Double_t Graph1_fehx3011[15] = {
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
   0.025};
   Double_t Graph1_fehy3011[15] = {
   0.05075113,
   0.02815819,
   0.02882772,
   0.02425316,
   0.02209588,
   0.02072498,
   0.02099824,
   0.02188028,
   0.02534642,
   0.03032351,
   0.03813307,
   0.04967504,
   0.06664292,
   0.1043608,
   0.2137288};
   grae = new TGraphAsymmErrors(15,Graph1_fx3011,Graph1_fy3011,Graph1_felx3011,Graph1_fehx3011,Graph1_fely3011,Graph1_fehy3011);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1300330073011 = new TH1F("Graph_Graph_Graph_Graph1300330073011","Graph",100,0,0.935);
   Graph_Graph_Graph_Graph1300330073011->SetMinimum(0.7731446);
   Graph_Graph_Graph_Graph1300330073011->SetMaximum(1.305113);
   Graph_Graph_Graph_Graph1300330073011->SetDirectory(0);
   Graph_Graph_Graph_Graph1300330073011->SetStats(0);
   Graph_Graph_Graph_Graph1300330073011->SetLineStyle(0);
   Graph_Graph_Graph_Graph1300330073011->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1300330073011);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__16 = new TH1F("hframe_copy__16","",1000,0,1.01);
   hframe_copy__16->SetMinimum(0.3);
   hframe_copy__16->SetMaximum(1.7);
   hframe_copy__16->SetDirectory(0);
   hframe_copy__16->SetStats(0);
   hframe_copy__16->SetLineStyle(0);
   hframe_copy__16->SetMarkerStyle(20);
   hframe_copy__16->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__16->GetXaxis()->SetLabelFont(43);
   hframe_copy__16->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__16->GetXaxis()->SetLabelSize(27);
   hframe_copy__16->GetXaxis()->SetTitleSize(33);
   hframe_copy__16->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__16->GetXaxis()->SetTitleFont(43);
   hframe_copy__16->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__16->GetYaxis()->SetNdivisions(505);
   hframe_copy__16->GetYaxis()->SetLabelFont(43);
   hframe_copy__16->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__16->GetYaxis()->SetLabelSize(21);
   hframe_copy__16->GetYaxis()->SetTitleSize(33);
   hframe_copy__16->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__16->GetYaxis()->SetTitleFont(43);
   hframe_copy__16->GetZaxis()->SetLabelFont(43);
   hframe_copy__16->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__16->GetZaxis()->SetLabelSize(27);
   hframe_copy__16->GetZaxis()->SetTitleSize(33);
   hframe_copy__16->GetZaxis()->SetTitleOffset(1);
   hframe_copy__16->GetZaxis()->SetTitleFont(43);
   hframe_copy__16->Draw("sameaxis");
   MVAOutputM200_2->Modified();
   MVAOutputM200->cd();
  
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
   MVAOutputM200->cd();
  
// ------------>Primitives in pad: MVAOutputM200_1
   TPad *MVAOutputM200_1 = new TPad("MVAOutputM200_1", "MVAOutputM200_1",0,0.2897959,1,1);
   MVAOutputM200_1->Draw();
   MVAOutputM200_1->cd();
   MVAOutputM200_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM200_1->SetFillColor(0);
   MVAOutputM200_1->SetFillStyle(4000);
   MVAOutputM200_1->SetBorderMode(0);
   MVAOutputM200_1->SetBorderSize(2);
   MVAOutputM200_1->SetLogy();
   MVAOutputM200_1->SetTickx(1);
   MVAOutputM200_1->SetTicky(1);
   MVAOutputM200_1->SetLeftMargin(0.16);
   MVAOutputM200_1->SetRightMargin(0.05);
   MVAOutputM200_1->SetTopMargin(0.06);
   MVAOutputM200_1->SetBottomMargin(0.02);
   MVAOutputM200_1->SetFrameFillStyle(0);
   MVAOutputM200_1->SetFrameBorderMode(0);
   MVAOutputM200_1->SetFrameFillStyle(0);
   MVAOutputM200_1->SetFrameBorderMode(0);
   
   TH1F *hframe__17 = new TH1F("hframe__17","",1000,0,1.01);
   hframe__17->SetMinimum(0.01);
   hframe__17->SetMaximum(500000);
   hframe__17->SetDirectory(0);
   hframe__17->SetStats(0);
   hframe__17->SetLineStyle(0);
   hframe__17->SetMarkerStyle(20);
   hframe__17->GetXaxis()->SetLabelFont(43);
   hframe__17->GetXaxis()->SetLabelOffset(0.007);
   hframe__17->GetXaxis()->SetLabelSize(0);
   hframe__17->GetXaxis()->SetTitleSize(0);
   hframe__17->GetXaxis()->SetTitleOffset(0.9);
   hframe__17->GetXaxis()->SetTitleFont(43);
   hframe__17->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__17->GetYaxis()->SetLabelFont(43);
   hframe__17->GetYaxis()->SetLabelOffset(0.007);
   hframe__17->GetYaxis()->SetLabelSize(27);
   hframe__17->GetYaxis()->SetTitleSize(33);
   hframe__17->GetYaxis()->SetTitleOffset(1.5625);
   hframe__17->GetYaxis()->SetTitleFont(43);
   hframe__17->GetZaxis()->SetLabelFont(43);
   hframe__17->GetZaxis()->SetLabelOffset(0.007);
   hframe__17->GetZaxis()->SetLabelSize(27);
   hframe__17->GetZaxis()->SetTitleSize(33);
   hframe__17->GetZaxis()->SetTitleOffset(1);
   hframe__17->GetZaxis()->SetTitleFont(43);
   hframe__17->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis13[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_1_stack_2_stack_3 = new TH1F("StackedMCstackHist_stack_1_stack_2_stack_3","StackedMCstackHist",18, xAxis13);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMinimum(18.48408);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMaximum(73936.31);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetDirectory(0);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetStats(0);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetLineStyle(0);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMarkerStyle(20);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_1_stack_2_stack_3);
   
   Double_t xAxis14[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM200Inclusive",18, xAxis14);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,95.99243);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,378.8762);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,644.0214);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,904.694);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1041.477);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1185.829);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1121.311);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,960.0827);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,812.7004);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,506.5854);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,343.9318);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,158.0546);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,84.77723);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,33.08705);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,10.73256);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,9.370861);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,13.63463);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,25.86631);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,50.34421);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,60.18553);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,74.84798);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,84.85008);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,77.58788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,59.85347);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,76.86156);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,51.19055);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,34.73306);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,25.92725);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,18.34349);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,9.193365);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,4.457688);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,5.844701);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1706.037);
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
   Double_t xAxis15[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM200Inclusive",18, xAxis15);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2015.248);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,7011.642);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,13304.69);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,18428.92);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,23613.47);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,28046.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,29597.78);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,26134.9);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,20040.78);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,13407.32);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,8471.097);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,5016.189);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2633.14);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1088.825);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,264.1702);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,11.87515);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.9735957);
   TT_stack_2_stack_2_stack_2->SetBinError(1,34.47435);
   TT_stack_2_stack_2_stack_2->SetBinError(2,64.29112);
   TT_stack_2_stack_2_stack_2->SetBinError(3,125.0576);
   TT_stack_2_stack_2_stack_2->SetBinError(4,147.12);
   TT_stack_2_stack_2_stack_2->SetBinError(5,166.6509);
   TT_stack_2_stack_2_stack_2->SetBinError(6,181.3253);
   TT_stack_2_stack_2_stack_2->SetBinError(7,186.5787);
   TT_stack_2_stack_2_stack_2->SetBinError(8,175.2829);
   TT_stack_2_stack_2_stack_2->SetBinError(9,153.7952);
   TT_stack_2_stack_2_stack_2->SetBinError(10,125.8916);
   TT_stack_2_stack_2_stack_2->SetBinError(11,100.0847);
   TT_stack_2_stack_2_stack_2->SetBinError(12,77.00923);
   TT_stack_2_stack_2_stack_2->SetBinError(13,55.85957);
   TT_stack_2_stack_2_stack_2->SetBinError(14,36.17026);
   TT_stack_2_stack_2_stack_2->SetBinError(15,17.79685);
   TT_stack_2_stack_2_stack_2->SetBinError(16,3.634987);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.9735956);
   TT_stack_2_stack_2_stack_2->SetEntries(173080.9);
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
   Double_t xAxis16[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM200Inclusive",18, xAxis16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1663.503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,5638.684);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9113.49);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,13372.28);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,14820.22);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,16978.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,15127.82);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13762.81);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,9533.241);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,6786.007);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,4587.441);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2611.992);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1263.45);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,655.3111);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,183.5266);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,51.47722);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,156.121);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,291.603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,543.6564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,644.5344);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,701.0033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,754.5743);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,741.1511);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,699.895);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,597.0519);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,502.1735);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,409.6952);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,312.6109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,221.2578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,156.493);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,74.87058);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,31.07129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3481.844);
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
   Double_t xAxis17[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__18 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__18","h_SR_MVAOutputM200Inclusive",18, xAxis17);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(1,8.717503);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(2,28.13117);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(3,75.52363);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(4,127.7281);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(5,116.7467);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(6,74.55077);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(7,81.19304);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(8,64.79743);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(9,21.50712);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(10,15.96704);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(11,1.404806);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(12,-0.1487921);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(13,1.653064);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(14,0.6363024);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(15,-0.8932719);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(1,3.358726);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(2,7.232781);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(3,14.0856);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(4,15.3705);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(5,16.28283);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(6,15.86489);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(7,13.97075);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(8,12.05106);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(9,9.040886);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(10,6.884972);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(11,4.899727);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(12,2.865052);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(13,1.858336);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(14,0.8794932);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(15,0.8932719);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetEntries(250.5634);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3012[18] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3012[18] = {
   3774.743,
   13029.2,
   23062.21,
   32705.9,
   39475.17,
   46210.2,
   45846.91,
   40857.79,
   30386.72,
   20699.92,
   13402.47,
   7786.236,
   3981.368,
   1777.223,
   458.4294,
   72.72323,
   0.9735957,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3012[18] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3012[18] = {
   160.4623,
   299.7245,
   560.1216,
   663.8458,
   724.4173,
   780.6797,
   768.2034,
   723.9886,
   621.3144,
   520.2379,
   423.1708,
   322.9988,
   228.9362,
   160.8815,
   77.08568,
   31.8245,
   0.9735956,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3012[18] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3012[18] = {
   160.4623,
   299.7245,
   560.1216,
   663.8458,
   724.4173,
   780.6797,
   768.2034,
   723.9886,
   621.3144,
   520.2379,
   423.1708,
   322.9988,
   228.9362,
   160.8815,
   77.08568,
   31.8245,
   0.9735956,
   0};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3012,BkgSum-SR-Inclusive_sum_errors_fy3012,BkgSum-SR-Inclusive_sum_errors_felx3012,BkgSum-SR-Inclusive_sum_errors_fehx3012,BkgSum-SR-Inclusive_sum_errors_fely3012,BkgSum-SR-Inclusive_sum_errors_fehy3012);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1210;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMinimum(51.68996);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMaximum(51689.96);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors300430083012);
   
   grae->Draw("e2 ");
   Double_t xAxis18[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__19 = new TH1F("Data__19","h_SR_MVAOutputM200Inclusive",18, xAxis18);
   Data__19->SetBinContent(1,3670);
   Data__19->SetBinContent(2,13460);
   Data__19->SetBinContent(3,22100);
   Data__19->SetBinContent(4,31460);
   Data__19->SetBinContent(5,38040);
   Data__19->SetBinContent(6,45860);
   Data__19->SetBinContent(7,46340);
   Data__19->SetBinContent(8,39960);
   Data__19->SetBinContent(9,29660);
   Data__19->SetBinContent(10,19700);
   Data__19->SetBinContent(11,13060);
   Data__19->SetBinContent(12,7480);
   Data__19->SetBinContent(13,3520);
   Data__19->SetBinContent(14,1720);
   Data__19->SetBinContent(15,480);
   Data__19->SetBinError(1,191.5724);
   Data__19->SetBinError(2,366.8787);
   Data__19->SetBinError(3,664.8308);
   Data__19->SetBinError(4,793.2213);
   Data__19->SetBinError(5,872.2385);
   Data__19->SetBinError(6,957.7056);
   Data__19->SetBinError(7,962.7045);
   Data__19->SetBinError(8,893.9799);
   Data__19->SetBinError(9,770.1948);
   Data__19->SetBinError(10,627.6942);
   Data__19->SetBinError(11,511.0773);
   Data__19->SetBinError(12,386.7816);
   Data__19->SetBinError(13,265.33);
   Data__19->SetBinError(14,185.4724);
   Data__19->SetBinError(15,97.97959);
   Data__19->SetEntries(16265.66);
   Data__19->SetDirectory(0);
   Data__19->SetFillStyle(3001);
   Data__19->SetLineWidth(2);
   Data__19->SetMarkerStyle(20);
   Data__19->SetMarkerSize(1.2);
   Data__19->GetXaxis()->SetRange(1,200);
   Data__19->GetXaxis()->SetLabelFont(42);
   Data__19->GetXaxis()->SetTitleOffset(1);
   Data__19->GetXaxis()->SetTitleFont(42);
   Data__19->GetYaxis()->SetLabelFont(42);
   Data__19->GetYaxis()->SetTitleFont(42);
   Data__19->GetZaxis()->SetLabelFont(42);
   Data__19->GetZaxis()->SetTitleOffset(1);
   Data__19->GetZaxis()->SetTitleFont(42);
   Data__19->Draw("EP same");
   
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

   ci = 1210;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1210;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__20 = new TH1F("hframe_copy__20","",1000,0,1.01);
   hframe_copy__20->SetMinimum(0.01);
   hframe_copy__20->SetMaximum(500000);
   hframe_copy__20->SetDirectory(0);
   hframe_copy__20->SetStats(0);
   hframe_copy__20->SetLineStyle(0);
   hframe_copy__20->SetMarkerStyle(20);
   hframe_copy__20->GetXaxis()->SetLabelFont(43);
   hframe_copy__20->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__20->GetXaxis()->SetLabelSize(0);
   hframe_copy__20->GetXaxis()->SetTitleSize(0);
   hframe_copy__20->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__20->GetXaxis()->SetTitleFont(43);
   hframe_copy__20->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__20->GetYaxis()->SetLabelFont(43);
   hframe_copy__20->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__20->GetYaxis()->SetLabelSize(27);
   hframe_copy__20->GetYaxis()->SetTitleSize(33);
   hframe_copy__20->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__20->GetYaxis()->SetTitleFont(43);
   hframe_copy__20->GetZaxis()->SetLabelFont(43);
   hframe_copy__20->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__20->GetZaxis()->SetLabelSize(27);
   hframe_copy__20->GetZaxis()->SetTitleSize(33);
   hframe_copy__20->GetZaxis()->SetTitleOffset(1);
   hframe_copy__20->GetZaxis()->SetTitleFont(43);
   hframe_copy__20->Draw("sameaxis");
   
   TH1F *hframe_copy__21 = new TH1F("hframe_copy__21","",1000,0,1.01);
   hframe_copy__21->SetMinimum(0.01);
   hframe_copy__21->SetMaximum(500000);
   hframe_copy__21->SetDirectory(0);
   hframe_copy__21->SetStats(0);
   hframe_copy__21->SetLineStyle(0);
   hframe_copy__21->SetMarkerStyle(20);
   hframe_copy__21->GetXaxis()->SetLabelFont(43);
   hframe_copy__21->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__21->GetXaxis()->SetLabelSize(0);
   hframe_copy__21->GetXaxis()->SetTitleSize(0);
   hframe_copy__21->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__21->GetXaxis()->SetTitleFont(43);
   hframe_copy__21->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__21->GetYaxis()->SetLabelFont(43);
   hframe_copy__21->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__21->GetYaxis()->SetLabelSize(27);
   hframe_copy__21->GetYaxis()->SetTitleSize(33);
   hframe_copy__21->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__21->GetYaxis()->SetTitleFont(43);
   hframe_copy__21->GetZaxis()->SetLabelFont(43);
   hframe_copy__21->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__21->GetZaxis()->SetLabelSize(27);
   hframe_copy__21->GetZaxis()->SetTitleSize(33);
   hframe_copy__21->GetZaxis()->SetTitleOffset(1);
   hframe_copy__21->GetZaxis()->SetTitleFont(43);
   hframe_copy__21->Draw("sameaxis");
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
   MVAOutputM200_1->Modified();
   MVAOutputM200->cd();
   MVAOutputM200->Modified();
   MVAOutputM200->cd();
   MVAOutputM200->SetSelected(MVAOutputM200);
}
