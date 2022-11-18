void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Fri Nov 18 13:29:49 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3675[23] = {
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
   0.45};
   Double_t BackgroundStatSystError_fy3675[23] = {
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
   Double_t BackgroundStatSystError_felx3675[23] = {
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
   Double_t BackgroundStatSystError_fely3675[23] = {
   0.01713206,
   0.01345414,
   0.01484365,
   0.01668824,
   0.0196587,
   0.02306017,
   0.0279082,
   0.03200638,
   0.03860296,
   0.04575486,
   0.05732979,
   0.07591223,
   0.07797229,
   0.09979483,
   0.1404237,
   0.1928622,
   0.1998982,
   0.2618798,
   0.3414688,
   0.4108638,
   -6.896773,
   0.52213,
   24.78147};
   Double_t BackgroundStatSystError_fehx3675[23] = {
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
   Double_t BackgroundStatSystError_fehy3675[23] = {
   0.01713206,
   0.01345414,
   0.01484365,
   0.01668824,
   0.0196587,
   0.02306017,
   0.0279082,
   0.03200638,
   0.03860296,
   0.04575486,
   0.05732979,
   0.07591223,
   0.07797229,
   0.09979483,
   0.1404237,
   0.1928622,
   0.1998982,
   0.2618798,
   0.3414688,
   0.4108638,
   -6.896773,
   0.52213,
   24.78147};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,BackgroundStatSystError_fx3675,BackgroundStatSystError_fy3675,BackgroundStatSystError_felx3675,BackgroundStatSystError_fehx3675,BackgroundStatSystError_fely3675,BackgroundStatSystError_fehy3675);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError366736713675 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError366736713675","Graph",100,0,0.506);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMinimum(-28.73777);
   Graph_Graph_Graph_BackgroundStatSystError366736713675->SetMaximum(30.73777);
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
   0.01713206,
   0.01345414,
   0.01484365,
   0.01668824,
   0.0196587,
   0.02306017,
   0.0279082,
   0.03200638,
   0.03860296,
   0.04575486,
   0.05732979,
   0.07591223,
   0.07797229,
   0.09979483,
   0.1404237,
   0.1928622,
   0.1998982,
   0.2618798,
   0.3414688,
   0.4108638,
   -6.896773,
   0.52213,
   24.78147,
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
   0.01713206,
   0.01345414,
   0.01484365,
   0.01668824,
   0.0196587,
   0.02306017,
   0.0279082,
   0.03200638,
   0.03860296,
   0.04575486,
   0.05732979,
   0.07591223,
   0.07797229,
   0.09979483,
   0.1404237,
   0.1928622,
   0.1998982,
   0.2618798,
   0.3414688,
   0.4108638,
   -6.896773,
   0.52213,
   24.78147,
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
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMinimum(-28.73777);
   Graph_Graph_Graph_BackgroundStatError366836723676->SetMaximum(30.73777);
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
   
   Double_t Graph1_fx3677[20] = {
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
   0.39};
   Double_t Graph1_fy3677[20] = {
   1.013101,
   1.002513,
   1.00402,
   0.9982857,
   0.9283709,
   0.9790895,
   0.9477861,
   0.9091906,
   0.9077129,
   0.7983416,
   0.9104707,
   1.082022,
   0.9173953,
   0.892622,
   1.211044,
   1.07313,
   0.9014413,
   1.010998,
   1.582337,
   0.2470133};
   Double_t Graph1_felx3677[20] = {
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
   Double_t Graph1_fely3677[20] = {
   0.02140089,
   0.01673646,
   0.01837374,
   0.02069458,
   0.0233262,
   0.02795118,
   0.03279949,
   0.0373991,
   0.04439769,
   0.04894946,
   0.06454156,
   0.09016846,
   0.08827641,
   0.1124598,
   0.1747991,
   0.2399591,
   0.2253603,
   0.3197056,
   0.5003789,
   0.2470133};
   Double_t Graph1_fehx3677[20] = {
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
   Double_t Graph1_fehy3677[20] = {
   0.02140089,
   0.01673646,
   0.01837374,
   0.02069458,
   0.0233262,
   0.02795118,
   0.03279949,
   0.0373991,
   0.04439769,
   0.04894946,
   0.06454156,
   0.09016846,
   0.08827641,
   0.1124598,
   0.1747991,
   0.2399591,
   0.2253603,
   0.3197056,
   0.5003789,
   0.2470133};
   grae = new TGraphAsymmErrors(20,Graph1_fx3677,Graph1_fy3677,Graph1_felx3677,Graph1_fehx3677,Graph1_fely3677,Graph1_fehy3677);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1366936733677 = new TH1F("Graph_Graph_Graph_Graph1366936733677","Graph",100,0,0.44);
   Graph_Graph_Graph_Graph1366936733677->SetMinimum(0);
   Graph_Graph_Graph_Graph1366936733677->SetMaximum(2.290987);
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
   Aplanarity_1->Range(-0.1012658,-1.216509,0.5316456,4.763463);
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
   hframe__1109->SetMaximum(25390.12);
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
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMinimum(1.431603);
   StackedMCstackHist_stack_157_stack_158_stack_159->SetMaximum(5726.412);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,60.10535);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,90.94362);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,77.83479);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,56.94022);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,41.31401);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,36.28059);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,22.12076);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,16.46276);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,9.848454);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,7.066527);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,4.977567);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,6.079418);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,2.491678);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,2.798639);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,1.088058);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.7266936);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.4664314);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.09416755);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.03631546);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.6450856);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.002611902);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,-0.004184712);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,3.931995);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,4.271298);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,4.383505);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,3.594926);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,3.519104);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,3.688937);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.990063);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.844);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.279631);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.076959);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.9654311);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.617707);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.7848582);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.7301974);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.4493686);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.246095);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.2238339);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.04942871);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.0121811);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.386721);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.002526262);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.004463761);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(52636);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1147.015);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,2050.695);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1832.969);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1474.366);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1107.458);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,815.8385);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,590.6245);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,432.3024);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,304.299);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,213.9778);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,141.9263);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,98.58334);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,73.02574);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,50.2454);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,27.88005);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,19.26109);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,11.48411);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,7.014762);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,3.47446);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,2.143271);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.7962323);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.2094017);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.1207263);
   TT_stack_2_stack_2_stack_2->SetBinError(1,8.218777);
   TT_stack_2_stack_2_stack_2->SetBinError(2,11.00624);
   TT_stack_2_stack_2_stack_2->SetBinError(3,10.38406);
   TT_stack_2_stack_2_stack_2->SetBinError(4,9.31575);
   TT_stack_2_stack_2_stack_2->SetBinError(5,8.075719);
   TT_stack_2_stack_2_stack_2->SetBinError(6,6.910843);
   TT_stack_2_stack_2_stack_2->SetBinError(7,5.894279);
   TT_stack_2_stack_2_stack_2->SetBinError(8,5.038619);
   TT_stack_2_stack_2_stack_2->SetBinError(9,4.222372);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.539792);
   TT_stack_2_stack_2_stack_2->SetBinError(11,2.8822);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.413812);
   TT_stack_2_stack_2_stack_2->SetBinError(13,2.067394);
   TT_stack_2_stack_2_stack_2->SetBinError(14,1.726086);
   TT_stack_2_stack_2_stack_2->SetBinError(15,1.278733);
   TT_stack_2_stack_2_stack_2->SetBinError(16,1.061839);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.83025);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.6443725);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.4547572);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.3609459);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.2080439);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.1070569);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.08559653);
   TT_stack_2_stack_2_stack_2->SetEntries(185137);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1004.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1437.369);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,1063.24);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,799.6902);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,557.4424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,401.0861);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,268.2552);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,201.2636);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,146.3506);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,112.1464);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,71.66441);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,28.42147);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,42.20718);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,17.53455);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,10.66712);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,-1.350705);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,5.798809);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2.782289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,2.808991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1.260008);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,-0.8416967);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,-0.1159982);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,36.78496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,46.68275);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,42.68251);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,37.59683);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,32.36452);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,27.81711);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,23.78707);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,20.10131);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,17.22037);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,14.78928);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,12.15622);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,9.675821);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,8.908908);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,6.789449);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,5.398166);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,3.425136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,3.442287);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,2.508396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,2.109508);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,1.576966);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.2098983);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.08001365);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3639.597);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(1,4.363404);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(2,9.068234);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(3,6.118299);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(4,5.106246);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(5,3.209188);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(6,0.8652669);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(7,0.9561968);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(8,1.656823);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(9,0.7377125);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(10,0.5655586);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(11,0.002918087);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(12,0.2660858);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(13,0.08464476);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(14,-0.161391);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(15,-0.05760287);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(16,-0.01919746);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(18,-0.07035671);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinContent(19,0.02613622);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(1,0.6701254);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(2,0.9836826);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(3,0.9522286);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(4,0.8040606);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(5,0.6687073);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(6,0.52648);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(7,0.4408788);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(8,0.3572238);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(9,0.2916123);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(10,0.2626254);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(11,0.1983061);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(12,0.1602535);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(13,0.1379245);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(14,0.1069686);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(15,0.07458762);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(16,0.07454175);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(18,0.06367076);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetBinError(19,0.02613622);
   ChargedHiggs_HplusTBHplusToTB_M_800__1110->SetEntries(5945);
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
   2212.021,
   3579.008,
   2974.044,
   2330.996,
   1706.215,
   1253.205,
   881.0005,
   650.0287,
   460.498,
   333.1907,
   218.5683,
   133.0842,
   117.7246,
   70.57859,
   39.63522,
   18.63707,
   17.74935,
   9.891218,
   6.319767,
   4.048365,
   -0.04285244,
   0.205217,
   0.004728153,
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
   37.89647,
   48.15247,
   44.14567,
   38.90023,
   33.54197,
   28.89913,
   24.58714,
   20.80507,
   17.77659,
   15.24509,
   12.53047,
   10.10272,
   9.179257,
   7.043378,
   5.565724,
   3.594387,
   3.548064,
   2.59031,
   2.158003,
   1.663327,
   0.2955435,
   0.1071499,
   0.1171706,
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
   37.89647,
   48.15247,
   44.14567,
   38.90023,
   33.54197,
   28.89913,
   24.58714,
   20.80507,
   17.77659,
   15.24509,
   12.53047,
   10.10272,
   9.179257,
   7.043378,
   5.565724,
   3.594387,
   3.548064,
   2.59031,
   2.158003,
   1.663327,
   0.2955435,
   0.1071499,
   0.1171706,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMinimum(3.989877);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors367036743678->SetMaximum(3989.877);
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
   Data__1111->SetBinContent(1,2241);
   Data__1111->SetBinContent(2,3588);
   Data__1111->SetBinContent(3,2986);
   Data__1111->SetBinContent(4,2327);
   Data__1111->SetBinContent(5,1584);
   Data__1111->SetBinContent(6,1227);
   Data__1111->SetBinContent(7,835);
   Data__1111->SetBinContent(8,591);
   Data__1111->SetBinContent(9,418);
   Data__1111->SetBinContent(10,266);
   Data__1111->SetBinContent(11,199);
   Data__1111->SetBinContent(12,144);
   Data__1111->SetBinContent(13,108);
   Data__1111->SetBinContent(14,63);
   Data__1111->SetBinContent(15,48);
   Data__1111->SetBinContent(16,20);
   Data__1111->SetBinContent(17,16);
   Data__1111->SetBinContent(18,10);
   Data__1111->SetBinContent(19,10);
   Data__1111->SetBinContent(20,1);
   Data__1111->SetBinError(1,47.3392);
   Data__1111->SetBinError(2,59.89992);
   Data__1111->SetBinError(3,54.6443);
   Data__1111->SetBinError(4,48.23899);
   Data__1111->SetBinError(5,39.7995);
   Data__1111->SetBinError(6,35.02856);
   Data__1111->SetBinError(7,28.89637);
   Data__1111->SetBinError(8,24.31049);
   Data__1111->SetBinError(9,20.44505);
   Data__1111->SetBinError(10,16.30951);
   Data__1111->SetBinError(11,14.10674);
   Data__1111->SetBinError(12,12);
   Data__1111->SetBinError(13,10.3923);
   Data__1111->SetBinError(14,7.937254);
   Data__1111->SetBinError(15,6.928203);
   Data__1111->SetBinError(16,4.472136);
   Data__1111->SetBinError(17,4);
   Data__1111->SetBinError(18,3.162278);
   Data__1111->SetBinError(19,3.162278);
   Data__1111->SetBinError(20,1);
   Data__1111->SetEntries(16686);
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
   hframe_copy__1112->SetMaximum(25390.12);
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
   hframe_copy__1113->SetMaximum(25390.12);
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
