void MVAOutputM500()
{
//=========Macro generated from canvas: MVAOutputM500/MVAOutputM500
//=========  (Fri Nov 18 13:27:31 2022) by ROOT version 6.20/02
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
   0.03407383,
   0.02196785,
   0.01521347,
   0.0124432,
   0.01133872,
   0.01076311,
   0.01047734,
   0.01038732,
   0.01043644,
   0.01083583,
   0.01103215,
   0.01110583,
   0.01165484,
   0.01210967,
   0.01308431,
   0.01450476,
   0.01618931,
   0.02136133,
   0.07187489};
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
   0.03407383,
   0.02196785,
   0.01521347,
   0.0124432,
   0.01133872,
   0.01076311,
   0.01047734,
   0.01038732,
   0.01043644,
   0.01083583,
   0.01103215,
   0.01110583,
   0.01165484,
   0.01210967,
   0.01308431,
   0.01450476,
   0.01618931,
   0.02136133,
   0.07187489};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3081,BackgroundStatSystError_fy3081,BackgroundStatSystError_felx3081,BackgroundStatSystError_fehx3081,BackgroundStatSystError_fely3081,BackgroundStatSystError_fehy3081);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1230;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError307330773081 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError307330773081","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMinimum(0.9137501);
   Graph_Graph_Graph_BackgroundStatSystError307330773081->SetMaximum(1.08625);
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
   0.03407383,
   0.02196785,
   0.01521347,
   0.0124432,
   0.01133872,
   0.01076311,
   0.01047734,
   0.01038732,
   0.01043644,
   0.01083583,
   0.01103215,
   0.01110583,
   0.01165484,
   0.01210967,
   0.01308431,
   0.01450476,
   0.01618931,
   0.02136133,
   0.07187489};
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
   0.03407383,
   0.02196785,
   0.01521347,
   0.0124432,
   0.01133872,
   0.01076311,
   0.01047734,
   0.01038732,
   0.01043644,
   0.01083583,
   0.01103215,
   0.01110583,
   0.01165484,
   0.01210967,
   0.01308431,
   0.01450476,
   0.01618931,
   0.02136133,
   0.07187489};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3082,BackgroundStatError_fy3082,BackgroundStatError_felx3082,BackgroundStatError_fehx3082,BackgroundStatError_fely3082,BackgroundStatError_fehy3082);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1229;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError307430783082 = new TH1F("Graph_Graph_Graph_BackgroundStatError307430783082","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMinimum(0.9137501);
   Graph_Graph_Graph_BackgroundStatError307430783082->SetMaximum(1.08625);
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
   
   Double_t Graph1_fx3083[19] = {
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
   Double_t Graph1_fy3083[19] = {
   1.02203,
   0.9160804,
   0.8858433,
   0.9229672,
   1.003217,
   0.9316429,
   0.9659363,
   0.9290775,
   0.9291916,
   0.9441828,
   0.935764,
   0.9386553,
   0.963915,
   0.9376695,
   0.9690652,
   0.9393285,
   0.9492287,
   0.9233411,
   0.7675682};
   Double_t Graph1_felx3083[19] = {
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
   Double_t Graph1_fely3083[19] = {
   0.04986996,
   0.03301325,
   0.02254412,
   0.01948385,
   0.018559,
   0.0166684,
   0.01647387,
   0.01587761,
   0.01575354,
   0.01608883,
   0.01624287,
   0.01655191,
   0.01717447,
   0.01774566,
   0.0191267,
   0.02095171,
   0.023461,
   0.03045821,
   0.08922799};
   Double_t Graph1_fehx3083[19] = {
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
   Double_t Graph1_fehy3083[19] = {
   0.04986996,
   0.03301325,
   0.02254412,
   0.01948385,
   0.018559,
   0.0166684,
   0.01647387,
   0.01587761,
   0.01575354,
   0.01608883,
   0.01624287,
   0.01655191,
   0.01717447,
   0.01774566,
   0.0191267,
   0.02095171,
   0.023461,
   0.03045821,
   0.08922799};
   grae = new TGraphAsymmErrors(19,Graph1_fx3083,Graph1_fy3083,Graph1_felx3083,Graph1_fehx3083,Graph1_fely3083,Graph1_fehy3083);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1307530793083 = new TH1F("Graph_Graph_Graph_Graph1307530793083","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1307530793083->SetMinimum(0.6389843);
   Graph_Graph_Graph_Graph1307530793083->SetMaximum(1.111256);
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
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMinimum(12.77452);
   StackedMCstackHist_stack_19_stack_20_stack_21->SetMaximum(124924.8);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,105.1882);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,376.6761);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,791.3733);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1147.145);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1329.435);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1553.503);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1654.33);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1815.65);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1729.675);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1826.213);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1748.61);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1853.301);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,1885.18);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1572.792);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,1395.482);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,1108.934);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,1031.861);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,548.6166);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,51.55269);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,16.00254);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,41.87044);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,74.70377);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,81.84186);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,76.90375);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,80.70991);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,99.34008);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,90.44846);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,82.81992);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,97.35032);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,87.09406);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,96.16813);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,85.7396);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,79.66777);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,75.41435);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,63.77088);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,61.02186);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,43.25064);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,13.64494);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5164.309);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,3064.607);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,13611.66);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,28492.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,40827.69);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,49859.75);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,56283.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,59557.89);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,61127.24);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,62077.18);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,59625.51);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,58309.51);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,56051.56);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,52506.25);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,48557.48);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,41605.61);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,34018.3);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,26614.32);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,15140.63);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1378.885);
   TT_stack_2_stack_2_stack_2->SetBinError(1,40.93787);
   TT_stack_2_stack_2_stack_2->SetBinError(2,121.4284);
   TT_stack_2_stack_2_stack_2->SetBinError(3,175.6206);
   TT_stack_2_stack_2_stack_2->SetBinError(4,211.062);
   TT_stack_2_stack_2_stack_2->SetBinError(5,233.3849);
   TT_stack_2_stack_2_stack_2->SetBinError(6,248.2553);
   TT_stack_2_stack_2_stack_2->SetBinError(7,255.3944);
   TT_stack_2_stack_2_stack_2->SetBinError(8,259.3443);
   TT_stack_2_stack_2_stack_2->SetBinError(9,261.2633);
   TT_stack_2_stack_2_stack_2->SetBinError(10,256.3644);
   TT_stack_2_stack_2_stack_2->SetBinError(11,253.8097);
   TT_stack_2_stack_2_stack_2->SetBinError(12,248.9299);
   TT_stack_2_stack_2_stack_2->SetBinError(13,241.0173);
   TT_stack_2_stack_2_stack_2->SetBinError(14,232.2653);
   TT_stack_2_stack_2_stack_2->SetBinError(15,215.012);
   TT_stack_2_stack_2_stack_2->SetBinError(16,194.5993);
   TT_stack_2_stack_2_stack_2->SetBinError(17,172.013);
   TT_stack_2_stack_2_stack_2->SetBinError(18,130.3163);
   TT_stack_2_stack_2_stack_2->SetBinError(19,39.2532);
   TT_stack_2_stack_2_stack_2->SetEntries(699299.6);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,939.6733);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2822.417);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5575.729);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,6650.945);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7063.451);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9227.479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,9972.6);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,10764.64);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,11075.44);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,11500.25);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,10878.57);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,10618.7);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,10967.03);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,9421.622);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,9977.806);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,7669.292);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,6844.977);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,4216.719);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,497.7296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,132.9477);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,346.2393);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,494.8027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,561.1176);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,613.0994);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,672.9641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,693.6601);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,714.6602);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,731.8687);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,741.4059);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,735.1415);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,712.6874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,717.5032);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,678.0628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,654.6742);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,586.0027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,527.717);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,402.4392);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,132.2093);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3138.308);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(1,4.158884);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(2,24.63933);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(3,34.72115);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(4,40.03135);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(5,65.46875);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(6,80.06123);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(7,87.84607);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(8,128.0532);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(9,180.1373);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(10,184.1183);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(11,186.9486);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(12,199.7486);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(13,206.2053);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(14,180.869);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(15,202.2481);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(16,123.4429);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(17,119.3638);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(18,73.37389);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinContent(19,8.109241);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(1,2.672653);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(2,6.070048);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(3,8.580242);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(4,9.947491);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(5,12.42704);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(6,14.05794);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(7,15.89857);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(8,17.20761);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(9,18.84544);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(10,20.80191);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(11,21.04508);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(12,22.67386);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(13,24.09394);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(14,23.69922);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(15,22.2801);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(16,19.53111);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(17,17.74144);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(18,12.81896);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetBinError(19,4.286181);
   ChargedHiggs_HplusTBHplusToTB_M_800__144->SetEntries(842.9533);
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
   4109.468,
   16810.75,
   34859.44,
   48625.78,
   58252.63,
   67064.32,
   71184.82,
   73707.52,
   74882.3,
   72951.98,
   70936.69,
   68523.55,
   65358.46,
   59551.9,
   52978.89,
   42796.53,
   34491.16,
   19905.97,
   1928.167};
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
   140.0253,
   369.2961,
   530.3329,
   605.0605,
   660.5101,
   721.8209,
   745.8278,
   765.6237,
   781.5046,
   790.4951,
   782.584,
   761.011,
   761.7424,
   721.1541,
   693.1925,
   620.7534,
   558.3881,
   425.2179,
   138.5868};
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
   140.0253,
   369.2961,
   530.3329,
   605.0605,
   660.5101,
   721.8209,
   745.8278,
   765.6237,
   781.5046,
   790.4951,
   782.584,
   761.011,
   761.7424,
   721.1541,
   693.1925,
   620.7534,
   558.3881,
   425.2179,
   138.5868};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3084,BkgSum-SR-Inclusive_sum_errors_fy3084,BkgSum-SR-Inclusive_sum_errors_felx3084,BkgSum-SR-Inclusive_sum_errors_fehx3084,BkgSum-SR-Inclusive_sum_errors_fely3084,BkgSum-SR-Inclusive_sum_errors_fehy3084);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1228;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMinimum(1610.622);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors307630803084->SetMaximum(83051.22);
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
   Data__145->SetBinContent(1,4200);
   Data__145->SetBinContent(2,15400);
   Data__145->SetBinContent(3,30880);
   Data__145->SetBinContent(4,44880);
   Data__145->SetBinContent(5,58440);
   Data__145->SetBinContent(6,62480);
   Data__145->SetBinContent(7,68760);
   Data__145->SetBinContent(8,68480);
   Data__145->SetBinContent(9,69580);
   Data__145->SetBinContent(10,68880);
   Data__145->SetBinContent(11,66380);
   Data__145->SetBinContent(12,64320);
   Data__145->SetBinContent(13,63000);
   Data__145->SetBinContent(14,55840);
   Data__145->SetBinContent(15,51340);
   Data__145->SetBinContent(16,40200);
   Data__145->SetBinContent(17,32740);
   Data__145->SetBinContent(18,18380);
   Data__145->SetBinContent(19,1480);
   Data__145->SetBinError(1,204.939);
   Data__145->SetBinError(2,554.9775);
   Data__145->SetBinError(3,785.8753);
   Data__145->SetBinError(4,947.4175);
   Data__145->SetBinError(5,1081.111);
   Data__145->SetBinError(6,1117.855);
   Data__145->SetBinError(7,1172.689);
   Data__145->SetBinError(8,1170.299);
   Data__145->SetBinError(9,1179.661);
   Data__145->SetBinError(10,1173.712);
   Data__145->SetBinError(11,1152.215);
   Data__145->SetBinError(12,1134.196);
   Data__145->SetBinError(13,1122.497);
   Data__145->SetBinError(14,1056.788);
   Data__145->SetBinError(15,1013.311);
   Data__145->SetBinError(16,896.6605);
   Data__145->SetBinError(17,809.1971);
   Data__145->SetBinError(18,606.3003);
   Data__145->SetBinError(19,172.0465);
   Data__145->SetEntries(44388.25);
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

   ci = 1228;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1228;
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
   MVAOutputM500_1->Modified();
   MVAOutputM500->cd();
   MVAOutputM500->Modified();
   MVAOutputM500->cd();
   MVAOutputM500->SetSelected(MVAOutputM500);
}
