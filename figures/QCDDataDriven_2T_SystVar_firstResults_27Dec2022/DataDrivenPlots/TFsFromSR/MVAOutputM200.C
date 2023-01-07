void MVAOutputM200()
{
//=========Macro generated from canvas: MVAOutputM200/MVAOutputM200
//=========  (Tue Dec 27 11:52:00 2022) by ROOT version 6.20/02
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
   0.1176107,
   0.05264228,
   0.04886824,
   0.03892824,
   0.03075684,
   0.0240498,
   0.01996784,
   0.01796904,
   0.01820378,
   0.01982301,
   0.02330695,
   0.0289195,
   0.03984323,
   0.06259628,
   0.1190601,
   0.3272597,
   0.4448147};
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
   0.1176107,
   0.05264228,
   0.04886824,
   0.03892824,
   0.03075684,
   0.0240498,
   0.01996784,
   0.01796904,
   0.01820378,
   0.01982301,
   0.02330695,
   0.0289195,
   0.03984323,
   0.06259628,
   0.1190601,
   0.3272597,
   0.4448147};
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
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMinimum(0.4662224);
   Graph_Graph_Graph_BackgroundStatSystError300130053009->SetMaximum(1.533778);
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
   0.1176107,
   0.05264228,
   0.04886824,
   0.03892824,
   0.03075684,
   0.0240498,
   0.01996784,
   0.01796904,
   0.01820378,
   0.01982301,
   0.02330695,
   0.0289195,
   0.03984323,
   0.06259628,
   0.1190601,
   0.3272597,
   0.4448147,
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
   0.1176107,
   0.05264228,
   0.04886824,
   0.03892824,
   0.03075684,
   0.0240498,
   0.01996784,
   0.01796904,
   0.01820378,
   0.01982301,
   0.02330695,
   0.0289195,
   0.03984323,
   0.06259628,
   0.1190601,
   0.3272597,
   0.4448147,
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
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMinimum(0.4662224);
   Graph_Graph_Graph_BackgroundStatError300230063010->SetMaximum(1.533778);
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
   0.8258408,
   1.019271,
   0.9571928,
   0.9981243,
   0.07794846};
   Double_t Graph1_felx3011[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3011[5] = {
   0.1289747,
   0.06102216,
   0.05131092,
   0.04248299,
   0.009452639};
   Double_t Graph1_fehx3011[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3011[5] = {
   0.1289747,
   0.06102216,
   0.05131092,
   0.04248299,
   0.009452639};
   grae = new TGraphAsymmErrors(5,Graph1_fx3011,Graph1_fy3011,Graph1_felx3011,Graph1_fehx3011,Graph1_fely3011,Graph1_fehy3011);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1300330073011 = new TH1F("Graph_Graph_Graph_Graph1300330073011","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1300330073011->SetMinimum(0.06164624);
   Graph_Graph_Graph_Graph1300330073011->SetMaximum(1.181473);
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
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMinimum(19.38869);
   StackedMCstackHist_stack_1_stack_2_stack_3->SetMaximum(77554.78);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,24.81594);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,124.7096);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,254.8934);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,454.7999);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,707.9861);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1178.021);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1522.842);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1929.132);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1831.469);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1375.952);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1021.009);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,678.4858);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,337.2852);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,146.6107);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,35.56581);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,1.09806);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.03443056);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,7.278709);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,13.867);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,27.37098);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,40.40135);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,45.19648);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,64.46893);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,63.63558);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,75.09632);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,68.52669);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,56.93858);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,58.64444);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,43.4775);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,28.54378);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,21.37121);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,9.691418);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.956038);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.08442982);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4075.682);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,264.276);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1243.019);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3047.166);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4758.055);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,7760.557);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,13032.05);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,19003.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,23697.29);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,24317.35);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,20391.64);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,15239.8);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,9891.665);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,5239.599);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1978.834);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,566.3453);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,88.85147);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,8.827738);
   TT_stack_2_stack_2_stack_2->SetBinError(1,12.6714);
   TT_stack_2_stack_2_stack_2->SetBinError(2,27.49348);
   TT_stack_2_stack_2_stack_2->SetBinError(3,60.64665);
   TT_stack_2_stack_2_stack_2->SetBinError(4,76.00502);
   TT_stack_2_stack_2_stack_2->SetBinError(5,97.03725);
   TT_stack_2_stack_2_stack_2->SetBinError(6,126.6004);
   TT_stack_2_stack_2_stack_2->SetBinError(7,152.7042);
   TT_stack_2_stack_2_stack_2->SetBinError(8,170.9557);
   TT_stack_2_stack_2_stack_2->SetBinError(9,173.4579);
   TT_stack_2_stack_2_stack_2->SetBinError(10,159.0114);
   TT_stack_2_stack_2_stack_2->SetBinError(11,137.2374);
   TT_stack_2_stack_2_stack_2->SetBinError(12,111.1053);
   TT_stack_2_stack_2_stack_2->SetBinError(13,80.97316);
   TT_stack_2_stack_2_stack_2->SetBinError(14,49.44751);
   TT_stack_2_stack_2_stack_2->SetBinError(15,27.47292);
   TT_stack_2_stack_2_stack_2->SetBinError(16,10.51279);
   TT_stack_2_stack_2_stack_2->SetBinError(17,3.161736);
   TT_stack_2_stack_2_stack_2->SetEntries(122621.7);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,207.3717);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1369.522);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3969.204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5847.892);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8978.883);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,13666.08);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,20100.97);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,22845.31);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,19897.86);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,17475.99);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,11503.68);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,8625.921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3386.861);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1826.625);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,437.3372);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,10.38495);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,-1.40645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,56.53124);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,140.7665);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,349.0486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,421.8841);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,525.8425);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,655.1899);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,794.1927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,850.7406);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,817.2119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,759.3695);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,629.6605);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,542.1685);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,346.671);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,241.4487);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,120.2547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,30.96625);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.9974429);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4353.275);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(1,16.63935);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(2,186.1321);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(3,690.4788);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(4,970.2242);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(5,1286.596);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(6,1545.363);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(7,1617.955);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(8,1730.592);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(9,1359.448);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(10,998.7499);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(11,692.825);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(12,390.7666);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(13,209.4061);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(14,74.43987);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(15,31.22663);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(16,1.786361);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinContent(17,0.3497421);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(1,3.824876);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(2,14.38543);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(3,35.16346);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(4,43.35018);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(5,49.07684);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(6,53.7859);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(7,56.4615);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(8,55.7728);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(9,51.1593);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(10,43.33397);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(11,34.87698);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(12,26.83093);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(13,18.85844);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(14,11.98383);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(15,6.776545);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(16,2.619964);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetBinError(17,0.3497421);
   ChargedHiggs_HplusTBHplusToTB_M_800__18->SetEntries(6355.161);
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
   496.4637,
   2737.25,
   7271.263,
   11060.75,
   17447.43,
   27876.16,
   40627.32,
   48471.73,
   46046.68,
   39243.58,
   27764.49,
   19196.07,
   8963.745,
   3952.069,
   1039.248,
   100.3345,
   7.455719,
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
   58.38942,
   144.0951,
   355.3338,
   430.5755,
   536.6277,
   670.4161,
   811.2399,
   870.9908,
   838.2236,
   777.9259,
   647.1055,
   555.1408,
   357.1445,
   247.3848,
   123.733,
   32.83543,
   3.316413,
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
   58.38942,
   144.0951,
   355.3338,
   430.5755,
   536.6277,
   670.4161,
   811.2399,
   870.9908,
   838.2236,
   777.9259,
   647.1055,
   555.1408,
   357.1445,
   247.3848,
   123.733,
   32.83543,
   3.316413,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMinimum(54.277);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors300430083012->SetMaximum(54277);
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
   Data__19->SetBinContent(1,410);
   Data__19->SetBinContent(2,2790);
   Data__19->SetBinContent(3,6960);
   Data__19->SetBinContent(4,11040);
   Data__19->SetBinContent(5,1360);
   Data__19->SetBinError(1,64.03124);
   Data__19->SetBinError(2,167.0329);
   Data__19->SetBinError(3,373.0952);
   Data__19->SetBinError(4,469.8936);
   Data__19->SetBinError(5,164.9242);
   Data__19->SetEntries(1214.107);
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
