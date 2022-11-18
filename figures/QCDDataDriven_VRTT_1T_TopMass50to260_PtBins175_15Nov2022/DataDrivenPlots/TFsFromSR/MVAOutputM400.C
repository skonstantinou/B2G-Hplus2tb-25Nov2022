void MVAOutputM400()
{
//=========Macro generated from canvas: MVAOutputM400/MVAOutputM400
//=========  (Fri Nov 18 13:27:24 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM400 = new TCanvas("MVAOutputM400", "MVAOutputM400",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM400->SetHighLightColor(2);
   MVAOutputM400->Range(0,0,1,1);
   MVAOutputM400->SetFillColor(0);
   MVAOutputM400->SetBorderMode(0);
   MVAOutputM400->SetBorderSize(2);
   MVAOutputM400->SetTickx(1);
   MVAOutputM400->SetTicky(1);
   MVAOutputM400->SetLeftMargin(0.16);
   MVAOutputM400->SetRightMargin(0.05);
   MVAOutputM400->SetTopMargin(0.06);
   MVAOutputM400->SetBottomMargin(0.13);
   MVAOutputM400->SetFrameFillStyle(0);
   MVAOutputM400->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM400_2
   TPad *MVAOutputM400_2 = new TPad("MVAOutputM400_2", "MVAOutputM400_2",0,0,1,0.304);
   MVAOutputM400_2->Draw();
   MVAOutputM400_2->cd();
   MVAOutputM400_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM400_2->SetFillColor(0);
   MVAOutputM400_2->SetFillStyle(4000);
   MVAOutputM400_2->SetBorderMode(0);
   MVAOutputM400_2->SetBorderSize(2);
   MVAOutputM400_2->SetTickx(1);
   MVAOutputM400_2->SetTicky(1);
   MVAOutputM400_2->SetLeftMargin(0.16);
   MVAOutputM400_2->SetRightMargin(0.05);
   MVAOutputM400_2->SetTopMargin(0);
   MVAOutputM400_2->SetBottomMargin(0.3421053);
   MVAOutputM400_2->SetFrameFillStyle(0);
   MVAOutputM400_2->SetFrameBorderMode(0);
   MVAOutputM400_2->SetFrameFillStyle(0);
   MVAOutputM400_2->SetFrameBorderMode(0);
   
   TH1F *hframe__120 = new TH1F("hframe__120","",1000,0,1.01);
   hframe__120->SetMinimum(0.3);
   hframe__120->SetMaximum(1.7);
   hframe__120->SetDirectory(0);
   hframe__120->SetStats(0);
   hframe__120->SetLineStyle(0);
   hframe__120->SetMarkerStyle(20);
   hframe__120->GetXaxis()->SetTitle("DNN Output");
   hframe__120->GetXaxis()->SetLabelFont(43);
   hframe__120->GetXaxis()->SetLabelOffset(0.007);
   hframe__120->GetXaxis()->SetLabelSize(27);
   hframe__120->GetXaxis()->SetTitleSize(33);
   hframe__120->GetXaxis()->SetTitleOffset(2.960526);
   hframe__120->GetXaxis()->SetTitleFont(43);
   hframe__120->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__120->GetYaxis()->SetNdivisions(505);
   hframe__120->GetYaxis()->SetLabelFont(43);
   hframe__120->GetYaxis()->SetLabelOffset(0.007);
   hframe__120->GetYaxis()->SetLabelSize(21);
   hframe__120->GetYaxis()->SetTitleSize(33);
   hframe__120->GetYaxis()->SetTitleOffset(1.5625);
   hframe__120->GetYaxis()->SetTitleFont(43);
   hframe__120->GetZaxis()->SetLabelFont(43);
   hframe__120->GetZaxis()->SetLabelOffset(0.007);
   hframe__120->GetZaxis()->SetLabelSize(27);
   hframe__120->GetZaxis()->SetTitleSize(33);
   hframe__120->GetZaxis()->SetTitleOffset(1);
   hframe__120->GetZaxis()->SetTitleFont(43);
   hframe__120->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3069[19] = {
   0.05,
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
   Double_t BackgroundStatSystError_fy3069[19] = {
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
   Double_t BackgroundStatSystError_felx3069[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3069[19] = {
   0.0503372,
   0.04126727,
   0.03188456,
   0.02534818,
   0.0222055,
   0.02060613,
   0.01982838,
   0.01999933,
   0.02056057,
   0.02149255,
   0.02273474,
   0.02459217,
   0.02691342,
   0.02916776,
   0.0322858,
   0.03689667,
   0.05104585,
   0.1001278,
   0.4491457};
   Double_t BackgroundStatSystError_fehx3069[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3069[19] = {
   0.0503372,
   0.04126727,
   0.03188456,
   0.02534818,
   0.0222055,
   0.02060613,
   0.01982838,
   0.01999933,
   0.02056057,
   0.02149255,
   0.02273474,
   0.02459217,
   0.02691342,
   0.02916776,
   0.0322858,
   0.03689667,
   0.05104585,
   0.1001278,
   0.4491457};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3069,BackgroundStatSystError_fy3069,BackgroundStatSystError_felx3069,BackgroundStatSystError_fehx3069,BackgroundStatSystError_fely3069,BackgroundStatSystError_fehy3069);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1227;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError306130653069 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError306130653069","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMinimum(0.4610251);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMaximum(1.538975);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError306130653069);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3070[19] = {
   0.05,
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
   Double_t BackgroundStatError_fy3070[19] = {
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
   Double_t BackgroundStatError_felx3070[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fely3070[19] = {
   0.0503372,
   0.04126727,
   0.03188456,
   0.02534818,
   0.0222055,
   0.02060613,
   0.01982838,
   0.01999933,
   0.02056057,
   0.02149255,
   0.02273474,
   0.02459217,
   0.02691342,
   0.02916776,
   0.0322858,
   0.03689667,
   0.05104585,
   0.1001278,
   0.4491457};
   Double_t BackgroundStatError_fehx3070[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fehy3070[19] = {
   0.0503372,
   0.04126727,
   0.03188456,
   0.02534818,
   0.0222055,
   0.02060613,
   0.01982838,
   0.01999933,
   0.02056057,
   0.02149255,
   0.02273474,
   0.02459217,
   0.02691342,
   0.02916776,
   0.0322858,
   0.03689667,
   0.05104585,
   0.1001278,
   0.4491457};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3070,BackgroundStatError_fy3070,BackgroundStatError_felx3070,BackgroundStatError_fehx3070,BackgroundStatError_fely3070,BackgroundStatError_fehy3070);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1226;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError306230663070 = new TH1F("Graph_Graph_Graph_BackgroundStatError306230663070","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMinimum(0.4610251);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMaximum(1.538975);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError306230663070);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx18[2] = {
   0,
   1.01};
   Double_t Graph0_fy18[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx18,Graph0_fy18);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0161718 = new TH1F("Graph_Graph_Graph_Graph0161718","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0161718->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0161718->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0161718->SetDirectory(0);
   Graph_Graph_Graph_Graph0161718->SetStats(0);
   Graph_Graph_Graph_Graph0161718->SetLineStyle(0);
   Graph_Graph_Graph_Graph0161718->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0161718);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3071[19] = {
   0.05,
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
   Double_t Graph1_fy3071[19] = {
   0.9799925,
   0.9294915,
   0.8991032,
   0.9901246,
   1.004078,
   1.113374,
   0.9542679,
   0.989075,
   0.9467219,
   0.9402042,
   0.9835139,
   0.9869794,
   0.9711313,
   0.9949906,
   0.9348287,
   0.8718747,
   1.106959,
   1.043633,
   1.751179};
   Double_t Graph1_felx3071[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3071[19] = {
   0.0616116,
   0.04865181,
   0.03723705,
   0.03140485,
   0.02776283,
   0.02720406,
   0.02401481,
   0.0246194,
   0.02449329,
   0.02574212,
   0.0274472,
   0.03007463,
   0.03219269,
   0.03537779,
   0.03806917,
   0.04147085,
   0.06434068,
   0.1205083,
   0.7831509};
   Double_t Graph1_fehx3071[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3071[19] = {
   0.0616116,
   0.04865181,
   0.03723705,
   0.03140485,
   0.02776283,
   0.02720406,
   0.02401481,
   0.0246194,
   0.02449329,
   0.02574212,
   0.0274472,
   0.03007463,
   0.03219269,
   0.03537779,
   0.03806917,
   0.04147085,
   0.06434068,
   0.1205083,
   0.7831509};
   grae = new TGraphAsymmErrors(19,Graph1_fx3071,Graph1_fy3071,Graph1_felx3071,Graph1_fehx3071,Graph1_fely3071,Graph1_fehy3071);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1306330673071 = new TH1F("Graph_Graph_Graph_Graph1306330673071","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1306330673071->SetMinimum(0.6600113);
   Graph_Graph_Graph_Graph1306330673071->SetMaximum(2.704722);
   Graph_Graph_Graph_Graph1306330673071->SetDirectory(0);
   Graph_Graph_Graph_Graph1306330673071->SetStats(0);
   Graph_Graph_Graph_Graph1306330673071->SetLineStyle(0);
   Graph_Graph_Graph_Graph1306330673071->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1306330673071);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__121 = new TH1F("hframe_copy__121","",1000,0,1.01);
   hframe_copy__121->SetMinimum(0.3);
   hframe_copy__121->SetMaximum(1.7);
   hframe_copy__121->SetDirectory(0);
   hframe_copy__121->SetStats(0);
   hframe_copy__121->SetLineStyle(0);
   hframe_copy__121->SetMarkerStyle(20);
   hframe_copy__121->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__121->GetXaxis()->SetLabelFont(43);
   hframe_copy__121->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__121->GetXaxis()->SetLabelSize(27);
   hframe_copy__121->GetXaxis()->SetTitleSize(33);
   hframe_copy__121->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__121->GetXaxis()->SetTitleFont(43);
   hframe_copy__121->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__121->GetYaxis()->SetNdivisions(505);
   hframe_copy__121->GetYaxis()->SetLabelFont(43);
   hframe_copy__121->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__121->GetYaxis()->SetLabelSize(21);
   hframe_copy__121->GetYaxis()->SetTitleSize(33);
   hframe_copy__121->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__121->GetYaxis()->SetTitleFont(43);
   hframe_copy__121->GetZaxis()->SetLabelFont(43);
   hframe_copy__121->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__121->GetZaxis()->SetLabelSize(27);
   hframe_copy__121->GetZaxis()->SetTitleSize(33);
   hframe_copy__121->GetZaxis()->SetTitleOffset(1);
   hframe_copy__121->GetZaxis()->SetTitleFont(43);
   hframe_copy__121->Draw("sameaxis");
   MVAOutputM400_2->Modified();
   MVAOutputM400->cd();
  
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
   MVAOutputM400->cd();
  
// ------------>Primitives in pad: MVAOutputM400_1
   TPad *MVAOutputM400_1 = new TPad("MVAOutputM400_1", "MVAOutputM400_1",0,0.2897959,1,1);
   MVAOutputM400_1->Draw();
   MVAOutputM400_1->cd();
   MVAOutputM400_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM400_1->SetFillColor(0);
   MVAOutputM400_1->SetFillStyle(4000);
   MVAOutputM400_1->SetBorderMode(0);
   MVAOutputM400_1->SetBorderSize(2);
   MVAOutputM400_1->SetLogy();
   MVAOutputM400_1->SetTickx(1);
   MVAOutputM400_1->SetTicky(1);
   MVAOutputM400_1->SetLeftMargin(0.16);
   MVAOutputM400_1->SetRightMargin(0.05);
   MVAOutputM400_1->SetTopMargin(0.06);
   MVAOutputM400_1->SetBottomMargin(0.02);
   MVAOutputM400_1->SetFrameFillStyle(0);
   MVAOutputM400_1->SetFrameBorderMode(0);
   MVAOutputM400_1->SetFrameFillStyle(0);
   MVAOutputM400_1->SetFrameBorderMode(0);
   
   TH1F *hframe__122 = new TH1F("hframe__122","",1000,0,1.01);
   hframe__122->SetMinimum(0.01);
   hframe__122->SetMaximum(500000);
   hframe__122->SetDirectory(0);
   hframe__122->SetStats(0);
   hframe__122->SetLineStyle(0);
   hframe__122->SetMarkerStyle(20);
   hframe__122->GetXaxis()->SetLabelFont(43);
   hframe__122->GetXaxis()->SetLabelOffset(0.007);
   hframe__122->GetXaxis()->SetLabelSize(0);
   hframe__122->GetXaxis()->SetTitleSize(0);
   hframe__122->GetXaxis()->SetTitleOffset(0.9);
   hframe__122->GetXaxis()->SetTitleFont(43);
   hframe__122->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__122->GetYaxis()->SetLabelFont(43);
   hframe__122->GetYaxis()->SetLabelOffset(0.007);
   hframe__122->GetYaxis()->SetLabelSize(27);
   hframe__122->GetYaxis()->SetTitleSize(33);
   hframe__122->GetYaxis()->SetTitleOffset(1.5625);
   hframe__122->GetYaxis()->SetTitleFont(43);
   hframe__122->GetZaxis()->SetLabelFont(43);
   hframe__122->GetZaxis()->SetLabelOffset(0.007);
   hframe__122->GetZaxis()->SetLabelSize(27);
   hframe__122->GetZaxis()->SetTitleSize(33);
   hframe__122->GetZaxis()->SetTitleOffset(1);
   hframe__122->GetZaxis()->SetTitleFont(43);
   hframe__122->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis103[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_16_stack_17_stack_18 = new TH1F("StackedMCstackHist_stack_16_stack_17_stack_18","StackedMCstackHist",19, xAxis103);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMinimum(13.23737);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMaximum(52949.49);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetDirectory(0);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetStats(0);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetLineStyle(0);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMarkerStyle(20);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_16_stack_17_stack_18);
   
   Double_t xAxis104[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM400Inclusive",19, xAxis104);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,54.65266);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,190.9122);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,358.2119);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,519.544);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,692.8351);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,784.1296);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,897.4144);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,855.8246);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,871.4593);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,713.2144);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,548.7333);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,594.1091);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,471.7764);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,452.1424);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,290.2411);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,232.2133);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,142.5674);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,41.0591);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.6985754);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,9.762338);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,25.6145);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,36.99502);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,45.01056);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,50.90692);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,55.63793);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,75.42157);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,69.76886);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,61.40675);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,54.37801);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,58.43744);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,45.18962);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,42.41516);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,70.09415);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,33.65926);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,39.78828);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,20.92669);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,11.65832);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.7589026);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1782.534);
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
   Double_t xAxis105[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM400Inclusive",19, xAxis105);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1434.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4387.456);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,7276.019);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,11690.11);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,16056.45);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,19045.61);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,20684.55);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,20263.15);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,19106.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,17852.59);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,16191.84);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,13806.8);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,11691.08);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,9794.696);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,7802.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,5679.655);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,3118.906);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,765.1974);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,33.07579);
   TT_stack_2_stack_2_stack_2->SetBinError(1,28.88263);
   TT_stack_2_stack_2_stack_2->SetBinError(2,71.58724);
   TT_stack_2_stack_2_stack_2->SetBinError(3,92.28064);
   TT_stack_2_stack_2_stack_2->SetBinError(4,117.0228);
   TT_stack_2_stack_2_stack_2->SetBinError(5,137.0046);
   TT_stack_2_stack_2_stack_2->SetBinError(6,149.5258);
   TT_stack_2_stack_2_stack_2->SetBinError(7,155.7834);
   TT_stack_2_stack_2_stack_2->SetBinError(8,154.3958);
   TT_stack_2_stack_2_stack_2->SetBinError(9,150.0547);
   TT_stack_2_stack_2_stack_2->SetBinError(10,145.1837);
   TT_stack_2_stack_2_stack_2->SetBinError(11,138.1227);
   TT_stack_2_stack_2_stack_2->SetBinError(12,127.7309);
   TT_stack_2_stack_2_stack_2->SetBinError(13,117.6017);
   TT_stack_2_stack_2_stack_2->SetBinError(14,107.7651);
   TT_stack_2_stack_2_stack_2->SetBinError(15,96.27043);
   TT_stack_2_stack_2_stack_2->SetBinError(16,81.90556);
   TT_stack_2_stack_2_stack_2->SetBinError(17,60.90681);
   TT_stack_2_stack_2_stack_2->SetBinError(18,30.06067);
   TT_stack_2_stack_2_stack_2->SetBinError(19,6.262791);
   TT_stack_2_stack_2_stack_2->SetEntries(176177.1);
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
   Double_t xAxis106[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM400Inclusive",19, xAxis106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1092.79);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,3275.388);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5334.248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7868.625);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9304.459);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,10258.98);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,11511.47);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,11517.58);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,11583.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,9811.014);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,9369.891);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,7423.252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,6578.175);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,5652.81);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4808.178);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,4227.203);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2086.512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,631.0306);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,23.33003);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,126.3262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,315.0587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,401.3641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,493.2622);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,559.7702);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,599.134);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,632.9512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,630.336);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,628.3424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,589.8564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,574.3564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,519.3201);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,488.6463);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,445.583);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,403.8325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,362.8466);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,265.2872);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,140.2541);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,24.86024);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3603.358);
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
   Double_t xAxis107[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__123 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__123","h_SR_MVAOutputM400Inclusive",19, xAxis107);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(1,8.432367);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(2,11.4307);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(3,19.41842);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(4,36.66442);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(5,58.57176);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(6,65.33152);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(7,63.86994);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(8,60.11896);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(9,49.90157);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(10,62.17113);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(11,58.46236);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(12,48.50901);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(13,45.88752);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(14,28.42442);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(15,12.15437);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(16,20.8801);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(17,-1.517838);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(18,-2.300752);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(19,-0.4790959);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(1,2.509552);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(2,5.823165);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(3,7.672223);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(4,9.561589);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(5,10.97811);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(6,12.13548);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(7,13.83079);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(8,13.97276);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(9,13.20465);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(10,12.68485);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(11,11.70199);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(12,10.43938);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(13,9.583086);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(14,8.280103);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(15,6.848111);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(16,6.035108);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(17,4.191936);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(18,2.498507);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(19,0.4790959);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetEntries(246.3322);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3072[19] = {
   0.05,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3072[19] = {
   2581.652,
   7853.757,
   12968.48,
   20078.28,
   26053.74,
   30088.71,
   33093.43,
   32636.55,
   31561.54,
   28376.81,
   26110.46,
   21824.16,
   18741.03,
   15899.65,
   12900.76,
   10139.07,
   5347.985,
   1437.287,
   57.1044};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3072[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3072[19] = {
   129.9532,
   324.1031,
   413.4943,
   508.9478,
   578.5364,
   620.0121,
   656.1891,
   652.7092,
   648.9232,
   609.89,
   593.6144,
   536.7035,
   504.3852,
   463.7572,
   416.5113,
   374.098,
   272.9925,
   143.9124,
   25.6482};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3072[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3072[19] = {
   129.9532,
   324.1031,
   413.4943,
   508.9478,
   578.5364,
   620.0121,
   656.1891,
   652.7092,
   648.9232,
   609.89,
   593.6144,
   536.7035,
   504.3852,
   463.7572,
   416.5113,
   374.098,
   272.9925,
   143.9124,
   25.6482};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3072,BkgSum-SR-Inclusive_sum_errors_fy3072,BkgSum-SR-Inclusive_sum_errors_felx3072,BkgSum-SR-Inclusive_sum_errors_fehx3072,BkgSum-SR-Inclusive_sum_errors_fely3072,BkgSum-SR-Inclusive_sum_errors_fehy3072);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMinimum(28.31058);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMaximum(37121.44);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors306430683072);
   
   grae->Draw("e2 ");
   Double_t xAxis108[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__124 = new TH1F("Data__124","h_SR_MVAOutputM400Inclusive",19, xAxis108);
   Data__124->SetBinContent(1,2530);
   Data__124->SetBinContent(2,7300);
   Data__124->SetBinContent(3,11660);
   Data__124->SetBinContent(4,19880);
   Data__124->SetBinContent(5,26160);
   Data__124->SetBinContent(6,33500);
   Data__124->SetBinContent(7,31580);
   Data__124->SetBinContent(8,32280);
   Data__124->SetBinContent(9,29880);
   Data__124->SetBinContent(10,26680);
   Data__124->SetBinContent(11,25680);
   Data__124->SetBinContent(12,21540);
   Data__124->SetBinContent(13,18200);
   Data__124->SetBinContent(14,15820);
   Data__124->SetBinContent(15,12060);
   Data__124->SetBinContent(16,8840);
   Data__124->SetBinContent(17,5920);
   Data__124->SetBinContent(18,1500);
   Data__124->SetBinContent(19,100);
   Data__124->SetBinError(1,159.0597);
   Data__124->SetBinError(2,382.0995);
   Data__124->SetBinError(3,482.9079);
   Data__124->SetBinError(4,630.5553);
   Data__124->SetBinError(5,723.3257);
   Data__124->SetBinError(6,818.5353);
   Data__124->SetBinError(7,794.7327);
   Data__124->SetBinError(8,803.4924);
   Data__124->SetBinError(9,773.0459);
   Data__124->SetBinError(10,730.4793);
   Data__124->SetBinError(11,716.6589);
   Data__124->SetBinError(12,656.3536);
   Data__124->SetBinError(13,603.3241);
   Data__124->SetBinError(14,562.4944);
   Data__124->SetBinError(15,491.1212);
   Data__124->SetBinError(16,420.4759);
   Data__124->SetBinError(17,344.093);
   Data__124->SetBinError(18,173.2051);
   Data__124->SetBinError(19,44.72136);
   Data__124->SetEntries(16618.99);
   Data__124->SetDirectory(0);
   Data__124->SetFillStyle(3001);
   Data__124->SetLineWidth(2);
   Data__124->SetMarkerStyle(20);
   Data__124->SetMarkerSize(1.2);
   Data__124->GetXaxis()->SetRange(1,200);
   Data__124->GetXaxis()->SetLabelFont(42);
   Data__124->GetXaxis()->SetTitleOffset(1);
   Data__124->GetXaxis()->SetTitleFont(42);
   Data__124->GetYaxis()->SetLabelFont(42);
   Data__124->GetYaxis()->SetTitleFont(42);
   Data__124->GetZaxis()->SetLabelFont(42);
   Data__124->GetZaxis()->SetTitleOffset(1);
   Data__124->GetZaxis()->SetTitleFont(42);
   Data__124->Draw("EP same");
   
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

   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__125 = new TH1F("hframe_copy__125","",1000,0,1.01);
   hframe_copy__125->SetMinimum(0.01);
   hframe_copy__125->SetMaximum(500000);
   hframe_copy__125->SetDirectory(0);
   hframe_copy__125->SetStats(0);
   hframe_copy__125->SetLineStyle(0);
   hframe_copy__125->SetMarkerStyle(20);
   hframe_copy__125->GetXaxis()->SetLabelFont(43);
   hframe_copy__125->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__125->GetXaxis()->SetLabelSize(0);
   hframe_copy__125->GetXaxis()->SetTitleSize(0);
   hframe_copy__125->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__125->GetXaxis()->SetTitleFont(43);
   hframe_copy__125->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__125->GetYaxis()->SetLabelFont(43);
   hframe_copy__125->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__125->GetYaxis()->SetLabelSize(27);
   hframe_copy__125->GetYaxis()->SetTitleSize(33);
   hframe_copy__125->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__125->GetYaxis()->SetTitleFont(43);
   hframe_copy__125->GetZaxis()->SetLabelFont(43);
   hframe_copy__125->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__125->GetZaxis()->SetLabelSize(27);
   hframe_copy__125->GetZaxis()->SetTitleSize(33);
   hframe_copy__125->GetZaxis()->SetTitleOffset(1);
   hframe_copy__125->GetZaxis()->SetTitleFont(43);
   hframe_copy__125->Draw("sameaxis");
   
   TH1F *hframe_copy__126 = new TH1F("hframe_copy__126","",1000,0,1.01);
   hframe_copy__126->SetMinimum(0.01);
   hframe_copy__126->SetMaximum(500000);
   hframe_copy__126->SetDirectory(0);
   hframe_copy__126->SetStats(0);
   hframe_copy__126->SetLineStyle(0);
   hframe_copy__126->SetMarkerStyle(20);
   hframe_copy__126->GetXaxis()->SetLabelFont(43);
   hframe_copy__126->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__126->GetXaxis()->SetLabelSize(0);
   hframe_copy__126->GetXaxis()->SetTitleSize(0);
   hframe_copy__126->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__126->GetXaxis()->SetTitleFont(43);
   hframe_copy__126->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__126->GetYaxis()->SetLabelFont(43);
   hframe_copy__126->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__126->GetYaxis()->SetLabelSize(27);
   hframe_copy__126->GetYaxis()->SetTitleSize(33);
   hframe_copy__126->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__126->GetYaxis()->SetTitleFont(43);
   hframe_copy__126->GetZaxis()->SetLabelFont(43);
   hframe_copy__126->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__126->GetZaxis()->SetLabelSize(27);
   hframe_copy__126->GetZaxis()->SetTitleSize(33);
   hframe_copy__126->GetZaxis()->SetTitleOffset(1);
   hframe_copy__126->GetZaxis()->SetTitleFont(43);
   hframe_copy__126->Draw("sameaxis");
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
   MVAOutputM400_1->Modified();
   MVAOutputM400->cd();
   MVAOutputM400->Modified();
   MVAOutputM400->cd();
   MVAOutputM400->SetSelected(MVAOutputM400);
}
