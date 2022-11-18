void MVAOutputM1000()
{
//=========Macro generated from canvas: MVAOutputM1000/MVAOutputM1000
//=========  (Fri Nov 18 13:27:45 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM1000 = new TCanvas("MVAOutputM1000", "MVAOutputM1000",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM1000->SetHighLightColor(2);
   MVAOutputM1000->Range(0,0,1,1);
   MVAOutputM1000->SetFillColor(0);
   MVAOutputM1000->SetBorderMode(0);
   MVAOutputM1000->SetBorderSize(2);
   MVAOutputM1000->SetTickx(1);
   MVAOutputM1000->SetTicky(1);
   MVAOutputM1000->SetLeftMargin(0.16);
   MVAOutputM1000->SetRightMargin(0.05);
   MVAOutputM1000->SetTopMargin(0.06);
   MVAOutputM1000->SetBottomMargin(0.13);
   MVAOutputM1000->SetFrameFillStyle(0);
   MVAOutputM1000->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM1000_2
   TPad *MVAOutputM1000_2 = new TPad("MVAOutputM1000_2", "MVAOutputM1000_2",0,0,1,0.304);
   MVAOutputM1000_2->Draw();
   MVAOutputM1000_2->cd();
   MVAOutputM1000_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM1000_2->SetFillColor(0);
   MVAOutputM1000_2->SetFillStyle(4000);
   MVAOutputM1000_2->SetBorderMode(0);
   MVAOutputM1000_2->SetBorderSize(2);
   MVAOutputM1000_2->SetTickx(1);
   MVAOutputM1000_2->SetTicky(1);
   MVAOutputM1000_2->SetLeftMargin(0.16);
   MVAOutputM1000_2->SetRightMargin(0.05);
   MVAOutputM1000_2->SetTopMargin(0);
   MVAOutputM1000_2->SetBottomMargin(0.3421053);
   MVAOutputM1000_2->SetFrameFillStyle(0);
   MVAOutputM1000_2->SetFrameBorderMode(0);
   MVAOutputM1000_2->SetFrameFillStyle(0);
   MVAOutputM1000_2->SetFrameBorderMode(0);
   
   TH1F *hframe__225 = new TH1F("hframe__225","",1000,0,1.01);
   hframe__225->SetMinimum(0.3);
   hframe__225->SetMaximum(1.7);
   hframe__225->SetDirectory(0);
   hframe__225->SetStats(0);
   hframe__225->SetLineStyle(0);
   hframe__225->SetMarkerStyle(20);
   hframe__225->GetXaxis()->SetTitle("DNN Output");
   hframe__225->GetXaxis()->SetLabelFont(43);
   hframe__225->GetXaxis()->SetLabelOffset(0.007);
   hframe__225->GetXaxis()->SetLabelSize(27);
   hframe__225->GetXaxis()->SetTitleSize(33);
   hframe__225->GetXaxis()->SetTitleOffset(2.960526);
   hframe__225->GetXaxis()->SetTitleFont(43);
   hframe__225->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__225->GetYaxis()->SetNdivisions(505);
   hframe__225->GetYaxis()->SetLabelFont(43);
   hframe__225->GetYaxis()->SetLabelOffset(0.007);
   hframe__225->GetYaxis()->SetLabelSize(21);
   hframe__225->GetYaxis()->SetTitleSize(33);
   hframe__225->GetYaxis()->SetTitleOffset(1.5625);
   hframe__225->GetYaxis()->SetTitleFont(43);
   hframe__225->GetZaxis()->SetLabelFont(43);
   hframe__225->GetZaxis()->SetLabelOffset(0.007);
   hframe__225->GetZaxis()->SetLabelSize(27);
   hframe__225->GetZaxis()->SetTitleSize(33);
   hframe__225->GetZaxis()->SetTitleOffset(1);
   hframe__225->GetZaxis()->SetTitleFont(43);
   hframe__225->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3129[20] = {
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
   Double_t BackgroundStatSystError_fy3129[20] = {
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
   Double_t BackgroundStatSystError_felx3129[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3129[20] = {
   0.02518983,
   0.03728583,
   0.04734564,
   0.05597563,
   0.06510892,
   0.07115983,
   0.08258083,
   0.09543533,
   0.08889211,
   0.1012288,
   0.1200548,
   0.1198946,
   0.1140545,
   0.1203446,
   0.1136042,
   0.1126191,
   0.1249902,
   0.1282606,
   0.1403646,
   0.1694985};
   Double_t BackgroundStatSystError_fehx3129[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3129[20] = {
   0.02518983,
   0.03728583,
   0.04734564,
   0.05597563,
   0.06510892,
   0.07115983,
   0.08258083,
   0.09543533,
   0.08889211,
   0.1012288,
   0.1200548,
   0.1198946,
   0.1140545,
   0.1203446,
   0.1136042,
   0.1126191,
   0.1249902,
   0.1282606,
   0.1403646,
   0.1694985};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3129,BackgroundStatSystError_fy3129,BackgroundStatSystError_felx3129,BackgroundStatSystError_fehx3129,BackgroundStatSystError_fely3129,BackgroundStatSystError_fehy3129);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1242;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError312131253129 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError312131253129","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMinimum(0.7966017);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMaximum(1.203398);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError312131253129);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3130[20] = {
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
   Double_t BackgroundStatError_fy3130[20] = {
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
   Double_t BackgroundStatError_felx3130[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3130[20] = {
   0.02518983,
   0.03728583,
   0.04734564,
   0.05597563,
   0.06510892,
   0.07115983,
   0.08258083,
   0.09543533,
   0.08889211,
   0.1012288,
   0.1200548,
   0.1198946,
   0.1140545,
   0.1203446,
   0.1136042,
   0.1126191,
   0.1249902,
   0.1282606,
   0.1403646,
   0.1694985};
   Double_t BackgroundStatError_fehx3130[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3130[20] = {
   0.02518983,
   0.03728583,
   0.04734564,
   0.05597563,
   0.06510892,
   0.07115983,
   0.08258083,
   0.09543533,
   0.08889211,
   0.1012288,
   0.1200548,
   0.1198946,
   0.1140545,
   0.1203446,
   0.1136042,
   0.1126191,
   0.1249902,
   0.1282606,
   0.1403646,
   0.1694985};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3130,BackgroundStatError_fy3130,BackgroundStatError_felx3130,BackgroundStatError_fehx3130,BackgroundStatError_fely3130,BackgroundStatError_fehy3130);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1241;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError312231263130 = new TH1F("Graph_Graph_Graph_BackgroundStatError312231263130","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMinimum(0.7966017);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMaximum(1.203398);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError312231263130);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx33[2] = {
   0,
   1.01};
   Double_t Graph0_fy33[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx33,Graph0_fy33);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0313233 = new TH1F("Graph_Graph_Graph_Graph0313233","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0313233->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0313233->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0313233->SetDirectory(0);
   Graph_Graph_Graph_Graph0313233->SetStats(0);
   Graph_Graph_Graph_Graph0313233->SetLineStyle(0);
   Graph_Graph_Graph_Graph0313233->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0313233);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3131[20] = {
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
   Double_t Graph1_fy3131[20] = {
   0.9124503,
   1.063268,
   1.018835,
   1.123347,
   1.140544,
   1.058775,
   1.310598,
   1.20715,
   0.9076104,
   0.9650335,
   1.22023,
   1.158556,
   1.111043,
   0.9632651,
   0.7320529,
   0.9971685,
   1.076347,
   1.171148,
   1.180588,
   0.7309006};
   Double_t Graph1_felx3131[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3131[20] = {
   0.01762881,
   0.02859115,
   0.03519508,
   0.04379261,
   0.05116041,
   0.05361318,
   0.07025541,
   0.0766541,
   0.06233494,
   0.07337014,
   0.09616758,
   0.0949126,
   0.08838984,
   0.08581447,
   0.07044182,
   0.08224507,
   0.09513652,
   0.1031139,
   0.1163268,
   0.1089562};
   Double_t Graph1_fehx3131[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3131[20] = {
   0.01762881,
   0.02859115,
   0.03519508,
   0.04379261,
   0.05116041,
   0.05361318,
   0.07025541,
   0.0766541,
   0.06233494,
   0.07337014,
   0.09616758,
   0.0949126,
   0.08838984,
   0.08581447,
   0.07044182,
   0.08224507,
   0.09513652,
   0.1031139,
   0.1163268,
   0.1089562};
   grae = new TGraphAsymmErrors(20,Graph1_fx3131,Graph1_fy3131,Graph1_felx3131,Graph1_fehx3131,Graph1_fely3131,Graph1_fehy3131);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1312331273131 = new TH1F("Graph_Graph_Graph_Graph1312331273131","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1312331273131->SetMinimum(0.5460535);
   Graph_Graph_Graph_Graph1312331273131->SetMaximum(1.456744);
   Graph_Graph_Graph_Graph1312331273131->SetDirectory(0);
   Graph_Graph_Graph_Graph1312331273131->SetStats(0);
   Graph_Graph_Graph_Graph1312331273131->SetLineStyle(0);
   Graph_Graph_Graph_Graph1312331273131->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1312331273131);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__226 = new TH1F("hframe_copy__226","",1000,0,1.01);
   hframe_copy__226->SetMinimum(0.3);
   hframe_copy__226->SetMaximum(1.7);
   hframe_copy__226->SetDirectory(0);
   hframe_copy__226->SetStats(0);
   hframe_copy__226->SetLineStyle(0);
   hframe_copy__226->SetMarkerStyle(20);
   hframe_copy__226->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__226->GetXaxis()->SetLabelFont(43);
   hframe_copy__226->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetXaxis()->SetLabelSize(27);
   hframe_copy__226->GetXaxis()->SetTitleSize(33);
   hframe_copy__226->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__226->GetXaxis()->SetTitleFont(43);
   hframe_copy__226->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__226->GetYaxis()->SetNdivisions(505);
   hframe_copy__226->GetYaxis()->SetLabelFont(43);
   hframe_copy__226->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetYaxis()->SetLabelSize(21);
   hframe_copy__226->GetYaxis()->SetTitleSize(33);
   hframe_copy__226->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__226->GetYaxis()->SetTitleFont(43);
   hframe_copy__226->GetZaxis()->SetLabelFont(43);
   hframe_copy__226->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetZaxis()->SetLabelSize(27);
   hframe_copy__226->GetZaxis()->SetTitleSize(33);
   hframe_copy__226->GetZaxis()->SetTitleOffset(1);
   hframe_copy__226->GetZaxis()->SetTitleFont(43);
   hframe_copy__226->Draw("sameaxis");
   MVAOutputM1000_2->Modified();
   MVAOutputM1000->cd();
  
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
   MVAOutputM1000->cd();
  
// ------------>Primitives in pad: MVAOutputM1000_1
   TPad *MVAOutputM1000_1 = new TPad("MVAOutputM1000_1", "MVAOutputM1000_1",0,0.2897959,1,1);
   MVAOutputM1000_1->Draw();
   MVAOutputM1000_1->cd();
   MVAOutputM1000_1->Range(-0.204557,-2.165754,1.073924,6.121959);
   MVAOutputM1000_1->SetFillColor(0);
   MVAOutputM1000_1->SetFillStyle(4000);
   MVAOutputM1000_1->SetBorderMode(0);
   MVAOutputM1000_1->SetBorderSize(2);
   MVAOutputM1000_1->SetLogy();
   MVAOutputM1000_1->SetTickx(1);
   MVAOutputM1000_1->SetTicky(1);
   MVAOutputM1000_1->SetLeftMargin(0.16);
   MVAOutputM1000_1->SetRightMargin(0.05);
   MVAOutputM1000_1->SetTopMargin(0.06);
   MVAOutputM1000_1->SetBottomMargin(0.02);
   MVAOutputM1000_1->SetFrameFillStyle(0);
   MVAOutputM1000_1->SetFrameBorderMode(0);
   MVAOutputM1000_1->SetFrameFillStyle(0);
   MVAOutputM1000_1->SetFrameBorderMode(0);
   
   TH1F *hframe__227 = new TH1F("hframe__227","",1000,0,1.01);
   hframe__227->SetMinimum(0.01);
   hframe__227->SetMaximum(421401.2);
   hframe__227->SetDirectory(0);
   hframe__227->SetStats(0);
   hframe__227->SetLineStyle(0);
   hframe__227->SetMarkerStyle(20);
   hframe__227->GetXaxis()->SetLabelFont(43);
   hframe__227->GetXaxis()->SetLabelOffset(0.007);
   hframe__227->GetXaxis()->SetLabelSize(0);
   hframe__227->GetXaxis()->SetTitleSize(0);
   hframe__227->GetXaxis()->SetTitleOffset(0.9);
   hframe__227->GetXaxis()->SetTitleFont(43);
   hframe__227->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__227->GetYaxis()->SetLabelFont(43);
   hframe__227->GetYaxis()->SetLabelOffset(0.007);
   hframe__227->GetYaxis()->SetLabelSize(27);
   hframe__227->GetYaxis()->SetTitleSize(33);
   hframe__227->GetYaxis()->SetTitleOffset(1.5625);
   hframe__227->GetYaxis()->SetTitleFont(43);
   hframe__227->GetZaxis()->SetLabelFont(43);
   hframe__227->GetZaxis()->SetLabelOffset(0.007);
   hframe__227->GetZaxis()->SetLabelSize(27);
   hframe__227->GetZaxis()->SetTitleSize(33);
   hframe__227->GetZaxis()->SetTitleOffset(1);
   hframe__227->GetZaxis()->SetTitleFont(43);
   hframe__227->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis193[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_31_stack_32_stack_33 = new TH1F("StackedMCstackHist_stack_31_stack_32_stack_33","StackedMCstackHist",20, xAxis193);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMinimum(1.85414);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMaximum(105955.5);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetDirectory(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetStats(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetLineStyle(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMarkerStyle(20);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_31_stack_32_stack_33);
   
   Double_t xAxis194[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM1000Inclusive",20, xAxis194);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,771.3505);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,387.9591);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,232.5191);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,157.2572);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,84.25742);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,92.97379);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,69.54185);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,62.83402);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,65.38992);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,43.68127);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,36.93947);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,40.87221);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,16.09564);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,37.33098);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,24.03408);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,17.06436);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,37.60437);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,33.06681);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,36.58452);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,37.92161);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,75.62087);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,47.74282);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,49.13769);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,34.71485);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,18.49181);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,18.07008);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,14.76872);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,13.13302);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,17.29096);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,12.12172);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,10.52328);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,10.57176);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,9.89257);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,11.70254);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,7.711261);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,9.881802);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,11.95284);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,11.63759);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,8.191314);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,12.1042);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(367.0358);
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
   Double_t xAxis195[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1000Inclusive",20, xAxis195);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,11129.7);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4499);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2506.815);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1651.578);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1239.939);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,898.9481);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,775.3477);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,609.8934);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,501.0281);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,431.5314);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,384.0861);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,334.0435);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,349.0127);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,318.3539);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,313.7281);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,314.556);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,308.1609);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,326.7249);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,303.0076);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,131.8801);
   TT_stack_2_stack_2_stack_2->SetBinError(1,117.0263);
   TT_stack_2_stack_2_stack_2->SetBinError(2,74.30249);
   TT_stack_2_stack_2_stack_2->SetBinError(3,55.27064);
   TT_stack_2_stack_2_stack_2->SetBinError(4,45.27105);
   TT_stack_2_stack_2_stack_2->SetBinError(5,38.61778);
   TT_stack_2_stack_2_stack_2->SetBinError(6,33.23907);
   TT_stack_2_stack_2_stack_2->SetBinError(7,30.93856);
   TT_stack_2_stack_2_stack_2->SetBinError(8,27.44183);
   TT_stack_2_stack_2_stack_2->SetBinError(9,25.03917);
   TT_stack_2_stack_2_stack_2->SetBinError(10,23.09257);
   TT_stack_2_stack_2_stack_2->SetBinError(11,21.56756);
   TT_stack_2_stack_2_stack_2->SetBinError(12,20.1801);
   TT_stack_2_stack_2_stack_2->SetBinError(13,20.55233);
   TT_stack_2_stack_2_stack_2->SetBinError(14,19.54123);
   TT_stack_2_stack_2_stack_2->SetBinError(15,19.78194);
   TT_stack_2_stack_2_stack_2->SetBinError(16,19.51963);
   TT_stack_2_stack_2_stack_2->SetBinError(17,19.37605);
   TT_stack_2_stack_2_stack_2->SetBinError(18,20.23825);
   TT_stack_2_stack_2_stack_2->SetBinError(19,19.3131);
   TT_stack_2_stack_2_stack_2->SetBinError(20,12.59256);
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
   Double_t xAxis196[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1000Inclusive",20, xAxis196);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,46819.95);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,21127.18);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,13710.83);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,9906.161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7390.94);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6375.08);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,4465.665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3436.124);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4105.189);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3110.155);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2217.822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2197.252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2479.066);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2260.417);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2612.844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2616.728);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,2032.65);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1843.174);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1405.302);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1061.556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1472.595);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,965.9293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,775.3241);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,653.2679);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,565.8154);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,522.8676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,437.2079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,390.9477);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,414.1527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,362.0042);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,315.8961);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,307.5464);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,323.5879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,314.0088);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,334.5282);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,331.3186);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,296.4056);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,281.5877);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,244.0212);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,207.9812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3184.307);
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
   Double_t xAxis197[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__228 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__228","h_SR_MVAOutputM1000Inclusive",20, xAxis197);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(1,16.06837);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(2,12.5851);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(3,5.72766);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(4,8.620897);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(5,14.19366);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(6,5.008389);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(7,7.427044);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(8,7.069516);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(9,10.4007);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(10,-4.358393);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(11,3.167509);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(12,7.055995);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(13,9.091947);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(14,1.79374);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(15,6.053664);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(16,1.742869);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(17,1.036554);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(18,1.811638);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(19,3.861428);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(20,0.7188191);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(1,6.160567);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(2,5.79082);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(3,5.695951);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(4,5.422614);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(5,4.184763);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(6,4.154866);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(7,4.209006);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(8,3.813939);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(9,4.018678);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(10,3.192101);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(11,4.022104);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(12,3.51005);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(13,4.035814);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(14,3.352679);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(15,3.431304);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(16,2.5938);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(17,3.496343);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(18,3.859296);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(19,2.964308);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(20,1.813291);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetEntries(41.65101);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3132[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3132[20] = {
   58721,
   26014.14,
   16450.16,
   11715,
   8715.137,
   7367.001,
   5310.554,
   4108.852,
   4671.608,
   3585.368,
   2638.847,
   2572.167,
   2844.174,
   2616.102,
   2950.606,
   2948.348,
   2378.416,
   2202.966,
   1744.894,
   1231.358};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3132[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3132[20] = {
   1479.172,
   969.9586,
   778.8433,
   655.7542,
   567.4331,
   524.2346,
   438.55,
   392.1296,
   415.2691,
   362.9424,
   316.8063,
   308.389,
   324.3908,
   314.8338,
   335.2013,
   332.0402,
   297.2787,
   282.5538,
   244.9213,
   208.7133};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3132[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3132[20] = {
   1479.172,
   969.9586,
   778.8433,
   655.7542,
   567.4331,
   524.2346,
   438.55,
   392.1296,
   415.2691,
   362.9424,
   316.8063,
   308.389,
   324.3908,
   314.8338,
   335.2013,
   332.0402,
   297.2787,
   282.5538,
   244.9213,
   208.7133};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3132,BkgSum-SR-Inclusive_sum_errors_fy3132,BkgSum-SR-Inclusive_sum_errors_felx3132,BkgSum-SR-Inclusive_sum_errors_fehx3132,BkgSum-SR-Inclusive_sum_errors_fely3132,BkgSum-SR-Inclusive_sum_errors_fehy3132);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1240;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMinimum(920.3798);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMaximum(66117.93);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors312431283132);
   
   grae->Draw("e2 ");
   Double_t xAxis198[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__229 = new TH1F("Data__229","h_SR_MVAOutputM1000Inclusive",20, xAxis198);
   Data__229->SetBinContent(1,53580);
   Data__229->SetBinContent(2,27660);
   Data__229->SetBinContent(3,16760);
   Data__229->SetBinContent(4,13160);
   Data__229->SetBinContent(5,9940);
   Data__229->SetBinContent(6,7800);
   Data__229->SetBinContent(7,6960);
   Data__229->SetBinContent(8,4960);
   Data__229->SetBinContent(9,4240);
   Data__229->SetBinContent(10,3460);
   Data__229->SetBinContent(11,3220);
   Data__229->SetBinContent(12,2980);
   Data__229->SetBinContent(13,3160);
   Data__229->SetBinContent(14,2520);
   Data__229->SetBinContent(15,2160);
   Data__229->SetBinContent(16,2940);
   Data__229->SetBinContent(17,2560);
   Data__229->SetBinContent(18,2580);
   Data__229->SetBinContent(19,2060);
   Data__229->SetBinContent(20,900);
   Data__229->SetBinError(1,1035.181);
   Data__229->SetBinError(2,743.7742);
   Data__229->SetBinError(3,578.9646);
   Data__229->SetBinError(4,513.0302);
   Data__229->SetBinError(5,445.8699);
   Data__229->SetBinError(6,394.9684);
   Data__229->SetBinError(7,373.0952);
   Data__229->SetBinError(8,314.9603);
   Data__229->SetBinError(9,291.2044);
   Data__229->SetBinError(10,263.0589);
   Data__229->SetBinError(11,253.7716);
   Data__229->SetBinError(12,244.1311);
   Data__229->SetBinError(13,251.3961);
   Data__229->SetBinError(14,224.4994);
   Data__229->SetBinError(15,207.8461);
   Data__229->SetBinError(16,242.4871);
   Data__229->SetBinError(17,226.2742);
   Data__229->SetBinError(18,227.1563);
   Data__229->SetBinError(19,202.9778);
   Data__229->SetBinError(20,134.1641);
   Data__229->SetEntries(8680);
   Data__229->SetDirectory(0);
   Data__229->SetFillStyle(3001);
   Data__229->SetLineWidth(2);
   Data__229->SetMarkerStyle(20);
   Data__229->SetMarkerSize(1.2);
   Data__229->GetXaxis()->SetRange(1,200);
   Data__229->GetXaxis()->SetLabelFont(42);
   Data__229->GetXaxis()->SetTitleOffset(1);
   Data__229->GetXaxis()->SetTitleFont(42);
   Data__229->GetYaxis()->SetLabelFont(42);
   Data__229->GetYaxis()->SetTitleFont(42);
   Data__229->GetZaxis()->SetLabelFont(42);
   Data__229->GetZaxis()->SetTitleOffset(1);
   Data__229->GetZaxis()->SetTitleFont(42);
   Data__229->Draw("EP same");
   
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

   ci = 1240;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1240;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__230 = new TH1F("hframe_copy__230","",1000,0,1.01);
   hframe_copy__230->SetMinimum(0.01);
   hframe_copy__230->SetMaximum(421401.2);
   hframe_copy__230->SetDirectory(0);
   hframe_copy__230->SetStats(0);
   hframe_copy__230->SetLineStyle(0);
   hframe_copy__230->SetMarkerStyle(20);
   hframe_copy__230->GetXaxis()->SetLabelFont(43);
   hframe_copy__230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetXaxis()->SetLabelSize(0);
   hframe_copy__230->GetXaxis()->SetTitleSize(0);
   hframe_copy__230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__230->GetXaxis()->SetTitleFont(43);
   hframe_copy__230->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__230->GetYaxis()->SetLabelFont(43);
   hframe_copy__230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetYaxis()->SetLabelSize(27);
   hframe_copy__230->GetYaxis()->SetTitleSize(33);
   hframe_copy__230->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__230->GetYaxis()->SetTitleFont(43);
   hframe_copy__230->GetZaxis()->SetLabelFont(43);
   hframe_copy__230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetZaxis()->SetLabelSize(27);
   hframe_copy__230->GetZaxis()->SetTitleSize(33);
   hframe_copy__230->GetZaxis()->SetTitleOffset(1);
   hframe_copy__230->GetZaxis()->SetTitleFont(43);
   hframe_copy__230->Draw("sameaxis");
   
   TH1F *hframe_copy__231 = new TH1F("hframe_copy__231","",1000,0,1.01);
   hframe_copy__231->SetMinimum(0.01);
   hframe_copy__231->SetMaximum(421401.2);
   hframe_copy__231->SetDirectory(0);
   hframe_copy__231->SetStats(0);
   hframe_copy__231->SetLineStyle(0);
   hframe_copy__231->SetMarkerStyle(20);
   hframe_copy__231->GetXaxis()->SetLabelFont(43);
   hframe_copy__231->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetXaxis()->SetLabelSize(0);
   hframe_copy__231->GetXaxis()->SetTitleSize(0);
   hframe_copy__231->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__231->GetXaxis()->SetTitleFont(43);
   hframe_copy__231->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__231->GetYaxis()->SetLabelFont(43);
   hframe_copy__231->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetYaxis()->SetLabelSize(27);
   hframe_copy__231->GetYaxis()->SetTitleSize(33);
   hframe_copy__231->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__231->GetYaxis()->SetTitleFont(43);
   hframe_copy__231->GetZaxis()->SetLabelFont(43);
   hframe_copy__231->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetZaxis()->SetLabelSize(27);
   hframe_copy__231->GetZaxis()->SetTitleSize(33);
   hframe_copy__231->GetZaxis()->SetTitleOffset(1);
   hframe_copy__231->GetZaxis()->SetTitleFont(43);
   hframe_copy__231->Draw("sameaxis");
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
   MVAOutputM1000_1->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->SetSelected(MVAOutputM1000);
}
