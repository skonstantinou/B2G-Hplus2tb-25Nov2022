void MVAOutputM400()
{
//=========Macro generated from canvas: MVAOutputM400/MVAOutputM400
//=========  (Fri Nov 18 13:27:30 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM400 = new TCanvas("MVAOutputM400", "MVAOutputM400",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM400->SetHighLightColor(2);
   MVAOutputM400->Range(0,0,1,1);
   MVAOutputM400->SetFillColor(0);
   MVAOutputM400->SetBorderMode(0);
   MVAOutputM400->SetBorderSize(2);
   MVAOutputM400->SetTickx(1);
   MVAOutputM400->SetTicky(1);
   MVAOutputM400->SetLeftMargin(0.16);
   MVAOutputM400->SetRightMargin(0.05);
   MVAOutputM400->SetTopMargin(0.06);
   MVAOutputM400->SetBottomMargin(0.13);
   MVAOutputM400->SetFrameFillStyle(0);
   MVAOutputM400->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM400_2
   TPad *MVAOutputM400_2 = new TPad("MVAOutputM400_2", "MVAOutputM400_2",0,0,1,0.304);
   MVAOutputM400_2->Draw();
   MVAOutputM400_2->cd();
   MVAOutputM400_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM400_2->SetFillColor(0);
   MVAOutputM400_2->SetFillStyle(4000);
   MVAOutputM400_2->SetBorderMode(0);
   MVAOutputM400_2->SetBorderSize(2);
   MVAOutputM400_2->SetTickx(1);
   MVAOutputM400_2->SetTicky(1);
   MVAOutputM400_2->SetLeftMargin(0.16);
   MVAOutputM400_2->SetRightMargin(0.05);
   MVAOutputM400_2->SetTopMargin(0);
   MVAOutputM400_2->SetBottomMargin(0.3421053);
   MVAOutputM400_2->SetFrameFillStyle(0);
   MVAOutputM400_2->SetFrameBorderMode(0);
   MVAOutputM400_2->SetFrameFillStyle(0);
   MVAOutputM400_2->SetFrameBorderMode(0);
   
   TH1F *hframe__120 = new TH1F("hframe__120","",1000,0,1.01);
   hframe__120->SetMinimum(0.3);
   hframe__120->SetMaximum(1.7);
   hframe__120->SetDirectory(0);
   hframe__120->SetStats(0);
   hframe__120->SetLineStyle(0);
   hframe__120->SetMarkerStyle(20);
   hframe__120->GetXaxis()->SetTitle("DNN Output");
   hframe__120->GetXaxis()->SetLabelFont(43);
   hframe__120->GetXaxis()->SetLabelOffset(0.007);
   hframe__120->GetXaxis()->SetLabelSize(27);
   hframe__120->GetXaxis()->SetTitleSize(33);
   hframe__120->GetXaxis()->SetTitleOffset(2.960526);
   hframe__120->GetXaxis()->SetTitleFont(43);
   hframe__120->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__120->GetYaxis()->SetNdivisions(505);
   hframe__120->GetYaxis()->SetLabelFont(43);
   hframe__120->GetYaxis()->SetLabelOffset(0.007);
   hframe__120->GetYaxis()->SetLabelSize(21);
   hframe__120->GetYaxis()->SetTitleSize(33);
   hframe__120->GetYaxis()->SetTitleOffset(1.5625);
   hframe__120->GetYaxis()->SetTitleFont(43);
   hframe__120->GetZaxis()->SetLabelFont(43);
   hframe__120->GetZaxis()->SetLabelOffset(0.007);
   hframe__120->GetZaxis()->SetLabelSize(27);
   hframe__120->GetZaxis()->SetTitleSize(33);
   hframe__120->GetZaxis()->SetTitleOffset(1);
   hframe__120->GetZaxis()->SetTitleFont(43);
   hframe__120->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3069[19] = {
   0.05,
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
   Double_t BackgroundStatSystError_fy3069[19] = {
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
   Double_t BackgroundStatSystError_felx3069[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3069[19] = {
   0.03442203,
   0.02848246,
   0.02106885,
   0.01663912,
   0.01384954,
   0.01179215,
   0.01073359,
   0.01019644,
   0.00980913,
   0.009683084,
   0.009749474,
   0.009973411,
   0.01039391,
   0.01108501,
   0.01208472,
   0.01400898,
   0.01819177,
   0.03719518,
   0.2914509};
   Double_t BackgroundStatSystError_fehx3069[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3069[19] = {
   0.03442203,
   0.02848246,
   0.02106885,
   0.01663912,
   0.01384954,
   0.01179215,
   0.01073359,
   0.01019644,
   0.00980913,
   0.009683084,
   0.009749474,
   0.009973411,
   0.01039391,
   0.01108501,
   0.01208472,
   0.01400898,
   0.01819177,
   0.03719518,
   0.2914509};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3069,BackgroundStatSystError_fy3069,BackgroundStatSystError_felx3069,BackgroundStatSystError_fehx3069,BackgroundStatSystError_fely3069,BackgroundStatSystError_fehy3069);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1227;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError306130653069 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError306130653069","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMinimum(0.6502589);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMaximum(1.349741);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError306130653069->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError306130653069);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3070[19] = {
   0.05,
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
   Double_t BackgroundStatError_fy3070[19] = {
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
   Double_t BackgroundStatError_felx3070[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fely3070[19] = {
   0.03442203,
   0.02848246,
   0.02106885,
   0.01663912,
   0.01384954,
   0.01179215,
   0.01073359,
   0.01019644,
   0.00980913,
   0.009683084,
   0.009749474,
   0.009973411,
   0.01039391,
   0.01108501,
   0.01208472,
   0.01400898,
   0.01819177,
   0.03719518,
   0.2914509};
   Double_t BackgroundStatError_fehx3070[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fehy3070[19] = {
   0.03442203,
   0.02848246,
   0.02106885,
   0.01663912,
   0.01384954,
   0.01179215,
   0.01073359,
   0.01019644,
   0.00980913,
   0.009683084,
   0.009749474,
   0.009973411,
   0.01039391,
   0.01108501,
   0.01208472,
   0.01400898,
   0.01819177,
   0.03719518,
   0.2914509};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3070,BackgroundStatError_fy3070,BackgroundStatError_felx3070,BackgroundStatError_fehx3070,BackgroundStatError_fely3070,BackgroundStatError_fehy3070);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1226;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError306230663070 = new TH1F("Graph_Graph_Graph_BackgroundStatError306230663070","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMinimum(0.6502589);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMaximum(1.349741);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError306230663070->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError306230663070->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError306230663070);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx18[2] = {
   0,
   1.01};
   Double_t Graph0_fy18[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx18,Graph0_fy18);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0161718 = new TH1F("Graph_Graph_Graph_Graph0161718","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0161718->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0161718->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0161718->SetDirectory(0);
   Graph_Graph_Graph_Graph0161718->SetStats(0);
   Graph_Graph_Graph_Graph0161718->SetLineStyle(0);
   Graph_Graph_Graph_Graph0161718->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0161718->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0161718->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0161718->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0161718);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3071[19] = {
   0.05,
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
   Double_t Graph1_fy3071[19] = {
   1.078665,
   0.9455141,
   0.982288,
   0.9305813,
   0.948996,
   0.9820093,
   0.9924066,
   0.9302752,
   0.9255421,
   0.9525684,
   0.9766592,
   0.9274345,
   0.8840218,
   0.936719,
   0.9433095,
   0.9506861,
   0.8906205,
   0.9374851,
   1.003007};
   Double_t Graph1_felx3071[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3071[19] = {
   0.05469048,
   0.04203323,
   0.03281594,
   0.02502322,
   0.02097005,
   0.01879465,
   0.01730445,
   0.01540013,
   0.01485294,
   0.0150034,
   0.01513518,
   0.01476028,
   0.01478306,
   0.01610967,
   0.01768533,
   0.0203428,
   0.02512031,
   0.05168523,
   0.4485583};
   Double_t Graph1_fehx3071[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3071[19] = {
   0.05469048,
   0.04203323,
   0.03281594,
   0.02502322,
   0.02097005,
   0.01879465,
   0.01730445,
   0.01540013,
   0.01485294,
   0.0150034,
   0.01513518,
   0.01476028,
   0.01478306,
   0.01610967,
   0.01768533,
   0.0203428,
   0.02512031,
   0.05168523,
   0.4485583};
   grae = new TGraphAsymmErrors(19,Graph1_fx3071,Graph1_fy3071,Graph1_felx3071,Graph1_fehx3071,Graph1_fely3071,Graph1_fehy3071);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1306330673071 = new TH1F("Graph_Graph_Graph_Graph1306330673071","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1306330673071->SetMinimum(0.4647369);
   Graph_Graph_Graph_Graph1306330673071->SetMaximum(1.541277);
   Graph_Graph_Graph_Graph1306330673071->SetDirectory(0);
   Graph_Graph_Graph_Graph1306330673071->SetStats(0);
   Graph_Graph_Graph_Graph1306330673071->SetLineStyle(0);
   Graph_Graph_Graph_Graph1306330673071->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1306330673071->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1306330673071->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1306330673071->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1306330673071);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__121 = new TH1F("hframe_copy__121","",1000,0,1.01);
   hframe_copy__121->SetMinimum(0.3);
   hframe_copy__121->SetMaximum(1.7);
   hframe_copy__121->SetDirectory(0);
   hframe_copy__121->SetStats(0);
   hframe_copy__121->SetLineStyle(0);
   hframe_copy__121->SetMarkerStyle(20);
   hframe_copy__121->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__121->GetXaxis()->SetLabelFont(43);
   hframe_copy__121->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__121->GetXaxis()->SetLabelSize(27);
   hframe_copy__121->GetXaxis()->SetTitleSize(33);
   hframe_copy__121->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__121->GetXaxis()->SetTitleFont(43);
   hframe_copy__121->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__121->GetYaxis()->SetNdivisions(505);
   hframe_copy__121->GetYaxis()->SetLabelFont(43);
   hframe_copy__121->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__121->GetYaxis()->SetLabelSize(21);
   hframe_copy__121->GetYaxis()->SetTitleSize(33);
   hframe_copy__121->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__121->GetYaxis()->SetTitleFont(43);
   hframe_copy__121->GetZaxis()->SetLabelFont(43);
   hframe_copy__121->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__121->GetZaxis()->SetLabelSize(27);
   hframe_copy__121->GetZaxis()->SetTitleSize(33);
   hframe_copy__121->GetZaxis()->SetTitleOffset(1);
   hframe_copy__121->GetZaxis()->SetTitleFont(43);
   hframe_copy__121->Draw("sameaxis");
   MVAOutputM400_2->Modified();
   MVAOutputM400->cd();
  
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
   MVAOutputM400->cd();
  
// ------------>Primitives in pad: MVAOutputM400_1
   TPad *MVAOutputM400_1 = new TPad("MVAOutputM400_1", "MVAOutputM400_1",0,0.2897959,1,1);
   MVAOutputM400_1->Draw();
   MVAOutputM400_1->cd();
   MVAOutputM400_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM400_1->SetFillColor(0);
   MVAOutputM400_1->SetFillStyle(4000);
   MVAOutputM400_1->SetBorderMode(0);
   MVAOutputM400_1->SetBorderSize(2);
   MVAOutputM400_1->SetLogy();
   MVAOutputM400_1->SetTickx(1);
   MVAOutputM400_1->SetTicky(1);
   MVAOutputM400_1->SetLeftMargin(0.16);
   MVAOutputM400_1->SetRightMargin(0.05);
   MVAOutputM400_1->SetTopMargin(0.06);
   MVAOutputM400_1->SetBottomMargin(0.02);
   MVAOutputM400_1->SetFrameFillStyle(0);
   MVAOutputM400_1->SetFrameBorderMode(0);
   MVAOutputM400_1->SetFrameFillStyle(0);
   MVAOutputM400_1->SetFrameBorderMode(0);
   
   TH1F *hframe__122 = new TH1F("hframe__122","",1000,0,1.01);
   hframe__122->SetMinimum(0.01);
   hframe__122->SetMaximum(500000);
   hframe__122->SetDirectory(0);
   hframe__122->SetStats(0);
   hframe__122->SetLineStyle(0);
   hframe__122->SetMarkerStyle(20);
   hframe__122->GetXaxis()->SetLabelFont(43);
   hframe__122->GetXaxis()->SetLabelOffset(0.007);
   hframe__122->GetXaxis()->SetLabelSize(0);
   hframe__122->GetXaxis()->SetTitleSize(0);
   hframe__122->GetXaxis()->SetTitleOffset(0.9);
   hframe__122->GetXaxis()->SetTitleFont(43);
   hframe__122->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__122->GetYaxis()->SetLabelFont(43);
   hframe__122->GetYaxis()->SetLabelOffset(0.007);
   hframe__122->GetYaxis()->SetLabelSize(27);
   hframe__122->GetYaxis()->SetTitleSize(33);
   hframe__122->GetYaxis()->SetTitleOffset(1.5625);
   hframe__122->GetYaxis()->SetTitleFont(43);
   hframe__122->GetZaxis()->SetLabelFont(43);
   hframe__122->GetZaxis()->SetLabelOffset(0.007);
   hframe__122->GetZaxis()->SetLabelSize(27);
   hframe__122->GetZaxis()->SetTitleSize(33);
   hframe__122->GetZaxis()->SetTitleOffset(1);
   hframe__122->GetZaxis()->SetTitleFont(43);
   hframe__122->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis103[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_16_stack_17_stack_18 = new TH1F("StackedMCstackHist_stack_16_stack_17_stack_18","StackedMCstackHist",19, xAxis103);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMinimum(34.10811);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMaximum(136432.4);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetDirectory(0);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetStats(0);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetLineStyle(0);
   StackedMCstackHist_stack_16_stack_17_stack_18->SetMarkerStyle(20);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_16_stack_17_stack_18->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_16_stack_17_stack_18);
   
   Double_t xAxis104[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM400Inclusive",19, xAxis104);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,102.5701);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,256.3815);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,473.7555);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,737.4625);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1095.128);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1374.125);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1543.231);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1898.371);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1971.325);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,2141.728);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,2239.649);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,2073.954);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,2129.503);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1803.595);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,1492.406);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,1309.405);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,676.5347);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,206.1995);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,2.811975);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,15.64431);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,35.60553);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,46.32452);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,55.81913);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,91.61388);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,89.68439);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,81.66014);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,90.19459);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,100.3567);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,96.02981);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,99.35681);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,91.92104);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,102.6038);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,85.34616);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,77.14291);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,69.43224);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,47.98226);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,26.12622);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,2.348907);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5163.819);
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
   Double_t xAxis105[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM400Inclusive",19, xAxis105);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2854.761);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,8298.061);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,14667.37);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,23535.81);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,34213.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,45843.75);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,55415.99);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,64101.31);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,69558.38);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,71159.23);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,71385.19);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,69547.52);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,65554.09);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,58955.57);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,49799.51);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,37092.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,21496.4);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,5351.316);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,89.87497);
   TT_stack_2_stack_2_stack_2->SetBinError(1,39.43041);
   TT_stack_2_stack_2_stack_2->SetBinError(2,94.91503);
   TT_stack_2_stack_2_stack_2->SetBinError(3,126.1975);
   TT_stack_2_stack_2_stack_2->SetBinError(4,159.8488);
   TT_stack_2_stack_2_stack_2->SetBinError(5,192.8478);
   TT_stack_2_stack_2_stack_2->SetBinError(6,223.1942);
   TT_stack_2_stack_2_stack_2->SetBinError(7,245.8942);
   TT_stack_2_stack_2_stack_2->SetBinError(8,264.5972);
   TT_stack_2_stack_2_stack_2->SetBinError(9,276.0709);
   TT_stack_2_stack_2_stack_2->SetBinError(10,279.8567);
   TT_stack_2_stack_2_stack_2->SetBinError(11,280.8006);
   TT_stack_2_stack_2_stack_2->SetBinError(12,277.5516);
   TT_stack_2_stack_2_stack_2->SetBinError(13,269.8172);
   TT_stack_2_stack_2_stack_2->SetBinError(14,256.1808);
   TT_stack_2_stack_2_stack_2->SetBinError(15,235.6635);
   TT_stack_2_stack_2_stack_2->SetBinError(16,203.3591);
   TT_stack_2_stack_2_stack_2->SetBinError(17,155.0312);
   TT_stack_2_stack_2_stack_2->SetBinError(18,77.29164);
   TT_stack_2_stack_2_stack_2->SetBinError(19,10.03226);
   TT_stack_2_stack_2_stack_2->SetEntries(699380.8);
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
   Double_t xAxis106[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM400Inclusive",19, xAxis106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,648.9791);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2148.729);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3101.996);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5450.088);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7852.941);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,8382.413);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,9324.086);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,12450.23);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,12377.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,11333.38);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,11645.44);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,13516.61);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,13219.39);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,11428.97);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,9027.629);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,7544.152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,6054.57);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1461.263);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,7.013278);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,116.6635);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,287.5039);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,360.0862);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,464.6854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,558.337);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,609.9295);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,662.601);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,749.4721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,768.8574);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,764.2473);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,776.1482);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,797.1923);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,789.7983);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,753.2713);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,685.4723);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,606.7239);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,487.1898);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,247.9883);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,27.16961);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3145.165);
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
   Double_t xAxis107[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__123 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__123","h_SR_MVAOutputM400Inclusive",19, xAxis107);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(1,3.901937);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(2,26.84981);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(3,31.18572);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(4,49.7578);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(5,70.41985);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(6,106.5598);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(7,153.1206);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(8,207.1254);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(9,187.5862);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(10,194.7807);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(11,226.3913);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(12,194.7106);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(13,212.83);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(14,149.0705);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(15,145.6641);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(16,87.96474);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(17,65.31545);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(18,15.61926);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinContent(19,0.9479958);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(1,2.77468);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(2,6.923133);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(3,8.928357);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(4,11.70109);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(5,14.02707);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(6,16.32857);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(7,19.09453);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(8,20.87638);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(9,21.6984);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(10,23.28755);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(11,23.27707);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(12,24.09331);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(13,22.72399);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(14,20.87023);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(15,18.51257);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(16,15.27002);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(17,11.7096);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(18,6.424021);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetBinError(19,0.6775697);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetEntries(843.4181);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__123->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3072[19] = {
   0.05,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3072[19] = {
   3606.31,
   10703.17,
   18243.12,
   29723.36,
   43161.4,
   55600.29,
   66283.31,
   78449.91,
   83907.58,
   84634.34,
   85270.27,
   85138.09,
   80902.98,
   72188.14,
   60319.55,
   45945.77,
   28227.51,
   7018.778,
   99.70022};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3072[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3072[19] = {
   124.1365,
   304.8526,
   384.3616,
   494.5705,
   597.7655,
   655.6469,
   711.458,
   799.9095,
   823.0603,
   819.5214,
   831.3403,
   849.1171,
   840.8985,
   800.2064,
   728.9448,
   643.6534,
   513.5084,
   261.0647,
   29.05772};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3072[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3072[19] = {
   124.1365,
   304.8526,
   384.3616,
   494.5705,
   597.7655,
   655.6469,
   711.458,
   799.9095,
   823.0603,
   819.5214,
   831.3403,
   849.1171,
   840.8985,
   800.2064,
   728.9448,
   643.6534,
   513.5084,
   261.0647,
   29.05772};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3072,BkgSum-SR-Inclusive_sum_errors_fy3072,BkgSum-SR-Inclusive_sum_errors_felx3072,BkgSum-SR-Inclusive_sum_errors_fehx3072,BkgSum-SR-Inclusive_sum_errors_fely3072,BkgSum-SR-Inclusive_sum_errors_fehy3072);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMinimum(63.57825);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMaximum(94704.71);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors306430683072->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors306430683072);
   
   grae->Draw("e2 ");
   Double_t xAxis108[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__124 = new TH1F("Data__124","h_SR_MVAOutputM400Inclusive",19, xAxis108);
   Data__124->SetBinContent(1,3890);
   Data__124->SetBinContent(2,10120);
   Data__124->SetBinContent(3,17920);
   Data__124->SetBinContent(4,27660);
   Data__124->SetBinContent(5,40960);
   Data__124->SetBinContent(6,54600);
   Data__124->SetBinContent(7,65780);
   Data__124->SetBinContent(8,72980);
   Data__124->SetBinContent(9,77660);
   Data__124->SetBinContent(10,80620);
   Data__124->SetBinContent(11,83280);
   Data__124->SetBinContent(12,78960);
   Data__124->SetBinContent(13,71520);
   Data__124->SetBinContent(14,67620);
   Data__124->SetBinContent(15,56900);
   Data__124->SetBinContent(16,43680);
   Data__124->SetBinContent(17,25140);
   Data__124->SetBinContent(18,6580);
   Data__124->SetBinContent(19,100);
   Data__124->SetBinError(1,197.2308);
   Data__124->SetBinError(2,449.8889);
   Data__124->SetBinError(3,598.6652);
   Data__124->SetBinError(4,743.7742);
   Data__124->SetBinError(5,905.0967);
   Data__124->SetBinError(6,1044.988);
   Data__124->SetBinError(7,1146.996);
   Data__124->SetBinError(8,1208.139);
   Data__124->SetBinError(9,1246.274);
   Data__124->SetBinError(10,1269.803);
   Data__124->SetBinError(11,1290.581);
   Data__124->SetBinError(12,1256.662);
   Data__124->SetBinError(13,1195.993);
   Data__124->SetBinError(14,1162.927);
   Data__124->SetBinError(15,1066.771);
   Data__124->SetBinError(16,934.6657);
   Data__124->SetBinError(17,709.0839);
   Data__124->SetBinError(18,362.7671);
   Data__124->SetBinError(19,44.72136);
   Data__124->SetEntries(44395.96);
   Data__124->SetDirectory(0);
   Data__124->SetFillStyle(3001);
   Data__124->SetLineWidth(2);
   Data__124->SetMarkerStyle(20);
   Data__124->SetMarkerSize(1.2);
   Data__124->GetXaxis()->SetRange(1,200);
   Data__124->GetXaxis()->SetLabelFont(42);
   Data__124->GetXaxis()->SetTitleOffset(1);
   Data__124->GetXaxis()->SetTitleFont(42);
   Data__124->GetYaxis()->SetLabelFont(42);
   Data__124->GetYaxis()->SetTitleFont(42);
   Data__124->GetZaxis()->SetLabelFont(42);
   Data__124->GetZaxis()->SetTitleOffset(1);
   Data__124->GetZaxis()->SetTitleFont(42);
   Data__124->Draw("EP same");
   
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

   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__125 = new TH1F("hframe_copy__125","",1000,0,1.01);
   hframe_copy__125->SetMinimum(0.01);
   hframe_copy__125->SetMaximum(500000);
   hframe_copy__125->SetDirectory(0);
   hframe_copy__125->SetStats(0);
   hframe_copy__125->SetLineStyle(0);
   hframe_copy__125->SetMarkerStyle(20);
   hframe_copy__125->GetXaxis()->SetLabelFont(43);
   hframe_copy__125->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__125->GetXaxis()->SetLabelSize(0);
   hframe_copy__125->GetXaxis()->SetTitleSize(0);
   hframe_copy__125->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__125->GetXaxis()->SetTitleFont(43);
   hframe_copy__125->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__125->GetYaxis()->SetLabelFont(43);
   hframe_copy__125->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__125->GetYaxis()->SetLabelSize(27);
   hframe_copy__125->GetYaxis()->SetTitleSize(33);
   hframe_copy__125->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__125->GetYaxis()->SetTitleFont(43);
   hframe_copy__125->GetZaxis()->SetLabelFont(43);
   hframe_copy__125->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__125->GetZaxis()->SetLabelSize(27);
   hframe_copy__125->GetZaxis()->SetTitleSize(33);
   hframe_copy__125->GetZaxis()->SetTitleOffset(1);
   hframe_copy__125->GetZaxis()->SetTitleFont(43);
   hframe_copy__125->Draw("sameaxis");
   
   TH1F *hframe_copy__126 = new TH1F("hframe_copy__126","",1000,0,1.01);
   hframe_copy__126->SetMinimum(0.01);
   hframe_copy__126->SetMaximum(500000);
   hframe_copy__126->SetDirectory(0);
   hframe_copy__126->SetStats(0);
   hframe_copy__126->SetLineStyle(0);
   hframe_copy__126->SetMarkerStyle(20);
   hframe_copy__126->GetXaxis()->SetLabelFont(43);
   hframe_copy__126->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__126->GetXaxis()->SetLabelSize(0);
   hframe_copy__126->GetXaxis()->SetTitleSize(0);
   hframe_copy__126->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__126->GetXaxis()->SetTitleFont(43);
   hframe_copy__126->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__126->GetYaxis()->SetLabelFont(43);
   hframe_copy__126->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__126->GetYaxis()->SetLabelSize(27);
   hframe_copy__126->GetYaxis()->SetTitleSize(33);
   hframe_copy__126->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__126->GetYaxis()->SetTitleFont(43);
   hframe_copy__126->GetZaxis()->SetLabelFont(43);
   hframe_copy__126->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__126->GetZaxis()->SetLabelSize(27);
   hframe_copy__126->GetZaxis()->SetTitleSize(33);
   hframe_copy__126->GetZaxis()->SetTitleOffset(1);
   hframe_copy__126->GetZaxis()->SetTitleFont(43);
   hframe_copy__126->Draw("sameaxis");
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
   MVAOutputM400_1->Modified();
   MVAOutputM400->cd();
   MVAOutputM400->Modified();
   MVAOutputM400->cd();
   MVAOutputM400->SetSelected(MVAOutputM400);
}
