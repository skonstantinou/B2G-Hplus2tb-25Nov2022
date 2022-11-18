void MVAOutputM1750()
{
//=========Macro generated from canvas: MVAOutputM1750/MVAOutputM1750
//=========  (Fri Nov 18 13:27:23 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM1750 = new TCanvas("MVAOutputM1750", "MVAOutputM1750",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM1750->SetHighLightColor(2);
   MVAOutputM1750->Range(0,0,1,1);
   MVAOutputM1750->SetFillColor(0);
   MVAOutputM1750->SetBorderMode(0);
   MVAOutputM1750->SetBorderSize(2);
   MVAOutputM1750->SetTickx(1);
   MVAOutputM1750->SetTicky(1);
   MVAOutputM1750->SetLeftMargin(0.16);
   MVAOutputM1750->SetRightMargin(0.05);
   MVAOutputM1750->SetTopMargin(0.06);
   MVAOutputM1750->SetBottomMargin(0.13);
   MVAOutputM1750->SetFrameFillStyle(0);
   MVAOutputM1750->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM1750_2
   TPad *MVAOutputM1750_2 = new TPad("MVAOutputM1750_2", "MVAOutputM1750_2",0,0,1,0.304);
   MVAOutputM1750_2->Draw();
   MVAOutputM1750_2->cd();
   MVAOutputM1750_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM1750_2->SetFillColor(0);
   MVAOutputM1750_2->SetFillStyle(4000);
   MVAOutputM1750_2->SetBorderMode(0);
   MVAOutputM1750_2->SetBorderSize(2);
   MVAOutputM1750_2->SetTickx(1);
   MVAOutputM1750_2->SetTicky(1);
   MVAOutputM1750_2->SetLeftMargin(0.16);
   MVAOutputM1750_2->SetRightMargin(0.05);
   MVAOutputM1750_2->SetTopMargin(0);
   MVAOutputM1750_2->SetBottomMargin(0.3421053);
   MVAOutputM1750_2->SetFrameFillStyle(0);
   MVAOutputM1750_2->SetFrameBorderMode(0);
   MVAOutputM1750_2->SetFrameFillStyle(0);
   MVAOutputM1750_2->SetFrameBorderMode(0);
   
   TH1F *hframe__288 = new TH1F("hframe__288","",1000,0,1.01);
   hframe__288->SetMinimum(0.3);
   hframe__288->SetMaximum(1.7);
   hframe__288->SetDirectory(0);
   hframe__288->SetStats(0);
   hframe__288->SetLineStyle(0);
   hframe__288->SetMarkerStyle(20);
   hframe__288->GetXaxis()->SetTitle("DNN Output");
   hframe__288->GetXaxis()->SetLabelFont(43);
   hframe__288->GetXaxis()->SetLabelOffset(0.007);
   hframe__288->GetXaxis()->SetLabelSize(27);
   hframe__288->GetXaxis()->SetTitleSize(33);
   hframe__288->GetXaxis()->SetTitleOffset(2.960526);
   hframe__288->GetXaxis()->SetTitleFont(43);
   hframe__288->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__288->GetYaxis()->SetNdivisions(505);
   hframe__288->GetYaxis()->SetLabelFont(43);
   hframe__288->GetYaxis()->SetLabelOffset(0.007);
   hframe__288->GetYaxis()->SetLabelSize(21);
   hframe__288->GetYaxis()->SetTitleSize(33);
   hframe__288->GetYaxis()->SetTitleOffset(1.5625);
   hframe__288->GetYaxis()->SetTitleFont(43);
   hframe__288->GetZaxis()->SetLabelFont(43);
   hframe__288->GetZaxis()->SetLabelOffset(0.007);
   hframe__288->GetZaxis()->SetLabelSize(27);
   hframe__288->GetZaxis()->SetTitleSize(33);
   hframe__288->GetZaxis()->SetTitleOffset(1);
   hframe__288->GetZaxis()->SetTitleFont(43);
   hframe__288->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3165[20] = {
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
   Double_t BackgroundStatSystError_fy3165[20] = {
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
   Double_t BackgroundStatSystError_felx3165[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3165[20] = {
   0.01438514,
   0.03076598,
   0.0392441,
   0.04582647,
   0.05621346,
   0.06121085,
   0.07098794,
   0.07464898,
   0.08883687,
   0.0985922,
   0.09710102,
   0.1055132,
   0.1236181,
   0.134456,
   0.1226348,
   0.1413959,
   0.1577809,
   0.1708714,
   0.1671643,
   0.1779241};
   Double_t BackgroundStatSystError_fehx3165[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3165[20] = {
   0.01438514,
   0.03076598,
   0.0392441,
   0.04582647,
   0.05621346,
   0.06121085,
   0.07098794,
   0.07464898,
   0.08883687,
   0.0985922,
   0.09710102,
   0.1055132,
   0.1236181,
   0.134456,
   0.1226348,
   0.1413959,
   0.1577809,
   0.1708714,
   0.1671643,
   0.1779241};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3165,BackgroundStatSystError_fy3165,BackgroundStatSystError_felx3165,BackgroundStatSystError_fehx3165,BackgroundStatSystError_fely3165,BackgroundStatSystError_fehy3165);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1251;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError315731613165 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError315731613165","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMinimum(0.7864911);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMaximum(1.213509);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError315731613165);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3166[20] = {
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
   Double_t BackgroundStatError_fy3166[20] = {
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
   Double_t BackgroundStatError_felx3166[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3166[20] = {
   0.01438514,
   0.03076598,
   0.0392441,
   0.04582647,
   0.05621346,
   0.06121085,
   0.07098794,
   0.07464898,
   0.08883687,
   0.0985922,
   0.09710102,
   0.1055132,
   0.1236181,
   0.134456,
   0.1226348,
   0.1413959,
   0.1577809,
   0.1708714,
   0.1671643,
   0.1779241};
   Double_t BackgroundStatError_fehx3166[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3166[20] = {
   0.01438514,
   0.03076598,
   0.0392441,
   0.04582647,
   0.05621346,
   0.06121085,
   0.07098794,
   0.07464898,
   0.08883687,
   0.0985922,
   0.09710102,
   0.1055132,
   0.1236181,
   0.134456,
   0.1226348,
   0.1413959,
   0.1577809,
   0.1708714,
   0.1671643,
   0.1779241};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3166,BackgroundStatError_fy3166,BackgroundStatError_felx3166,BackgroundStatError_fehx3166,BackgroundStatError_fely3166,BackgroundStatError_fehy3166);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1250;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError315831623166 = new TH1F("Graph_Graph_Graph_BackgroundStatError315831623166","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMinimum(0.7864911);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMaximum(1.213509);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError315831623166->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError315831623166->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError315831623166);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx42[2] = {
   0,
   1.01};
   Double_t Graph0_fy42[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx42,Graph0_fy42);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0404142 = new TH1F("Graph_Graph_Graph_Graph0404142","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0404142->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0404142->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0404142->SetDirectory(0);
   Graph_Graph_Graph_Graph0404142->SetStats(0);
   Graph_Graph_Graph_Graph0404142->SetLineStyle(0);
   Graph_Graph_Graph_Graph0404142->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0404142->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0404142->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0404142->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0404142->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0404142->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0404142->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0404142->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0404142->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0404142->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0404142->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0404142->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0404142->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0404142->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0404142->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0404142->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0404142->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0404142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0404142->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0404142);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3167[8] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.975};
   Double_t Graph1_fy3167[8] = {
   1.029206,
   1.097294,
   1.010444,
   0.9558195,
   1.02951,
   1.047922,
   0.1405216,
   0.0400852};
   Double_t Graph1_felx3167[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3167[8] = {
   0.01561735,
   0.03501605,
   0.0427755,
   0.04877646,
   0.06208179,
   0.069553,
   0.02868386,
   0.0400852};
   Double_t Graph1_fehx3167[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3167[8] = {
   0.01561735,
   0.03501605,
   0.0427755,
   0.04877646,
   0.06208179,
   0.069553,
   0.02868386,
   0.0400852};
   grae = new TGraphAsymmErrors(8,Graph1_fx3167,Graph1_fy3167,Graph1_felx3167,Graph1_fehx3167,Graph1_fely3167,Graph1_fehy3167);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1315931633167 = new TH1F("Graph_Graph_Graph_Graph1315931633167","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1315931633167->SetMinimum(3.122502e-17);
   Graph_Graph_Graph_Graph1315931633167->SetMaximum(1.245541);
   Graph_Graph_Graph_Graph1315931633167->SetDirectory(0);
   Graph_Graph_Graph_Graph1315931633167->SetStats(0);
   Graph_Graph_Graph_Graph1315931633167->SetLineStyle(0);
   Graph_Graph_Graph_Graph1315931633167->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1315931633167->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1315931633167->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1315931633167->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1315931633167->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1315931633167->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1315931633167->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1315931633167->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1315931633167->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1315931633167->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1315931633167->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1315931633167->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1315931633167->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1315931633167->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1315931633167->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1315931633167->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1315931633167->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1315931633167->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1315931633167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1315931633167->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1315931633167);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__289 = new TH1F("hframe_copy__289","",1000,0,1.01);
   hframe_copy__289->SetMinimum(0.3);
   hframe_copy__289->SetMaximum(1.7);
   hframe_copy__289->SetDirectory(0);
   hframe_copy__289->SetStats(0);
   hframe_copy__289->SetLineStyle(0);
   hframe_copy__289->SetMarkerStyle(20);
   hframe_copy__289->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__289->GetXaxis()->SetLabelFont(43);
   hframe_copy__289->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__289->GetXaxis()->SetLabelSize(27);
   hframe_copy__289->GetXaxis()->SetTitleSize(33);
   hframe_copy__289->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__289->GetXaxis()->SetTitleFont(43);
   hframe_copy__289->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__289->GetYaxis()->SetNdivisions(505);
   hframe_copy__289->GetYaxis()->SetLabelFont(43);
   hframe_copy__289->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__289->GetYaxis()->SetLabelSize(21);
   hframe_copy__289->GetYaxis()->SetTitleSize(33);
   hframe_copy__289->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__289->GetYaxis()->SetTitleFont(43);
   hframe_copy__289->GetZaxis()->SetLabelFont(43);
   hframe_copy__289->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__289->GetZaxis()->SetLabelSize(27);
   hframe_copy__289->GetZaxis()->SetTitleSize(33);
   hframe_copy__289->GetZaxis()->SetTitleOffset(1);
   hframe_copy__289->GetZaxis()->SetTitleFont(43);
   hframe_copy__289->Draw("sameaxis");
   MVAOutputM1750_2->Modified();
   MVAOutputM1750->cd();
  
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
   MVAOutputM1750->cd();
  
// ------------>Primitives in pad: MVAOutputM1750_1
   TPad *MVAOutputM1750_1 = new TPad("MVAOutputM1750_1", "MVAOutputM1750_1",0,0.2897959,1,1);
   MVAOutputM1750_1->Draw();
   MVAOutputM1750_1->cd();
   MVAOutputM1750_1->Range(-0.204557,-2.169216,1.073924,6.291565);
   MVAOutputM1750_1->SetFillColor(0);
   MVAOutputM1750_1->SetFillStyle(4000);
   MVAOutputM1750_1->SetBorderMode(0);
   MVAOutputM1750_1->SetBorderSize(2);
   MVAOutputM1750_1->SetLogy();
   MVAOutputM1750_1->SetTickx(1);
   MVAOutputM1750_1->SetTicky(1);
   MVAOutputM1750_1->SetLeftMargin(0.16);
   MVAOutputM1750_1->SetRightMargin(0.05);
   MVAOutputM1750_1->SetTopMargin(0.06);
   MVAOutputM1750_1->SetBottomMargin(0.02);
   MVAOutputM1750_1->SetFrameFillStyle(0);
   MVAOutputM1750_1->SetFrameBorderMode(0);
   MVAOutputM1750_1->SetFrameFillStyle(0);
   MVAOutputM1750_1->SetFrameBorderMode(0);
   
   TH1F *hframe__290 = new TH1F("hframe__290","",1000,0,1.01);
   hframe__290->SetMinimum(0.01);
   hframe__290->SetMaximum(608020);
   hframe__290->SetDirectory(0);
   hframe__290->SetStats(0);
   hframe__290->SetLineStyle(0);
   hframe__290->SetMarkerStyle(20);
   hframe__290->GetXaxis()->SetLabelFont(43);
   hframe__290->GetXaxis()->SetLabelOffset(0.007);
   hframe__290->GetXaxis()->SetLabelSize(0);
   hframe__290->GetXaxis()->SetTitleSize(0);
   hframe__290->GetXaxis()->SetTitleOffset(0.9);
   hframe__290->GetXaxis()->SetTitleFont(43);
   hframe__290->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__290->GetYaxis()->SetLabelFont(43);
   hframe__290->GetYaxis()->SetLabelOffset(0.007);
   hframe__290->GetYaxis()->SetLabelSize(27);
   hframe__290->GetYaxis()->SetTitleSize(33);
   hframe__290->GetYaxis()->SetTitleOffset(1.5625);
   hframe__290->GetYaxis()->SetTitleFont(43);
   hframe__290->GetZaxis()->SetLabelFont(43);
   hframe__290->GetZaxis()->SetLabelOffset(0.007);
   hframe__290->GetZaxis()->SetLabelSize(27);
   hframe__290->GetZaxis()->SetTitleSize(33);
   hframe__290->GetZaxis()->SetTitleOffset(1);
   hframe__290->GetZaxis()->SetTitleFont(43);
   hframe__290->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis247[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_40_stack_41_stack_42 = new TH1F("StackedMCstackHist_stack_40_stack_41_stack_42","StackedMCstackHist",20, xAxis247);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMinimum(0.08379742);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMaximum(176098.1);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetDirectory(0);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetStats(0);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetLineStyle(0);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMarkerStyle(20);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_40_stack_41_stack_42->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_40_stack_41_stack_42);
   
   Double_t xAxis248[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM1750Inclusive",20, xAxis248);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2059.475);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,419.7104);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,374.723);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,264.6134);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,160.4037);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,190.0768);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,130.0941);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,96.44353);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,82.78233);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,46.05539);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,68.00258);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,54.31713);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,46.96998);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,51.47885);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,29.61905);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,24.5556);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,25.87594);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,25.69459);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,7.030992);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,24.07875);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,77.62691);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,32.31687);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,30.69462);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,26.37597);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,22.4251);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,27.64319);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,21.20408);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,18.06193);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,14.52893);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,12.55422);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,14.33129);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,15.08438);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,11.33918);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,15.55118);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,11.49054);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,7.514614);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,10.3564);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,5.738341);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,6.684957);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,7.996546);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1414.932);
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
   Double_t xAxis249[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1750Inclusive",20, xAxis249);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,28746.47);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,5819.804);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3522.584);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2541.104);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1799.016);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1555.44);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1173.1);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,982.4349);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,842.2308);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,647.8838);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,607.2877);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,487.0068);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,420.4337);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,368.9594);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,337.4576);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,276.9832);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,215.0282);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,204.2296);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,199.6525);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,170.7324);
   TT_stack_2_stack_2_stack_2->SetBinError(1,191.6917);
   TT_stack_2_stack_2_stack_2->SetBinError(2,85.8027);
   TT_stack_2_stack_2_stack_2->SetBinError(3,66.48149);
   TT_stack_2_stack_2_stack_2->SetBinError(4,56.86796);
   TT_stack_2_stack_2_stack_2->SetBinError(5,47.83685);
   TT_stack_2_stack_2_stack_2->SetBinError(6,44.51862);
   TT_stack_2_stack_2_stack_2->SetBinError(7,38.54127);
   TT_stack_2_stack_2_stack_2->SetBinError(8,35.58585);
   TT_stack_2_stack_2_stack_2->SetBinError(9,32.82438);
   TT_stack_2_stack_2_stack_2->SetBinError(10,28.61485);
   TT_stack_2_stack_2_stack_2->SetBinError(11,27.82048);
   TT_stack_2_stack_2_stack_2->SetBinError(12,24.77299);
   TT_stack_2_stack_2_stack_2->SetBinError(13,23.62007);
   TT_stack_2_stack_2_stack_2->SetBinError(14,21.66322);
   TT_stack_2_stack_2_stack_2->SetBinError(15,21.04346);
   TT_stack_2_stack_2_stack_2->SetBinError(16,18.86891);
   TT_stack_2_stack_2_stack_2->SetBinError(17,16.18424);
   TT_stack_2_stack_2_stack_2->SetBinError(18,15.6123);
   TT_stack_2_stack_2_stack_2->SetBinError(19,15.63868);
   TT_stack_2_stack_2_stack_2->SetBinError(20,14.17119);
   TT_stack_2_stack_2_stack_2->SetEntries(39982.09);
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
   Double_t xAxis250[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1750Inclusive",20, xAxis250);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,53589.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,11659.07);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,7147.343);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5229.273);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,3382.927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,2586.868);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,2112.65);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,1922.682);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1129.772);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1038.59);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,957.3316);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,931.9658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,594.7158);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,458.9014);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,709.4776);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,512.8765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,395.6833);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,361.7551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,344.6036);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,304.1262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1196.291);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,542.9808);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,427.2072);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,362.8399);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,295.628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,259.9599);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,238.4603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,220.4809);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,178.9765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,167.9314);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,155.4096);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,152.7217);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,128.6564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,115.1858);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,129.8277);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,113.3498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,98.58643);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,99.72337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,90.57255);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,87.26895);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3633.413);
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
   Double_t xAxis251[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__291 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__291","h_SR_MVAOutputM1750Inclusive",20, xAxis251);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(1,492.3013);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(2,321.7097);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(3,384.9827);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(4,319.426);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(5,273.284);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(6,291.246);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(7,237.5042);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(8,229.4709);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(9,220.199);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(10,183.7971);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(11,154.8198);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(12,129.6213);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(13,92.24519);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(14,56.01358);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(15,60.60821);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(16,55.70744);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(17,42.67924);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(18,32.86161);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(19,8.669449);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(20,34.38535);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(1,30.32421);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(2,26.37099);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(3,26.44601);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(4,24.64112);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(5,24.05838);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(6,22.8193);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(7,22.08436);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(8,20.46082);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(9,19.74241);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(10,18.12957);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(11,16.9365);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(12,15.40925);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(13,14.36074);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(14,12.58974);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(15,11.9675);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(16,10.17994);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(17,10.02604);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(18,8.611772);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(19,7.852135);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(20,8.356714);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetEntries(1850.394);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3168[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3168[20] = {
   84395.14,
   17898.58,
   11044.65,
   8034.99,
   5342.347,
   4332.385,
   3415.844,
   3001.56,
   2054.785,
   1732.529,
   1632.622,
   1473.29,
   1062.12,
   879.3395,
   1076.554,
   814.4153,
   636.5875,
   591.6792,
   551.2871,
   498.9373};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3168[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3168[20] = {
   1214.036,
   550.6674,
   433.4373,
   368.2152,
   300.3118,
   265.189,
   242.4837,
   224.0634,
   182.5407,
   170.8139,
   158.5292,
   155.4515,
   131.2972,
   118.2324,
   132.023,
   115.155,
   100.4414,
   101.1011,
   92.15554,
   88.77295};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3168[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3168[20] = {
   1214.036,
   550.6674,
   433.4373,
   368.2152,
   300.3118,
   265.189,
   242.4837,
   224.0634,
   182.5407,
   170.8139,
   158.5292,
   155.4515,
   131.2972,
   118.2324,
   132.023,
   115.155,
   100.4414,
   101.1011,
   92.15554,
   88.77295};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3168,BkgSum-SR-Inclusive_sum_errors_fy3168,BkgSum-SR-Inclusive_sum_errors_felx3168,BkgSum-SR-Inclusive_sum_errors_fehx3168,BkgSum-SR-Inclusive_sum_errors_fely3168,BkgSum-SR-Inclusive_sum_errors_fehy3168);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1249;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMinimum(369.1479);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMaximum(94129.08);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors316031643168);
   
   grae->Draw("e2 ");
   Double_t xAxis252[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__292 = new TH1F("Data__292","h_SR_MVAOutputM1750Inclusive",20, xAxis252);
   Data__292->SetBinContent(1,86860);
   Data__292->SetBinContent(2,19640);
   Data__292->SetBinContent(3,11160);
   Data__292->SetBinContent(4,7680);
   Data__292->SetBinContent(5,5500);
   Data__292->SetBinContent(6,4540);
   Data__292->SetBinContent(7,480);
   Data__292->SetBinContent(20,20);
   Data__292->SetBinError(1,1318.029);
   Data__292->SetBinError(2,626.7376);
   Data__292->SetBinError(3,472.4405);
   Data__292->SetBinError(4,391.9184);
   Data__292->SetBinError(5,331.6625);
   Data__292->SetBinError(6,301.3304);
   Data__292->SetBinError(7,97.97959);
   Data__292->SetBinError(20,20);
   Data__292->SetEntries(6794);
   Data__292->SetDirectory(0);
   Data__292->SetFillStyle(3001);
   Data__292->SetLineWidth(2);
   Data__292->SetMarkerStyle(20);
   Data__292->SetMarkerSize(1.2);
   Data__292->GetXaxis()->SetRange(1,200);
   Data__292->GetXaxis()->SetLabelFont(42);
   Data__292->GetXaxis()->SetTitleOffset(1);
   Data__292->GetXaxis()->SetTitleFont(42);
   Data__292->GetYaxis()->SetLabelFont(42);
   Data__292->GetYaxis()->SetTitleFont(42);
   Data__292->GetZaxis()->SetLabelFont(42);
   Data__292->GetZaxis()->SetTitleOffset(1);
   Data__292->GetZaxis()->SetTitleFont(42);
   Data__292->Draw("EP same");
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

   ci = 1249;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1249;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__293 = new TH1F("hframe_copy__293","",1000,0,1.01);
   hframe_copy__293->SetMinimum(0.01);
   hframe_copy__293->SetMaximum(608020);
   hframe_copy__293->SetDirectory(0);
   hframe_copy__293->SetStats(0);
   hframe_copy__293->SetLineStyle(0);
   hframe_copy__293->SetMarkerStyle(20);
   hframe_copy__293->GetXaxis()->SetLabelFont(43);
   hframe_copy__293->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__293->GetXaxis()->SetLabelSize(0);
   hframe_copy__293->GetXaxis()->SetTitleSize(0);
   hframe_copy__293->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__293->GetXaxis()->SetTitleFont(43);
   hframe_copy__293->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__293->GetYaxis()->SetLabelFont(43);
   hframe_copy__293->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__293->GetYaxis()->SetLabelSize(27);
   hframe_copy__293->GetYaxis()->SetTitleSize(33);
   hframe_copy__293->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__293->GetYaxis()->SetTitleFont(43);
   hframe_copy__293->GetZaxis()->SetLabelFont(43);
   hframe_copy__293->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__293->GetZaxis()->SetLabelSize(27);
   hframe_copy__293->GetZaxis()->SetTitleSize(33);
   hframe_copy__293->GetZaxis()->SetTitleOffset(1);
   hframe_copy__293->GetZaxis()->SetTitleFont(43);
   hframe_copy__293->Draw("sameaxis");
   
   TH1F *hframe_copy__294 = new TH1F("hframe_copy__294","",1000,0,1.01);
   hframe_copy__294->SetMinimum(0.01);
   hframe_copy__294->SetMaximum(608020);
   hframe_copy__294->SetDirectory(0);
   hframe_copy__294->SetStats(0);
   hframe_copy__294->SetLineStyle(0);
   hframe_copy__294->SetMarkerStyle(20);
   hframe_copy__294->GetXaxis()->SetLabelFont(43);
   hframe_copy__294->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__294->GetXaxis()->SetLabelSize(0);
   hframe_copy__294->GetXaxis()->SetTitleSize(0);
   hframe_copy__294->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__294->GetXaxis()->SetTitleFont(43);
   hframe_copy__294->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__294->GetYaxis()->SetLabelFont(43);
   hframe_copy__294->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__294->GetYaxis()->SetLabelSize(27);
   hframe_copy__294->GetYaxis()->SetTitleSize(33);
   hframe_copy__294->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__294->GetYaxis()->SetTitleFont(43);
   hframe_copy__294->GetZaxis()->SetLabelFont(43);
   hframe_copy__294->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__294->GetZaxis()->SetLabelSize(27);
   hframe_copy__294->GetZaxis()->SetTitleSize(33);
   hframe_copy__294->GetZaxis()->SetTitleOffset(1);
   hframe_copy__294->GetZaxis()->SetTitleFont(43);
   hframe_copy__294->Draw("sameaxis");
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
   MVAOutputM1750_1->Modified();
   MVAOutputM1750->cd();
   MVAOutputM1750->Modified();
   MVAOutputM1750->cd();
   MVAOutputM1750->SetSelected(MVAOutputM1750);
}
