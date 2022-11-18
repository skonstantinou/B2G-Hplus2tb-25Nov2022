void MVAOutputM1750()
{
//=========Macro generated from canvas: MVAOutputM1750/MVAOutputM1750
//=========  (Fri Nov 18 13:27:29 2022) by ROOT version 6.20/02
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
   0.01034028,
   0.02127234,
   0.02756984,
   0.03127489,
   0.03578257,
   0.03871268,
   0.04330861,
   0.04352351,
   0.04630854,
   0.05091009,
   0.05321585,
   0.05713088,
   0.05814474,
   0.06073891,
   0.0644887,
   0.07511178,
   0.07173543,
   0.08158468,
   0.08875292,
   0.07423084};
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
   0.01034028,
   0.02127234,
   0.02756984,
   0.03127489,
   0.03578257,
   0.03871268,
   0.04330861,
   0.04352351,
   0.04630854,
   0.05091009,
   0.05321585,
   0.05713088,
   0.05814474,
   0.06073891,
   0.0644887,
   0.07511178,
   0.07173543,
   0.08158468,
   0.08875292,
   0.07423084};
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
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMinimum(0.8934965);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMaximum(1.106503);
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
   0.01034028,
   0.02127234,
   0.02756984,
   0.03127489,
   0.03578257,
   0.03871268,
   0.04330861,
   0.04352351,
   0.04630854,
   0.05091009,
   0.05321585,
   0.05713088,
   0.05814474,
   0.06073891,
   0.0644887,
   0.07511178,
   0.07173543,
   0.08158468,
   0.08875292,
   0.07423084};
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
   0.01034028,
   0.02127234,
   0.02756984,
   0.03127489,
   0.03578257,
   0.03871268,
   0.04330861,
   0.04352351,
   0.04630854,
   0.05091009,
   0.05321585,
   0.05713088,
   0.05814474,
   0.06073891,
   0.0644887,
   0.07511178,
   0.07173543,
   0.08158468,
   0.08875292,
   0.07423084};
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
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMinimum(0.8934965);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMaximum(1.106503);
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
   1.017451,
   1.018085,
   0.9643872,
   0.9611409,
   1.060903,
   1.026324,
   0.1236597,
   0.1186109};
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
   0.0116902,
   0.02448425,
   0.03030028,
   0.03419586,
   0.041773,
   0.04424798,
   0.01698597,
   0.03170008};
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
   0.0116902,
   0.02448425,
   0.03030028,
   0.03419586,
   0.041773,
   0.04424798,
   0.01698597,
   0.03170008};
   grae = new TGraphAsymmErrors(8,Graph1_fx3167,Graph1_fy3167,Graph1_felx3167,Graph1_fehx3167,Graph1_fely3167,Graph1_fehy3167);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1315931633167 = new TH1F("Graph_Graph_Graph_Graph1315931633167","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1315931633167->SetMinimum(0.07821969);
   Graph_Graph_Graph_Graph1315931633167->SetMaximum(1.204252);
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
   MVAOutputM1750_1->Range(-0.204557,-2.174468,1.073924,6.548914);
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
   hframe__290->SetMaximum(1060500);
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
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMinimum(26.95477);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMaximum(247700.1);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,4990.385);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1233.592);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,831.7267);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,714.3218);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,549.6329);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,492.99);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,376.7627);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,355.3133);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,335.0593);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,323.9504);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,243.008);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,196.5785);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,218.7045);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,194.1823);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,150.1614);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,132.06);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,148.4921);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,96.80511);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,124.6074);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,170.2093);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,125.7601);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,55.98328);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,47.04215);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,44.01207);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,40.80694);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,33.96443);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,33.13954);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,32.29549);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,31.31038);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,31.34733);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,26.62509);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,22.12567);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,21.76896);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,25.73499);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,18.64756);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,19.85131);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,24.52475);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,17.17504);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,19.9818);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,25.84361);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4024.202);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,76827.75);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,16313.84);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,10266.27);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,7497.989);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,5882.183);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4928.532);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,4249.081);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3816.947);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,3352.949);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,3014.657);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2717.998);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2328.62);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2208.715);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2040.744);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1810.179);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1493.784);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1436.342);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1196.713);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1069.295);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1219.137);
   TT_stack_2_stack_2_stack_2->SetBinError(1,309.3708);
   TT_stack_2_stack_2_stack_2->SetBinError(2,142.985);
   TT_stack_2_stack_2_stack_2->SetBinError(3,112.6088);
   TT_stack_2_stack_2_stack_2->SetBinError(4,96.2868);
   TT_stack_2_stack_2_stack_2->SetBinError(5,85.18846);
   TT_stack_2_stack_2_stack_2->SetBinError(6,77.69205);
   TT_stack_2_stack_2_stack_2->SetBinError(7,72.09995);
   TT_stack_2_stack_2_stack_2->SetBinError(8,68.44467);
   TT_stack_2_stack_2_stack_2->SetBinError(9,64.02541);
   TT_stack_2_stack_2_stack_2->SetBinError(10,60.8438);
   TT_stack_2_stack_2_stack_2->SetBinError(11,57.50831);
   TT_stack_2_stack_2_stack_2->SetBinError(12,53.80153);
   TT_stack_2_stack_2_stack_2->SetBinError(13,51.78899);
   TT_stack_2_stack_2_stack_2->SetBinError(14,49.63869);
   TT_stack_2_stack_2_stack_2->SetBinError(15,46.76576);
   TT_stack_2_stack_2_stack_2->SetBinError(16,42.68108);
   TT_stack_2_stack_2_stack_2->SetBinError(17,41.70809);
   TT_stack_2_stack_2_stack_2->SetBinError(18,37.6629);
   TT_stack_2_stack_2_stack_2->SetBinError(19,35.39868);
   TT_stack_2_stack_2_stack_2->SetBinError(20,37.28973);
   TT_stack_2_stack_2_stack_2->SetEntries(124131);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,67083.41);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16418.28);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9910.165);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8226.485);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,5727.641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,5062.494);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,3946.068);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3560.77);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,3226.329);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,2628.336);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2673.41);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2368.689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1794.054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1799.729);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1513.182);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1162.576);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,947.9229);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,932.4655);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,474.5819);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,971.3145);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1503.03);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,706.0248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,566.1884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,503.1031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,424.7196);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,396.9084);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,362.6578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,327.9493);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,312.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,295.9666);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,293.0667);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,273.4732);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,238.9412);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,238.5967);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,218.2718);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,204.0851);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,175.1275);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,176.8257);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,142.3945);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,169.2586);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4316.855);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(1,1527.642);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(2,724.9669);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(3,682.9047);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(4,686.2808);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(5,619.4733);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(6,632.3434);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(7,655.6695);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(8,701.1622);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(9,703.1139);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(10,700.4868);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(11,687.1373);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(12,665.1387);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(13,649.907);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(14,555.1012);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(15,474.5492);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(16,407.4105);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(17,313.0522);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(18,269.3701);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(19,181.2328);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(20,241.5913);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(1,52.94441);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(2,37.71344);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(3,34.68415);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(4,34.32458);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(5,34.54979);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(6,34.46163);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(7,34.83128);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(8,35.73517);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(9,35.77391);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(10,35.9416);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(11,35.35548);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(12,35.40394);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(13,34.55133);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(14,33.18214);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(15,31.05117);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(16,29.19081);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(17,26.1089);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(18,23.63233);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(19,20.94712);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(20,21.21213);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetEntries(6400.654);
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
   148901.5,
   33965.71,
   21008.16,
   16438.8,
   12159.46,
   10484.02,
   8571.911,
   7733.03,
   6914.337,
   5966.943,
   5634.417,
   4893.887,
   4221.473,
   4034.656,
   3473.523,
   2788.421,
   2532.757,
   2225.984,
   1668.484,
   2360.661};
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
   1539.684,
   722.5302,
   579.1917,
   514.1215,
   435.0966,
   405.8644,
   371.2375,
   336.5686,
   320.1929,
   303.7776,
   299.8403,
   279.5921,
   245.4565,
   245.0606,
   224.003,
   209.4432,
   181.6884,
   181.6062,
   148.0828,
   175.2338};
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
   1539.684,
   722.5302,
   579.1917,
   514.1215,
   435.0966,
   405.8644,
   371.2375,
   336.5686,
   320.1929,
   303.7776,
   299.8403,
   279.5921,
   245.4565,
   245.0606,
   224.003,
   209.4432,
   181.6884,
   181.6062,
   148.0828,
   175.2338};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMinimum(1368.361);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMaximum(165333.3);
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
   Data__292->SetBinContent(1,151500);
   Data__292->SetBinContent(2,34580);
   Data__292->SetBinContent(3,20260);
   Data__292->SetBinContent(4,15800);
   Data__292->SetBinContent(5,12900);
   Data__292->SetBinContent(6,10760);
   Data__292->SetBinContent(7,1060);
   Data__292->SetBinContent(20,280);
   Data__292->SetBinError(1,1740.69);
   Data__292->SetBinError(2,831.6249);
   Data__292->SetBinError(3,636.5532);
   Data__292->SetBinError(4,562.1388);
   Data__292->SetBinError(5,507.937);
   Data__292->SetBinError(6,463.8965);
   Data__292->SetBinError(7,145.6022);
   Data__292->SetBinError(20,74.83315);
   Data__292->SetEntries(12357);
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
   hframe_copy__293->SetMaximum(1060500);
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
   hframe_copy__294->SetMaximum(1060500);
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
