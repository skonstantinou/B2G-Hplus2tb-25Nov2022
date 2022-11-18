void cosW_tH_tA()
{
//=========Macro generated from canvas: cosW_tH_tA/cosW_tH_tA
//=========  (Fri Nov 18 13:29:52 2022) by ROOT version 6.20/02
   TCanvas *cosW_tH_tA = new TCanvas("cosW_tH_tA", "cosW_tH_tA",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cosW_tH_tA->SetHighLightColor(2);
   cosW_tH_tA->Range(0,0,1,1);
   cosW_tH_tA->SetFillColor(0);
   cosW_tH_tA->SetBorderMode(0);
   cosW_tH_tA->SetBorderSize(2);
   cosW_tH_tA->SetTickx(1);
   cosW_tH_tA->SetTicky(1);
   cosW_tH_tA->SetLeftMargin(0.16);
   cosW_tH_tA->SetRightMargin(0.05);
   cosW_tH_tA->SetTopMargin(0.06);
   cosW_tH_tA->SetBottomMargin(0.13);
   cosW_tH_tA->SetFrameFillStyle(0);
   cosW_tH_tA->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: cosW_tH_tA_2
   TPad *cosW_tH_tA_2 = new TPad("cosW_tH_tA_2", "cosW_tH_tA_2",0,0,1,0.304);
   cosW_tH_tA_2->Draw();
   cosW_tH_tA_2->cd();
   cosW_tH_tA_2->Range(-1.405063,-0.428,1.126582,1.7);
   cosW_tH_tA_2->SetFillColor(0);
   cosW_tH_tA_2->SetFillStyle(4000);
   cosW_tH_tA_2->SetBorderMode(0);
   cosW_tH_tA_2->SetBorderSize(2);
   cosW_tH_tA_2->SetTickx(1);
   cosW_tH_tA_2->SetTicky(1);
   cosW_tH_tA_2->SetLeftMargin(0.16);
   cosW_tH_tA_2->SetRightMargin(0.05);
   cosW_tH_tA_2->SetTopMargin(0);
   cosW_tH_tA_2->SetBottomMargin(0.3421053);
   cosW_tH_tA_2->SetFrameFillStyle(0);
   cosW_tH_tA_2->SetFrameBorderMode(0);
   cosW_tH_tA_2->SetFrameFillStyle(0);
   cosW_tH_tA_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1065 = new TH1F("hframe__1065","",1000,-1,1);
   hframe__1065->SetMinimum(0.3);
   hframe__1065->SetMaximum(1.7);
   hframe__1065->SetDirectory(0);
   hframe__1065->SetStats(0);
   hframe__1065->SetLineStyle(0);
   hframe__1065->SetMarkerStyle(20);
   hframe__1065->GetXaxis()->SetTitle("cosW_tH_tA");
   hframe__1065->GetXaxis()->SetNdivisions(8);
   hframe__1065->GetXaxis()->SetLabelFont(43);
   hframe__1065->GetXaxis()->SetLabelOffset(0.007);
   hframe__1065->GetXaxis()->SetLabelSize(27);
   hframe__1065->GetXaxis()->SetTitleSize(33);
   hframe__1065->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1065->GetXaxis()->SetTitleFont(43);
   hframe__1065->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1065->GetYaxis()->SetNdivisions(505);
   hframe__1065->GetYaxis()->SetLabelFont(43);
   hframe__1065->GetYaxis()->SetLabelOffset(0.007);
   hframe__1065->GetYaxis()->SetLabelSize(21);
   hframe__1065->GetYaxis()->SetTitleSize(33);
   hframe__1065->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1065->GetYaxis()->SetTitleFont(43);
   hframe__1065->GetZaxis()->SetLabelFont(43);
   hframe__1065->GetZaxis()->SetLabelOffset(0.007);
   hframe__1065->GetZaxis()->SetLabelSize(27);
   hframe__1065->GetZaxis()->SetTitleSize(33);
   hframe__1065->GetZaxis()->SetTitleOffset(1);
   hframe__1065->GetZaxis()->SetTitleFont(43);
   hframe__1065->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3651[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t BackgroundStatSystError_fy3651[20] = {
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
   Double_t BackgroundStatSystError_felx3651[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fely3651[20] = {
   0.04609456,
   0.0485772,
   0.05646651,
   0.06257949,
   0.07317828,
   0.07202471,
   0.06940828,
   0.07343267,
   0.07298501,
   0.07628786,
   0.07390984,
   0.07349429,
   0.07295238,
   0.07715234,
   0.07273563,
   0.06836582,
   0.06813045,
   0.06873555,
   0.06436614,
   0.06520044};
   Double_t BackgroundStatSystError_fehx3651[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fehy3651[20] = {
   0.04609456,
   0.0485772,
   0.05646651,
   0.06257949,
   0.07317828,
   0.07202471,
   0.06940828,
   0.07343267,
   0.07298501,
   0.07628786,
   0.07390984,
   0.07349429,
   0.07295238,
   0.07715234,
   0.07273563,
   0.06836582,
   0.06813045,
   0.06873555,
   0.06436614,
   0.06520044};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3651,BackgroundStatSystError_fy3651,BackgroundStatSystError_felx3651,BackgroundStatSystError_fehx3651,BackgroundStatSystError_fely3651,BackgroundStatSystError_fehy3651);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1376;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError364336473651 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError364336473651","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMinimum(0.9074172);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMaximum(1.092583);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError364336473651);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3652[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t BackgroundStatError_fy3652[20] = {
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
   Double_t BackgroundStatError_felx3652[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatError_fely3652[20] = {
   0.04609456,
   0.0485772,
   0.05646651,
   0.06257949,
   0.07317828,
   0.07202471,
   0.06940828,
   0.07343267,
   0.07298501,
   0.07628786,
   0.07390984,
   0.07349429,
   0.07295238,
   0.07715234,
   0.07273563,
   0.06836582,
   0.06813045,
   0.06873555,
   0.06436614,
   0.06520044};
   Double_t BackgroundStatError_fehx3652[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatError_fehy3652[20] = {
   0.04609456,
   0.0485772,
   0.05646651,
   0.06257949,
   0.07317828,
   0.07202471,
   0.06940828,
   0.07343267,
   0.07298501,
   0.07628786,
   0.07390984,
   0.07349429,
   0.07295238,
   0.07715234,
   0.07273563,
   0.06836582,
   0.06813045,
   0.06873555,
   0.06436614,
   0.06520044};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3652,BackgroundStatError_fy3652,BackgroundStatError_felx3652,BackgroundStatError_fehx3652,BackgroundStatError_fely3652,BackgroundStatError_fehy3652);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1375;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError364436483652 = new TH1F("Graph_Graph_Graph_BackgroundStatError364436483652","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMinimum(0.9074172);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMaximum(1.092583);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError364436483652);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx153[2] = {
   -1,
   1};
   Double_t Graph0_fy153[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx153,Graph0_fy153);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0151152153 = new TH1F("Graph_Graph_Graph_Graph0151152153","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_Graph0151152153->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0151152153->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0151152153->SetDirectory(0);
   Graph_Graph_Graph_Graph0151152153->SetStats(0);
   Graph_Graph_Graph_Graph0151152153->SetLineStyle(0);
   Graph_Graph_Graph_Graph0151152153->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0151152153);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3653[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t Graph1_fy3653[20] = {
   0.8908444,
   0.778153,
   0.9220994,
   1.045718,
   1.001135,
   1.062005,
   1.017341,
   1.154066,
   1.018163,
   1.114469,
   0.9766744,
   1.190315,
   0.9627352,
   1.155747,
   1.059988,
   1.017235,
   1.025203,
   1.241652,
   1.059405,
   1.105104};
   Double_t Graph1_felx3653[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fely3653[20] = {
   0.03231432,
   0.031928,
   0.04020544,
   0.04738602,
   0.0535895,
   0.05447973,
   0.05211995,
   0.05821492,
   0.05465788,
   0.05873768,
   0.05376416,
   0.05843028,
   0.05213503,
   0.06066101,
   0.05495782,
   0.05048453,
   0.05008444,
   0.05586458,
   0.04855777,
   0.05007703};
   Double_t Graph1_fehx3653[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fehy3653[20] = {
   0.03231432,
   0.031928,
   0.04020544,
   0.04738602,
   0.0535895,
   0.05447973,
   0.05211995,
   0.05821492,
   0.05465788,
   0.05873768,
   0.05376416,
   0.05843028,
   0.05213503,
   0.06066101,
   0.05495782,
   0.05048453,
   0.05008444,
   0.05586458,
   0.04855777,
   0.05007703};
   grae = new TGraphAsymmErrors(20,Graph1_fx3653,Graph1_fy3653,Graph1_felx3653,Graph1_fehx3653,Graph1_fely3653,Graph1_fehy3653);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1364536493653 = new TH1F("Graph_Graph_Graph_Graph1364536493653","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_Graph1364536493653->SetMinimum(0.6910957);
   Graph_Graph_Graph_Graph1364536493653->SetMaximum(1.352646);
   Graph_Graph_Graph_Graph1364536493653->SetDirectory(0);
   Graph_Graph_Graph_Graph1364536493653->SetStats(0);
   Graph_Graph_Graph_Graph1364536493653->SetLineStyle(0);
   Graph_Graph_Graph_Graph1364536493653->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1364536493653);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1066 = new TH1F("hframe_copy__1066","",1000,-1,1);
   hframe_copy__1066->SetMinimum(0.3);
   hframe_copy__1066->SetMaximum(1.7);
   hframe_copy__1066->SetDirectory(0);
   hframe_copy__1066->SetStats(0);
   hframe_copy__1066->SetLineStyle(0);
   hframe_copy__1066->SetMarkerStyle(20);
   hframe_copy__1066->GetXaxis()->SetTitle("cosW_tH_tA");
   hframe_copy__1066->GetXaxis()->SetNdivisions(8);
   hframe_copy__1066->GetXaxis()->SetLabelFont(43);
   hframe_copy__1066->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1066->GetXaxis()->SetLabelSize(27);
   hframe_copy__1066->GetXaxis()->SetTitleSize(33);
   hframe_copy__1066->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1066->GetXaxis()->SetTitleFont(43);
   hframe_copy__1066->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1066->GetYaxis()->SetNdivisions(505);
   hframe_copy__1066->GetYaxis()->SetLabelFont(43);
   hframe_copy__1066->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1066->GetYaxis()->SetLabelSize(21);
   hframe_copy__1066->GetYaxis()->SetTitleSize(33);
   hframe_copy__1066->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1066->GetYaxis()->SetTitleFont(43);
   hframe_copy__1066->GetZaxis()->SetLabelFont(43);
   hframe_copy__1066->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1066->GetZaxis()->SetLabelSize(27);
   hframe_copy__1066->GetZaxis()->SetTitleSize(33);
   hframe_copy__1066->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1066->GetZaxis()->SetTitleFont(43);
   hframe_copy__1066->Draw("sameaxis");
   cosW_tH_tA_2->Modified();
   cosW_tH_tA->cd();
  
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
   cosW_tH_tA->cd();
  
// ------------>Primitives in pad: cosW_tH_tA_1
   TPad *cosW_tH_tA_1 = new TPad("cosW_tH_tA_1", "cosW_tH_tA_1",0,0.2897959,1,1);
   cosW_tH_tA_1->Draw();
   cosW_tH_tA_1->cd();
   cosW_tH_tA_1->Range(-1.405063,-2.125993,1.126582,4.17366);
   cosW_tH_tA_1->SetFillColor(0);
   cosW_tH_tA_1->SetFillStyle(4000);
   cosW_tH_tA_1->SetBorderMode(0);
   cosW_tH_tA_1->SetBorderSize(2);
   cosW_tH_tA_1->SetLogy();
   cosW_tH_tA_1->SetTickx(1);
   cosW_tH_tA_1->SetTicky(1);
   cosW_tH_tA_1->SetLeftMargin(0.16);
   cosW_tH_tA_1->SetRightMargin(0.05);
   cosW_tH_tA_1->SetTopMargin(0.06);
   cosW_tH_tA_1->SetBottomMargin(0.02);
   cosW_tH_tA_1->SetFrameFillStyle(0);
   cosW_tH_tA_1->SetFrameBorderMode(0);
   cosW_tH_tA_1->SetFrameFillStyle(0);
   cosW_tH_tA_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1067 = new TH1F("hframe__1067","",1000,-1,1);
   hframe__1067->SetMinimum(0.01);
   hframe__1067->SetMaximum(6247.133);
   hframe__1067->SetDirectory(0);
   hframe__1067->SetStats(0);
   hframe__1067->SetLineStyle(0);
   hframe__1067->SetMarkerStyle(20);
   hframe__1067->GetXaxis()->SetNdivisions(8);
   hframe__1067->GetXaxis()->SetLabelFont(43);
   hframe__1067->GetXaxis()->SetLabelOffset(0.007);
   hframe__1067->GetXaxis()->SetLabelSize(0);
   hframe__1067->GetXaxis()->SetTitleSize(0);
   hframe__1067->GetXaxis()->SetTitleOffset(0.9);
   hframe__1067->GetXaxis()->SetTitleFont(43);
   hframe__1067->GetYaxis()->SetTitle("Events / 0.10");
   hframe__1067->GetYaxis()->SetLabelFont(43);
   hframe__1067->GetYaxis()->SetLabelOffset(0.007);
   hframe__1067->GetYaxis()->SetLabelSize(27);
   hframe__1067->GetYaxis()->SetTitleSize(33);
   hframe__1067->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1067->GetYaxis()->SetTitleFont(43);
   hframe__1067->GetZaxis()->SetLabelFont(43);
   hframe__1067->GetZaxis()->SetLabelOffset(0.007);
   hframe__1067->GetZaxis()->SetLabelSize(27);
   hframe__1067->GetZaxis()->SetTitleSize(33);
   hframe__1067->GetZaxis()->SetTitleOffset(1);
   hframe__1067->GetZaxis()->SetTitleFont(43);
   hframe__1067->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_151_stack_152_stack_153 = new TH1F("StackedMCstackHist_stack_151_stack_152_stack_153","StackedMCstackHist",20,-1,1);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMinimum(0.9811744);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMaximum(1293.246);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetDirectory(0);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetStats(0);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetLineStyle(0);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMarkerStyle(20);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_151_stack_152_stack_153);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_cosW_tH_tAInclusive",20,-1,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,14.97451);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,12.19648);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,9.489087);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,7.855586);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,4.53325);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,4.289122);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,3.65361);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,4.304876);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,3.87442);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,4.133585);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,3.45089);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,3.889864);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,4.950891);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,3.45201);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,4.558431);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,3.82378);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,7.534578);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,4.291056);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,5.410332);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,3.597563);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,2.529117);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.228106);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.959367);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.542691);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.041505);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.8169657);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.7293093);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.9405135);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.8516469);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.9150103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.9546301);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.8986472);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.862971);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.8117754);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.643126);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.9202998);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,2.140378);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.8869427);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.8314928);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.7296423);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_cosW_tH_tAInclusive",20,-1,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,151.9332);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,143.8482);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,111.4887);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,88.50595);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,75.40499);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,67.40829);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,61.16366);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,56.5135);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,55.83265);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,51.40074);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,50.20756);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,46.87856);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,47.39596);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,45.74906);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,46.02351);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,50.20142);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,54.47291);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,50.38363);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,54.85899);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,56.6951);
   TT_stack_2_stack_2_stack_2->SetBinError(1,3.037749);
   TT_stack_2_stack_2_stack_2->SetBinError(2,2.961732);
   TT_stack_2_stack_2_stack_2->SetBinError(3,2.623676);
   TT_stack_2_stack_2_stack_2->SetBinError(4,2.339397);
   TT_stack_2_stack_2_stack_2->SetBinError(5,2.153879);
   TT_stack_2_stack_2_stack_2->SetBinError(6,2.033145);
   TT_stack_2_stack_2_stack_2->SetBinError(7,1.952098);
   TT_stack_2_stack_2_stack_2->SetBinError(8,1.859757);
   TT_stack_2_stack_2_stack_2->SetBinError(9,1.864583);
   TT_stack_2_stack_2_stack_2->SetBinError(10,1.781594);
   TT_stack_2_stack_2_stack_2->SetBinError(11,1.772604);
   TT_stack_2_stack_2_stack_2->SetBinError(12,1.704265);
   TT_stack_2_stack_2_stack_2->SetBinError(13,1.706572);
   TT_stack_2_stack_2_stack_2->SetBinError(14,1.674358);
   TT_stack_2_stack_2_stack_2->SetBinError(15,1.670366);
   TT_stack_2_stack_2_stack_2->SetBinError(16,1.7523);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.82395);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.765007);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.82462);
   TT_stack_2_stack_2_stack_2->SetBinError(20,1.854097);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_cosW_tH_tAInclusive",20,-1,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,686.2155);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,607.3014);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,449.4597);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,369.3471);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,268.6662);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,286.1162);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,309.6885);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,279.7168);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,281.1027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,267.4894);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,284.2228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,297.8787);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,301.8523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,264.8814);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,300.3654);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,345.0959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,346.6921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,343.1822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,389.0393);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,380.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,39.12518);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,36.89553);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,32.04373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,29.00877);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,25.39784);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,25.6781);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,25.91013);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,24.91941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,24.78939);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,24.56127);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,24.89146);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,25.55103);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,25.76881);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,24.16065);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,25.41861);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,27.21436);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,27.70252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,27.27548);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,28.85067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,28.66353);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1068 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1068","h_SR_cosW_tH_tAInclusive",20,-1,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(1,1.517245);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(2,0.783936);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(3,-0.03491643);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(4,0.3743845);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(5,0.3703733);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(6,0.1274263);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(7,0.1551086);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(8,0.08972955);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(9,-0.2307782);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(10,-0.08447245);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(11,0.1787811);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(12,-0.2345906);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(13,0.3172902);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(14,0.4648969);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(15,0.5856176);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(16,0.3972336);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(17,0.2696649);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(18,0.3586188);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(19,0.3477835);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(20,0.2005231);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(1,0.3280058);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(2,0.3094609);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(3,0.2704009);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(4,0.2221917);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(5,0.2152663);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(6,0.2167994);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(7,0.1990951);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(8,0.195867);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(9,0.1695398);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(10,0.1556038);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(11,0.1772937);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(12,0.168523);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(13,0.168216);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(14,0.1825592);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(15,0.1841881);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(16,0.169171);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(17,0.1731763);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(18,0.1931349);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(19,0.1623115);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(20,0.1526537);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetEntries(1103);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3654[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3654[20] = {
   853.1232,
   763.3461,
   570.4374,
   465.7086,
   348.6045,
   357.8136,
   374.5057,
   340.5352,
   340.8097,
   323.0237,
   337.8813,
   348.6471,
   354.1992,
   314.0825,
   350.9473,
   399.1211,
   408.6996,
   397.8569,
   449.3087,
   440.6826};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3654[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3654[20] = {
   39.32434,
   37.08122,
   32.21061,
   29.14381,
   25.51028,
   25.77142,
   25.9938,
   25.0064,
   24.874,
   24.64279,
   24.97275,
   25.62357,
   25.83967,
   24.2322,
   25.52638,
   27.28624,
   27.84489,
   27.34691,
   28.92027,
   28.7327};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3654[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3654[20] = {
   39.32434,
   37.08122,
   32.21061,
   29.14381,
   25.51028,
   25.77142,
   25.9938,
   25.0064,
   24.874,
   24.64279,
   24.97275,
   25.62357,
   25.83967,
   24.2322,
   25.52638,
   27.28624,
   27.84489,
   27.34691,
   28.92027,
   28.7327};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3654,BkgSum-SR-Inclusive_sum_errors_fy3654,BkgSum-SR-Inclusive_sum_errors_felx3654,BkgSum-SR-Inclusive_sum_errors_fehx3654,BkgSum-SR-Inclusive_sum_errors_fely3654,BkgSum-SR-Inclusive_sum_errors_fehy3654);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1374;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMinimum(229.5905);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMaximum(952.7072);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors364636503654);
   
   grae->Draw("e2 ");
   
   TH1F *Data__1069 = new TH1F("Data__1069","h_SR_cosW_tH_tAInclusive",20,-1,1);
   Data__1069->SetBinContent(1,760);
   Data__1069->SetBinContent(2,594);
   Data__1069->SetBinContent(3,526);
   Data__1069->SetBinContent(4,487);
   Data__1069->SetBinContent(5,349);
   Data__1069->SetBinContent(6,380);
   Data__1069->SetBinContent(7,381);
   Data__1069->SetBinContent(8,393);
   Data__1069->SetBinContent(9,347);
   Data__1069->SetBinContent(10,360);
   Data__1069->SetBinContent(11,330);
   Data__1069->SetBinContent(12,415);
   Data__1069->SetBinContent(13,341);
   Data__1069->SetBinContent(14,363);
   Data__1069->SetBinContent(15,372);
   Data__1069->SetBinContent(16,406);
   Data__1069->SetBinContent(17,419);
   Data__1069->SetBinContent(18,494);
   Data__1069->SetBinContent(19,476);
   Data__1069->SetBinContent(20,487);
   Data__1069->SetBinError(1,27.5681);
   Data__1069->SetBinError(2,24.37212);
   Data__1069->SetBinError(3,22.93469);
   Data__1069->SetBinError(4,22.06808);
   Data__1069->SetBinError(5,18.68154);
   Data__1069->SetBinError(6,19.49359);
   Data__1069->SetBinError(7,19.51922);
   Data__1069->SetBinError(8,19.82423);
   Data__1069->SetBinError(9,18.62794);
   Data__1069->SetBinError(10,18.97367);
   Data__1069->SetBinError(11,18.1659);
   Data__1069->SetBinError(12,20.37155);
   Data__1069->SetBinError(13,18.46619);
   Data__1069->SetBinError(14,19.05256);
   Data__1069->SetBinError(15,19.2873);
   Data__1069->SetBinError(16,20.14944);
   Data__1069->SetBinError(17,20.46949);
   Data__1069->SetBinError(18,22.22611);
   Data__1069->SetBinError(19,21.81742);
   Data__1069->SetBinError(20,22.06808);
   Data__1069->SetEntries(8684);
   Data__1069->SetDirectory(0);
   Data__1069->SetFillStyle(3001);
   Data__1069->SetLineWidth(2);
   Data__1069->SetMarkerStyle(20);
   Data__1069->SetMarkerSize(1.2);
   Data__1069->GetXaxis()->SetRange(1,200);
   Data__1069->GetXaxis()->SetLabelFont(42);
   Data__1069->GetXaxis()->SetTitleOffset(1);
   Data__1069->GetXaxis()->SetTitleFont(42);
   Data__1069->GetYaxis()->SetLabelFont(42);
   Data__1069->GetYaxis()->SetTitleFont(42);
   Data__1069->GetZaxis()->SetLabelFont(42);
   Data__1069->GetZaxis()->SetTitleOffset(1);
   Data__1069->GetZaxis()->SetTitleFont(42);
   Data__1069->Draw("EP same");
   
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

   ci = 1374;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1374;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1070 = new TH1F("hframe_copy__1070","",1000,-1,1);
   hframe_copy__1070->SetMinimum(0.01);
   hframe_copy__1070->SetMaximum(6247.133);
   hframe_copy__1070->SetDirectory(0);
   hframe_copy__1070->SetStats(0);
   hframe_copy__1070->SetLineStyle(0);
   hframe_copy__1070->SetMarkerStyle(20);
   hframe_copy__1070->GetXaxis()->SetNdivisions(8);
   hframe_copy__1070->GetXaxis()->SetLabelFont(43);
   hframe_copy__1070->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1070->GetXaxis()->SetLabelSize(0);
   hframe_copy__1070->GetXaxis()->SetTitleSize(0);
   hframe_copy__1070->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1070->GetXaxis()->SetTitleFont(43);
   hframe_copy__1070->GetYaxis()->SetTitle("Events / 0.10");
   hframe_copy__1070->GetYaxis()->SetLabelFont(43);
   hframe_copy__1070->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1070->GetYaxis()->SetLabelSize(27);
   hframe_copy__1070->GetYaxis()->SetTitleSize(33);
   hframe_copy__1070->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1070->GetYaxis()->SetTitleFont(43);
   hframe_copy__1070->GetZaxis()->SetLabelFont(43);
   hframe_copy__1070->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1070->GetZaxis()->SetLabelSize(27);
   hframe_copy__1070->GetZaxis()->SetTitleSize(33);
   hframe_copy__1070->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1070->GetZaxis()->SetTitleFont(43);
   hframe_copy__1070->Draw("sameaxis");
   
   TH1F *hframe_copy__1071 = new TH1F("hframe_copy__1071","",1000,-1,1);
   hframe_copy__1071->SetMinimum(0.01);
   hframe_copy__1071->SetMaximum(6247.133);
   hframe_copy__1071->SetDirectory(0);
   hframe_copy__1071->SetStats(0);
   hframe_copy__1071->SetLineStyle(0);
   hframe_copy__1071->SetMarkerStyle(20);
   hframe_copy__1071->GetXaxis()->SetNdivisions(8);
   hframe_copy__1071->GetXaxis()->SetLabelFont(43);
   hframe_copy__1071->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1071->GetXaxis()->SetLabelSize(0);
   hframe_copy__1071->GetXaxis()->SetTitleSize(0);
   hframe_copy__1071->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1071->GetXaxis()->SetTitleFont(43);
   hframe_copy__1071->GetYaxis()->SetTitle("Events / 0.10");
   hframe_copy__1071->GetYaxis()->SetLabelFont(43);
   hframe_copy__1071->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1071->GetYaxis()->SetLabelSize(27);
   hframe_copy__1071->GetYaxis()->SetTitleSize(33);
   hframe_copy__1071->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1071->GetYaxis()->SetTitleFont(43);
   hframe_copy__1071->GetZaxis()->SetLabelFont(43);
   hframe_copy__1071->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1071->GetZaxis()->SetLabelSize(27);
   hframe_copy__1071->GetZaxis()->SetTitleSize(33);
   hframe_copy__1071->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1071->GetZaxis()->SetTitleFont(43);
   hframe_copy__1071->Draw("sameaxis");
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
   cosW_tH_tA_1->Modified();
   cosW_tH_tA->cd();
   cosW_tH_tA->Modified();
   cosW_tH_tA->cd();
   cosW_tH_tA->SetSelected(cosW_tH_tA);
}
