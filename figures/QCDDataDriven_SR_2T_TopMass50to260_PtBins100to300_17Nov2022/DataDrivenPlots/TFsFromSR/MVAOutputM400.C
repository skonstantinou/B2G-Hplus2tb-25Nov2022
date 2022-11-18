void MVAOutputM400()
{
//=========Macro generated from canvas: MVAOutputM400/MVAOutputM400
//=========  (Fri Nov 18 13:27:19 2022) by ROOT version 6.20/02
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
   0.05794323,
   0.05227117,
   0.04290034,
   0.0349703,
   0.03015788,
   0.02749408,
   0.02494958,
   0.02418476,
   0.0237409,
   0.02382244,
   0.02397248,
   0.02481824,
   0.02617862,
   0.02808207,
   0.03193221,
   0.03754271,
   0.05122966,
   0.1013105,
   0.6886161};
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
   0.05794323,
   0.05227117,
   0.04290034,
   0.0349703,
   0.03015788,
   0.02749408,
   0.02494958,
   0.02418476,
   0.0237409,
   0.02382244,
   0.02397248,
   0.02481824,
   0.02617862,
   0.02808207,
   0.03193221,
   0.03754271,
   0.05122966,
   0.1013105,
   0.6886161};
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
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMinimum(0.1736607);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMaximum(1.826339);
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
   0.05794323,
   0.05227117,
   0.04290034,
   0.0349703,
   0.03015788,
   0.02749408,
   0.02494958,
   0.02418476,
   0.0237409,
   0.02382244,
   0.02397248,
   0.02481824,
   0.02617862,
   0.02808207,
   0.03193221,
   0.03754271,
   0.05122966,
   0.1013105,
   0.6886161};
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
   0.05794323,
   0.05227117,
   0.04290034,
   0.0349703,
   0.03015788,
   0.02749408,
   0.02494958,
   0.02418476,
   0.0237409,
   0.02382244,
   0.02397248,
   0.02481824,
   0.02617862,
   0.02808207,
   0.03193221,
   0.03754271,
   0.05122966,
   0.1013105,
   0.6886161};
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
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMinimum(0.1736607);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMaximum(1.826339);
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
   
   Double_t Graph1_fx3071[6] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3071[6] = {
   0.9458791,
   0.8926179,
   1.021607,
   0.9949866,
   1.006285,
   0.1113593};
   Double_t Graph1_felx3071[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3071[6] = {
   0.05934974,
   0.05353566,
   0.04648474,
   0.03881812,
   0.0336364,
   0.01025146};
   Double_t Graph1_fehx3071[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3071[6] = {
   0.05934974,
   0.05353566,
   0.04648474,
   0.03881812,
   0.0336364,
   0.01025146};
   grae = new TGraphAsymmErrors(6,Graph1_fx3071,Graph1_fy3071,Graph1_felx3071,Graph1_fehx3071,Graph1_fely3071,Graph1_fehy3071);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1306330673071 = new TH1F("Graph_Graph_Graph_Graph1306330673071","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1306330673071->SetMinimum(0.004409481);
   Graph_Graph_Graph_Graph1306330673071->SetMaximum(1.16479);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMinimum(0.2003657);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMaximum(52816.25);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,99.33783);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,223.7385);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,320.9227);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,421.692);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,568.1643);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,697.6473);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,862.2842);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1002.07);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,995.8938);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1000.346);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1045.872);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1125.429);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,922.6229);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,948.4775);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,707.5756);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,502.5567);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,253.1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,80.48045);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.9924585);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,18.95143);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,25.37082);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,31.15625);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,38.49857);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,40.60943);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,48.46738);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,50.55898);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,57.4014);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,48.98757);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,50.12991);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,55.25022);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,64.05372);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,47.32643);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,52.70947);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,43.93386);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,33.80656);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,18.84871);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,12.86687);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.2558676);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4082.633);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1107.654);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,2513.938);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4050.791);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,6114.636);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,8318.362);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,10338.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,12215.1);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,13395.18);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,14345.86);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,14301.99);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,14027.98);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,13329.9);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,11627.08);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,10040.2);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,7889.658);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,5430.94);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,2831.137);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,668.4971);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,16.77286);
   TT_stack_2_stack_2_stack_2->SetBinError(1,26.43336);
   TT_stack_2_stack_2_stack_2->SetBinError(2,55.91761);
   TT_stack_2_stack_2_stack_2->SetBinError(3,70.81033);
   TT_stack_2_stack_2_stack_2->SetBinError(4,86.90902);
   TT_stack_2_stack_2_stack_2->SetBinError(5,101.0473);
   TT_stack_2_stack_2_stack_2->SetBinError(6,113.2948);
   TT_stack_2_stack_2_stack_2->SetBinError(7,123.1846);
   TT_stack_2_stack_2_stack_2->SetBinError(8,128.8508);
   TT_stack_2_stack_2_stack_2->SetBinError(9,133.4594);
   TT_stack_2_stack_2_stack_2->SetBinError(10,133.3678);
   TT_stack_2_stack_2_stack_2->SetBinError(11,131.4838);
   TT_stack_2_stack_2_stack_2->SetBinError(12,128.7207);
   TT_stack_2_stack_2_stack_2->SetBinError(13,119.77);
   TT_stack_2_stack_2_stack_2->SetBinError(14,111.5621);
   TT_stack_2_stack_2_stack_2->SetBinError(15,98.61637);
   TT_stack_2_stack_2_stack_2->SetBinError(16,81.65767);
   TT_stack_2_stack_2_stack_2->SetBinError(17,58.81532);
   TT_stack_2_stack_2_stack_2->SetBinError(18,28.53573);
   TT_stack_2_stack_2_stack_2->SetBinError(19,4.159955);
   TT_stack_2_stack_2_stack_2->SetEntries(123711);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1478.341);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,3491.193);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5083.975);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,6669.879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8901.674);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,10156.68);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,11531.35);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,11416.19);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,12045.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,12156.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,11436.67);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,10678.23);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,10275.73);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,8606.573);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,6044.544);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,5429.229);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2905.738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,593.4639);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,47.33067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,152.1594);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,319.7477);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,398.2072);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,451.937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,525.2844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,569.4932);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,599.3645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,608.1472);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,634.475);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,638.4406);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,619.3134);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,606.9744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,583.496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,536.2634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,454.9091);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,417.3321);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,300.5849);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,132.3521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,44.63197);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4291.699);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(1,50.84454);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(2,112.227);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(3,203.1097);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(4,339.9658);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(5,544.5486);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(6,750.1883);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(7,1033.068);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(8,1136.069);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(9,1261.348);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(10,1272.482);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(11,1253.475);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(12,1139.92);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(13,1029.945);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(14,763.401);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(15,539.7776);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(16,343.5962);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(17,178.5642);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(18,67.89573);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(19,7.265677);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(1,7.472668);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(2,15.14291);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(3,19.87536);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(4,25.60077);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(5,31.87267);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(6,37.59574);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(7,42.28301);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(8,45.55183);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(9,47.81702);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(10,48.42164);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(11,48.85838);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(12,47.53304);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(13,43.90078);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(14,38.84187);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(15,32.77662);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(16,26.90201);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(17,19.21831);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(18,10.50668);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(19,2.554838);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetEntries(6393.874);
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
   2685.333,
   6228.869,
   9455.689,
   13206.21,
   17788.2,
   21192.65,
   24608.73,
   25813.44,
   27387.65,
   27459.21,
   26510.53,
   25133.56,
   22825.44,
   19595.25,
   14641.78,
   11362.73,
   5989.976,
   1342.441,
   65.09599};
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
   155.5968,
   325.5903,
   405.6523,
   461.825,
   536.4545,
   582.6725,
   613.9775,
   624.2919,
   650.2075,
   654.1455,
   635.5232,
   623.7706,
   597.5385,
   550.2753,
   467.5443,
   426.5875,
   306.8645,
   136.0034,
   44.82615};
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
   155.5968,
   325.5903,
   405.6523,
   461.825,
   536.4545,
   582.6725,
   613.9775,
   624.2919,
   650.2075,
   654.1455,
   635.5232,
   623.7706,
   597.5385,
   550.2753,
   467.5443,
   426.5875,
   306.8645,
   136.0034,
   44.82615};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMinimum(18.24286);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMaximum(30922.67);
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
   Data__124->SetBinContent(1,2540);
   Data__124->SetBinContent(2,5560);
   Data__124->SetBinContent(3,9660);
   Data__124->SetBinContent(4,13140);
   Data__124->SetBinContent(5,17900);
   Data__124->SetBinContent(6,2360);
   Data__124->SetBinError(1,159.3738);
   Data__124->SetBinError(2,333.4666);
   Data__124->SetBinError(3,439.5452);
   Data__124->SetBinError(4,512.6402);
   Data__124->SetBinError(5,598.331);
   Data__124->SetBinError(6,217.2556);
   Data__124->SetEntries(2623.116);
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
   MVAOutputM400_1->Modified();
   MVAOutputM400->cd();
   MVAOutputM400->Modified();
   MVAOutputM400->cd();
   MVAOutputM400->SetSelected(MVAOutputM400);
}
