void MVAOutputM200()
{
//=========Macro generated from canvas: MVAOutputM200/MVAOutputM200
//=========  (Fri Nov 18 13:27:37 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM200 = new TCanvas("MVAOutputM200", "MVAOutputM200",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM200->SetHighLightColor(2);
   MVAOutputM200->Range(0,0,1,1);
   MVAOutputM200->SetFillColor(0);
   MVAOutputM200->SetBorderMode(0);
   MVAOutputM200->SetBorderSize(2);
   MVAOutputM200->SetTickx(1);
   MVAOutputM200->SetTicky(1);
   MVAOutputM200->SetLeftMargin(0.16);
   MVAOutputM200->SetRightMargin(0.05);
   MVAOutputM200->SetTopMargin(0.06);
   MVAOutputM200->SetBottomMargin(0.13);
   MVAOutputM200->SetFrameFillStyle(0);
   MVAOutputM200->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM200_2
   TPad *MVAOutputM200_2 = new TPad("MVAOutputM200_2", "MVAOutputM200_2",0,0,1,0.304);
   MVAOutputM200_2->Draw();
   MVAOutputM200_2->cd();
   MVAOutputM200_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM200_2->SetFillColor(0);
   MVAOutputM200_2->SetFillStyle(4000);
   MVAOutputM200_2->SetBorderMode(0);
   MVAOutputM200_2->SetBorderSize(2);
   MVAOutputM200_2->SetTickx(1);
   MVAOutputM200_2->SetTicky(1);
   MVAOutputM200_2->SetLeftMargin(0.16);
   MVAOutputM200_2->SetRightMargin(0.05);
   MVAOutputM200_2->SetTopMargin(0);
   MVAOutputM200_2->SetBottomMargin(0.3421053);
   MVAOutputM200_2->SetFrameFillStyle(0);
   MVAOutputM200_2->SetFrameBorderMode(0);
   MVAOutputM200_2->SetFrameFillStyle(0);
   MVAOutputM200_2->SetFrameBorderMode(0);
   
   TH1F *hframe__15 = new TH1F("hframe__15","",1000,0,1.01);
   hframe__15->SetMinimum(0.3);
   hframe__15->SetMaximum(1.7);
   hframe__15->SetDirectory(0);
   hframe__15->SetStats(0);
   hframe__15->SetLineStyle(0);
   hframe__15->SetMarkerStyle(20);
   hframe__15->GetXaxis()->SetTitle("DNN Output");
   hframe__15->GetXaxis()->SetLabelFont(43);
   hframe__15->GetXaxis()->SetLabelOffset(0.007);
   hframe__15->GetXaxis()->SetLabelSize(27);
   hframe__15->GetXaxis()->SetTitleSize(33);
   hframe__15->GetXaxis()->SetTitleOffset(2.960526);
   hframe__15->GetXaxis()->SetTitleFont(43);
   hframe__15->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__15->GetYaxis()->SetNdivisions(505);
   hframe__15->GetYaxis()->SetLabelFont(43);
   hframe__15->GetYaxis()->SetLabelOffset(0.007);
   hframe__15->GetYaxis()->SetLabelSize(21);
   hframe__15->GetYaxis()->SetTitleSize(33);
   hframe__15->GetYaxis()->SetTitleOffset(1.5625);
   hframe__15->GetYaxis()->SetTitleFont(43);
   hframe__15->GetZaxis()->SetLabelFont(43);
   hframe__15->GetZaxis()->SetLabelOffset(0.007);
   hframe__15->GetZaxis()->SetLabelSize(27);
   hframe__15->GetZaxis()->SetTitleSize(33);
   hframe__15->GetZaxis()->SetTitleOffset(1);
   hframe__15->GetZaxis()->SetTitleFont(43);
   hframe__15->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3009[16] = {
   0.05,
   0.15,
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
   Double_t BackgroundStatSystError_fy3009[16] = {
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
   Double_t BackgroundStatSystError_felx3009[16] = {
   0.05,
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
   0.025};
   Double_t BackgroundStatSystError_fely3009[16] = {
   0.08708063,
   0.0521867,
   0.0591661,
   0.05142376,
   0.04667838,
   0.04884746,
   0.04566945,
   0.04728395,
   0.0486301,
   0.05163069,
   0.05434822,
   0.0637711,
   0.07705539,
   0.1142978,
   0.1999951,
   0.425097};
   Double_t BackgroundStatSystError_fehx3009[16] = {
   0.05,
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
   0.025};
   Double_t BackgroundStatSystError_fehy3009[16] = {
   0.08708063,
   0.0521867,
   0.0591661,
   0.05142376,
   0.04667838,
   0.04884746,
   0.04566945,
   0.04728395,
   0.0486301,
   0.05163069,
   0.05434822,
   0.0637711,
   0.07705539,
   0.1142978,
   0.1999951,
   0.425097};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,BackgroundStatSystError_fx3009,BackgroundStatSystError_fy3009,BackgroundStatSystError_felx3009,BackgroundStatSystError_fehx3009,BackgroundStatSystError_fely3009,BackgroundStatSystError_fehy3009);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1212;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError300130053009 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError300130053009","Graph",100,0,0.99);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMinimum(0.4898835);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMaximum(1.510116);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError300130053009);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3010[18] = {
   0.05,
   0.15,
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
   Double_t BackgroundStatError_fy3010[18] = {
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
   Double_t BackgroundStatError_felx3010[18] = {
   0.05,
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
   Double_t BackgroundStatError_fely3010[18] = {
   0.08708063,
   0.0521867,
   0.0591661,
   0.05142376,
   0.04667838,
   0.04884746,
   0.04566945,
   0.04728395,
   0.0486301,
   0.05163069,
   0.05434822,
   0.0637711,
   0.07705539,
   0.1142978,
   0.1999951,
   0.425097,
   0,
   0};
   Double_t BackgroundStatError_fehx3010[18] = {
   0.05,
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
   Double_t BackgroundStatError_fehy3010[18] = {
   0.08708063,
   0.0521867,
   0.0591661,
   0.05142376,
   0.04667838,
   0.04884746,
   0.04566945,
   0.04728395,
   0.0486301,
   0.05163069,
   0.05434822,
   0.0637711,
   0.07705539,
   0.1142978,
   0.1999951,
   0.425097,
   0,
   0};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3010,BackgroundStatError_fy3010,BackgroundStatError_felx3010,BackgroundStatError_fehx3010,BackgroundStatError_fely3010,BackgroundStatError_fehy3010);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1211;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError300230063010 = new TH1F("Graph_Graph_Graph_BackgroundStatError300230063010","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMinimum(0.4898835);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMaximum(1.510116);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError300230063010->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError300230063010);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx3[2] = {
   0,
   1.01};
   Double_t Graph0_fy3[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx3,Graph0_fy3);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0123 = new TH1F("Graph_Graph_Graph_Graph0123","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0123->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0123->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0123->SetDirectory(0);
   Graph_Graph_Graph_Graph0123->SetStats(0);
   Graph_Graph_Graph_Graph0123->SetLineStyle(0);
   Graph_Graph_Graph_Graph0123->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0123->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0123->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0123->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0123);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3011[16] = {
   0.05,
   0.15,
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
   Double_t Graph1_fy3011[16] = {
   1.033291,
   1.030892,
   1.004435,
   0.9345706,
   0.9236433,
   1.130507,
   1.02349,
   1.054242,
   1.069913,
   1.010744,
   0.9371059,
   0.9722545,
   0.923254,
   1.381832,
   1.326066,
   0.9025802};
   Double_t Graph1_felx3011[16] = {
   0.05,
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
   0.025};
   Double_t Graph1_fely3011[16] = {
   0.06458066,
   0.03874329,
   0.04362986,
   0.03665688,
   0.03294527,
   0.03846064,
   0.03392836,
   0.03588681,
   0.03698159,
   0.03864675,
   0.03877772,
   0.04608929,
   0.05375392,
   0.09795551,
   0.1711944,
   0.3008601};
   Double_t Graph1_fehx3011[16] = {
   0.05,
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
   0.025};
   Double_t Graph1_fehy3011[16] = {
   0.06458066,
   0.03874329,
   0.04362986,
   0.03665688,
   0.03294527,
   0.03846064,
   0.03392836,
   0.03588681,
   0.03698159,
   0.03864675,
   0.03877772,
   0.04608929,
   0.05375392,
   0.09795551,
   0.1711944,
   0.3008601};
   grae = new TGraphAsymmErrors(16,Graph1_fx3011,Graph1_fy3011,Graph1_felx3011,Graph1_fehx3011,Graph1_fely3011,Graph1_fehy3011);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1300330073011 = new TH1F("Graph_Graph_Graph_Graph1300330073011","Graph",100,0,0.99);
   Graph_Graph_Graph_Graph1300330073011->SetMinimum(0.512166);
   Graph_Graph_Graph_Graph1300330073011->SetMaximum(1.586815);
   Graph_Graph_Graph_Graph1300330073011->SetDirectory(0);
   Graph_Graph_Graph_Graph1300330073011->SetStats(0);
   Graph_Graph_Graph_Graph1300330073011->SetLineStyle(0);
   Graph_Graph_Graph_Graph1300330073011->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1300330073011->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1300330073011->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1300330073011->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1300330073011);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__16 = new TH1F("hframe_copy__16","",1000,0,1.01);
   hframe_copy__16->SetMinimum(0.3);
   hframe_copy__16->SetMaximum(1.7);
   hframe_copy__16->SetDirectory(0);
   hframe_copy__16->SetStats(0);
   hframe_copy__16->SetLineStyle(0);
   hframe_copy__16->SetMarkerStyle(20);
   hframe_copy__16->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__16->GetXaxis()->SetLabelFont(43);
   hframe_copy__16->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__16->GetXaxis()->SetLabelSize(27);
   hframe_copy__16->GetXaxis()->SetTitleSize(33);
   hframe_copy__16->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__16->GetXaxis()->SetTitleFont(43);
   hframe_copy__16->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__16->GetYaxis()->SetNdivisions(505);
   hframe_copy__16->GetYaxis()->SetLabelFont(43);
   hframe_copy__16->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__16->GetYaxis()->SetLabelSize(21);
   hframe_copy__16->GetYaxis()->SetTitleSize(33);
   hframe_copy__16->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__16->GetYaxis()->SetTitleFont(43);
   hframe_copy__16->GetZaxis()->SetLabelFont(43);
   hframe_copy__16->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__16->GetZaxis()->SetLabelSize(27);
   hframe_copy__16->GetZaxis()->SetTitleSize(33);
   hframe_copy__16->GetZaxis()->SetTitleOffset(1);
   hframe_copy__16->GetZaxis()->SetTitleFont(43);
   hframe_copy__16->Draw("sameaxis");
   MVAOutputM200_2->Modified();
   MVAOutputM200->cd();
  
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
   MVAOutputM200->cd();
  
// ------------>Primitives in pad: MVAOutputM200_1
   TPad *MVAOutputM200_1 = new TPad("MVAOutputM200_1", "MVAOutputM200_1",0,0.2897959,1,1);
   MVAOutputM200_1->Draw();
   MVAOutputM200_1->cd();
   MVAOutputM200_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM200_1->SetFillColor(0);
   MVAOutputM200_1->SetFillStyle(4000);
   MVAOutputM200_1->SetBorderMode(0);
   MVAOutputM200_1->SetBorderSize(2);
   MVAOutputM200_1->SetLogy();
   MVAOutputM200_1->SetTickx(1);
   MVAOutputM200_1->SetTicky(1);
   MVAOutputM200_1->SetLeftMargin(0.16);
   MVAOutputM200_1->SetRightMargin(0.05);
   MVAOutputM200_1->SetTopMargin(0.06);
   MVAOutputM200_1->SetBottomMargin(0.02);
   MVAOutputM200_1->SetFrameFillStyle(0);
   MVAOutputM200_1->SetFrameBorderMode(0);
   MVAOutputM200_1->SetFrameFillStyle(0);
   MVAOutputM200_1->SetFrameBorderMode(0);
   
   TH1F *hframe__17 = new TH1F("hframe__17","",1000,0,1.01);
   hframe__17->SetMinimum(0.01);
   hframe__17->SetMaximum(500000);
   hframe__17->SetDirectory(0);
   hframe__17->SetStats(0);
   hframe__17->SetLineStyle(0);
   hframe__17->SetMarkerStyle(20);
   hframe__17->GetXaxis()->SetLabelFont(43);
   hframe__17->GetXaxis()->SetLabelOffset(0.007);
   hframe__17->GetXaxis()->SetLabelSize(0);
   hframe__17->GetXaxis()->SetTitleSize(0);
   hframe__17->GetXaxis()->SetTitleOffset(0.9);
   hframe__17->GetXaxis()->SetTitleFont(43);
   hframe__17->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__17->GetYaxis()->SetLabelFont(43);
   hframe__17->GetYaxis()->SetLabelOffset(0.007);
   hframe__17->GetYaxis()->SetLabelSize(27);
   hframe__17->GetYaxis()->SetTitleSize(33);
   hframe__17->GetYaxis()->SetTitleOffset(1.5625);
   hframe__17->GetYaxis()->SetTitleFont(43);
   hframe__17->GetZaxis()->SetLabelFont(43);
   hframe__17->GetZaxis()->SetLabelOffset(0.007);
   hframe__17->GetZaxis()->SetLabelSize(27);
   hframe__17->GetZaxis()->SetTitleSize(33);
   hframe__17->GetZaxis()->SetTitleOffset(1);
   hframe__17->GetZaxis()->SetTitleFont(43);
   hframe__17->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis13[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_1_stack_2_stack_3 = new TH1F("StackedMCstackHist_stack_1_stack_2_stack_3","StackedMCstackHist",18, xAxis13);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMinimum(7.112918);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMaximum(28451.67);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetDirectory(0);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetStats(0);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetLineStyle(0);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMarkerStyle(20);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_1_stack_2_stack_3->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_1_stack_2_stack_3);
   
   Double_t xAxis14[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM200Inclusive",18, xAxis14);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,36.95925);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,89.09759);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,146.5424);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,196.2034);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,193.8871);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,217.1743);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,266.925);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,213.0299);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,241.6069);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,175.2325);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,123.8122);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,93.09177);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,95.64384);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,55.99909);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,13.03523);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.9810706);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,8.33793);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,19.2765);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,24.80726);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,38.57568);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,25.72739);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,26.9789);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,45.91494);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,30.98391);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,48.32696);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,29.70389);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,20.17459);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,16.62208);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,36.30435);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,25.43465);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,6.033166);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.7420103);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(361.2588);
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
   Double_t xAxis15[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM200Inclusive",18, xAxis15);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,367.4048);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,963.0417);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1561.904);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1931.049);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2303.313);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2525.872);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2750.493);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2866.541);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2606.025);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2542.093);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2093.384);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1561.533);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1041.839);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,616.5353);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,233.8596);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,31.99722);
   TT_stack_2_stack_2_stack_2->SetBinError(1,14.90914);
   TT_stack_2_stack_2_stack_2->SetBinError(2,24.22268);
   TT_stack_2_stack_2_stack_2->SetBinError(3,43.66237);
   TT_stack_2_stack_2_stack_2->SetBinError(4,48.19749);
   TT_stack_2_stack_2_stack_2->SetBinError(5,53.43593);
   TT_stack_2_stack_2_stack_2->SetBinError(6,55.48839);
   TT_stack_2_stack_2_stack_2->SetBinError(7,58.01931);
   TT_stack_2_stack_2_stack_2->SetBinError(8,59.44881);
   TT_stack_2_stack_2_stack_2->SetBinError(9,56.51635);
   TT_stack_2_stack_2_stack_2->SetBinError(10,56.357);
   TT_stack_2_stack_2_stack_2->SetBinError(11,50.85799);
   TT_stack_2_stack_2_stack_2->SetBinError(12,43.89585);
   TT_stack_2_stack_2_stack_2->SetBinError(13,35.74215);
   TT_stack_2_stack_2_stack_2->SetBinError(14,27.60996);
   TT_stack_2_stack_2_stack_2->SetBinError(15,16.94004);
   TT_stack_2_stack_2_stack_2->SetBinError(16,6.476102);
   TT_stack_2_stack_2_stack_2->SetEntries(21713.33);
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
   Double_t xAxis16[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM200Inclusive",18, xAxis16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,2073.158);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,5815.701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,8844.752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11782.88);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,14522.36);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,12542.13);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,14764.88);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13292.38);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,12798.51);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,10817.26);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,10246.71);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,7499.357);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5252.958);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2207.699);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,658.0373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,166.45);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,215.0668);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,357.0705);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,622.3689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,712.6423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,792.2286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,744.0881);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,808.7302);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,771.2225);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,757.2308);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,695.8902);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,675.1779);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,581.8694);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,489.7753);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,327.0568);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,180.0864);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,84.52539);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3096.234);
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
   Double_t xAxis17[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__18 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__18","h_SR_MVAOutputM200Inclusive",18, xAxis17);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(1,-0.0529272);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(2,12.97601);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(3,9.730155);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(4,15.09158);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(5,17.67392);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(6,12.22439);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(7,14.3306);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(8,6.418209);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(9,9.179492);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(10,-1.772085);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(11,2.6388);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(12,2.284183);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(13,4.625853);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(14,0.0397322);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(15,1.24501);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(16,-0.478877);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(1,2.319478);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(2,3.368457);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(3,5.823387);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(4,6.279053);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(5,6.686245);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(6,6.353449);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(7,5.32185);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(8,5.29163);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(9,4.57239);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(10,3.964502);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(11,3.084794);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(12,2.697916);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(13,1.947324);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(14,0.75866);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(15,0.8814153);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(16,0.478877);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetEntries(38.82364);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3012[18] = {
   0.05,
   0.15,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3012[18] = {
   2477.522,
   6867.84,
   10553.2,
   13910.13,
   17019.56,
   15285.17,
   17782.3,
   16371.95,
   15646.14,
   13534.59,
   12463.91,
   9153.981,
   6390.441,
   2880.233,
   904.9321,
   199.4283,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3012[18] = {
   0.05,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3012[18] = {
   215.7441,
   358.4099,
   624.3915,
   715.3113,
   794.4454,
   746.6418,
   812.1077,
   774.1307,
   760.8732,
   698.8001,
   677.3911,
   583.7595,
   492.4179,
   329.2042,
   180.982,
   84.77637,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3012[18] = {
   0.05,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3012[18] = {
   215.7441,
   358.4099,
   624.3915,
   715.3113,
   794.4454,
   746.6418,
   812.1077,
   774.1307,
   760.8732,
   698.8001,
   677.3911,
   583.7595,
   492.4179,
   329.2042,
   180.982,
   84.77637,
   0,
   0};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3012,BkgSum-SR-Inclusive_sum_errors_fy3012,BkgSum-SR-Inclusive_sum_errors_felx3012,BkgSum-SR-Inclusive_sum_errors_fehx3012,BkgSum-SR-Inclusive_sum_errors_fely3012,BkgSum-SR-Inclusive_sum_errors_fehy3012);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1210;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMinimum(20.45385);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMaximum(20453.85);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors300430083012);
   
   grae->Draw("e2 ");
   Double_t xAxis18[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__19 = new TH1F("Data__19","h_SR_MVAOutputM200Inclusive",18, xAxis18);
   Data__19->SetBinContent(1,2560);
   Data__19->SetBinContent(2,7080);
   Data__19->SetBinContent(3,10600);
   Data__19->SetBinContent(4,13000);
   Data__19->SetBinContent(5,15720);
   Data__19->SetBinContent(6,17280);
   Data__19->SetBinContent(7,18200);
   Data__19->SetBinContent(8,17260);
   Data__19->SetBinContent(9,16740);
   Data__19->SetBinContent(10,13680);
   Data__19->SetBinContent(11,11680);
   Data__19->SetBinContent(12,8900);
   Data__19->SetBinContent(13,5900);
   Data__19->SetBinContent(14,3980);
   Data__19->SetBinContent(15,1200);
   Data__19->SetBinContent(16,180);
   Data__19->SetBinError(1,160);
   Data__19->SetBinError(2,266.0827);
   Data__19->SetBinError(3,460.4346);
   Data__19->SetBinError(4,509.902);
   Data__19->SetBinError(5,560.7138);
   Data__19->SetBinError(6,587.8775);
   Data__19->SetBinError(7,603.3241);
   Data__19->SetBinError(8,587.5372);
   Data__19->SetBinError(9,578.619);
   Data__19->SetBinError(10,523.0679);
   Data__19->SetBinError(11,483.3218);
   Data__19->SetBinError(12,421.9005);
   Data__19->SetBinError(13,343.5113);
   Data__19->SetBinError(14,282.1347);
   Data__19->SetBinError(15,154.9193);
   Data__19->SetBinError(16,60);
   Data__19->SetEntries(8446.299);
   Data__19->SetDirectory(0);
   Data__19->SetFillStyle(3001);
   Data__19->SetLineWidth(2);
   Data__19->SetMarkerStyle(20);
   Data__19->SetMarkerSize(1.2);
   Data__19->GetXaxis()->SetRange(1,200);
   Data__19->GetXaxis()->SetLabelFont(42);
   Data__19->GetXaxis()->SetTitleOffset(1);
   Data__19->GetXaxis()->SetTitleFont(42);
   Data__19->GetYaxis()->SetLabelFont(42);
   Data__19->GetYaxis()->SetTitleFont(42);
   Data__19->GetZaxis()->SetLabelFont(42);
   Data__19->GetZaxis()->SetTitleOffset(1);
   Data__19->GetZaxis()->SetTitleFont(42);
   Data__19->Draw("EP same");
   
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

   ci = 1210;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1210;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__20 = new TH1F("hframe_copy__20","",1000,0,1.01);
   hframe_copy__20->SetMinimum(0.01);
   hframe_copy__20->SetMaximum(500000);
   hframe_copy__20->SetDirectory(0);
   hframe_copy__20->SetStats(0);
   hframe_copy__20->SetLineStyle(0);
   hframe_copy__20->SetMarkerStyle(20);
   hframe_copy__20->GetXaxis()->SetLabelFont(43);
   hframe_copy__20->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__20->GetXaxis()->SetLabelSize(0);
   hframe_copy__20->GetXaxis()->SetTitleSize(0);
   hframe_copy__20->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__20->GetXaxis()->SetTitleFont(43);
   hframe_copy__20->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__20->GetYaxis()->SetLabelFont(43);
   hframe_copy__20->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__20->GetYaxis()->SetLabelSize(27);
   hframe_copy__20->GetYaxis()->SetTitleSize(33);
   hframe_copy__20->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__20->GetYaxis()->SetTitleFont(43);
   hframe_copy__20->GetZaxis()->SetLabelFont(43);
   hframe_copy__20->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__20->GetZaxis()->SetLabelSize(27);
   hframe_copy__20->GetZaxis()->SetTitleSize(33);
   hframe_copy__20->GetZaxis()->SetTitleOffset(1);
   hframe_copy__20->GetZaxis()->SetTitleFont(43);
   hframe_copy__20->Draw("sameaxis");
   
   TH1F *hframe_copy__21 = new TH1F("hframe_copy__21","",1000,0,1.01);
   hframe_copy__21->SetMinimum(0.01);
   hframe_copy__21->SetMaximum(500000);
   hframe_copy__21->SetDirectory(0);
   hframe_copy__21->SetStats(0);
   hframe_copy__21->SetLineStyle(0);
   hframe_copy__21->SetMarkerStyle(20);
   hframe_copy__21->GetXaxis()->SetLabelFont(43);
   hframe_copy__21->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__21->GetXaxis()->SetLabelSize(0);
   hframe_copy__21->GetXaxis()->SetTitleSize(0);
   hframe_copy__21->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__21->GetXaxis()->SetTitleFont(43);
   hframe_copy__21->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__21->GetYaxis()->SetLabelFont(43);
   hframe_copy__21->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__21->GetYaxis()->SetLabelSize(27);
   hframe_copy__21->GetYaxis()->SetTitleSize(33);
   hframe_copy__21->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__21->GetYaxis()->SetTitleFont(43);
   hframe_copy__21->GetZaxis()->SetLabelFont(43);
   hframe_copy__21->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__21->GetZaxis()->SetLabelSize(27);
   hframe_copy__21->GetZaxis()->SetTitleSize(33);
   hframe_copy__21->GetZaxis()->SetTitleOffset(1);
   hframe_copy__21->GetZaxis()->SetTitleFont(43);
   hframe_copy__21->Draw("sameaxis");
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
   MVAOutputM200_1->Modified();
   MVAOutputM200->cd();
   MVAOutputM200->Modified();
   MVAOutputM200->cd();
   MVAOutputM200->SetSelected(MVAOutputM200);
}
