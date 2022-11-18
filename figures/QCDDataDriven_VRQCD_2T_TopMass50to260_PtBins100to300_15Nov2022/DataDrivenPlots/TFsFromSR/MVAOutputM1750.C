void MVAOutputM1750()
{
//=========Macro generated from canvas: MVAOutputM1750/MVAOutputM1750
//=========  (Fri Nov 18 13:28:01 2022) by ROOT version 6.20/02
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
   0.0119318,
   0.02549161,
   0.02940549,
   0.03300727,
   0.03677469,
   0.04065716,
   0.04400034,
   0.04914349,
   0.05293415,
   0.05439683,
   0.05810704,
   0.06711562,
   0.07519831,
   0.07286223,
   0.08145393,
   0.08191261,
   0.09090252,
   0.08761055,
   0.1018305,
   0.08213847};
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
   0.0119318,
   0.02549161,
   0.02940549,
   0.03300727,
   0.03677469,
   0.04065716,
   0.04400034,
   0.04914349,
   0.05293415,
   0.05439683,
   0.05810704,
   0.06711562,
   0.07519831,
   0.07286223,
   0.08145393,
   0.08191261,
   0.09090252,
   0.08761055,
   0.1018305,
   0.08213847};
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
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMinimum(0.8778034);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMaximum(1.122197);
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
   0.0119318,
   0.02549161,
   0.02940549,
   0.03300727,
   0.03677469,
   0.04065716,
   0.04400034,
   0.04914349,
   0.05293415,
   0.05439683,
   0.05810704,
   0.06711562,
   0.07519831,
   0.07286223,
   0.08145393,
   0.08191261,
   0.09090252,
   0.08761055,
   0.1018305,
   0.08213847};
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
   0.0119318,
   0.02549161,
   0.02940549,
   0.03300727,
   0.03677469,
   0.04065716,
   0.04400034,
   0.04914349,
   0.05293415,
   0.05439683,
   0.05810704,
   0.06711562,
   0.07519831,
   0.07286223,
   0.08145393,
   0.08191261,
   0.09090252,
   0.08761055,
   0.1018305,
   0.08213847};
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
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMinimum(0.8778034);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMaximum(1.122197);
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
   
   Double_t Graph1_fx3167[20] = {
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
   Double_t Graph1_fy3167[20] = {
   0.9362105,
   1.085003,
   1.025823,
   1.095949,
   1.015828,
   1.085647,
   1.096806,
   1.132224,
   1.089086,
   0.8866808,
   0.991866,
   1.078667,
   1.297458,
   1.122745,
   0.8723724,
   0.9115031,
   0.9301359,
   1.000556,
   1.43809,
   0.7944031};
   Double_t Graph1_felx3167[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3167[20] = {
   0.01263765,
   0.02934585,
   0.03185541,
   0.0375466,
   0.03901265,
   0.04488596,
   0.04847245,
   0.05524687,
   0.05923845,
   0.05233911,
   0.06070121,
   0.07390903,
   0.09220635,
   0.08368447,
   0.07963634,
   0.08185539,
   0.09301359,
   0.0945437,
   0.1364975,
   0.07865763};
   Double_t Graph1_fehx3167[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3167[20] = {
   0.01263765,
   0.02934585,
   0.03185541,
   0.0375466,
   0.03901265,
   0.04488596,
   0.04847245,
   0.05524687,
   0.05923845,
   0.05233911,
   0.06070121,
   0.07390903,
   0.09220635,
   0.08368447,
   0.07963634,
   0.08185539,
   0.09301359,
   0.0945437,
   0.1364975,
   0.07865763};
   grae = new TGraphAsymmErrors(20,Graph1_fx3167,Graph1_fy3167,Graph1_felx3167,Graph1_fehx3167,Graph1_fely3167,Graph1_fehy3167);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1315931633167 = new TH1F("Graph_Graph_Graph_Graph1315931633167","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1315931633167->SetMinimum(0.6298613);
   Graph_Graph_Graph_Graph1315931633167->SetMaximum(1.660472);
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
   MVAOutputM1750_1->Range(-0.204557,-2.172159,1.073924,6.435797);
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
   hframe__290->SetMaximum(830462.2);
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
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMinimum(10.55098);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMaximum(201620.3);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2421.699);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,699.4123);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,505.557);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,310.2807);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,316.5544);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,233.4272);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,167.8243);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,139.4815);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,117.7905);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,99.81281);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,130.5987);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,103.8829);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,69.4017);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,43.39743);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,64.29405);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,58.87777);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,55.23014);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,59.11515);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,64.37497);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,48.2457);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,104.5694);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,61.95072);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,42.96264);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,35.82938);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,57.42329);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,29.31999);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,23.40724);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,22.83268);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,21.77157);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,18.36758);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,17.96793);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,19.30296);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,13.89351);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,10.1689);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,14.74548);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,14.47693);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,12.94272);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,13.97299);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,12.39541);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,15.42793);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1248.243);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,40280.36);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,8331.389);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,5579.987);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4397.012);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3417.782);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2729.442);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2227.12);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1945.771);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1577.273);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1445.65);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1193.418);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1056.041);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,840.1063);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,753.8165);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,692.2786);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,571.9838);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,514.8497);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,473.3504);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,485.0713);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,676.5424);
   TT_stack_2_stack_2_stack_2->SetBinError(1,217.4755);
   TT_stack_2_stack_2_stack_2->SetBinError(2,99.3534);
   TT_stack_2_stack_2_stack_2->SetBinError(3,81.42828);
   TT_stack_2_stack_2_stack_2->SetBinError(4,71.98107);
   TT_stack_2_stack_2_stack_2->SetBinError(5,63.7008);
   TT_stack_2_stack_2_stack_2->SetBinError(6,57.17512);
   TT_stack_2_stack_2_stack_2->SetBinError(7,51.4987);
   TT_stack_2_stack_2_stack_2->SetBinError(8,48.0975);
   TT_stack_2_stack_2_stack_2->SetBinError(9,43.58362);
   TT_stack_2_stack_2_stack_2->SetBinError(10,41.50979);
   TT_stack_2_stack_2_stack_2->SetBinError(11,37.61122);
   TT_stack_2_stack_2_stack_2->SetBinError(12,35.57889);
   TT_stack_2_stack_2_stack_2->SetBinError(13,31.72209);
   TT_stack_2_stack_2_stack_2->SetBinError(14,30.28187);
   TT_stack_2_stack_2_stack_2->SetBinError(15,28.7832);
   TT_stack_2_stack_2_stack_2->SetBinError(16,26.37741);
   TT_stack_2_stack_2_stack_2->SetBinError(17,24.60352);
   TT_stack_2_stack_2_stack_2->SetBinError(18,23.52317);
   TT_stack_2_stack_2_stack_2->SetBinError(19,24.32011);
   TT_stack_2_stack_2_stack_2->SetBinError(20,28.24543);
   TT_stack_2_stack_2_stack_2->SetEntries(67019.13);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,74536.53);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16167.29);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,14132.36);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10840.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9614.375);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,7814.119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,6941.252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,5333.774);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4511.978);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4928.118);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,4059.775);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2789.396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2142.613);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2409.213);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1994.546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2089.919);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1580.144);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1706.289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,994.2681);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1843.178);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1377.897);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,631.5786);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,587.3454);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,506.8646);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,483.345);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,433.4247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,406.8822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,360.6885);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,324.9324);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,349.2045);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,310.0468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,261.9521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,226.8866);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,231.4333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,221.7435);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,220.8258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,193.4736);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,194.2208);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,154.8091);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,208.4589);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7148.648);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(1,146.5969);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(2,67.03051);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(3,32.49339);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(4,25.98874);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(5,20.46157);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(6,16.56231);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(7,18.01582);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(8,15.02497);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(9,19.17123);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(10,17.88241);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(11,9.255373);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(12,10.49689);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(13,9.50577);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(14,1.516775);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(15,12.72956);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(16,-1.96966);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(17,-2.111582);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(18,2.066739);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(19,3.725534);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(20,0.7731707);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(1,19.68881);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(2,11.43661);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(3,10.54194);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(4,9.807155);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(5,9.037259);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(6,8.482763);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(7,7.670059);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(8,6.534274);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(9,6.658027);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(10,6.646069);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(11,6.064381);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(12,5.298135);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(13,4.8868);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(14,4.194796);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(15,4.286671);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(16,3.740035);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(17,3.679256);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(18,3.714295);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(19,2.944666);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(20,2.783328);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetEntries(144.4332);
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
   117238.6,
   25198.09,
   20217.91,
   15548.17,
   13348.71,
   10776.99,
   9336.196,
   7419.027,
   6207.042,
   6473.581,
   5383.792,
   3949.32,
   3052.121,
   3206.427,
   2751.119,
   2720.781,
   2150.223,
   2238.754,
   1543.714,
   2567.966};
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
   1398.867,
   642.3399,
   594.5175,
   513.2025,
   490.8947,
   438.1616,
   410.7958,
   364.5969,
   328.5645,
   352.1423,
   312.8362,
   265.061,
   229.5143,
   233.6274,
   224.0894,
   222.8663,
   195.4607,
   196.1385,
   157.1972,
   210.9288};
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
   1398.867,
   642.3399,
   594.5175,
   513.2025,
   490.8947,
   438.1616,
   410.7958,
   364.5969,
   328.5645,
   352.1423,
   312.8362,
   265.061,
   229.5143,
   233.6274,
   224.0894,
   222.8663,
   195.4607,
   196.1385,
   157.1972,
   210.9288};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMinimum(1247.865);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMaximum(130362.5);
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
   Data__292->SetBinContent(1,109760);
   Data__292->SetBinContent(2,27340);
   Data__292->SetBinContent(3,20740);
   Data__292->SetBinContent(4,17040);
   Data__292->SetBinContent(5,13560);
   Data__292->SetBinContent(6,11700);
   Data__292->SetBinContent(7,10240);
   Data__292->SetBinContent(8,8400);
   Data__292->SetBinContent(9,6760);
   Data__292->SetBinContent(10,5740);
   Data__292->SetBinContent(11,5340);
   Data__292->SetBinContent(12,4260);
   Data__292->SetBinContent(13,3960);
   Data__292->SetBinContent(14,3600);
   Data__292->SetBinContent(15,2400);
   Data__292->SetBinContent(16,2480);
   Data__292->SetBinContent(17,2000);
   Data__292->SetBinContent(18,2240);
   Data__292->SetBinContent(19,2220);
   Data__292->SetBinContent(20,2040);
   Data__292->SetBinError(1,1481.621);
   Data__292->SetBinError(2,739.4593);
   Data__292->SetBinError(3,644.0497);
   Data__292->SetBinError(4,583.7808);
   Data__292->SetBinError(5,520.7687);
   Data__292->SetBinError(6,483.7355);
   Data__292->SetBinError(7,452.5483);
   Data__292->SetBinError(8,409.878);
   Data__292->SetBinError(9,367.6955);
   Data__292->SetBinError(10,338.8215);
   Data__292->SetBinError(11,326.8027);
   Data__292->SetBinError(12,291.8904);
   Data__292->SetBinError(13,281.4249);
   Data__292->SetBinError(14,268.3282);
   Data__292->SetBinError(15,219.089);
   Data__292->SetBinError(16,222.7106);
   Data__292->SetBinError(17,200);
   Data__292->SetBinError(18,211.6601);
   Data__292->SetBinError(19,210.7131);
   Data__292->SetBinError(20,201.9901);
   Data__292->SetEntries(13091);
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
   hframe_copy__293->SetMaximum(830462.2);
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
   hframe_copy__294->SetMaximum(830462.2);
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
   MVAOutputM1750_1->Modified();
   MVAOutputM1750->cd();
   MVAOutputM1750->Modified();
   MVAOutputM1750->cd();
   MVAOutputM1750->SetSelected(MVAOutputM1750);
}
