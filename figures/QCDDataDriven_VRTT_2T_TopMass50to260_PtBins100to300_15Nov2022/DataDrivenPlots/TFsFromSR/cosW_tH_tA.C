void cosW_tH_tA()
{
//=========Macro generated from canvas: cosW_tH_tA/cosW_tH_tA
//=========  (Fri Nov 18 13:33:13 2022) by ROOT version 6.20/02
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
   0.01248449,
   0.009351667,
   0.009111255,
   0.009138756,
   0.009695644,
   0.01018743,
   0.01095026,
   0.01169514,
   0.01243138,
   0.01336368,
   0.01429317,
   0.01523958,
   0.01655024,
   0.01760004,
   0.01935034,
   0.02174527,
   0.02486576,
   0.02933857,
   0.03783107,
   0.05756496};
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
   0.01248449,
   0.009351667,
   0.009111255,
   0.009138756,
   0.009695644,
   0.01018743,
   0.01095026,
   0.01169514,
   0.01243138,
   0.01336368,
   0.01429317,
   0.01523958,
   0.01655024,
   0.01760004,
   0.01935034,
   0.02174527,
   0.02486576,
   0.02933857,
   0.03783107,
   0.05756496};
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
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMinimum(0.930922);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMaximum(1.069078);
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
   0.01248449,
   0.009351667,
   0.009111255,
   0.009138756,
   0.009695644,
   0.01018743,
   0.01095026,
   0.01169514,
   0.01243138,
   0.01336368,
   0.01429317,
   0.01523958,
   0.01655024,
   0.01760004,
   0.01935034,
   0.02174527,
   0.02486576,
   0.02933857,
   0.03783107,
   0.05756496};
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
   0.01248449,
   0.009351667,
   0.009111255,
   0.009138756,
   0.009695644,
   0.01018743,
   0.01095026,
   0.01169514,
   0.01243138,
   0.01336368,
   0.01429317,
   0.01523958,
   0.01655024,
   0.01760004,
   0.01935034,
   0.02174527,
   0.02486576,
   0.02933857,
   0.03783107,
   0.05756496};
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
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMinimum(0.930922);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMaximum(1.069078);
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
   0.9497049,
   0.9442603,
   0.9293124,
   0.9082116,
   0.9558821,
   0.9209925,
   0.9126179,
   0.9140546,
   0.9786279,
   0.9491506,
   0.9590915,
   1.018795,
   0.9783059,
   0.9769693,
   0.9145206,
   0.9898989,
   0.89447,
   1.049079,
   1.027826,
   0.9047041};
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
   0.01696984,
   0.01392842,
   0.01374686,
   0.01410328,
   0.01552485,
   0.01585094,
   0.01684554,
   0.01799195,
   0.0199099,
   0.0207171,
   0.02212568,
   0.02385473,
   0.02468235,
   0.02648206,
   0.02703837,
   0.03163731,
   0.03188441,
   0.04068153,
   0.04894412,
   0.06413278};
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
   0.01696984,
   0.01392842,
   0.01374686,
   0.01410328,
   0.01552485,
   0.01585094,
   0.01684554,
   0.01799195,
   0.0199099,
   0.0207171,
   0.02212568,
   0.02385473,
   0.02468235,
   0.02648206,
   0.02703837,
   0.03163731,
   0.03188441,
   0.04068153,
   0.04894412,
   0.06413278};
   grae = new TGraphAsymmErrors(20,Graph1_fx3653,Graph1_fy3653,Graph1_felx3653,Graph1_fehx3653,Graph1_fely3653,Graph1_fehy3653);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1364536493653 = new TH1F("Graph_Graph_Graph_Graph1364536493653","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_Graph1364536493653->SetMinimum(0.8156525);
   Graph_Graph_Graph_Graph1364536493653->SetMaximum(1.114679);
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
   cosW_tH_tA_1->Range(-1.405063,-2.142191,1.126582,4.967365);
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
   hframe__1067->SetMaximum(34736.94);
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
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMinimum(1.343692);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMaximum(8018.14);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,70.61852);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,128.7626);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,126.5352);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,110.4433);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,102.9406);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,92.80208);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,77.92186);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,70.69535);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,59.44508);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,52.70392);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,55.00713);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,46.8318);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,39.87346);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,39.52027);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,29.98014);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,27.54551);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,21.65667);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,13.59534);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,9.854555);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,4.802082);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,3.944562);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,5.994224);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,5.690251);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,4.689866);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,4.634262);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,4.25853);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,3.995266);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,3.76618);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,3.595815);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,3.587939);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,3.554462);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,3.008939);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.899859);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,3.492917);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,2.536791);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.362899);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,2.934601);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.665052);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.342496);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.9557872);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2523.968);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4095.631);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4129.334);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3832.997);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3377.995);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3026.834);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2660.128);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2329.601);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2064.616);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1831.84);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1605.682);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1439.197);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1269.373);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1103.527);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,952.567);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,794.5677);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,630.813);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,471.617);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,308.7383);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,139.6986);
   TT_stack_2_stack_2_stack_2->SetBinError(1,11.86103);
   TT_stack_2_stack_2_stack_2->SetBinError(2,15.06845);
   TT_stack_2_stack_2_stack_2->SetBinError(3,15.09301);
   TT_stack_2_stack_2_stack_2->SetBinError(4,14.53934);
   TT_stack_2_stack_2_stack_2->SetBinError(5,13.63567);
   TT_stack_2_stack_2_stack_2->SetBinError(6,12.90354);
   TT_stack_2_stack_2_stack_2->SetBinError(7,12.08187);
   TT_stack_2_stack_2_stack_2->SetBinError(8,11.31116);
   TT_stack_2_stack_2_stack_2->SetBinError(9,10.64736);
   TT_stack_2_stack_2_stack_2->SetBinError(10,10.03027);
   TT_stack_2_stack_2_stack_2->SetBinError(11,9.39251);
   TT_stack_2_stack_2_stack_2->SetBinError(12,8.885372);
   TT_stack_2_stack_2_stack_2->SetBinError(13,8.34951);
   TT_stack_2_stack_2_stack_2->SetBinError(14,7.789256);
   TT_stack_2_stack_2_stack_2->SetBinError(15,7.222883);
   TT_stack_2_stack_2_stack_2->SetBinError(16,6.588312);
   TT_stack_2_stack_2_stack_2->SetBinError(17,5.872601);
   TT_stack_2_stack_2_stack_2->SetBinError(18,5.082308);
   TT_stack_2_stack_2_stack_2->SetBinError(19,4.105313);
   TT_stack_2_stack_2_stack_2->SetBinError(20,2.745404);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,703.2802);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,642.9083);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,661.7446);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,622.6768);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,485.0343);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,545.9745);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,477.9733);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,423.3867);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,344.7019);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,326.9068);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,298.4565);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,304.3208);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,296.5912);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,250.0363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,268.3815);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,166.8766);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,227.3809);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,148.6772);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,110.4679);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,75.4607);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,39.22887);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,42.5305);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,41.80152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,38.83157);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,35.65385);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,34.78326);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,32.83676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,30.79636);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,28.55849);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,27.56643);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,26.13964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,25.62075);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,25.06418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,22.98424);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,22.96344);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,20.33501);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,20.86994);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,17.81183);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,15.64661);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,12.32385);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3287.287);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(1,3.437984);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(2,8.96773);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(3,12.90423);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(4,9.688923);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(5,9.823582);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(6,7.17438);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(7,7.42825);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(8,7.23058);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(9,7.386688);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(10,7.174969);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(11,6.241486);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(12,4.376049);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(13,3.499694);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(14,3.714508);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(15,3.154967);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(16,1.516726);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(17,1.145675);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(18,1.034434);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(19,0.5268641);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(20,0.2574688);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(1,0.6711446);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(2,1.060313);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(3,1.146155);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(4,1.121027);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(5,1.054553);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(6,1.015072);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(7,0.9989645);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(8,0.989181);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(9,0.9093147);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(10,0.9044658);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(11,0.8611256);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(12,0.8253692);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(13,0.7272546);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(14,0.693029);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(15,0.6310201);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(16,0.570794);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(17,0.4578522);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(18,0.3727292);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(19,0.2566754);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(20,0.1547916);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetEntries(19326);
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
   3297.866,
   4867.302,
   4917.614,
   4566.117,
   3965.97,
   3665.611,
   3216.023,
   2823.683,
   2468.763,
   2211.451,
   1959.146,
   1790.35,
   1605.837,
   1393.084,
   1250.929,
   988.9899,
   879.8506,
   633.8895,
   429.0608,
   219.9614};
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
   41.17217,
   45.51739,
   44.80564,
   41.72862,
   38.45263,
   37.34316,
   35.21628,
   33.02336,
   30.69012,
   29.55313,
   28.0024,
   27.28417,
   26.57699,
   24.51833,
   24.20589,
   21.50585,
   21.87816,
   18.59741,
   16.23183,
   12.66207};
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
   41.17217,
   45.51739,
   44.80564,
   41.72862,
   38.45263,
   37.34316,
   35.21628,
   33.02336,
   30.69012,
   29.55313,
   28.0024,
   27.28417,
   26.57699,
   24.51833,
   24.20589,
   21.50585,
   21.87816,
   18.59741,
   16.23183,
   12.66207};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMinimum(186.5694);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMaximum(5437.932);
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
   Data__1069->SetBinContent(1,3132);
   Data__1069->SetBinContent(2,4596);
   Data__1069->SetBinContent(3,4570);
   Data__1069->SetBinContent(4,4147);
   Data__1069->SetBinContent(5,3791);
   Data__1069->SetBinContent(6,3376);
   Data__1069->SetBinContent(7,2935);
   Data__1069->SetBinContent(8,2581);
   Data__1069->SetBinContent(9,2416);
   Data__1069->SetBinContent(10,2099);
   Data__1069->SetBinContent(11,1879);
   Data__1069->SetBinContent(12,1824);
   Data__1069->SetBinContent(13,1571);
   Data__1069->SetBinContent(14,1361);
   Data__1069->SetBinContent(15,1144);
   Data__1069->SetBinContent(16,979);
   Data__1069->SetBinContent(17,787);
   Data__1069->SetBinContent(18,665);
   Data__1069->SetBinContent(19,441);
   Data__1069->SetBinContent(20,199);
   Data__1069->SetBinError(1,55.96427);
   Data__1069->SetBinError(2,67.79381);
   Data__1069->SetBinError(3,67.60178);
   Data__1069->SetBinError(4,64.3972);
   Data__1069->SetBinError(5,61.5711);
   Data__1069->SetBinError(6,58.10336);
   Data__1069->SetBinError(7,54.17564);
   Data__1069->SetBinError(8,50.80354);
   Data__1069->SetBinError(9,49.15282);
   Data__1069->SetBinError(10,45.81484);
   Data__1069->SetBinError(11,43.34743);
   Data__1069->SetBinError(12,42.70831);
   Data__1069->SetBinError(13,39.63584);
   Data__1069->SetBinError(14,36.89173);
   Data__1069->SetBinError(15,33.82307);
   Data__1069->SetBinError(16,31.28898);
   Data__1069->SetBinError(17,28.05352);
   Data__1069->SetBinError(18,25.78759);
   Data__1069->SetBinError(19,21);
   Data__1069->SetBinError(20,14.10674);
   Data__1069->SetEntries(44497);
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
   hframe_copy__1070->SetMaximum(34736.94);
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
   hframe_copy__1071->SetMaximum(34736.94);
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
