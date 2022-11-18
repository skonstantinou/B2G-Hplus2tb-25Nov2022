void DR_tA_bH()
{
//=========Macro generated from canvas: DR_tA_bH/DR_tA_bH
//=========  (Fri Nov 18 13:07:21 2022) by ROOT version 6.20/02
   TCanvas *DR_tA_bH = new TCanvas("DR_tA_bH", "DR_tA_bH",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   DR_tA_bH->SetHighLightColor(2);
   DR_tA_bH->Range(0,0,1,1);
   DR_tA_bH->SetFillColor(0);
   DR_tA_bH->SetBorderMode(0);
   DR_tA_bH->SetBorderSize(2);
   DR_tA_bH->SetTickx(1);
   DR_tA_bH->SetTicky(1);
   DR_tA_bH->SetLeftMargin(0.16);
   DR_tA_bH->SetRightMargin(0.05);
   DR_tA_bH->SetTopMargin(0.06);
   DR_tA_bH->SetBottomMargin(0.13);
   DR_tA_bH->SetFrameFillStyle(0);
   DR_tA_bH->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: DR_tA_bH_2
   TPad *DR_tA_bH_2 = new TPad("DR_tA_bH_2", "DR_tA_bH_2",0,0,1,0.304);
   DR_tA_bH_2->Draw();
   DR_tA_bH_2->cd();
   DR_tA_bH_2->Range(-1.21519,-0.428,6.379747,1.7);
   DR_tA_bH_2->SetFillColor(0);
   DR_tA_bH_2->SetFillStyle(4000);
   DR_tA_bH_2->SetBorderMode(0);
   DR_tA_bH_2->SetBorderSize(2);
   DR_tA_bH_2->SetTickx(1);
   DR_tA_bH_2->SetTicky(1);
   DR_tA_bH_2->SetLeftMargin(0.16);
   DR_tA_bH_2->SetRightMargin(0.05);
   DR_tA_bH_2->SetTopMargin(0);
   DR_tA_bH_2->SetBottomMargin(0.3421053);
   DR_tA_bH_2->SetFrameFillStyle(0);
   DR_tA_bH_2->SetFrameBorderMode(0);
   DR_tA_bH_2->SetFrameFillStyle(0);
   DR_tA_bH_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1359 = new TH1F("hframe__1359","",1000,0,6);
   hframe__1359->SetMinimum(0.3);
   hframe__1359->SetMaximum(1.7);
   hframe__1359->SetDirectory(0);
   hframe__1359->SetStats(0);
   hframe__1359->SetLineStyle(0);
   hframe__1359->SetMarkerStyle(20);
   hframe__1359->GetXaxis()->SetTitle("#Delta (t^{res}_{assoc}, b_{H^{#pm})");
   hframe__1359->GetXaxis()->SetNdivisions(8);
   hframe__1359->GetXaxis()->SetLabelFont(43);
   hframe__1359->GetXaxis()->SetLabelOffset(0.007);
   hframe__1359->GetXaxis()->SetLabelSize(27);
   hframe__1359->GetXaxis()->SetTitleSize(33);
   hframe__1359->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1359->GetXaxis()->SetTitleFont(43);
   hframe__1359->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1359->GetYaxis()->SetNdivisions(505);
   hframe__1359->GetYaxis()->SetLabelFont(43);
   hframe__1359->GetYaxis()->SetLabelOffset(0.007);
   hframe__1359->GetYaxis()->SetLabelSize(21);
   hframe__1359->GetYaxis()->SetTitleSize(33);
   hframe__1359->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1359->GetYaxis()->SetTitleFont(43);
   hframe__1359->GetZaxis()->SetLabelFont(43);
   hframe__1359->GetZaxis()->SetLabelOffset(0.007);
   hframe__1359->GetZaxis()->SetLabelSize(27);
   hframe__1359->GetZaxis()->SetTitleSize(33);
   hframe__1359->GetZaxis()->SetTitleOffset(1);
   hframe__1359->GetZaxis()->SetTitleFont(43);
   hframe__1359->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3819[12] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75,
   5.25,
   5.75};
   Double_t BackgroundStatSystError_fy3819[12] = {
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
   Double_t BackgroundStatSystError_felx3819[12] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t BackgroundStatSystError_fely3819[12] = {
   0.07170841,
   0.03417904,
   0.02050617,
   0.0151317,
   0.01358786,
   0.01427836,
   0.01678884,
   0.02185278,
   0.02976439,
   0.04592744,
   0.07617059,
   0.1007539};
   Double_t BackgroundStatSystError_fehx3819[12] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t BackgroundStatSystError_fehy3819[12] = {
   0.07170841,
   0.03417904,
   0.02050617,
   0.0151317,
   0.01358786,
   0.01427836,
   0.01678884,
   0.02185278,
   0.02976439,
   0.04592744,
   0.07617059,
   0.1007539};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,BackgroundStatSystError_fx3819,BackgroundStatSystError_fy3819,BackgroundStatSystError_felx3819,BackgroundStatSystError_fehx3819,BackgroundStatSystError_fely3819,BackgroundStatSystError_fehy3819);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1418;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError381138153819 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError381138153819","Graph",100,0,6.6);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->SetMinimum(0.8790953);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->SetMaximum(1.120905);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError381138153819->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError381138153819);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3820[12] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75,
   5.25,
   5.75};
   Double_t BackgroundStatError_fy3820[12] = {
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
   Double_t BackgroundStatError_felx3820[12] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t BackgroundStatError_fely3820[12] = {
   0.07170841,
   0.03417904,
   0.02050617,
   0.0151317,
   0.01358786,
   0.01427836,
   0.01678884,
   0.02185278,
   0.02976439,
   0.04592744,
   0.07617059,
   0.1007539};
   Double_t BackgroundStatError_fehx3820[12] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t BackgroundStatError_fehy3820[12] = {
   0.07170841,
   0.03417904,
   0.02050617,
   0.0151317,
   0.01358786,
   0.01427836,
   0.01678884,
   0.02185278,
   0.02976439,
   0.04592744,
   0.07617059,
   0.1007539};
   grae = new TGraphAsymmErrors(12,BackgroundStatError_fx3820,BackgroundStatError_fy3820,BackgroundStatError_felx3820,BackgroundStatError_fehx3820,BackgroundStatError_fely3820,BackgroundStatError_fehy3820);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1417;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError381238163820 = new TH1F("Graph_Graph_Graph_BackgroundStatError381238163820","Graph",100,0,6.6);
   Graph_Graph_Graph_BackgroundStatError381238163820->SetMinimum(0.8790953);
   Graph_Graph_Graph_BackgroundStatError381238163820->SetMaximum(1.120905);
   Graph_Graph_Graph_BackgroundStatError381238163820->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError381238163820->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError381238163820->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError381238163820->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError381238163820->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError381238163820->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError381238163820);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx195[2] = {
   0,
   6};
   Double_t Graph0_fy195[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx195,Graph0_fy195);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0193194195 = new TH1F("Graph_Graph_Graph_Graph0193194195","Graph",100,0,6.6);
   Graph_Graph_Graph_Graph0193194195->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0193194195->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0193194195->SetDirectory(0);
   Graph_Graph_Graph_Graph0193194195->SetStats(0);
   Graph_Graph_Graph_Graph0193194195->SetLineStyle(0);
   Graph_Graph_Graph_Graph0193194195->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0193194195->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0193194195->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0193194195->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0193194195->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0193194195->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0193194195->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0193194195->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0193194195->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0193194195->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0193194195->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0193194195->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0193194195->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0193194195->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0193194195->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0193194195->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0193194195->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0193194195->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0193194195->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0193194195->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0193194195);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3821[12] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75,
   5.25,
   5.75};
   Double_t Graph1_fy3821[12] = {
   0.8460052,
   0.9587571,
   0.936782,
   1.027956,
   0.9803673,
   0.9530765,
   0.9762525,
   1.013138,
   0.9208494,
   1.068006,
   0.9349218,
   0.8824849};
   Double_t Graph1_felx3821[12] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph1_fely3821[12] = {
   0.07025691,
   0.03723504,
   0.02295097,
   0.01870247,
   0.01667639,
   0.0173545,
   0.0207198,
   0.0276356,
   0.03536501,
   0.06065867,
   0.0903823,
   0.117927};
   Double_t Graph1_fehx3821[12] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph1_fehy3821[12] = {
   0.07025691,
   0.03723504,
   0.02295097,
   0.01870247,
   0.01667639,
   0.0173545,
   0.0207198,
   0.0276356,
   0.03536501,
   0.06065867,
   0.0903823,
   0.117927};
   grae = new TGraphAsymmErrors(12,Graph1_fx3821,Graph1_fy3821,Graph1_felx3821,Graph1_fehx3821,Graph1_fely3821,Graph1_fehy3821);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1381338173821 = new TH1F("Graph_Graph_Graph_Graph1381338173821","Graph",100,0,6.6);
   Graph_Graph_Graph_Graph1381338173821->SetMinimum(0.7281472);
   Graph_Graph_Graph_Graph1381338173821->SetMaximum(1.165076);
   Graph_Graph_Graph_Graph1381338173821->SetDirectory(0);
   Graph_Graph_Graph_Graph1381338173821->SetStats(0);
   Graph_Graph_Graph_Graph1381338173821->SetLineStyle(0);
   Graph_Graph_Graph_Graph1381338173821->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1381338173821->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1381338173821->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1381338173821->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1381338173821->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1381338173821->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1381338173821->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1381338173821->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1381338173821->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1381338173821->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1381338173821->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1381338173821->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1381338173821->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1381338173821->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1381338173821->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1381338173821->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1381338173821->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1381338173821->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1381338173821->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1381338173821->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1381338173821->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1381338173821);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1360 = new TH1F("hframe_copy__1360","",1000,0,6);
   hframe_copy__1360->SetMinimum(0.3);
   hframe_copy__1360->SetMaximum(1.7);
   hframe_copy__1360->SetDirectory(0);
   hframe_copy__1360->SetStats(0);
   hframe_copy__1360->SetLineStyle(0);
   hframe_copy__1360->SetMarkerStyle(20);
   hframe_copy__1360->GetXaxis()->SetTitle("#Delta (t^{res}_{assoc}, b_{H^{#pm})");
   hframe_copy__1360->GetXaxis()->SetNdivisions(8);
   hframe_copy__1360->GetXaxis()->SetLabelFont(43);
   hframe_copy__1360->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1360->GetXaxis()->SetLabelSize(27);
   hframe_copy__1360->GetXaxis()->SetTitleSize(33);
   hframe_copy__1360->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1360->GetXaxis()->SetTitleFont(43);
   hframe_copy__1360->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1360->GetYaxis()->SetNdivisions(505);
   hframe_copy__1360->GetYaxis()->SetLabelFont(43);
   hframe_copy__1360->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1360->GetYaxis()->SetLabelSize(21);
   hframe_copy__1360->GetYaxis()->SetTitleSize(33);
   hframe_copy__1360->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1360->GetYaxis()->SetTitleFont(43);
   hframe_copy__1360->GetZaxis()->SetLabelFont(43);
   hframe_copy__1360->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1360->GetZaxis()->SetLabelSize(27);
   hframe_copy__1360->GetZaxis()->SetTitleSize(33);
   hframe_copy__1360->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1360->GetZaxis()->SetTitleFont(43);
   hframe_copy__1360->Draw("sameaxis");
   DR_tA_bH_2->Modified();
   DR_tA_bH->cd();
  
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
   DR_tA_bH->cd();
  
// ------------>Primitives in pad: DR_tA_bH_1
   TPad *DR_tA_bH_1 = new TPad("DR_tA_bH_1", "DR_tA_bH_1",0,0.2897959,1,1);
   DR_tA_bH_1->Draw();
   DR_tA_bH_1->cd();
   DR_tA_bH_1->Range(-1.21519,-1.216368,6.379747,4.756517);
   DR_tA_bH_1->SetFillColor(0);
   DR_tA_bH_1->SetFillStyle(4000);
   DR_tA_bH_1->SetBorderMode(0);
   DR_tA_bH_1->SetBorderSize(2);
   DR_tA_bH_1->SetLogy();
   DR_tA_bH_1->SetTickx(1);
   DR_tA_bH_1->SetTicky(1);
   DR_tA_bH_1->SetLeftMargin(0.16);
   DR_tA_bH_1->SetRightMargin(0.05);
   DR_tA_bH_1->SetTopMargin(0.06);
   DR_tA_bH_1->SetBottomMargin(0.02);
   DR_tA_bH_1->SetFrameFillStyle(0);
   DR_tA_bH_1->SetFrameBorderMode(0);
   DR_tA_bH_1->SetFrameFillStyle(0);
   DR_tA_bH_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1361 = new TH1F("hframe__1361","",1000,0,6);
   hframe__1361->SetMinimum(0.08);
   hframe__1361->SetMaximum(25011.77);
   hframe__1361->SetDirectory(0);
   hframe__1361->SetStats(0);
   hframe__1361->SetLineStyle(0);
   hframe__1361->SetMarkerStyle(20);
   hframe__1361->GetXaxis()->SetNdivisions(8);
   hframe__1361->GetXaxis()->SetLabelFont(43);
   hframe__1361->GetXaxis()->SetLabelOffset(0.007);
   hframe__1361->GetXaxis()->SetLabelSize(0);
   hframe__1361->GetXaxis()->SetTitleSize(0);
   hframe__1361->GetXaxis()->SetTitleOffset(0.9);
   hframe__1361->GetXaxis()->SetTitleFont(43);
   hframe__1361->GetYaxis()->SetTitle("Events / 0");
   hframe__1361->GetYaxis()->SetLabelFont(43);
   hframe__1361->GetYaxis()->SetLabelOffset(0.007);
   hframe__1361->GetYaxis()->SetLabelSize(27);
   hframe__1361->GetYaxis()->SetTitleSize(33);
   hframe__1361->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1361->GetYaxis()->SetTitleFont(43);
   hframe__1361->GetZaxis()->SetLabelFont(43);
   hframe__1361->GetZaxis()->SetLabelOffset(0.007);
   hframe__1361->GetZaxis()->SetLabelSize(27);
   hframe__1361->GetZaxis()->SetTitleSize(33);
   hframe__1361->GetZaxis()->SetTitleOffset(1);
   hframe__1361->GetZaxis()->SetTitleFont(43);
   hframe__1361->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_193_stack_194_stack_195 = new TH1F("StackedMCstackHist_stack_193_stack_194_stack_195","StackedMCstackHist",12,0,6);
   StackedMCstackHist_stack_193_stack_194_stack_195->SetMinimum(0.6596821);
   StackedMCstackHist_stack_193_stack_194_stack_195->SetMaximum(5854.848);
   StackedMCstackHist_stack_193_stack_194_stack_195->SetDirectory(0);
   StackedMCstackHist_stack_193_stack_194_stack_195->SetStats(0);
   StackedMCstackHist_stack_193_stack_194_stack_195->SetLineStyle(0);
   StackedMCstackHist_stack_193_stack_194_stack_195->SetMarkerStyle(20);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_193_stack_194_stack_195->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_193_stack_194_stack_195);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_DR_tA_bHInclusive",12,0,6);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,4.128895);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,16.811);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,46.35704);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,78.7093);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,93.68415);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,79.9575);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,54.22698);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,31.15963);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,14.99942);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,10.63257);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,4.940462);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,2.712622);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.9597881);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.729261);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,3.286823);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,4.033283);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,4.974243);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,4.843305);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,3.187268);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.670624);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.602646);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.348697);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.388405);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.7686652);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,60);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_DR_tA_bHInclusive",12,0,6);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,78.7826);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,382.6154);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1008.393);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1853.245);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2190.601);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1953.234);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1400.994);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,817.39);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,427.6859);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,187.0379);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,69.43525);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,36.29229);
   TT_stack_2_stack_2_stack_2->SetBinError(1,2.125948);
   TT_stack_2_stack_2_stack_2->SetBinError(2,4.715356);
   TT_stack_2_stack_2_stack_2->SetBinError(3,7.684583);
   TT_stack_2_stack_2_stack_2->SetBinError(4,10.42975);
   TT_stack_2_stack_2_stack_2->SetBinError(5,11.34972);
   TT_stack_2_stack_2_stack_2->SetBinError(6,10.72964);
   TT_stack_2_stack_2_stack_2->SetBinError(7,9.10117);
   TT_stack_2_stack_2_stack_2->SetBinError(8,6.955603);
   TT_stack_2_stack_2_stack_2->SetBinError(9,5.029943);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.337702);
   TT_stack_2_stack_2_stack_2->SetBinError(11,2.023698);
   TT_stack_2_stack_2_stack_2->SetBinError(12,1.463189);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,60);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_DR_tA_bHInclusive",12,0,6);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,88.48225);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,292.0939);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,723.6788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,1006.889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,1240.925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,1131.297);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,818.7812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,478.0221);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,293.5914);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,92.59003);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,40.07236);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,24.45227);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,12.067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,23.09571);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,35.49809);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,43.04076);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,46.26937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,43.62321);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,36.93994);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,28.01545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,21.26948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,12.83566);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,8.136113);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,6.176233);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3632.543);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,60);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1362 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1362","h_SR_DR_tA_bHInclusive",12,0,6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(1,0.01725376);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(2,0.8392254);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(3,3.145218);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(4,5.618948);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(5,7.189472);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(6,7.439118);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(7,4.96726);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(8,2.021407);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(9,0.9183264);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(10,0.181555);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(11,0.4027097);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinContent(12,-0.02233615);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(1,0.1139878);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(2,0.3220856);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(3,0.6457386);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(4,0.8652517);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(5,1.005049);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(6,0.9432282);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(7,0.7777962);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(8,0.5427911);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(9,0.3449602);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(10,0.2325372);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(11,0.1396259);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetBinError(12,0.08541168);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetEntries(5945);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->GetXaxis()->SetRange(1,60);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1362->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3822[12] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75,
   5.25,
   5.75};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3822[12] = {
   171.3937,
   691.5203,
   1778.429,
   2938.843,
   3525.209,
   3164.489,
   2274.002,
   1326.572,
   736.2767,
   290.2605,
   114.4481,
   63.45718};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3822[12] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3822[12] = {
   12.29037,
   23.6355,
   36.46876,
   44.4697,
   47.90004,
   45.1837,
   38.17786,
   28.98928,
   21.91483,
   13.33092,
   8.717578,
   6.393561};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3822[12] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3822[12] = {
   12.29037,
   23.6355,
   36.46876,
   44.4697,
   47.90004,
   45.1837,
   38.17786,
   28.98928,
   21.91483,
   13.33092,
   8.717578,
   6.393561};
   grae = new TGraphAsymmErrors(12,BkgSum-SR-Inclusive_sum_errors_fx3822,BkgSum-SR-Inclusive_sum_errors_fy3822,BkgSum-SR-Inclusive_sum_errors_felx3822,BkgSum-SR-Inclusive_sum_errors_fehx3822,BkgSum-SR-Inclusive_sum_errors_fely3822,BkgSum-SR-Inclusive_sum_errors_fehy3822);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1416;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822","Graph",100,0,6.6);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->SetMinimum(51.35725);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->SetMaximum(3924.714);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors381438183822->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors381438183822);
   
   grae->Draw("e2 ");
   
   TH1F *Data__1363 = new TH1F("Data__1363","h_SR_DR_tA_bHInclusive",12,0,6);
   Data__1363->SetBinContent(1,145);
   Data__1363->SetBinContent(2,663);
   Data__1363->SetBinContent(3,1666);
   Data__1363->SetBinContent(4,3021);
   Data__1363->SetBinContent(5,3456);
   Data__1363->SetBinContent(6,3016);
   Data__1363->SetBinContent(7,2220);
   Data__1363->SetBinContent(8,1344);
   Data__1363->SetBinContent(9,678);
   Data__1363->SetBinContent(10,310);
   Data__1363->SetBinContent(11,107);
   Data__1363->SetBinContent(12,56);
   Data__1363->SetBinError(1,12.04159);
   Data__1363->SetBinError(2,25.74879);
   Data__1363->SetBinError(3,40.81666);
   Data__1363->SetBinError(4,54.96362);
   Data__1363->SetBinError(5,58.78775);
   Data__1363->SetBinError(6,54.91812);
   Data__1363->SetBinError(7,47.11688);
   Data__1363->SetBinError(8,36.66061);
   Data__1363->SetBinError(9,26.03843);
   Data__1363->SetBinError(10,17.60682);
   Data__1363->SetBinError(11,10.34408);
   Data__1363->SetBinError(12,7.483315);
   Data__1363->SetEntries(16686);
   Data__1363->SetDirectory(0);
   Data__1363->SetFillStyle(3001);
   Data__1363->SetLineWidth(2);
   Data__1363->SetMarkerStyle(20);
   Data__1363->SetMarkerSize(1.2);
   Data__1363->GetXaxis()->SetRange(1,60);
   Data__1363->GetXaxis()->SetLabelFont(42);
   Data__1363->GetXaxis()->SetTitleOffset(1);
   Data__1363->GetXaxis()->SetTitleFont(42);
   Data__1363->GetYaxis()->SetLabelFont(42);
   Data__1363->GetYaxis()->SetTitleFont(42);
   Data__1363->GetZaxis()->SetLabelFont(42);
   Data__1363->GetZaxis()->SetTitleOffset(1);
   Data__1363->GetZaxis()->SetTitleFont(42);
   Data__1363->Draw("EP same");
   
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

   ci = 1416;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1416;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1364 = new TH1F("hframe_copy__1364","",1000,0,6);
   hframe_copy__1364->SetMinimum(0.08);
   hframe_copy__1364->SetMaximum(25011.77);
   hframe_copy__1364->SetDirectory(0);
   hframe_copy__1364->SetStats(0);
   hframe_copy__1364->SetLineStyle(0);
   hframe_copy__1364->SetMarkerStyle(20);
   hframe_copy__1364->GetXaxis()->SetNdivisions(8);
   hframe_copy__1364->GetXaxis()->SetLabelFont(43);
   hframe_copy__1364->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1364->GetXaxis()->SetLabelSize(0);
   hframe_copy__1364->GetXaxis()->SetTitleSize(0);
   hframe_copy__1364->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1364->GetXaxis()->SetTitleFont(43);
   hframe_copy__1364->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1364->GetYaxis()->SetLabelFont(43);
   hframe_copy__1364->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1364->GetYaxis()->SetLabelSize(27);
   hframe_copy__1364->GetYaxis()->SetTitleSize(33);
   hframe_copy__1364->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1364->GetYaxis()->SetTitleFont(43);
   hframe_copy__1364->GetZaxis()->SetLabelFont(43);
   hframe_copy__1364->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1364->GetZaxis()->SetLabelSize(27);
   hframe_copy__1364->GetZaxis()->SetTitleSize(33);
   hframe_copy__1364->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1364->GetZaxis()->SetTitleFont(43);
   hframe_copy__1364->Draw("sameaxis");
   
   TH1F *hframe_copy__1365 = new TH1F("hframe_copy__1365","",1000,0,6);
   hframe_copy__1365->SetMinimum(0.08);
   hframe_copy__1365->SetMaximum(25011.77);
   hframe_copy__1365->SetDirectory(0);
   hframe_copy__1365->SetStats(0);
   hframe_copy__1365->SetLineStyle(0);
   hframe_copy__1365->SetMarkerStyle(20);
   hframe_copy__1365->GetXaxis()->SetNdivisions(8);
   hframe_copy__1365->GetXaxis()->SetLabelFont(43);
   hframe_copy__1365->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1365->GetXaxis()->SetLabelSize(0);
   hframe_copy__1365->GetXaxis()->SetTitleSize(0);
   hframe_copy__1365->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1365->GetXaxis()->SetTitleFont(43);
   hframe_copy__1365->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1365->GetYaxis()->SetLabelFont(43);
   hframe_copy__1365->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1365->GetYaxis()->SetLabelSize(27);
   hframe_copy__1365->GetYaxis()->SetTitleSize(33);
   hframe_copy__1365->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1365->GetYaxis()->SetTitleFont(43);
   hframe_copy__1365->GetZaxis()->SetLabelFont(43);
   hframe_copy__1365->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1365->GetZaxis()->SetLabelSize(27);
   hframe_copy__1365->GetZaxis()->SetTitleSize(33);
   hframe_copy__1365->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1365->GetZaxis()->SetTitleFont(43);
   hframe_copy__1365->Draw("sameaxis");
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
   DR_tA_bH_1->Modified();
   DR_tA_bH->cd();
   DR_tA_bH->Modified();
   DR_tA_bH->cd();
   DR_tA_bH->SetSelected(DR_tA_bH);
}
