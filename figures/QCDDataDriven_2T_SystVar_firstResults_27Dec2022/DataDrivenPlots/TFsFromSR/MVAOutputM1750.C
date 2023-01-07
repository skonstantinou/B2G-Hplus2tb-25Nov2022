void MVAOutputM1750()
{
//=========Macro generated from canvas: MVAOutputM1750/MVAOutputM1750
//=========  (Tue Dec 27 11:52:15 2022) by ROOT version 6.20/02
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
   0.01004512,
   0.02039879,
   0.02674373,
   0.03269985,
   0.03747492,
   0.04211644,
   0.04780808,
   0.04979063,
   0.05437367,
   0.05682425,
   0.06185519,
   0.06593567,
   0.06756049,
   0.07356689,
   0.07213839,
   0.07372446,
   0.08116933,
   0.07220918,
   0.0693934,
   0.06760286};
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
   0.01004512,
   0.02039879,
   0.02674373,
   0.03269985,
   0.03747492,
   0.04211644,
   0.04780808,
   0.04979063,
   0.05437367,
   0.05682425,
   0.06185519,
   0.06593567,
   0.06756049,
   0.07356689,
   0.07213839,
   0.07372446,
   0.08116933,
   0.07220918,
   0.0693934,
   0.06760286};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3165,BackgroundStatSystError_fy3165,BackgroundStatSystError_felx3165,BackgroundStatSystError_fehx3165,BackgroundStatSystError_fely3165,BackgroundStatSystError_fehy3165);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1252;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError315731613165 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError315731613165","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMinimum(0.9025968);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMaximum(1.097403);
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
   0.01004512,
   0.02039879,
   0.02674373,
   0.03269985,
   0.03747492,
   0.04211644,
   0.04780808,
   0.04979063,
   0.05437367,
   0.05682425,
   0.06185519,
   0.06593567,
   0.06756049,
   0.07356689,
   0.07213839,
   0.07372446,
   0.08116933,
   0.07220918,
   0.0693934,
   0.06760286};
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
   0.01004512,
   0.02039879,
   0.02674373,
   0.03269985,
   0.03747492,
   0.04211644,
   0.04780808,
   0.04979063,
   0.05437367,
   0.05682425,
   0.06185519,
   0.06593567,
   0.06756049,
   0.07356689,
   0.07213839,
   0.07372446,
   0.08116933,
   0.07220918,
   0.0693934,
   0.06760286};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3166,BackgroundStatError_fy3166,BackgroundStatError_felx3166,BackgroundStatError_fehx3166,BackgroundStatError_fely3166,BackgroundStatError_fehy3166);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1251;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError315831623166 = new TH1F("Graph_Graph_Graph_BackgroundStatError315831623166","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMinimum(0.9025968);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMaximum(1.097403);
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
   1.017653,
   0.9986343,
   0.9956069,
   0.9897194,
   0.9179454,
   1.029633,
   0.1141426,
   0.1205159};
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
   0.01139696,
   0.02280248,
   0.02997783,
   0.03673193,
   0.0396492,
   0.05012173,
   0.01804753,
   0.02764824};
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
   0.01139696,
   0.02280248,
   0.02997783,
   0.03673193,
   0.0396492,
   0.05012173,
   0.01804753,
   0.02764824};
   grae = new TGraphAsymmErrors(8,Graph1_fx3167,Graph1_fy3167,Graph1_felx3167,Graph1_fehx3167,Graph1_fely3167,Graph1_fehy3167);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1315931633167 = new TH1F("Graph_Graph_Graph_Graph1315931633167","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1315931633167->SetMinimum(0.08358087);
   Graph_Graph_Graph_Graph1315931633167->SetMaximum(1.178443);
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
   MVAOutputM1750_1->Range(-0.204557,-2.174951,1.073924,6.572603);
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
   hframe__290->SetMaximum(1116220);
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
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMinimum(31.14853);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMaximum(259485.3);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,5727.727);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1380.344);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,812.4265);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,636.3995);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,464.3801);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,296.0517);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,328.506);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,268.131);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,196.1173);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,207.7687);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,158.242);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,162.865);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,147.0364);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,148.5603);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,125.2867);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,115.264);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,126.8378);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,111.7404);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,170.4486);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,190.1034);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,124.2262);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,63.89299);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,50.28149);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,40.78512);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,33.22277);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,31.13691);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,34.2254);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,29.97988);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,22.49313);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,27.41284);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,21.67763);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,24.29388);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,19.91124);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,25.94011);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,20.15924);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,17.15016);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,18.5622);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,20.37119);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,23.46952);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,25.39026);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4090.428);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,81723.23);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,17564.06);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,10135.89);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,6895.769);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,5216.447);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4200.271);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,3401.558);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2881.103);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2539.98);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2186.199);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1984.126);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1726.64);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1673.447);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1463.645);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1377.318);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1344.03);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1274.165);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1393.945);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1491.836);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1562.461);
   TT_stack_2_stack_2_stack_2->SetBinError(1,317.461);
   TT_stack_2_stack_2_stack_2->SetBinError(2,147.9583);
   TT_stack_2_stack_2_stack_2->SetBinError(3,111.7561);
   TT_stack_2_stack_2_stack_2->SetBinError(4,92.52552);
   TT_stack_2_stack_2_stack_2->SetBinError(5,80.29425);
   TT_stack_2_stack_2_stack_2->SetBinError(6,72.06513);
   TT_stack_2_stack_2_stack_2->SetBinError(7,64.93534);
   TT_stack_2_stack_2_stack_2->SetBinError(8,59.57768);
   TT_stack_2_stack_2_stack_2->SetBinError(9,56.09508);
   TT_stack_2_stack_2_stack_2->SetBinError(10,51.88287);
   TT_stack_2_stack_2_stack_2->SetBinError(11,49.21813);
   TT_stack_2_stack_2_stack_2->SetBinError(12,46.00817);
   TT_stack_2_stack_2_stack_2->SetBinError(13,45.31264);
   TT_stack_2_stack_2_stack_2->SetBinError(14,42.87478);
   TT_stack_2_stack_2_stack_2->SetBinError(15,41.02487);
   TT_stack_2_stack_2_stack_2->SetBinError(16,40.2456);
   TT_stack_2_stack_2_stack_2->SetBinError(17,39.04703);
   TT_stack_2_stack_2_stack_2->SetBinError(18,41.05542);
   TT_stack_2_stack_2_stack_2->SetBinError(19,42.41542);
   TT_stack_2_stack_2_stack_2->SetBinError(20,42.72343);
   TT_stack_2_stack_2_stack_2->SetEntries(123255.8);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,69242.86);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,19468.06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11209.02);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7138.657);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,5997.429);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,3700.775);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,3278.713);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2930.691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,2631.058);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,2467.287);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1704.614);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1594.216);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1638.891);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1189.853);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1463.58);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1321.961);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,764.3317);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1183.454);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1399.402);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1400.547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1536.648);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,766.8145);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,579.7599);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,468.9564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,428.9281);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,336.1884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,326.9373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,295.2847);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,285.5053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,269.9327);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,231.7987);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,223.7316);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,228.4162);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,199.955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,209.0363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,200.3253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,170.3582);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,188.6944);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,206.8568);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,207.2847);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4384.703);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(1,1383.457);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(2,1140.295);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(3,1043.131);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(4,951.2068);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(5,865.649);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(6,786.2144);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(7,758.9315);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(8,683.5211);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(9,605.264);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(10,518.6114);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(11,447.4515);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(12,436.131);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(13,383.6532);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(14,360.5329);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(15,312.7604);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(16,307.6951);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(17,257.168);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(18,211.0626);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(19,236.4584);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(20,316.5555);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(1,50.79615);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(2,45.44068);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(3,42.83163);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(4,40.89634);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(5,38.99812);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(6,37.62381);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(7,36.29775);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(8,34.74221);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(9,32.90293);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(10,31.87759);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(11,30.39027);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(12,29.07124);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(13,27.8704);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(14,26.48205);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(15,25.40141);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(16,24.79151);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(17,24.10483);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(18,23.53698);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(19,24.52219);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(20,25.11256);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetEntries(6381.877);
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
   156693.8,
   38412.46,
   22157.34,
   14670.83,
   11678.25,
   8197.099,
   7008.776,
   6079.924,
   5367.155,
   4861.255,
   3846.982,
   3483.721,
   3459.375,
   2802.057,
   2966.184,
   2781.255,
   2165.335,
   2689.14,
   3061.687,
   3153.112};
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
   1574.008,
   783.5677,
   592.57,
   479.7338,
   437.6417,
   345.2326,
   335.0761,
   302.7233,
   291.8319,
   276.2372,
   237.9558,
   229.7015,
   233.7171,
   206.1386,
   213.9758,
   205.0465,
   175.7588,
   194.1806,
   212.4609,
   213.1594};
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
   1574.008,
   783.5677,
   592.57,
   479.7338,
   437.6417,
   345.2326,
   335.0761,
   302.7233,
   291.8319,
   276.2372,
   237.9558,
   229.7015,
   233.7171,
   206.1386,
   213.9758,
   205.0465,
   175.7588,
   194.1806,
   212.4609,
   213.1594};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3168,BkgSum-SR-Inclusive_sum_errors_fy3168,BkgSum-SR-Inclusive_sum_errors_felx3168,BkgSum-SR-Inclusive_sum_errors_fehx3168,BkgSum-SR-Inclusive_sum_errors_fely3168,BkgSum-SR-Inclusive_sum_errors_fehy3168);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1250;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMinimum(1790.618);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMaximum(173895.6);
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
   Data__292->SetBinContent(1,159460);
   Data__292->SetBinContent(2,38360);
   Data__292->SetBinContent(3,22060);
   Data__292->SetBinContent(4,14520);
   Data__292->SetBinContent(5,10720);
   Data__292->SetBinContent(6,8440);
   Data__292->SetBinContent(7,800);
   Data__292->SetBinContent(20,380);
   Data__292->SetBinError(1,1785.833);
   Data__292->SetBinError(2,875.8995);
   Data__292->SetBinError(3,664.2289);
   Data__292->SetBinError(4,538.8877);
   Data__292->SetBinError(5,463.0335);
   Data__292->SetBinError(6,410.8528);
   Data__292->SetBinError(7,126.4911);
   Data__292->SetBinError(20,87.17798);
   Data__292->SetEntries(12737);
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

   ci = 1250;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1250;
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
   hframe_copy__293->SetMaximum(1116220);
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
   hframe_copy__294->SetMaximum(1116220);
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
