void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Fri Nov 18 13:33:52 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3675[24] = {
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
   0.47};
   Double_t BackgroundStatSystError_fy3675[24] = {
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
   Double_t BackgroundStatSystError_felx3675[24] = {
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
   Double_t BackgroundStatSystError_fely3675[24] = {
   0.009461012,
   0.006564517,
   0.006834187,
   0.007674518,
   0.009044668,
   0.01052111,
   0.01274521,
   0.01499811,
   0.01804697,
   0.02260743,
   0.02633709,
   0.03414966,
   0.04033156,
   0.0546602,
   0.06766736,
   0.08326454,
   0.1148342,
   0.1502991,
   0.1615358,
   0.3193891,
   0.5138473,
   0.5074347,
   0.6714479,
   0.9272228};
   Double_t BackgroundStatSystError_fehx3675[24] = {
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
   Double_t BackgroundStatSystError_fehy3675[24] = {
   0.009461012,
   0.006564517,
   0.006834187,
   0.007674518,
   0.009044668,
   0.01052111,
   0.01274521,
   0.01499811,
   0.01804697,
   0.02260743,
   0.02633709,
   0.03414966,
   0.04033156,
   0.0546602,
   0.06766736,
   0.08326454,
   0.1148342,
   0.1502991,
   0.1615358,
   0.3193891,
   0.5138473,
   0.5074347,
   0.6714479,
   0.9272228};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,BackgroundStatSystError_fx3675,BackgroundStatSystError_fy3675,BackgroundStatSystError_felx3675,BackgroundStatSystError_fehx3675,BackgroundStatSystError_fely3675,BackgroundStatSystError_fehy3675);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError366736713675 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError366736713675","Graph",100,0,0.528);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMinimum(0.06549951);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMaximum(2.112667);
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
   0.009461012,
   0.006564517,
   0.006834187,
   0.007674518,
   0.009044668,
   0.01052111,
   0.01274521,
   0.01499811,
   0.01804697,
   0.02260743,
   0.02633709,
   0.03414966,
   0.04033156,
   0.0546602,
   0.06766736,
   0.08326454,
   0.1148342,
   0.1502991,
   0.1615358,
   0.3193891,
   0.5138473,
   0.5074347,
   0.6714479,
   0.9272228,
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
   0.009461012,
   0.006564517,
   0.006834187,
   0.007674518,
   0.009044668,
   0.01052111,
   0.01274521,
   0.01499811,
   0.01804697,
   0.02260743,
   0.02633709,
   0.03414966,
   0.04033156,
   0.0546602,
   0.06766736,
   0.08326454,
   0.1148342,
   0.1502991,
   0.1615358,
   0.3193891,
   0.5138473,
   0.5074347,
   0.6714479,
   0.9272228,
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
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMinimum(0.06549951);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMaximum(2.112667);
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
   
   Double_t Graph1_fx3677[22] = {
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
   0.45};
   Double_t Graph1_fy3677[22] = {
   0.9892862,
   0.9665544,
   0.9545473,
   0.9195757,
   0.9418972,
   0.9573548,
   0.9037735,
   0.8870485,
   0.8935847,
   0.8519144,
   0.8151571,
   0.8528344,
   1.000925,
   0.9472377,
   1.072907,
   0.8562435,
   0.8034891,
   0.8051592,
   2.24937,
   0.7082454,
   0.7810588,
   3.965463};
   Double_t Graph1_felx3677[22] = {
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
   Double_t Graph1_fely3677[22] = {
   0.01368869,
   0.009910903,
   0.0105239,
   0.01165328,
   0.0137463,
   0.0165554,
   0.01894408,
   0.02209352,
   0.02658254,
   0.03142334,
   0.03675012,
   0.04552093,
   0.06183732,
   0.07583971,
   0.09961689,
   0.1114734,
   0.1358145,
   0.1952798,
   0.5301815,
   0.4089057,
   0.4509445,
   3.965463};
   Double_t Graph1_fehx3677[22] = {
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
   Double_t Graph1_fehy3677[22] = {
   0.01368869,
   0.009910903,
   0.0105239,
   0.01165328,
   0.0137463,
   0.0165554,
   0.01894408,
   0.02209352,
   0.02658254,
   0.03142334,
   0.03675012,
   0.04552093,
   0.06183732,
   0.07583971,
   0.09961689,
   0.1114734,
   0.1358145,
   0.1952798,
   0.5301815,
   0.4089057,
   0.4509445,
   3.965463};
   grae = new TGraphAsymmErrors(22,Graph1_fx3677,Graph1_fy3677,Graph1_felx3677,Graph1_fehx3677,Graph1_fely3677,Graph1_fehy3677);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1366936733677 = new TH1F("Graph_Graph_Graph_Graph1366936733677","Graph",100,0,0.506);
   Graph_Graph_Graph_Graph1366936733677->SetMinimum(0);
   Graph_Graph_Graph_Graph1366936733677->SetMaximum(8.724019);
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
   Aplanarity_1->Range(-0.1012658,-1.225994,0.5316456,5.228191);
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
   hframe__1109->SetMaximum(69332.93);
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
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMinimum(3.936043);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMaximum(15744.17);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,141.1011);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,251.0203);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,217.6411);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,177.7047);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,113.8872);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,85.03139);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,58.90467);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,43.90689);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,31.0126);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,21.20908);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,15.02057);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,8.397426);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,4.421836);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,4.307558);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,2.661556);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,2.406362);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,1.029271);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.9006283);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.6447421);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.02192485);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.2959244);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.00411232);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.004457368);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,6.119805);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,7.586213);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,7.183876);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,6.020483);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,5.061136);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,4.347685);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,4.234259);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.88107);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.315161);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.940339);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.66448);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.198788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.9046818);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.8389649);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.732045);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.6359182);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.3260608);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.3615933);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.3570066);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.01108131);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.2786574);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.002790061);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.00327695);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(189561);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,3797.683);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,7771.865);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,7156.647);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,5635.721);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4201.705);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3045.396);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2151.727);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1552.501);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1090.516);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,747.0791);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,513.8245);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,336.2948);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,220.9069);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,150.1959);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,90.62421);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,54.49773);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,35.45557);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,17.53979);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,10.39596);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,5.103104);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,1.7851);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.902408);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.3420912);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.06894159);
   TT_stack_2_stack_2_stack_2->SetBinError(1,14.42019);
   TT_stack_2_stack_2_stack_2->SetBinError(2,20.673);
   TT_stack_2_stack_2_stack_2->SetBinError(3,19.84066);
   TT_stack_2_stack_2_stack_2->SetBinError(4,17.6134);
   TT_stack_2_stack_2_stack_2->SetBinError(5,15.21675);
   TT_stack_2_stack_2_stack_2->SetBinError(6,12.95624);
   TT_stack_2_stack_2_stack_2->SetBinError(7,10.89836);
   TT_stack_2_stack_2_stack_2->SetBinError(8,9.262361);
   TT_stack_2_stack_2_stack_2->SetBinError(9,7.776906);
   TT_stack_2_stack_2_stack_2->SetBinError(10,6.438982);
   TT_stack_2_stack_2_stack_2->SetBinError(11,5.334541);
   TT_stack_2_stack_2_stack_2->SetBinError(12,4.328301);
   TT_stack_2_stack_2_stack_2->SetBinError(13,3.508229);
   TT_stack_2_stack_2_stack_2->SetBinError(14,2.894598);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.244555);
   TT_stack_2_stack_2_stack_2->SetBinError(16,1.742999);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.415672);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.9855488);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.7686025);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.5310311);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.3188945);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.2147298);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.1405487);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.06894159);
   TT_stack_2_stack_2_stack_2->SetEntries(739478);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1340.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1817.222);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,1244.457);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,958.1758);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,669.0286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,362.5303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,307.6984);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,220.855);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,143.0409);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,94.47449);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,74.71964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,66.87656);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,36.42927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,10.18594);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,14.83175);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,12.00154);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,7.075172);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2.673418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,-3.038457);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,-0.8892089);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,1.759916);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,-0.3902028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,-0.09437119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.8395243);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,47.43006);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,60.72613);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,54.99272);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,48.52088);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,42.13578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,34.11423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,29.89133);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,25.47098);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,21.33044);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,18.30884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,14.88151);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,13.31803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,9.915967);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,8.48249);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,6.924617);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,5.429114);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,4.78658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,2.994722);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.9760822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,1.244248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,1.927687);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.1500865);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.09437119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.8395243);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3287.291);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(1,12.36058);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(2,25.68978);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(3,20.38778);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(4,18.57732);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(5,10.62866);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(6,6.185101);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(7,3.602264);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(8,3.862599);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(9,2.413708);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(10,1.129294);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(11,0.5431065);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(12,0.4201084);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(13,0.2214625);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(14,0.3146733);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(15,0.1308179);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(16,0.09367511);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(17,0.09511539);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(18,0.005860942);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(19,0.02700121);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(20,-0.0251391);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(21,0.02145202);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(1,1.130394);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(2,1.724164);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(3,1.647962);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(4,1.440871);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(5,1.211082);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(6,0.9791862);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(7,0.7914266);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(8,0.6699716);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(9,0.5757202);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(10,0.462312);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(11,0.389045);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(12,0.298186);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(13,0.2718605);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(14,0.2047075);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(15,0.1599715);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(16,0.1432751);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(17,0.06941669);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(18,0.07748702);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(19,0.02700121);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(20,0.0251391);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(21,0.02145202);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetEntries(19326);
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
   5279.564,
   9840.108,
   8618.745,
   6771.601,
   4984.621,
   3492.958,
   2518.33,
   1817.263,
   1264.57,
   862.7627,
   603.5646,
   411.5688,
   261.758,
   164.6894,
   108.1175,
   68.90563,
   43.56002,
   21.11384,
   8.002242,
   4.23582,
   3.84094,
   0.5163175,
   0.2521774,
   0.9084659,
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
   49.95002,
   64.59556,
   58.90212,
   51.96877,
   45.08424,
   36.7498,
   32.09665,
   27.25551,
   22.82165,
   19.50485,
   15.89613,
   14.05493,
   10.55711,
   9.001955,
   7.316026,
   5.737396,
   5.002178,
   3.173392,
   1.292648,
   1.352875,
   1.973657,
   0.2619974,
   0.169324,
   0.8423503,
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
   49.95002,
   64.59556,
   58.90212,
   51.96877,
   45.08424,
   36.7498,
   32.09665,
   27.25551,
   22.82165,
   19.50485,
   15.89613,
   14.05493,
   10.55711,
   9.001955,
   7.316026,
   5.737396,
   5.002178,
   3.173392,
   1.292648,
   1.352875,
   1.973657,
   0.2619974,
   0.169324,
   0.8423503,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMinimum(10.89517);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMaximum(10895.17);
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
   Data__1111->SetBinContent(1,5223);
   Data__1111->SetBinContent(2,9511);
   Data__1111->SetBinContent(3,8227);
   Data__1111->SetBinContent(4,6227);
   Data__1111->SetBinContent(5,4695);
   Data__1111->SetBinContent(6,3344);
   Data__1111->SetBinContent(7,2276);
   Data__1111->SetBinContent(8,1612);
   Data__1111->SetBinContent(9,1130);
   Data__1111->SetBinContent(10,735);
   Data__1111->SetBinContent(11,492);
   Data__1111->SetBinContent(12,351);
   Data__1111->SetBinContent(13,262);
   Data__1111->SetBinContent(14,156);
   Data__1111->SetBinContent(15,116);
   Data__1111->SetBinContent(16,59);
   Data__1111->SetBinContent(17,35);
   Data__1111->SetBinContent(18,17);
   Data__1111->SetBinContent(19,18);
   Data__1111->SetBinContent(20,3);
   Data__1111->SetBinContent(21,3);
   Data__1111->SetBinContent(23,1);
   Data__1111->SetBinError(1,72.27033);
   Data__1111->SetBinError(2,97.52436);
   Data__1111->SetBinError(3,90.70281);
   Data__1111->SetBinError(4,78.91134);
   Data__1111->SetBinError(5,68.52007);
   Data__1111->SetBinError(6,57.82733);
   Data__1111->SetBinError(7,47.70744);
   Data__1111->SetBinError(8,40.14972);
   Data__1111->SetBinError(9,33.61547);
   Data__1111->SetBinError(10,27.11088);
   Data__1111->SetBinError(11,22.18107);
   Data__1111->SetBinError(12,18.73499);
   Data__1111->SetBinError(13,16.18641);
   Data__1111->SetBinError(14,12.49);
   Data__1111->SetBinError(15,10.77033);
   Data__1111->SetBinError(16,7.681146);
   Data__1111->SetBinError(17,5.91608);
   Data__1111->SetBinError(18,4.123106);
   Data__1111->SetBinError(19,4.242641);
   Data__1111->SetBinError(20,1.732051);
   Data__1111->SetBinError(21,1.732051);
   Data__1111->SetBinError(23,1);
   Data__1111->SetEntries(44497);
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
   hframe_copy__1112->SetMaximum(69332.93);
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
   hframe_copy__1113->SetMaximum(69332.93);
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
