void MVAOutputM800()
{
//=========Macro generated from canvas: MVAOutputM800/MVAOutputM800
//=========  (Fri Nov 18 13:27:44 2022) by ROOT version 6.20/02
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
   0.03639216,
   0.03755145,
   0.04268039,
   0.05030785,
   0.05656196,
   0.06382795,
   0.06897075,
   0.07369876,
   0.08040885,
   0.08157449,
   0.08170411,
   0.08692475,
   0.0896588,
   0.1026707,
   0.1027692,
   0.0957005,
   0.1012376,
   0.1124572,
   0.1345455,
   0.2059447};
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
   0.03639216,
   0.03755145,
   0.04268039,
   0.05030785,
   0.05656196,
   0.06382795,
   0.06897075,
   0.07369876,
   0.08040885,
   0.08157449,
   0.08170411,
   0.08692475,
   0.0896588,
   0.1026707,
   0.1027692,
   0.0957005,
   0.1012376,
   0.1124572,
   0.1345455,
   0.2059447};
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
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMinimum(0.7528664);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMaximum(1.247134);
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
   0.03639216,
   0.03755145,
   0.04268039,
   0.05030785,
   0.05656196,
   0.06382795,
   0.06897075,
   0.07369876,
   0.08040885,
   0.08157449,
   0.08170411,
   0.08692475,
   0.0896588,
   0.1026707,
   0.1027692,
   0.0957005,
   0.1012376,
   0.1124572,
   0.1345455,
   0.2059447};
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
   0.03639216,
   0.03755145,
   0.04268039,
   0.05030785,
   0.05656196,
   0.06382795,
   0.06897075,
   0.07369876,
   0.08040885,
   0.08157449,
   0.08170411,
   0.08692475,
   0.0896588,
   0.1026707,
   0.1027692,
   0.0957005,
   0.1012376,
   0.1124572,
   0.1345455,
   0.2059447};
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
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMinimum(0.7528664);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMaximum(1.247134);
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
   0.797521,
   1.092002,
   0.9600987,
   0.9942739,
   1.08737,
   1.16114,
   1.084299,
   1.186145,
   1.129975,
   1.113928,
   0.95574,
   0.9969553,
   0.9978169,
   1.331883,
   1.250605,
   0.7917098,
   0.8409809,
   1.092943,
   1.311114,
   1.23539};
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
   0.02358952,
   0.02901962,
   0.0309227,
   0.03715776,
   0.04366983,
   0.05121568,
   0.05253446,
   0.05960605,
   0.06277638,
   0.06316505,
   0.05882173,
   0.06356355,
   0.06608204,
   0.08763144,
   0.08412483,
   0.06182215,
   0.06776817,
   0.08586974,
   0.1149923,
   0.1747105};
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
   0.02358952,
   0.02901962,
   0.0309227,
   0.03715776,
   0.04366983,
   0.05121568,
   0.05253446,
   0.05960605,
   0.06277638,
   0.06316505,
   0.05882173,
   0.06356355,
   0.06608204,
   0.08763144,
   0.08412483,
   0.06182215,
   0.06776817,
   0.08586974,
   0.1149923,
   0.1747105};
   grae = new TGraphAsymmErrors(20,Graph1_fx3119,Graph1_fy3119,Graph1_felx3119,Graph1_fehx3119,Graph1_fely3119,Graph1_fehy3119);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1311131153119 = new TH1F("Graph_Graph_Graph_Graph1311131153119","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1311131153119->SetMinimum(0.6602658);
   Graph_Graph_Graph_Graph1311131153119->SetMaximum(1.495728);
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
   MVAOutputM800_1->Range(-0.204557,-2.159086,1.073924,5.795214);
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
   hframe__206->SetMaximum(207948.7);
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
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMinimum(2.743588);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMaximum(49152.07);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,397.5097);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,339.7078);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,226.8211);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,210.6697);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,212.1773);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,144.399);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,95.76514);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,58.38229);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,62.85126);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,82.16593);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,80.5956);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,66.40401);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,55.05169);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,56.79018);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,18.79519);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,58.64481);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,44.51664);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,17.3317);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,30.85882);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,25.84049);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,62.02025);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,46.40359);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,41.87158);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,31.68556);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,39.41084);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,36.04084);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,19.30011);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,13.01905);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,15.65455);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,17.98989);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,15.71234);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,14.2296);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,13.19256);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,15.99974);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,10.29938);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,13.71345);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,10.84631);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,6.732603);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,8.942979);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,9.618369);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(367.0359);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,5168.372);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4999.708);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3422.162);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2468.339);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1824.94);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1358.823);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1108.623);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1004.187);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,854.0213);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,735.9098);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,677.1996);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,551.7855);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,619.6136);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,457.5943);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,466.4961);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,436.8399);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,407.8995);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,374.4315);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,291.6673);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,98.71941);
   TT_stack_2_stack_2_stack_2->SetBinError(1,79.3981);
   TT_stack_2_stack_2_stack_2->SetBinError(2,78.63675);
   TT_stack_2_stack_2_stack_2->SetBinError(3,64.86404);
   TT_stack_2_stack_2_stack_2->SetBinError(4,54.85523);
   TT_stack_2_stack_2_stack_2->SetBinError(5,47.38619);
   TT_stack_2_stack_2_stack_2->SetBinError(6,40.9658);
   TT_stack_2_stack_2_stack_2->SetBinError(7,36.90006);
   TT_stack_2_stack_2_stack_2->SetBinError(8,35.16681);
   TT_stack_2_stack_2_stack_2->SetBinError(9,32.18678);
   TT_stack_2_stack_2_stack_2->SetBinError(10,30.13267);
   TT_stack_2_stack_2_stack_2->SetBinError(11,28.78712);
   TT_stack_2_stack_2_stack_2->SetBinError(12,26.16027);
   TT_stack_2_stack_2_stack_2->SetBinError(13,27.66572);
   TT_stack_2_stack_2_stack_2->SetBinError(14,23.61744);
   TT_stack_2_stack_2_stack_2->SetBinError(15,24.03537);
   TT_stack_2_stack_2_stack_2->SetBinError(16,23.17088);
   TT_stack_2_stack_2_stack_2->SetBinError(17,22.09472);
   TT_stack_2_stack_2_stack_2->SetBinError(18,21.46883);
   TT_stack_2_stack_2_stack_2->SetBinError(19,19.03257);
   TT_stack_2_stack_2_stack_2->SetBinError(20,10.96497);
   TT_stack_2_stack_2_stack_2->SetEntries(22257.12);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,23097.94);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,20594.61);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,16432.29);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11723.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,9366.545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,7350.146);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,6653.223);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,5614.521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4817.768);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4765.769);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,4766.72);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,4316.836);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3895.311);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2954.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,3048.997);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3647.447);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,3209.974);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2572.709);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1660.521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,684.9011);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1038.261);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,969.5701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,853.5921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,721.7827);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,642.0621);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,562.452);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,540.3431);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,490.6624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,459.7247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,454.1453);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,450.1826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,427.941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,408.5906);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,354.9972);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,362.2736);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,395.5654);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,369.9537);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,332.616);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,265.9801);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,166.0649);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3184.306);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(1,10.11332);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(2,5.275588);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(3,11.26549);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(4,1.751403);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(5,0.4826152);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(6,6.809971);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(7,5.188801);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(8,10.04002);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(9,7.896486);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(10,2.06951);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(11,10.5683);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(12,7.049996);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(13,4.023932);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(14,3.335135);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(15,7.215974);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(16,-0.2846124);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(17,10.42029);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(18,5.477927);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(19,8.757767);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(20,1.619185);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(1,3.781896);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(2,4.615066);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(3,4.834476);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(4,4.479081);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(5,4.796253);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(6,3.871577);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(7,4.599683);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(8,4.06174);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(9,3.718214);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(10,4.26699);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(11,3.769993);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(12,4.263067);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(13,3.867964);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(14,4.251915);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(15,4.436392);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(16,3.99081);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(17,4.278636);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(18,4.173813);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(19,3.578915);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(20,2.036068);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetEntries(41.65102);
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
   28663.82,
   25934.02,
   20081.27,
   14402.47,
   11403.66,
   8853.369,
   7857.611,
   6677.09,
   5734.641,
   5583.845,
   5524.515,
   4935.026,
   4569.977,
   3468.774,
   3534.288,
   4142.932,
   3662.39,
   2964.472,
   1983.047,
   809.4611};
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
   1043.138,
   973.86,
   857.0764,
   724.5573,
   645.0135,
   565.0924,
   541.9453,
   492.0933,
   461.1158,
   455.4993,
   451.3756,
   428.9759,
   409.7386,
   356.1416,
   363.2161,
   396.4807,
   370.7715,
   333.3762,
   266.8101,
   166.7042};
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
   1043.138,
   973.86,
   857.0764,
   724.5573,
   645.0135,
   565.0924,
   541.9453,
   492.0933,
   461.1158,
   455.4993,
   451.3756,
   428.9759,
   409.7386,
   356.1416,
   363.2161,
   396.4807,
   370.7715,
   333.3762,
   266.8101,
   166.7042};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMinimum(578.4812);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMaximum(32613.38);
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
   Data__208->SetBinContent(1,22860);
   Data__208->SetBinContent(2,28320);
   Data__208->SetBinContent(3,19280);
   Data__208->SetBinContent(4,14320);
   Data__208->SetBinContent(5,12400);
   Data__208->SetBinContent(6,10280);
   Data__208->SetBinContent(7,8520);
   Data__208->SetBinContent(8,7920);
   Data__208->SetBinContent(9,6480);
   Data__208->SetBinContent(10,6220);
   Data__208->SetBinContent(11,5280);
   Data__208->SetBinContent(12,4920);
   Data__208->SetBinContent(13,4560);
   Data__208->SetBinContent(14,4620);
   Data__208->SetBinContent(15,4420);
   Data__208->SetBinContent(16,3280);
   Data__208->SetBinContent(17,3080);
   Data__208->SetBinContent(18,3240);
   Data__208->SetBinContent(19,2600);
   Data__208->SetBinContent(20,1000);
   Data__208->SetBinError(1,676.1657);
   Data__208->SetBinError(2,752.5955);
   Data__208->SetBinError(3,620.967);
   Data__208->SetBinError(4,535.1635);
   Data__208->SetBinError(5,497.996);
   Data__208->SetBinError(6,453.4314);
   Data__208->SetBinError(7,412.7953);
   Data__208->SetBinError(8,397.995);
   Data__208->SetBinError(9,360);
   Data__208->SetBinError(10,352.7038);
   Data__208->SetBinError(11,324.9615);
   Data__208->SetBinError(12,313.6877);
   Data__208->SetBinError(13,301.9934);
   Data__208->SetBinError(14,303.9737);
   Data__208->SetBinError(15,297.3214);
   Data__208->SetBinError(16,256.125);
   Data__208->SetBinError(17,248.1935);
   Data__208->SetBinError(18,254.5584);
   Data__208->SetBinError(19,228.0351);
   Data__208->SetBinError(20,141.4214);
   Data__208->SetEntries(8680);
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
   hframe_copy__209->SetMaximum(207948.7);
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
   hframe_copy__210->SetMaximum(207948.7);
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
