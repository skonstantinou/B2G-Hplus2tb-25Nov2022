void MVAOutputM2500()
{
//=========Macro generated from canvas: MVAOutputM2500/MVAOutputM2500
//=========  (Fri Nov 18 13:27:51 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM2500 = new TCanvas("MVAOutputM2500", "MVAOutputM2500",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM2500->SetHighLightColor(2);
   MVAOutputM2500->Range(0,0,1,1);
   MVAOutputM2500->SetFillColor(0);
   MVAOutputM2500->SetBorderMode(0);
   MVAOutputM2500->SetBorderSize(2);
   MVAOutputM2500->SetTickx(1);
   MVAOutputM2500->SetTicky(1);
   MVAOutputM2500->SetLeftMargin(0.16);
   MVAOutputM2500->SetRightMargin(0.05);
   MVAOutputM2500->SetTopMargin(0.06);
   MVAOutputM2500->SetBottomMargin(0.13);
   MVAOutputM2500->SetFrameFillStyle(0);
   MVAOutputM2500->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM2500_2
   TPad *MVAOutputM2500_2 = new TPad("MVAOutputM2500_2", "MVAOutputM2500_2",0,0,1,0.304);
   MVAOutputM2500_2->Draw();
   MVAOutputM2500_2->cd();
   MVAOutputM2500_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM2500_2->SetFillColor(0);
   MVAOutputM2500_2->SetFillStyle(4000);
   MVAOutputM2500_2->SetBorderMode(0);
   MVAOutputM2500_2->SetBorderSize(2);
   MVAOutputM2500_2->SetTickx(1);
   MVAOutputM2500_2->SetTicky(1);
   MVAOutputM2500_2->SetLeftMargin(0.16);
   MVAOutputM2500_2->SetRightMargin(0.05);
   MVAOutputM2500_2->SetTopMargin(0);
   MVAOutputM2500_2->SetBottomMargin(0.3421053);
   MVAOutputM2500_2->SetFrameFillStyle(0);
   MVAOutputM2500_2->SetFrameBorderMode(0);
   MVAOutputM2500_2->SetFrameFillStyle(0);
   MVAOutputM2500_2->SetFrameBorderMode(0);
   
   TH1F *hframe__330 = new TH1F("hframe__330","",1000,0,1.01);
   hframe__330->SetMinimum(0.3);
   hframe__330->SetMaximum(1.7);
   hframe__330->SetDirectory(0);
   hframe__330->SetStats(0);
   hframe__330->SetLineStyle(0);
   hframe__330->SetMarkerStyle(20);
   hframe__330->GetXaxis()->SetTitle("DNN Output");
   hframe__330->GetXaxis()->SetLabelFont(43);
   hframe__330->GetXaxis()->SetLabelOffset(0.007);
   hframe__330->GetXaxis()->SetLabelSize(27);
   hframe__330->GetXaxis()->SetTitleSize(33);
   hframe__330->GetXaxis()->SetTitleOffset(2.960526);
   hframe__330->GetXaxis()->SetTitleFont(43);
   hframe__330->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__330->GetYaxis()->SetNdivisions(505);
   hframe__330->GetYaxis()->SetLabelFont(43);
   hframe__330->GetYaxis()->SetLabelOffset(0.007);
   hframe__330->GetYaxis()->SetLabelSize(21);
   hframe__330->GetYaxis()->SetTitleSize(33);
   hframe__330->GetYaxis()->SetTitleOffset(1.5625);
   hframe__330->GetYaxis()->SetTitleFont(43);
   hframe__330->GetZaxis()->SetLabelFont(43);
   hframe__330->GetZaxis()->SetLabelOffset(0.007);
   hframe__330->GetZaxis()->SetLabelSize(27);
   hframe__330->GetZaxis()->SetTitleSize(33);
   hframe__330->GetZaxis()->SetTitleOffset(1);
   hframe__330->GetZaxis()->SetTitleFont(43);
   hframe__330->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3189[20] = {
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
   Double_t BackgroundStatSystError_fy3189[20] = {
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
   Double_t BackgroundStatSystError_felx3189[20] = {
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
   Double_t BackgroundStatSystError_fely3189[20] = {
   0.02306846,
   0.04129447,
   0.04998825,
   0.0566491,
   0.06215721,
   0.07620901,
   0.07912822,
   0.08087688,
   0.09814266,
   0.09799701,
   0.1061635,
   0.1197029,
   0.1075081,
   0.1452714,
   0.1317331,
   0.1780608,
   0.184018,
   0.1494496,
   0.1799154,
   0.3149253};
   Double_t BackgroundStatSystError_fehx3189[20] = {
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
   Double_t BackgroundStatSystError_fehy3189[20] = {
   0.02306846,
   0.04129447,
   0.04998825,
   0.0566491,
   0.06215721,
   0.07620901,
   0.07912822,
   0.08087688,
   0.09814266,
   0.09799701,
   0.1061635,
   0.1197029,
   0.1075081,
   0.1452714,
   0.1317331,
   0.1780608,
   0.184018,
   0.1494496,
   0.1799154,
   0.3149253};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3189,BackgroundStatSystError_fy3189,BackgroundStatSystError_felx3189,BackgroundStatSystError_fehx3189,BackgroundStatSystError_fely3189,BackgroundStatSystError_fehy3189);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1257;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError318131853189 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError318131853189","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMinimum(0.6220897);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMaximum(1.37791);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError318131853189);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3190[20] = {
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
   Double_t BackgroundStatError_fy3190[20] = {
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
   Double_t BackgroundStatError_felx3190[20] = {
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
   Double_t BackgroundStatError_fely3190[20] = {
   0.02306846,
   0.04129447,
   0.04998825,
   0.0566491,
   0.06215721,
   0.07620901,
   0.07912822,
   0.08087688,
   0.09814266,
   0.09799701,
   0.1061635,
   0.1197029,
   0.1075081,
   0.1452714,
   0.1317331,
   0.1780608,
   0.184018,
   0.1494496,
   0.1799154,
   0.3149253};
   Double_t BackgroundStatError_fehx3190[20] = {
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
   Double_t BackgroundStatError_fehy3190[20] = {
   0.02306846,
   0.04129447,
   0.04998825,
   0.0566491,
   0.06215721,
   0.07620901,
   0.07912822,
   0.08087688,
   0.09814266,
   0.09799701,
   0.1061635,
   0.1197029,
   0.1075081,
   0.1452714,
   0.1317331,
   0.1780608,
   0.184018,
   0.1494496,
   0.1799154,
   0.3149253};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3190,BackgroundStatError_fy3190,BackgroundStatError_felx3190,BackgroundStatError_fehx3190,BackgroundStatError_fely3190,BackgroundStatError_fehy3190);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1256;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError318231863190 = new TH1F("Graph_Graph_Graph_BackgroundStatError318231863190","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMinimum(0.6220897);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMaximum(1.37791);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError318231863190->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError318231863190);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx48[2] = {
   0,
   1.01};
   Double_t Graph0_fy48[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx48,Graph0_fy48);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0464748 = new TH1F("Graph_Graph_Graph_Graph0464748","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0464748->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0464748->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0464748->SetDirectory(0);
   Graph_Graph_Graph_Graph0464748->SetStats(0);
   Graph_Graph_Graph_Graph0464748->SetLineStyle(0);
   Graph_Graph_Graph_Graph0464748->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0464748->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0464748->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0464748->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0464748);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3191[20] = {
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
   Double_t Graph1_fy3191[20] = {
   0.9161434,
   1.028482,
   1.174248,
   1.085077,
   0.9622203,
   1.360595,
   1.012087,
   0.9718478,
   1.086174,
   0.9674304,
   1.106356,
   1.107219,
   1.027904,
   1.216356,
   0.9879895,
   1.595559,
   1.464799,
   0.9280527,
   1.198843,
   1.300515};
   Double_t Graph1_felx3191[20] = {
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
   Double_t Graph1_fely3191[20] = {
   0.01616752,
   0.03095366,
   0.04001827,
   0.04361293,
   0.04506009,
   0.06546168,
   0.05862862,
   0.05839268,
   0.07680412,
   0.07151451,
   0.08246291,
   0.09324466,
   0.08177565,
   0.1175896,
   0.09596203,
   0.1663486,
   0.1588798,
   0.1071623,
   0.1432891,
   0.2601029};
   Double_t Graph1_fehx3191[20] = {
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
   Double_t Graph1_fehy3191[20] = {
   0.01616752,
   0.03095366,
   0.04001827,
   0.04361293,
   0.04506009,
   0.06546168,
   0.05862862,
   0.05839268,
   0.07680412,
   0.07151451,
   0.08246291,
   0.09324466,
   0.08177565,
   0.1175896,
   0.09596203,
   0.1663486,
   0.1588798,
   0.1071623,
   0.1432891,
   0.2601029};
   grae = new TGraphAsymmErrors(20,Graph1_fx3191,Graph1_fy3191,Graph1_felx3191,Graph1_fehx3191,Graph1_fely3191,Graph1_fehy3191);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1318331873191 = new TH1F("Graph_Graph_Graph_Graph1318331873191","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1318331873191->SetMinimum(0.7267887);
   Graph_Graph_Graph_Graph1318331873191->SetMaximum(1.85601);
   Graph_Graph_Graph_Graph1318331873191->SetDirectory(0);
   Graph_Graph_Graph_Graph1318331873191->SetStats(0);
   Graph_Graph_Graph_Graph1318331873191->SetLineStyle(0);
   Graph_Graph_Graph_Graph1318331873191->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1318331873191->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1318331873191->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1318331873191->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1318331873191);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__331 = new TH1F("hframe_copy__331","",1000,0,1.01);
   hframe_copy__331->SetMinimum(0.3);
   hframe_copy__331->SetMaximum(1.7);
   hframe_copy__331->SetDirectory(0);
   hframe_copy__331->SetStats(0);
   hframe_copy__331->SetLineStyle(0);
   hframe_copy__331->SetMarkerStyle(20);
   hframe_copy__331->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__331->GetXaxis()->SetLabelFont(43);
   hframe_copy__331->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__331->GetXaxis()->SetLabelSize(27);
   hframe_copy__331->GetXaxis()->SetTitleSize(33);
   hframe_copy__331->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__331->GetXaxis()->SetTitleFont(43);
   hframe_copy__331->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__331->GetYaxis()->SetNdivisions(505);
   hframe_copy__331->GetYaxis()->SetLabelFont(43);
   hframe_copy__331->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__331->GetYaxis()->SetLabelSize(21);
   hframe_copy__331->GetYaxis()->SetTitleSize(33);
   hframe_copy__331->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__331->GetYaxis()->SetTitleFont(43);
   hframe_copy__331->GetZaxis()->SetLabelFont(43);
   hframe_copy__331->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__331->GetZaxis()->SetLabelSize(27);
   hframe_copy__331->GetZaxis()->SetTitleSize(33);
   hframe_copy__331->GetZaxis()->SetTitleOffset(1);
   hframe_copy__331->GetZaxis()->SetTitleFont(43);
   hframe_copy__331->Draw("sameaxis");
   MVAOutputM2500_2->Modified();
   MVAOutputM2500->cd();
  
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
   MVAOutputM2500->cd();
  
// ------------>Primitives in pad: MVAOutputM2500_1
   TPad *MVAOutputM2500_1 = new TPad("MVAOutputM2500_1", "MVAOutputM2500_1",0,0.2897959,1,1);
   MVAOutputM2500_1->Draw();
   MVAOutputM2500_1->cd();
   MVAOutputM2500_1->Range(-0.204557,-2.167407,1.073924,6.20293);
   MVAOutputM2500_1->SetFillColor(0);
   MVAOutputM2500_1->SetFillStyle(4000);
   MVAOutputM2500_1->SetBorderMode(0);
   MVAOutputM2500_1->SetBorderSize(2);
   MVAOutputM2500_1->SetLogy();
   MVAOutputM2500_1->SetTickx(1);
   MVAOutputM2500_1->SetTicky(1);
   MVAOutputM2500_1->SetLeftMargin(0.16);
   MVAOutputM2500_1->SetRightMargin(0.05);
   MVAOutputM2500_1->SetTopMargin(0.06);
   MVAOutputM2500_1->SetBottomMargin(0.02);
   MVAOutputM2500_1->SetFrameFillStyle(0);
   MVAOutputM2500_1->SetFrameBorderMode(0);
   MVAOutputM2500_1->SetFrameFillStyle(0);
   MVAOutputM2500_1->SetFrameBorderMode(0);
   
   TH1F *hframe__332 = new TH1F("hframe__332","",1000,0,1.01);
   hframe__332->SetMinimum(0.01);
   hframe__332->SetMaximum(502006.8);
   hframe__332->SetDirectory(0);
   hframe__332->SetStats(0);
   hframe__332->SetLineStyle(0);
   hframe__332->SetMarkerStyle(20);
   hframe__332->GetXaxis()->SetLabelFont(43);
   hframe__332->GetXaxis()->SetLabelOffset(0.007);
   hframe__332->GetXaxis()->SetLabelSize(0);
   hframe__332->GetXaxis()->SetTitleSize(0);
   hframe__332->GetXaxis()->SetTitleOffset(0.9);
   hframe__332->GetXaxis()->SetTitleFont(43);
   hframe__332->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__332->GetYaxis()->SetLabelFont(43);
   hframe__332->GetYaxis()->SetLabelOffset(0.007);
   hframe__332->GetYaxis()->SetLabelSize(27);
   hframe__332->GetYaxis()->SetTitleSize(33);
   hframe__332->GetYaxis()->SetTitleOffset(1.5625);
   hframe__332->GetYaxis()->SetTitleFont(43);
   hframe__332->GetZaxis()->SetLabelFont(43);
   hframe__332->GetZaxis()->SetLabelOffset(0.007);
   hframe__332->GetZaxis()->SetLabelSize(27);
   hframe__332->GetZaxis()->SetTitleSize(33);
   hframe__332->GetZaxis()->SetTitleOffset(1);
   hframe__332->GetZaxis()->SetTitleFont(43);
   hframe__332->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis283[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_46_stack_47_stack_48 = new TH1F("StackedMCstackHist_stack_46_stack_47_stack_48","StackedMCstackHist",20, xAxis283);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMinimum(28.03927);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMaximum(112157.1);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetDirectory(0);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetStats(0);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetLineStyle(0);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMarkerStyle(20);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_46_stack_47_stack_48->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_46_stack_47_stack_48);
   
   Double_t xAxis284[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM2500Inclusive",20, xAxis284);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,923.3087);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,252.8013);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,180.0723);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,158.0673);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,112.2231);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,89.07824);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,66.22643);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,64.32688);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,75.16223);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,70.45004);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,45.96545);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,76.73312);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,42.26176);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,14.04777);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,23.83291);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,43.30761);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,4.95825);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,29.95221);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,9.979578);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,2.523194);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,82.53036);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,30.16346);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,38.30023);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,25.69391);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,18.70843);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,18.62868);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,14.80103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,15.45638);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,16.50732);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,14.46831);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,11.84146);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,33.21701);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,10.81685);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,6.058243);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,8.72365);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,31.81203);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,9.028763);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,10.76924);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,6.625154);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,4.129032);
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
   Double_t xAxis285[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM2500Inclusive",20, xAxis285);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,12050.61);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,3124.555);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2337.653);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1689.863);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1324.247);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1022.853);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,889.2444);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,687.8898);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,644.1603);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,558.4458);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,558.6624);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,412.5169);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,419.3902);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,345.7722);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,298.9172);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,251.7069);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,245.5859);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,231.4664);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,167.421);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,66.37584);
   TT_stack_2_stack_2_stack_2->SetBinError(1,121.2819);
   TT_stack_2_stack_2_stack_2->SetBinError(2,62.33355);
   TT_stack_2_stack_2_stack_2->SetBinError(3,53.66638);
   TT_stack_2_stack_2_stack_2->SetBinError(4,45.74074);
   TT_stack_2_stack_2_stack_2->SetBinError(5,40.30914);
   TT_stack_2_stack_2_stack_2->SetBinError(6,35.42743);
   TT_stack_2_stack_2_stack_2->SetBinError(7,33.04173);
   TT_stack_2_stack_2_stack_2->SetBinError(8,29.19715);
   TT_stack_2_stack_2_stack_2->SetBinError(9,28.12042);
   TT_stack_2_stack_2_stack_2->SetBinError(10,26.30992);
   TT_stack_2_stack_2_stack_2->SetBinError(11,26.30654);
   TT_stack_2_stack_2_stack_2->SetBinError(12,22.63948);
   TT_stack_2_stack_2_stack_2->SetBinError(13,22.48241);
   TT_stack_2_stack_2_stack_2->SetBinError(14,20.42541);
   TT_stack_2_stack_2_stack_2->SetBinError(15,19.16942);
   TT_stack_2_stack_2_stack_2->SetBinError(16,17.57314);
   TT_stack_2_stack_2_stack_2->SetBinError(17,17.43543);
   TT_stack_2_stack_2_stack_2->SetBinError(18,17.04973);
   TT_stack_2_stack_2_stack_2->SetBinError(19,14.03518);
   TT_stack_2_stack_2_stack_2->SetBinError(20,9.118939);
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
   Double_t xAxis286[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM2500Inclusive",20, xAxis286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,57124.28);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,18091.19);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,12146.98);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9561.398);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8041.609);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,5238.23);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,4933.351);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,4948.265);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,2963.328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3154.322);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2649.298);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2057.672);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2612.565);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1399.533);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1823.021);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,858.186);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,910.0247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1354.869);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,990.3925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,315.5642);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1610.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,883.8234);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,730.0919);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,644.1954);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,587.4525);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,482.2814);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,464.5633);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,459.852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,359.9512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,369.5262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,344.2416);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,302.2121);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,329.56);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,254.6943);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,281.8835);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,202.0981);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,212.6611);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,240.7102);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,209.53);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,120.6627);
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
   Double_t xAxis287[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__333 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__333","h_SR_MVAOutputM2500Inclusive",20, xAxis287);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(1,45.29972);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(2,12.51555);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(3,7.470869);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(4,11.91328);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(5,14.10078);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(6,4.048389);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(7,1.404119);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(8,4.151839);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(9,5.996804);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(10,-0.6729102);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(11,4.779363);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(12,-0.2642829);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(13,1.528006);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(14,1.420133);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(15,3.037027);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(16,3.53993);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(17,-1.110392);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(18,-0.7312318);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(19,-0.6384742);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(20,1.288597);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(1,9.300117);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(2,6.959603);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(3,6.097583);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(4,5.337834);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(5,4.958146);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(6,4.055575);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(7,4.041715);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(8,3.445754);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(9,3.535382);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(10,3.133873);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(11,3.142961);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(12,2.69168);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(13,2.968036);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(14,2.593323);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(15,2.092111);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(16,1.866897);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(17,1.777418);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(18,1.638725);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(19,1.037195);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(20,0.9116075);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetEntries(41.65101);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3192[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3192[20] = {
   70098.2,
   21468.54,
   14664.7,
   11409.33,
   9478.079,
   6350.161,
   5888.822,
   5700.481,
   3682.65,
   3783.218,
   3253.926,
   2546.922,
   3074.217,
   1759.353,
   2145.772,
   1153.201,
   1160.569,
   1616.287,
   1167.793,
   384.4632};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3192[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3192[20] = {
   1617.058,
   886.5321,
   733.0629,
   646.3281,
   589.1309,
   483.9395,
   465.972,
   461.0371,
   361.4251,
   370.7441,
   345.4483,
   304.8738,
   330.5031,
   255.5838,
   282.6692,
   205.3398,
   213.5655,
   241.5534,
   210.104,
   121.0772};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3192[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3192[20] = {
   1617.058,
   886.5321,
   733.0629,
   646.3281,
   589.1309,
   483.9395,
   465.972,
   461.0371,
   361.4251,
   370.7441,
   345.4483,
   304.8738,
   330.5031,
   255.5838,
   282.6692,
   205.3398,
   213.5655,
   241.5534,
   210.104,
   121.0772};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3192,BkgSum-SR-Inclusive_sum_errors_fy3192,BkgSum-SR-Inclusive_sum_errors_felx3192,BkgSum-SR-Inclusive_sum_errors_fehx3192,BkgSum-SR-Inclusive_sum_errors_fely3192,BkgSum-SR-Inclusive_sum_errors_fehy3192);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1255;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMinimum(237.0474);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMaximum(78860.44);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors318431883192);
   
   grae->Draw("e2 ");
   Double_t xAxis288[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__334 = new TH1F("Data__334","h_SR_MVAOutputM2500Inclusive",20, xAxis288);
   Data__334->SetBinContent(1,64220);
   Data__334->SetBinContent(2,22080);
   Data__334->SetBinContent(3,17220);
   Data__334->SetBinContent(4,12380);
   Data__334->SetBinContent(5,9120);
   Data__334->SetBinContent(6,8640);
   Data__334->SetBinContent(7,5960);
   Data__334->SetBinContent(8,5540);
   Data__334->SetBinContent(9,4000);
   Data__334->SetBinContent(10,3660);
   Data__334->SetBinContent(11,3600);
   Data__334->SetBinContent(12,2820);
   Data__334->SetBinContent(13,3160);
   Data__334->SetBinContent(14,2140);
   Data__334->SetBinContent(15,2120);
   Data__334->SetBinContent(16,1840);
   Data__334->SetBinContent(17,1700);
   Data__334->SetBinContent(18,1500);
   Data__334->SetBinContent(19,1400);
   Data__334->SetBinContent(20,500);
   Data__334->SetBinError(1,1133.314);
   Data__334->SetBinError(2,664.5299);
   Data__334->SetBinError(3,586.856);
   Data__334->SetBinError(4,497.5942);
   Data__334->SetBinError(5,427.0831);
   Data__334->SetBinError(6,415.6922);
   Data__334->SetBinError(7,345.2535);
   Data__334->SetBinError(8,332.8663);
   Data__334->SetBinError(9,282.8427);
   Data__334->SetBinError(10,270.555);
   Data__334->SetBinError(11,268.3282);
   Data__334->SetBinError(12,237.4868);
   Data__334->SetBinError(13,251.3961);
   Data__334->SetBinError(14,206.8816);
   Data__334->SetBinError(15,205.9126);
   Data__334->SetBinError(16,191.8333);
   Data__334->SetBinError(17,184.3909);
   Data__334->SetBinError(18,173.2051);
   Data__334->SetBinError(19,167.332);
   Data__334->SetBinError(20,100);
   Data__334->SetEntries(8680);
   Data__334->SetDirectory(0);
   Data__334->SetFillStyle(3001);
   Data__334->SetLineWidth(2);
   Data__334->SetMarkerStyle(20);
   Data__334->SetMarkerSize(1.2);
   Data__334->GetXaxis()->SetRange(1,200);
   Data__334->GetXaxis()->SetLabelFont(42);
   Data__334->GetXaxis()->SetTitleOffset(1);
   Data__334->GetXaxis()->SetTitleFont(42);
   Data__334->GetYaxis()->SetLabelFont(42);
   Data__334->GetYaxis()->SetTitleFont(42);
   Data__334->GetZaxis()->SetLabelFont(42);
   Data__334->GetZaxis()->SetTitleOffset(1);
   Data__334->GetZaxis()->SetTitleFont(42);
   Data__334->Draw("EP same");
   
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

   ci = 1255;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1255;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__335 = new TH1F("hframe_copy__335","",1000,0,1.01);
   hframe_copy__335->SetMinimum(0.01);
   hframe_copy__335->SetMaximum(502006.8);
   hframe_copy__335->SetDirectory(0);
   hframe_copy__335->SetStats(0);
   hframe_copy__335->SetLineStyle(0);
   hframe_copy__335->SetMarkerStyle(20);
   hframe_copy__335->GetXaxis()->SetLabelFont(43);
   hframe_copy__335->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__335->GetXaxis()->SetLabelSize(0);
   hframe_copy__335->GetXaxis()->SetTitleSize(0);
   hframe_copy__335->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__335->GetXaxis()->SetTitleFont(43);
   hframe_copy__335->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__335->GetYaxis()->SetLabelFont(43);
   hframe_copy__335->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__335->GetYaxis()->SetLabelSize(27);
   hframe_copy__335->GetYaxis()->SetTitleSize(33);
   hframe_copy__335->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__335->GetYaxis()->SetTitleFont(43);
   hframe_copy__335->GetZaxis()->SetLabelFont(43);
   hframe_copy__335->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__335->GetZaxis()->SetLabelSize(27);
   hframe_copy__335->GetZaxis()->SetTitleSize(33);
   hframe_copy__335->GetZaxis()->SetTitleOffset(1);
   hframe_copy__335->GetZaxis()->SetTitleFont(43);
   hframe_copy__335->Draw("sameaxis");
   
   TH1F *hframe_copy__336 = new TH1F("hframe_copy__336","",1000,0,1.01);
   hframe_copy__336->SetMinimum(0.01);
   hframe_copy__336->SetMaximum(502006.8);
   hframe_copy__336->SetDirectory(0);
   hframe_copy__336->SetStats(0);
   hframe_copy__336->SetLineStyle(0);
   hframe_copy__336->SetMarkerStyle(20);
   hframe_copy__336->GetXaxis()->SetLabelFont(43);
   hframe_copy__336->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__336->GetXaxis()->SetLabelSize(0);
   hframe_copy__336->GetXaxis()->SetTitleSize(0);
   hframe_copy__336->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__336->GetXaxis()->SetTitleFont(43);
   hframe_copy__336->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__336->GetYaxis()->SetLabelFont(43);
   hframe_copy__336->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__336->GetYaxis()->SetLabelSize(27);
   hframe_copy__336->GetYaxis()->SetTitleSize(33);
   hframe_copy__336->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__336->GetYaxis()->SetTitleFont(43);
   hframe_copy__336->GetZaxis()->SetLabelFont(43);
   hframe_copy__336->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__336->GetZaxis()->SetLabelSize(27);
   hframe_copy__336->GetZaxis()->SetTitleSize(33);
   hframe_copy__336->GetZaxis()->SetTitleOffset(1);
   hframe_copy__336->GetZaxis()->SetTitleFont(43);
   hframe_copy__336->Draw("sameaxis");
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
   MVAOutputM2500_1->Modified();
   MVAOutputM2500->cd();
   MVAOutputM2500->Modified();
   MVAOutputM2500->cd();
   MVAOutputM2500->SetSelected(MVAOutputM2500);
}
