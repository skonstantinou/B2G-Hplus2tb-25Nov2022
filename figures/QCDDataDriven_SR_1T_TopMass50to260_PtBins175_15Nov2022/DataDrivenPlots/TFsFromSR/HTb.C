void HTb()
{
//=========Macro generated from canvas: HTb/HTb
//=========  (Fri Nov 18 13:29:47 2022) by ROOT version 6.20/02
   TCanvas *HTb = new TCanvas("HTb", "HTb",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   HTb->SetHighLightColor(2);
   HTb->Range(0,0,1,1);
   HTb->SetFillColor(0);
   HTb->SetBorderMode(0);
   HTb->SetBorderSize(2);
   HTb->SetTickx(1);
   HTb->SetTicky(1);
   HTb->SetLeftMargin(0.16);
   HTb->SetRightMargin(0.05);
   HTb->SetTopMargin(0.06);
   HTb->SetBottomMargin(0.13);
   HTb->SetFrameFillStyle(0);
   HTb->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: HTb_2
   TPad *HTb_2 = new TPad("HTb_2", "HTb_2",0,0,1,0.304);
   HTb_2->Draw();
   HTb_2->cd();
   HTb_2->Range(-183.5443,-0.428,1588.608,1.7);
   HTb_2->SetFillColor(0);
   HTb_2->SetFillStyle(4000);
   HTb_2->SetBorderMode(0);
   HTb_2->SetBorderSize(2);
   HTb_2->SetTickx(1);
   HTb_2->SetTicky(1);
   HTb_2->SetLeftMargin(0.16);
   HTb_2->SetRightMargin(0.05);
   HTb_2->SetTopMargin(0);
   HTb_2->SetBottomMargin(0.3421053);
   HTb_2->SetFrameFillStyle(0);
   HTb_2->SetFrameBorderMode(0);
   HTb_2->SetFrameFillStyle(0);
   HTb_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1128 = new TH1F("hframe__1128","",1000,100,1500);
   hframe__1128->SetMinimum(0.3);
   hframe__1128->SetMaximum(1.7);
   hframe__1128->SetDirectory(0);
   hframe__1128->SetStats(0);
   hframe__1128->SetLineStyle(0);
   hframe__1128->SetMarkerStyle(20);
   hframe__1128->GetXaxis()->SetTitle("H_{T, b} (GeV)");
   hframe__1128->GetXaxis()->SetNdivisions(8);
   hframe__1128->GetXaxis()->SetLabelFont(43);
   hframe__1128->GetXaxis()->SetLabelOffset(0.007);
   hframe__1128->GetXaxis()->SetLabelSize(27);
   hframe__1128->GetXaxis()->SetTitleSize(33);
   hframe__1128->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1128->GetXaxis()->SetTitleFont(43);
   hframe__1128->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1128->GetYaxis()->SetNdivisions(505);
   hframe__1128->GetYaxis()->SetLabelFont(43);
   hframe__1128->GetYaxis()->SetLabelOffset(0.007);
   hframe__1128->GetYaxis()->SetLabelSize(21);
   hframe__1128->GetYaxis()->SetTitleSize(33);
   hframe__1128->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1128->GetYaxis()->SetTitleFont(43);
   hframe__1128->GetZaxis()->SetLabelFont(43);
   hframe__1128->GetZaxis()->SetLabelOffset(0.007);
   hframe__1128->GetZaxis()->SetLabelSize(27);
   hframe__1128->GetZaxis()->SetTitleSize(33);
   hframe__1128->GetZaxis()->SetTitleOffset(1);
   hframe__1128->GetZaxis()->SetTitleFont(43);
   hframe__1128->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3687[19] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   850,
   950,
   1050,
   1150,
   1300};
   Double_t BackgroundStatSystError_fy3687[19] = {
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
   Double_t BackgroundStatSystError_felx3687[19] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   100};
   Double_t BackgroundStatSystError_fely3687[19] = {
   0.107907,
   0.03136074,
   0.0232278,
   0.02394337,
   0.0274218,
   0.03436161,
   0.04155937,
   0.05282949,
   0.05931419,
   0.07034479,
   0.08508604,
   0.09590115,
   0.1213082,
   0.1461868,
   0.1391829,
   0.1641036,
   0.2619748,
   0.4727603,
   0.3571325};
   Double_t BackgroundStatSystError_fehx3687[19] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   100};
   Double_t BackgroundStatSystError_fehy3687[19] = {
   0.107907,
   0.03136074,
   0.0232278,
   0.02394337,
   0.0274218,
   0.03436161,
   0.04155937,
   0.05282949,
   0.05931419,
   0.07034479,
   0.08508604,
   0.09590115,
   0.1213082,
   0.1461868,
   0.1391829,
   0.1641036,
   0.2619748,
   0.4727603,
   0.3571325};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3687,BackgroundStatSystError_fy3687,BackgroundStatSystError_felx3687,BackgroundStatSystError_fehx3687,BackgroundStatSystError_fely3687,BackgroundStatSystError_fehy3687);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1385;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError367936833687 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError367936833687","Graph",100,0,1530);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMinimum(0.4326877);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMaximum(1.567312);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError367936833687);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3688[20] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   850,
   950,
   1050,
   1150,
   1300};
   Double_t BackgroundStatError_fy3688[20] = {
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
   Double_t BackgroundStatError_felx3688[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   100};
   Double_t BackgroundStatError_fely3688[20] = {
   0,
   0.107907,
   0.03136074,
   0.0232278,
   0.02394337,
   0.0274218,
   0.03436161,
   0.04155937,
   0.05282949,
   0.05931419,
   0.07034479,
   0.08508604,
   0.09590115,
   0.1213082,
   0.1461868,
   0.1391829,
   0.1641036,
   0.2619748,
   0.4727603,
   0.3571325};
   Double_t BackgroundStatError_fehx3688[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   100};
   Double_t BackgroundStatError_fehy3688[20] = {
   0,
   0.107907,
   0.03136074,
   0.0232278,
   0.02394337,
   0.0274218,
   0.03436161,
   0.04155937,
   0.05282949,
   0.05931419,
   0.07034479,
   0.08508604,
   0.09590115,
   0.1213082,
   0.1461868,
   0.1391829,
   0.1641036,
   0.2619748,
   0.4727603,
   0.3571325};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3688,BackgroundStatError_fy3688,BackgroundStatError_felx3688,BackgroundStatError_fehx3688,BackgroundStatError_fely3688,BackgroundStatError_fehy3688);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1384;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError368036843688 = new TH1F("Graph_Graph_Graph_BackgroundStatError368036843688","Graph",100,0,1535);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMinimum(0.4326877);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMaximum(1.567312);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError368036843688);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx162[2] = {
   100,
   1500};
   Double_t Graph0_fy162[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx162,Graph0_fy162);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0160161162 = new TH1F("Graph_Graph_Graph_Graph0160161162","Graph",100,0,1640);
   Graph_Graph_Graph_Graph0160161162->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0160161162->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0160161162->SetDirectory(0);
   Graph_Graph_Graph_Graph0160161162->SetStats(0);
   Graph_Graph_Graph_Graph0160161162->SetLineStyle(0);
   Graph_Graph_Graph_Graph0160161162->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0160161162);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3689[19] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   850,
   950,
   1050,
   1150,
   1300};
   Double_t Graph1_fy3689[19] = {
   1.269057,
   1.077438,
   1.059141,
   1.065807,
   1.032634,
   1.065304,
   0.9230339,
   1.000381,
   0.9595692,
   1.046359,
   0.9891976,
   0.9052109,
   1.140744,
   0.9874961,
   1.071287,
   0.7649457,
   0.9778649,
   1.04514,
   0.5447652};
   Double_t Graph1_felx3689[19] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   100};
   Double_t Graph1_fely3689[19] = {
   0.1330333,
   0.03556074,
   0.02584038,
   0.02648019,
   0.02987189,
   0.03773501,
   0.04341586,
   0.05756548,
   0.06368884,
   0.07978413,
   0.09224315,
   0.09935981,
   0.1414918,
   0.160193,
   0.1579526,
   0.163087,
   0.2948374,
   0.5225701,
   0.3145203};
   Double_t Graph1_fehx3689[19] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   100};
   Double_t Graph1_fehy3689[19] = {
   0.1330333,
   0.03556074,
   0.02584038,
   0.02648019,
   0.02987189,
   0.03773501,
   0.04341586,
   0.05756548,
   0.06368884,
   0.07978413,
   0.09224315,
   0.09935981,
   0.1414918,
   0.160193,
   0.1579526,
   0.163087,
   0.2948374,
   0.5225701,
   0.3145203};
   grae = new TGraphAsymmErrors(19,Graph1_fx3689,Graph1_fy3689,Graph1_felx3689,Graph1_fehx3689,Graph1_fely3689,Graph1_fehy3689);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1368136853689 = new TH1F("Graph_Graph_Graph_Graph1368136853689","Graph",100,0,1530);
   Graph_Graph_Graph_Graph1368136853689->SetMinimum(0.09649831);
   Graph_Graph_Graph_Graph1368136853689->SetMaximum(1.701457);
   Graph_Graph_Graph_Graph1368136853689->SetDirectory(0);
   Graph_Graph_Graph_Graph1368136853689->SetStats(0);
   Graph_Graph_Graph_Graph1368136853689->SetLineStyle(0);
   Graph_Graph_Graph_Graph1368136853689->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1368136853689);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1129 = new TH1F("hframe_copy__1129","",1000,100,1500);
   hframe_copy__1129->SetMinimum(0.3);
   hframe_copy__1129->SetMaximum(1.7);
   hframe_copy__1129->SetDirectory(0);
   hframe_copy__1129->SetStats(0);
   hframe_copy__1129->SetLineStyle(0);
   hframe_copy__1129->SetMarkerStyle(20);
   hframe_copy__1129->GetXaxis()->SetTitle("H_{T, b} (GeV)");
   hframe_copy__1129->GetXaxis()->SetNdivisions(8);
   hframe_copy__1129->GetXaxis()->SetLabelFont(43);
   hframe_copy__1129->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1129->GetXaxis()->SetLabelSize(27);
   hframe_copy__1129->GetXaxis()->SetTitleSize(33);
   hframe_copy__1129->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1129->GetXaxis()->SetTitleFont(43);
   hframe_copy__1129->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1129->GetYaxis()->SetNdivisions(505);
   hframe_copy__1129->GetYaxis()->SetLabelFont(43);
   hframe_copy__1129->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1129->GetYaxis()->SetLabelSize(21);
   hframe_copy__1129->GetYaxis()->SetTitleSize(33);
   hframe_copy__1129->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1129->GetYaxis()->SetTitleFont(43);
   hframe_copy__1129->GetZaxis()->SetLabelFont(43);
   hframe_copy__1129->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1129->GetZaxis()->SetLabelSize(27);
   hframe_copy__1129->GetZaxis()->SetTitleSize(33);
   hframe_copy__1129->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1129->GetZaxis()->SetTitleFont(43);
   hframe_copy__1129->Draw("sameaxis");
   HTb_2->Modified();
   HTb->cd();
  
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
   HTb->cd();
  
// ------------>Primitives in pad: HTb_1
   TPad *HTb_1 = new TPad("HTb_1", "HTb_1",0,0.2897959,1,1);
   HTb_1->Draw();
   HTb_1->cd();
   HTb_1->Range(-183.5443,-2.095031,1588.608,2.656531);
   HTb_1->SetFillColor(0);
   HTb_1->SetFillStyle(4000);
   HTb_1->SetBorderMode(0);
   HTb_1->SetBorderSize(2);
   HTb_1->SetLogy();
   HTb_1->SetTickx(1);
   HTb_1->SetTicky(1);
   HTb_1->SetLeftMargin(0.16);
   HTb_1->SetRightMargin(0.05);
   HTb_1->SetTopMargin(0.06);
   HTb_1->SetBottomMargin(0.02);
   HTb_1->SetFrameFillStyle(0);
   HTb_1->SetFrameBorderMode(0);
   HTb_1->SetFrameFillStyle(0);
   HTb_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1130 = new TH1F("hframe__1130","",1000,100,1500);
   hframe__1130->SetMinimum(0.01);
   hframe__1130->SetMaximum(235.2);
   hframe__1130->SetDirectory(0);
   hframe__1130->SetStats(0);
   hframe__1130->SetLineStyle(0);
   hframe__1130->SetMarkerStyle(20);
   hframe__1130->GetXaxis()->SetNdivisions(8);
   hframe__1130->GetXaxis()->SetLabelFont(43);
   hframe__1130->GetXaxis()->SetLabelOffset(0.007);
   hframe__1130->GetXaxis()->SetLabelSize(0);
   hframe__1130->GetXaxis()->SetTitleSize(0);
   hframe__1130->GetXaxis()->SetTitleOffset(0.9);
   hframe__1130->GetXaxis()->SetTitleFont(43);
   hframe__1130->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe__1130->GetYaxis()->SetLabelFont(43);
   hframe__1130->GetYaxis()->SetLabelOffset(0.007);
   hframe__1130->GetYaxis()->SetLabelSize(27);
   hframe__1130->GetYaxis()->SetTitleSize(33);
   hframe__1130->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1130->GetYaxis()->SetTitleFont(43);
   hframe__1130->GetZaxis()->SetLabelFont(43);
   hframe__1130->GetZaxis()->SetLabelOffset(0.007);
   hframe__1130->GetZaxis()->SetLabelSize(27);
   hframe__1130->GetZaxis()->SetTitleSize(33);
   hframe__1130->GetZaxis()->SetTitleOffset(1);
   hframe__1130->GetZaxis()->SetTitleFont(43);
   hframe__1130->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis571[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *StackedMCstackHist_stack_160_stack_161_stack_162 = new TH1F("StackedMCstackHist_stack_160_stack_161_stack_162","StackedMCstackHist",20, xAxis571);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMinimum(0.01268953);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMaximum(50.75814);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetDirectory(0);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetStats(0);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetLineStyle(0);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMarkerStyle(20);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_160_stack_161_stack_162);
   
   Double_t xAxis572[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_HTbInclusive",20, xAxis572);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.02990516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.4484479);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.7529802);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.7734716);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.5936952);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.4299317);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.3561834);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.2503751);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.1701992);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.1017802);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.06164156);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.07137344);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.05499811);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.02519676);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.0174409);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.006069256);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.005959949);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.0004615643);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.0004896977);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.006856594);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.04095738);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.04644199);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.04262863);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.039618);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.03663737);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.03166753);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.0286765);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.02442718);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.01819247);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.0140549);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.01701012);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.01334361);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.01035511);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.005089728);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.003781041);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.003607294);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.0001165775);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.0008674508);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1413.313);
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
   Double_t xAxis573[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_HTbInclusive",20, xAxis573);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.4696862);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,6.285477);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,11.5609);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,10.7959);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,7.57909);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,4.596856);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2.941543);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1.955008);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1.37235);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1.009444);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,0.6983235);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,0.4720578);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.3272913);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.262939);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.1444039);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.07990913);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.04188304);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.01455449);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.007365512);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.02453169);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.09025192);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1219922);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.117186);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.09803011);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.07619641);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.06078684);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.04938822);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.04159798);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.03559376);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.02978457);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.02433637);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.02037507);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.01793344);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.009427591);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.007096098);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.004880077);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.002874452);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.001460229);
   TT_stack_2_stack_2_stack_2->SetEntries(39843.33);
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
   Double_t xAxis574[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_HTbInclusive",20, xAxis574);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,0.9345445);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,10.30651);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,19.40995);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,18.83012);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,14.9719);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,9.936074);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,6.496064);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,3.832314);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3.18874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2.176366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1.565152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1.290395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,0.757318);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,0.4814875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,0.2675452);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.2016237);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.06464698);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.02325632);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.01967959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.1526426);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.5251295);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.7252211);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.717105);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.6257997);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.5071488);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.4012112);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.3138142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.2764554);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.227784);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.1950744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.1733415);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.1360814);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.1105865);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.05879558);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.04650659);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.02883793);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.0178635);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.009685782);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3618.009);
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
   Double_t xAxis575[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1131 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1131","h_SR_HTbInclusive",20, xAxis575);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(2,0.001350933);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(3,0.0371983);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(4,0.1271608);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(5,0.2141321);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(6,0.2776171);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(7,0.3849728);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(8,0.4535451);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(9,0.5168284);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(10,0.5015011);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(11,0.362486);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(12,0.2648294);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(13,0.1941807);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(14,0.1209918);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(15,0.06478578);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(16,0.03192843);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(17,0.008386808);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(18,0.008573486);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(19,0.001228509);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(20,-7.062309e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(2,0.002978248);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(3,0.01052161);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(4,0.01631365);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(5,0.0213519);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(6,0.02364937);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(7,0.02641696);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(8,0.02896896);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(9,0.03003585);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(10,0.0295769);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(11,0.02729515);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(12,0.02392298);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(13,0.02032948);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(14,0.01616306);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(15,0.01281826);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(16,0.005900363);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(17,0.003372552);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(18,0.002200597);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(19,0.001338165);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(20,0.0005904238);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetEntries(1842.295);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3690[20] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   850,
   950,
   1050,
   1150,
   1300};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3690[20] = {
   0,
   1.434136,
   17.04043,
   31.72383,
   30.39949,
   23.14469,
   14.96286,
   9.79379,
   6.037698,
   4.73129,
   3.28759,
   2.325117,
   1.833827,
   1.139607,
   0.7696233,
   0.4293901,
   0.2876021,
   0.11249,
   0.03827238,
   0.0275348};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3690[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   100};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3690[20] = {
   0,
   0.1547533,
   0.5344005,
   0.7368749,
   0.7278663,
   0.634669,
   0.514148,
   0.4070237,
   0.3189685,
   0.2806326,
   0.2312649,
   0.197835,
   0.1758661,
   0.1382437,
   0.1125087,
   0.05976374,
   0.04719654,
   0.02946954,
   0.01809366,
   0.009833571};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3690[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   50,
   50,
   100};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3690[20] = {
   0,
   0.1547533,
   0.5344005,
   0.7368749,
   0.7278663,
   0.634669,
   0.514148,
   0.4070237,
   0.3189685,
   0.2806326,
   0.2312649,
   0.197835,
   0.1758661,
   0.1382437,
   0.1125087,
   0.05976374,
   0.04719654,
   0.02946954,
   0.01809366,
   0.009833571};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3690,BkgSum-SR-Inclusive_sum_errors_fy3690,BkgSum-SR-Inclusive_sum_errors_felx3690,BkgSum-SR-Inclusive_sum_errors_fehx3690,BkgSum-SR-Inclusive_sum_errors_fely3690,BkgSum-SR-Inclusive_sum_errors_fehy3690);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1383;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690","Graph",100,0,1535);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMinimum(0.03570678);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMaximum(35.70678);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors368236863690);
   
   grae->Draw("e2 ");
   Double_t xAxis576[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *Data__1132 = new TH1F("Data__1132","h_SR_HTbInclusive",20, xAxis576);
   Data__1132->SetBinContent(2,1.82);
   Data__1132->SetBinContent(3,18.36);
   Data__1132->SetBinContent(4,33.6);
   Data__1132->SetBinContent(5,32.4);
   Data__1132->SetBinContent(6,23.9);
   Data__1132->SetBinContent(7,15.94);
   Data__1132->SetBinContent(8,9.04);
   Data__1132->SetBinContent(9,6.04);
   Data__1132->SetBinContent(10,4.54);
   Data__1132->SetBinContent(11,3.44);
   Data__1132->SetBinContent(12,2.3);
   Data__1132->SetBinContent(13,1.66);
   Data__1132->SetBinContent(14,1.3);
   Data__1132->SetBinContent(15,0.76);
   Data__1132->SetBinContent(16,0.46);
   Data__1132->SetBinContent(17,0.22);
   Data__1132->SetBinContent(18,0.11);
   Data__1132->SetBinContent(19,0.04);
   Data__1132->SetBinContent(20,0.015);
   Data__1132->SetBinError(2,0.1907878);
   Data__1132->SetBinError(3,0.6059703);
   Data__1132->SetBinError(4,0.8197561);
   Data__1132->SetBinError(5,0.8049845);
   Data__1132->SetBinError(6,0.6913754);
   Data__1132->SetBinError(7,0.5646238);
   Data__1132->SetBinError(8,0.4252058);
   Data__1132->SetBinError(9,0.3475629);
   Data__1132->SetBinError(10,0.3013304);
   Data__1132->SetBinError(11,0.2622975);
   Data__1132->SetBinError(12,0.2144761);
   Data__1132->SetBinError(13,0.1822087);
   Data__1132->SetBinError(14,0.1612452);
   Data__1132->SetBinError(15,0.1232883);
   Data__1132->SetBinError(16,0.0678233);
   Data__1132->SetBinError(17,0.04690416);
   Data__1132->SetBinError(18,0.03316625);
   Data__1132->SetBinError(19,0.02);
   Data__1132->SetBinError(20,0.008660254);
   Data__1132->SetEntries(7818.621);
   Data__1132->SetDirectory(0);
   Data__1132->SetFillStyle(3001);
   Data__1132->SetLineWidth(2);
   Data__1132->SetMarkerStyle(20);
   Data__1132->SetMarkerSize(1.2);
   Data__1132->GetXaxis()->SetRange(1,100);
   Data__1132->GetXaxis()->SetLabelFont(42);
   Data__1132->GetXaxis()->SetTitleOffset(1);
   Data__1132->GetXaxis()->SetTitleFont(42);
   Data__1132->GetYaxis()->SetLabelFont(42);
   Data__1132->GetYaxis()->SetTitleFont(42);
   Data__1132->GetZaxis()->SetLabelFont(42);
   Data__1132->GetZaxis()->SetTitleOffset(1);
   Data__1132->GetZaxis()->SetTitleFont(42);
   Data__1132->Draw("EP same");
   
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

   ci = 1383;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1383;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1133 = new TH1F("hframe_copy__1133","",1000,100,1500);
   hframe_copy__1133->SetMinimum(0.01);
   hframe_copy__1133->SetMaximum(235.2);
   hframe_copy__1133->SetDirectory(0);
   hframe_copy__1133->SetStats(0);
   hframe_copy__1133->SetLineStyle(0);
   hframe_copy__1133->SetMarkerStyle(20);
   hframe_copy__1133->GetXaxis()->SetNdivisions(8);
   hframe_copy__1133->GetXaxis()->SetLabelFont(43);
   hframe_copy__1133->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1133->GetXaxis()->SetLabelSize(0);
   hframe_copy__1133->GetXaxis()->SetTitleSize(0);
   hframe_copy__1133->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1133->GetXaxis()->SetTitleFont(43);
   hframe_copy__1133->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__1133->GetYaxis()->SetLabelFont(43);
   hframe_copy__1133->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1133->GetYaxis()->SetLabelSize(27);
   hframe_copy__1133->GetYaxis()->SetTitleSize(33);
   hframe_copy__1133->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1133->GetYaxis()->SetTitleFont(43);
   hframe_copy__1133->GetZaxis()->SetLabelFont(43);
   hframe_copy__1133->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1133->GetZaxis()->SetLabelSize(27);
   hframe_copy__1133->GetZaxis()->SetTitleSize(33);
   hframe_copy__1133->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1133->GetZaxis()->SetTitleFont(43);
   hframe_copy__1133->Draw("sameaxis");
   
   TH1F *hframe_copy__1134 = new TH1F("hframe_copy__1134","",1000,100,1500);
   hframe_copy__1134->SetMinimum(0.01);
   hframe_copy__1134->SetMaximum(235.2);
   hframe_copy__1134->SetDirectory(0);
   hframe_copy__1134->SetStats(0);
   hframe_copy__1134->SetLineStyle(0);
   hframe_copy__1134->SetMarkerStyle(20);
   hframe_copy__1134->GetXaxis()->SetNdivisions(8);
   hframe_copy__1134->GetXaxis()->SetLabelFont(43);
   hframe_copy__1134->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1134->GetXaxis()->SetLabelSize(0);
   hframe_copy__1134->GetXaxis()->SetTitleSize(0);
   hframe_copy__1134->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1134->GetXaxis()->SetTitleFont(43);
   hframe_copy__1134->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__1134->GetYaxis()->SetLabelFont(43);
   hframe_copy__1134->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1134->GetYaxis()->SetLabelSize(27);
   hframe_copy__1134->GetYaxis()->SetTitleSize(33);
   hframe_copy__1134->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1134->GetYaxis()->SetTitleFont(43);
   hframe_copy__1134->GetZaxis()->SetLabelFont(43);
   hframe_copy__1134->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1134->GetZaxis()->SetLabelSize(27);
   hframe_copy__1134->GetZaxis()->SetTitleSize(33);
   hframe_copy__1134->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1134->GetZaxis()->SetTitleFont(43);
   hframe_copy__1134->Draw("sameaxis");
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
   HTb_1->Modified();
   HTb->cd();
   HTb->Modified();
   HTb->cd();
   HTb->SetSelected(HTb);
}
