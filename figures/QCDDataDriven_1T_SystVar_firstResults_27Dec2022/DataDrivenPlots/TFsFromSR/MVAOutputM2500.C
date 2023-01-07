void MVAOutputM2500()
{
//=========Macro generated from canvas: MVAOutputM2500/MVAOutputM2500
//=========  (Tue Dec 27 11:55:16 2022) by ROOT version 6.20/02
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
   0.01351815,
   0.03197678,
   0.04445818,
   0.05527169,
   0.06457051,
   0.07389357,
   0.08827226,
   0.09133027,
   0.104757,
   0.1148589,
   0.1101214,
   0.1217865,
   0.1154854,
   0.1424115,
   0.129514,
   0.1442533,
   0.1316362,
   0.1454759,
   0.1371612,
   0.1087977};
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
   0.01351815,
   0.03197678,
   0.04445818,
   0.05527169,
   0.06457051,
   0.07389357,
   0.08827226,
   0.09133027,
   0.104757,
   0.1148589,
   0.1101214,
   0.1217865,
   0.1154854,
   0.1424115,
   0.129514,
   0.1442533,
   0.1316362,
   0.1454759,
   0.1371612,
   0.1087977};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3189,BackgroundStatSystError_fy3189,BackgroundStatSystError_felx3189,BackgroundStatSystError_fehx3189,BackgroundStatSystError_fely3189,BackgroundStatSystError_fehy3189);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError318131853189 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError318131853189","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMinimum(0.8254289);
   Graph_Graph_Graph_BackgroundStatSystError318131853189->SetMaximum(1.174571);
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
   0.01351815,
   0.03197678,
   0.04445818,
   0.05527169,
   0.06457051,
   0.07389357,
   0.08827226,
   0.09133027,
   0.104757,
   0.1148589,
   0.1101214,
   0.1217865,
   0.1154854,
   0.1424115,
   0.129514,
   0.1442533,
   0.1316362,
   0.1454759,
   0.1371612,
   0.1087977};
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
   0.01351815,
   0.03197678,
   0.04445818,
   0.05527169,
   0.06457051,
   0.07389357,
   0.08827226,
   0.09133027,
   0.104757,
   0.1148589,
   0.1101214,
   0.1217865,
   0.1154854,
   0.1424115,
   0.129514,
   0.1442533,
   0.1316362,
   0.1454759,
   0.1371612,
   0.1087977};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3190,BackgroundStatError_fy3190,BackgroundStatError_felx3190,BackgroundStatError_fehx3190,BackgroundStatError_fely3190,BackgroundStatError_fehy3190);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1257;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError318231863190 = new TH1F("Graph_Graph_Graph_BackgroundStatError318231863190","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMinimum(0.8254289);
   Graph_Graph_Graph_BackgroundStatError318231863190->SetMaximum(1.174571);
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
   
   Double_t Graph1_fx3191[8] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.975};
   Double_t Graph1_fy3191[8] = {
   1.043555,
   1.003483,
   1.018203,
   1.004431,
   1.063588,
   1.033928,
   0.1528578,
   0.07283372};
   Double_t Graph1_felx3191[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3191[8] = {
   0.01479216,
   0.03456178,
   0.04904512,
   0.06024178,
   0.07287587,
   0.08386264,
   0.03821446,
   0.03257223};
   Double_t Graph1_fehx3191[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3191[8] = {
   0.01479216,
   0.03456178,
   0.04904512,
   0.06024178,
   0.07287587,
   0.08386264,
   0.03821446,
   0.03257223};
   grae = new TGraphAsymmErrors(8,Graph1_fx3191,Graph1_fy3191,Graph1_felx3191,Graph1_fehx3191,Graph1_fely3191,Graph1_fehy3191);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1318331873191 = new TH1F("Graph_Graph_Graph_Graph1318331873191","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1318331873191->SetMinimum(0.03623534);
   Graph_Graph_Graph_Graph1318331873191->SetMaximum(1.246084);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   MVAOutputM2500_1->Range(-0.204557,-2.170502,1.073924,6.354602);
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
   hframe__332->SetMaximum(696780);
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
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMinimum(2.086195);
   StackedMCstackHist_stack_46_stack_47_stack_48->SetMaximum(174952.5);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2435.576);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,444.3846);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,317.131);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,147.1628);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,134.5266);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,114.0885);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,90.57148);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,43.10247);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,68.36422);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,42.83756);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,18.89893);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,39.31725);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,50.60096);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,26.07372);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,27.24884);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,22.24107);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,23.85387);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,18.19864);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,31.80813);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,46.88269);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,79.83859);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,38.26888);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,33.48323);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,20.97076);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,21.14806);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,19.85792);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,17.09392);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,12.401);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,16.34609);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,10.44082);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,9.408433);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,11.97106);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,13.698);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,9.941845);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,7.021708);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,7.624387);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,8.853215);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,11.04668);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,10.37693);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,11.10031);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1416.07);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,33617.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4803.875);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2659.234);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1687.093);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1194.798);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,978.1866);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,735.3426);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,612.3098);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,503.1557);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,504.2953);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,388.631);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,340.4519);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,321.6375);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,272.6077);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,292.2338);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,211.7351);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,267.0512);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,234.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,280.8272);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,351.8061);
   TT_stack_2_stack_2_stack_2->SetBinError(1,205.2809);
   TT_stack_2_stack_2_stack_2->SetBinError(2,78.22208);
   TT_stack_2_stack_2_stack_2->SetBinError(3,57.993);
   TT_stack_2_stack_2_stack_2->SetBinError(4,46.01271);
   TT_stack_2_stack_2_stack_2->SetBinError(5,38.98107);
   TT_stack_2_stack_2_stack_2->SetBinError(6,35.42405);
   TT_stack_2_stack_2_stack_2->SetBinError(7,30.65612);
   TT_stack_2_stack_2_stack_2->SetBinError(8,27.41866);
   TT_stack_2_stack_2_stack_2->SetBinError(9,25.23947);
   TT_stack_2_stack_2_stack_2->SetBinError(10,25.51141);
   TT_stack_2_stack_2_stack_2->SetBinError(11,22.33976);
   TT_stack_2_stack_2_stack_2->SetBinError(12,21.03358);
   TT_stack_2_stack_2_stack_2->SetBinError(13,20.37201);
   TT_stack_2_stack_2_stack_2->SetBinError(14,18.66002);
   TT_stack_2_stack_2_stack_2->SetBinError(15,19.34492);
   TT_stack_2_stack_2_stack_2->SetBinError(16,16.28953);
   TT_stack_2_stack_2_stack_2->SetBinError(17,18.41158);
   TT_stack_2_stack_2_stack_2->SetBinError(18,17.55139);
   TT_stack_2_stack_2_stack_2->SetBinError(19,18.86301);
   TT_stack_2_stack_2_stack_2->SetBinError(20,20.90687);
   TT_stack_2_stack_2_stack_2->SetEntries(39915.52);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,59332.56);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,11553.23);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5489.528);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,3701.215);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,2675.985);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,1847.969);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,1267.534);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,1376.737);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,931.9219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,667.6284);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,971.3922);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,762.1204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,879.5009);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,561.3062);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,629.053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,595.0394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,614.491);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,523.7644);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,500.3204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,974.3017);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1270.483);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,530.1532);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,370.3731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,301.7473);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,254.7942);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,213.436);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,181.4294);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,183.1409);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,154.5988);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,136.7762);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,149.9016);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,136.9447);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,142.4578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,120.6333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,121.1126);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,118.228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,117.4189);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,110.9937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,109.4079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,147.4908);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3664.316);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(1,904.032);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(2,574.1279);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(3,408.9356);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(4,309.3729);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(5,248.6796);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(6,199.5409);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(7,132.7274);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(8,119.9001);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(9,95.98958);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(10,101.7931);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(11,72.43718);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(12,58.98592);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(13,62.21247);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(14,53.49623);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(15,42.28486);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(16,58.87658);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(17,40.98527);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(18,42.20299);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(19,27.19927);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinContent(20,30.23911);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(1,41.40039);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(2,32.72527);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(3,28.27811);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(4,24.40494);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(5,21.45901);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(6,18.80832);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(7,16.53675);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(8,14.88064);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(9,14.31299);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(10,13.32146);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(11,12.46284);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(12,11.69289);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(13,11.40528);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(14,10.07304);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(15,10.57142);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(16,10.38669);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(17,9.661082);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(18,9.911214);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(19,9.566799);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetBinError(20,9.24633);
   ChargedHiggs_HplusTBHplusToTB_M_800__333->SetEntries(1839.371);
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
   95385.47,
   16801.49,
   8465.894,
   5535.471,
   4005.309,
   2940.243,
   2093.448,
   2032.149,
   1503.442,
   1214.761,
   1378.922,
   1141.89,
   1251.739,
   859.9876,
   948.5356,
   829.0156,
   905.3961,
   776.173,
   812.9557,
   1372.99};
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
   1289.435,
   537.2575,
   376.3782,
   305.9549,
   258.6249,
   217.2651,
   184.7934,
   185.5967,
   157.4961,
   139.5262,
   151.8489,
   139.0667,
   144.5576,
   122.4722,
   122.8486,
   119.5883,
   119.1829,
   112.9144,
   111.506,
   149.3782};
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
   1289.435,
   537.2575,
   376.3782,
   305.9549,
   258.6249,
   217.2651,
   184.7934,
   185.5967,
   157.4961,
   139.5262,
   151.8489,
   139.0667,
   144.5576,
   122.4722,
   122.8486,
   119.5883,
   119.1829,
   112.9144,
   111.506,
   149.3782};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3192,BkgSum-SR-Inclusive_sum_errors_fy3192,BkgSum-SR-Inclusive_sum_errors_felx3192,BkgSum-SR-Inclusive_sum_errors_fehx3192,BkgSum-SR-Inclusive_sum_errors_fely3192,BkgSum-SR-Inclusive_sum_errors_fehy3192);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1256;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMinimum(596.9327);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors318431883192->SetMaximum(106276.1);
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
   Data__334->SetBinContent(1,99540);
   Data__334->SetBinContent(2,16860);
   Data__334->SetBinContent(3,8620);
   Data__334->SetBinContent(4,5560);
   Data__334->SetBinContent(5,4260);
   Data__334->SetBinContent(6,3040);
   Data__334->SetBinContent(7,320);
   Data__334->SetBinContent(20,100);
   Data__334->SetBinError(1,1410.957);
   Data__334->SetBinError(2,580.6892);
   Data__334->SetBinError(3,415.2108);
   Data__334->SetBinError(4,333.4666);
   Data__334->SetBinError(5,291.8904);
   Data__334->SetBinError(6,246.5766);
   Data__334->SetBinError(7,80);
   Data__334->SetBinError(20,44.72136);
   Data__334->SetEntries(6915);
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
      tex = new TLatex(0.19,0.885,"Data blinded in signal region");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
   
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

   ci = 1256;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1256;
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
   hframe_copy__335->SetMaximum(696780);
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
   hframe_copy__336->SetMaximum(696780);
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
      tex = new TLatex(0.95,0.952,"59.8 fb^{-1} (13 TeV)");
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
