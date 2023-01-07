void MVAOutputM500()
{
//=========Macro generated from canvas: MVAOutputM500/MVAOutputM500
//=========  (Tue Dec 27 11:52:05 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM500 = new TCanvas("MVAOutputM500", "MVAOutputM500",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM500->SetHighLightColor(2);
   MVAOutputM500->Range(0,0,1,1);
   MVAOutputM500->SetFillColor(0);
   MVAOutputM500->SetBorderMode(0);
   MVAOutputM500->SetBorderSize(2);
   MVAOutputM500->SetTickx(1);
   MVAOutputM500->SetTicky(1);
   MVAOutputM500->SetLeftMargin(0.16);
   MVAOutputM500->SetRightMargin(0.05);
   MVAOutputM500->SetTopMargin(0.06);
   MVAOutputM500->SetBottomMargin(0.13);
   MVAOutputM500->SetFrameFillStyle(0);
   MVAOutputM500->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM500_2
   TPad *MVAOutputM500_2 = new TPad("MVAOutputM500_2", "MVAOutputM500_2",0,0,1,0.304);
   MVAOutputM500_2->Draw();
   MVAOutputM500_2->cd();
   MVAOutputM500_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM500_2->SetFillColor(0);
   MVAOutputM500_2->SetFillStyle(4000);
   MVAOutputM500_2->SetBorderMode(0);
   MVAOutputM500_2->SetBorderSize(2);
   MVAOutputM500_2->SetTickx(1);
   MVAOutputM500_2->SetTicky(1);
   MVAOutputM500_2->SetLeftMargin(0.16);
   MVAOutputM500_2->SetRightMargin(0.05);
   MVAOutputM500_2->SetTopMargin(0);
   MVAOutputM500_2->SetBottomMargin(0.3421053);
   MVAOutputM500_2->SetFrameFillStyle(0);
   MVAOutputM500_2->SetFrameBorderMode(0);
   MVAOutputM500_2->SetFrameFillStyle(0);
   MVAOutputM500_2->SetFrameBorderMode(0);
   
   TH1F *hframe__141 = new TH1F("hframe__141","",1000,0,1.01);
   hframe__141->SetMinimum(0.3);
   hframe__141->SetMaximum(1.7);
   hframe__141->SetDirectory(0);
   hframe__141->SetStats(0);
   hframe__141->SetLineStyle(0);
   hframe__141->SetMarkerStyle(20);
   hframe__141->GetXaxis()->SetTitle("DNN Output");
   hframe__141->GetXaxis()->SetLabelFont(43);
   hframe__141->GetXaxis()->SetLabelOffset(0.007);
   hframe__141->GetXaxis()->SetLabelSize(27);
   hframe__141->GetXaxis()->SetTitleSize(33);
   hframe__141->GetXaxis()->SetTitleOffset(2.960526);
   hframe__141->GetXaxis()->SetTitleFont(43);
   hframe__141->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__141->GetYaxis()->SetNdivisions(505);
   hframe__141->GetYaxis()->SetLabelFont(43);
   hframe__141->GetYaxis()->SetLabelOffset(0.007);
   hframe__141->GetYaxis()->SetLabelSize(21);
   hframe__141->GetYaxis()->SetTitleSize(33);
   hframe__141->GetYaxis()->SetTitleOffset(1.5625);
   hframe__141->GetYaxis()->SetTitleFont(43);
   hframe__141->GetZaxis()->SetLabelFont(43);
   hframe__141->GetZaxis()->SetLabelOffset(0.007);
   hframe__141->GetZaxis()->SetLabelSize(27);
   hframe__141->GetZaxis()->SetTitleSize(33);
   hframe__141->GetZaxis()->SetTitleOffset(1);
   hframe__141->GetZaxis()->SetTitleFont(43);
   hframe__141->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3081[19] = {
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
   Double_t BackgroundStatSystError_fy3081[19] = {
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
   Double_t BackgroundStatSystError_felx3081[19] = {
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
   Double_t BackgroundStatSystError_fely3081[19] = {
   0.06084547,
   0.03760836,
   0.03073222,
   0.02765052,
   0.02591767,
   0.02408606,
   0.02401289,
   0.02346519,
   0.02447507,
   0.02553512,
   0.02722393,
   0.02857317,
   0.03001566,
   0.0323068,
   0.03573642,
   0.04436067,
   0.06627171,
   0.1549,
   0.8650263};
   Double_t BackgroundStatSystError_fehx3081[19] = {
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
   Double_t BackgroundStatSystError_fehy3081[19] = {
   0.06084547,
   0.03760836,
   0.03073222,
   0.02765052,
   0.02591767,
   0.02408606,
   0.02401289,
   0.02346519,
   0.02447507,
   0.02553512,
   0.02722393,
   0.02857317,
   0.03001566,
   0.0323068,
   0.03573642,
   0.04436067,
   0.06627171,
   0.1549,
   0.8650263};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3081,BackgroundStatSystError_fy3081,BackgroundStatSystError_felx3081,BackgroundStatSystError_fehx3081,BackgroundStatSystError_fely3081,BackgroundStatSystError_fehy3081);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1231;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError307330773081 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError307330773081","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMinimum(0.1214763);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMaximum(2.038032);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError307330773081);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3082[19] = {
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
   Double_t BackgroundStatError_fy3082[19] = {
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
   Double_t BackgroundStatError_felx3082[19] = {
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
   Double_t BackgroundStatError_fely3082[19] = {
   0.06084547,
   0.03760836,
   0.03073222,
   0.02765052,
   0.02591767,
   0.02408606,
   0.02401289,
   0.02346519,
   0.02447507,
   0.02553512,
   0.02722393,
   0.02857317,
   0.03001566,
   0.0323068,
   0.03573642,
   0.04436067,
   0.06627171,
   0.1549,
   0.8650263};
   Double_t BackgroundStatError_fehx3082[19] = {
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
   Double_t BackgroundStatError_fehy3082[19] = {
   0.06084547,
   0.03760836,
   0.03073222,
   0.02765052,
   0.02591767,
   0.02408606,
   0.02401289,
   0.02346519,
   0.02447507,
   0.02553512,
   0.02722393,
   0.02857317,
   0.03001566,
   0.0323068,
   0.03573642,
   0.04436067,
   0.06627171,
   0.1549,
   0.8650263};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3082,BackgroundStatError_fy3082,BackgroundStatError_felx3082,BackgroundStatError_fehx3082,BackgroundStatError_fely3082,BackgroundStatError_fehy3082);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1230;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError307430783082 = new TH1F("Graph_Graph_Graph_BackgroundStatError307430783082","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMinimum(0.1214763);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMaximum(2.038032);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError307430783082->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError307430783082);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx21[2] = {
   0,
   1.01};
   Double_t Graph0_fy21[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx21,Graph0_fy21);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0192021 = new TH1F("Graph_Graph_Graph_Graph0192021","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0192021->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0192021->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0192021->SetDirectory(0);
   Graph_Graph_Graph_Graph0192021->SetStats(0);
   Graph_Graph_Graph_Graph0192021->SetLineStyle(0);
   Graph_Graph_Graph_Graph0192021->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0192021->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0192021->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0192021->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0192021);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3083[6] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3083[6] = {
   1.088432,
   0.8999625,
   0.9737377,
   1.052112,
   1.053698,
   0.09634529};
   Double_t Graph1_felx3083[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3083[6] = {
   0.0625288,
   0.03753103,
   0.03273184,
   0.03160764,
   0.03000784,
   0.008515801};
   Double_t Graph1_fehx3083[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3083[6] = {
   0.0625288,
   0.03753103,
   0.03273184,
   0.03160764,
   0.03000784,
   0.008515801};
   grae = new TGraphAsymmErrors(6,Graph1_fx3083,Graph1_fy3083,Graph1_felx3083,Graph1_fehx3083,Graph1_fely3083,Graph1_fehy3083);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1307530793083 = new TH1F("Graph_Graph_Graph_Graph1307530793083","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1307530793083->SetMinimum(0.07904654);
   Graph_Graph_Graph_Graph1307530793083->SetMaximum(1.257274);
   Graph_Graph_Graph_Graph1307530793083->SetDirectory(0);
   Graph_Graph_Graph_Graph1307530793083->SetStats(0);
   Graph_Graph_Graph_Graph1307530793083->SetLineStyle(0);
   Graph_Graph_Graph_Graph1307530793083->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1307530793083->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1307530793083->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1307530793083->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1307530793083);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__142 = new TH1F("hframe_copy__142","",1000,0,1.01);
   hframe_copy__142->SetMinimum(0.3);
   hframe_copy__142->SetMaximum(1.7);
   hframe_copy__142->SetDirectory(0);
   hframe_copy__142->SetStats(0);
   hframe_copy__142->SetLineStyle(0);
   hframe_copy__142->SetMarkerStyle(20);
   hframe_copy__142->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__142->GetXaxis()->SetLabelFont(43);
   hframe_copy__142->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__142->GetXaxis()->SetLabelSize(27);
   hframe_copy__142->GetXaxis()->SetTitleSize(33);
   hframe_copy__142->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__142->GetXaxis()->SetTitleFont(43);
   hframe_copy__142->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__142->GetYaxis()->SetNdivisions(505);
   hframe_copy__142->GetYaxis()->SetLabelFont(43);
   hframe_copy__142->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__142->GetYaxis()->SetLabelSize(21);
   hframe_copy__142->GetYaxis()->SetTitleSize(33);
   hframe_copy__142->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__142->GetYaxis()->SetTitleFont(43);
   hframe_copy__142->GetZaxis()->SetLabelFont(43);
   hframe_copy__142->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__142->GetZaxis()->SetLabelSize(27);
   hframe_copy__142->GetZaxis()->SetTitleSize(33);
   hframe_copy__142->GetZaxis()->SetTitleOffset(1);
   hframe_copy__142->GetZaxis()->SetTitleFont(43);
   hframe_copy__142->Draw("sameaxis");
   MVAOutputM500_2->Modified();
   MVAOutputM500->cd();
  
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
   MVAOutputM500->cd();
  
// ------------>Primitives in pad: MVAOutputM500_1
   TPad *MVAOutputM500_1 = new TPad("MVAOutputM500_1", "MVAOutputM500_1",0,0.2897959,1,1);
   MVAOutputM500_1->Draw();
   MVAOutputM500_1->cd();
   MVAOutputM500_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM500_1->SetFillColor(0);
   MVAOutputM500_1->SetFillStyle(4000);
   MVAOutputM500_1->SetBorderMode(0);
   MVAOutputM500_1->SetBorderSize(2);
   MVAOutputM500_1->SetLogy();
   MVAOutputM500_1->SetTickx(1);
   MVAOutputM500_1->SetTicky(1);
   MVAOutputM500_1->SetLeftMargin(0.16);
   MVAOutputM500_1->SetRightMargin(0.05);
   MVAOutputM500_1->SetTopMargin(0.06);
   MVAOutputM500_1->SetBottomMargin(0.02);
   MVAOutputM500_1->SetFrameFillStyle(0);
   MVAOutputM500_1->SetFrameBorderMode(0);
   MVAOutputM500_1->SetFrameFillStyle(0);
   MVAOutputM500_1->SetFrameBorderMode(0);
   
   TH1F *hframe__143 = new TH1F("hframe__143","",1000,0,1.01);
   hframe__143->SetMinimum(0.01);
   hframe__143->SetMaximum(500000);
   hframe__143->SetDirectory(0);
   hframe__143->SetStats(0);
   hframe__143->SetLineStyle(0);
   hframe__143->SetMarkerStyle(20);
   hframe__143->GetXaxis()->SetLabelFont(43);
   hframe__143->GetXaxis()->SetLabelOffset(0.007);
   hframe__143->GetXaxis()->SetLabelSize(0);
   hframe__143->GetXaxis()->SetTitleSize(0);
   hframe__143->GetXaxis()->SetTitleOffset(0.9);
   hframe__143->GetXaxis()->SetTitleFont(43);
   hframe__143->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__143->GetYaxis()->SetLabelFont(43);
   hframe__143->GetYaxis()->SetLabelOffset(0.007);
   hframe__143->GetYaxis()->SetLabelSize(27);
   hframe__143->GetYaxis()->SetTitleSize(33);
   hframe__143->GetYaxis()->SetTitleOffset(1.5625);
   hframe__143->GetYaxis()->SetTitleFont(43);
   hframe__143->GetZaxis()->SetLabelFont(43);
   hframe__143->GetZaxis()->SetLabelOffset(0.007);
   hframe__143->GetZaxis()->SetLabelSize(27);
   hframe__143->GetZaxis()->SetTitleSize(33);
   hframe__143->GetZaxis()->SetTitleOffset(1);
   hframe__143->GetZaxis()->SetTitleFont(43);
   hframe__143->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis121[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_19_stack_20_stack_21 = new TH1F("StackedMCstackHist_stack_19_stack_20_stack_21","StackedMCstackHist",19, xAxis121);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMinimum(10.83832);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMaximum(43353.29);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetDirectory(0);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetStats(0);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetLineStyle(0);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMarkerStyle(20);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_19_stack_20_stack_21->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_19_stack_20_stack_21);
   
   Double_t xAxis122[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM500Inclusive",19, xAxis122);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,88.46597);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,342.5768);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,472.4312);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,724.726);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,784.8677);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,884.2315);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,959.3333);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,939.3631);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,968.6553);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1020.975);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,952.1001);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,869.1883);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,809.0737);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,637.0008);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,565.145);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,454.3947);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,171.0424);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,40.72769);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,1.471081);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,10.66238);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,28.26707);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,35.9928);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,54.92818);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,45.04174);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,49.81179);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,49.9495);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,50.77045);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,53.95765);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,55.8733);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,60.81217);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,48.23108);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,44.31245);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,39.03467);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,36.51069);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,34.90894);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,20.96324);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,14.31394);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.453964);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4070.15);
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
   Double_t xAxis123[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM500Inclusive",19, xAxis123);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1244.738);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,5115.657);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,7955.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,10128.89);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,11821.6);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,13216.02);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,13668.2);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,13844.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,13436.24);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,12199.69);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,10969.07);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,9636.704);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,8518.471);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,7344.56);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,5839.308);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,3928.689);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1616.641);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,296.5594);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,10.92937);
   TT_stack_2_stack_2_stack_2->SetBinError(1,27.45061);
   TT_stack_2_stack_2_stack_2->SetBinError(2,78.76258);
   TT_stack_2_stack_2_stack_2->SetBinError(3,98.62176);
   TT_stack_2_stack_2_stack_2->SetBinError(4,111.6945);
   TT_stack_2_stack_2_stack_2->SetBinError(5,120.6014);
   TT_stack_2_stack_2_stack_2->SetBinError(6,128.1182);
   TT_stack_2_stack_2_stack_2->SetBinError(7,130.5147);
   TT_stack_2_stack_2_stack_2->SetBinError(8,131.2583);
   TT_stack_2_stack_2_stack_2->SetBinError(9,129.1812);
   TT_stack_2_stack_2_stack_2->SetBinError(10,123.0746);
   TT_stack_2_stack_2_stack_2->SetBinError(11,116.3822);
   TT_stack_2_stack_2_stack_2->SetBinError(12,108.9851);
   TT_stack_2_stack_2_stack_2->SetBinError(13,102.2652);
   TT_stack_2_stack_2_stack_2->SetBinError(14,94.69523);
   TT_stack_2_stack_2_stack_2->SetBinError(15,84.35217);
   TT_stack_2_stack_2_stack_2->SetBinError(16,68.69431);
   TT_stack_2_stack_2_stack_2->SetBinError(17,44.51845);
   TT_stack_2_stack_2_stack_2->SetBinError(18,19.55134);
   TT_stack_2_stack_2_stack_2->SetBinError(19,3.722546);
   TT_stack_2_stack_2_stack_2->SetEntries(122725.2);
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
   Double_t xAxis124[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM500Inclusive",19, xAxis124);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1450.616);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,7320.076);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9749.737);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10208.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,10796.81);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,12470.84);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,11951.89);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,12312.24);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,12093.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,10063.91);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,8933.952);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,8882.721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,7115.308);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,6450.422);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4867.425);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3721.171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1619.818);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,230.383);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,35.28151);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,166.8033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,473.2295);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,548.6776);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,568.9296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,592.7393);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,625.0565);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,622.7621);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,620.0368);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,633.2572);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,579.0072);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,552.3646);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,541.0226);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,480.7942);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,454.8618);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,392.1898);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,351.1552);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,220.3946);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,84.52759);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,41.05209);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4375.123);
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
   Double_t xAxis125[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__144 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__144","h_SR_MVAOutputM500Inclusive",19, xAxis125);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(1,5.264318);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(2,35.96903);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(3,92.943);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(4,124.1571);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(5,228.9541);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(6,361.8141);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(7,484.852);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(8,663.7354);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(9,921.1084);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(10,1054.983);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(11,1250.727);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(12,1315.089);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(13,1470.927);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(14,1393.898);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(15,1234.838);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(16,883.7159);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(17,384.2997);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(18,93.35188);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(19,-0.1408262);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(1,2.269293);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(2,8.279603);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(3,12.34322);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(4,16.38075);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(5,20.82596);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(6,25.55286);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(7,30.91655);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(8,35.26962);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(9,40.25949);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(10,44.12719);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(11,47.29444);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(12,50.09656);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(13,51.96969);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(14,51.43798);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(15,49.2706);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(16,41.59935);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(17,28.24968);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(18,12.8442);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(19,2.63513);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetEntries(6380.646);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3084[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3084[19] = {
   2783.821,
   12778.31,
   18177.38,
   21062.39,
   23403.28,
   26571.1,
   26579.43,
   27095.81,
   26498.29,
   23284.57,
   20855.12,
   19388.61,
   16442.85,
   14431.98,
   11271.88,
   8104.254,
   3407.502,
   567.6702,
   47.68196};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3084[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3084[19] = {
   169.3829,
   480.5712,
   558.6312,
   582.3862,
   606.5586,
   639.9931,
   638.2489,
   635.8082,
   648.5476,
   594.5743,
   567.7584,
   553.9941,
   493.5431,
   466.2512,
   402.8165,
   359.5101,
   225.821,
   87.93212,
   41.24615};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3084[19] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3084[19] = {
   169.3829,
   480.5712,
   558.6312,
   582.3862,
   606.5586,
   639.9931,
   638.2489,
   635.8082,
   648.5476,
   594.5743,
   567.7584,
   553.9941,
   493.5431,
   466.2512,
   402.8165,
   359.5101,
   225.821,
   87.93212,
   41.24615};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3084,BkgSum-SR-Inclusive_sum_errors_fy3084,BkgSum-SR-Inclusive_sum_errors_felx3084,BkgSum-SR-Inclusive_sum_errors_fehx3084,BkgSum-SR-Inclusive_sum_errors_fely3084,BkgSum-SR-Inclusive_sum_errors_fehy3084);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1229;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMinimum(5.79223);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMaximum(30504.13);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors307630803084);
   
   grae->Draw("e2 ");
   Double_t xAxis126[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__145 = new TH1F("Data__145","h_SR_MVAOutputM500Inclusive",19, xAxis126);
   Data__145->SetBinContent(1,3030);
   Data__145->SetBinContent(2,11500);
   Data__145->SetBinContent(3,17700);
   Data__145->SetBinContent(4,22160);
   Data__145->SetBinContent(5,24660);
   Data__145->SetBinContent(6,2560);
   Data__145->SetBinError(1,174.069);
   Data__145->SetBinError(2,479.5832);
   Data__145->SetBinError(3,594.979);
   Data__145->SetBinError(4,665.7327);
   Data__145->SetBinError(5,702.282);
   Data__145->SetBinError(6,226.2742);
   Data__145->SetEntries(4157.683);
   Data__145->SetDirectory(0);
   Data__145->SetFillStyle(3001);
   Data__145->SetLineWidth(2);
   Data__145->SetMarkerStyle(20);
   Data__145->SetMarkerSize(1.2);
   Data__145->GetXaxis()->SetRange(1,200);
   Data__145->GetXaxis()->SetLabelFont(42);
   Data__145->GetXaxis()->SetTitleOffset(1);
   Data__145->GetXaxis()->SetTitleFont(42);
   Data__145->GetYaxis()->SetLabelFont(42);
   Data__145->GetYaxis()->SetTitleFont(42);
   Data__145->GetZaxis()->SetLabelFont(42);
   Data__145->GetZaxis()->SetTitleOffset(1);
   Data__145->GetZaxis()->SetTitleFont(42);
   Data__145->Draw("EP same");
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

   ci = 1229;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1229;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__146 = new TH1F("hframe_copy__146","",1000,0,1.01);
   hframe_copy__146->SetMinimum(0.01);
   hframe_copy__146->SetMaximum(500000);
   hframe_copy__146->SetDirectory(0);
   hframe_copy__146->SetStats(0);
   hframe_copy__146->SetLineStyle(0);
   hframe_copy__146->SetMarkerStyle(20);
   hframe_copy__146->GetXaxis()->SetLabelFont(43);
   hframe_copy__146->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__146->GetXaxis()->SetLabelSize(0);
   hframe_copy__146->GetXaxis()->SetTitleSize(0);
   hframe_copy__146->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__146->GetXaxis()->SetTitleFont(43);
   hframe_copy__146->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__146->GetYaxis()->SetLabelFont(43);
   hframe_copy__146->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__146->GetYaxis()->SetLabelSize(27);
   hframe_copy__146->GetYaxis()->SetTitleSize(33);
   hframe_copy__146->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__146->GetYaxis()->SetTitleFont(43);
   hframe_copy__146->GetZaxis()->SetLabelFont(43);
   hframe_copy__146->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__146->GetZaxis()->SetLabelSize(27);
   hframe_copy__146->GetZaxis()->SetTitleSize(33);
   hframe_copy__146->GetZaxis()->SetTitleOffset(1);
   hframe_copy__146->GetZaxis()->SetTitleFont(43);
   hframe_copy__146->Draw("sameaxis");
   
   TH1F *hframe_copy__147 = new TH1F("hframe_copy__147","",1000,0,1.01);
   hframe_copy__147->SetMinimum(0.01);
   hframe_copy__147->SetMaximum(500000);
   hframe_copy__147->SetDirectory(0);
   hframe_copy__147->SetStats(0);
   hframe_copy__147->SetLineStyle(0);
   hframe_copy__147->SetMarkerStyle(20);
   hframe_copy__147->GetXaxis()->SetLabelFont(43);
   hframe_copy__147->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__147->GetXaxis()->SetLabelSize(0);
   hframe_copy__147->GetXaxis()->SetTitleSize(0);
   hframe_copy__147->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__147->GetXaxis()->SetTitleFont(43);
   hframe_copy__147->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__147->GetYaxis()->SetLabelFont(43);
   hframe_copy__147->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__147->GetYaxis()->SetLabelSize(27);
   hframe_copy__147->GetYaxis()->SetTitleSize(33);
   hframe_copy__147->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__147->GetYaxis()->SetTitleFont(43);
   hframe_copy__147->GetZaxis()->SetLabelFont(43);
   hframe_copy__147->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__147->GetZaxis()->SetLabelSize(27);
   hframe_copy__147->GetZaxis()->SetTitleSize(33);
   hframe_copy__147->GetZaxis()->SetTitleOffset(1);
   hframe_copy__147->GetZaxis()->SetTitleFont(43);
   hframe_copy__147->Draw("sameaxis");
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
   MVAOutputM500_1->Modified();
   MVAOutputM500->cd();
   MVAOutputM500->Modified();
   MVAOutputM500->cd();
   MVAOutputM500->SetSelected(MVAOutputM500);
}
