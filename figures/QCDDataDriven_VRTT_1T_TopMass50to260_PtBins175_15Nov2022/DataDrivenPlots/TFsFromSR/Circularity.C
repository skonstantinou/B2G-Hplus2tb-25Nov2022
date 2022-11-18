void Circularity()
{
//=========Macro generated from canvas: Circularity/Circularity
//=========  (Fri Nov 18 13:27:38 2022) by ROOT version 6.20/02
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
   0.07576582,
   0.03371126,
   0.02570613,
   0.02285422,
   0.02138605,
   0.02102472,
   0.02082547,
   0.02102943,
   0.02198809,
   0.02259567,
   0.0243255,
   0.02598881,
   0.02712618,
   0.03118389,
   0.03366159,
   0.0389273,
   0.04303679,
   0.04949576,
   0.06896188,
   0.1123306};
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
   0.07576582,
   0.03371126,
   0.02570613,
   0.02285422,
   0.02138605,
   0.02102472,
   0.02082547,
   0.02102943,
   0.02198809,
   0.02259567,
   0.0243255,
   0.02598881,
   0.02712618,
   0.03118389,
   0.03366159,
   0.0389273,
   0.04303679,
   0.04949576,
   0.06896188,
   0.1123306};
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
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMinimum(0.8652033);
   Graph_Graph_Graph_BackgroundStatSystError320532093213->SetMaximum(1.134797);
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
   0.07576582,
   0.03371126,
   0.02570613,
   0.02285422,
   0.02138605,
   0.02102472,
   0.02082547,
   0.02102943,
   0.02198809,
   0.02259567,
   0.0243255,
   0.02598881,
   0.02712618,
   0.03118389,
   0.03366159,
   0.0389273,
   0.04303679,
   0.04949576,
   0.06896188,
   0.1123306};
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
   0.07576582,
   0.03371126,
   0.02570613,
   0.02285422,
   0.02138605,
   0.02102472,
   0.02082547,
   0.02102943,
   0.02198809,
   0.02259567,
   0.0243255,
   0.02598881,
   0.02712618,
   0.03118389,
   0.03366159,
   0.0389273,
   0.04303679,
   0.04949576,
   0.06896188,
   0.1123306};
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
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMinimum(0.8652033);
   Graph_Graph_Graph_BackgroundStatError320632103214->SetMaximum(1.134797);
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
   1.048073,
   1.037214,
   1.024209,
   1.045025,
   1.004837,
   1.047624,
   0.9789761,
   0.9408965,
   0.991074,
   0.8914166,
   0.9651322,
   0.9963996,
   0.8971449,
   0.9336259,
   1.064033,
   0.9695429,
   0.8566078,
   0.9829496,
   0.9409646,
   0.9410451};
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
   0.09992988,
   0.04426723,
   0.03316001,
   0.02961705,
   0.02701995,
   0.02712195,
   0.02564734,
   0.02524589,
   0.02697362,
   0.02610547,
   0.02920623,
   0.03138364,
   0.03071766,
   0.03604223,
   0.04116866,
   0.04491321,
   0.04659332,
   0.05782057,
   0.07814286,
   0.1246445};
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
   0.09992988,
   0.04426723,
   0.03316001,
   0.02961705,
   0.02701995,
   0.02712195,
   0.02564734,
   0.02524589,
   0.02697362,
   0.02610547,
   0.02920623,
   0.03138364,
   0.03071766,
   0.03604223,
   0.04116866,
   0.04491321,
   0.04659332,
   0.05782057,
   0.07814286,
   0.1246445};
   grae = new TGraphAsymmErrors(20,Graph1_fx3215,Graph1_fy3215,Graph1_felx3215,Graph1_fehx3215,Graph1_fely3215,Graph1_fehy3215);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1320732113215 = new TH1F("Graph_Graph_Graph_Graph1320732113215","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1320732113215->SetMinimum(0.7762156);
   Graph_Graph_Graph_Graph1320732113215->SetMaximum(1.181802);
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
   Circularity_1->Range(-0.2025316,-2.131016,1.063291,4.419785);
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
   hframe__374->SetMaximum(10634.99);
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
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMinimum(0.5953159);
   StackedMCstackHist_stack_52_stack_53_stack_54->SetMaximum(2381.263);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,4.071805);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,15.64128);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,30.36034);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,35.15226);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,36.32403);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,34.62272);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,38.97883);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,37.3753);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,32.78588);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,29.2174);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,26.41517);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,26.32505);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,24.2679);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,20.22096);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,14.27487);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,12.33315);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,8.703287);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,5.914751);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,5.032908);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.3016744);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.8236645);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.76419);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.415929);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,3.35012);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.736173);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.592172);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,2.643756);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,3.242705);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.863841);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.333621);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,3.182507);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.872018);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.930024);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,2.359382);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.67071);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.596093);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,1.098434);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.8002009);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,1.042059);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.3842275);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(52636);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,55.20428);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,304.4203);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,527.2663);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,709.6678);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,833.9677);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,899.7844);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,908.4722);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,911.0267);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,850.7566);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,797.7318);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,727.5019);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,638.3044);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,555.6747);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,463.0902);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,394.0553);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,297.6301);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,234.6002);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,166.2138);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,96.40269);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,33.93565);
   TT_stack_2_stack_2_stack_2->SetBinError(1,1.792519);
   TT_stack_2_stack_2_stack_2->SetBinError(2,4.227528);
   TT_stack_2_stack_2_stack_2->SetBinError(3,5.5456);
   TT_stack_2_stack_2_stack_2->SetBinError(4,6.440667);
   TT_stack_2_stack_2_stack_2->SetBinError(5,6.974608);
   TT_stack_2_stack_2_stack_2->SetBinError(6,7.263863);
   TT_stack_2_stack_2_stack_2->SetBinError(7,7.297753);
   TT_stack_2_stack_2_stack_2->SetBinError(8,7.325648);
   TT_stack_2_stack_2_stack_2->SetBinError(9,7.067577);
   TT_stack_2_stack_2_stack_2->SetBinError(10,6.861111);
   TT_stack_2_stack_2_stack_2->SetBinError(11,6.559196);
   TT_stack_2_stack_2_stack_2->SetBinError(12,6.150811);
   TT_stack_2_stack_2_stack_2->SetBinError(13,5.731386);
   TT_stack_2_stack_2_stack_2->SetBinError(14,5.233802);
   TT_stack_2_stack_2_stack_2->SetBinError(15,4.832178);
   TT_stack_2_stack_2_stack_2->SetBinError(16,4.203767);
   TT_stack_2_stack_2_stack_2->SetBinError(17,3.737742);
   TT_stack_2_stack_2_stack_2->SetBinError(18,3.141093);
   TT_stack_2_stack_2_stack_2->SetBinError(19,2.394125);
   TT_stack_2_stack_2_stack_2->SetBinError(20,1.432243);
   TT_stack_2_stack_2_stack_2->SetEntries(185137);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,45.67839);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,209.2408);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,373.8235);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,446.5394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,506.0511);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,489.7685);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,540.8387);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,527.8497);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,478.6161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,481.0812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,377.5341);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,347.0128);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,370.8515);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,235.3921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,219.4701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,170.6756);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,151.2761);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,121.8845);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,52.66157);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,26.33363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,7.703386);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,17.24542);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,23.16729);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,26.24188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,28.46507);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,28.93258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,30.00669);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,29.99325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,28.96423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,28.65356);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,26.53997);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,25.39992);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,24.97525);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,21.66418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,20.50493);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,18.16161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,16.52852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,14.18681);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,10.30106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,6.640412);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3639.597);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(1,0.2627228);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(2,2.796499);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(3,4.698773);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(4,3.948658);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(5,4.289131);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(6,2.268612);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(7,2.957687);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(8,1.436886);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(9,2.110712);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(10,1.847593);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(11,1.391003);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(12,0.8577299);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(13,0.8926371);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(14,1.493888);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(15,0.6408119);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(16,0.09867951);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(17,0.7300701);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(18,-0.1986344);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(19,-0.001902445);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinContent(20,0.1966048);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(1,0.1612146);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(2,0.5101916);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(3,0.682182);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(4,0.6701364);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(5,0.6584473);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(6,0.6316743);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(7,0.6019814);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(8,0.553643);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(9,0.5511445);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(10,0.5048696);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(11,0.4392932);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(12,0.4426014);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(13,0.3902208);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(14,0.3667554);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(15,0.3110543);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(16,0.3348322);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(17,0.2483479);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(18,0.1856574);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(19,0.1719884);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetBinError(20,0.1025364);
   ChargedHiggs_HplusTBHplusToTB_M_800__375->SetEntries(5945);
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
   104.9545,
   529.3024,
   931.4501,
   1191.359,
   1376.343,
   1424.176,
   1488.29,
   1476.252,
   1362.159,
   1308.03,
   1131.451,
   1011.642,
   950.794,
   718.7032,
   627.8003,
   480.6389,
   394.5796,
   294.013,
   154.0972,
   60.57095};
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
   7.951962,
   17.84345,
   23.94397,
   27.22759,
   29.43453,
   29.9429,
   30.99433,
   31.04473,
   29.95127,
   29.55583,
   27.52311,
   26.29138,
   25.79141,
   22.41197,
   21.13276,
   18.70997,
   16.98144,
   14.5524,
   10.62683,
   6.803971};
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
   7.951962,
   17.84345,
   23.94397,
   27.22759,
   29.43453,
   29.9429,
   30.99433,
   31.04473,
   29.95127,
   29.55583,
   27.52311,
   26.29138,
   25.79141,
   22.41197,
   21.13276,
   18.70997,
   16.98144,
   14.5524,
   10.62683,
   6.803971};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMinimum(48.39028);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors320832123216->SetMaximum(1665.836);
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
   Data__376->SetBinContent(1,110);
   Data__376->SetBinContent(2,549);
   Data__376->SetBinContent(3,954);
   Data__376->SetBinContent(4,1245);
   Data__376->SetBinContent(5,1383);
   Data__376->SetBinContent(6,1492);
   Data__376->SetBinContent(7,1457);
   Data__376->SetBinContent(8,1389);
   Data__376->SetBinContent(9,1350);
   Data__376->SetBinContent(10,1166);
   Data__376->SetBinContent(11,1092);
   Data__376->SetBinContent(12,1008);
   Data__376->SetBinContent(13,853);
   Data__376->SetBinContent(14,671);
   Data__376->SetBinContent(15,668);
   Data__376->SetBinContent(16,466);
   Data__376->SetBinContent(17,338);
   Data__376->SetBinContent(18,289);
   Data__376->SetBinContent(19,145);
   Data__376->SetBinContent(20,57);
   Data__376->SetBinError(1,10.48809);
   Data__376->SetBinError(2,23.43075);
   Data__376->SetBinError(3,30.88689);
   Data__376->SetBinError(4,35.28456);
   Data__376->SetBinError(5,37.18871);
   Data__376->SetBinError(6,38.62642);
   Data__376->SetBinError(7,38.17067);
   Data__376->SetBinError(8,37.26929);
   Data__376->SetBinError(9,36.74235);
   Data__376->SetBinError(10,34.14674);
   Data__376->SetBinError(11,33.04542);
   Data__376->SetBinError(12,31.74902);
   Data__376->SetBinError(13,29.20616);
   Data__376->SetBinError(14,25.90367);
   Data__376->SetBinError(15,25.8457);
   Data__376->SetBinError(16,21.58703);
   Data__376->SetBinError(17,18.38478);
   Data__376->SetBinError(18,17);
   Data__376->SetBinError(19,12.04159);
   Data__376->SetBinError(20,7.549834);
   Data__376->SetEntries(16686);
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
   hframe_copy__377->SetMaximum(10634.99);
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
   hframe_copy__378->SetMaximum(10634.99);
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
