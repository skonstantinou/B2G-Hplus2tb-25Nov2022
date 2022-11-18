void MVAOutputM300()
{
//=========Macro generated from canvas: MVAOutputM300/MVAOutputM300
//=========  (Fri Nov 18 13:27:39 2022) by ROOT version 6.20/02
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
   0.07632991,
   0.07067564,
   0.06136612,
   0.05383134,
   0.05030239,
   0.04986175,
   0.04710896,
   0.04793394,
   0.04894099,
   0.04848211,
   0.05102687,
   0.05750604,
   0.07058425,
   0.09031321,
   0.1190033,
   0.1869269,
   0.3933531,
   0.8628791};
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
   0.07632991,
   0.07067564,
   0.06136612,
   0.05383134,
   0.05030239,
   0.04986175,
   0.04710896,
   0.04793394,
   0.04894099,
   0.04848211,
   0.05102687,
   0.05750604,
   0.07058425,
   0.09031321,
   0.1190033,
   0.1869269,
   0.3933531,
   0.8628791};
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
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMinimum(0.1234089);
   Graph_Graph_Graph_BackgroundStatSystError303730413045->SetMaximum(2.035455);
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
   0.07632991,
   0.07067564,
   0.06136612,
   0.05383134,
   0.05030239,
   0.04986175,
   0.04710896,
   0.04793394,
   0.04894099,
   0.04848211,
   0.05102687,
   0.05750604,
   0.07058425,
   0.09031321,
   0.1190033,
   0.1869269,
   0.3933531,
   0.8628791,
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
   0.07632991,
   0.07067564,
   0.06136612,
   0.05383134,
   0.05030239,
   0.04986175,
   0.04710896,
   0.04793394,
   0.04894099,
   0.04848211,
   0.05102687,
   0.05750604,
   0.07058425,
   0.09031321,
   0.1190033,
   0.1869269,
   0.3933531,
   0.8628791,
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
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMinimum(0.1234089);
   Graph_Graph_Graph_BackgroundStatError303830423046->SetMaximum(2.035455);
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
   
   Double_t Graph1_fx3047[18] = {
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
   Double_t Graph1_fy3047[18] = {
   1.042269,
   0.9596537,
   0.891688,
   0.9606327,
   1.00931,
   1.076858,
   1.001094,
   0.9828131,
   1.058168,
   0.9652654,
   1.023148,
   1.109116,
   1.149999,
   1.128832,
   0.9440078,
   0.9670924,
   0.8917035,
   1.740877};
   Double_t Graph1_felx3047[18] = {
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
   Double_t Graph1_fely3047[18] = {
   0.05686042,
   0.05086154,
   0.04231764,
   0.03921767,
   0.03727971,
   0.03821628,
   0.03464429,
   0.03494481,
   0.03718023,
   0.03487646,
   0.038025,
   0.04432919,
   0.05591488,
   0.07125126,
   0.08511832,
   0.1328404,
   0.2688587,
   0.8704383};
   Double_t Graph1_fehx3047[18] = {
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
   Double_t Graph1_fehy3047[18] = {
   0.05686042,
   0.05086154,
   0.04231764,
   0.03921767,
   0.03727971,
   0.03821628,
   0.03464429,
   0.03494481,
   0.03718023,
   0.03487646,
   0.038025,
   0.04432919,
   0.05591488,
   0.07125126,
   0.08511832,
   0.1328404,
   0.2688587,
   0.8704383};
   grae = new TGraphAsymmErrors(18,Graph1_fx3047,Graph1_fy3047,Graph1_felx3047,Graph1_fehx3047,Graph1_fely3047,Graph1_fehy3047);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1303930433047 = new TH1F("Graph_Graph_Graph_Graph1303930433047","Graph",100,0,1.045);
   Graph_Graph_Graph_Graph1303930433047->SetMinimum(0.4239978);
   Graph_Graph_Graph_Graph1303930433047->SetMaximum(2.810162);
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
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMinimum(6.672698);
   StackedMCstackHist_stack_10_stack_11_stack_12->SetMaximum(26690.79);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,46.19286);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,78.53189);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,93.71323);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,215.9045);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,185.4716);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,276.1963);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,185.5239);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,253.4231);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,231.116);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,134.7825);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,140.1252);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,164.5086);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,106.2562);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,39.65722);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,54.36804);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,30.72083);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.3048067);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,2.288802);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,9.140715);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,17.66267);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,19.12071);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,39.65444);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,25.31796);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,54.3076);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,23.98961);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,40.40977);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,40.78896);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,22.03687);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,24.97826);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,39.31605);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,24.12426);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,10.40997);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,15.56252);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,24.26891);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.2149167);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,2.287217);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(358.6662);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,486.6064);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1120.178);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1390.526);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1875.349);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2149.773);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2261.444);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2509.324);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2544.397);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2654.165);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2585.051);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2439.414);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1876.568);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1449.346);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,896.8777);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,413.9605);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,152.7884);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,28.79799);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,6.160164);
   TT_stack_2_stack_2_stack_2->SetBinError(1,17.28897);
   TT_stack_2_stack_2_stack_2->SetBinError(2,37.00315);
   TT_stack_2_stack_2_stack_2->SetBinError(3,41.00201);
   TT_stack_2_stack_2_stack_2->SetBinError(4,47.9759);
   TT_stack_2_stack_2_stack_2->SetBinError(5,51.12468);
   TT_stack_2_stack_2_stack_2->SetBinError(6,52.3903);
   TT_stack_2_stack_2_stack_2->SetBinError(7,55.6005);
   TT_stack_2_stack_2_stack_2->SetBinError(8,55.72978);
   TT_stack_2_stack_2_stack_2->SetBinError(9,57.03287);
   TT_stack_2_stack_2_stack_2->SetBinError(10,56.4876);
   TT_stack_2_stack_2_stack_2->SetBinError(11,54.86507);
   TT_stack_2_stack_2_stack_2->SetBinError(12,47.91247);
   TT_stack_2_stack_2_stack_2->SetBinError(13,42.8834);
   TT_stack_2_stack_2_stack_2->SetBinError(14,33.2077);
   TT_stack_2_stack_2_stack_2->SetBinError(15,22.8917);
   TT_stack_2_stack_2_stack_2->SetBinError(16,13.83294);
   TT_stack_2_stack_2_stack_2->SetBinError(17,5.994354);
   TT_stack_2_stack_2_stack_2->SetBinError(18,2.588546);
   TT_stack_2_stack_2_stack_2->SetEntries(22061.14);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,2690.937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,6220.634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,8474.401);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10400.51);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,12189.53);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,12208.96);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,13986.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13298.83);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,12424.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,13151.45);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,11572.86);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,9247.193);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5800.924);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3510.538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2137.582);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,912.5597);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,217.616);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,37.50489);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,245.2891);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,522.7613);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,609.4463);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,669.5617);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,728.4002);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,731.409);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,783.5231);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,768.499);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,745.973);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,767.0806);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,719.632);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,646.1782);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,516.9185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,400.1189);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,308.8742);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,202.9715);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,96.86205);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,39.50188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3155.06);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(1,3.500844);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(2,5.607858);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(3,9.866284);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(4,16.82234);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(5,12.69056);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(6,8.787623);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(7,23.48482);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(8,10.45992);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(9,14.59848);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(10,-3.651089);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(11,7.597069);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(12,3.96015);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(13,-2.892795);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(14,0.9844952);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(15,1.770802);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinContent(16,1.988894);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(1,2.590863);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(2,5.06617);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(3,5.583952);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(4,6.121454);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(5,6.262296);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(6,6.215607);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(7,5.829026);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(8,5.610989);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(9,4.951304);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(10,3.925983);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(11,4.234582);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(12,2.658486);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(13,2.526486);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(14,1.473838);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(15,1.212959);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetBinError(16,0.9989643);
   ChargedHiggs_HplusTBHplusToTB_M_800__81->SetEntries(41.70494);
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
   3223.737,
   7419.343,
   9958.641,
   12491.77,
   14524.78,
   14746.6,
   16681.75,
   16096.65,
   15309.48,
   15871.28,
   14152.4,
   11288.27,
   7356.526,
   4447.073,
   2605.911,
   1096.069,
   246.7188,
   45.95386,
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
   246.0675,
   524.3668,
   611.1232,
   672.4485,
   730.631,
   735.2913,
   785.8597,
   771.576,
   749.2611,
   769.4732,
   722.1526,
   649.1437,
   519.2549,
   401.6295,
   310.112,
   204.8848,
   97.0476,
   39.65262,
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
   246.0675,
   524.3668,
   611.1232,
   672.4485,
   730.631,
   735.2913,
   785.8597,
   771.576,
   749.2611,
   769.4732,
   722.1526,
   649.1437,
   519.2549,
   401.6295,
   310.112,
   204.8848,
   97.0476,
   39.65262,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMinimum(19.21437);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors304030443048->SetMaximum(19214.37);
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
   Data__82->SetBinContent(1,3360);
   Data__82->SetBinContent(2,7120);
   Data__82->SetBinContent(3,8880);
   Data__82->SetBinContent(4,12000);
   Data__82->SetBinContent(5,14660);
   Data__82->SetBinContent(6,15880);
   Data__82->SetBinContent(7,16700);
   Data__82->SetBinContent(8,15820);
   Data__82->SetBinContent(9,16200);
   Data__82->SetBinContent(10,15320);
   Data__82->SetBinContent(11,14480);
   Data__82->SetBinContent(12,12520);
   Data__82->SetBinContent(13,8460);
   Data__82->SetBinContent(14,5020);
   Data__82->SetBinContent(15,2460);
   Data__82->SetBinContent(16,1060);
   Data__82->SetBinContent(17,220);
   Data__82->SetBinContent(18,80);
   Data__82->SetBinError(1,183.303);
   Data__82->SetBinError(2,377.3592);
   Data__82->SetBinError(3,421.4262);
   Data__82->SetBinError(4,489.8979);
   Data__82->SetBinError(5,541.4795);
   Data__82->SetBinError(6,563.5601);
   Data__82->SetBinError(7,577.9273);
   Data__82->SetBinError(8,562.4944);
   Data__82->SetBinError(9,569.21);
   Data__82->SetBinError(10,553.5341);
   Data__82->SetBinError(11,538.145);
   Data__82->SetBinError(12,500.3998);
   Data__82->SetBinError(13,411.3393);
   Data__82->SetBinError(14,316.8596);
   Data__82->SetBinError(15,221.8107);
   Data__82->SetBinError(16,145.6022);
   Data__82->SetBinError(17,66.3325);
   Data__82->SetBinError(18,40);
   Data__82->SetEntries(8596.837);
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
