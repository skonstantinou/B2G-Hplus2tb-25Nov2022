void MVAOutputM800()
{
//=========Macro generated from canvas: MVAOutputM800/MVAOutputM800
//=========  (Fri Nov 18 13:27:24 2022) by ROOT version 6.20/02
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
   0.03055422,
   0.02279596,
   0.02283079,
   0.02389645,
   0.02576908,
   0.02705771,
   0.0287487,
   0.03054854,
   0.03188183,
   0.03336118,
   0.03416244,
   0.03595283,
   0.03580048,
   0.03833784,
   0.04148492,
   0.04177519,
   0.0416073,
   0.04559026,
   0.0492587,
   0.07753311};
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
   0.03055422,
   0.02279596,
   0.02283079,
   0.02389645,
   0.02576908,
   0.02705771,
   0.0287487,
   0.03054854,
   0.03188183,
   0.03336118,
   0.03416244,
   0.03595283,
   0.03580048,
   0.03833784,
   0.04148492,
   0.04177519,
   0.0416073,
   0.04559026,
   0.0492587,
   0.07753311};
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
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMinimum(0.9069603);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMaximum(1.09304);
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
   0.03055422,
   0.02279596,
   0.02283079,
   0.02389645,
   0.02576908,
   0.02705771,
   0.0287487,
   0.03054854,
   0.03188183,
   0.03336118,
   0.03416244,
   0.03595283,
   0.03580048,
   0.03833784,
   0.04148492,
   0.04177519,
   0.0416073,
   0.04559026,
   0.0492587,
   0.07753311};
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
   0.03055422,
   0.02279596,
   0.02283079,
   0.02389645,
   0.02576908,
   0.02705771,
   0.0287487,
   0.03054854,
   0.03188183,
   0.03336118,
   0.03416244,
   0.03595283,
   0.03580048,
   0.03833784,
   0.04148492,
   0.04177519,
   0.0416073,
   0.04559026,
   0.0492587,
   0.07753311};
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
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMinimum(0.9069603);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMaximum(1.09304);
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
   
   Double_t Graph1_fx3119[7] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3119[7] = {
   1.078423,
   0.9463765,
   1.005056,
   0.9703103,
   0.999084,
   0.9879327,
   0.1101679};
   Double_t Graph1_felx3119[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3119[7] = {
   0.03339234,
   0.02437043,
   0.02607239,
   0.02646738,
   0.02888926,
   0.03028702,
   0.01101679};
   Double_t Graph1_fehx3119[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3119[7] = {
   0.03339234,
   0.02437043,
   0.02607239,
   0.02646738,
   0.02888926,
   0.03028702,
   0.01101679};
   grae = new TGraphAsymmErrors(7,Graph1_fx3119,Graph1_fy3119,Graph1_felx3119,Graph1_fehx3119,Graph1_fely3119,Graph1_fehy3119);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1311131153119 = new TH1F("Graph_Graph_Graph_Graph1311131153119","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1311131153119->SetMinimum(0.08923598);
   Graph_Graph_Graph_Graph1311131153119->SetMaximum(1.213081);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   MVAOutputM800_1->Range(-0.204557,-2.159962,1.073924,5.838141);
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
   hframe__206->SetMaximum(228167.8);
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
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMinimum(51.42898);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMaximum(47454.67);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,688.9058);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1104.251);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,948.1733);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,928.3408);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,838.9126);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,813.4318);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,682.6967);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,674.321);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,509.2145);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,568.6754);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,492.4055);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,492.189);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,480.069);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,522.5894);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,381.4624);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,430.2721);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,454.5306);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,373.9416);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,345.7831);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,148.3754);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,48.84081);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,54.50363);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,48.80666);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,49.71159);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,56.56962);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,48.21787);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,41.90627);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,43.73184);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,39.81976);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,38.98436);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,38.95456);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,41.59904);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,36.08564);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,40.92097);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,34.02119);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,35.81198);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,36.96955);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,30.89352);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,33.34761);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,21.36615);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4024.201);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,10090.78);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,16198.87);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,15078.77);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,13661.36);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,11881.25);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,10430.09);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,9242.868);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,8222.537);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,7436.428);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,6855.402);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,6477.333);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,6018.339);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,5713.128);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,5173.402);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,4735.601);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,4343.023);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,4114.381);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,3585.021);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,3094.14);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1318.937);
   TT_stack_2_stack_2_stack_2->SetBinError(1,111.5769);
   TT_stack_2_stack_2_stack_2->SetBinError(2,141.9008);
   TT_stack_2_stack_2_stack_2->SetBinError(3,137.3037);
   TT_stack_2_stack_2_stack_2->SetBinError(4,130.623);
   TT_stack_2_stack_2_stack_2->SetBinError(5,121.5362);
   TT_stack_2_stack_2_stack_2->SetBinError(6,114.3908);
   TT_stack_2_stack_2_stack_2->SetBinError(7,107.3301);
   TT_stack_2_stack_2_stack_2->SetBinError(8,100.9574);
   TT_stack_2_stack_2_stack_2->SetBinError(9,96.20456);
   TT_stack_2_stack_2_stack_2->SetBinError(10,92.14326);
   TT_stack_2_stack_2_stack_2->SetBinError(11,89.83534);
   TT_stack_2_stack_2_stack_2->SetBinError(12,86.18233);
   TT_stack_2_stack_2_stack_2->SetBinError(13,84.15848);
   TT_stack_2_stack_2_stack_2->SetBinError(14,79.77725);
   TT_stack_2_stack_2_stack_2->SetBinError(15,75.91268);
   TT_stack_2_stack_2_stack_2->SetBinError(16,72.38252);
   TT_stack_2_stack_2_stack_2->SetBinError(17,70.5983);
   TT_stack_2_stack_2_stack_2->SetBinError(18,65.5416);
   TT_stack_2_stack_2_stack_2->SetBinError(19,60.67996);
   TT_stack_2_stack_2_stack_2->SetBinError(20,38.98531);
   TT_stack_2_stack_2_stack_2->SetEntries(124130.9);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,8563.383);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,14565.8);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,13543.55);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,13112.77);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,11221.76);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,10296.41);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,8228.545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,7504.441);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,6821.055);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,6414.631);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,6184.181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,4936.943);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5189.255);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,4386.249);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4267.961);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3588.349);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,4352.94);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,3467.736);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,2989.583);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,792.3545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,578.3257);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,710.4018);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,659.2037);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,647.0691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,602.2211);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,569.4473);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,509.0295);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,488.8067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,459.1315);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,450.7042);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,438.5721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,400.2889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,397.0757);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,375.9888);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,380.346);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,339.8459);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,362.559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,330.7412);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,309.0478);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,169.4648);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4316.856);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(1,49.12722);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(2,72.13533);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(3,119.996);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(4,207.1442);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(5,232.9163);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(6,240.6877);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(7,268.4584);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(8,316.5026);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(9,309.6789);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(10,340.903);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(11,415.9606);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(12,500.7275);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(13,510.1678);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(14,592.6541);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(15,717.3987);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(16,837.8645);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(17,1101.836);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(18,1340.216);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(19,2257.308);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(20,1646.851);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(1,8.633405);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(2,13.25473);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(3,16.37274);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(4,19.22471);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(5,20.9483);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(6,22.23378);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(7,23.61878);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(8,24.38136);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(9,25.01947);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(10,26.19887);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(11,28.20554);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(12,29.79883);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(13,31.6308);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(14,34.5083);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(15,36.60657);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(16,40.13406);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(17,44.80283);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(18,51.79247);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(19,62.89095);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(20,55.10692);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetEntries(6400.654);
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
   19343.06,
   31868.92,
   29570.49,
   27702.48,
   23941.93,
   21539.93,
   18154.11,
   16401.3,
   14766.7,
   13838.71,
   13153.92,
   11447.47,
   11382.45,
   10082.24,
   9385.023,
   8361.644,
   8921.852,
   7426.699,
   6429.506,
   2259.667};
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
   591.0122,
   726.4828,
   675.1177,
   661.991,
   616.9614,
   582.8211,
   521.907,
   501.0357,
   470.7894,
   461.6757,
   449.3699,
   411.569,
   407.4972,
   386.5314,
   389.3369,
   349.3092,
   371.2141,
   338.5851,
   316.7091,
   175.199};
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
   591.0122,
   726.4828,
   675.1177,
   661.991,
   616.9614,
   582.8211,
   521.907,
   501.0357,
   470.7894,
   461.6757,
   449.3699,
   411.569,
   407.4972,
   386.5314,
   389.3369,
   349.3092,
   371.2141,
   338.5851,
   316.7091,
   175.199};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMinimum(1876.021);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMaximum(35646.5);
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
   Data__208->SetBinContent(1,20860);
   Data__208->SetBinContent(2,30160);
   Data__208->SetBinContent(3,29720);
   Data__208->SetBinContent(4,26880);
   Data__208->SetBinContent(5,23920);
   Data__208->SetBinContent(6,21280);
   Data__208->SetBinContent(7,2000);
   Data__208->SetBinError(1,645.9102);
   Data__208->SetBinError(2,776.6595);
   Data__208->SetBinError(3,770.9734);
   Data__208->SetBinError(4,733.2121);
   Data__208->SetBinError(5,691.6647);
   Data__208->SetBinError(6,652.3803);
   Data__208->SetBinError(7,200);
   Data__208->SetEntries(7741);
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
   hframe_copy__209->SetMaximum(228167.8);
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
   hframe_copy__210->SetMaximum(228167.8);
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
   MVAOutputM800_1->Modified();
   MVAOutputM800->cd();
   MVAOutputM800->Modified();
   MVAOutputM800->cd();
   MVAOutputM800->SetSelected(MVAOutputM800);
}
