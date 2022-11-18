void MVAOutputM800()
{
//=========Macro generated from canvas: MVAOutputM800/MVAOutputM800
//=========  (Fri Nov 18 13:27:18 2022) by ROOT version 6.20/02
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
   0.02911914,
   0.02664596,
   0.03074166,
   0.03370099,
   0.0403541,
   0.0469769,
   0.05012018,
   0.04936735,
   0.05231816,
   0.05668568,
   0.06335856,
   0.06636054,
   0.06781994,
   0.07334965,
   0.07649603,
   0.08328749,
   0.0797244,
   0.08349546,
   0.08346934,
   0.1255909};
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
   0.02911914,
   0.02664596,
   0.03074166,
   0.03370099,
   0.0403541,
   0.0469769,
   0.05012018,
   0.04936735,
   0.05231816,
   0.05668568,
   0.06335856,
   0.06636054,
   0.06781994,
   0.07334965,
   0.07649603,
   0.08328749,
   0.0797244,
   0.08349546,
   0.08346934,
   0.1255909};
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
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMinimum(0.849291);
   Graph_Graph_Graph_BackgroundStatSystError310931133117->SetMaximum(1.150709);
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
   0.02911914,
   0.02664596,
   0.03074166,
   0.03370099,
   0.0403541,
   0.0469769,
   0.05012018,
   0.04936735,
   0.05231816,
   0.05668568,
   0.06335856,
   0.06636054,
   0.06781994,
   0.07334965,
   0.07649603,
   0.08328749,
   0.0797244,
   0.08349546,
   0.08346934,
   0.1255909};
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
   0.02911914,
   0.02664596,
   0.03074166,
   0.03370099,
   0.0403541,
   0.0469769,
   0.05012018,
   0.04936735,
   0.05231816,
   0.05668568,
   0.06335856,
   0.06636054,
   0.06781994,
   0.07334965,
   0.07649603,
   0.08328749,
   0.0797244,
   0.08349546,
   0.08346934,
   0.1255909};
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
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMinimum(0.849291);
   Graph_Graph_Graph_BackgroundStatError311031143118->SetMaximum(1.150709);
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
   1.046792,
   1.092469,
   1.098592,
   0.951802,
   1.05298,
   1.141347,
   0.1375058};
   Double_t Graph1_felx3119[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3119[7] = {
   0.03132086,
   0.02986628,
   0.03484522,
   0.03592345,
   0.04498107,
   0.05434985,
   0.02005729};
   Double_t Graph1_fehx3119[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3119[7] = {
   0.03132086,
   0.02986628,
   0.03484522,
   0.03592345,
   0.04498107,
   0.05434985,
   0.02005729};
   grae = new TGraphAsymmErrors(7,Graph1_fx3119,Graph1_fy3119,Graph1_felx3119,Graph1_fehx3119,Graph1_fely3119,Graph1_fehy3119);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1311131153119 = new TH1F("Graph_Graph_Graph_Graph1311131153119","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1311131153119->SetMinimum(0.009623724);
   Graph_Graph_Graph_Graph1311131153119->SetMaximum(1.303522);
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
   MVAOutputM800_1->Range(-0.204557,-2.1581,1.073924,5.746883);
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
   hframe__206->SetMaximum(187320);
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
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMinimum(15.78551);
   StackedMCstackHist_stack_28_stack_29_stack_30->SetMaximum(38259.81);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,505.7324);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,572.0087);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,470.3836);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,408.6937);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,275.1425);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,212.125);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,210.147);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,191.4337);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,169.4507);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,111.9687);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,166.9229);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,136.8756);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,99.55089);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,129.8083);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,108.1661);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,97.46154);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,72.55929);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,86.10372);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,100.3552);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,57.11204);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,35.44616);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,37.74893);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,35.87846);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,36.22826);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,31.48441);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,23.55392);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,25.7179);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,21.22368);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,23.52847);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,18.83889);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,21.0346);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,20.63676);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,15.90692);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,25.23166);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,19.56185);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,17.07734);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,15.51762);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,16.29836);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,18.73878);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,14.93203);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1414.932);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,7682.693);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,8651.993);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,6535.334);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4677.141);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3693.372);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2851.831);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2325.392);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2041.708);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1874.886);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1623.259);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1417.402);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1275.457);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1034.665);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,972.0897);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,930.0164);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,817.7576);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,804.5313);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,756.6479);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,663.1907);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,288.4667);
   TT_stack_2_stack_2_stack_2->SetBinError(1,98.83174);
   TT_stack_2_stack_2_stack_2->SetBinError(2,105.2839);
   TT_stack_2_stack_2_stack_2->SetBinError(3,91.28687);
   TT_stack_2_stack_2_stack_2->SetBinError(4,77.2388);
   TT_stack_2_stack_2_stack_2->SetBinError(5,68.54481);
   TT_stack_2_stack_2_stack_2->SetBinError(6,60.43009);
   TT_stack_2_stack_2_stack_2->SetBinError(7,54.49685);
   TT_stack_2_stack_2_stack_2->SetBinError(8,50.84007);
   TT_stack_2_stack_2_stack_2->SetBinError(9,48.89119);
   TT_stack_2_stack_2_stack_2->SetBinError(10,45.62384);
   TT_stack_2_stack_2_stack_2->SetBinError(11,42.46724);
   TT_stack_2_stack_2_stack_2->SetBinError(12,40.46939);
   TT_stack_2_stack_2_stack_2->SetBinError(13,36.59639);
   TT_stack_2_stack_2_stack_2->SetBinError(14,34.85887);
   TT_stack_2_stack_2_stack_2->SetBinError(15,34.28548);
   TT_stack_2_stack_2_stack_2->SetBinError(16,31.69089);
   TT_stack_2_stack_2_stack_2->SetBinError(17,31.5907);
   TT_stack_2_stack_2_stack_2->SetBinError(18,30.96758);
   TT_stack_2_stack_2_stack_2->SetBinError(19,28.79605);
   TT_stack_2_stack_2_stack_2->SetBinError(20,18.83605);
   TT_stack_2_stack_2_stack_2->SetEntries(39982.09);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,13152.98);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,15270.97);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11090.17);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9665.133);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,6440.042);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,4663.756);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,4300.535);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,4765.404);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4084.658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3533.333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2480.849);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2219.794);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2580.068);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2070.968);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1852.621);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1497.094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1823.838);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1542.125);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1602.856);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,732.6108);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,612.5093);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,643.0374);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,547.5824);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,489.747);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,413.1995);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,357.1831);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,337.2844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,341.079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,316.0339);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,294.5447);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,253.1661);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,236.7103);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,248.7219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,228.7156);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,217.5834);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,197.6641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,212.434);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,196.0272);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,194.5112);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,133.2603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3633.413);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(1,23.17605);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(2,69.4664);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(3,92.46668);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(4,98.9383);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(5,85.57393);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(6,86.84261);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(7,86.89799);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(8,106.8098);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(9,141.6216);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(10,114.4812);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(11,132.5966);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(12,158.6942);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(13,145.6761);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(14,171.001);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(15,234.422);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(16,248.9196);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(17,281.7433);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(18,371.7077);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(19,519.5173);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinContent(20,450.9797);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(1,7.892233);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(2,11.75916);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(3,13.70433);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(4,14.07797);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(5,14.114);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(6,14.20044);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(7,14.04267);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(8,14.8461);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(9,15.07216);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(10,15.68338);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(11,15.96714);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(12,16.52051);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(13,17.59825);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(14,18.34048);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(15,19.74642);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(16,21.42418);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(17,23.55269);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(18,27.61373);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(19,32.84721);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetBinError(20,28.11998);
   ChargedHiggs_HplusTBHplusToTB_M_800__207->SetEntries(1850.394);
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
   21341.4,
   24494.97,
   18095.89,
   14750.97,
   10408.56,
   7727.712,
   6836.074,
   6998.546,
   6128.995,
   5268.561,
   4065.174,
   3632.127,
   3714.284,
   3172.865,
   2890.804,
   2412.313,
   2700.928,
   2384.876,
   2366.402,
   1078.19};
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
   621.4433,
   652.6919,
   556.2977,
   497.1221,
   420.0279,
   363.0239,
   342.6252,
   345.4997,
   320.6577,
   298.652,
   257.5636,
   241.0299,
   251.9025,
   232.7286,
   221.135,
   200.9155,
   215.3299,
   199.1264,
   197.522,
   135.4107};
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
   621.4433,
   652.6919,
   556.2977,
   497.1221,
   420.0279,
   363.0239,
   342.6252,
   345.4997,
   320.6577,
   298.652,
   257.5636,
   241.0299,
   251.9025,
   232.7286,
   221.135,
   200.9155,
   215.3299,
   199.1264,
   197.522,
   135.4107};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMinimum(848.5009);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors311231163120->SetMaximum(27568.15);
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
   Data__208->SetBinContent(1,22340);
   Data__208->SetBinContent(2,26760);
   Data__208->SetBinContent(3,19880);
   Data__208->SetBinContent(4,14040);
   Data__208->SetBinContent(5,10960);
   Data__208->SetBinContent(6,8820);
   Data__208->SetBinContent(7,940);
   Data__208->SetBinError(1,668.431);
   Data__208->SetBinError(2,731.5736);
   Data__208->SetBinError(3,630.5553);
   Data__208->SetBinError(4,529.9057);
   Data__208->SetBinError(5,468.188);
   Data__208->SetBinError(6,420);
   Data__208->SetBinError(7,137.1131);
   Data__208->SetEntries(5187);
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
   hframe_copy__209->SetMaximum(187320);
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
   hframe_copy__210->SetMaximum(187320);
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
