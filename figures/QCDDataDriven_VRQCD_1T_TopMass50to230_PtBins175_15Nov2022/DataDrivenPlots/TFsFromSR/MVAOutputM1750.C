void MVAOutputM1750()
{
//=========Macro generated from canvas: MVAOutputM1750/MVAOutputM1750
//=========  (Fri Nov 18 13:27:48 2022) by ROOT version 6.20/02
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
   0.02213247,
   0.03750921,
   0.04762521,
   0.05641831,
   0.06555421,
   0.07299785,
   0.08825963,
   0.09914074,
   0.1077345,
   0.111044,
   0.1286395,
   0.1547634,
   0.1666981,
   0.1587502,
   0.1861757,
   0.1788459,
   0.2353548,
   0.213383,
   0.2429415,
   0.4087296};
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
   0.02213247,
   0.03750921,
   0.04762521,
   0.05641831,
   0.06555421,
   0.07299785,
   0.08825963,
   0.09914074,
   0.1077345,
   0.111044,
   0.1286395,
   0.1547634,
   0.1666981,
   0.1587502,
   0.1861757,
   0.1788459,
   0.2353548,
   0.213383,
   0.2429415,
   0.4087296};
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
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMinimum(0.5095244);
   Graph_Graph_Graph_BackgroundStatSystError315731613165->SetMaximum(1.490476);
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
   0.02213247,
   0.03750921,
   0.04762521,
   0.05641831,
   0.06555421,
   0.07299785,
   0.08825963,
   0.09914074,
   0.1077345,
   0.111044,
   0.1286395,
   0.1547634,
   0.1666981,
   0.1587502,
   0.1861757,
   0.1788459,
   0.2353548,
   0.213383,
   0.2429415,
   0.4087296};
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
   0.02213247,
   0.03750921,
   0.04762521,
   0.05641831,
   0.06555421,
   0.07299785,
   0.08825963,
   0.09914074,
   0.1077345,
   0.111044,
   0.1286395,
   0.1547634,
   0.1666981,
   0.1587502,
   0.1861757,
   0.1788459,
   0.2353548,
   0.213383,
   0.2429415,
   0.4087296};
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
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMinimum(0.5095244);
   Graph_Graph_Graph_BackgroundStatError315831623166->SetMaximum(1.490476);
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
   0.9315557,
   1.041879,
   1.188122,
   1.078845,
   1.086922,
   1.023441,
   1.335959,
   1.088927,
   1.06319,
   0.8445989,
   1.019574,
   1.203304,
   0.9227694,
   0.69438,
   1.051217,
   0.9464587,
   1.141797,
   1.064517,
   1.243699,
   2.611589};
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
   0.01568578,
   0.02833537,
   0.03816798,
   0.04325773,
   0.05013599,
   0.05409054,
   0.07612335,
   0.07550353,
   0.08083284,
   0.07554322,
   0.09721255,
   0.1247768,
   0.1144555,
   0.09919715,
   0.1392371,
   0.1276205,
   0.1877103,
   0.1642586,
   0.2044628,
   0.5445539};
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
   0.01568578,
   0.02833537,
   0.03816798,
   0.04325773,
   0.05013599,
   0.05409054,
   0.07612335,
   0.07550353,
   0.08083284,
   0.07554322,
   0.09721255,
   0.1247768,
   0.1144555,
   0.09919715,
   0.1392371,
   0.1276205,
   0.1877103,
   0.1642586,
   0.2044628,
   0.5445539};
   grae = new TGraphAsymmErrors(20,Graph1_fx3167,Graph1_fy3167,Graph1_felx3167,Graph1_fehx3167,Graph1_fely3167,Graph1_fehy3167);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1315931633167 = new TH1F("Graph_Graph_Graph_Graph1315931633167","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1315931633167->SetMinimum(0.3390869);
   Graph_Graph_Graph_Graph1315931633167->SetMaximum(3.412239);
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
   MVAOutputM1750_1->Range(-0.204557,-2.168127,1.073924,6.238212);
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
   hframe__290->SetMaximum(541791.1);
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
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMinimum(30.28912);
   StackedMCstackHist_stack_40_stack_41_stack_42->SetMaximum(121156.5);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1055.034);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,259.2226);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,240.511);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,192.7276);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,86.70878);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,75.92967);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,84.17258);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,49.28406);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,28.12076);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,34.24111);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,30.28007);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,40.09592);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,25.58018);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,4.452886);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,14.99165);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,6.736948);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,15.74521);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,20.63908);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,10.74674);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,10.05733);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,86.27455);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,28.562);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,40.66163);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,41.08896);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,17.06462);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,16.15916);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,16.2417);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,13.25755);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,9.167193);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,29.94616);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,7.56615);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,13.04752);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,8.825046);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,7.060228);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,7.518196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,6.3406);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,8.8291);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,7.835474);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,4.945077);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,6.297962);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(367.0359);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,13576.7);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,3957.495);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2456.83);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1628.071);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1159.929);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,865.8276);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,706.9637);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,575.3114);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,403.7126);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,342.9784);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,330.129);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,216.8368);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,211.9559);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,198.906);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,157.4509);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,122.4128);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,111.3315);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,100.0433);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,98.80936);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,105.6357);
   TT_stack_2_stack_2_stack_2->SetBinError(1,129.0073);
   TT_stack_2_stack_2_stack_2->SetBinError(2,69.58729);
   TT_stack_2_stack_2_stack_2->SetBinError(3,55.23439);
   TT_stack_2_stack_2_stack_2->SetBinError(4,44.76574);
   TT_stack_2_stack_2_stack_2->SetBinError(5,37.99008);
   TT_stack_2_stack_2_stack_2->SetBinError(6,32.91764);
   TT_stack_2_stack_2_stack_2->SetBinError(7,29.15625);
   TT_stack_2_stack_2_stack_2->SetBinError(8,26.41747);
   TT_stack_2_stack_2_stack_2->SetBinError(9,22.36687);
   TT_stack_2_stack_2_stack_2->SetBinError(10,20.40039);
   TT_stack_2_stack_2_stack_2->SetBinError(11,20.2155);
   TT_stack_2_stack_2_stack_2->SetBinError(12,16.03574);
   TT_stack_2_stack_2_stack_2->SetBinError(13,15.96188);
   TT_stack_2_stack_2_stack_2->SetBinError(14,15.75199);
   TT_stack_2_stack_2_stack_2->SetBinError(15,13.86905);
   TT_stack_2_stack_2_stack_2->SetBinError(16,12.17113);
   TT_stack_2_stack_2_stack_2->SetBinError(17,12.01663);
   TT_stack_2_stack_2_stack_2->SetBinError(18,11.23322);
   TT_stack_2_stack_2_stack_2->SetBinError(19,10.88684);
   TT_stack_2_stack_2_stack_2->SetBinError(20,11.08601);
   TT_stack_2_stack_2_stack_2->SetEntries(22257.12);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,61091.06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,21736.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,13614.12);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9710.056);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7401.633);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6054.249);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,3819.782);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3195.677);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,2822.523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,2582.765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1797.355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1288.811);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1171.267);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1207.972);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,912.0148);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1033.077);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,521.0244);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,668.4077);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,485.4434);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,60.44496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1668.731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,970.5704);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,773.8028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,647.7072);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,565.3989);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,509.3752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,405.5871);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,377.5896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,349.7722);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,326.6851);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,276.7333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,238.3296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,234.1354);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,223.383);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,201.2823);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,207.406);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,151.8031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,167.8205);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,144.0546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,70.85479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3184.306);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(1,40.53581);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(2,18.54251);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(3,20.92302);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(4,-1.011614);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(5,8.301177);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(6,0.5468271);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(7,10.41124);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(8,6.112118);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(9,4.728285);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(10,2.226743);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(11,-1.885529);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(12,1.368279);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(13,-1.418755);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(14,4.007544);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(15,2.736384);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(16,0.7565961);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(17,1.99405);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(18,1.085147);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(19,-2.102653);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinContent(20,1.219926);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(1,9.3839);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(2,8.102037);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(3,6.843026);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(4,5.711586);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(5,4.115232);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(6,4.175045);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(7,3.911589);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(8,3.458431);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(9,2.571818);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(10,2.244187);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(11,2.882791);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(12,1.818789);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(13,2.007505);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(14,2.33687);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(15,1.717224);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(16,1.064184);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(17,1.969497);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(18,1.047848);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(19,1.521998);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetBinError(20,1.233045);
   ChargedHiggs_HplusTBHplusToTB_M_800__291->SetEntries(41.65101);
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
   75722.8,
   25953.11,
   16311.46,
   11530.85,
   8648.271,
   6996.006,
   4610.918,
   3820.273,
   3254.357,
   2959.985,
   2157.764,
   1545.744,
   1408.803,
   1411.331,
   1084.457,
   1162.227,
   648.1011,
   789.0901,
   594.9995,
   176.138};
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
   1675.933,
   973.4809,
   776.8365,
   650.5512,
   566.9306,
   510.6934,
   406.958,
   378.7447,
   350.6065,
   328.6885,
   277.5738,
   239.2245,
   234.8447,
   224.049,
   201.8996,
   207.8595,
   152.5337,
   168.3784,
   144.5501,
   71.99281};
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
   1675.933,
   973.4809,
   776.8365,
   650.5512,
   566.9306,
   510.6934,
   406.958,
   378.7447,
   350.6065,
   328.6885,
   277.5738,
   239.2245,
   234.8447,
   224.049,
   201.8996,
   207.8595,
   152.5337,
   168.3784,
   144.5501,
   71.99281};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMinimum(93.73065);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors316031643168->SetMaximum(85128.19);
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
   Data__292->SetBinContent(1,70540);
   Data__292->SetBinContent(2,27040);
   Data__292->SetBinContent(3,19380);
   Data__292->SetBinContent(4,12440);
   Data__292->SetBinContent(5,9400);
   Data__292->SetBinContent(6,7160);
   Data__292->SetBinContent(7,6160);
   Data__292->SetBinContent(8,4160);
   Data__292->SetBinContent(9,3460);
   Data__292->SetBinContent(10,2500);
   Data__292->SetBinContent(11,2200);
   Data__292->SetBinContent(12,1860);
   Data__292->SetBinContent(13,1300);
   Data__292->SetBinContent(14,980);
   Data__292->SetBinContent(15,1140);
   Data__292->SetBinContent(16,1100);
   Data__292->SetBinContent(17,740);
   Data__292->SetBinContent(18,840);
   Data__292->SetBinContent(19,740);
   Data__292->SetBinContent(20,460);
   Data__292->SetBinError(1,1187.771);
   Data__292->SetBinError(2,735.3911);
   Data__292->SetBinError(3,622.5753);
   Data__292->SetBinError(4,498.7986);
   Data__292->SetBinError(5,433.5897);
   Data__292->SetBinError(6,378.4178);
   Data__292->SetBinError(7,350.9986);
   Data__292->SetBinError(8,288.4441);
   Data__292->SetBinError(9,263.0589);
   Data__292->SetBinError(10,223.6068);
   Data__292->SetBinError(11,209.7618);
   Data__292->SetBinError(12,192.873);
   Data__292->SetBinError(13,161.2452);
   Data__292->SetBinError(14,140);
   Data__292->SetBinError(15,150.9967);
   Data__292->SetBinError(16,148.324);
   Data__292->SetBinError(17,121.6553);
   Data__292->SetBinError(18,129.6148);
   Data__292->SetBinError(19,121.6553);
   Data__292->SetBinError(20,95.91663);
   Data__292->SetEntries(8680);
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
   hframe_copy__293->SetMaximum(541791.1);
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
   hframe_copy__294->SetMaximum(541791.1);
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
