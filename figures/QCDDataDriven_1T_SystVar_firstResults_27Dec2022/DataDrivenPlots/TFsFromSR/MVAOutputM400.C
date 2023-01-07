void MVAOutputM400()
{
//=========Macro generated from canvas: MVAOutputM400/MVAOutputM400
//=========  (Tue Dec 27 11:55:04 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3069[18] = {
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
   0.925};
   Double_t BackgroundStatSystError_fy3069[18] = {
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
   Double_t BackgroundStatSystError_felx3069[18] = {
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
   0.025};
   Double_t BackgroundStatSystError_fely3069[18] = {
   0.1328272,
   0.07284119,
   0.04852811,
   0.04030144,
   0.03609897,
   0.03341142,
   0.03309635,
   0.03307144,
   0.03282983,
   0.03432602,
   0.0363821,
   0.04088245,
   0.04840285,
   0.06231388,
   0.08702192,
   0.2402001,
   0.771203,
   0.9940942};
   Double_t BackgroundStatSystError_fehx3069[18] = {
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
   0.025};
   Double_t BackgroundStatSystError_fehy3069[18] = {
   0.1328272,
   0.07284119,
   0.04852811,
   0.04030144,
   0.03609897,
   0.03341142,
   0.03309635,
   0.03307144,
   0.03282983,
   0.03432602,
   0.0363821,
   0.04088245,
   0.04840285,
   0.06231388,
   0.08702192,
   0.2402001,
   0.771203,
   0.9940942};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,BackgroundStatSystError_fx3069,BackgroundStatSystError_fy3069,BackgroundStatSystError_felx3069,BackgroundStatSystError_fehx3069,BackgroundStatSystError_fely3069,BackgroundStatSystError_fehy3069);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1228;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError306130653069 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError306130653069","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMinimum(0.005315197);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMaximum(2.192913);
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
   0.1328272,
   0.07284119,
   0.04852811,
   0.04030144,
   0.03609897,
   0.03341142,
   0.03309635,
   0.03307144,
   0.03282983,
   0.03432602,
   0.0363821,
   0.04088245,
   0.04840285,
   0.06231388,
   0.08702192,
   0.2402001,
   0.771203,
   0.9940942,
   0};
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
   0.1328272,
   0.07284119,
   0.04852811,
   0.04030144,
   0.03609897,
   0.03341142,
   0.03309635,
   0.03307144,
   0.03282983,
   0.03432602,
   0.0363821,
   0.04088245,
   0.04840285,
   0.06231388,
   0.08702192,
   0.2402001,
   0.771203,
   0.9940942,
   0};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3070,BackgroundStatError_fy3070,BackgroundStatError_felx3070,BackgroundStatError_fehx3070,BackgroundStatError_fely3070,BackgroundStatError_fehy3070);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1227;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError306230663070 = new TH1F("Graph_Graph_Graph_BackgroundStatError306230663070","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMinimum(0.005315197);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMaximum(2.192913);
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
   0.8336886,
   0.9960106,
   1.156067,
   1.082882,
   1.010313,
   0.09412012};
   Double_t Graph1_felx3071[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3071[6] = {
   0.1286409,
   0.07753932,
   0.05607747,
   0.0453172,
   0.03903178,
   0.01109216};
   Double_t Graph1_fehx3071[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3071[6] = {
   0.1286409,
   0.07753932,
   0.05607747,
   0.0453172,
   0.03903178,
   0.01109216};
   grae = new TGraphAsymmErrors(6,Graph1_fx3071,Graph1_fy3071,Graph1_felx3071,Graph1_fehx3071,Graph1_fely3071,Graph1_fehy3071);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1306330673071 = new TH1F("Graph_Graph_Graph_Graph1306330673071","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1306330673071->SetMinimum(0.07472516);
   Graph_Graph_Graph_Graph1306330673071->SetMaximum(1.325056);
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
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMinimum(6.380133);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMaximum(25520.53);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,4.706609);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,46.60118);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,164.1192);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,225.6553);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,276.8897);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,435.1872);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,438.9549);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,434.4715);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,389.0218);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,408.3478);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,425.0386);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,376.0775);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,294.685);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,144.4455);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,64.68173);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,9.054348);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.2165295);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.008092977);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.717794);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,11.69981);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,19.94404);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,27.1982);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,30.01645);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,40.62321);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,37.69251);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,34.41601);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,33.18943);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,31.63804);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,36.15384);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,31.756);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,29.1177);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,16.88469);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,10.98266);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.478597);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.2444407);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.004239854);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1413.887);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,94.26571);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,896.6696);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2033.198);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3259.79);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4311.186);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4979.129);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5607.322);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5573.486);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,5464.605);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4815.654);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,4383.243);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3558.792);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2613.085);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1689.039);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,698.0145);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,169.0841);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,14.62343);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1.361152);
   TT_stack_2_stack_2_stack_2->SetBinError(1,7.609596);
   TT_stack_2_stack_2_stack_2->SetBinError(2,33.67663);
   TT_stack_2_stack_2_stack_2->SetBinError(3,50.56143);
   TT_stack_2_stack_2_stack_2->SetBinError(4,63.9461);
   TT_stack_2_stack_2_stack_2->SetBinError(5,73.82076);
   TT_stack_2_stack_2_stack_2->SetBinError(6,79.35901);
   TT_stack_2_stack_2_stack_2->SetBinError(7,84.4849);
   TT_stack_2_stack_2_stack_2->SetBinError(8,84.16243);
   TT_stack_2_stack_2_stack_2->SetBinError(9,83.21469);
   TT_stack_2_stack_2_stack_2->SetBinError(10,78.01357);
   TT_stack_2_stack_2_stack_2->SetBinError(11,73.8685);
   TT_stack_2_stack_2_stack_2->SetBinError(12,66.69561);
   TT_stack_2_stack_2_stack_2->SetBinError(13,56.82505);
   TT_stack_2_stack_2_stack_2->SetBinError(14,45.54672);
   TT_stack_2_stack_2_stack_2->SetBinError(15,29.16354);
   TT_stack_2_stack_2_stack_2->SetBinError(16,14.45903);
   TT_stack_2_stack_2_stack_2->SetBinError(17,4.119602);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.361152);
   TT_stack_2_stack_2_stack_2->SetEntries(39875.39);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,404.8129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2369.947);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5155.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7060.486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8675.146);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9885.281);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,9417.35);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,9692.265);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,10096.71);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,9429.799);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,8152.869);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,6330.252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,4362.835);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2648.293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1636.12);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,121.768);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,11.657);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2.278393e-06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,66.46008);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,238.691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,352.6396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,419.297);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,472.1102);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,503.347);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,503.3589);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,511.2053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,515.926);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,495.9118);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,464.3268);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,413.1108);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,346.0771);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,275.02);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,206.4104);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,70.52802);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,20.01347);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.002500726);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3652.734);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(1,2.720019);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(2,13.65934);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(3,62.46805);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(4,88.65143);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(5,192.5332);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(6,257.1469);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(7,402.3484);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(8,455.0629);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(9,504.2423);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(10,496.4722);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(11,387.5183);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(12,324.8907);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(13,210.695);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(14,118.1348);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(15,50.36871);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(16,12.7261);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(17,2.084136);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(18,-0.03736623);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(19,-0.3863584);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(1,1.488183);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(2,5.859305);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(3,10.31282);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(4,14.73075);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(5,18.87878);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(6,23.07237);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(7,26.74775);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(8,29.63931);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(9,31.44982);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(10,30.42473);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(11,28.13545);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(12,24.89613);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(13,20.65585);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(14,15.40187);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(15,10.7427);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(16,4.872693);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(17,2.143426);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(18,0.5525224);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(19,0.3863584);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetEntries(1838.329);
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
   503.7852,
   3313.218,
   7352.518,
   10545.93,
   13263.22,
   15299.6,
   15463.63,
   15700.22,
   15950.33,
   14653.8,
   12961.15,
   10265.12,
   7270.605,
   4481.777,
   2398.816,
   299.9065,
   26.49696,
   1.369248,
   0};
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
   66.91636,
   241.3387,
   356.8038,
   425.0162,
   478.7886,
   511.1813,
   511.7896,
   519.2289,
   523.6467,
   503.0066,
   471.5538,
   419.6633,
   351.918,
   279.2769,
   208.7496,
   72.03755,
   20.43453,
   1.361161,
   0};
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
   66.91636,
   241.3387,
   356.8038,
   425.0162,
   478.7886,
   511.1813,
   511.7896,
   519.2289,
   523.6467,
   503.0066,
   471.5538,
   419.6633,
   351.918,
   279.2769,
   208.7496,
   72.03755,
   20.43453,
   1.361161,
   0};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3072,BkgSum-SR-Inclusive_sum_errors_fy3072,BkgSum-SR-Inclusive_sum_errors_felx3072,BkgSum-SR-Inclusive_sum_errors_fehx3072,BkgSum-SR-Inclusive_sum_errors_fely3072,BkgSum-SR-Inclusive_sum_errors_fehy3072);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1226;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMinimum(18.12138);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMaximum(18121.38);
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
   Data__124->SetBinContent(1,420);
   Data__124->SetBinContent(2,3300);
   Data__124->SetBinContent(3,8500);
   Data__124->SetBinContent(4,11420);
   Data__124->SetBinContent(5,13400);
   Data__124->SetBinContent(6,1440);
   Data__124->SetBinError(1,64.80741);
   Data__124->SetBinError(2,256.9047);
   Data__124->SetBinError(3,412.3106);
   Data__124->SetBinError(4,477.9121);
   Data__124->SetBinError(5,517.6872);
   Data__124->SetBinError(6,169.7056);
   Data__124->SetEntries(1934.558);
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
      tex = new TLatex(0.19,0.885,"Data blinded in signal region");
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

   ci = 1226;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1226;
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
