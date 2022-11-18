void TopBJetBDisc()
{
//=========Macro generated from canvas: TopBJetBDisc/TopBJetBDisc
//=========  (Fri Nov 18 13:28:54 2022) by ROOT version 6.20/02
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
   0.06970453,
   0.04490378,
   0.04783129,
   0.04880155,
   0.05061271,
   0.05082728,
   0.04843133,
   0.04914615,
   0.04474769,
   0.04378462,
   0.04156293,
   0.04014091,
   0.03659344,
   0.02863539,
   0.01124714};
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
   0.06970453,
   0.04490378,
   0.04783129,
   0.04880155,
   0.05061271,
   0.05082728,
   0.04843133,
   0.04914615,
   0.04474769,
   0.04378462,
   0.04156293,
   0.04014091,
   0.03659344,
   0.02863539,
   0.01124714};
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
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMinimum(0.9163546);
   Graph_Graph_Graph_BackgroundStatSystError332533293333->SetMaximum(1.083645);
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
   0.06970453,
   0.04490378,
   0.04783129,
   0.04880155,
   0.05061271,
   0.05082728,
   0.04843133,
   0.04914615,
   0.04474769,
   0.04378462,
   0.04156293,
   0.04014091,
   0.03659344,
   0.02863539,
   0.01124714};
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
   0.06970453,
   0.04490378,
   0.04783129,
   0.04880155,
   0.05061271,
   0.05082728,
   0.04843133,
   0.04914615,
   0.04474769,
   0.04378462,
   0.04156293,
   0.04014091,
   0.03659344,
   0.02863539,
   0.01124714};
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
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMinimum(0.9163546);
   Graph_Graph_Graph_BackgroundStatError332633303334->SetMaximum(1.083645);
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
   1.155655,
   1.051632,
   1.089078,
   1.109976,
   1.043475,
   1.15384,
   0.9562771,
   1.103625,
   0.8895955,
   0.9392153,
   0.993771,
   1.211553,
   1.036213,
   0.9318553,
   0.9746613};
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
   0.07974776,
   0.05002105,
   0.05301548,
   0.05501946,
   0.05609754,
   0.05790957,
   0.05033037,
   0.05545922,
   0.04533799,
   0.04545182,
   0.04475719,
   0.04853986,
   0.04006231,
   0.02963127,
   0.01206693};
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
   0.07974776,
   0.05002105,
   0.05301548,
   0.05501946,
   0.05609754,
   0.05790957,
   0.05033037,
   0.05545922,
   0.04533799,
   0.04545182,
   0.04475719,
   0.04853986,
   0.04006231,
   0.02963127,
   0.01206693};
   grae = new TGraphAsymmErrors(15,Graph1_fx3335,Graph1_fy3335,Graph1_felx3335,Graph1_fehx3335,Graph1_fely3335,Graph1_fehy3335);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1332733313335 = new TH1F("Graph_Graph_Graph_Graph1332733313335","Graph",100,0.175,1.075);
   Graph_Graph_Graph_Graph1332733313335->SetMinimum(0.802674);
   Graph_Graph_Graph_Graph1332733313335->SetMaximum(1.301677);
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
   TopBJetBDisc_1->Range(-0.204557,-2.145122,1.073924,5.110982);
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
   hframe__584->SetMaximum(47382.24);
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
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMinimum(2.677443);
   StackedMCstackHist_stack_82_stack_83_stack_84->SetMaximum(10709.77);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,3.012528);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,7.14002);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,9.864891);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,10.19897);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,7.107807);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,7.423331);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,6.755589);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,7.9081);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,9.501575);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,7.554266);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,11.22803);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,12.0174);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,12.31416);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,23.20792);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,150.2283);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.7913368);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.286274);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.130185);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.542986);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.227107);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.060323);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.117589);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.337815);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.337176);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.180656);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.558698);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.55456);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.385567);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,2.024659);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,6.030567);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(45451);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(6,36.37859);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,87.47546);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,81.41087);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,77.86691);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,79.37003);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,86.55177);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,88.34685);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,88.19394);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,100.6422);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,111.0398);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,133.3215);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,151.934);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,188.6726);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,310.5391);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,2337.715);
   TT_stack_2_stack_2_stack_2->SetBinError(6,1.582095);
   TT_stack_2_stack_2_stack_2->SetBinError(7,2.433745);
   TT_stack_2_stack_2_stack_2->SetBinError(8,2.317552);
   TT_stack_2_stack_2_stack_2->SetBinError(9,2.247299);
   TT_stack_2_stack_2_stack_2->SetBinError(10,2.243307);
   TT_stack_2_stack_2_stack_2->SetBinError(11,2.307859);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.314771);
   TT_stack_2_stack_2_stack_2->SetBinError(13,2.319533);
   TT_stack_2_stack_2_stack_2->SetBinError(14,2.460496);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.569624);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.807458);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.998815);
   TT_stack_2_stack_2_stack_2->SetBinError(18,3.31912);
   TT_stack_2_stack_2_stack_2->SetBinError(19,4.259471);
   TT_stack_2_stack_2_stack_2->SetBinError(20,11.63131);
   TT_stack_2_stack_2_stack_2->SetEntries(70981);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,142.3241);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,325.6835);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,296.208);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,278.6088);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,245.1067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,250.0934);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,282.4032);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,262.7156);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,322.6371);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,336.0407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,351.5406);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,350.2645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,444.6335);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,727.5767);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,4205.665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,12.54224);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,18.67118);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,18.26458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,17.68543);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,16.58645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,17.30266);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,18.10151);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,17.43003);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,19.16241);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,19.70412);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,20.36738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,20.36284);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,23.35008);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,30.02326);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,74.13512);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7515.688);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(6,0.1476615);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(7,-0.08443791);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(8,0.2654147);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(9,0.03312488);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(10,0.6245865);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(11,0.3253469);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(12,0.5016609);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(13,0.3306518);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(14,1.103429);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(15,0.4994559);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(16,0.3247725);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(17,1.100968);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(18,0.6940966);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(19,0.6428567);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinContent(20,14.75124);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(6,0.1766324);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(7,0.2629572);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(8,0.2374804);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(9,0.2570733);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(10,0.2458843);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(11,0.2560216);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(12,0.2891401);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(13,0.2499808);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(14,0.3054058);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(15,0.2743215);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(16,0.3238591);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(17,0.3543468);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(18,0.40997);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(19,0.5235823);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetBinError(20,1.339222);
   ChargedHiggs_HplusTBHplusToTB_M_800__585->SetEntries(4205);
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
   181.7152,
   420.299,
   387.4838,
   366.6747,
   331.5845,
   344.0685,
   377.5056,
   358.8177,
   432.7809,
   454.6348,
   496.0901,
   514.2159,
   645.6202,
   1061.324,
   6693.607};
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
   12.66637,
   18.87301,
   18.53385,
   17.89429,
   16.78239,
   17.48807,
   18.2831,
   17.63451,
   19.36595,
   19.90601,
   20.61896,
   20.64109,
   23.62547,
   30.39142,
   75.28394};
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
   12.66637,
   18.87301,
   18.53385,
   17.89429,
   16.78239,
   17.48807,
   18.2831,
   17.63451,
   19.36595,
   19.90601,
   20.61896,
   20.64109,
   23.62547,
   30.39142,
   75.28394};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMinimum(7.44578);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors332833323336->SetMaximum(7445.78);
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
   Data__586->SetBinContent(6,210);
   Data__586->SetBinContent(7,442);
   Data__586->SetBinContent(8,422);
   Data__586->SetBinContent(9,407);
   Data__586->SetBinContent(10,346);
   Data__586->SetBinContent(11,397);
   Data__586->SetBinContent(12,361);
   Data__586->SetBinContent(13,396);
   Data__586->SetBinContent(14,385);
   Data__586->SetBinContent(15,427);
   Data__586->SetBinContent(16,493);
   Data__586->SetBinContent(17,623);
   Data__586->SetBinContent(18,669);
   Data__586->SetBinContent(19,989);
   Data__586->SetBinContent(20,6524);
   Data__586->SetBinError(6,14.49138);
   Data__586->SetBinError(7,21.0238);
   Data__586->SetBinError(8,20.54264);
   Data__586->SetBinError(9,20.17424);
   Data__586->SetBinError(10,18.60108);
   Data__586->SetBinError(11,19.92486);
   Data__586->SetBinError(12,19);
   Data__586->SetBinError(13,19.89975);
   Data__586->SetBinError(14,19.62142);
   Data__586->SetBinError(15,20.66398);
   Data__586->SetBinError(16,22.2036);
   Data__586->SetBinError(17,24.95997);
   Data__586->SetBinError(18,25.86503);
   Data__586->SetBinError(19,31.44837);
   Data__586->SetBinError(20,80.77128);
   Data__586->SetEntries(13095);
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
   hframe_copy__587->SetMaximum(47382.24);
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
   hframe_copy__588->SetMaximum(47382.24);
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
