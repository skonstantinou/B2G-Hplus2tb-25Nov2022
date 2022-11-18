void TopBJetBDisc()
{
//=========Macro generated from canvas: TopBJetBDisc/TopBJetBDisc
//=========  (Fri Nov 18 13:27:57 2022) by ROOT version 6.20/02
   TCanvas *TopBJetBDisc = new TCanvas("TopBJetBDisc", "TopBJetBDisc",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   TopBJetBDisc->SetHighLightColor(2);
   TopBJetBDisc->Range(0,0,1,1);
   TopBJetBDisc->SetFillColor(0);
   TopBJetBDisc->SetBorderMode(0);
   TopBJetBDisc->SetBorderSize(2);
   TopBJetBDisc->SetTickx(1);
   TopBJetBDisc->SetTicky(1);
   TopBJetBDisc->SetLeftMargin(0.16);
   TopBJetBDisc->SetRightMargin(0.05);
   TopBJetBDisc->SetTopMargin(0.06);
   TopBJetBDisc->SetBottomMargin(0.13);
   TopBJetBDisc->SetFrameFillStyle(0);
   TopBJetBDisc->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopBJetBDisc_2
   TPad *TopBJetBDisc_2 = new TPad("TopBJetBDisc_2", "TopBJetBDisc_2",0,0,1,0.304);
   TopBJetBDisc_2->Draw();
   TopBJetBDisc_2->cd();
   TopBJetBDisc_2->Range(-0.204557,-0.428,1.073924,1.7);
   TopBJetBDisc_2->SetFillColor(0);
   TopBJetBDisc_2->SetFillStyle(4000);
   TopBJetBDisc_2->SetBorderMode(0);
   TopBJetBDisc_2->SetBorderSize(2);
   TopBJetBDisc_2->SetTickx(1);
   TopBJetBDisc_2->SetTicky(1);
   TopBJetBDisc_2->SetLeftMargin(0.16);
   TopBJetBDisc_2->SetRightMargin(0.05);
   TopBJetBDisc_2->SetTopMargin(0);
   TopBJetBDisc_2->SetBottomMargin(0.3421053);
   TopBJetBDisc_2->SetFrameFillStyle(0);
   TopBJetBDisc_2->SetFrameBorderMode(0);
   TopBJetBDisc_2->SetFrameFillStyle(0);
   TopBJetBDisc_2->SetFrameBorderMode(0);
   
   TH1F *hframe__582 = new TH1F("hframe__582","",1000,0,1.01);
   hframe__582->SetMinimum(0.3);
   hframe__582->SetMaximum(1.7);
   hframe__582->SetDirectory(0);
   hframe__582->SetStats(0);
   hframe__582->SetLineStyle(0);
   hframe__582->SetMarkerStyle(20);
   hframe__582->GetXaxis()->SetTitle("b-tag discriminator");
   hframe__582->GetXaxis()->SetLabelFont(43);
   hframe__582->GetXaxis()->SetLabelOffset(0.007);
   hframe__582->GetXaxis()->SetLabelSize(27);
   hframe__582->GetXaxis()->SetTitleSize(33);
   hframe__582->GetXaxis()->SetTitleOffset(2.960526);
   hframe__582->GetXaxis()->SetTitleFont(43);
   hframe__582->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__582->GetYaxis()->SetNdivisions(505);
   hframe__582->GetYaxis()->SetLabelFont(43);
   hframe__582->GetYaxis()->SetLabelOffset(0.007);
   hframe__582->GetYaxis()->SetLabelSize(21);
   hframe__582->GetYaxis()->SetTitleSize(33);
   hframe__582->GetYaxis()->SetTitleOffset(1.5625);
   hframe__582->GetYaxis()->SetTitleFont(43);
   hframe__582->GetZaxis()->SetLabelFont(43);
   hframe__582->GetZaxis()->SetLabelOffset(0.007);
   hframe__582->GetZaxis()->SetLabelSize(27);
   hframe__582->GetZaxis()->SetTitleSize(33);
   hframe__582->GetZaxis()->SetTitleOffset(1);
   hframe__582->GetZaxis()->SetTitleFont(43);
   hframe__582->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3333[15] = {
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
   Double_t BackgroundStatSystError_fy3333[15] = {
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
   Double_t BackgroundStatSystError_felx3333[15] = {
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
   Double_t BackgroundStatSystError_fely3333[15] = {
   0.05927852,
   0.0397981,
   0.04168606,
   0.04142989,
   0.04258296,
   0.04057436,
   0.04222339,
   0.04055178,
   0.03902764,
   0.03618034,
   0.03316014,
   0.03194176,
   0.02764632,
   0.02260595,
   0.008175916};
   Double_t BackgroundStatSystError_fehx3333[15] = {
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
   Double_t BackgroundStatSystError_fehy3333[15] = {
   0.05927852,
   0.0397981,
   0.04168606,
   0.04142989,
   0.04258296,
   0.04057436,
   0.04222339,
   0.04055178,
   0.03902764,
   0.03618034,
   0.03316014,
   0.03194176,
   0.02764632,
   0.02260595,
   0.008175916};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,BackgroundStatSystError_fx3333,BackgroundStatSystError_fy3333,BackgroundStatSystError_felx3333,BackgroundStatSystError_fehx3333,BackgroundStatSystError_fely3333,BackgroundStatSystError_fehy3333);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1293;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError332533293333 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError332533293333","Graph",100,0.175,1.075);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMinimum(0.9288658);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMaximum(1.071134);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError332533293333);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3334[20] = {
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
   Double_t BackgroundStatError_fy3334[20] = {
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
   Double_t BackgroundStatError_felx3334[20] = {
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
   Double_t BackgroundStatError_fely3334[20] = {
   0,
   0,
   0,
   0,
   0,
   0.05927852,
   0.0397981,
   0.04168606,
   0.04142989,
   0.04258296,
   0.04057436,
   0.04222339,
   0.04055178,
   0.03902764,
   0.03618034,
   0.03316014,
   0.03194176,
   0.02764632,
   0.02260595,
   0.008175916};
   Double_t BackgroundStatError_fehx3334[20] = {
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
   Double_t BackgroundStatError_fehy3334[20] = {
   0,
   0,
   0,
   0,
   0,
   0.05927852,
   0.0397981,
   0.04168606,
   0.04142989,
   0.04258296,
   0.04057436,
   0.04222339,
   0.04055178,
   0.03902764,
   0.03618034,
   0.03316014,
   0.03194176,
   0.02764632,
   0.02260595,
   0.008175916};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3334,BackgroundStatError_fy3334,BackgroundStatError_felx3334,BackgroundStatError_fehx3334,BackgroundStatError_fely3334,BackgroundStatError_fehy3334);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1292;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError332633303334 = new TH1F("Graph_Graph_Graph_BackgroundStatError332633303334","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMinimum(0.9288658);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMaximum(1.071134);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError332633303334->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError332633303334);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx84[2] = {
   0,
   1.01};
   Double_t Graph0_fy84[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx84,Graph0_fy84);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0828384 = new TH1F("Graph_Graph_Graph_Graph0828384","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0828384->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0828384->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0828384->SetDirectory(0);
   Graph_Graph_Graph_Graph0828384->SetStats(0);
   Graph_Graph_Graph_Graph0828384->SetLineStyle(0);
   Graph_Graph_Graph_Graph0828384->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0828384->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0828384->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0828384->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0828384);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3335[15] = {
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
   Double_t Graph1_fy3335[15] = {
   1.074567,
   0.9665757,
   1.095528,
   1.05632,
   1.103636,
   1.042535,
   1.13811,
   1.024354,
   1.116234,
   0.9380556,
   0.9798576,
   1.043949,
   0.8909914,
   1.029845,
   0.9451106};
   Double_t Graph1_felx3335[15] = {
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
   Double_t Graph1_fely3335[15] = {
   0.06936297,
   0.04434953,
   0.0501608,
   0.0484673,
   0.05208381,
   0.04871444,
   0.05260914,
   0.0482885,
   0.04928294,
   0.04195112,
   0.03967328,
   0.03988726,
   0.03192308,
   0.02830271,
   0.01008696};
   Double_t Graph1_fehx3335[15] = {
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
   Double_t Graph1_fehy3335[15] = {
   0.06936297,
   0.04434953,
   0.0501608,
   0.0484673,
   0.05208381,
   0.04871444,
   0.05260914,
   0.0482885,
   0.04928294,
   0.04195112,
   0.03967328,
   0.03988726,
   0.03192308,
   0.02830271,
   0.01008696};
   grae = new TGraphAsymmErrors(15,Graph1_fx3335,Graph1_fy3335,Graph1_felx3335,Graph1_fehx3335,Graph1_fely3335,Graph1_fehy3335);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1332733313335 = new TH1F("Graph_Graph_Graph_Graph1332733313335","Graph",100,0.175,1.075);
   Graph_Graph_Graph_Graph1332733313335->SetMinimum(0.8259032);
   Graph_Graph_Graph_Graph1332733313335->SetMaximum(1.223884);
   Graph_Graph_Graph_Graph1332733313335->SetDirectory(0);
   Graph_Graph_Graph_Graph1332733313335->SetStats(0);
   Graph_Graph_Graph_Graph1332733313335->SetLineStyle(0);
   Graph_Graph_Graph_Graph1332733313335->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1332733313335->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1332733313335->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1332733313335->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1332733313335);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__583 = new TH1F("hframe_copy__583","",1000,0,1.01);
   hframe_copy__583->SetMinimum(0.3);
   hframe_copy__583->SetMaximum(1.7);
   hframe_copy__583->SetDirectory(0);
   hframe_copy__583->SetStats(0);
   hframe_copy__583->SetLineStyle(0);
   hframe_copy__583->SetMarkerStyle(20);
   hframe_copy__583->GetXaxis()->SetTitle("b-tag discriminator");
   hframe_copy__583->GetXaxis()->SetLabelFont(43);
   hframe_copy__583->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__583->GetXaxis()->SetLabelSize(27);
   hframe_copy__583->GetXaxis()->SetTitleSize(33);
   hframe_copy__583->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__583->GetXaxis()->SetTitleFont(43);
   hframe_copy__583->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__583->GetYaxis()->SetNdivisions(505);
   hframe_copy__583->GetYaxis()->SetLabelFont(43);
   hframe_copy__583->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__583->GetYaxis()->SetLabelSize(21);
   hframe_copy__583->GetYaxis()->SetTitleSize(33);
   hframe_copy__583->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__583->GetYaxis()->SetTitleFont(43);
   hframe_copy__583->GetZaxis()->SetLabelFont(43);
   hframe_copy__583->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__583->GetZaxis()->SetLabelSize(27);
   hframe_copy__583->GetZaxis()->SetTitleSize(33);
   hframe_copy__583->GetZaxis()->SetTitleOffset(1);
   hframe_copy__583->GetZaxis()->SetTitleFont(43);
   hframe_copy__583->Draw("sameaxis");
   TopBJetBDisc_2->Modified();
   TopBJetBDisc->cd();
  
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
   TopBJetBDisc->cd();
  
// ------------>Primitives in pad: TopBJetBDisc_1
   TPad *TopBJetBDisc_1 = new TPad("TopBJetBDisc_1", "TopBJetBDisc_1",0,0.2897959,1,1);
   TopBJetBDisc_1->Draw();
   TopBJetBDisc_1->cd();
   TopBJetBDisc_1->Range(-0.204557,-2.148187,1.073924,5.261157);
   TopBJetBDisc_1->SetFillColor(0);
   TopBJetBDisc_1->SetFillStyle(4000);
   TopBJetBDisc_1->SetBorderMode(0);
   TopBJetBDisc_1->SetBorderSize(2);
   TopBJetBDisc_1->SetLogy();
   TopBJetBDisc_1->SetTickx(1);
   TopBJetBDisc_1->SetTicky(1);
   TopBJetBDisc_1->SetLeftMargin(0.16);
   TopBJetBDisc_1->SetRightMargin(0.05);
   TopBJetBDisc_1->SetTopMargin(0.06);
   TopBJetBDisc_1->SetBottomMargin(0.02);
   TopBJetBDisc_1->SetFrameFillStyle(0);
   TopBJetBDisc_1->SetFrameBorderMode(0);
   TopBJetBDisc_1->SetFrameFillStyle(0);
   TopBJetBDisc_1->SetFrameBorderMode(0);
   
   TH1F *hframe__584 = new TH1F("hframe__584","",1000,0,1.01);
   hframe__584->SetMinimum(0.01);
   hframe__584->SetMaximum(65553.64);
   hframe__584->SetDirectory(0);
   hframe__584->SetStats(0);
   hframe__584->SetLineStyle(0);
   hframe__584->SetMarkerStyle(20);
   hframe__584->GetXaxis()->SetLabelFont(43);
   hframe__584->GetXaxis()->SetLabelOffset(0.007);
   hframe__584->GetXaxis()->SetLabelSize(0);
   hframe__584->GetXaxis()->SetTitleSize(0);
   hframe__584->GetXaxis()->SetTitleOffset(0.9);
   hframe__584->GetXaxis()->SetTitleFont(43);
   hframe__584->GetYaxis()->SetTitle("Events / 0.05");
   hframe__584->GetYaxis()->SetLabelFont(43);
   hframe__584->GetYaxis()->SetLabelOffset(0.007);
   hframe__584->GetYaxis()->SetLabelSize(27);
   hframe__584->GetYaxis()->SetTitleSize(33);
   hframe__584->GetYaxis()->SetTitleOffset(1.5625);
   hframe__584->GetYaxis()->SetTitleFont(43);
   hframe__584->GetZaxis()->SetLabelFont(43);
   hframe__584->GetZaxis()->SetLabelOffset(0.007);
   hframe__584->GetZaxis()->SetLabelSize(27);
   hframe__584->GetZaxis()->SetTitleSize(33);
   hframe__584->GetZaxis()->SetTitleOffset(1);
   hframe__584->GetZaxis()->SetTitleFont(43);
   hframe__584->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_82_stack_83_stack_84 = new TH1F("StackedMCstackHist_stack_82_stack_83_stack_84","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMinimum(3.715544);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMaximum(14862.18);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetDirectory(0);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetStats(0);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetLineStyle(0);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMarkerStyle(20);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_82_stack_83_stack_84->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_82_stack_83_stack_84);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_TopBJetBDiscInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,5.836549);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,8.136933);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,9.980392);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,8.593579);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,6.833388);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,10.55812);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,10.46713);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,7.870835);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,10.98129);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,12.30897);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,16.65624);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,18.75992);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,19.33786);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,32.83516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,259.1632);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.308887);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.226596);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.428417);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.813761);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.281467);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.351574);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.587925);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.247195);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.392613);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.551943);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.785286);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.838565);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.865133);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,3.204397);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,7.655508);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,40);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_TopBJetBDiscInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,70.54561);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,160.291);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,165.0095);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,164.8153);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,176.2395);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,192.4771);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,202.5464);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,214.2379);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,241.2265);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,273.2921);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,331.9094);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,390.5466);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,493.7379);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,797.2388);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,6531.593);
   TT_stack_2_stack_2_stack_2->SetBinError(6,2.119353);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.205493);
   TT_stack_2_stack_2_stack_2->SetBinError(8,3.233865);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.18533);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.278746);
   TT_stack_2_stack_2_stack_2->SetBinError(11,3.422132);
   TT_stack_2_stack_2_stack_2->SetBinError(12,3.487722);
   TT_stack_2_stack_2_stack_2->SetBinError(13,3.582619);
   TT_stack_2_stack_2_stack_2->SetBinError(14,3.786236);
   TT_stack_2_stack_2_stack_2->SetBinError(15,4.019213);
   TT_stack_2_stack_2_stack_2->SetBinError(16,4.431191);
   TT_stack_2_stack_2_stack_2->SetBinError(17,4.792285);
   TT_stack_2_stack_2_stack_2->SetBinError(18,5.388489);
   TT_stack_2_stack_2_stack_2->SetBinError(19,6.822044);
   TT_stack_2_stack_2_stack_2->SetBinError(20,19.51712);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,40);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_TopBJetBDiscInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,146.9637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,322.9976);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,260.4164);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,276.2653);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,223.7642);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,236.2787);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,198.1946);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,217.1926);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,207.3731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,247.4165);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,273.9738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,246.8555);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,361.2313);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,455.5561);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2498.104);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,12.86331);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,19.2543);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,17.80275);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,18.26579);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,16.9629);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,17.44101);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,16.81066);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,17.40586);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,17.47679);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,18.79732);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,20.08311);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,20.32073);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,23.48916);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,28.06854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,72.9939);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3639.602);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,40);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__585 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__585","h_SR_TopBJetBDiscInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(6,0.2425394);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(7,0.7286652);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(8,0.02872229);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(9,0.7148411);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(10,0.9139737);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(11,0.6083722);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(12,0.6132056);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(13,0.3741955);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(14,0.4110059);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(15,0.9314287);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(16,0.8340601);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(17,1.526195);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(18,1.550854);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(19,2.977934);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(20,20.26216);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(6,0.1844204);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(7,0.2835826);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(8,0.2659237);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(9,0.2882341);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(10,0.3108762);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(11,0.3231012);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(12,0.311074);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(13,0.3053082);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(14,0.3196276);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(15,0.3456068);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(16,0.3739243);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(17,0.4206983);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(18,0.4479124);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(19,0.5906636);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(20,1.591999);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetEntries(5945);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetXaxis()->SetRange(1,40);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3336[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3336[20] = {
   0,
   0,
   0,
   0,
   0,
   223.3459,
   491.4256,
   435.4063,
   449.6742,
   406.837,
   439.314,
   411.2082,
   439.3014,
   459.581,
   533.0175,
   622.5394,
   656.162,
   874.307,
   1285.63,
   9288.86};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3336[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3336[20] = {
   0,
   0,
   0,
   0,
   0,
   13.23961,
   19.55781,
   18.15037,
   18.62995,
   17.32432,
   17.82489,
   17.3626,
   17.81445,
   17.93636,
   19.28476,
   20.6435,
   20.95897,
   24.17137,
   29.06288,
   75.94494};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3336[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3336[20] = {
   0,
   0,
   0,
   0,
   0,
   13.23961,
   19.55781,
   18.15037,
   18.62995,
   17.32432,
   17.82489,
   17.3626,
   17.81445,
   17.93636,
   19.28476,
   20.6435,
   20.95897,
   24.17137,
   29.06288,
   75.94494};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3336,BkgSum-SR-Inclusive_sum_errors_fy3336,BkgSum-SR-Inclusive_sum_errors_felx3336,BkgSum-SR-Inclusive_sum_errors_fehx3336,BkgSum-SR-Inclusive_sum_errors_fely3336,BkgSum-SR-Inclusive_sum_errors_fehy3336);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1291;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMinimum(10.30129);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMaximum(10301.29);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors332833323336);
   
   grae->Draw("e2 ");
   
   TH1F *Data__586 = new TH1F("Data__586","h_SR_TopBJetBDiscInclusive",20,0,1);
   Data__586->SetBinContent(6,240);
   Data__586->SetBinContent(7,475);
   Data__586->SetBinContent(8,477);
   Data__586->SetBinContent(9,475);
   Data__586->SetBinContent(10,449);
   Data__586->SetBinContent(11,458);
   Data__586->SetBinContent(12,468);
   Data__586->SetBinContent(13,450);
   Data__586->SetBinContent(14,513);
   Data__586->SetBinContent(15,500);
   Data__586->SetBinContent(16,610);
   Data__586->SetBinContent(17,685);
   Data__586->SetBinContent(18,779);
   Data__586->SetBinContent(19,1324);
   Data__586->SetBinContent(20,8779);
   Data__586->SetBinError(6,15.49193);
   Data__586->SetBinError(7,21.79449);
   Data__586->SetBinError(8,21.84033);
   Data__586->SetBinError(9,21.79449);
   Data__586->SetBinError(10,21.18962);
   Data__586->SetBinError(11,21.40093);
   Data__586->SetBinError(12,21.63331);
   Data__586->SetBinError(13,21.2132);
   Data__586->SetBinError(14,22.6495);
   Data__586->SetBinError(15,22.36068);
   Data__586->SetBinError(16,24.69818);
   Data__586->SetBinError(17,26.1725);
   Data__586->SetBinError(18,27.91057);
   Data__586->SetBinError(19,36.38681);
   Data__586->SetBinError(20,93.69632);
   Data__586->SetEntries(16686);
   Data__586->SetDirectory(0);
   Data__586->SetFillStyle(3001);
   Data__586->SetLineWidth(2);
   Data__586->SetMarkerStyle(20);
   Data__586->SetMarkerSize(1.2);
   Data__586->GetXaxis()->SetRange(1,40);
   Data__586->GetXaxis()->SetLabelFont(42);
   Data__586->GetXaxis()->SetTitleOffset(1);
   Data__586->GetXaxis()->SetTitleFont(42);
   Data__586->GetYaxis()->SetLabelFont(42);
   Data__586->GetYaxis()->SetTitleFont(42);
   Data__586->GetZaxis()->SetLabelFont(42);
   Data__586->GetZaxis()->SetTitleOffset(1);
   Data__586->GetZaxis()->SetTitleFont(42);
   Data__586->Draw("EP same");
   
   TLegend *leg = new TLegend(0.23,0.61,0.43,0.91,NULL,"brNDC");
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

   ci = 1291;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1291;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__587 = new TH1F("hframe_copy__587","",1000,0,1.01);
   hframe_copy__587->SetMinimum(0.01);
   hframe_copy__587->SetMaximum(65553.64);
   hframe_copy__587->SetDirectory(0);
   hframe_copy__587->SetStats(0);
   hframe_copy__587->SetLineStyle(0);
   hframe_copy__587->SetMarkerStyle(20);
   hframe_copy__587->GetXaxis()->SetLabelFont(43);
   hframe_copy__587->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__587->GetXaxis()->SetLabelSize(0);
   hframe_copy__587->GetXaxis()->SetTitleSize(0);
   hframe_copy__587->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__587->GetXaxis()->SetTitleFont(43);
   hframe_copy__587->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__587->GetYaxis()->SetLabelFont(43);
   hframe_copy__587->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__587->GetYaxis()->SetLabelSize(27);
   hframe_copy__587->GetYaxis()->SetTitleSize(33);
   hframe_copy__587->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__587->GetYaxis()->SetTitleFont(43);
   hframe_copy__587->GetZaxis()->SetLabelFont(43);
   hframe_copy__587->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__587->GetZaxis()->SetLabelSize(27);
   hframe_copy__587->GetZaxis()->SetTitleSize(33);
   hframe_copy__587->GetZaxis()->SetTitleOffset(1);
   hframe_copy__587->GetZaxis()->SetTitleFont(43);
   hframe_copy__587->Draw("sameaxis");
   
   TH1F *hframe_copy__588 = new TH1F("hframe_copy__588","",1000,0,1.01);
   hframe_copy__588->SetMinimum(0.01);
   hframe_copy__588->SetMaximum(65553.64);
   hframe_copy__588->SetDirectory(0);
   hframe_copy__588->SetStats(0);
   hframe_copy__588->SetLineStyle(0);
   hframe_copy__588->SetMarkerStyle(20);
   hframe_copy__588->GetXaxis()->SetLabelFont(43);
   hframe_copy__588->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__588->GetXaxis()->SetLabelSize(0);
   hframe_copy__588->GetXaxis()->SetTitleSize(0);
   hframe_copy__588->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__588->GetXaxis()->SetTitleFont(43);
   hframe_copy__588->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__588->GetYaxis()->SetLabelFont(43);
   hframe_copy__588->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__588->GetYaxis()->SetLabelSize(27);
   hframe_copy__588->GetYaxis()->SetTitleSize(33);
   hframe_copy__588->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__588->GetYaxis()->SetTitleFont(43);
   hframe_copy__588->GetZaxis()->SetLabelFont(43);
   hframe_copy__588->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__588->GetZaxis()->SetLabelSize(27);
   hframe_copy__588->GetZaxis()->SetTitleSize(33);
   hframe_copy__588->GetZaxis()->SetTitleOffset(1);
   hframe_copy__588->GetZaxis()->SetTitleFont(43);
   hframe_copy__588->Draw("sameaxis");
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
   TopBJetBDisc_1->Modified();
   TopBJetBDisc->cd();
   TopBJetBDisc->Modified();
   TopBJetBDisc->cd();
   TopBJetBDisc->SetSelected(TopBJetBDisc);
}
