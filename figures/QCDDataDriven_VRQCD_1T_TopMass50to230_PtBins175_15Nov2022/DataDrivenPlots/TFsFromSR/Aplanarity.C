void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Fri Nov 18 13:30:06 2022) by ROOT version 6.20/02
   TCanvas *Aplanarity = new TCanvas("Aplanarity", "Aplanarity",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Aplanarity->SetHighLightColor(2);
   Aplanarity->Range(0,0,1,1);
   Aplanarity->SetFillColor(0);
   Aplanarity->SetBorderMode(0);
   Aplanarity->SetBorderSize(2);
   Aplanarity->SetTickx(1);
   Aplanarity->SetTicky(1);
   Aplanarity->SetLeftMargin(0.16);
   Aplanarity->SetRightMargin(0.05);
   Aplanarity->SetTopMargin(0.06);
   Aplanarity->SetBottomMargin(0.13);
   Aplanarity->SetFrameFillStyle(0);
   Aplanarity->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Aplanarity_2
   TPad *Aplanarity_2 = new TPad("Aplanarity_2", "Aplanarity_2",0,0,1,0.304);
   Aplanarity_2->Draw();
   Aplanarity_2->cd();
   Aplanarity_2->Range(-0.1012658,-0.428,0.5316456,1.7);
   Aplanarity_2->SetFillColor(0);
   Aplanarity_2->SetFillStyle(4000);
   Aplanarity_2->SetBorderMode(0);
   Aplanarity_2->SetBorderSize(2);
   Aplanarity_2->SetTickx(1);
   Aplanarity_2->SetTicky(1);
   Aplanarity_2->SetLeftMargin(0.16);
   Aplanarity_2->SetRightMargin(0.05);
   Aplanarity_2->SetTopMargin(0);
   Aplanarity_2->SetBottomMargin(0.3421053);
   Aplanarity_2->SetFrameFillStyle(0);
   Aplanarity_2->SetFrameBorderMode(0);
   Aplanarity_2->SetFrameFillStyle(0);
   Aplanarity_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1107 = new TH1F("hframe__1107","",1000,0,0.5);
   hframe__1107->SetMinimum(0.3);
   hframe__1107->SetMaximum(1.7);
   hframe__1107->SetDirectory(0);
   hframe__1107->SetStats(0);
   hframe__1107->SetLineStyle(0);
   hframe__1107->SetMarkerStyle(20);
   hframe__1107->GetXaxis()->SetTitle("Aplanarity");
   hframe__1107->GetXaxis()->SetNdivisions(8);
   hframe__1107->GetXaxis()->SetLabelFont(43);
   hframe__1107->GetXaxis()->SetLabelOffset(0.007);
   hframe__1107->GetXaxis()->SetLabelSize(27);
   hframe__1107->GetXaxis()->SetTitleSize(33);
   hframe__1107->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1107->GetXaxis()->SetTitleFont(43);
   hframe__1107->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1107->GetYaxis()->SetNdivisions(505);
   hframe__1107->GetYaxis()->SetLabelFont(43);
   hframe__1107->GetYaxis()->SetLabelOffset(0.007);
   hframe__1107->GetYaxis()->SetLabelSize(21);
   hframe__1107->GetYaxis()->SetTitleSize(33);
   hframe__1107->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1107->GetYaxis()->SetTitleFont(43);
   hframe__1107->GetZaxis()->SetLabelFont(43);
   hframe__1107->GetZaxis()->SetLabelOffset(0.007);
   hframe__1107->GetZaxis()->SetLabelSize(27);
   hframe__1107->GetZaxis()->SetTitleSize(33);
   hframe__1107->GetZaxis()->SetTitleOffset(1);
   hframe__1107->GetZaxis()->SetTitleFont(43);
   hframe__1107->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3675[22] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43};
   Double_t BackgroundStatSystError_fy3675[22] = {
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
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3675[22] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BackgroundStatSystError_fely3675[22] = {
   0.03850617,
   0.03224087,
   0.03437026,
   0.04043787,
   0.04990518,
   0.05616399,
   0.06519503,
   0.06959229,
   0.09512288,
   0.1052286,
   0.1420429,
   0.1506565,
   0.1864076,
   0.2423215,
   0.2758123,
   0.4837796,
   0.3378871,
   0.7121667,
   1.030526,
   0.9039413,
   -1.017454,
   0.9600133};
   Double_t BackgroundStatSystError_fehx3675[22] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BackgroundStatSystError_fehy3675[22] = {
   0.03850617,
   0.03224087,
   0.03437026,
   0.04043787,
   0.04990518,
   0.05616399,
   0.06519503,
   0.06959229,
   0.09512288,
   0.1052286,
   0.1420429,
   0.1506565,
   0.1864076,
   0.2423215,
   0.2758123,
   0.4837796,
   0.3378871,
   0.7121667,
   1.030526,
   0.9039413,
   -1.017454,
   0.9600133};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,BackgroundStatSystError_fx3675,BackgroundStatSystError_fy3675,BackgroundStatSystError_felx3675,BackgroundStatSystError_fehx3675,BackgroundStatSystError_fely3675,BackgroundStatSystError_fehy3675);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1382;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError366736713675 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError366736713675","Graph",100,0,0.484);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMinimum(-0.2366314);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMaximum(2.236631);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError366736713675);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3676[25] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49};
   Double_t BackgroundStatError_fy3676[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3676[25] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BackgroundStatError_fely3676[25] = {
   0.03850617,
   0.03224087,
   0.03437026,
   0.04043787,
   0.04990518,
   0.05616399,
   0.06519503,
   0.06959229,
   0.09512288,
   0.1052286,
   0.1420429,
   0.1506565,
   0.1864076,
   0.2423215,
   0.2758123,
   0.4837796,
   0.3378871,
   0.7121667,
   1.030526,
   0.9039413,
   -1.017454,
   0.9600133,
   0,
   0,
   0};
   Double_t BackgroundStatError_fehx3676[25] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BackgroundStatError_fehy3676[25] = {
   0.03850617,
   0.03224087,
   0.03437026,
   0.04043787,
   0.04990518,
   0.05616399,
   0.06519503,
   0.06959229,
   0.09512288,
   0.1052286,
   0.1420429,
   0.1506565,
   0.1864076,
   0.2423215,
   0.2758123,
   0.4837796,
   0.3378871,
   0.7121667,
   1.030526,
   0.9039413,
   -1.017454,
   0.9600133,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(25,BackgroundStatError_fx3676,BackgroundStatError_fy3676,BackgroundStatError_felx3676,BackgroundStatError_fehx3676,BackgroundStatError_fely3676,BackgroundStatError_fehy3676);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1381;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError366836723676 = new TH1F("Graph_Graph_Graph_BackgroundStatError366836723676","Graph",100,0,0.55);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMinimum(-0.2366314);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMaximum(2.236631);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError366836723676->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError366836723676);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx159[2] = {
   0,
   0.5};
   Double_t Graph0_fy159[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx159,Graph0_fy159);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0157158159 = new TH1F("Graph_Graph_Graph_Graph0157158159","Graph",100,0,0.55);
   Graph_Graph_Graph_Graph0157158159->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0157158159->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0157158159->SetDirectory(0);
   Graph_Graph_Graph_Graph0157158159->SetStats(0);
   Graph_Graph_Graph_Graph0157158159->SetLineStyle(0);
   Graph_Graph_Graph_Graph0157158159->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0157158159->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0157158159->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0157158159->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0157158159);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3677[21] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41};
   Double_t Graph1_fy3677[21] = {
   1.024318,
   1.024003,
   0.9752365,
   1.016853,
   1.162173,
   1.049493,
   0.9823512,
   0.804562,
   1.084291,
   1.047872,
   1.311616,
   0.7915443,
   0.7656632,
   0.9984743,
   0.6367779,
   2.296598,
   0.4814154,
   1.699806,
   1.353704,
   0.6060298,
   -8.865872};
   Double_t Graph1_felx3677[21] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph1_fely3677[21] = {
   0.02859706,
   0.02399641,
   0.02499785,
   0.03006389,
   0.03969908,
   0.04228529,
   0.04742836,
   0.04599375,
   0.07360644,
   0.0781038,
   0.1202357,
   0.09894304,
   0.121062,
   0.1793313,
   0.1644154,
   0.5413132,
   0.170206,
   0.6939431,
   0.9572132,
   0.6060298,
   -8.865872};
   Double_t Graph1_fehx3677[21] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph1_fehy3677[21] = {
   0.02859706,
   0.02399641,
   0.02499785,
   0.03006389,
   0.03969908,
   0.04228529,
   0.04742836,
   0.04599375,
   0.07360644,
   0.0781038,
   0.1202357,
   0.09894304,
   0.121062,
   0.1793313,
   0.1644154,
   0.5413132,
   0.170206,
   0.6939431,
   0.9572132,
   0.6060298,
   -8.865872};
   grae = new TGraphAsymmErrors(21,Graph1_fx3677,Graph1_fy3677,Graph1_felx3677,Graph1_fehx3677,Graph1_fely3677,Graph1_fehy3677);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1366936733677 = new TH1F("Graph_Graph_Graph_Graph1366936733677","Graph",100,0,0.462);
   Graph_Graph_Graph_Graph1366936733677->SetMinimum(-10.03625);
   Graph_Graph_Graph_Graph1366936733677->SetMaximum(4.008289);
   Graph_Graph_Graph_Graph1366936733677->SetDirectory(0);
   Graph_Graph_Graph_Graph1366936733677->SetStats(0);
   Graph_Graph_Graph_Graph1366936733677->SetLineStyle(0);
   Graph_Graph_Graph_Graph1366936733677->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1366936733677->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1366936733677->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1366936733677->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1366936733677);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1108 = new TH1F("hframe_copy__1108","",1000,0,0.5);
   hframe_copy__1108->SetMinimum(0.3);
   hframe_copy__1108->SetMaximum(1.7);
   hframe_copy__1108->SetDirectory(0);
   hframe_copy__1108->SetStats(0);
   hframe_copy__1108->SetLineStyle(0);
   hframe_copy__1108->SetMarkerStyle(20);
   hframe_copy__1108->GetXaxis()->SetTitle("Aplanarity");
   hframe_copy__1108->GetXaxis()->SetNdivisions(8);
   hframe_copy__1108->GetXaxis()->SetLabelFont(43);
   hframe_copy__1108->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1108->GetXaxis()->SetLabelSize(27);
   hframe_copy__1108->GetXaxis()->SetTitleSize(33);
   hframe_copy__1108->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1108->GetXaxis()->SetTitleFont(43);
   hframe_copy__1108->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1108->GetYaxis()->SetNdivisions(505);
   hframe_copy__1108->GetYaxis()->SetLabelFont(43);
   hframe_copy__1108->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1108->GetYaxis()->SetLabelSize(21);
   hframe_copy__1108->GetYaxis()->SetTitleSize(33);
   hframe_copy__1108->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1108->GetYaxis()->SetTitleFont(43);
   hframe_copy__1108->GetZaxis()->SetLabelFont(43);
   hframe_copy__1108->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1108->GetZaxis()->SetLabelSize(27);
   hframe_copy__1108->GetZaxis()->SetTitleSize(33);
   hframe_copy__1108->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1108->GetZaxis()->SetTitleFont(43);
   hframe_copy__1108->Draw("sameaxis");
   Aplanarity_2->Modified();
   Aplanarity->cd();
  
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
   Aplanarity->cd();
  
// ------------>Primitives in pad: Aplanarity_1
   TPad *Aplanarity_1 = new TPad("Aplanarity_1", "Aplanarity_1",0,0.2897959,1,1);
   Aplanarity_1->Draw();
   Aplanarity_1->cd();
   Aplanarity_1->Range(-0.1012658,-1.21008,0.5316456,4.448396);
   Aplanarity_1->SetFillColor(0);
   Aplanarity_1->SetFillStyle(4000);
   Aplanarity_1->SetBorderMode(0);
   Aplanarity_1->SetBorderSize(2);
   Aplanarity_1->SetLogy();
   Aplanarity_1->SetTickx(1);
   Aplanarity_1->SetTicky(1);
   Aplanarity_1->SetLeftMargin(0.16);
   Aplanarity_1->SetRightMargin(0.05);
   Aplanarity_1->SetTopMargin(0.06);
   Aplanarity_1->SetBottomMargin(0.02);
   Aplanarity_1->SetFrameFillStyle(0);
   Aplanarity_1->SetFrameBorderMode(0);
   Aplanarity_1->SetFrameFillStyle(0);
   Aplanarity_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1109 = new TH1F("hframe__1109","",1000,0,0.5);
   hframe__1109->SetMinimum(0.08);
   hframe__1109->SetMaximum(12849.55);
   hframe__1109->SetDirectory(0);
   hframe__1109->SetStats(0);
   hframe__1109->SetLineStyle(0);
   hframe__1109->SetMarkerStyle(20);
   hframe__1109->GetXaxis()->SetNdivisions(8);
   hframe__1109->GetXaxis()->SetLabelFont(43);
   hframe__1109->GetXaxis()->SetLabelOffset(0.007);
   hframe__1109->GetXaxis()->SetLabelSize(0);
   hframe__1109->GetXaxis()->SetTitleSize(0);
   hframe__1109->GetXaxis()->SetTitleOffset(0.9);
   hframe__1109->GetXaxis()->SetTitleFont(43);
   hframe__1109->GetYaxis()->SetTitle("Events / 0");
   hframe__1109->GetYaxis()->SetLabelFont(43);
   hframe__1109->GetYaxis()->SetLabelOffset(0.007);
   hframe__1109->GetYaxis()->SetLabelSize(27);
   hframe__1109->GetYaxis()->SetTitleSize(33);
   hframe__1109->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1109->GetYaxis()->SetTitleFont(43);
   hframe__1109->GetZaxis()->SetLabelFont(43);
   hframe__1109->GetZaxis()->SetLabelOffset(0.007);
   hframe__1109->GetZaxis()->SetLabelSize(27);
   hframe__1109->GetZaxis()->SetTitleSize(33);
   hframe__1109->GetZaxis()->SetTitleOffset(1);
   hframe__1109->GetZaxis()->SetTitleFont(43);
   hframe__1109->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_157_stack_158_stack_159 = new TH1F("StackedMCstackHist_stack_157_stack_158_stack_159","StackedMCstackHist",25,0,0.5);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMinimum(0.711326);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMaximum(2845.304);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetDirectory(0);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetStats(0);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetLineStyle(0);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMarkerStyle(20);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_157_stack_158_stack_159->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_157_stack_158_stack_159);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_AplanarityInclusive",25,0,0.5);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,16.1911);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,20.81426);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,15.96707);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,18.79432);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,9.729774);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,11.28299);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,6.443439);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,5.117597);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,2.975669);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,3.146743);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.5970619);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.259066);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.8539404);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,-0.1108634);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.7587618);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.23299);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.183385);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.008877107);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.006163424);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.007634037);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.001953595);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.001984096);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,2.63045);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.874049);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.837453);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.782724);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.318779);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.21685);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.755425);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.078915);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.7821747);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.329632);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.2041326);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.5129504);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.4116109);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.247819);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.3170409);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.2495202);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.2087353);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.008104297);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.006704422);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.004440372);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.001857291);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.001984096);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(13272);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,50);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_AplanarityInclusive",25,0,0.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,129.5923);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,242.2728);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,234.9253);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,185.0806);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,149.7877);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,113.7601);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,85.98737);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,66.14882);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,45.90251);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,33.62635);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,25.13494);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,18.72474);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,12.52429);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,9.559752);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,5.655816);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,2.695853);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,2.376688);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1.329887);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.8155688);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.4117367);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.05338165);
   TT_stack_2_stack_2_stack_2->SetBinError(1,2.81085);
   TT_stack_2_stack_2_stack_2->SetBinError(2,3.834192);
   TT_stack_2_stack_2_stack_2->SetBinError(3,3.810813);
   TT_stack_2_stack_2_stack_2->SetBinError(4,3.365308);
   TT_stack_2_stack_2_stack_2->SetBinError(5,3.027847);
   TT_stack_2_stack_2_stack_2->SetBinError(6,2.64492);
   TT_stack_2_stack_2_stack_2->SetBinError(7,2.30224);
   TT_stack_2_stack_2_stack_2->SetBinError(8,2.027955);
   TT_stack_2_stack_2_stack_2->SetBinError(9,1.675422);
   TT_stack_2_stack_2_stack_2->SetBinError(10,1.437584);
   TT_stack_2_stack_2_stack_2->SetBinError(11,1.254678);
   TT_stack_2_stack_2_stack_2->SetBinError(12,1.077557);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.8856188);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.7856946);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.6013149);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.4225964);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.3825432);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.2857212);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.222436);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.1560658);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.05338166);
   TT_stack_2_stack_2_stack_2->SetEntries(23419);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,50);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_AplanarityInclusive",25,0,0.5);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1106.758);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1515.228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,1309.755);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,921.1647);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,577.8942);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,461.9068);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,344.2766);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,309.0648);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,151.2527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,135.0035);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,64.99575);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,60.8708);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,38.86406);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,21.59848);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,17.14152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,4.908838);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,14.05759);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2.19105);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.6556957);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1.230713);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,-0.1147457);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.0002785216);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,48.07667);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,57.17538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,53.47275);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,45.28415);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,36.65217);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,32.78431);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,28.32357);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,26.36825);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,18.94702);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,17.96943);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,12.82439);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,12.12267);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,9.689271);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,7.478201);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,6.4614);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,3.759816);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,5.597959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,2.497512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,1.506177);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,1.483385);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.1147457);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.0002785216);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3207.878);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,50);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1110 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1110","h_SR_AplanarityInclusive",25,0,0.5);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(1,0.5252982);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(2,1.929323);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(3,1.529363);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(4,1.027262);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(5,0.02038213);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(6,0.4726688);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(7,0.1029368);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(8,0.232067);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(9,-0.03576411);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(10,0.1599246);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(11,-0.002313297);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(12,-0.08438498);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(13,0.08048284);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(14,-0.002030861);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(15,-0.02837542);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(16,-0.02906602);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(17,0.03323708);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(19,0.02284525);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(1,0.2860016);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(2,0.4576655);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(3,0.4458451);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(4,0.3322111);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(5,0.2918951);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(6,0.2307122);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(7,0.2100525);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(8,0.1521294);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(9,0.1292712);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(10,0.1039519);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(11,0.07966715);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(12,0.0597182);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(13,0.04681795);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(14,0.03178735);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(15,0.0434084);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(16,0.02906602);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(17,0.03323707);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(19,0.02284525);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetEntries(1103);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetXaxis()->SetRange(1,50);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3678[25] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3678[25] = {
   1252.541,
   1778.315,
   1560.647,
   1125.04,
   737.4117,
   586.95,
   436.7074,
   380.3311,
   200.1308,
   171.7766,
   90.72775,
   80.8546,
   52.24229,
   31.04737,
   23.55609,
   7.837681,
   16.61767,
   3.529814,
   1.477428,
   1.650084,
   -0.1127921,
   0.05564427,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3678[25] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3678[25] = {
   48.23055,
   57.33443,
   53.63985,
   45.49421,
   36.80066,
   32.96545,
   28.47115,
   26.46812,
   19.03702,
   18.07581,
   12.88723,
   12.18127,
   9.738363,
   7.523444,
   6.49706,
   3.79171,
   5.614896,
   2.513816,
   1.522528,
   1.491579,
   0.1147607,
   0.05341924,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3678[25] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3678[25] = {
   48.23055,
   57.33443,
   53.63985,
   45.49421,
   36.80066,
   32.96545,
   28.47115,
   26.46812,
   19.03702,
   18.07581,
   12.88723,
   12.18127,
   9.738363,
   7.523444,
   6.49706,
   3.79171,
   5.614896,
   2.513816,
   1.522528,
   1.491579,
   0.1147607,
   0.05341924,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(25,BkgSum-SR-Inclusive_sum_errors_fx3678,BkgSum-SR-Inclusive_sum_errors_fy3678,BkgSum-SR-Inclusive_sum_errors_felx3678,BkgSum-SR-Inclusive_sum_errors_fehx3678,BkgSum-SR-Inclusive_sum_errors_fely3678,BkgSum-SR-Inclusive_sum_errors_fehy3678);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1380;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678","Graph",100,0,0.55);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMinimum(2.019218);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMaximum(2019.218);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors367036743678);
   
   grae->Draw("e2 ");
   
   TH1F *Data__1111 = new TH1F("Data__1111","h_SR_AplanarityInclusive",25,0,0.5);
   Data__1111->SetBinContent(1,1283);
   Data__1111->SetBinContent(2,1821);
   Data__1111->SetBinContent(3,1522);
   Data__1111->SetBinContent(4,1144);
   Data__1111->SetBinContent(5,857);
   Data__1111->SetBinContent(6,616);
   Data__1111->SetBinContent(7,429);
   Data__1111->SetBinContent(8,306);
   Data__1111->SetBinContent(9,217);
   Data__1111->SetBinContent(10,180);
   Data__1111->SetBinContent(11,119);
   Data__1111->SetBinContent(12,64);
   Data__1111->SetBinContent(13,40);
   Data__1111->SetBinContent(14,31);
   Data__1111->SetBinContent(15,15);
   Data__1111->SetBinContent(16,18);
   Data__1111->SetBinContent(17,8);
   Data__1111->SetBinContent(18,6);
   Data__1111->SetBinContent(19,2);
   Data__1111->SetBinContent(20,1);
   Data__1111->SetBinContent(21,1);
   Data__1111->SetBinError(1,35.81899);
   Data__1111->SetBinError(2,42.67318);
   Data__1111->SetBinError(3,39.01282);
   Data__1111->SetBinError(4,33.82307);
   Data__1111->SetBinError(5,29.27456);
   Data__1111->SetBinError(6,24.81935);
   Data__1111->SetBinError(7,20.71232);
   Data__1111->SetBinError(8,17.49286);
   Data__1111->SetBinError(9,14.73092);
   Data__1111->SetBinError(10,13.41641);
   Data__1111->SetBinError(11,10.90871);
   Data__1111->SetBinError(12,8);
   Data__1111->SetBinError(13,6.324555);
   Data__1111->SetBinError(14,5.567764);
   Data__1111->SetBinError(15,3.872983);
   Data__1111->SetBinError(16,4.242641);
   Data__1111->SetBinError(17,2.828427);
   Data__1111->SetBinError(18,2.44949);
   Data__1111->SetBinError(19,1.414214);
   Data__1111->SetBinError(20,1);
   Data__1111->SetBinError(21,1);
   Data__1111->SetEntries(8684);
   Data__1111->SetDirectory(0);
   Data__1111->SetFillStyle(3001);
   Data__1111->SetLineWidth(2);
   Data__1111->SetMarkerStyle(20);
   Data__1111->SetMarkerSize(1.2);
   Data__1111->GetXaxis()->SetRange(1,50);
   Data__1111->GetXaxis()->SetLabelFont(42);
   Data__1111->GetXaxis()->SetTitleOffset(1);
   Data__1111->GetXaxis()->SetTitleFont(42);
   Data__1111->GetYaxis()->SetLabelFont(42);
   Data__1111->GetYaxis()->SetTitleFont(42);
   Data__1111->GetZaxis()->SetLabelFont(42);
   Data__1111->GetZaxis()->SetTitleOffset(1);
   Data__1111->GetZaxis()->SetTitleFont(42);
   Data__1111->Draw("EP same");
   
   TLegend *leg = new TLegend(0.65,0.51,0.85,0.91,NULL,"brNDC");
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

   ci = 1380;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1380;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1112 = new TH1F("hframe_copy__1112","",1000,0,0.5);
   hframe_copy__1112->SetMinimum(0.08);
   hframe_copy__1112->SetMaximum(12849.55);
   hframe_copy__1112->SetDirectory(0);
   hframe_copy__1112->SetStats(0);
   hframe_copy__1112->SetLineStyle(0);
   hframe_copy__1112->SetMarkerStyle(20);
   hframe_copy__1112->GetXaxis()->SetNdivisions(8);
   hframe_copy__1112->GetXaxis()->SetLabelFont(43);
   hframe_copy__1112->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1112->GetXaxis()->SetLabelSize(0);
   hframe_copy__1112->GetXaxis()->SetTitleSize(0);
   hframe_copy__1112->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1112->GetXaxis()->SetTitleFont(43);
   hframe_copy__1112->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1112->GetYaxis()->SetLabelFont(43);
   hframe_copy__1112->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1112->GetYaxis()->SetLabelSize(27);
   hframe_copy__1112->GetYaxis()->SetTitleSize(33);
   hframe_copy__1112->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1112->GetYaxis()->SetTitleFont(43);
   hframe_copy__1112->GetZaxis()->SetLabelFont(43);
   hframe_copy__1112->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1112->GetZaxis()->SetLabelSize(27);
   hframe_copy__1112->GetZaxis()->SetTitleSize(33);
   hframe_copy__1112->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1112->GetZaxis()->SetTitleFont(43);
   hframe_copy__1112->Draw("sameaxis");
   
   TH1F *hframe_copy__1113 = new TH1F("hframe_copy__1113","",1000,0,0.5);
   hframe_copy__1113->SetMinimum(0.08);
   hframe_copy__1113->SetMaximum(12849.55);
   hframe_copy__1113->SetDirectory(0);
   hframe_copy__1113->SetStats(0);
   hframe_copy__1113->SetLineStyle(0);
   hframe_copy__1113->SetMarkerStyle(20);
   hframe_copy__1113->GetXaxis()->SetNdivisions(8);
   hframe_copy__1113->GetXaxis()->SetLabelFont(43);
   hframe_copy__1113->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1113->GetXaxis()->SetLabelSize(0);
   hframe_copy__1113->GetXaxis()->SetTitleSize(0);
   hframe_copy__1113->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1113->GetXaxis()->SetTitleFont(43);
   hframe_copy__1113->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1113->GetYaxis()->SetLabelFont(43);
   hframe_copy__1113->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1113->GetYaxis()->SetLabelSize(27);
   hframe_copy__1113->GetYaxis()->SetTitleSize(33);
   hframe_copy__1113->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1113->GetYaxis()->SetTitleFont(43);
   hframe_copy__1113->GetZaxis()->SetLabelFont(43);
   hframe_copy__1113->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1113->GetZaxis()->SetLabelSize(27);
   hframe_copy__1113->GetZaxis()->SetTitleSize(33);
   hframe_copy__1113->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1113->GetZaxis()->SetTitleFont(43);
   hframe_copy__1113->Draw("sameaxis");
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
   Aplanarity_1->Modified();
   Aplanarity->cd();
   Aplanarity->Modified();
   Aplanarity->cd();
   Aplanarity->SetSelected(Aplanarity);
}
