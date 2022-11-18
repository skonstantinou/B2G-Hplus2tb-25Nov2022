void MVAOutputM300()
{
//=========Macro generated from canvas: MVAOutputM300/MVAOutputM300
//=========  (Fri Nov 18 13:27:17 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3045[19] = {
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
   Double_t BackgroundStatSystError_fy3045[19] = {
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
   Double_t BackgroundStatSystError_felx3045[19] = {
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
   Double_t BackgroundStatSystError_fely3045[19] = {
   0.06951937,
   0.06633585,
   0.05182189,
   0.04717181,
   0.03951166,
   0.03349623,
   0.02950577,
   0.02568741,
   0.02350196,
   0.02173726,
   0.02054448,
   0.01973032,
   0.02100362,
   0.0253268,
   0.03296179,
   0.05086159,
   0.105089,
   0.3185172,
   0.6911851};
   Double_t BackgroundStatSystError_fehx3045[19] = {
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
   Double_t BackgroundStatSystError_fehy3045[19] = {
   0.06951937,
   0.06633585,
   0.05182189,
   0.04717181,
   0.03951166,
   0.03349623,
   0.02950577,
   0.02568741,
   0.02350196,
   0.02173726,
   0.02054448,
   0.01973032,
   0.02100362,
   0.0253268,
   0.03296179,
   0.05086159,
   0.105089,
   0.3185172,
   0.6911851};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3045,BackgroundStatSystError_fy3045,BackgroundStatSystError_felx3045,BackgroundStatSystError_fehx3045,BackgroundStatSystError_fely3045,BackgroundStatSystError_fehy3045);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError303730413045 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError303730413045","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMinimum(0.1705779);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMaximum(1.829422);
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
   0.06951937,
   0.06633585,
   0.05182189,
   0.04717181,
   0.03951166,
   0.03349623,
   0.02950577,
   0.02568741,
   0.02350196,
   0.02173726,
   0.02054448,
   0.01973032,
   0.02100362,
   0.0253268,
   0.03296179,
   0.05086159,
   0.105089,
   0.3185172,
   0.6911851};
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
   0.06951937,
   0.06633585,
   0.05182189,
   0.04717181,
   0.03951166,
   0.03349623,
   0.02950577,
   0.02568741,
   0.02350196,
   0.02173726,
   0.02054448,
   0.01973032,
   0.02100362,
   0.0253268,
   0.03296179,
   0.05086159,
   0.105089,
   0.3185172,
   0.6911851};
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
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMinimum(0.1705779);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMaximum(1.829422);
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
   
   Double_t Graph1_fx3047[6] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3047[6] = {
   0.9761131,
   0.8767568,
   0.9882211,
   0.9848537,
   1.014941,
   0.07761681};
   Double_t Graph1_felx3047[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3047[6] = {
   0.07599031,
   0.06953133,
   0.05833284,
   0.05133905,
   0.04472364,
   0.01056231};
   Double_t Graph1_fehx3047[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3047[6] = {
   0.07599031,
   0.06953133,
   0.05833284,
   0.05133905,
   0.04472364,
   0.01056231};
   grae = new TGraphAsymmErrors(6,Graph1_fx3047,Graph1_fy3047,Graph1_felx3047,Graph1_fehx3047,Graph1_fely3047,Graph1_fehy3047);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1303930433047 = new TH1F("Graph_Graph_Graph_Graph1303930433047","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1303930433047->SetMinimum(0.06034905);
   Graph_Graph_Graph_Graph1303930433047->SetMaximum(1.158926);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMinimum(15.64698);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMaximum(62587.9);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,69.78673);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,152.9663);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,265.4427);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,300.1693);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,374.7371);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,448.4767);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,652.2628);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,750.8724);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1080.822);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1288.943);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1433.481);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1565.698);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,1458.281);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1013.061);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,619.9792);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,264.7225);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,58.43755);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,10.54034);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.07597592);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,9.810889);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,20.76944);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,41.16459);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,34.52796);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,32.78229);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,37.61349);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,47.1121);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,52.44328);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,58.76928);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,58.73525);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,60.69709);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,69.62006);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,62.65061);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,48.99276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,39.27542);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,22.0373);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,9.902258);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,3.743792);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.06061689);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4010.08);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,738.5938);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1728.911);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2473.315);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3495.862);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4799.288);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,6490.229);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,8834.952);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,11015.45);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,14050.34);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,16612.26);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,19154.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,20498.77);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,18237.3);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,13189.23);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,7555.858);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,3257.55);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,760.4163);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,38.0241);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,2.393622);
   TT_stack_2_stack_2_stack_2->SetBinError(1,21.37025);
   TT_stack_2_stack_2_stack_2->SetBinError(2,46.22056);
   TT_stack_2_stack_2_stack_2->SetBinError(3,55.197);
   TT_stack_2_stack_2_stack_2->SetBinError(4,65.63878);
   TT_stack_2_stack_2_stack_2->SetBinError(5,76.62755);
   TT_stack_2_stack_2_stack_2->SetBinError(6,89.37418);
   TT_stack_2_stack_2_stack_2->SetBinError(7,104.4782);
   TT_stack_2_stack_2_stack_2->SetBinError(8,116.7727);
   TT_stack_2_stack_2_stack_2->SetBinError(9,131.7503);
   TT_stack_2_stack_2_stack_2->SetBinError(10,143.4065);
   TT_stack_2_stack_2_stack_2->SetBinError(11,154.2169);
   TT_stack_2_stack_2_stack_2->SetBinError(12,159.2566);
   TT_stack_2_stack_2_stack_2->SetBinError(13,150.301);
   TT_stack_2_stack_2_stack_2->SetBinError(14,128.0166);
   TT_stack_2_stack_2_stack_2->SetBinError(15,96.81272);
   TT_stack_2_stack_2_stack_2->SetBinError(16,63.95921);
   TT_stack_2_stack_2_stack_2->SetBinError(17,30.8613);
   TT_stack_2_stack_2_stack_2->SetBinError(18,6.835612);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.707678);
   TT_stack_2_stack_2_stack_2->SetEntries(123832.3);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,881.9973);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1745.127);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3069.659);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,3677.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,4974.349);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6975.806);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,9507.954);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,11888.25);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,13630.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,14798.8);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,15886);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,17052.96);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,15072.18);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,9654.328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,6727.534);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3326.383);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,568.4543);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,108.4939);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.002627105);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,115.1373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,235.2038);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,293.0216);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,344.6339);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,392.2216);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,455.8855);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,548.6239);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,593.9879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,660.3803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,693.7099);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,730.7782);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,751.9737);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,711.8623);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,588.4584);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,480.0033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,341.7013);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,142.1425);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,49.41496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.006293237);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4300.238);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(1,54.03742);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(2,84.42828);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(3,253.7309);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(4,483.0874);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(5,829.1669);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(6,1138.732);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(7,1338.997);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(8,1426.254);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(9,1348.403);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(10,1189.108);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(11,1166.542);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(12,986.124);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(13,780.6653);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(14,557.3887);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(15,244.4657);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(16,109.6442);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(17,25.85983);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(18,7.754338);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(19,0.1075101);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(1,7.171615);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(2,15.47318);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(3,21.50071);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(4,30.23207);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(5,39.25407);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(6,45.69346);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(7,49.66327);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(8,50.81883);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(9,50.03357);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(10,48.47431);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(11,46.67441);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(12,43.38476);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(13,39.0301);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(14,31.48698);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(15,23.16053);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(16,15.64332);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(17,8.586094);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(18,3.195298);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(19,0.52798);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetEntries(6386.746);
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
   1690.378,
   3627.004,
   5808.417,
   7473.191,
   10148.37,
   13914.51,
   18995.17,
   23654.57,
   28761.62,
   32700,
   36473.81,
   39117.43,
   34767.76,
   23856.62,
   14903.37,
   6848.655,
   1387.308,
   157.0584,
   2.472225};
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
   117.514,
   240.6004,
   301.0032,
   352.5239,
   400.9791,
   466.0838,
   560.4671,
   607.6248,
   675.9542,
   710.8085,
   749.3356,
   771.7993,
   730.2489,
   604.2118,
   491.2417,
   348.3335,
   145.7908,
   50.02579,
   1.708765};
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
   117.514,
   240.6004,
   301.0032,
   352.5239,
   400.9791,
   466.0838,
   560.4671,
   607.6248,
   675.9542,
   710.8085,
   749.3356,
   771.7993,
   730.2489,
   604.2118,
   491.2417,
   348.3335,
   145.7908,
   50.02579,
   1.708765};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMinimum(0.6871141);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMaximum(43878.08);
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
   Data__82->SetBinContent(1,1650);
   Data__82->SetBinContent(2,3180);
   Data__82->SetBinContent(3,5740);
   Data__82->SetBinContent(4,7360);
   Data__82->SetBinContent(5,10300);
   Data__82->SetBinContent(6,1080);
   Data__82->SetBinError(1,128.4523);
   Data__82->SetBinError(2,252.1904);
   Data__82->SetBinError(3,338.8215);
   Data__82->SetBinError(4,383.6665);
   Data__82->SetBinError(5,453.8722);
   Data__82->SetBinError(6,146.9694);
   Data__82->SetEntries(1507.945);
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
      tex = new TLatex(0.19,0.885,"Data blinded in");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.19,0.85,"signal region");
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
   MVAOutputM300_1->Modified();
   MVAOutputM300->cd();
   MVAOutputM300->Modified();
   MVAOutputM300->cd();
   MVAOutputM300->SetSelected(MVAOutputM300);
}
