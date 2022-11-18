void MVAOutputM1250()
{
//=========Macro generated from canvas: MVAOutputM1250/MVAOutputM1250
//=========  (Fri Nov 18 13:27:57 2022) by ROOT version 6.20/02
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
   0.0124955,
   0.02383575,
   0.0290619,
   0.03230113,
   0.03700301,
   0.03998532,
   0.04522446,
   0.0493527,
   0.05393489,
   0.05663079,
   0.06340356,
   0.06393815,
   0.07068731,
   0.06864067,
   0.07284865,
   0.07792053,
   0.07962599,
   0.06933021,
   0.06362955,
   0.07092935};
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
   0.0124955,
   0.02383575,
   0.0290619,
   0.03230113,
   0.03700301,
   0.03998532,
   0.04522446,
   0.0493527,
   0.05393489,
   0.05663079,
   0.06340356,
   0.06393815,
   0.07068731,
   0.06864067,
   0.07284865,
   0.07792053,
   0.07962599,
   0.06933021,
   0.06362955,
   0.07092935};
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
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMinimum(0.9044488);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMaximum(1.095551);
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
   0.0124955,
   0.02383575,
   0.0290619,
   0.03230113,
   0.03700301,
   0.03998532,
   0.04522446,
   0.0493527,
   0.05393489,
   0.05663079,
   0.06340356,
   0.06393815,
   0.07068731,
   0.06864067,
   0.07284865,
   0.07792053,
   0.07962599,
   0.06933021,
   0.06362955,
   0.07092935};
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
   0.0124955,
   0.02383575,
   0.0290619,
   0.03230113,
   0.03700301,
   0.03998532,
   0.04522446,
   0.0493527,
   0.05393489,
   0.05663079,
   0.06340356,
   0.06393815,
   0.07068731,
   0.06864067,
   0.07284865,
   0.07792053,
   0.07962599,
   0.06933021,
   0.06362955,
   0.07092935};
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
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMinimum(0.9044488);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMaximum(1.095551);
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
   0.9593164,
   0.9923628,
   0.9444812,
   0.9901011,
   1.088899,
   1.078812,
   1.190405,
   1.101446,
   1.082699,
   1.098273,
   1.132626,
   0.988456,
   1.106843,
   1.012208,
   1.01635,
   0.9606364,
   1.124756,
   0.9287528,
   1.022416,
   0.9127499};
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
   0.01339509,
   0.02617834,
   0.03093751,
   0.03404038,
   0.04121544,
   0.04378761,
   0.05161061,
   0.0545297,
   0.05698414,
   0.06268173,
   0.0719218,
   0.06694669,
   0.07946667,
   0.0736273,
   0.08034955,
   0.08061482,
   0.09214362,
   0.07040857,
   0.07106281,
   0.07379146};
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
   0.01339509,
   0.02617834,
   0.03093751,
   0.03404038,
   0.04121544,
   0.04378761,
   0.05161061,
   0.0545297,
   0.05698414,
   0.06268173,
   0.0719218,
   0.06694669,
   0.07946667,
   0.0736273,
   0.08034955,
   0.08061482,
   0.09214362,
   0.07040857,
   0.07106281,
   0.07379146};
   grae = new TGraphAsymmErrors(20,Graph1_fx3143,Graph1_fy3143,Graph1_felx3143,Graph1_fehx3143,Graph1_fely3143,Graph1_fehy3143);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1313531393143 = new TH1F("Graph_Graph_Graph_Graph1313531393143","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1313531393143->SetMinimum(0.7986528);
   Graph_Graph_Graph_Graph1313531393143->SetMaximum(1.282322);
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
   MVAOutputM1250_1->Range(-0.204557,-2.171295,1.073924,6.393478);
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
   hframe__248->SetMaximum(757865.2);
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
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMinimum(9.385538);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMaximum(184108.4);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2261.351);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,659.338);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,469.6284);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,371.2432);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,255.0858);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,232.5601);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,224.0505);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,191.5515);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,122.4815);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,91.32512);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,95.24806);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,79.12663);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,101.9416);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,63.03482);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,70.37179);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,78.13087);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,43.58984);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,78.10812);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,128.6358);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,92.45545);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,100.6045);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,52.27046);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,44.0276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,59.08632);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,29.52454);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,26.87903);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,30.49332);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,27.06369);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,21.35955);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,17.8042);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,18.72103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,15.19046);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,38.77327);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,13.19994);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,12.69722);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,15.027);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,14.3445);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,13.98621);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,21.44597);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,17.12496);
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
   Double_t xAxis213[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1250Inclusive",20, xAxis213);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,37632.67);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,8887.558);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,6092.167);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4434.122);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3755.372);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2962.337);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2394.887);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1880.792);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1562.789);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1245.721);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1085.943);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,889.7028);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,869.4014);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,829.215);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,731.9033);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,674.6268);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,702.6855);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,726.9927);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,902.7767);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,927.5666);
   TT_stack_2_stack_2_stack_2->SetBinError(1,210.3585);
   TT_stack_2_stack_2_stack_2->SetBinError(2,102.5119);
   TT_stack_2_stack_2_stack_2->SetBinError(3,85.01989);
   TT_stack_2_stack_2_stack_2->SetBinError(4,72.77302);
   TT_stack_2_stack_2_stack_2->SetBinError(5,66.85508);
   TT_stack_2_stack_2_stack_2->SetBinError(6,59.3519);
   TT_stack_2_stack_2_stack_2->SetBinError(7,53.27459);
   TT_stack_2_stack_2_stack_2->SetBinError(8,46.92523);
   TT_stack_2_stack_2_stack_2->SetBinError(9,42.99247);
   TT_stack_2_stack_2_stack_2->SetBinError(10,38.22595);
   TT_stack_2_stack_2_stack_2->SetBinError(11,35.83995);
   TT_stack_2_stack_2_stack_2->SetBinError(12,32.51109);
   TT_stack_2_stack_2_stack_2->SetBinError(13,32.20925);
   TT_stack_2_stack_2_stack_2->SetBinError(14,31.16665);
   TT_stack_2_stack_2_stack_2->SetBinError(15,29.68845);
   TT_stack_2_stack_2_stack_2->SetBinError(16,28.33315);
   TT_stack_2_stack_2_stack_2->SetBinError(17,28.92429);
   TT_stack_2_stack_2_stack_2->SetBinError(18,29.75297);
   TT_stack_2_stack_2_stack_2->SetBinError(19,33.00374);
   TT_stack_2_stack_2_stack_2->SetBinError(20,33.13838);
   TT_stack_2_stack_2_stack_2->SetEntries(67019.12);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,67036.28);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,19414.29);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,13173.91);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,12283.8);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8809.829);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,8058.226);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,6319.195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,5336.101);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4983.251);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4253.551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3198.014);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3442.09);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2534.124);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2842.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2346.245);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2203.616);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1903.188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2941.86);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,3017.821);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2332.484);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1315.644);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,680.6535);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,565.5094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,543.9818);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,468.7257);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,445.2175);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,399.5342);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,361.5916);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,356.4478);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,313.7791);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,274.6972);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,279.7337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,242.611);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,254.088);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,227.0812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,228.1187);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,208.481);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,257.6888);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,254.6268);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,234.8472);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7148.649);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(1,97.88895);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(2,54.42348);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(3,43.45343);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(4,54.86975);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(5,15.39337);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(6,15.2399);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(7,14.71918);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(8,30.46887);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(9,19.34499);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(10,10.87278);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(11,8.44747);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(12,8.093971);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(13,15.70089);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(14,-0.4826343);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(15,5.177906);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(16,6.345055);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(17,5.795443);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(18,11.38835);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(19,2.216767);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(20,5.858476);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(1,14.20713);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(2,11.7867);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(3,11.34974);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(4,10.02229);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(5,9.974484);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(6,8.871511);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(7,8.750531);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(8,7.475487);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(9,7.338552);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(10,6.849765);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(11,6.190758);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(12,5.568484);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(13,5.422108);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(14,5.097282);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(15,5.513709);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(16,5.257765);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(17,4.573544);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(18,4.687699);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(19,4.61897);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(20,4.838489);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetEntries(144.4332);
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
   106930.3,
   28961.18,
   19735.7,
   17089.16,
   12820.29,
   11253.12,
   8938.133,
   7408.444,
   6668.522,
   5590.598,
   4379.205,
   4410.919,
   3505.467,
   3734.41,
   3148.521,
   2956.374,
   2649.463,
   3746.96,
   4049.233,
   3352.506};
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
   1336.148,
   690.3116,
   573.5571,
   551.9994,
   474.3892,
   449.9597,
   404.2222,
   365.6267,
   359.666,
   316.6,
   277.6572,
   282.026,
   247.792,
   256.3324,
   229.3655,
   230.3622,
   210.9661,
   259.7776,
   257.6509,
   237.7911};
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
   1336.148,
   690.3116,
   573.5571,
   551.9994,
   474.3892,
   449.9597,
   404.2222,
   365.6267,
   359.666,
   316.6,
   277.6572,
   282.026,
   247.792,
   256.3324,
   229.3655,
   230.3622,
   210.9661,
   259.7776,
   257.6509,
   237.7911};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMinimum(2194.647);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMaximum(118849.2);
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
   Data__250->SetBinContent(1,102580);
   Data__250->SetBinContent(2,28740);
   Data__250->SetBinContent(3,18640);
   Data__250->SetBinContent(4,16920);
   Data__250->SetBinContent(5,13960);
   Data__250->SetBinContent(6,12140);
   Data__250->SetBinContent(7,10640);
   Data__250->SetBinContent(8,8160);
   Data__250->SetBinContent(9,7220);
   Data__250->SetBinContent(10,6140);
   Data__250->SetBinContent(11,4960);
   Data__250->SetBinContent(12,4360);
   Data__250->SetBinContent(13,3880);
   Data__250->SetBinContent(14,3780);
   Data__250->SetBinContent(15,3200);
   Data__250->SetBinContent(16,2840);
   Data__250->SetBinContent(17,2980);
   Data__250->SetBinContent(18,3480);
   Data__250->SetBinContent(19,4140);
   Data__250->SetBinContent(20,3060);
   Data__250->SetBinError(1,1432.341);
   Data__250->SetBinError(2,758.1557);
   Data__250->SetBinError(3,610.5735);
   Data__250->SetBinError(4,581.7216);
   Data__250->SetBinError(5,528.3938);
   Data__250->SetBinError(6,492.7474);
   Data__250->SetBinError(7,461.3025);
   Data__250->SetBinError(8,403.9802);
   Data__250->SetBinError(9,380);
   Data__250->SetBinError(10,350.4283);
   Data__250->SetBinError(11,314.9603);
   Data__250->SetBinError(12,295.2965);
   Data__250->SetBinError(13,278.5678);
   Data__250->SetBinError(14,274.9545);
   Data__250->SetBinError(15,252.9822);
   Data__250->SetBinError(16,238.3275);
   Data__250->SetBinError(17,244.1311);
   Data__250->SetBinError(18,263.8181);
   Data__250->SetBinError(19,287.7499);
   Data__250->SetBinError(20,247.3863);
   Data__250->SetEntries(13091);
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
   hframe_copy__251->SetMaximum(757865.2);
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
   hframe_copy__252->SetMaximum(757865.2);
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
