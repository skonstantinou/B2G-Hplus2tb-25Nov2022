void cosW_tH_tA()
{
//=========Macro generated from canvas: cosW_tH_tA/cosW_tH_tA
//=========  (Fri Nov 18 13:30:13 2022) by ROOT version 6.20/02
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
   0.0196848,
   0.02021982,
   0.02194298,
   0.02391648,
   0.02536932,
   0.02727434,
   0.02958046,
   0.03058589,
   0.03299859,
   0.03520995,
   0.03746777,
   0.04213212,
   0.04220518,
   0.04697556,
   0.04659947,
   0.05245168,
   0.05882839,
   0.0639562,
   0.07443145,
   0.09514783};
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
   0.0196848,
   0.02021982,
   0.02194298,
   0.02391648,
   0.02536932,
   0.02727434,
   0.02958046,
   0.03058589,
   0.03299859,
   0.03520995,
   0.03746777,
   0.04213212,
   0.04220518,
   0.04697556,
   0.04659947,
   0.05245168,
   0.05882839,
   0.0639562,
   0.07443145,
   0.09514783};
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
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMinimum(0.8858226);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMaximum(1.114177);
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
   0.0196848,
   0.02021982,
   0.02194298,
   0.02391648,
   0.02536932,
   0.02727434,
   0.02958046,
   0.03058589,
   0.03299859,
   0.03520995,
   0.03746777,
   0.04213212,
   0.04220518,
   0.04697556,
   0.04659947,
   0.05245168,
   0.05882839,
   0.0639562,
   0.07443145,
   0.09514783};
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
   0.0196848,
   0.02021982,
   0.02194298,
   0.02391648,
   0.02536932,
   0.02727434,
   0.02958046,
   0.03058589,
   0.03299859,
   0.03520995,
   0.03746777,
   0.04213212,
   0.04220518,
   0.04697556,
   0.04659947,
   0.05245168,
   0.05882839,
   0.0639562,
   0.07443145,
   0.09514783};
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
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMinimum(0.8858226);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMaximum(1.114177);
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
   1.010201,
   0.9903894,
   0.9865839,
   1.072611,
   1.046031,
   0.9926778,
   0.9754101,
   1.040204,
   0.9813824,
   1.035485,
   1.031653,
   1.018945,
   0.9234168,
   1.062822,
   0.896898,
   0.9803243,
   1.179291,
   1.103881,
   0.9004608,
   1.037946};
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
   0.02157191,
   0.02238776,
   0.02482021,
   0.02875933,
   0.0306334,
   0.03164541,
   0.03429359,
   0.03601932,
   0.03780144,
   0.04138629,
   0.04379123,
   0.04766423,
   0.04427444,
   0.05268214,
   0.05069567,
   0.0580694,
   0.07072915,
   0.07408766,
   0.06906219,
   0.09321027};
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
   0.02157191,
   0.02238776,
   0.02482021,
   0.02875933,
   0.0306334,
   0.03164541,
   0.03429359,
   0.03601932,
   0.03780144,
   0.04138629,
   0.04379123,
   0.04766423,
   0.04427444,
   0.05268214,
   0.05069567,
   0.0580694,
   0.07072915,
   0.07408766,
   0.06906219,
   0.09321027};
   grae = new TGraphAsymmErrors(20,Graph1_fx3653,Graph1_fy3653,Graph1_felx3653,Graph1_fehx3653,Graph1_fely3653,Graph1_fehy3653);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1364536493653 = new TH1F("Graph_Graph_Graph_Graph1364536493653","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_Graph1364536493653->SetMinimum(0.7895365);
   Graph_Graph_Graph_Graph1364536493653->SetMaximum(1.291882);
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
   cosW_tH_tA_1->Range(-1.405063,-2.134569,1.126582,4.593903);
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
   hframe__1067->SetMaximum(15495.11);
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
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMinimum(0.8281973);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMaximum(3481.581);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,75.83225);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,73.15518);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,67.57774);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,60.6817);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,46.36545);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,40.77994);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,40.3877);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,31.83466);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,25.9337);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,23.51145);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,20.15621);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,17.34806);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,18.56516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,11.5435);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,10.78131);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,8.161061);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,7.394856);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,7.2434);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,3.791182);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,2.882558);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,3.59116);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.970453);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.832645);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.811238);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.476018);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.347281);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.77559);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.167361);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.025545);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.941301);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.860384);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.752507);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.654455);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.461273);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.289593);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.122223);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.233456);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.069624);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.8805369);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.5733057);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(451608);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1008.972);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,984.3157);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,832.4131);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,701.9486);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,606.4763);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,521.4658);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,453.597);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,406.1396);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,348.0499);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,308.1601);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,273.6227);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,230.2655);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,204.4845);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,181.211);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,160.1222);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,134.187);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,118.781);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,99.60707);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,67.93031);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,41.83458);
   TT_stack_2_stack_2_stack_2->SetBinError(1,7.952034);
   TT_stack_2_stack_2_stack_2->SetBinError(2,7.788432);
   TT_stack_2_stack_2_stack_2->SetBinError(3,7.184203);
   TT_stack_2_stack_2_stack_2->SetBinError(4,6.588852);
   TT_stack_2_stack_2_stack_2->SetBinError(5,6.125487);
   TT_stack_2_stack_2_stack_2->SetBinError(6,5.670351);
   TT_stack_2_stack_2_stack_2->SetBinError(7,5.296066);
   TT_stack_2_stack_2_stack_2->SetBinError(8,5.025149);
   TT_stack_2_stack_2_stack_2->SetBinError(9,4.643794);
   TT_stack_2_stack_2_stack_2->SetBinError(10,4.368076);
   TT_stack_2_stack_2_stack_2->SetBinError(11,4.116693);
   TT_stack_2_stack_2_stack_2->SetBinError(12,3.76425);
   TT_stack_2_stack_2_stack_2->SetBinError(13,3.555365);
   TT_stack_2_stack_2_stack_2->SetBinError(14,3.355073);
   TT_stack_2_stack_2_stack_2->SetBinError(15,3.132372);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.866219);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.684214);
   TT_stack_2_stack_2_stack_2->SetBinError(18,2.468704);
   TT_stack_2_stack_2_stack_2->SetBinError(19,2.040437);
   TT_stack_2_stack_2_stack_2->SetBinError(20,1.600836);
   TT_stack_2_stack_2_stack_2->SetEntries(133616);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1086.051);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,918.5197);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,701.4949);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,534.2048);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,461.8481);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,429.0125);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,335.41);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,363.7914);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,312.8027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,272.8763);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,244.1928);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,200.8896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,248.0269);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,190.1883);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,178.077);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,148.3721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,109.5591);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,94.25812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,117.0707);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,74.74961);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,41.83257);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,39.07497);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,34.28235);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,30.17714);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,27.49628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,26.33017);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,23.7941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,23.90427);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,22.08943);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,20.74245);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,19.64384);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,18.43455);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,19.49131);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,17.61279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,15.90559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,14.93486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,13.54963);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,12.5776);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,13.87524);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,11.2391);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4622.139);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(1,27.64763);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(2,43.7092);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(3,43.42143);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(4,44.20646);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(5,45.48569);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(6,43.46931);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(7,41.52454);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(8,45.63512);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(9,41.75772);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(10,37.61142);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(11,34.88941);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(12,30.55105);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(13,28.15613);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(14,25.88596);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(15,21.99044);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(16,17.93005);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(17,11.66915);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(18,9.066519);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(19,5.848408);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(20,3.471065);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(1,1.698809);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(2,1.999104);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(3,2.05215);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(4,2.055846);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(5,2.026051);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(6,2.001802);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(7,1.968881);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(8,1.9591);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(9,1.920131);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(10,1.8781);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(11,1.815878);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(12,1.748911);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(13,1.656566);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(14,1.567644);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(15,1.455646);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(16,1.323033);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(17,1.151629);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(18,0.9656502);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(19,0.7759708);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(20,0.5777862);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetEntries(120993);
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
   2170.855,
   1975.99,
   1601.486,
   1296.835,
   1114.69,
   991.2582,
   829.3947,
   801.7657,
   686.7863,
   604.5479,
   537.9716,
   448.5032,
   471.0766,
   382.9427,
   348.9806,
   290.7201,
   235.7349,
   201.1086,
   188.7922,
   119.4668};
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
   42.73283,
   39.95418,
   35.14138,
   31.01573,
   28.27893,
   27.03591,
   24.53388,
   24.52271,
   22.66298,
   21.2861,
   20.1566,
   18.89639,
   19.88187,
   17.98895,
   16.26231,
   15.24876,
   13.86791,
   12.86214,
   14.05208,
   11.367};
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
   42.73283,
   39.95418,
   35.14138,
   31.01573,
   28.27893,
   27.03591,
   24.53388,
   24.52271,
   22.66298,
   21.2861,
   20.1566,
   18.89639,
   19.88187,
   17.98895,
   16.26231,
   15.24876,
   13.86791,
   12.86214,
   14.05208,
   11.367};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMinimum(97.28978);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMaximum(2424.136);
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
   Data__1069->SetBinContent(1,2193);
   Data__1069->SetBinContent(2,1957);
   Data__1069->SetBinContent(3,1580);
   Data__1069->SetBinContent(4,1391);
   Data__1069->SetBinContent(5,1166);
   Data__1069->SetBinContent(6,984);
   Data__1069->SetBinContent(7,809);
   Data__1069->SetBinContent(8,834);
   Data__1069->SetBinContent(9,674);
   Data__1069->SetBinContent(10,626);
   Data__1069->SetBinContent(11,555);
   Data__1069->SetBinContent(12,457);
   Data__1069->SetBinContent(13,435);
   Data__1069->SetBinContent(14,407);
   Data__1069->SetBinContent(15,313);
   Data__1069->SetBinContent(16,285);
   Data__1069->SetBinContent(17,278);
   Data__1069->SetBinContent(18,222);
   Data__1069->SetBinContent(19,170);
   Data__1069->SetBinContent(20,124);
   Data__1069->SetBinError(1,46.82948);
   Data__1069->SetBinError(2,44.23799);
   Data__1069->SetBinError(3,39.74921);
   Data__1069->SetBinError(4,37.29611);
   Data__1069->SetBinError(5,34.14674);
   Data__1069->SetBinError(6,31.36877);
   Data__1069->SetBinError(7,28.44293);
   Data__1069->SetBinError(8,28.87906);
   Data__1069->SetBinError(9,25.96151);
   Data__1069->SetBinError(10,25.01999);
   Data__1069->SetBinError(11,23.55844);
   Data__1069->SetBinError(12,21.37756);
   Data__1069->SetBinError(13,20.85665);
   Data__1069->SetBinError(14,20.17424);
   Data__1069->SetBinError(15,17.69181);
   Data__1069->SetBinError(16,16.88194);
   Data__1069->SetBinError(17,16.67333);
   Data__1069->SetBinError(18,14.89966);
   Data__1069->SetBinError(19,13.0384);
   Data__1069->SetBinError(20,11.13553);
   Data__1069->SetEntries(15464);
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
   hframe_copy__1070->SetMaximum(15495.11);
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
   hframe_copy__1071->SetMaximum(15495.11);
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
