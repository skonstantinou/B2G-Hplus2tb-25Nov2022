void MVAOutputM800()
{
//=========Macro generated from canvas: MVAOutputM800/MVAOutputM800
//=========  (Fri Nov 18 13:27:53 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM800 = new TCanvas("MVAOutputM800", "MVAOutputM800",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM800->SetHighLightColor(2);
   MVAOutputM800->Range(0,0,1,1);
   MVAOutputM800->SetFillColor(0);
   MVAOutputM800->SetBorderMode(0);
   MVAOutputM800->SetBorderSize(2);
   MVAOutputM800->SetTickx(1);
   MVAOutputM800->SetTicky(1);
   MVAOutputM800->SetLeftMargin(0.16);
   MVAOutputM800->SetRightMargin(0.05);
   MVAOutputM800->SetTopMargin(0.06);
   MVAOutputM800->SetBottomMargin(0.13);
   MVAOutputM800->SetFrameFillStyle(0);
   MVAOutputM800->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM800_2
   TPad *MVAOutputM800_2 = new TPad("MVAOutputM800_2", "MVAOutputM800_2",0,0,1,0.304);
   MVAOutputM800_2->Draw();
   MVAOutputM800_2->cd();
   MVAOutputM800_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM800_2->SetFillColor(0);
   MVAOutputM800_2->SetFillStyle(4000);
   MVAOutputM800_2->SetBorderMode(0);
   MVAOutputM800_2->SetBorderSize(2);
   MVAOutputM800_2->SetTickx(1);
   MVAOutputM800_2->SetTicky(1);
   MVAOutputM800_2->SetLeftMargin(0.16);
   MVAOutputM800_2->SetRightMargin(0.05);
   MVAOutputM800_2->SetTopMargin(0);
   MVAOutputM800_2->SetBottomMargin(0.3421053);
   MVAOutputM800_2->SetFrameFillStyle(0);
   MVAOutputM800_2->SetFrameBorderMode(0);
   MVAOutputM800_2->SetFrameFillStyle(0);
   MVAOutputM800_2->SetFrameBorderMode(0);
   
   TH1F *hframe__204 = new TH1F("hframe__204","",1000,0,1.01);
   hframe__204->SetMinimum(0.3);
   hframe__204->SetMaximum(1.7);
   hframe__204->SetDirectory(0);
   hframe__204->SetStats(0);
   hframe__204->SetLineStyle(0);
   hframe__204->SetMarkerStyle(20);
   hframe__204->GetXaxis()->SetTitle("DNN Output");
   hframe__204->GetXaxis()->SetLabelFont(43);
   hframe__204->GetXaxis()->SetLabelOffset(0.007);
   hframe__204->GetXaxis()->SetLabelSize(27);
   hframe__204->GetXaxis()->SetTitleSize(33);
   hframe__204->GetXaxis()->SetTitleOffset(2.960526);
   hframe__204->GetXaxis()->SetTitleFont(43);
   hframe__204->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__204->GetYaxis()->SetNdivisions(505);
   hframe__204->GetYaxis()->SetLabelFont(43);
   hframe__204->GetYaxis()->SetLabelOffset(0.007);
   hframe__204->GetYaxis()->SetLabelSize(21);
   hframe__204->GetYaxis()->SetTitleSize(33);
   hframe__204->GetYaxis()->SetTitleOffset(1.5625);
   hframe__204->GetYaxis()->SetTitleFont(43);
   hframe__204->GetZaxis()->SetLabelFont(43);
   hframe__204->GetZaxis()->SetLabelOffset(0.007);
   hframe__204->GetZaxis()->SetLabelSize(27);
   hframe__204->GetZaxis()->SetTitleSize(33);
   hframe__204->GetZaxis()->SetTitleOffset(1);
   hframe__204->GetZaxis()->SetTitleFont(43);
   hframe__204->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3117[20] = {
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
   Double_t BackgroundStatSystError_fy3117[20] = {
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
   Double_t BackgroundStatSystError_felx3117[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3117[20] = {
   0.02570535,
   0.02344438,
   0.0244431,
   0.02677874,
   0.02917089,
   0.03109445,
   0.03391731,
   0.03590193,
   0.04037278,
   0.04118008,
   0.042377,
   0.043452,
   0.04749112,
   0.04783991,
   0.05040354,
   0.05135617,
   0.05170002,
   0.05420676,
   0.05986177,
   0.09832602};
   Double_t BackgroundStatSystError_fehx3117[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3117[20] = {
   0.02570535,
   0.02344438,
   0.0244431,
   0.02677874,
   0.02917089,
   0.03109445,
   0.03391731,
   0.03590193,
   0.04037278,
   0.04118008,
   0.042377,
   0.043452,
   0.04749112,
   0.04783991,
   0.05040354,
   0.05135617,
   0.05170002,
   0.05420676,
   0.05986177,
   0.09832602};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3117,BackgroundStatSystError_fy3117,BackgroundStatSystError_felx3117,BackgroundStatSystError_fehx3117,BackgroundStatSystError_fely3117,BackgroundStatSystError_fehy3117);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1239;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError310931133117 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError310931133117","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMinimum(0.8820088);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMaximum(1.117991);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError310931133117);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3118[20] = {
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
   Double_t BackgroundStatError_fy3118[20] = {
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
   Double_t BackgroundStatError_felx3118[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3118[20] = {
   0.02570535,
   0.02344438,
   0.0244431,
   0.02677874,
   0.02917089,
   0.03109445,
   0.03391731,
   0.03590193,
   0.04037278,
   0.04118008,
   0.042377,
   0.043452,
   0.04749112,
   0.04783991,
   0.05040354,
   0.05135617,
   0.05170002,
   0.05420676,
   0.05986177,
   0.09832602};
   Double_t BackgroundStatError_fehx3118[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3118[20] = {
   0.02570535,
   0.02344438,
   0.0244431,
   0.02677874,
   0.02917089,
   0.03109445,
   0.03391731,
   0.03590193,
   0.04037278,
   0.04118008,
   0.042377,
   0.043452,
   0.04749112,
   0.04783991,
   0.05040354,
   0.05135617,
   0.05170002,
   0.05420676,
   0.05986177,
   0.09832602};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3118,BackgroundStatError_fy3118,BackgroundStatError_felx3118,BackgroundStatError_fehx3118,BackgroundStatError_fely3118,BackgroundStatError_fehy3118);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1238;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError311031143118 = new TH1F("Graph_Graph_Graph_BackgroundStatError311031143118","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMinimum(0.8820088);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMaximum(1.117991);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError311031143118->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError311031143118);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx30[2] = {
   0,
   1.01};
   Double_t Graph0_fy30[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx30,Graph0_fy30);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0282930 = new TH1F("Graph_Graph_Graph_Graph0282930","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0282930->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0282930->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0282930->SetDirectory(0);
   Graph_Graph_Graph_Graph0282930->SetStats(0);
   Graph_Graph_Graph_Graph0282930->SetLineStyle(0);
   Graph_Graph_Graph_Graph0282930->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0282930->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0282930->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0282930->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0282930);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3119[20] = {
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
   Double_t Graph1_fy3119[20] = {
   0.8850438,
   0.9686117,
   0.9405608,
   1.063597,
   1.01987,
   1.031941,
   0.9908346,
   0.9561737,
   1.179643,
   1.078075,
   1.091418,
   0.9379564,
   1.065618,
   0.9799111,
   1.128606,
   0.9884698,
   0.9602687,
   1.027557,
   1.079533,
   1.095537};
   Double_t Graph1_felx3119[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3119[20] = {
   0.0252048,
   0.02556959,
   0.02632033,
   0.0307547,
   0.03190211,
   0.03464919,
   0.03627703,
   0.03721901,
   0.04768423,
   0.04635007,
   0.0480005,
   0.04481729,
   0.05334761,
   0.05053506,
   0.05580595,
   0.05376567,
   0.05359697,
   0.05836133,
   0.0654563,
   0.1084743};
   Double_t Graph1_fehx3119[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3119[20] = {
   0.0252048,
   0.02556959,
   0.02632033,
   0.0307547,
   0.03190211,
   0.03464919,
   0.03627703,
   0.03721901,
   0.04768423,
   0.04635007,
   0.0480005,
   0.04481729,
   0.05334761,
   0.05053506,
   0.05580595,
   0.05376567,
   0.05359697,
   0.05836133,
   0.0654563,
   0.1084743};
   grae = new TGraphAsymmErrors(20,Graph1_fx3119,Graph1_fy3119,Graph1_felx3119,Graph1_fehx3119,Graph1_fely3119,Graph1_fehy3119);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1311131153119 = new TH1F("Graph_Graph_Graph_Graph1311131153119","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1311131153119->SetMinimum(0.8230902);
   Graph_Graph_Graph_Graph1311131153119->SetMaximum(1.264076);
   Graph_Graph_Graph_Graph1311131153119->SetDirectory(0);
   Graph_Graph_Graph_Graph1311131153119->SetStats(0);
   Graph_Graph_Graph_Graph1311131153119->SetLineStyle(0);
   Graph_Graph_Graph_Graph1311131153119->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1311131153119->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1311131153119->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1311131153119->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1311131153119);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__205 = new TH1F("hframe_copy__205","",1000,0,1.01);
   hframe_copy__205->SetMinimum(0.3);
   hframe_copy__205->SetMaximum(1.7);
   hframe_copy__205->SetDirectory(0);
   hframe_copy__205->SetStats(0);
   hframe_copy__205->SetLineStyle(0);
   hframe_copy__205->SetMarkerStyle(20);
   hframe_copy__205->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__205->GetXaxis()->SetLabelFont(43);
   hframe_copy__205->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__205->GetXaxis()->SetLabelSize(27);
   hframe_copy__205->GetXaxis()->SetTitleSize(33);
   hframe_copy__205->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__205->GetXaxis()->SetTitleFont(43);
   hframe_copy__205->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__205->GetYaxis()->SetNdivisions(505);
   hframe_copy__205->GetYaxis()->SetLabelFont(43);
   hframe_copy__205->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__205->GetYaxis()->SetLabelSize(21);
   hframe_copy__205->GetYaxis()->SetTitleSize(33);
   hframe_copy__205->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__205->GetYaxis()->SetTitleFont(43);
   hframe_copy__205->GetZaxis()->SetLabelFont(43);
   hframe_copy__205->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__205->GetZaxis()->SetLabelSize(27);
   hframe_copy__205->GetZaxis()->SetTitleSize(33);
   hframe_copy__205->GetZaxis()->SetTitleOffset(1);
   hframe_copy__205->GetZaxis()->SetTitleFont(43);
   hframe_copy__205->Draw("sameaxis");
   MVAOutputM800_2->Modified();
   MVAOutputM800->cd();
  
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
   MVAOutputM800->cd();
  
// ------------>Primitives in pad: MVAOutputM800_1
   TPad *MVAOutputM800_1 = new TPad("MVAOutputM800_1", "MVAOutputM800_1",0,0.2897959,1,1);
   MVAOutputM800_1->Draw();
   MVAOutputM800_1->cd();
   MVAOutputM800_1->Range(-0.204557,-2.15928,1.073924,5.804735);
   MVAOutputM800_1->SetFillColor(0);
   MVAOutputM800_1->SetFillStyle(4000);
   MVAOutputM800_1->SetBorderMode(0);
   MVAOutputM800_1->SetBorderSize(2);
   MVAOutputM800_1->SetLogy();
   MVAOutputM800_1->SetTickx(1);
   MVAOutputM800_1->SetTicky(1);
   MVAOutputM800_1->SetLeftMargin(0.16);
   MVAOutputM800_1->SetRightMargin(0.05);
   MVAOutputM800_1->SetTopMargin(0.06);
   MVAOutputM800_1->SetBottomMargin(0.02);
   MVAOutputM800_1->SetFrameFillStyle(0);
   MVAOutputM800_1->SetFrameBorderMode(0);
   MVAOutputM800_1->SetFrameFillStyle(0);
   MVAOutputM800_1->SetFrameBorderMode(0);
   
   TH1F *hframe__206 = new TH1F("hframe__206","",1000,0,1.01);
   hframe__206->SetMinimum(0.01);
   hframe__206->SetMaximum(212272.9);
   hframe__206->SetDirectory(0);
   hframe__206->SetStats(0);
   hframe__206->SetLineStyle(0);
   hframe__206->SetMarkerStyle(20);
   hframe__206->GetXaxis()->SetLabelFont(43);
   hframe__206->GetXaxis()->SetLabelOffset(0.007);
   hframe__206->GetXaxis()->SetLabelSize(0);
   hframe__206->GetXaxis()->SetTitleSize(0);
   hframe__206->GetXaxis()->SetTitleOffset(0.9);
   hframe__206->GetXaxis()->SetTitleFont(43);
   hframe__206->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__206->GetYaxis()->SetLabelFont(43);
   hframe__206->GetYaxis()->SetLabelOffset(0.007);
   hframe__206->GetYaxis()->SetLabelSize(27);
   hframe__206->GetYaxis()->SetTitleSize(33);
   hframe__206->GetYaxis()->SetTitleOffset(1.5625);
   hframe__206->GetYaxis()->SetTitleFont(43);
   hframe__206->GetZaxis()->SetLabelFont(43);
   hframe__206->GetZaxis()->SetLabelOffset(0.007);
   hframe__206->GetZaxis()->SetLabelSize(27);
   hframe__206->GetZaxis()->SetTitleSize(33);
   hframe__206->GetZaxis()->SetTitleOffset(1);
   hframe__206->GetZaxis()->SetTitleFont(43);
   hframe__206->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis175[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_28_stack_29_stack_30 = new TH1F("StackedMCstackHist_stack_28_stack_29_stack_30","StackedMCstackHist",20, xAxis175);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMinimum(12.19238);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMaximum(47341.02);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetDirectory(0);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetStats(0);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetLineStyle(0);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMarkerStyle(20);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_28_stack_29_stack_30->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_28_stack_29_stack_30);
   
   Double_t xAxis176[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM800Inclusive",20, xAxis176);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,570.3417);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,557.7496);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,578.0641);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,453.2839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,465.875);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,365.8816);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,351.1347);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,265.2338);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,261.7921);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,221.4605);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,234.8395);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,221.3374);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,138.202);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,174.7358);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,198.6529);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,158.0209);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,166.0495);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,171.3258);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,111.6394);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,43.6383);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,47.82716);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,46.53614);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,55.32329);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,42.38841);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,56.03479);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,38.486);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,47.93175);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,28.48275);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,31.3246);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,30.66899);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,43.62907);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,28.08167);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,25.40174);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,27.73402);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,30.17958);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,22.65189);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,25.48684);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,22.31702);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,19.39301);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,9.847213);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1248.243);
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
   Double_t xAxis177[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM800Inclusive",20, xAxis177);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,9541.736);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,10476.42);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,8760.862);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,7338.121);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,6188.41);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,5255.826);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,4428.967);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,3815.605);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,3394.42);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,3047.63);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2658.102);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2469.444);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2267.567);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2031.924);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1762.444);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1566.174);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1465.726);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1296.49);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1056.399);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,366.9649);
   TT_stack_2_stack_2_stack_2->SetBinError(1,105.8812);
   TT_stack_2_stack_2_stack_2->SetBinError(2,110.7345);
   TT_stack_2_stack_2_stack_2->SetBinError(3,101.5979);
   TT_stack_2_stack_2_stack_2->SetBinError(4,93.19423);
   TT_stack_2_stack_2_stack_2->SetBinError(5,85.79695);
   TT_stack_2_stack_2_stack_2->SetBinError(6,78.71404);
   TT_stack_2_stack_2_stack_2->SetBinError(7,72.18678);
   TT_stack_2_stack_2_stack_2->SetBinError(8,67.23124);
   TT_stack_2_stack_2_stack_2->SetBinError(9,63.26831);
   TT_stack_2_stack_2_stack_2->SetBinError(10,59.64565);
   TT_stack_2_stack_2_stack_2->SetBinError(11,55.76732);
   TT_stack_2_stack_2_stack_2->SetBinError(12,54.15755);
   TT_stack_2_stack_2_stack_2->SetBinError(13,51.96507);
   TT_stack_2_stack_2_stack_2->SetBinError(14,49.10489);
   TT_stack_2_stack_2_stack_2->SetBinError(15,46.01171);
   TT_stack_2_stack_2_stack_2->SetBinError(16,43.42608);
   TT_stack_2_stack_2_stack_2->SetBinError(17,42.15177);
   TT_stack_2_stack_2_stack_2->SetBinError(18,39.7831);
   TT_stack_2_stack_2_stack_2->SetBinError(19,35.73143);
   TT_stack_2_stack_2_stack_2->SetBinError(20,21.1378);
   TT_stack_2_stack_2_stack_2->SetEntries(67019.12);
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
   Double_t xAxis178[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM800Inclusive",20, xAxis178);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,17750.95);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,18595.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,17815.09);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,14698.32);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,13387.48);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,11569.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,10277.91);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,9724.184);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,6719.81);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,6767.316);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,6580.974);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,6648.672);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5082.845);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,5467.505);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,5286.785);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,5114.658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,5053.854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,4565.912);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,3871.178);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1451.498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,706.743);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,684.1942);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,653.5691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,593.4803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,575.5854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,527.3119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,503.3229);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,490.2192);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,412.9171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,407.8219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,395.1829);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,401.2063);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,350.9075);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,362.774);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,361.151);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,347.7854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,342.1193);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,323.8723);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,298.9043);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,181.602);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7148.648);
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
   Double_t xAxis179[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__207 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__207","h_SR_MVAOutputM800Inclusive",20, xAxis179);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(1,10.92268);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(2,16.1391);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(3,8.629167);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(4,37.73532);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(5,18.084);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(6,22.42194);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(7,23.05118);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(8,8.586935);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(9,19.73785);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(10,21.61445);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(11,31.05864);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(12,19.65398);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(13,23.10716);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(14,17.06537);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(15,25.68573);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(16,32.12617);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(17,28.92687);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(18,41.03594);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(19,12.60044);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(20,7.033523);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(1,4.834161);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(2,5.885149);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(3,6.590603);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(4,7.235379);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(5,7.532845);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(6,7.421366);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(7,8.218659);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(8,7.992612);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(9,7.836791);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(10,8.264971);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(11,8.320363);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(12,8.466466);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(13,8.561149);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(14,8.568792);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(15,9.065575);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(16,9.154216);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(17,9.035045);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(18,9.341836);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(19,8.756551);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(20,5.088904);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetEntries(144.4332);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3120[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3120[20] = {
   27863.03,
   29630.04,
   27154.01,
   22489.72,
   20041.77,
   17190.91,
   15058.01,
   13805.02,
   10376.02,
   10036.41,
   9473.915,
   9339.453,
   7488.614,
   7674.166,
   7247.882,
   6838.853,
   6685.629,
   6033.728,
   5039.216,
   1862.101};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3120[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3120[20] = {
   716.2289,
   694.6577,
   663.7284,
   602.2465,
   584.6362,
   534.5418,
   510.7273,
   495.627,
   418.9088,
   413.3,
   401.4761,
   405.8179,
   355.6427,
   367.1314,
   365.3189,
   351.2173,
   345.6472,
   327.0688,
   301.6564,
   183.093};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3120[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3120[20] = {
   716.2289,
   694.6577,
   663.7284,
   602.2465,
   584.6362,
   534.5418,
   510.7273,
   495.627,
   418.9088,
   413.3,
   401.4761,
   405.8179,
   355.6427,
   367.1314,
   365.3189,
   351.2173,
   345.6472,
   327.0688,
   301.6564,
   183.093};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3120,BkgSum-SR-Inclusive_sum_errors_fy3120,BkgSum-SR-Inclusive_sum_errors_felx3120,BkgSum-SR-Inclusive_sum_errors_fehx3120,BkgSum-SR-Inclusive_sum_errors_fely3120,BkgSum-SR-Inclusive_sum_errors_fehy3120);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1237;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMinimum(1511.107);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMaximum(33189.26);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors311231163120);
   
   grae->Draw("e2 ");
   Double_t xAxis180[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__208 = new TH1F("Data__208","h_SR_MVAOutputM800Inclusive",20, xAxis180);
   Data__208->SetBinContent(1,24660);
   Data__208->SetBinContent(2,28700);
   Data__208->SetBinContent(3,25540);
   Data__208->SetBinContent(4,23920);
   Data__208->SetBinContent(5,20440);
   Data__208->SetBinContent(6,17740);
   Data__208->SetBinContent(7,14920);
   Data__208->SetBinContent(8,13200);
   Data__208->SetBinContent(9,12240);
   Data__208->SetBinContent(10,10820);
   Data__208->SetBinContent(11,10340);
   Data__208->SetBinContent(12,8760);
   Data__208->SetBinContent(13,7980);
   Data__208->SetBinContent(14,7520);
   Data__208->SetBinContent(15,8180);
   Data__208->SetBinContent(16,6760);
   Data__208->SetBinContent(17,6420);
   Data__208->SetBinContent(18,6200);
   Data__208->SetBinContent(19,5440);
   Data__208->SetBinContent(20,2040);
   Data__208->SetBinError(1,702.282);
   Data__208->SetBinError(2,757.6279);
   Data__208->SetBinError(3,714.7027);
   Data__208->SetBinError(4,691.6647);
   Data__208->SetBinError(5,639.3747);
   Data__208->SetBinError(6,595.6509);
   Data__208->SetBinError(7,546.26);
   Data__208->SetBinError(8,513.8093);
   Data__208->SetBinError(9,494.7727);
   Data__208->SetBinError(10,465.1881);
   Data__208->SetBinError(11,454.7527);
   Data__208->SetBinError(12,418.569);
   Data__208->SetBinError(13,399.4997);
   Data__208->SetBinError(14,387.8144);
   Data__208->SetBinError(15,404.475);
   Data__208->SetBinError(16,367.6955);
   Data__208->SetBinError(17,358.3295);
   Data__208->SetBinError(18,352.1363);
   Data__208->SetBinError(19,329.8485);
   Data__208->SetBinError(20,201.9901);
   Data__208->SetEntries(13091);
   Data__208->SetDirectory(0);
   Data__208->SetFillStyle(3001);
   Data__208->SetLineWidth(2);
   Data__208->SetMarkerStyle(20);
   Data__208->SetMarkerSize(1.2);
   Data__208->GetXaxis()->SetRange(1,200);
   Data__208->GetXaxis()->SetLabelFont(42);
   Data__208->GetXaxis()->SetTitleOffset(1);
   Data__208->GetXaxis()->SetTitleFont(42);
   Data__208->GetYaxis()->SetLabelFont(42);
   Data__208->GetYaxis()->SetTitleFont(42);
   Data__208->GetZaxis()->SetLabelFont(42);
   Data__208->GetZaxis()->SetTitleOffset(1);
   Data__208->GetZaxis()->SetTitleFont(42);
   Data__208->Draw("EP same");
   
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

   ci = 1237;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1237;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__209 = new TH1F("hframe_copy__209","",1000,0,1.01);
   hframe_copy__209->SetMinimum(0.01);
   hframe_copy__209->SetMaximum(212272.9);
   hframe_copy__209->SetDirectory(0);
   hframe_copy__209->SetStats(0);
   hframe_copy__209->SetLineStyle(0);
   hframe_copy__209->SetMarkerStyle(20);
   hframe_copy__209->GetXaxis()->SetLabelFont(43);
   hframe_copy__209->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__209->GetXaxis()->SetLabelSize(0);
   hframe_copy__209->GetXaxis()->SetTitleSize(0);
   hframe_copy__209->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__209->GetXaxis()->SetTitleFont(43);
   hframe_copy__209->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__209->GetYaxis()->SetLabelFont(43);
   hframe_copy__209->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__209->GetYaxis()->SetLabelSize(27);
   hframe_copy__209->GetYaxis()->SetTitleSize(33);
   hframe_copy__209->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__209->GetYaxis()->SetTitleFont(43);
   hframe_copy__209->GetZaxis()->SetLabelFont(43);
   hframe_copy__209->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__209->GetZaxis()->SetLabelSize(27);
   hframe_copy__209->GetZaxis()->SetTitleSize(33);
   hframe_copy__209->GetZaxis()->SetTitleOffset(1);
   hframe_copy__209->GetZaxis()->SetTitleFont(43);
   hframe_copy__209->Draw("sameaxis");
   
   TH1F *hframe_copy__210 = new TH1F("hframe_copy__210","",1000,0,1.01);
   hframe_copy__210->SetMinimum(0.01);
   hframe_copy__210->SetMaximum(212272.9);
   hframe_copy__210->SetDirectory(0);
   hframe_copy__210->SetStats(0);
   hframe_copy__210->SetLineStyle(0);
   hframe_copy__210->SetMarkerStyle(20);
   hframe_copy__210->GetXaxis()->SetLabelFont(43);
   hframe_copy__210->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__210->GetXaxis()->SetLabelSize(0);
   hframe_copy__210->GetXaxis()->SetTitleSize(0);
   hframe_copy__210->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__210->GetXaxis()->SetTitleFont(43);
   hframe_copy__210->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__210->GetYaxis()->SetLabelFont(43);
   hframe_copy__210->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__210->GetYaxis()->SetLabelSize(27);
   hframe_copy__210->GetYaxis()->SetTitleSize(33);
   hframe_copy__210->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__210->GetYaxis()->SetTitleFont(43);
   hframe_copy__210->GetZaxis()->SetLabelFont(43);
   hframe_copy__210->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__210->GetZaxis()->SetLabelSize(27);
   hframe_copy__210->GetZaxis()->SetTitleSize(33);
   hframe_copy__210->GetZaxis()->SetTitleOffset(1);
   hframe_copy__210->GetZaxis()->SetTitleFont(43);
   hframe_copy__210->Draw("sameaxis");
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
   MVAOutputM800_1->Modified();
   MVAOutputM800->cd();
   MVAOutputM800->Modified();
   MVAOutputM800->cd();
   MVAOutputM800->SetSelected(MVAOutputM800);
}
