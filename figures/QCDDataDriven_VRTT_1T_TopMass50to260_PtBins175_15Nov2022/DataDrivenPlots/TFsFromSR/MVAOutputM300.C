void MVAOutputM300()
{
//=========Macro generated from canvas: MVAOutputM300/MVAOutputM300
//=========  (Fri Nov 18 13:27:22 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM300 = new TCanvas("MVAOutputM300", "MVAOutputM300",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM300->SetHighLightColor(2);
   MVAOutputM300->Range(0,0,1,1);
   MVAOutputM300->SetFillColor(0);
   MVAOutputM300->SetBorderMode(0);
   MVAOutputM300->SetBorderSize(2);
   MVAOutputM300->SetTickx(1);
   MVAOutputM300->SetTicky(1);
   MVAOutputM300->SetLeftMargin(0.16);
   MVAOutputM300->SetRightMargin(0.05);
   MVAOutputM300->SetTopMargin(0.06);
   MVAOutputM300->SetBottomMargin(0.13);
   MVAOutputM300->SetFrameFillStyle(0);
   MVAOutputM300->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM300_2
   TPad *MVAOutputM300_2 = new TPad("MVAOutputM300_2", "MVAOutputM300_2",0,0,1,0.304);
   MVAOutputM300_2->Draw();
   MVAOutputM300_2->cd();
   MVAOutputM300_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM300_2->SetFillColor(0);
   MVAOutputM300_2->SetFillStyle(4000);
   MVAOutputM300_2->SetBorderMode(0);
   MVAOutputM300_2->SetBorderSize(2);
   MVAOutputM300_2->SetTickx(1);
   MVAOutputM300_2->SetTicky(1);
   MVAOutputM300_2->SetLeftMargin(0.16);
   MVAOutputM300_2->SetRightMargin(0.05);
   MVAOutputM300_2->SetTopMargin(0);
   MVAOutputM300_2->SetBottomMargin(0.3421053);
   MVAOutputM300_2->SetFrameFillStyle(0);
   MVAOutputM300_2->SetFrameBorderMode(0);
   MVAOutputM300_2->SetFrameFillStyle(0);
   MVAOutputM300_2->SetFrameBorderMode(0);
   
   TH1F *hframe__78 = new TH1F("hframe__78","",1000,0,1.01);
   hframe__78->SetMinimum(0.3);
   hframe__78->SetMaximum(1.7);
   hframe__78->SetDirectory(0);
   hframe__78->SetStats(0);
   hframe__78->SetLineStyle(0);
   hframe__78->SetMarkerStyle(20);
   hframe__78->GetXaxis()->SetTitle("DNN Output");
   hframe__78->GetXaxis()->SetLabelFont(43);
   hframe__78->GetXaxis()->SetLabelOffset(0.007);
   hframe__78->GetXaxis()->SetLabelSize(27);
   hframe__78->GetXaxis()->SetTitleSize(33);
   hframe__78->GetXaxis()->SetTitleOffset(2.960526);
   hframe__78->GetXaxis()->SetTitleFont(43);
   hframe__78->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__78->GetYaxis()->SetNdivisions(505);
   hframe__78->GetYaxis()->SetLabelFont(43);
   hframe__78->GetYaxis()->SetLabelOffset(0.007);
   hframe__78->GetYaxis()->SetLabelSize(21);
   hframe__78->GetYaxis()->SetTitleSize(33);
   hframe__78->GetYaxis()->SetTitleOffset(1.5625);
   hframe__78->GetYaxis()->SetTitleFont(43);
   hframe__78->GetZaxis()->SetLabelFont(43);
   hframe__78->GetZaxis()->SetLabelOffset(0.007);
   hframe__78->GetZaxis()->SetLabelSize(27);
   hframe__78->GetZaxis()->SetTitleSize(33);
   hframe__78->GetZaxis()->SetTitleOffset(1);
   hframe__78->GetZaxis()->SetTitleFont(43);
   hframe__78->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3045[18] = {
   0.05,
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
   0.925};
   Double_t BackgroundStatSystError_fy3045[18] = {
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
   Double_t BackgroundStatSystError_felx3045[18] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3045[18] = {
   0.05066875,
   0.04058718,
   0.03363717,
   0.02628706,
   0.02268587,
   0.02010704,
   0.01889222,
   0.01825503,
   0.01838548,
   0.01929264,
   0.02073624,
   0.02349691,
   0.02807987,
   0.03618403,
   0.05424482,
   0.1025513,
   0.2772305,
   0.585573};
   Double_t BackgroundStatSystError_fehx3045[18] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3045[18] = {
   0.05066875,
   0.04058718,
   0.03363717,
   0.02628706,
   0.02268587,
   0.02010704,
   0.01889222,
   0.01825503,
   0.01838548,
   0.01929264,
   0.02073624,
   0.02349691,
   0.02807987,
   0.03618403,
   0.05424482,
   0.1025513,
   0.2772305,
   0.585573};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,BackgroundStatSystError_fx3045,BackgroundStatSystError_fy3045,BackgroundStatSystError_felx3045,BackgroundStatSystError_fehx3045,BackgroundStatSystError_fely3045,BackgroundStatSystError_fehy3045);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1221;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError303730413045 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError303730413045","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMinimum(0.2973124);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMaximum(1.702688);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError303730413045);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3046[19] = {
   0.05,
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
   Double_t BackgroundStatError_fy3046[19] = {
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
   Double_t BackgroundStatError_felx3046[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3046[19] = {
   0.05066875,
   0.04058718,
   0.03363717,
   0.02628706,
   0.02268587,
   0.02010704,
   0.01889222,
   0.01825503,
   0.01838548,
   0.01929264,
   0.02073624,
   0.02349691,
   0.02807987,
   0.03618403,
   0.05424482,
   0.1025513,
   0.2772305,
   0.585573,
   0};
   Double_t BackgroundStatError_fehx3046[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3046[19] = {
   0.05066875,
   0.04058718,
   0.03363717,
   0.02628706,
   0.02268587,
   0.02010704,
   0.01889222,
   0.01825503,
   0.01838548,
   0.01929264,
   0.02073624,
   0.02349691,
   0.02807987,
   0.03618403,
   0.05424482,
   0.1025513,
   0.2772305,
   0.585573,
   0};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3046,BackgroundStatError_fy3046,BackgroundStatError_felx3046,BackgroundStatError_fehx3046,BackgroundStatError_fely3046,BackgroundStatError_fehy3046);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1220;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError303830423046 = new TH1F("Graph_Graph_Graph_BackgroundStatError303830423046","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMinimum(0.2973124);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMaximum(1.702688);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError303830423046->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError303830423046);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx12[2] = {
   0,
   1.01};
   Double_t Graph0_fy12[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx12,Graph0_fy12);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0101112 = new TH1F("Graph_Graph_Graph_Graph0101112","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0101112->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0101112->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0101112->SetDirectory(0);
   Graph_Graph_Graph_Graph0101112->SetStats(0);
   Graph_Graph_Graph_Graph0101112->SetLineStyle(0);
   Graph_Graph_Graph_Graph0101112->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0101112->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0101112->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0101112->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0101112);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3047[17] = {
   0.05,
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
   0.875};
   Double_t Graph1_fy3047[17] = {
   0.9401932,
   0.9949197,
   1.061768,
   0.9826188,
   1.008057,
   1.002162,
   1.010437,
   1.011488,
   0.9533811,
   0.9637307,
   0.9770773,
   0.900928,
   0.9649847,
   0.9112816,
   0.9660176,
   1.085662,
   1.175361};
   Double_t Graph1_felx3047[17] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3047[17] = {
   0.06031342,
   0.05050939,
   0.04271057,
   0.03193082,
   0.02813212,
   0.02495288,
   0.02344155,
   0.02298243,
   0.02216566,
   0.02334645,
   0.02543231,
   0.02707798,
   0.03311819,
   0.04087657,
   0.06383624,
   0.1279465,
   0.3716819};
   Double_t Graph1_fehx3047[17] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3047[17] = {
   0.06031342,
   0.05050939,
   0.04271057,
   0.03193082,
   0.02813212,
   0.02495288,
   0.02344155,
   0.02298243,
   0.02216566,
   0.02334645,
   0.02543231,
   0.02707798,
   0.03311819,
   0.04087657,
   0.06383624,
   0.1279465,
   0.3716819};
   grae = new TGraphAsymmErrors(17,Graph1_fx3047,Graph1_fy3047,Graph1_felx3047,Graph1_fehx3047,Graph1_fely3047,Graph1_fehy3047);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1303930433047 = new TH1F("Graph_Graph_Graph_Graph1303930433047","Graph",100,0,0.99);
   Graph_Graph_Graph_Graph1303930433047->SetMinimum(0.7293431);
   Graph_Graph_Graph_Graph1303930433047->SetMaximum(1.62138);
   Graph_Graph_Graph_Graph1303930433047->SetDirectory(0);
   Graph_Graph_Graph_Graph1303930433047->SetStats(0);
   Graph_Graph_Graph_Graph1303930433047->SetLineStyle(0);
   Graph_Graph_Graph_Graph1303930433047->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1303930433047->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1303930433047->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1303930433047->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1303930433047);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__79 = new TH1F("hframe_copy__79","",1000,0,1.01);
   hframe_copy__79->SetMinimum(0.3);
   hframe_copy__79->SetMaximum(1.7);
   hframe_copy__79->SetDirectory(0);
   hframe_copy__79->SetStats(0);
   hframe_copy__79->SetLineStyle(0);
   hframe_copy__79->SetMarkerStyle(20);
   hframe_copy__79->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__79->GetXaxis()->SetLabelFont(43);
   hframe_copy__79->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__79->GetXaxis()->SetLabelSize(27);
   hframe_copy__79->GetXaxis()->SetTitleSize(33);
   hframe_copy__79->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__79->GetXaxis()->SetTitleFont(43);
   hframe_copy__79->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__79->GetYaxis()->SetNdivisions(505);
   hframe_copy__79->GetYaxis()->SetLabelFont(43);
   hframe_copy__79->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__79->GetYaxis()->SetLabelSize(21);
   hframe_copy__79->GetYaxis()->SetTitleSize(33);
   hframe_copy__79->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__79->GetYaxis()->SetTitleFont(43);
   hframe_copy__79->GetZaxis()->SetLabelFont(43);
   hframe_copy__79->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__79->GetZaxis()->SetLabelSize(27);
   hframe_copy__79->GetZaxis()->SetTitleSize(33);
   hframe_copy__79->GetZaxis()->SetTitleOffset(1);
   hframe_copy__79->GetZaxis()->SetTitleFont(43);
   hframe_copy__79->Draw("sameaxis");
   MVAOutputM300_2->Modified();
   MVAOutputM300->cd();
  
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
   MVAOutputM300->cd();
  
// ------------>Primitives in pad: MVAOutputM300_1
   TPad *MVAOutputM300_1 = new TPad("MVAOutputM300_1", "MVAOutputM300_1",0,0.2897959,1,1);
   MVAOutputM300_1->Draw();
   MVAOutputM300_1->cd();
   MVAOutputM300_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM300_1->SetFillColor(0);
   MVAOutputM300_1->SetFillStyle(4000);
   MVAOutputM300_1->SetBorderMode(0);
   MVAOutputM300_1->SetBorderSize(2);
   MVAOutputM300_1->SetLogy();
   MVAOutputM300_1->SetTickx(1);
   MVAOutputM300_1->SetTicky(1);
   MVAOutputM300_1->SetLeftMargin(0.16);
   MVAOutputM300_1->SetRightMargin(0.05);
   MVAOutputM300_1->SetTopMargin(0.06);
   MVAOutputM300_1->SetBottomMargin(0.02);
   MVAOutputM300_1->SetFrameFillStyle(0);
   MVAOutputM300_1->SetFrameBorderMode(0);
   MVAOutputM300_1->SetFrameFillStyle(0);
   MVAOutputM300_1->SetFrameBorderMode(0);
   
   TH1F *hframe__80 = new TH1F("hframe__80","",1000,0,1.01);
   hframe__80->SetMinimum(0.01);
   hframe__80->SetMaximum(500000);
   hframe__80->SetDirectory(0);
   hframe__80->SetStats(0);
   hframe__80->SetLineStyle(0);
   hframe__80->SetMarkerStyle(20);
   hframe__80->GetXaxis()->SetLabelFont(43);
   hframe__80->GetXaxis()->SetLabelOffset(0.007);
   hframe__80->GetXaxis()->SetLabelSize(0);
   hframe__80->GetXaxis()->SetTitleSize(0);
   hframe__80->GetXaxis()->SetTitleOffset(0.9);
   hframe__80->GetXaxis()->SetTitleFont(43);
   hframe__80->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__80->GetYaxis()->SetLabelFont(43);
   hframe__80->GetYaxis()->SetLabelOffset(0.007);
   hframe__80->GetYaxis()->SetLabelSize(27);
   hframe__80->GetYaxis()->SetTitleSize(33);
   hframe__80->GetYaxis()->SetTitleOffset(1.5625);
   hframe__80->GetYaxis()->SetTitleFont(43);
   hframe__80->GetZaxis()->SetLabelFont(43);
   hframe__80->GetZaxis()->SetLabelOffset(0.007);
   hframe__80->GetZaxis()->SetLabelSize(27);
   hframe__80->GetZaxis()->SetTitleSize(33);
   hframe__80->GetZaxis()->SetTitleOffset(1);
   hframe__80->GetZaxis()->SetTitleFont(43);
   hframe__80->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis67[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_10_stack_11_stack_12 = new TH1F("StackedMCstackHist_stack_10_stack_11_stack_12","StackedMCstackHist",19, xAxis67);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMinimum(15.5237);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMaximum(62094.79);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetDirectory(0);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetStats(0);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetLineStyle(0);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMarkerStyle(20);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_10_stack_11_stack_12->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_10_stack_11_stack_12);
   
   Double_t xAxis68[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM300Inclusive",19, xAxis68);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,54.34122);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,267.7086);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,340.8426);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,550.3204);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,629.9631);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,835.1052);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,971.1179);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,975.6671);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1057.18);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,822.9118);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,743.9517);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,610.3893);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,425.2166);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,258.7971);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,113.1633);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,47.34425);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,7.899652);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.1301326);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,10.21509);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,31.28225);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,34.02814);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,46.33993);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,47.5625);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,59.57477);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,60.94307);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,69.8207);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,89.20562);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,70.68669);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,52.85973);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,70.78237);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,39.06281);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,31.22549);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,18.51326);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,11.34444);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,5.483462);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.08945211);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1783.798);
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
   Double_t xAxis69[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM300Inclusive",19, xAxis69);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1458.275);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4365.256);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,6684.986);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,10582);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,15060.47);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,18945.15);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,22141.54);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,24228.2);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,24466.45);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,22865.31);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,19749.37);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,15062.49);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,10535.32);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,6348.666);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,3104.886);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,935.2123);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,114.8287);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,7.451394);
   TT_stack_2_stack_2_stack_2->SetBinError(1,29.24511);
   TT_stack_2_stack_2_stack_2->SetBinError(2,71.74199);
   TT_stack_2_stack_2_stack_2->SetBinError(3,88.4698);
   TT_stack_2_stack_2_stack_2->SetBinError(4,111.7165);
   TT_stack_2_stack_2_stack_2->SetBinError(5,133.01);
   TT_stack_2_stack_2_stack_2->SetBinError(6,149.0918);
   TT_stack_2_stack_2_stack_2->SetBinError(7,161.2107);
   TT_stack_2_stack_2_stack_2->SetBinError(8,168.7209);
   TT_stack_2_stack_2_stack_2->SetBinError(9,169.6702);
   TT_stack_2_stack_2_stack_2->SetBinError(10,164.1724);
   TT_stack_2_stack_2_stack_2->SetBinError(11,152.6984);
   TT_stack_2_stack_2_stack_2->SetBinError(12,133.3646);
   TT_stack_2_stack_2_stack_2->SetBinError(13,111.624);
   TT_stack_2_stack_2_stack_2->SetBinError(14,86.51925);
   TT_stack_2_stack_2_stack_2->SetBinError(15,60.5346);
   TT_stack_2_stack_2_stack_2->SetBinError(16,33.45948);
   TT_stack_2_stack_2_stack_2->SetBinError(17,11.59763);
   TT_stack_2_stack_2_stack_2->SetBinError(18,2.829257);
   TT_stack_2_stack_2_stack_2->SetEntries(176181.9);
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
   Double_t xAxis70[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM300Inclusive",19, xAxis70);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1071.959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,3166.66);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,4615.134);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8142.704);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9784.319);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,12410.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,13663.51);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13096.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,13285.61);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,11674.36);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,9719.234);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,8901.784);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,6635.596);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,4300.252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1523.065);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,343.8226);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,47.43213);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,-2.108121);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,127.2406);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,306.7373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,379.923);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,492.037);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,560.3875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,627.0248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,673.0684);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,674.9029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,687.2951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,658.4061);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,605.2974);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,557.3396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,479.7355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,383.8172);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,249.2686);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,131.3535);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,45.39582);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,1.503274);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3605.189);
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
   Double_t xAxis71[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__81 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__81","h_SR_MVAOutputM300Inclusive",19, xAxis71);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(1,8.84477);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(2,12.11467);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(3,26.11612);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(4,54.90134);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(5,77.83405);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(6,86.73935);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(7,92.82245);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(8,84.88609);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(9,58.52149);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(10,49.4744);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(11,55.31244);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(12,20.85768);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(13,14.55874);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(14,1.700008);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(15,0.1870394);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(16,0.6478839);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(1,2.681862);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(2,6.87599);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(3,8.670249);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(4,11.80295);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(5,13.97657);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(6,14.84627);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(7,15.1868);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(8,13.68745);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(9,13.5766);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(10,12.24074);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(11,10.2332);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(12,8.359903);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(13,6.533034);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(14,4.95929);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(15,3.035334);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(16,1.766939);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetEntries(246.4082);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3048[19] = {
   0.05,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3048[19] = {
   2584.575,
   7799.625,
   11640.96,
   19275.02,
   25474.76,
   32190.41,
   36776.17,
   38300.01,
   38809.25,
   35362.57,
   30212.55,
   24574.66,
   17596.13,
   10907.71,
   4741.114,
   1326.379,
   170.1604,
   5.473406,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3048[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3048[19] = {
   130.9572,
   316.5648,
   391.569,
   506.6837,
   577.917,
   647.2539,
   694.7835,
   699.1678,
   713.5265,
   682.2373,
   626.4949,
   577.4285,
   494.0971,
   394.6851,
   257.1809,
   136.0219,
   47.17366,
   3.205079,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3048[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3048[19] = {
   130.9572,
   316.5648,
   391.569,
   506.6837,
   577.917,
   647.2539,
   694.7835,
   699.1678,
   713.5265,
   682.2373,
   626.4949,
   577.4285,
   494.0971,
   394.6851,
   257.1809,
   136.0219,
   47.17366,
   3.205079,
   0};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3048,BkgSum-SR-Inclusive_sum_errors_fy3048,BkgSum-SR-Inclusive_sum_errors_felx3048,BkgSum-SR-Inclusive_sum_errors_fehx3048,BkgSum-SR-Inclusive_sum_errors_fely3048,BkgSum-SR-Inclusive_sum_errors_fehy3048);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1219;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMinimum(43.47505);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMaximum(43475.05);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors304030443048);
   
   grae->Draw("e2 ");
   Double_t xAxis72[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__82 = new TH1F("Data__82","h_SR_MVAOutputM300Inclusive",19, xAxis72);
   Data__82->SetBinContent(1,2430);
   Data__82->SetBinContent(2,7760);
   Data__82->SetBinContent(3,12360);
   Data__82->SetBinContent(4,18940);
   Data__82->SetBinContent(5,25680);
   Data__82->SetBinContent(6,32260);
   Data__82->SetBinContent(7,37160);
   Data__82->SetBinContent(8,38740);
   Data__82->SetBinContent(9,37000);
   Data__82->SetBinContent(10,34080);
   Data__82->SetBinContent(11,29520);
   Data__82->SetBinContent(12,22140);
   Data__82->SetBinContent(13,16980);
   Data__82->SetBinContent(14,9940);
   Data__82->SetBinContent(15,4580);
   Data__82->SetBinContent(16,1440);
   Data__82->SetBinContent(17,200);
   Data__82->SetBinError(1,155.8846);
   Data__82->SetBinError(2,393.9543);
   Data__82->SetBinError(3,497.1921);
   Data__82->SetBinError(4,615.4673);
   Data__82->SetBinError(5,716.6589);
   Data__82->SetBinError(6,803.2434);
   Data__82->SetBinError(7,862.0905);
   Data__82->SetBinError(8,880.2272);
   Data__82->SetBinError(9,860.2325);
   Data__82->SetBinError(10,825.5907);
   Data__82->SetBinError(11,768.3749);
   Data__82->SetBinError(12,665.4322);
   Data__82->SetBinError(13,582.7521);
   Data__82->SetBinError(14,445.8699);
   Data__82->SetBinError(15,302.6549);
   Data__82->SetBinError(16,169.7056);
   Data__82->SetBinError(17,63.24555);
   Data__82->SetEntries(16621.47);
   Data__82->SetDirectory(0);
   Data__82->SetFillStyle(3001);
   Data__82->SetLineWidth(2);
   Data__82->SetMarkerStyle(20);
   Data__82->SetMarkerSize(1.2);
   Data__82->GetXaxis()->SetRange(1,200);
   Data__82->GetXaxis()->SetLabelFont(42);
   Data__82->GetXaxis()->SetTitleOffset(1);
   Data__82->GetXaxis()->SetTitleFont(42);
   Data__82->GetYaxis()->SetLabelFont(42);
   Data__82->GetYaxis()->SetTitleFont(42);
   Data__82->GetZaxis()->SetLabelFont(42);
   Data__82->GetZaxis()->SetTitleOffset(1);
   Data__82->GetZaxis()->SetTitleFont(42);
   Data__82->Draw("EP same");
   
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

   ci = 1219;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1219;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__83 = new TH1F("hframe_copy__83","",1000,0,1.01);
   hframe_copy__83->SetMinimum(0.01);
   hframe_copy__83->SetMaximum(500000);
   hframe_copy__83->SetDirectory(0);
   hframe_copy__83->SetStats(0);
   hframe_copy__83->SetLineStyle(0);
   hframe_copy__83->SetMarkerStyle(20);
   hframe_copy__83->GetXaxis()->SetLabelFont(43);
   hframe_copy__83->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__83->GetXaxis()->SetLabelSize(0);
   hframe_copy__83->GetXaxis()->SetTitleSize(0);
   hframe_copy__83->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__83->GetXaxis()->SetTitleFont(43);
   hframe_copy__83->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__83->GetYaxis()->SetLabelFont(43);
   hframe_copy__83->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__83->GetYaxis()->SetLabelSize(27);
   hframe_copy__83->GetYaxis()->SetTitleSize(33);
   hframe_copy__83->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__83->GetYaxis()->SetTitleFont(43);
   hframe_copy__83->GetZaxis()->SetLabelFont(43);
   hframe_copy__83->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__83->GetZaxis()->SetLabelSize(27);
   hframe_copy__83->GetZaxis()->SetTitleSize(33);
   hframe_copy__83->GetZaxis()->SetTitleOffset(1);
   hframe_copy__83->GetZaxis()->SetTitleFont(43);
   hframe_copy__83->Draw("sameaxis");
   
   TH1F *hframe_copy__84 = new TH1F("hframe_copy__84","",1000,0,1.01);
   hframe_copy__84->SetMinimum(0.01);
   hframe_copy__84->SetMaximum(500000);
   hframe_copy__84->SetDirectory(0);
   hframe_copy__84->SetStats(0);
   hframe_copy__84->SetLineStyle(0);
   hframe_copy__84->SetMarkerStyle(20);
   hframe_copy__84->GetXaxis()->SetLabelFont(43);
   hframe_copy__84->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__84->GetXaxis()->SetLabelSize(0);
   hframe_copy__84->GetXaxis()->SetTitleSize(0);
   hframe_copy__84->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__84->GetXaxis()->SetTitleFont(43);
   hframe_copy__84->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__84->GetYaxis()->SetLabelFont(43);
   hframe_copy__84->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__84->GetYaxis()->SetLabelSize(27);
   hframe_copy__84->GetYaxis()->SetTitleSize(33);
   hframe_copy__84->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__84->GetYaxis()->SetTitleFont(43);
   hframe_copy__84->GetZaxis()->SetLabelFont(43);
   hframe_copy__84->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__84->GetZaxis()->SetLabelSize(27);
   hframe_copy__84->GetZaxis()->SetTitleSize(33);
   hframe_copy__84->GetZaxis()->SetTitleOffset(1);
   hframe_copy__84->GetZaxis()->SetTitleFont(43);
   hframe_copy__84->Draw("sameaxis");
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
   MVAOutputM300_1->Modified();
   MVAOutputM300->cd();
   MVAOutputM300->Modified();
   MVAOutputM300->cd();
   MVAOutputM300->SetSelected(MVAOutputM300);
}
