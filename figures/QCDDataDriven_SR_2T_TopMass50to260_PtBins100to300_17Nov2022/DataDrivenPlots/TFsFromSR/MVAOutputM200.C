void MVAOutputM200()
{
//=========Macro generated from canvas: MVAOutputM200/MVAOutputM200
//=========  (Fri Nov 18 13:27:15 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3009[18] = {
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
   Double_t BackgroundStatSystError_fy3009[18] = {
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
   Double_t BackgroundStatSystError_felx3009[18] = {
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
   Double_t BackgroundStatSystError_fely3009[18] = {
   0.06188491,
   0.04011711,
   0.04471503,
   0.03737254,
   0.03223033,
   0.02832433,
   0.02555972,
   0.02317898,
   0.02095045,
   0.02054543,
   0.02109412,
   0.02201463,
   0.0260089,
   0.03387266,
   0.04904545,
   0.09208914,
   0.2888546,
   -0.724529};
   Double_t BackgroundStatSystError_fehx3009[18] = {
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
   Double_t BackgroundStatSystError_fehy3009[18] = {
   0.06188491,
   0.04011711,
   0.04471503,
   0.03737254,
   0.03223033,
   0.02832433,
   0.02555972,
   0.02317898,
   0.02095045,
   0.02054543,
   0.02109412,
   0.02201463,
   0.0260089,
   0.03387266,
   0.04904545,
   0.09208914,
   0.2888546,
   -0.724529};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,BackgroundStatSystError_fx3009,BackgroundStatSystError_fy3009,BackgroundStatSystError_felx3009,BackgroundStatSystError_fehx3009,BackgroundStatSystError_fely3009,BackgroundStatSystError_fehy3009);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError300130053009 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError300130053009","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMinimum(0.6533745);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMaximum(1.346626);
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
   0.06188491,
   0.04011711,
   0.04471503,
   0.03737254,
   0.03223033,
   0.02832433,
   0.02555972,
   0.02317898,
   0.02095045,
   0.02054543,
   0.02109412,
   0.02201463,
   0.0260089,
   0.03387266,
   0.04904545,
   0.09208914,
   0.2888546,
   -0.724529};
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
   0.06188491,
   0.04011711,
   0.04471503,
   0.03737254,
   0.03223033,
   0.02832433,
   0.02555972,
   0.02317898,
   0.02095045,
   0.02054543,
   0.02109412,
   0.02201463,
   0.0260089,
   0.03387266,
   0.04904545,
   0.09208914,
   0.2888546,
   -0.724529};
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
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMinimum(0.6533745);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMaximum(1.346626);
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
   
   Double_t Graph1_fx3011[5] = {
   0.05,
   0.15,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3011[5] = {
   0.9195556,
   0.9584929,
   0.9930993,
   0.9746243,
   0.08453101};
   Double_t Graph1_felx3011[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3011[5] = {
   0.068162,
   0.04444904,
   0.04959301,
   0.04286393,
   0.01048478};
   Double_t Graph1_fehx3011[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3011[5] = {
   0.068162,
   0.04444904,
   0.04959301,
   0.04286393,
   0.01048478};
   grae = new TGraphAsymmErrors(5,Graph1_fx3011,Graph1_fy3011,Graph1_felx3011,Graph1_fehx3011,Graph1_fely3011,Graph1_fehy3011);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1300330073011 = new TH1F("Graph_Graph_Graph_Graph1300330073011","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1300330073011->SetMinimum(0.06664161);
   Graph_Graph_Graph_Graph1300330073011->SetMaximum(1.139557);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMinimum(14.516);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMaximum(58063.99);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,99.84024);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,188.99);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,364.4613);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,397.1718);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,522.7751);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,812.9589);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,879.9641);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1214.088);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1364.226);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1383.979);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1247.42);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1261.996);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,988.457);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,539.5385);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,249.7611);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,65.35001);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,8.6799);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.05378395);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,11.62156);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,17.98985);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,35.24885);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,36.9494);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,39.95693);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,54.43718);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,53.36096);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,65.71554);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,62.90788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,59.62785);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,54.58625);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,55.8767);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,57.03778);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,35.92054);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,24.0137);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,10.64211);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,6.792413);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.05553447);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3987.37);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,897.9646);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,2211.349);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3802.649);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,5180.727);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,7036.501);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,9249.247);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,11631.64);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,14507.06);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,17288.4);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,19128.55);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,18845.26);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,16393.14);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,12473.99);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,7530.503);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,3392.459);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,896.8997);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,96.01147);
   TT_stack_2_stack_2_stack_2->SetBinError(1,23.36855);
   TT_stack_2_stack_2_stack_2->SetBinError(2,36.78836);
   TT_stack_2_stack_2_stack_2->SetBinError(3,68.20807);
   TT_stack_2_stack_2_stack_2->SetBinError(4,79.68827);
   TT_stack_2_stack_2_stack_2->SetBinError(5,93.31299);
   TT_stack_2_stack_2_stack_2->SetBinError(6,106.634);
   TT_stack_2_stack_2_stack_2->SetBinError(7,120.0097);
   TT_stack_2_stack_2_stack_2->SetBinError(8,133.9952);
   TT_stack_2_stack_2_stack_2->SetBinError(9,146.5306);
   TT_stack_2_stack_2_stack_2->SetBinError(10,153.8926);
   TT_stack_2_stack_2_stack_2->SetBinError(11,153.2404);
   TT_stack_2_stack_2_stack_2->SetBinError(12,142.4859);
   TT_stack_2_stack_2_stack_2->SetBinError(13,124.5787);
   TT_stack_2_stack_2_stack_2->SetBinError(14,96.69019);
   TT_stack_2_stack_2_stack_2->SetBinError(15,64.4895);
   TT_stack_2_stack_2_stack_2->SetBinError(16,33.47118);
   TT_stack_2_stack_2_stack_2->SetBinError(17,10.9504);
   TT_stack_2_stack_2_stack_2->SetEntries(122837.9);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,981.4121);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2451.027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3908.617);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5031.317);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7819.695);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9640.578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,10890.35);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13240.73);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,16107.13);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,15777.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,14646.26);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,14566.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,10695.35);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,6678.048);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,3356.296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1168.438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,39.00795);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,-2.398069);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,119.6708);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,190.2657);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,352.8499);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,386.6413);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,485.1641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,545.0741);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,583.5501);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,654.5074);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,710.559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,727.098);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,714.5032);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,692.6316);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,613.1964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,488.7923);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,336.2764);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,193.0441);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,39.45737);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,1.697595);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4249.395);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(1,81.47594);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(2,321.1803);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(3,761.0638);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(4,1151.489);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(5,1517.935);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(6,1714.138);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(7,1462.672);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(8,1304.83);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(9,1078.287);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(10,838.4603);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(11,596.0703);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(12,391.5206);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(13,241.4219);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(14,121.8059);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(15,69.39796);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(16,19.46321);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(17,4.667253);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(1,9.106152);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(2,17.54262);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(3,38.94337);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(4,47.98202);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(5,52.55365);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(6,54.33684);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(7,52.79962);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(8,49.41598);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(9,44.98796);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(10,39.65238);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(11,34.02825);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(12,28.32591);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(13,21.96461);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(14,16.14615);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(15,10.92974);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(16,6.45046);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(17,2.604311);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetEntries(6305.223);
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
   1979.217,
   4851.366,
   8075.728,
   10609.22,
   15378.97,
   19702.78,
   23401.96,
   28961.88,
   34759.76,
   36290,
   34738.94,
   32221.29,
   24157.79,
   14748.09,
   6998.516,
   2130.688,
   143.6993,
   -2.344285};
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
   122.4837,
   194.6228,
   361.1065,
   396.4934,
   495.6693,
   558.0681,
   598.1475,
   671.3071,
   728.2326,
   745.5937,
   732.7872,
   709.3398,
   628.3176,
   499.557,
   343.2454,
   196.2132,
   41.50821,
   1.698503};
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
   122.4837,
   194.6228,
   361.1065,
   396.4934,
   495.6693,
   558.0681,
   598.1475,
   671.3071,
   728.2326,
   745.5937,
   732.7872,
   709.3398,
   628.3176,
   499.557,
   343.2454,
   196.2132,
   41.50821,
   1.698503};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMinimum(40.73923);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMaximum(40739.23);
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
   Data__19->SetBinContent(1,1820);
   Data__19->SetBinContent(2,4650);
   Data__19->SetBinContent(3,8020);
   Data__19->SetBinContent(4,10340);
   Data__19->SetBinContent(5,1300);
   Data__19->SetBinError(1,134.9074);
   Data__19->SetBinError(2,215.6386);
   Data__19->SetBinError(3,400.4997);
   Data__19->SetBinError(4,454.7527);
   Data__19->SetBinError(5,161.2452);
   Data__19->SetEntries(1491.105);
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
   MVAOutputM200_1->Modified();
   MVAOutputM200->cd();
   MVAOutputM200->Modified();
   MVAOutputM200->cd();
   MVAOutputM200->SetSelected(MVAOutputM200);
}
