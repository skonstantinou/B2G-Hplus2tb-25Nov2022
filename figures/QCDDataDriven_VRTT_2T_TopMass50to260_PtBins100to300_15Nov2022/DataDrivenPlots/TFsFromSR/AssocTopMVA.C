void AssocTopMVA()
{
//=========Macro generated from canvas: AssocTopMVA/AssocTopMVA
//=========  (Fri Nov 18 13:29:46 2022) by ROOT version 6.20/02
   TCanvas *AssocTopMVA = new TCanvas("AssocTopMVA", "AssocTopMVA",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   AssocTopMVA->SetHighLightColor(2);
   AssocTopMVA->Range(0,0,1,1);
   AssocTopMVA->SetFillColor(0);
   AssocTopMVA->SetBorderMode(0);
   AssocTopMVA->SetBorderSize(2);
   AssocTopMVA->SetTickx(1);
   AssocTopMVA->SetTicky(1);
   AssocTopMVA->SetLeftMargin(0.16);
   AssocTopMVA->SetRightMargin(0.05);
   AssocTopMVA->SetTopMargin(0.06);
   AssocTopMVA->SetBottomMargin(0.13);
   AssocTopMVA->SetFrameFillStyle(0);
   AssocTopMVA->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: AssocTopMVA_2
   TPad *AssocTopMVA_2 = new TPad("AssocTopMVA_2", "AssocTopMVA_2",0,0,1,0.304);
   AssocTopMVA_2->Draw();
   AssocTopMVA_2->cd();
   AssocTopMVA_2->Range(-0.204557,-0.428,1.073924,1.7);
   AssocTopMVA_2->SetFillColor(0);
   AssocTopMVA_2->SetFillStyle(4000);
   AssocTopMVA_2->SetBorderMode(0);
   AssocTopMVA_2->SetBorderSize(2);
   AssocTopMVA_2->SetTickx(1);
   AssocTopMVA_2->SetTicky(1);
   AssocTopMVA_2->SetLeftMargin(0.16);
   AssocTopMVA_2->SetRightMargin(0.05);
   AssocTopMVA_2->SetTopMargin(0);
   AssocTopMVA_2->SetBottomMargin(0.3421053);
   AssocTopMVA_2->SetFrameFillStyle(0);
   AssocTopMVA_2->SetFrameBorderMode(0);
   AssocTopMVA_2->SetFrameFillStyle(0);
   AssocTopMVA_2->SetFrameBorderMode(0);
   
   TH1F *hframe__771 = new TH1F("hframe__771","",1000,0,1.01);
   hframe__771->SetMinimum(0.3);
   hframe__771->SetMaximum(1.7);
   hframe__771->SetDirectory(0);
   hframe__771->SetStats(0);
   hframe__771->SetLineStyle(0);
   hframe__771->SetMarkerStyle(20);
   hframe__771->GetXaxis()->SetTitle("t^{res}_{assoc} DNN output");
   hframe__771->GetXaxis()->SetNdivisions(8);
   hframe__771->GetXaxis()->SetLabelFont(43);
   hframe__771->GetXaxis()->SetLabelOffset(0.007);
   hframe__771->GetXaxis()->SetLabelSize(27);
   hframe__771->GetXaxis()->SetTitleSize(33);
   hframe__771->GetXaxis()->SetTitleOffset(2.960526);
   hframe__771->GetXaxis()->SetTitleFont(43);
   hframe__771->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__771->GetYaxis()->SetNdivisions(505);
   hframe__771->GetYaxis()->SetLabelFont(43);
   hframe__771->GetYaxis()->SetLabelOffset(0.007);
   hframe__771->GetYaxis()->SetLabelSize(21);
   hframe__771->GetYaxis()->SetTitleSize(33);
   hframe__771->GetYaxis()->SetTitleOffset(1.5625);
   hframe__771->GetYaxis()->SetTitleFont(43);
   hframe__771->GetZaxis()->SetLabelFont(43);
   hframe__771->GetZaxis()->SetLabelOffset(0.007);
   hframe__771->GetZaxis()->SetLabelSize(27);
   hframe__771->GetZaxis()->SetTitleSize(33);
   hframe__771->GetZaxis()->SetTitleOffset(1);
   hframe__771->GetZaxis()->SetTitleFont(43);
   hframe__771->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3465[9] = {
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BackgroundStatSystError_fy3465[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3465[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3465[9] = {
   0.07835709,
   0.01263076,
   0.01154017,
   0.01037621,
   0.009225766,
   0.008075195,
   0.006806806,
   0.005718822,
   0.005907209};
   Double_t BackgroundStatSystError_fehx3465[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3465[9] = {
   0.07835709,
   0.01263076,
   0.01154017,
   0.01037621,
   0.009225766,
   0.008075195,
   0.006806806,
   0.005718822,
   0.005907209};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,BackgroundStatSystError_fx3465,BackgroundStatSystError_fy3465,BackgroundStatSystError_felx3465,BackgroundStatSystError_fehx3465,BackgroundStatSystError_fely3465,BackgroundStatSystError_fehy3465);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1328;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError345734613465 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError345734613465","Graph",100,0.505,1.045);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetMinimum(0.9059715);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetMaximum(1.094029);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError345734613465->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError345734613465);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3466[20] = {
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
   Double_t BackgroundStatError_fy3466[20] = {
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
   Double_t BackgroundStatError_felx3466[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3466[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.07835709,
   0.01263076,
   0.01154017,
   0.01037621,
   0.009225766,
   0.008075195,
   0.006806806,
   0.005718822,
   0.005907209};
   Double_t BackgroundStatError_fehx3466[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3466[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.07835709,
   0.01263076,
   0.01154017,
   0.01037621,
   0.009225766,
   0.008075195,
   0.006806806,
   0.005718822,
   0.005907209};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3466,BackgroundStatError_fy3466,BackgroundStatError_felx3466,BackgroundStatError_fehx3466,BackgroundStatError_fely3466,BackgroundStatError_fehy3466);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1327;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError345834623466 = new TH1F("Graph_Graph_Graph_BackgroundStatError345834623466","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetMinimum(0.9059715);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetMaximum(1.094029);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError345834623466->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError345834623466->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError345834623466);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx111[2] = {
   0,
   1.01};
   Double_t Graph0_fy111[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx111,Graph0_fy111);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0109110111 = new TH1F("Graph_Graph_Graph_Graph0109110111","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0109110111->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0109110111->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0109110111->SetDirectory(0);
   Graph_Graph_Graph_Graph0109110111->SetStats(0);
   Graph_Graph_Graph_Graph0109110111->SetLineStyle(0);
   Graph_Graph_Graph_Graph0109110111->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0109110111->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0109110111->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0109110111->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0109110111);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3467[9] = {
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph1_fy3467[9] = {
   1.025125,
   0.9949472,
   1.020187,
   1.024587,
   0.9411273,
   0.954627,
   0.9316525,
   0.8942836,
   0.845865};
   Double_t Graph1_felx3467[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3467[9] = {
   0.08990943,
   0.01505079,
   0.01490317,
   0.01442508,
   0.01308005,
   0.01229349,
   0.01122799,
   0.01032836,
   0.0123738};
   Double_t Graph1_fehx3467[9] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3467[9] = {
   0.08990943,
   0.01505079,
   0.01490317,
   0.01442508,
   0.01308005,
   0.01229349,
   0.01122799,
   0.01032836,
   0.0123738};
   grae = new TGraphAsymmErrors(9,Graph1_fx3467,Graph1_fy3467,Graph1_felx3467,Graph1_fehx3467,Graph1_fely3467,Graph1_fehy3467);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1345934633467 = new TH1F("Graph_Graph_Graph_Graph1345934633467","Graph",100,0.505,1.045);
   Graph_Graph_Graph_Graph1345934633467->SetMinimum(0.8053368);
   Graph_Graph_Graph_Graph1345934633467->SetMaximum(1.143189);
   Graph_Graph_Graph_Graph1345934633467->SetDirectory(0);
   Graph_Graph_Graph_Graph1345934633467->SetStats(0);
   Graph_Graph_Graph_Graph1345934633467->SetLineStyle(0);
   Graph_Graph_Graph_Graph1345934633467->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1345934633467->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1345934633467->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1345934633467->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1345934633467);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__772 = new TH1F("hframe_copy__772","",1000,0,1.01);
   hframe_copy__772->SetMinimum(0.3);
   hframe_copy__772->SetMaximum(1.7);
   hframe_copy__772->SetDirectory(0);
   hframe_copy__772->SetStats(0);
   hframe_copy__772->SetLineStyle(0);
   hframe_copy__772->SetMarkerStyle(20);
   hframe_copy__772->GetXaxis()->SetTitle("t^{res}_{assoc} DNN output");
   hframe_copy__772->GetXaxis()->SetNdivisions(8);
   hframe_copy__772->GetXaxis()->SetLabelFont(43);
   hframe_copy__772->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__772->GetXaxis()->SetLabelSize(27);
   hframe_copy__772->GetXaxis()->SetTitleSize(33);
   hframe_copy__772->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__772->GetXaxis()->SetTitleFont(43);
   hframe_copy__772->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__772->GetYaxis()->SetNdivisions(505);
   hframe_copy__772->GetYaxis()->SetLabelFont(43);
   hframe_copy__772->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__772->GetYaxis()->SetLabelSize(21);
   hframe_copy__772->GetYaxis()->SetTitleSize(33);
   hframe_copy__772->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__772->GetYaxis()->SetTitleFont(43);
   hframe_copy__772->GetZaxis()->SetLabelFont(43);
   hframe_copy__772->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__772->GetZaxis()->SetLabelSize(27);
   hframe_copy__772->GetZaxis()->SetTitleSize(33);
   hframe_copy__772->GetZaxis()->SetTitleOffset(1);
   hframe_copy__772->GetZaxis()->SetTitleFont(43);
   hframe_copy__772->Draw("sameaxis");
   AssocTopMVA_2->Modified();
   AssocTopMVA->cd();
  
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
   AssocTopMVA->cd();
  
// ------------>Primitives in pad: AssocTopMVA_1
   TPad *AssocTopMVA_1 = new TPad("AssocTopMVA_1", "AssocTopMVA_1",0,0.2897959,1,1);
   AssocTopMVA_1->Draw();
   AssocTopMVA_1->cd();
   AssocTopMVA_1->Range(-0.204557,-2.147195,1.073924,5.212573);
   AssocTopMVA_1->SetFillColor(0);
   AssocTopMVA_1->SetFillStyle(4000);
   AssocTopMVA_1->SetBorderMode(0);
   AssocTopMVA_1->SetBorderSize(2);
   AssocTopMVA_1->SetLogy();
   AssocTopMVA_1->SetTickx(1);
   AssocTopMVA_1->SetTicky(1);
   AssocTopMVA_1->SetLeftMargin(0.16);
   AssocTopMVA_1->SetRightMargin(0.05);
   AssocTopMVA_1->SetTopMargin(0.06);
   AssocTopMVA_1->SetBottomMargin(0.02);
   AssocTopMVA_1->SetFrameFillStyle(0);
   AssocTopMVA_1->SetFrameBorderMode(0);
   AssocTopMVA_1->SetFrameFillStyle(0);
   AssocTopMVA_1->SetFrameBorderMode(0);
   
   TH1F *hframe__773 = new TH1F("hframe__773","",1000,0,1.01);
   hframe__773->SetMinimum(0.01);
   hframe__773->SetMaximum(59018.33);
   hframe__773->SetDirectory(0);
   hframe__773->SetStats(0);
   hframe__773->SetLineStyle(0);
   hframe__773->SetMarkerStyle(20);
   hframe__773->GetXaxis()->SetNdivisions(8);
   hframe__773->GetXaxis()->SetLabelFont(43);
   hframe__773->GetXaxis()->SetLabelOffset(0.007);
   hframe__773->GetXaxis()->SetLabelSize(0);
   hframe__773->GetXaxis()->SetTitleSize(0);
   hframe__773->GetXaxis()->SetTitleOffset(0.9);
   hframe__773->GetXaxis()->SetTitleFont(43);
   hframe__773->GetYaxis()->SetTitle("Events / 0.05");
   hframe__773->GetYaxis()->SetLabelFont(43);
   hframe__773->GetYaxis()->SetLabelOffset(0.007);
   hframe__773->GetYaxis()->SetLabelSize(27);
   hframe__773->GetYaxis()->SetTitleSize(33);
   hframe__773->GetYaxis()->SetTitleOffset(1.5625);
   hframe__773->GetYaxis()->SetTitleFont(43);
   hframe__773->GetZaxis()->SetLabelFont(43);
   hframe__773->GetZaxis()->SetLabelOffset(0.007);
   hframe__773->GetZaxis()->SetLabelSize(27);
   hframe__773->GetZaxis()->SetTitleSize(33);
   hframe__773->GetZaxis()->SetTitleOffset(1);
   hframe__773->GetZaxis()->SetTitleFont(43);
   hframe__773->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_109_stack_110_stack_111 = new TH1F("StackedMCstackHist_stack_109_stack_110_stack_111","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetMinimum(3.353299);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetMaximum(13413.2);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetDirectory(0);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetStats(0);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetLineStyle(0);
   StackedMCstackHist_stack_109_stack_110_stack_111->SetMarkerStyle(20);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_109_stack_110_stack_111->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_109_stack_110_stack_111);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_AssocTopMVAInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,3.839333);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,111.2261);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,125.7566);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,128.7879);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,139.2802);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,157.1493);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,172.0841);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,208.0332);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,135.3788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.7147488);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,5.262051);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,5.372381);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,5.615622);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,5.683001);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,6.020531);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,6.067591);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,6.660073);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,5.614981);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_AssocTopMVAInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,84.95891);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2922.937);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,3274.117);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,3746.028);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,4337.959);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,5130.489);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,6344.008);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,7551.453);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,5196.811);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.142011);
   TT_stack_2_stack_2_stack_2->SetBinError(13,12.66424);
   TT_stack_2_stack_2_stack_2->SetBinError(14,13.40979);
   TT_stack_2_stack_2_stack_2->SetBinError(15,14.37609);
   TT_stack_2_stack_2_stack_2->SetBinError(16,15.47823);
   TT_stack_2_stack_2_stack_2->SetBinError(17,16.85771);
   TT_stack_2_stack_2_stack_2->SetBinError(18,18.72217);
   TT_stack_2_stack_2_stack_2->SetBinError(19,20.40195);
   TT_stack_2_stack_2_stack_2->SetBinError(20,16.82586);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_AssocTopMVAInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,38.01553);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1358.03);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1193.403);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1049.12);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1023.611);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1028.964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,874.002);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,623.7608);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,192.3325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,9.67678);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,53.75494);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,51.00076);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,48.70486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,47.9963);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,47.76366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,46.29309);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,42.87036);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,27.39295);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3287.288);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__774 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__774","h_SR_AssocTopMVAInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(12,0.09914626);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(13,8.282549);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(14,9.228844);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(15,11.01299);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(16,12.50728);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(17,11.7977);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(18,17.63593);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(19,21.37743);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinContent(20,14.74332);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(12,0.1843841);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(13,1.083392);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(14,1.106449);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(15,1.205652);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(16,1.226861);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(17,1.315675);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(18,1.464722);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(19,1.567872);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetBinError(20,1.333347);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetEntries(19326);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetXaxis()->SetRange(1,40);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__774->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3468[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3468[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   126.8138,
   4392.193,
   4593.276,
   4923.937,
   5500.85,
   6316.603,
   7390.094,
   8383.247,
   5524.522};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3468[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3468[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   9.936758,
   55.47672,
   53.00719,
   51.09178,
   50.74955,
   51.0078,
   50.30294,
   47.9423,
   32.63451};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3468[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3468[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   9.936758,
   55.47672,
   53.00719,
   51.09178,
   50.74955,
   51.0078,
   50.30294,
   47.9423,
   32.63451};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3468,BkgSum-SR-Inclusive_sum_errors_fy3468,BkgSum-SR-Inclusive_sum_errors_felx3468,BkgSum-SR-Inclusive_sum_errors_fehx3468,BkgSum-SR-Inclusive_sum_errors_fely3468,BkgSum-SR-Inclusive_sum_errors_fehy3468);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1326;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetMinimum(9.274308);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetMaximum(9274.308);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors346034643468->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors346034643468);
   
   grae->Draw("e2 ");
   
   TH1F *Data__775 = new TH1F("Data__775","h_SR_AssocTopMVAInclusive",20,0,1);
   Data__775->SetBinContent(12,130);
   Data__775->SetBinContent(13,4370);
   Data__775->SetBinContent(14,4686);
   Data__775->SetBinContent(15,5045);
   Data__775->SetBinContent(16,5177);
   Data__775->SetBinContent(17,6030);
   Data__775->SetBinContent(18,6885);
   Data__775->SetBinContent(19,7497);
   Data__775->SetBinContent(20,4673);
   Data__775->SetBinError(12,11.40175);
   Data__775->SetBinError(13,66.10598);
   Data__775->SetBinError(14,68.45436);
   Data__775->SetBinError(15,71.02816);
   Data__775->SetBinError(16,71.95137);
   Data__775->SetBinError(17,77.65307);
   Data__775->SetBinError(18,82.9759);
   Data__775->SetBinError(19,86.58522);
   Data__775->SetBinError(20,68.35934);
   Data__775->SetEntries(44497);
   Data__775->SetDirectory(0);
   Data__775->SetFillStyle(3001);
   Data__775->SetLineWidth(2);
   Data__775->SetMarkerStyle(20);
   Data__775->SetMarkerSize(1.2);
   Data__775->GetXaxis()->SetRange(1,40);
   Data__775->GetXaxis()->SetLabelFont(42);
   Data__775->GetXaxis()->SetTitleOffset(1);
   Data__775->GetXaxis()->SetTitleFont(42);
   Data__775->GetYaxis()->SetLabelFont(42);
   Data__775->GetYaxis()->SetTitleFont(42);
   Data__775->GetZaxis()->SetLabelFont(42);
   Data__775->GetZaxis()->SetTitleOffset(1);
   Data__775->GetZaxis()->SetTitleFont(42);
   Data__775->Draw("EP same");
   
   TLegend *leg = new TLegend(0.21,0.61,0.41,0.91,NULL,"brNDC");
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

   ci = 1326;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1326;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__776 = new TH1F("hframe_copy__776","",1000,0,1.01);
   hframe_copy__776->SetMinimum(0.01);
   hframe_copy__776->SetMaximum(59018.33);
   hframe_copy__776->SetDirectory(0);
   hframe_copy__776->SetStats(0);
   hframe_copy__776->SetLineStyle(0);
   hframe_copy__776->SetMarkerStyle(20);
   hframe_copy__776->GetXaxis()->SetNdivisions(8);
   hframe_copy__776->GetXaxis()->SetLabelFont(43);
   hframe_copy__776->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__776->GetXaxis()->SetLabelSize(0);
   hframe_copy__776->GetXaxis()->SetTitleSize(0);
   hframe_copy__776->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__776->GetXaxis()->SetTitleFont(43);
   hframe_copy__776->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__776->GetYaxis()->SetLabelFont(43);
   hframe_copy__776->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__776->GetYaxis()->SetLabelSize(27);
   hframe_copy__776->GetYaxis()->SetTitleSize(33);
   hframe_copy__776->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__776->GetYaxis()->SetTitleFont(43);
   hframe_copy__776->GetZaxis()->SetLabelFont(43);
   hframe_copy__776->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__776->GetZaxis()->SetLabelSize(27);
   hframe_copy__776->GetZaxis()->SetTitleSize(33);
   hframe_copy__776->GetZaxis()->SetTitleOffset(1);
   hframe_copy__776->GetZaxis()->SetTitleFont(43);
   hframe_copy__776->Draw("sameaxis");
   
   TH1F *hframe_copy__777 = new TH1F("hframe_copy__777","",1000,0,1.01);
   hframe_copy__777->SetMinimum(0.01);
   hframe_copy__777->SetMaximum(59018.33);
   hframe_copy__777->SetDirectory(0);
   hframe_copy__777->SetStats(0);
   hframe_copy__777->SetLineStyle(0);
   hframe_copy__777->SetMarkerStyle(20);
   hframe_copy__777->GetXaxis()->SetNdivisions(8);
   hframe_copy__777->GetXaxis()->SetLabelFont(43);
   hframe_copy__777->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__777->GetXaxis()->SetLabelSize(0);
   hframe_copy__777->GetXaxis()->SetTitleSize(0);
   hframe_copy__777->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__777->GetXaxis()->SetTitleFont(43);
   hframe_copy__777->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__777->GetYaxis()->SetLabelFont(43);
   hframe_copy__777->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__777->GetYaxis()->SetLabelSize(27);
   hframe_copy__777->GetYaxis()->SetTitleSize(33);
   hframe_copy__777->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__777->GetYaxis()->SetTitleFont(43);
   hframe_copy__777->GetZaxis()->SetLabelFont(43);
   hframe_copy__777->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__777->GetZaxis()->SetLabelSize(27);
   hframe_copy__777->GetZaxis()->SetTitleSize(33);
   hframe_copy__777->GetZaxis()->SetTitleOffset(1);
   hframe_copy__777->GetZaxis()->SetTitleFont(43);
   hframe_copy__777->Draw("sameaxis");
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
   AssocTopMVA_1->Modified();
   AssocTopMVA->cd();
   AssocTopMVA->Modified();
   AssocTopMVA->cd();
   AssocTopMVA->SetSelected(AssocTopMVA);
}
