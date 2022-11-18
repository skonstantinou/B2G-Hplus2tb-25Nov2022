void Circularity()
{
//=========Macro generated from canvas: Circularity/Circularity
//=========  (Fri Nov 18 13:27:28 2022) by ROOT version 6.20/02
   TCanvas *Circularity = new TCanvas("Circularity", "Circularity",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Circularity->SetHighLightColor(2);
   Circularity->Range(0,0,1,1);
   Circularity->SetFillColor(0);
   Circularity->SetBorderMode(0);
   Circularity->SetBorderSize(2);
   Circularity->SetTickx(1);
   Circularity->SetTicky(1);
   Circularity->SetLeftMargin(0.16);
   Circularity->SetRightMargin(0.05);
   Circularity->SetTopMargin(0.06);
   Circularity->SetBottomMargin(0.13);
   Circularity->SetFrameFillStyle(0);
   Circularity->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Circularity_2
   TPad *Circularity_2 = new TPad("Circularity_2", "Circularity_2",0,0,1,0.304);
   Circularity_2->Draw();
   Circularity_2->cd();
   Circularity_2->Range(-0.2025316,-0.428,1.063291,1.7);
   Circularity_2->SetFillColor(0);
   Circularity_2->SetFillStyle(4000);
   Circularity_2->SetBorderMode(0);
   Circularity_2->SetBorderSize(2);
   Circularity_2->SetTickx(1);
   Circularity_2->SetTicky(1);
   Circularity_2->SetLeftMargin(0.16);
   Circularity_2->SetRightMargin(0.05);
   Circularity_2->SetTopMargin(0);
   Circularity_2->SetBottomMargin(0.3421053);
   Circularity_2->SetFrameFillStyle(0);
   Circularity_2->SetFrameBorderMode(0);
   Circularity_2->SetFrameFillStyle(0);
   Circularity_2->SetFrameBorderMode(0);
   
   TH1F *hframe__372 = new TH1F("hframe__372","",1000,0,1);
   hframe__372->SetMinimum(0.3);
   hframe__372->SetMaximum(1.7);
   hframe__372->SetDirectory(0);
   hframe__372->SetStats(0);
   hframe__372->SetLineStyle(0);
   hframe__372->SetMarkerStyle(20);
   hframe__372->GetXaxis()->SetTitle("Circularity");
   hframe__372->GetXaxis()->SetLabelFont(43);
   hframe__372->GetXaxis()->SetLabelOffset(0.007);
   hframe__372->GetXaxis()->SetLabelSize(27);
   hframe__372->GetXaxis()->SetTitleSize(33);
   hframe__372->GetXaxis()->SetTitleOffset(2.960526);
   hframe__372->GetXaxis()->SetTitleFont(43);
   hframe__372->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__372->GetYaxis()->SetNdivisions(505);
   hframe__372->GetYaxis()->SetLabelFont(43);
   hframe__372->GetYaxis()->SetLabelOffset(0.007);
   hframe__372->GetYaxis()->SetLabelSize(21);
   hframe__372->GetYaxis()->SetTitleSize(33);
   hframe__372->GetYaxis()->SetTitleOffset(1.5625);
   hframe__372->GetYaxis()->SetTitleFont(43);
   hframe__372->GetZaxis()->SetLabelFont(43);
   hframe__372->GetZaxis()->SetLabelOffset(0.007);
   hframe__372->GetZaxis()->SetLabelSize(27);
   hframe__372->GetZaxis()->SetTitleSize(33);
   hframe__372->GetZaxis()->SetTitleOffset(1);
   hframe__372->GetZaxis()->SetTitleFont(43);
   hframe__372->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3213[20] = {
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
   Double_t BackgroundStatSystError_fy3213[20] = {
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
   Double_t BackgroundStatSystError_felx3213[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3213[20] = {
   0.1193376,
   0.05550601,
   0.04362538,
   0.03892654,
   0.0361536,
   0.03669021,
   0.03745912,
   0.03685707,
   0.03818108,
   0.03982819,
   0.04280385,
   0.04605318,
   0.04520986,
   0.05271278,
   0.05620877,
   0.06237607,
   0.06946012,
   0.07948056,
   0.1084611,
   0.1656849};
   Double_t BackgroundStatSystError_fehx3213[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3213[20] = {
   0.1193376,
   0.05550601,
   0.04362538,
   0.03892654,
   0.0361536,
   0.03669021,
   0.03745912,
   0.03685707,
   0.03818108,
   0.03982819,
   0.04280385,
   0.04605318,
   0.04520986,
   0.05271278,
   0.05620877,
   0.06237607,
   0.06946012,
   0.07948056,
   0.1084611,
   0.1656849};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3213,BackgroundStatSystError_fy3213,BackgroundStatSystError_felx3213,BackgroundStatSystError_fehx3213,BackgroundStatSystError_fely3213,BackgroundStatSystError_fehy3213);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1263;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError320532093213 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError320532093213","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMinimum(0.8011781);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMaximum(1.198822);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError320532093213);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3214[20] = {
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
   Double_t BackgroundStatError_fy3214[20] = {
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
   Double_t BackgroundStatError_felx3214[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3214[20] = {
   0.1193376,
   0.05550601,
   0.04362538,
   0.03892654,
   0.0361536,
   0.03669021,
   0.03745912,
   0.03685707,
   0.03818108,
   0.03982819,
   0.04280385,
   0.04605318,
   0.04520986,
   0.05271278,
   0.05620877,
   0.06237607,
   0.06946012,
   0.07948056,
   0.1084611,
   0.1656849};
   Double_t BackgroundStatError_fehx3214[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3214[20] = {
   0.1193376,
   0.05550601,
   0.04362538,
   0.03892654,
   0.0361536,
   0.03669021,
   0.03745912,
   0.03685707,
   0.03818108,
   0.03982819,
   0.04280385,
   0.04605318,
   0.04520986,
   0.05271278,
   0.05620877,
   0.06237607,
   0.06946012,
   0.07948056,
   0.1084611,
   0.1656849};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3214,BackgroundStatError_fy3214,BackgroundStatError_felx3214,BackgroundStatError_fehx3214,BackgroundStatError_fely3214,BackgroundStatError_fehy3214);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1262;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError320632103214 = new TH1F("Graph_Graph_Graph_BackgroundStatError320632103214","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMinimum(0.8011781);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMaximum(1.198822);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError320632103214->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError320632103214);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx54[2] = {
   0,
   1};
   Double_t Graph0_fy54[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx54,Graph0_fy54);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0525354 = new TH1F("Graph_Graph_Graph_Graph0525354","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph0525354->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0525354->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0525354->SetDirectory(0);
   Graph_Graph_Graph_Graph0525354->SetStats(0);
   Graph_Graph_Graph_Graph0525354->SetLineStyle(0);
   Graph_Graph_Graph_Graph0525354->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0525354->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0525354->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0525354->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0525354);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3215[20] = {
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
   Double_t Graph1_fy3215[20] = {
   1.423895,
   1.05407,
   1.068091,
   1.08945,
   0.9867934,
   1.047796,
   1.087597,
   1.059395,
   0.9939581,
   1.03112,
   1.016832,
   1.144416,
   1.03203,
   1.117917,
   1.015715,
   1.001661,
   0.9588768,
   0.7715177,
   0.9075593,
   1.055639};
   Double_t Graph1_felx3215[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3215[20] = {
   0.1612244,
   0.06310551,
   0.04931984,
   0.04436582,
   0.03919057,
   0.04094078,
   0.04246354,
   0.04108158,
   0.04092061,
   0.04337952,
   0.04621963,
   0.05335867,
   0.0493123,
   0.05950071,
   0.06059246,
   0.06562101,
   0.07127275,
   0.07322922,
   0.1077075,
   0.1784356};
   Double_t Graph1_fehx3215[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3215[20] = {
   0.1612244,
   0.06310551,
   0.04931984,
   0.04436582,
   0.03919057,
   0.04094078,
   0.04246354,
   0.04108158,
   0.04092061,
   0.04337952,
   0.04621963,
   0.05335867,
   0.0493123,
   0.05950071,
   0.06059246,
   0.06562101,
   0.07127275,
   0.07322922,
   0.1077075,
   0.1784356};
   grae = new TGraphAsymmErrors(20,Graph1_fx3215,Graph1_fy3215,Graph1_felx3215,Graph1_fehx3215,Graph1_fely3215,Graph1_fehy3215);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1320732113215 = new TH1F("Graph_Graph_Graph_Graph1320732113215","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1320732113215->SetMinimum(0.6096054);
   Graph_Graph_Graph_Graph1320732113215->SetMaximum(1.673803);
   Graph_Graph_Graph_Graph1320732113215->SetDirectory(0);
   Graph_Graph_Graph_Graph1320732113215->SetStats(0);
   Graph_Graph_Graph_Graph1320732113215->SetLineStyle(0);
   Graph_Graph_Graph_Graph1320732113215->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1320732113215->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1320732113215->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1320732113215->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1320732113215);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__373 = new TH1F("hframe_copy__373","",1000,0,1);
   hframe_copy__373->SetMinimum(0.3);
   hframe_copy__373->SetMaximum(1.7);
   hframe_copy__373->SetDirectory(0);
   hframe_copy__373->SetStats(0);
   hframe_copy__373->SetLineStyle(0);
   hframe_copy__373->SetMarkerStyle(20);
   hframe_copy__373->GetXaxis()->SetTitle("Circularity");
   hframe_copy__373->GetXaxis()->SetLabelFont(43);
   hframe_copy__373->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__373->GetXaxis()->SetLabelSize(27);
   hframe_copy__373->GetXaxis()->SetTitleSize(33);
   hframe_copy__373->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__373->GetXaxis()->SetTitleFont(43);
   hframe_copy__373->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__373->GetYaxis()->SetNdivisions(505);
   hframe_copy__373->GetYaxis()->SetLabelFont(43);
   hframe_copy__373->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__373->GetYaxis()->SetLabelSize(21);
   hframe_copy__373->GetYaxis()->SetTitleSize(33);
   hframe_copy__373->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__373->GetYaxis()->SetTitleFont(43);
   hframe_copy__373->GetZaxis()->SetLabelFont(43);
   hframe_copy__373->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__373->GetZaxis()->SetLabelSize(27);
   hframe_copy__373->GetZaxis()->SetTitleSize(33);
   hframe_copy__373->GetZaxis()->SetTitleOffset(1);
   hframe_copy__373->GetZaxis()->SetTitleFont(43);
   hframe_copy__373->Draw("sameaxis");
   Circularity_2->Modified();
   Circularity->cd();
  
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
   Circularity->cd();
  
// ------------>Primitives in pad: Circularity_1
   TPad *Circularity_1 = new TPad("Circularity_1", "Circularity_1",0,0.2897959,1,1);
   Circularity_1->Draw();
   Circularity_1->cd();
   Circularity_1->Range(-0.2025316,-2.123226,1.063291,4.038062);
   Circularity_1->SetFillColor(0);
   Circularity_1->SetFillStyle(4000);
   Circularity_1->SetBorderMode(0);
   Circularity_1->SetBorderSize(2);
   Circularity_1->SetLogy();
   Circularity_1->SetTickx(1);
   Circularity_1->SetTicky(1);
   Circularity_1->SetLeftMargin(0.16);
   Circularity_1->SetRightMargin(0.05);
   Circularity_1->SetTopMargin(0.06);
   Circularity_1->SetBottomMargin(0.02);
   Circularity_1->SetFrameFillStyle(0);
   Circularity_1->SetFrameBorderMode(0);
   Circularity_1->SetFrameFillStyle(0);
   Circularity_1->SetFrameBorderMode(0);
   
   TH1F *hframe__374 = new TH1F("hframe__374","",1000,0,1);
   hframe__374->SetMinimum(0.01);
   hframe__374->SetMaximum(4659.992);
   hframe__374->SetDirectory(0);
   hframe__374->SetStats(0);
   hframe__374->SetLineStyle(0);
   hframe__374->SetMarkerStyle(20);
   hframe__374->GetXaxis()->SetLabelFont(43);
   hframe__374->GetXaxis()->SetLabelOffset(0.007);
   hframe__374->GetXaxis()->SetLabelSize(0);
   hframe__374->GetXaxis()->SetTitleSize(0);
   hframe__374->GetXaxis()->SetTitleOffset(0.9);
   hframe__374->GetXaxis()->SetTitleFont(43);
   hframe__374->GetYaxis()->SetTitle("Events / 0.05");
   hframe__374->GetYaxis()->SetLabelFont(43);
   hframe__374->GetYaxis()->SetLabelOffset(0.007);
   hframe__374->GetYaxis()->SetLabelSize(27);
   hframe__374->GetYaxis()->SetTitleSize(33);
   hframe__374->GetYaxis()->SetTitleOffset(1.5625);
   hframe__374->GetYaxis()->SetTitleFont(43);
   hframe__374->GetZaxis()->SetLabelFont(43);
   hframe__374->GetZaxis()->SetLabelOffset(0.007);
   hframe__374->GetZaxis()->SetLabelSize(27);
   hframe__374->GetZaxis()->SetTitleSize(33);
   hframe__374->GetZaxis()->SetTitleOffset(1);
   hframe__374->GetZaxis()->SetTitleFont(43);
   hframe__374->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_52_stack_53_stack_54 = new TH1F("StackedMCstackHist_stack_52_stack_53_stack_54","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMinimum(0.2665575);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMaximum(1026.1);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetDirectory(0);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetStats(0);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetLineStyle(0);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMarkerStyle(20);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_52_stack_53_stack_54->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_52_stack_53_stack_54);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_CircularityInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2.984641);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,9.365146);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,13.67632);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,17.0798);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,18.10315);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,17.02729);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,17.42841);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,16.6855);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,14.84781);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,11.76422);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,15.79469);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,12.08783);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,10.50247);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,9.53797);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,6.906497);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,5.255071);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,3.54191);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,3.28846);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,2.166526);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,1.056368);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.6522564);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.306724);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,1.569936);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.657172);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,1.684188);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.590466);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.787767);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.63532);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.312989);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,1.324517);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,1.395739);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.189712);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.271705);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.157064);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.9201372);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.8095682);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.6075251);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.5564724);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.4907885);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.3180924);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(105982);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,100);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_CircularityInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,19.26791);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,80.70055);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,133.5321);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,168.9499);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,196.9854);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,208.7717);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,211.1259);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,210.8003);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,201.5086);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,195.3086);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,173.6678);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,155.9813);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,143.324);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,119.9496);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,99.0444);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,82.02051);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,63.58025);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,43.82178);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,27.83183);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,9.719177);
   TT_stack_2_stack_2_stack_2->SetBinError(1,1.086454);
   TT_stack_2_stack_2_stack_2->SetBinError(2,2.244271);
   TT_stack_2_stack_2_stack_2->SetBinError(3,2.903938);
   TT_stack_2_stack_2_stack_2->SetBinError(4,3.254475);
   TT_stack_2_stack_2_stack_2->SetBinError(5,3.527776);
   TT_stack_2_stack_2_stack_2->SetBinError(6,3.63701);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.665577);
   TT_stack_2_stack_2_stack_2->SetBinError(8,3.674977);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.581316);
   TT_stack_2_stack_2_stack_2->SetBinError(10,3.563709);
   TT_stack_2_stack_2_stack_2->SetBinError(11,3.328965);
   TT_stack_2_stack_2_stack_2->SetBinError(12,3.15803);
   TT_stack_2_stack_2_stack_2->SetBinError(13,3.021027);
   TT_stack_2_stack_2_stack_2->SetBinError(14,2.766076);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.522382);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.291083);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.014916);
   TT_stack_2_stack_2_stack_2->SetBinError(18,1.666602);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.355033);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.7818769);
   TT_stack_2_stack_2_stack_2->SetEntries(42874);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,100);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_CircularityInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,32.52676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,174.6227);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,291.8929);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,367.4607);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,427.3965);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,399.3226);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,374.6102);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,400.231);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,377.2299);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,340.8753);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,286.5258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,233.8826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,270.5798);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,186.2783);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,170.7016);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,145.338);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,121.6404);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,96.76202);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,48.23344);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,22.37971);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,6.413234);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,14.46045);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,18.86938);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,21.23369);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,22.89684);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,22.58972);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,22.22289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,22.78345);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,22.34047);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,21.49007);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,20.05181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,18.20094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,18.9053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,16.37262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,15.31675);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,14.30461);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,12.94147);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,11.29925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,8.361822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,5.428085);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3687.029);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,100);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__375 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__375","h_SR_CircularityInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(1,2.194257);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(2,16.70092);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(3,24.84102);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(4,24.93583);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(5,19.32752);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(6,16.96594);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(7,12.42511);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(8,12.83402);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(9,10.69747);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(10,8.642907);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(11,7.063534);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(12,5.603957);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(13,5.039189);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(14,3.564608);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(15,4.233272);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(16,2.835925);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(17,1.121909);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(18,1.135584);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(19,1.027081);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(20,-0.113459);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(1,0.4360178);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(2,1.175268);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(3,1.473408);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(4,1.47412);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(5,1.374474);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(6,1.30912);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(7,1.195225);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(8,1.120379);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(9,1.01827);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(10,0.939651);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(11,0.8689327);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(12,0.810834);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(13,0.7592262);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(14,0.649339);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(15,0.6355133);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(16,0.5479058);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(17,0.4762446);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(18,0.3689225);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(19,0.3105086);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(20,0.1548329);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetEntries(35807);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3216[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3216[20] = {
   54.77931,
   264.6884,
   439.1013,
   553.4905,
   642.485,
   625.1216,
   603.1645,
   627.7167,
   593.5864,
   547.9481,
   475.9883,
   401.9518,
   424.4063,
   315.7659,
   276.6525,
   232.6136,
   188.7625,
   143.8723,
   78.2318,
   33.15526};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3216[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3216[20] = {
   6.537231,
   14.69179,
   19.15596,
   21.54547,
   23.22815,
   22.93584,
   22.59401,
   23.1358,
   22.66377,
   21.82378,
   20.37413,
   18.51116,
   19.18735,
   16.6449,
   15.5503,
   14.50952,
   13.11147,
   11.43505,
   8.485108,
   5.493325};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3216[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3216[20] = {
   6.537231,
   14.69179,
   19.15596,
   21.54547,
   23.22815,
   22.93584,
   22.59401,
   23.1358,
   22.66377,
   21.82378,
   20.37413,
   18.51116,
   19.18735,
   16.6449,
   15.5503,
   14.50952,
   13.11147,
   11.43505,
   8.485108,
   5.493325};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3216,BkgSum-SR-Inclusive_sum_errors_fy3216,BkgSum-SR-Inclusive_sum_errors_felx3216,BkgSum-SR-Inclusive_sum_errors_fehx3216,BkgSum-SR-Inclusive_sum_errors_fely3216,BkgSum-SR-Inclusive_sum_errors_fehy3216);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1261;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMinimum(24.89574);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMaximum(729.5183);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors320832123216);
   
   grae->Draw("e2 ");
   
   TH1F *Data__376 = new TH1F("Data__376","h_SR_CircularityInclusive",20,0,1);
   Data__376->SetBinContent(1,78);
   Data__376->SetBinContent(2,279);
   Data__376->SetBinContent(3,469);
   Data__376->SetBinContent(4,603);
   Data__376->SetBinContent(5,634);
   Data__376->SetBinContent(6,655);
   Data__376->SetBinContent(7,656);
   Data__376->SetBinContent(8,665);
   Data__376->SetBinContent(9,590);
   Data__376->SetBinContent(10,565);
   Data__376->SetBinContent(11,484);
   Data__376->SetBinContent(12,460);
   Data__376->SetBinContent(13,438);
   Data__376->SetBinContent(14,353);
   Data__376->SetBinContent(15,281);
   Data__376->SetBinContent(16,233);
   Data__376->SetBinContent(17,181);
   Data__376->SetBinContent(18,111);
   Data__376->SetBinContent(19,71);
   Data__376->SetBinContent(20,35);
   Data__376->SetBinError(1,8.831761);
   Data__376->SetBinError(2,16.70329);
   Data__376->SetBinError(3,21.65641);
   Data__376->SetBinError(4,24.55606);
   Data__376->SetBinError(5,25.17936);
   Data__376->SetBinError(6,25.59297);
   Data__376->SetBinError(7,25.6125);
   Data__376->SetBinError(8,25.78759);
   Data__376->SetBinError(9,24.28992);
   Data__376->SetBinError(10,23.76973);
   Data__376->SetBinError(11,22);
   Data__376->SetBinError(12,21.44761);
   Data__376->SetBinError(13,20.92845);
   Data__376->SetBinError(14,18.78829);
   Data__376->SetBinError(15,16.76305);
   Data__376->SetBinError(16,15.26434);
   Data__376->SetBinError(17,13.45362);
   Data__376->SetBinError(18,10.53565);
   Data__376->SetBinError(19,8.42615);
   Data__376->SetBinError(20,5.91608);
   Data__376->SetEntries(7845);
   Data__376->SetDirectory(0);
   Data__376->SetFillStyle(3001);
   Data__376->SetLineWidth(2);
   Data__376->SetMarkerStyle(20);
   Data__376->SetMarkerSize(1.2);
   Data__376->GetXaxis()->SetRange(1,100);
   Data__376->GetXaxis()->SetLabelFont(42);
   Data__376->GetXaxis()->SetTitleOffset(1);
   Data__376->GetXaxis()->SetTitleFont(42);
   Data__376->GetYaxis()->SetLabelFont(42);
   Data__376->GetYaxis()->SetTitleFont(42);
   Data__376->GetZaxis()->SetLabelFont(42);
   Data__376->GetZaxis()->SetTitleOffset(1);
   Data__376->GetZaxis()->SetTitleFont(42);
   Data__376->Draw("EP same");
   
   TLegend *leg = new TLegend(0.65,0.51,0.85,0.91,NULL,"brNDC");
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

   ci = 1261;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1261;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__377 = new TH1F("hframe_copy__377","",1000,0,1);
   hframe_copy__377->SetMinimum(0.01);
   hframe_copy__377->SetMaximum(4659.992);
   hframe_copy__377->SetDirectory(0);
   hframe_copy__377->SetStats(0);
   hframe_copy__377->SetLineStyle(0);
   hframe_copy__377->SetMarkerStyle(20);
   hframe_copy__377->GetXaxis()->SetLabelFont(43);
   hframe_copy__377->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__377->GetXaxis()->SetLabelSize(0);
   hframe_copy__377->GetXaxis()->SetTitleSize(0);
   hframe_copy__377->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__377->GetXaxis()->SetTitleFont(43);
   hframe_copy__377->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__377->GetYaxis()->SetLabelFont(43);
   hframe_copy__377->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__377->GetYaxis()->SetLabelSize(27);
   hframe_copy__377->GetYaxis()->SetTitleSize(33);
   hframe_copy__377->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__377->GetYaxis()->SetTitleFont(43);
   hframe_copy__377->GetZaxis()->SetLabelFont(43);
   hframe_copy__377->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__377->GetZaxis()->SetLabelSize(27);
   hframe_copy__377->GetZaxis()->SetTitleSize(33);
   hframe_copy__377->GetZaxis()->SetTitleOffset(1);
   hframe_copy__377->GetZaxis()->SetTitleFont(43);
   hframe_copy__377->Draw("sameaxis");
   
   TH1F *hframe_copy__378 = new TH1F("hframe_copy__378","",1000,0,1);
   hframe_copy__378->SetMinimum(0.01);
   hframe_copy__378->SetMaximum(4659.992);
   hframe_copy__378->SetDirectory(0);
   hframe_copy__378->SetStats(0);
   hframe_copy__378->SetLineStyle(0);
   hframe_copy__378->SetMarkerStyle(20);
   hframe_copy__378->GetXaxis()->SetLabelFont(43);
   hframe_copy__378->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__378->GetXaxis()->SetLabelSize(0);
   hframe_copy__378->GetXaxis()->SetTitleSize(0);
   hframe_copy__378->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__378->GetXaxis()->SetTitleFont(43);
   hframe_copy__378->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__378->GetYaxis()->SetLabelFont(43);
   hframe_copy__378->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__378->GetYaxis()->SetLabelSize(27);
   hframe_copy__378->GetYaxis()->SetTitleSize(33);
   hframe_copy__378->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__378->GetYaxis()->SetTitleFont(43);
   hframe_copy__378->GetZaxis()->SetLabelFont(43);
   hframe_copy__378->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__378->GetZaxis()->SetLabelSize(27);
   hframe_copy__378->GetZaxis()->SetTitleSize(33);
   hframe_copy__378->GetZaxis()->SetTitleOffset(1);
   hframe_copy__378->GetZaxis()->SetTitleFont(43);
   hframe_copy__378->Draw("sameaxis");
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
   Circularity_1->Modified();
   Circularity->cd();
   Circularity->Modified();
   Circularity->cd();
   Circularity->SetSelected(Circularity);
}
