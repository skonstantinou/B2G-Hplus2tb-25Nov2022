void MVAOutputM1250()
{
//=========Macro generated from canvas: MVAOutputM1250/MVAOutputM1250
//=========  (Fri Nov 18 13:27:38 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM1250 = new TCanvas("MVAOutputM1250", "MVAOutputM1250",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM1250->SetHighLightColor(2);
   MVAOutputM1250->Range(0,0,1,1);
   MVAOutputM1250->SetFillColor(0);
   MVAOutputM1250->SetBorderMode(0);
   MVAOutputM1250->SetBorderSize(2);
   MVAOutputM1250->SetTickx(1);
   MVAOutputM1250->SetTicky(1);
   MVAOutputM1250->SetLeftMargin(0.16);
   MVAOutputM1250->SetRightMargin(0.05);
   MVAOutputM1250->SetTopMargin(0.06);
   MVAOutputM1250->SetBottomMargin(0.13);
   MVAOutputM1250->SetFrameFillStyle(0);
   MVAOutputM1250->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM1250_2
   TPad *MVAOutputM1250_2 = new TPad("MVAOutputM1250_2", "MVAOutputM1250_2",0,0,1,0.304);
   MVAOutputM1250_2->Draw();
   MVAOutputM1250_2->cd();
   MVAOutputM1250_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM1250_2->SetFillColor(0);
   MVAOutputM1250_2->SetFillStyle(4000);
   MVAOutputM1250_2->SetBorderMode(0);
   MVAOutputM1250_2->SetBorderSize(2);
   MVAOutputM1250_2->SetTickx(1);
   MVAOutputM1250_2->SetTicky(1);
   MVAOutputM1250_2->SetLeftMargin(0.16);
   MVAOutputM1250_2->SetRightMargin(0.05);
   MVAOutputM1250_2->SetTopMargin(0);
   MVAOutputM1250_2->SetBottomMargin(0.3421053);
   MVAOutputM1250_2->SetFrameFillStyle(0);
   MVAOutputM1250_2->SetFrameBorderMode(0);
   MVAOutputM1250_2->SetFrameFillStyle(0);
   MVAOutputM1250_2->SetFrameBorderMode(0);
   
   TH1F *hframe__246 = new TH1F("hframe__246","",1000,0,1.01);
   hframe__246->SetMinimum(0.3);
   hframe__246->SetMaximum(1.7);
   hframe__246->SetDirectory(0);
   hframe__246->SetStats(0);
   hframe__246->SetLineStyle(0);
   hframe__246->SetMarkerStyle(20);
   hframe__246->GetXaxis()->SetTitle("DNN Output");
   hframe__246->GetXaxis()->SetLabelFont(43);
   hframe__246->GetXaxis()->SetLabelOffset(0.007);
   hframe__246->GetXaxis()->SetLabelSize(27);
   hframe__246->GetXaxis()->SetTitleSize(33);
   hframe__246->GetXaxis()->SetTitleOffset(2.960526);
   hframe__246->GetXaxis()->SetTitleFont(43);
   hframe__246->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__246->GetYaxis()->SetNdivisions(505);
   hframe__246->GetYaxis()->SetLabelFont(43);
   hframe__246->GetYaxis()->SetLabelOffset(0.007);
   hframe__246->GetYaxis()->SetLabelSize(21);
   hframe__246->GetYaxis()->SetTitleSize(33);
   hframe__246->GetYaxis()->SetTitleOffset(1.5625);
   hframe__246->GetYaxis()->SetTitleFont(43);
   hframe__246->GetZaxis()->SetLabelFont(43);
   hframe__246->GetZaxis()->SetLabelOffset(0.007);
   hframe__246->GetZaxis()->SetLabelSize(27);
   hframe__246->GetZaxis()->SetTitleSize(33);
   hframe__246->GetZaxis()->SetTitleOffset(1);
   hframe__246->GetZaxis()->SetTitleFont(43);
   hframe__246->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3141[20] = {
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
   Double_t BackgroundStatSystError_fy3141[20] = {
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
   Double_t BackgroundStatSystError_felx3141[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3141[20] = {
   0.00524502,
   0.008360714,
   0.01029126,
   0.01178432,
   0.01269427,
   0.01365535,
   0.01476665,
   0.01576827,
   0.01678667,
   0.01769467,
   0.01842472,
   0.0196547,
   0.02071228,
   0.02167567,
   0.02343917,
   0.02449103,
   0.0261038,
   0.02678396,
   0.02654765,
   0.02771337};
   Double_t BackgroundStatSystError_fehx3141[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3141[20] = {
   0.00524502,
   0.008360714,
   0.01029126,
   0.01178432,
   0.01269427,
   0.01365535,
   0.01476665,
   0.01576827,
   0.01678667,
   0.01769467,
   0.01842472,
   0.0196547,
   0.02071228,
   0.02167567,
   0.02343917,
   0.02449103,
   0.0261038,
   0.02678396,
   0.02654765,
   0.02771337};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3141,BackgroundStatSystError_fy3141,BackgroundStatSystError_felx3141,BackgroundStatSystError_fehx3141,BackgroundStatSystError_fely3141,BackgroundStatSystError_fehy3141);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1245;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError313331373141 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError313331373141","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMinimum(0.966744);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMaximum(1.033256);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError313331373141);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3142[20] = {
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
   Double_t BackgroundStatError_fy3142[20] = {
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
   Double_t BackgroundStatError_felx3142[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3142[20] = {
   0.00524502,
   0.008360714,
   0.01029126,
   0.01178432,
   0.01269427,
   0.01365535,
   0.01476665,
   0.01576827,
   0.01678667,
   0.01769467,
   0.01842472,
   0.0196547,
   0.02071228,
   0.02167567,
   0.02343917,
   0.02449103,
   0.0261038,
   0.02678396,
   0.02654765,
   0.02771337};
   Double_t BackgroundStatError_fehx3142[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3142[20] = {
   0.00524502,
   0.008360714,
   0.01029126,
   0.01178432,
   0.01269427,
   0.01365535,
   0.01476665,
   0.01576827,
   0.01678667,
   0.01769467,
   0.01842472,
   0.0196547,
   0.02071228,
   0.02167567,
   0.02343917,
   0.02449103,
   0.0261038,
   0.02678396,
   0.02654765,
   0.02771337};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3142,BackgroundStatError_fy3142,BackgroundStatError_felx3142,BackgroundStatError_fehx3142,BackgroundStatError_fely3142,BackgroundStatError_fehy3142);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1244;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError313431383142 = new TH1F("Graph_Graph_Graph_BackgroundStatError313431383142","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMinimum(0.966744);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMaximum(1.033256);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError313431383142);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx36[2] = {
   0,
   1.01};
   Double_t Graph0_fy36[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx36,Graph0_fy36);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0343536 = new TH1F("Graph_Graph_Graph_Graph0343536","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0343536->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0343536->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0343536->SetDirectory(0);
   Graph_Graph_Graph_Graph0343536->SetStats(0);
   Graph_Graph_Graph_Graph0343536->SetLineStyle(0);
   Graph_Graph_Graph_Graph0343536->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0343536);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3143[20] = {
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
   Double_t Graph1_fy3143[20] = {
   0.888714,
   0.9478438,
   0.9591153,
   0.9306519,
   0.9687488,
   0.9853064,
   0.9585194,
   0.9859531,
   0.9802081,
   1.043708,
   0.9739311,
   0.9879778,
   0.9847777,
   0.9017316,
   1.019825,
   0.9998862,
   0.9557813,
   1.069419,
   1.045384,
   0.8763219};
   Double_t Graph1_felx3143[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3143[20] = {
   0.007797537,
   0.01286284,
   0.01598304,
   0.01737792,
   0.01934405,
   0.02112233,
   0.02180143,
   0.02391288,
   0.02514181,
   0.02761944,
   0.02773618,
   0.02909595,
   0.03145757,
   0.03091096,
   0.03497972,
   0.03648636,
   0.037374,
   0.04140809,
   0.0408154,
   0.03757199};
   Double_t Graph1_fehx3143[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3143[20] = {
   0.007797537,
   0.01286284,
   0.01598304,
   0.01737792,
   0.01934405,
   0.02112233,
   0.02180143,
   0.02391288,
   0.02514181,
   0.02761944,
   0.02773618,
   0.02909595,
   0.03145757,
   0.03091096,
   0.03497972,
   0.03648636,
   0.037374,
   0.04140809,
   0.0408154,
   0.03757199};
   grae = new TGraphAsymmErrors(20,Graph1_fx3143,Graph1_fy3143,Graph1_felx3143,Graph1_fehx3143,Graph1_fely3143,Graph1_fehy3143);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1313531393143 = new TH1F("Graph_Graph_Graph_Graph1313531393143","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1313531393143->SetMinimum(0.8115421);
   Graph_Graph_Graph_Graph1313531393143->SetMaximum(1.138035);
   Graph_Graph_Graph_Graph1313531393143->SetDirectory(0);
   Graph_Graph_Graph_Graph1313531393143->SetStats(0);
   Graph_Graph_Graph_Graph1313531393143->SetLineStyle(0);
   Graph_Graph_Graph_Graph1313531393143->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1313531393143);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__247 = new TH1F("hframe_copy__247","",1000,0,1.01);
   hframe_copy__247->SetMinimum(0.3);
   hframe_copy__247->SetMaximum(1.7);
   hframe_copy__247->SetDirectory(0);
   hframe_copy__247->SetStats(0);
   hframe_copy__247->SetLineStyle(0);
   hframe_copy__247->SetMarkerStyle(20);
   hframe_copy__247->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__247->GetXaxis()->SetLabelFont(43);
   hframe_copy__247->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__247->GetXaxis()->SetLabelSize(27);
   hframe_copy__247->GetXaxis()->SetTitleSize(33);
   hframe_copy__247->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__247->GetXaxis()->SetTitleFont(43);
   hframe_copy__247->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__247->GetYaxis()->SetNdivisions(505);
   hframe_copy__247->GetYaxis()->SetLabelFont(43);
   hframe_copy__247->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__247->GetYaxis()->SetLabelSize(21);
   hframe_copy__247->GetYaxis()->SetTitleSize(33);
   hframe_copy__247->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__247->GetYaxis()->SetTitleFont(43);
   hframe_copy__247->GetZaxis()->SetLabelFont(43);
   hframe_copy__247->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__247->GetZaxis()->SetLabelSize(27);
   hframe_copy__247->GetZaxis()->SetTitleSize(33);
   hframe_copy__247->GetZaxis()->SetTitleOffset(1);
   hframe_copy__247->GetZaxis()->SetTitleFont(43);
   hframe_copy__247->Draw("sameaxis");
   MVAOutputM1250_2->Modified();
   MVAOutputM1250->cd();
  
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
   MVAOutputM1250->cd();
  
// ------------>Primitives in pad: MVAOutputM1250_1
   TPad *MVAOutputM1250_1 = new TPad("MVAOutputM1250_1", "MVAOutputM1250_1",0,0.2897959,1,1);
   MVAOutputM1250_1->Draw();
   MVAOutputM1250_1->cd();
   MVAOutputM1250_1->Range(-0.204557,-2.180723,1.073924,6.855415);
   MVAOutputM1250_1->SetFillColor(0);
   MVAOutputM1250_1->SetFillStyle(4000);
   MVAOutputM1250_1->SetBorderMode(0);
   MVAOutputM1250_1->SetBorderSize(2);
   MVAOutputM1250_1->SetLogy();
   MVAOutputM1250_1->SetTickx(1);
   MVAOutputM1250_1->SetTicky(1);
   MVAOutputM1250_1->SetLeftMargin(0.16);
   MVAOutputM1250_1->SetRightMargin(0.05);
   MVAOutputM1250_1->SetTopMargin(0.06);
   MVAOutputM1250_1->SetBottomMargin(0.02);
   MVAOutputM1250_1->SetFrameFillStyle(0);
   MVAOutputM1250_1->SetFrameBorderMode(0);
   MVAOutputM1250_1->SetFrameFillStyle(0);
   MVAOutputM1250_1->SetFrameBorderMode(0);
   
   TH1F *hframe__248 = new TH1F("hframe__248","",1000,0,1.01);
   hframe__248->SetMinimum(0.01);
   hframe__248->SetMaximum(2057061);
   hframe__248->SetDirectory(0);
   hframe__248->SetStats(0);
   hframe__248->SetLineStyle(0);
   hframe__248->SetMarkerStyle(20);
   hframe__248->GetXaxis()->SetLabelFont(43);
   hframe__248->GetXaxis()->SetLabelOffset(0.007);
   hframe__248->GetXaxis()->SetLabelSize(0);
   hframe__248->GetXaxis()->SetTitleSize(0);
   hframe__248->GetXaxis()->SetTitleOffset(0.9);
   hframe__248->GetXaxis()->SetTitleFont(43);
   hframe__248->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__248->GetYaxis()->SetLabelFont(43);
   hframe__248->GetYaxis()->SetLabelOffset(0.007);
   hframe__248->GetYaxis()->SetLabelSize(27);
   hframe__248->GetYaxis()->SetTitleSize(33);
   hframe__248->GetYaxis()->SetTitleOffset(1.5625);
   hframe__248->GetYaxis()->SetTitleFont(43);
   hframe__248->GetZaxis()->SetLabelFont(43);
   hframe__248->GetZaxis()->SetLabelOffset(0.007);
   hframe__248->GetZaxis()->SetLabelSize(27);
   hframe__248->GetZaxis()->SetTitleSize(33);
   hframe__248->GetZaxis()->SetTitleOffset(1);
   hframe__248->GetZaxis()->SetTitleFont(43);
   hframe__248->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis211[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_34_stack_35_stack_36 = new TH1F("StackedMCstackHist_stack_34_stack_35_stack_36","StackedMCstackHist",20, xAxis211);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMinimum(136.5875);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMaximum(464104.2);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetDirectory(0);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetStats(0);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetLineStyle(0);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMarkerStyle(20);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_34_stack_35_stack_36);
   
   Double_t xAxis212[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM1250Inclusive",20, xAxis212);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,6401.713);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,2471.524);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1825.198);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1439.315);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1236.366);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1235.752);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1077.114);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1045.831);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,884.6951);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,762.1175);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,661.3237);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,577.2725);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,625.9976);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,555.7487);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,524.856);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,450.7297);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,446.3827);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,452.3841);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,415.7757);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,540.6094);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,166.0675);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,115.792);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,91.90191);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,81.12607);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,72.51253);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,83.1178);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,67.9583);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,64.60627);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,73.34043);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,59.95313);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,51.86939);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,51.04233);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,50.1531);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,50.87083);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,46.46437);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,42.23083);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,44.58813);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,44.20913);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,41.07458);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,44.94209);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5173.507);
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
   Double_t xAxis213[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1250Inclusive",20, xAxis213);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,251679.2);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,93419.28);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,61573.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,48646.84);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,41552.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,35939.1);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,31466.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,27599.71);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,24613.92);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,22063.56);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,20027.79);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,18116.96);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,16128.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,14566.42);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,12981.99);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,11705.51);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,10562.82);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,9985.387);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,9895.803);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,9249.452);
   TT_stack_2_stack_2_stack_2->SetBinError(1,526.417);
   TT_stack_2_stack_2_stack_2->SetBinError(2,321.6726);
   TT_stack_2_stack_2_stack_2->SetBinError(3,260.5914);
   TT_stack_2_stack_2_stack_2->SetBinError(4,231.4147);
   TT_stack_2_stack_2_stack_2->SetBinError(5,213.728);
   TT_stack_2_stack_2_stack_2->SetBinError(6,198.7294);
   TT_stack_2_stack_2_stack_2->SetBinError(7,185.9302);
   TT_stack_2_stack_2_stack_2->SetBinError(8,174.0194);
   TT_stack_2_stack_2_stack_2->SetBinError(9,164.5773);
   TT_stack_2_stack_2_stack_2->SetBinError(10,155.7856);
   TT_stack_2_stack_2_stack_2->SetBinError(11,148.4026);
   TT_stack_2_stack_2_stack_2->SetBinError(12,141.3622);
   TT_stack_2_stack_2_stack_2->SetBinError(13,133.3455);
   TT_stack_2_stack_2_stack_2->SetBinError(14,126.5646);
   TT_stack_2_stack_2_stack_2->SetBinError(15,119.5535);
   TT_stack_2_stack_2_stack_2->SetBinError(16,113.4468);
   TT_stack_2_stack_2_stack_2->SetBinError(17,107.7175);
   TT_stack_2_stack_2_stack_2->SetBinError(18,104.7143);
   TT_stack_2_stack_2_stack_2->SetBinError(19,104.3548);
   TT_stack_2_stack_2_stack_2->SetBinError(20,100.8967);
   TT_stack_2_stack_2_stack_2->SetEntries(700717.2);
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
   Double_t xAxis214[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1250Inclusive",20, xAxis214);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,34251.58);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,18685.04);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11691.33);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11548.06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8989.257);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6994.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,7789.712);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,5838.858);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,5515.211);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4538.296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,4630.952);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,4646.374);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3148.634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3752.634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,3162.671);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2865.469);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2675.936);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2036.287);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,2238.831);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2625.468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1430.484);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,894.852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,721.6792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,683.6688);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,617.3222);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,563.3647);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,561.7221);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,511.0944);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,488.4458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,454.5136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,439.2295);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,433.4345);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,386.836);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,385.7147);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,369.0664);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,347.4114);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,337.676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,314.1758);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,313.7427);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,325.8657);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3154.25);
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
   Double_t xAxis215[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__249 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__249","h_SR_MVAOutputM1250Inclusive",20, xAxis215);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(1,109.0511);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(2,129.0927);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(3,105.0225);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(4,114.1872);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(5,96.17095);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(6,125.4817);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(7,142.057);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(8,103.3599);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(9,108.0661);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(10,106.8355);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(11,119.9345);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(12,99.04945);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(13,101.5704);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(14,120.4926);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(15,105.0603);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(16,99.60274);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(17,106.0349);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(18,108.099);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(19,75.77191);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(20,58.76314);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(1,15.80858);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(2,15.60321);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(3,15.51351);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(4,15.46409);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(5,15.87385);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(6,16.22337);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(7,16.37722);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(8,16.82872);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(9,17.53024);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(10,17.00081);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(11,17.11482);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(12,16.76599);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(13,16.44201);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(14,16.93909);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(15,16.91244);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(16,16.53501);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(17,16.4307);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(18,16.81488);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(19,16.65813);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(20,15.62818);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetEntries(842.8916);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3144[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3144[20] = {
   292332.5,
   114575.8,
   75090.03,
   61634.22,
   51778.13,
   44169,
   40333.04,
   34484.4,
   31013.82,
   27363.97,
   25320.07,
   23340.61,
   19902.97,
   18874.8,
   16669.52,
   15021.71,
   13685.14,
   12474.06,
   12550.41,
   12415.53};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3144[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3144[20] = {
   1533.29,
   957.9359,
   772.7708,
   726.3176,
   657.2857,
   603.1432,
   595.5838,
   543.7593,
   520.6187,
   484.1964,
   466.5151,
   458.7527,
   412.2359,
   409.1238,
   390.7198,
   367.8971,
   357.2342,
   334.1047,
   333.1839,
   344.0761};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3144[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3144[20] = {
   1533.29,
   957.9359,
   772.7708,
   726.3176,
   657.2857,
   603.1432,
   595.5838,
   543.7593,
   520.6187,
   484.1964,
   466.5151,
   458.7527,
   412.2359,
   409.1238,
   390.7198,
   367.8971,
   357.2342,
   334.1047,
   333.1839,
   344.0761};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3144,BkgSum-SR-Inclusive_sum_errors_fy3144,BkgSum-SR-Inclusive_sum_errors_felx3144,BkgSum-SR-Inclusive_sum_errors_fehx3144,BkgSum-SR-Inclusive_sum_errors_fely3144,BkgSum-SR-Inclusive_sum_errors_fehy3144);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1243;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMinimum(10864.31);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMaximum(322045.3);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors313631403144);
   
   grae->Draw("e2 ");
   Double_t xAxis216[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__250 = new TH1F("Data__250","h_SR_MVAOutputM1250Inclusive",20, xAxis216);
   Data__250->SetBinContent(1,259800);
   Data__250->SetBinContent(2,108600);
   Data__250->SetBinContent(3,72020);
   Data__250->SetBinContent(4,57360);
   Data__250->SetBinContent(5,50160);
   Data__250->SetBinContent(6,43520);
   Data__250->SetBinContent(7,38660);
   Data__250->SetBinContent(8,34000);
   Data__250->SetBinContent(9,30400);
   Data__250->SetBinContent(10,28560);
   Data__250->SetBinContent(11,24660);
   Data__250->SetBinContent(12,23060);
   Data__250->SetBinContent(13,19600);
   Data__250->SetBinContent(14,17020);
   Data__250->SetBinContent(15,17000);
   Data__250->SetBinContent(16,15020);
   Data__250->SetBinContent(17,13080);
   Data__250->SetBinContent(18,13340);
   Data__250->SetBinContent(19,13120);
   Data__250->SetBinContent(20,10880);
   Data__250->SetBinError(1,2279.474);
   Data__250->SetBinError(2,1473.771);
   Data__250->SetBinError(3,1200.167);
   Data__250->SetBinError(4,1071.074);
   Data__250->SetBinError(5,1001.599);
   Data__250->SetBinError(6,932.9523);
   Data__250->SetBinError(7,879.3179);
   Data__250->SetBinError(8,824.6211);
   Data__250->SetBinError(9,779.7435);
   Data__250->SetBinError(10,755.7777);
   Data__250->SetBinError(11,702.282);
   Data__250->SetBinError(12,679.1171);
   Data__250->SetBinError(13,626.099);
   Data__250->SetBinError(14,583.4381);
   Data__250->SetBinError(15,583.0952);
   Data__250->SetBinError(16,548.0876);
   Data__250->SetBinError(17,511.4685);
   Data__250->SetBinError(18,516.5269);
   Data__250->SetBinError(19,512.2499);
   Data__250->SetBinError(20,466.4762);
   Data__250->SetEntries(44493);
   Data__250->SetDirectory(0);
   Data__250->SetFillStyle(3001);
   Data__250->SetLineWidth(2);
   Data__250->SetMarkerStyle(20);
   Data__250->SetMarkerSize(1.2);
   Data__250->GetXaxis()->SetRange(1,200);
   Data__250->GetXaxis()->SetLabelFont(42);
   Data__250->GetXaxis()->SetTitleOffset(1);
   Data__250->GetXaxis()->SetTitleFont(42);
   Data__250->GetYaxis()->SetLabelFont(42);
   Data__250->GetYaxis()->SetTitleFont(42);
   Data__250->GetZaxis()->SetLabelFont(42);
   Data__250->GetZaxis()->SetTitleOffset(1);
   Data__250->GetZaxis()->SetTitleFont(42);
   Data__250->Draw("EP same");
   
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

   ci = 1243;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1243;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__251 = new TH1F("hframe_copy__251","",1000,0,1.01);
   hframe_copy__251->SetMinimum(0.01);
   hframe_copy__251->SetMaximum(2057061);
   hframe_copy__251->SetDirectory(0);
   hframe_copy__251->SetStats(0);
   hframe_copy__251->SetLineStyle(0);
   hframe_copy__251->SetMarkerStyle(20);
   hframe_copy__251->GetXaxis()->SetLabelFont(43);
   hframe_copy__251->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__251->GetXaxis()->SetLabelSize(0);
   hframe_copy__251->GetXaxis()->SetTitleSize(0);
   hframe_copy__251->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__251->GetXaxis()->SetTitleFont(43);
   hframe_copy__251->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__251->GetYaxis()->SetLabelFont(43);
   hframe_copy__251->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__251->GetYaxis()->SetLabelSize(27);
   hframe_copy__251->GetYaxis()->SetTitleSize(33);
   hframe_copy__251->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__251->GetYaxis()->SetTitleFont(43);
   hframe_copy__251->GetZaxis()->SetLabelFont(43);
   hframe_copy__251->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__251->GetZaxis()->SetLabelSize(27);
   hframe_copy__251->GetZaxis()->SetTitleSize(33);
   hframe_copy__251->GetZaxis()->SetTitleOffset(1);
   hframe_copy__251->GetZaxis()->SetTitleFont(43);
   hframe_copy__251->Draw("sameaxis");
   
   TH1F *hframe_copy__252 = new TH1F("hframe_copy__252","",1000,0,1.01);
   hframe_copy__252->SetMinimum(0.01);
   hframe_copy__252->SetMaximum(2057061);
   hframe_copy__252->SetDirectory(0);
   hframe_copy__252->SetStats(0);
   hframe_copy__252->SetLineStyle(0);
   hframe_copy__252->SetMarkerStyle(20);
   hframe_copy__252->GetXaxis()->SetLabelFont(43);
   hframe_copy__252->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__252->GetXaxis()->SetLabelSize(0);
   hframe_copy__252->GetXaxis()->SetTitleSize(0);
   hframe_copy__252->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__252->GetXaxis()->SetTitleFont(43);
   hframe_copy__252->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__252->GetYaxis()->SetLabelFont(43);
   hframe_copy__252->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__252->GetYaxis()->SetLabelSize(27);
   hframe_copy__252->GetYaxis()->SetTitleSize(33);
   hframe_copy__252->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__252->GetYaxis()->SetTitleFont(43);
   hframe_copy__252->GetZaxis()->SetLabelFont(43);
   hframe_copy__252->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__252->GetZaxis()->SetLabelSize(27);
   hframe_copy__252->GetZaxis()->SetTitleSize(33);
   hframe_copy__252->GetZaxis()->SetTitleOffset(1);
   hframe_copy__252->GetZaxis()->SetTitleFont(43);
   hframe_copy__252->Draw("sameaxis");
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
   MVAOutputM1250_1->Modified();
   MVAOutputM1250->cd();
   MVAOutputM1250->Modified();
   MVAOutputM1250->cd();
   MVAOutputM1250->SetSelected(MVAOutputM1250);
}
