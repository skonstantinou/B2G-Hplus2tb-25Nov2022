void cosW_tH_tA()
{
//=========Macro generated from canvas: cosW_tH_tA/cosW_tH_tA
//=========  (Fri Nov 18 13:29:35 2022) by ROOT version 6.20/02
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
   0.03105646,
   0.02576396,
   0.02410582,
   0.02408141,
   0.02413248,
   0.0240304,
   0.02463164,
   0.02543341,
   0.02524286,
   0.02547318,
   0.02667757,
   0.0273137,
   0.0275288,
   0.02866536,
   0.02907547,
   0.03156047,
   0.0323745,
   0.03501641,
   0.04135595,
   0.05288851};
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
   0.03105646,
   0.02576396,
   0.02410582,
   0.02408141,
   0.02413248,
   0.0240304,
   0.02463164,
   0.02543341,
   0.02524286,
   0.02547318,
   0.02667757,
   0.0273137,
   0.0275288,
   0.02866536,
   0.02907547,
   0.03156047,
   0.0323745,
   0.03501641,
   0.04135595,
   0.05288851};
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
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMinimum(0.9365338);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMaximum(1.063466);
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
   0.03105646,
   0.02576396,
   0.02410582,
   0.02408141,
   0.02413248,
   0.0240304,
   0.02463164,
   0.02543341,
   0.02524286,
   0.02547318,
   0.02667757,
   0.0273137,
   0.0275288,
   0.02866536,
   0.02907547,
   0.03156047,
   0.0323745,
   0.03501641,
   0.04135595,
   0.05288851};
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
   0.03105646,
   0.02576396,
   0.02410582,
   0.02408141,
   0.02413248,
   0.0240304,
   0.02463164,
   0.02543341,
   0.02524286,
   0.02547318,
   0.02667757,
   0.0273137,
   0.0275288,
   0.02866536,
   0.02907547,
   0.03156047,
   0.0323745,
   0.03501641,
   0.04135595,
   0.05288851};
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
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMinimum(0.9365338);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMaximum(1.063466);
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
   0.9058433,
   0.9686435,
   0.9718697,
   0.927575,
   0.9382614,
   1.01404,
   0.9674375,
   1.020606,
   1.031858,
   1.005813,
   0.9847047,
   1.009087,
   0.9104614,
   0.9745757,
   0.8780711,
   1.042404,
   1.068263,
   0.974334,
   1.114607,
   1.082208};
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
   0.03258092,
   0.02950221,
   0.02846157,
   0.02822521,
   0.0289416,
   0.03043644,
   0.03041114,
   0.03216202,
   0.03242017,
   0.03204788,
   0.03327009,
   0.03483755,
   0.03342409,
   0.03568175,
   0.03405014,
   0.04012214,
   0.04286791,
   0.04260465,
   0.05266023,
   0.0656185};
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
   0.03258092,
   0.02950221,
   0.02846157,
   0.02822521,
   0.0289416,
   0.03043644,
   0.03041114,
   0.03216202,
   0.03242017,
   0.03204788,
   0.03327009,
   0.03483755,
   0.03342409,
   0.03568175,
   0.03405014,
   0.04012214,
   0.04286791,
   0.04260465,
   0.05266023,
   0.0656185};
   grae = new TGraphAsymmErrors(20,Graph1_fx3653,Graph1_fy3653,Graph1_felx3653,Graph1_fehx3653,Graph1_fely3653,Graph1_fehy3653);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1364536493653 = new TH1F("Graph_Graph_Graph_Graph1364536493653","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_Graph1364536493653->SetMinimum(0.8116963);
   Graph_Graph_Graph_Graph1364536493653->SetMaximum(1.199592);
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
   cosW_tH_tA_1->Range(-1.405063,-2.129012,1.126582,4.321568);
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
   hframe__1067->SetMaximum(8600.691);
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
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMinimum(1.535152);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMaximum(1808.546);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,16.81607);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,25.85378);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,30.54248);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,39.16824);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,28.90543);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,29.24705);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,28.56273);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,28.67036);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,27.16596);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,23.30379);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,23.17614);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,23.12102);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,19.12486);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,19.6743);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,17.80806);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,16.44596);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,14.5916);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,9.984275);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,11.2146);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,4.942863);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,1.928372);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.165467);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.990002);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,3.124024);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.376391);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.389427);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.358255);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,3.761664);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.203563);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.122489);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.541736);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.707429);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.883626);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.88321);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.790971);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.787351);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.566559);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.456015);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,2.570398);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,1.073272);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,404.324);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,625.9135);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,713.9077);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,722.1882);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,722.1827);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,699.5085);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,677.3777);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,648.7213);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,620.5721);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,590.7244);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,559.7397);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,531.5054);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,510.9372);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,476.067);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,445.8915);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,399.6978);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,373.5731);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,313.4753);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,230.8254);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,138.5743);
   TT_stack_2_stack_2_stack_2->SetBinError(1,4.836225);
   TT_stack_2_stack_2_stack_2->SetBinError(2,6.04196);
   TT_stack_2_stack_2_stack_2->SetBinError(3,6.458429);
   TT_stack_2_stack_2_stack_2->SetBinError(4,6.51724);
   TT_stack_2_stack_2_stack_2->SetBinError(5,6.495316);
   TT_stack_2_stack_2_stack_2->SetBinError(6,6.410781);
   TT_stack_2_stack_2_stack_2->SetBinError(7,6.318099);
   TT_stack_2_stack_2_stack_2->SetBinError(8,6.177471);
   TT_stack_2_stack_2_stack_2->SetBinError(9,6.06206);
   TT_stack_2_stack_2_stack_2->SetBinError(10,5.901181);
   TT_stack_2_stack_2_stack_2->SetBinError(11,5.753784);
   TT_stack_2_stack_2_stack_2->SetBinError(12,5.604355);
   TT_stack_2_stack_2_stack_2->SetBinError(13,5.488496);
   TT_stack_2_stack_2_stack_2->SetBinError(14,5.305812);
   TT_stack_2_stack_2_stack_2->SetBinError(15,5.145307);
   TT_stack_2_stack_2_stack_2->SetBinError(16,4.860182);
   TT_stack_2_stack_2_stack_2->SetBinError(17,4.705634);
   TT_stack_2_stack_2_stack_2->SetBinError(18,4.306465);
   TT_stack_2_stack_2_stack_2->SetBinError(19,3.697857);
   TT_stack_2_stack_2_stack_2->SetBinError(20,2.854624);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,432.2085);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,461.1292);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,455.2991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,402.9699);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,369.0687);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,365.8752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,340.1219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,309.2771);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,333.9859);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,365.2788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,306.6909);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,276.8182);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,284.9093);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,269.72);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,293.6423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,231.398);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,193.1529);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,213.3174);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,159.8954);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,107.8208);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,25.98553);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,27.94502);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,28.03157);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,27.09115);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,26.13238);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,25.39911);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,24.86803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,24.02946);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,23.92738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,24.14492);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,22.88378);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,21.84027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,21.67178);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,21.20762);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,21.33546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,19.76977);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,18.15462);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,18.23798);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,16.00074);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,12.93832);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(1,0.7755293);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(2,1.367115);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(3,2.374752);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(4,2.153243);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(5,2.861327);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(6,2.101754);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(7,2.507885);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(8,2.235707);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(9,2.369405);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(10,1.97023);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(11,1.532928);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(12,1.960081);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(13,1.977204);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(14,1.879092);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(15,1.148408);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(16,1.027239);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(17,1.04104);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(18,0.9708044);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(19,0.2226565);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(20,0.2417645);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(1,0.265161);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(2,0.4399366);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(3,0.5607573);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(4,0.5645425);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(5,0.5923875);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(6,0.560593);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(7,0.554253);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(8,0.5297213);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(9,0.5505339);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(10,0.5059458);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(11,0.5149622);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(12,0.5185091);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(13,0.4809225);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(14,0.4284579);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(15,0.4330634);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(16,0.3899268);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(17,0.3447665);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(18,0.2920366);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(19,0.2108039);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(20,0.1883633);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetEntries(5945);
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
   853.3485,
   1112.896,
   1199.749,
   1164.326,
   1120.157,
   1094.631,
   1046.062,
   986.6688,
   981.724,
   979.307,
   889.6068,
   831.4446,
   814.9714,
   765.4613,
   757.3419,
   647.5417,
   581.3177,
   536.7769,
   401.9354,
   251.338};
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
   26.50199,
   28.67262,
   28.92094,
   28.03862,
   27.03216,
   26.30442,
   25.76623,
   25.09435,
   24.78152,
   24.94606,
   23.73255,
   22.70983,
   22.43518,
   21.94222,
   22.02007,
   20.43672,
   18.81987,
   18.796,
   16.62242,
   13.29289};
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
   26.50199,
   28.67262,
   28.92094,
   28.03862,
   27.03216,
   26.30442,
   25.76623,
   25.09435,
   24.78152,
   24.94606,
   23.73255,
   22.70983,
   22.43518,
   21.94222,
   22.02007,
   20.43672,
   18.81987,
   18.796,
   16.62242,
   13.29289};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMinimum(138.9826);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMaximum(1327.733);
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
   Data__1069->SetBinContent(1,773);
   Data__1069->SetBinContent(2,1078);
   Data__1069->SetBinContent(3,1166);
   Data__1069->SetBinContent(4,1080);
   Data__1069->SetBinContent(5,1051);
   Data__1069->SetBinContent(6,1110);
   Data__1069->SetBinContent(7,1012);
   Data__1069->SetBinContent(8,1007);
   Data__1069->SetBinContent(9,1013);
   Data__1069->SetBinContent(10,985);
   Data__1069->SetBinContent(11,876);
   Data__1069->SetBinContent(12,839);
   Data__1069->SetBinContent(13,742);
   Data__1069->SetBinContent(14,746);
   Data__1069->SetBinContent(15,665);
   Data__1069->SetBinContent(16,675);
   Data__1069->SetBinContent(17,621);
   Data__1069->SetBinContent(18,523);
   Data__1069->SetBinContent(19,448);
   Data__1069->SetBinContent(20,272);
   Data__1069->SetBinError(1,27.80288);
   Data__1069->SetBinError(2,32.83291);
   Data__1069->SetBinError(3,34.14674);
   Data__1069->SetBinError(4,32.86335);
   Data__1069->SetBinError(5,32.41913);
   Data__1069->SetBinError(6,33.31666);
   Data__1069->SetBinError(7,31.81195);
   Data__1069->SetBinError(8,31.73326);
   Data__1069->SetBinError(9,31.82766);
   Data__1069->SetBinError(10,31.38471);
   Data__1069->SetBinError(11,29.5973);
   Data__1069->SetBinError(12,28.9655);
   Data__1069->SetBinError(13,27.23968);
   Data__1069->SetBinError(14,27.313);
   Data__1069->SetBinError(15,25.78759);
   Data__1069->SetBinError(16,25.98076);
   Data__1069->SetBinError(17,24.91987);
   Data__1069->SetBinError(18,22.86919);
   Data__1069->SetBinError(19,21.16601);
   Data__1069->SetBinError(20,16.49242);
   Data__1069->SetEntries(16686);
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
   hframe_copy__1070->SetMaximum(8600.691);
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
   hframe_copy__1071->SetMaximum(8600.691);
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
