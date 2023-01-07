void MVAOutputM200()
{
//=========Macro generated from canvas: MVAOutputM200/MVAOutputM200
//=========  (Tue Dec 27 11:55:01 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3009[17] = {
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
   0.925};
   Double_t BackgroundStatSystError_fy3009[17] = {
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
   Double_t BackgroundStatSystError_felx3009[17] = {
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
   0.025};
   Double_t BackgroundStatSystError_fely3009[17] = {
   0.1388237,
   0.07285751,
   0.05569608,
   0.04404707,
   0.03617343,
   0.03152574,
   0.02903392,
   0.02800329,
   0.0285249,
   0.03204502,
   0.04069056,
   0.05104815,
   0.07544508,
   0.1336841,
   0.323416,
   1.151924,
   -0.9678628};
   Double_t BackgroundStatSystError_fehx3009[17] = {
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
   0.025};
   Double_t BackgroundStatSystError_fehy3009[17] = {
   0.1388237,
   0.07285751,
   0.05569608,
   0.04404707,
   0.03617343,
   0.03152574,
   0.02903392,
   0.02800329,
   0.0285249,
   0.03204502,
   0.04069056,
   0.05104815,
   0.07544508,
   0.1336841,
   0.323416,
   1.151924,
   -0.9678628};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,BackgroundStatSystError_fx3009,BackgroundStatSystError_fy3009,BackgroundStatSystError_felx3009,BackgroundStatSystError_fehx3009,BackgroundStatSystError_fely3009,BackgroundStatSystError_fehy3009);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1213;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError300130053009 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError300130053009","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMinimum(-0.3823089);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMaximum(2.382309);
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
   0.1388237,
   0.07285751,
   0.05569608,
   0.04404707,
   0.03617343,
   0.03152574,
   0.02903392,
   0.02800329,
   0.0285249,
   0.03204502,
   0.04069056,
   0.05104815,
   0.07544508,
   0.1336841,
   0.323416,
   1.151924,
   -0.9678628,
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
   0.1388237,
   0.07285751,
   0.05569608,
   0.04404707,
   0.03617343,
   0.03152574,
   0.02903392,
   0.02800329,
   0.0285249,
   0.03204502,
   0.04069056,
   0.05104815,
   0.07544508,
   0.1336841,
   0.323416,
   1.151924,
   -0.9678628,
   0};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3010,BackgroundStatError_fy3010,BackgroundStatError_felx3010,BackgroundStatError_fehx3010,BackgroundStatError_fely3010,BackgroundStatError_fehy3010);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1212;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError300230063010 = new TH1F("Graph_Graph_Graph_BackgroundStatError300230063010","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMinimum(-0.3823089);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMaximum(2.382309);
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
   0.7616412,
   1.132504,
   1.066884,
   0.9978599,
   0.09875562};
   Double_t Graph1_felx3011[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3011[5] = {
   0.1325847,
   0.08441187,
   0.06190688,
   0.04757111,
   0.01215598};
   Double_t Graph1_fehx3011[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3011[5] = {
   0.1325847,
   0.08441187,
   0.06190688,
   0.04757111,
   0.01215598};
   grae = new TGraphAsymmErrors(5,Graph1_fx3011,Graph1_fy3011,Graph1_felx3011,Graph1_fehx3011,Graph1_fely3011,Graph1_fehy3011);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1300330073011 = new TH1F("Graph_Graph_Graph_Graph1300330073011","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1300330073011->SetMinimum(0.07793968);
   Graph_Graph_Graph_Graph1300330073011->SetMaximum(1.329948);
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
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMinimum(8.763187);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMaximum(35052.75);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,6.671587);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,66.21764);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,99.05212);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,213.4241);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,394.2516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,489.7231);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,511.1391);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,612.4212);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,599.0471);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,469.8123);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,312.1129);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,165.4899);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,64.97163);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,58.47373);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,6.901538);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.2703377);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,3.078771);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,10.75953);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,15.51715);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,24.90601);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,38.56294);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,36.43195);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,36.26344);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,43.25299);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,39.705);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,36.30164);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,31.10912);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,18.91965);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,14.51025);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,17.73004);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,3.623156);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.2008998);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1410.403);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,92.88639);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,489.4948);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1528.455);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2708.579);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4087.865);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,5565.879);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,6816.475);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,7451.387);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,7114.075);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,5979.375);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,4110.578);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2238.7);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1043.243);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,384.3132);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,57.90741);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,5.217173);
   TT_stack_2_stack_2_stack_2->SetBinError(1,7.570233);
   TT_stack_2_stack_2_stack_2->SetBinError(2,17.65227);
   TT_stack_2_stack_2_stack_2->SetBinError(3,44.00436);
   TT_stack_2_stack_2_stack_2->SetBinError(4,59.05067);
   TT_stack_2_stack_2_stack_2->SetBinError(5,72.16018);
   TT_stack_2_stack_2_stack_2->SetBinError(6,83.51398);
   TT_stack_2_stack_2_stack_2->SetBinError(7,92.31377);
   TT_stack_2_stack_2_stack_2->SetBinError(8,96.88351);
   TT_stack_2_stack_2_stack_2->SetBinError(9,94.21159);
   TT_stack_2_stack_2_stack_2->SetBinError(10,86.75587);
   TT_stack_2_stack_2_stack_2->SetBinError(11,72.41011);
   TT_stack_2_stack_2_stack_2->SetBinError(12,52.64296);
   TT_stack_2_stack_2_stack_2->SetBinError(13,36.20553);
   TT_stack_2_stack_2_stack_2->SetBinError(14,22.09026);
   TT_stack_2_stack_2_stack_2->SetBinError(15,8.097895);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.662581);
   TT_stack_2_stack_2_stack_2->SetEntries(39689.97);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,333.7169);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1033.686);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3940.109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5896.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8884.211);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,11491.51);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,13276.79);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13844.16);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,13338.75);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,10131.33);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,5766.141);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,4144.488);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1869.448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,440.7451);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,89.96167);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,7.660904);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,-1.393252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,59.59104);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,113.9394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,306.5638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,383.1222);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,476.5332);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,545.6304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,589.9478);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,604.2508);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,591.7356);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,522.9339);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,407.0298);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,329.5843);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,221.238);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,114.6675);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,49.26285);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,14.90875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,1.348477);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3632.367);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(1,3.545619);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(2,65.39037);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(3,206.1668);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(4,321.1668);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(5,444.392);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(6,575.6216);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(7,593.027);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(8,526.29);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(9,362.973);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(10,226.3531);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(11,109.3507);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(12,68.01188);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(13,8.053591);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(14,5.04532);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(15,0.4464321);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(16,-0.7513644);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(1,3.073439);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(2,8.826115);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(3,21.09888);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(4,26.03092);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(5,30.31319);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(6,33.22384);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(7,32.20718);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(8,30.07425);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(9,25.65495);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(10,21.44514);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(11,15.77257);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(12,11.22623);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(13,6.265909);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(14,3.456197);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(15,1.573112);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(16,0.531586);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetEntries(1838.271);
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
   433.2749,
   1589.398,
   5567.617,
   8818.873,
   13366.33,
   17547.11,
   20604.41,
   21907.97,
   21051.88,
   16580.52,
   10188.83,
   6548.678,
   2977.663,
   883.5321,
   154.7706,
   13.14841,
   -1.393252,
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
   60.14881,
   115.7996,
   310.0944,
   388.4455,
   483.506,
   553.1857,
   598.2267,
   613.4951,
   600.5026,
   531.3231,
   414.5893,
   334.2979,
   224.65,
   118.1142,
   50.05529,
   15.14598,
   1.348477,
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
   60.14881,
   115.7996,
   310.0944,
   388.4455,
   483.506,
   553.1857,
   598.2267,
   613.4951,
   600.5026,
   531.3231,
   414.5893,
   334.2979,
   224.65,
   118.1142,
   50.05529,
   15.14598,
   1.348477,
   0};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3012,BkgSum-SR-Inclusive_sum_errors_fy3012,BkgSum-SR-Inclusive_sum_errors_felx3012,BkgSum-SR-Inclusive_sum_errors_fehx3012,BkgSum-SR-Inclusive_sum_errors_fely3012,BkgSum-SR-Inclusive_sum_errors_fehy3012);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1211;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMinimum(24.77365);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMaximum(24773.65);
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
   Data__19->SetBinContent(1,330);
   Data__19->SetBinContent(2,1800);
   Data__19->SetBinContent(3,5940);
   Data__19->SetBinContent(4,8800);
   Data__19->SetBinContent(5,1320);
   Data__19->SetBinError(1,57.44563);
   Data__19->SetBinError(2,134.1641);
   Data__19->SetBinError(3,344.6738);
   Data__19->SetBinError(4,419.5235);
   Data__19->SetBinError(5,162.4808);
   Data__19->SetEntries(966.0616);
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
      tex = new TLatex(0.19,0.885,"Data blinded in signal region");
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

   ci = 1211;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1211;
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
