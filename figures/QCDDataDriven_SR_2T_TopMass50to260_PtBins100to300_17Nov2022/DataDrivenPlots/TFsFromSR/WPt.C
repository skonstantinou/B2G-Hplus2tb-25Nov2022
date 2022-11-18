void WPt()
{
//=========Macro generated from canvas: WPt/WPt
//=========  (Fri Nov 18 13:29:06 2022) by ROOT version 6.20/02
   TCanvas *WPt = new TCanvas("WPt", "WPt",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   WPt->SetHighLightColor(2);
   WPt->Range(0,0,1,1);
   WPt->SetFillColor(0);
   WPt->SetBorderMode(0);
   WPt->SetBorderSize(2);
   WPt->SetTickx(1);
   WPt->SetTicky(1);
   WPt->SetLeftMargin(0.16);
   WPt->SetRightMargin(0.05);
   WPt->SetTopMargin(0.06);
   WPt->SetBottomMargin(0.13);
   WPt->SetFrameFillStyle(0);
   WPt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: WPt_2
   TPad *WPt_2 = new TPad("WPt_2", "WPt_2",0,0,1,0.304);
   WPt_2->Draw();
   WPt_2->cd();
   WPt_2->Range(-141.7721,-0.428,744.3038,1.7);
   WPt_2->SetFillColor(0);
   WPt_2->SetFillStyle(4000);
   WPt_2->SetBorderMode(0);
   WPt_2->SetBorderSize(2);
   WPt_2->SetTickx(1);
   WPt_2->SetTicky(1);
   WPt_2->SetLeftMargin(0.16);
   WPt_2->SetRightMargin(0.05);
   WPt_2->SetTopMargin(0);
   WPt_2->SetBottomMargin(0.3421053);
   WPt_2->SetFrameFillStyle(0);
   WPt_2->SetFrameBorderMode(0);
   WPt_2->SetFrameFillStyle(0);
   WPt_2->SetFrameBorderMode(0);
   
   TH1F *hframe__876 = new TH1F("hframe__876","",1000,0,700);
   hframe__876->SetMinimum(0.3);
   hframe__876->SetMaximum(1.7);
   hframe__876->SetDirectory(0);
   hframe__876->SetStats(0);
   hframe__876->SetLineStyle(0);
   hframe__876->SetMarkerStyle(20);
   hframe__876->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe__876->GetXaxis()->SetNdivisions(8);
   hframe__876->GetXaxis()->SetLabelFont(43);
   hframe__876->GetXaxis()->SetLabelOffset(0.007);
   hframe__876->GetXaxis()->SetLabelSize(27);
   hframe__876->GetXaxis()->SetTitleSize(33);
   hframe__876->GetXaxis()->SetTitleOffset(2.960526);
   hframe__876->GetXaxis()->SetTitleFont(43);
   hframe__876->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__876->GetYaxis()->SetNdivisions(505);
   hframe__876->GetYaxis()->SetLabelFont(43);
   hframe__876->GetYaxis()->SetLabelOffset(0.007);
   hframe__876->GetYaxis()->SetLabelSize(21);
   hframe__876->GetYaxis()->SetTitleSize(33);
   hframe__876->GetYaxis()->SetTitleOffset(1.5625);
   hframe__876->GetYaxis()->SetTitleFont(43);
   hframe__876->GetZaxis()->SetLabelFont(43);
   hframe__876->GetZaxis()->SetLabelOffset(0.007);
   hframe__876->GetZaxis()->SetLabelSize(27);
   hframe__876->GetZaxis()->SetTitleSize(33);
   hframe__876->GetZaxis()->SetTitleOffset(1);
   hframe__876->GetZaxis()->SetTitleFont(43);
   hframe__876->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3537[17] = {
   10,
   30,
   70,
   90,
   110,
   130,
   170,
   190,
   210,
   230,
   270,
   290,
   325,
   375,
   450,
   600,
   750};
   Double_t BackgroundStatSystError_fy3537[17] = {
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
   Double_t BackgroundStatSystError_felx3537[17] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BackgroundStatSystError_fely3537[17] = {
   0.113262,
   0.05597473,
   0.03341731,
   0.02637432,
   0.02343202,
   0.02120169,
   0.0209006,
   0.02062931,
   0.02224346,
   0.02423674,
   0.0278304,
   0.03085938,
   0.02829429,
   0.04059925,
   0.056734,
   0.1460906,
   1.321338};
   Double_t BackgroundStatSystError_fehx3537[17] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BackgroundStatSystError_fehy3537[17] = {
   0.113262,
   0.05597473,
   0.03341731,
   0.02637432,
   0.02343202,
   0.02120169,
   0.0209006,
   0.02062931,
   0.02224346,
   0.02423674,
   0.0278304,
   0.03085938,
   0.02829429,
   0.04059925,
   0.056734,
   0.1460906,
   1.321338};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,BackgroundStatSystError_fx3537,BackgroundStatSystError_fy3537,BackgroundStatSystError_felx3537,BackgroundStatSystError_fehx3537,BackgroundStatSystError_fely3537,BackgroundStatSystError_fehy3537);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1347;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError352935333537 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError352935333537","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMinimum(-0.5856055);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMaximum(2.585606);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError352935333537);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3538[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   325,
   375,
   450,
   600,
   750};
   Double_t BackgroundStatError_fy3538[20] = {
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
   Double_t BackgroundStatError_felx3538[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BackgroundStatError_fely3538[20] = {
   0.113262,
   0.05597473,
   0,
   0.03341731,
   0.02637432,
   0.02343202,
   0.02120169,
   0,
   0.0209006,
   0.02062931,
   0.02224346,
   0.02423674,
   0,
   0.0278304,
   0.03085938,
   0.02829429,
   0.04059925,
   0.056734,
   0.1460906,
   1.321338};
   Double_t BackgroundStatError_fehx3538[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BackgroundStatError_fehy3538[20] = {
   0.113262,
   0.05597473,
   0,
   0.03341731,
   0.02637432,
   0.02343202,
   0.02120169,
   0,
   0.0209006,
   0.02062931,
   0.02224346,
   0.02423674,
   0,
   0.0278304,
   0.03085938,
   0.02829429,
   0.04059925,
   0.056734,
   0.1460906,
   1.321338};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3538,BackgroundStatError_fy3538,BackgroundStatError_felx3538,BackgroundStatError_fehx3538,BackgroundStatError_fely3538,BackgroundStatError_fehy3538);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1346;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError353035343538 = new TH1F("Graph_Graph_Graph_BackgroundStatError353035343538","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMinimum(-0.5856055);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMaximum(2.585606);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError353035343538);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx126[2] = {
   0,
   700};
   Double_t Graph0_fy126[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx126,Graph0_fy126);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0124125126 = new TH1F("Graph_Graph_Graph_Graph0124125126","Graph",100,0,770);
   Graph_Graph_Graph_Graph0124125126->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0124125126->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0124125126->SetDirectory(0);
   Graph_Graph_Graph_Graph0124125126->SetStats(0);
   Graph_Graph_Graph_Graph0124125126->SetLineStyle(0);
   Graph_Graph_Graph_Graph0124125126->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0124125126);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3539[17] = {
   10,
   30,
   70,
   90,
   110,
   130,
   170,
   190,
   210,
   230,
   270,
   290,
   325,
   375,
   450,
   600,
   750};
   Double_t Graph1_fy3539[17] = {
   1.180124,
   0.9308274,
   0.9212447,
   0.9851661,
   1.031875,
   1.034676,
   1.058903,
   0.9732095,
   1.042731,
   0.9833768,
   1.052668,
   0.9901005,
   1.004739,
   0.9575139,
   1.020856,
   1.241721,
   1.154282};
   Double_t Graph1_felx3539[17] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t Graph1_fely3539[17] = {
   0.1223731,
   0.053652,
   0.03354975,
   0.02767714,
   0.02583727,
   0.02418022,
   0.02451979,
   0.02387929,
   0.02651964,
   0.02821187,
   0.03352378,
   0.03662019,
   0.03358471,
   0.04612182,
   0.06575912,
   0.1811236,
   1.154282};
   Double_t Graph1_fehx3539[17] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t Graph1_fehy3539[17] = {
   0.1223731,
   0.053652,
   0.03354975,
   0.02767714,
   0.02583727,
   0.02418022,
   0.02451979,
   0.02387929,
   0.02651964,
   0.02821187,
   0.03352378,
   0.03662019,
   0.03358471,
   0.04612182,
   0.06575912,
   0.1811236,
   1.154282};
   grae = new TGraphAsymmErrors(17,Graph1_fx3539,Graph1_fy3539,Graph1_felx3539,Graph1_fehx3539,Graph1_fely3539,Graph1_fehy3539);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1353135353539 = new TH1F("Graph_Graph_Graph_Graph1353135353539","Graph",100,0,880);
   Graph_Graph_Graph_Graph1353135353539->SetMinimum(-0.2308564);
   Graph_Graph_Graph_Graph1353135353539->SetMaximum(2.53942);
   Graph_Graph_Graph_Graph1353135353539->SetDirectory(0);
   Graph_Graph_Graph_Graph1353135353539->SetStats(0);
   Graph_Graph_Graph_Graph1353135353539->SetLineStyle(0);
   Graph_Graph_Graph_Graph1353135353539->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1353135353539);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__877 = new TH1F("hframe_copy__877","",1000,0,700);
   hframe_copy__877->SetMinimum(0.3);
   hframe_copy__877->SetMaximum(1.7);
   hframe_copy__877->SetDirectory(0);
   hframe_copy__877->SetStats(0);
   hframe_copy__877->SetLineStyle(0);
   hframe_copy__877->SetMarkerStyle(20);
   hframe_copy__877->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe_copy__877->GetXaxis()->SetNdivisions(8);
   hframe_copy__877->GetXaxis()->SetLabelFont(43);
   hframe_copy__877->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__877->GetXaxis()->SetLabelSize(27);
   hframe_copy__877->GetXaxis()->SetTitleSize(33);
   hframe_copy__877->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__877->GetXaxis()->SetTitleFont(43);
   hframe_copy__877->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__877->GetYaxis()->SetNdivisions(505);
   hframe_copy__877->GetYaxis()->SetLabelFont(43);
   hframe_copy__877->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__877->GetYaxis()->SetLabelSize(21);
   hframe_copy__877->GetYaxis()->SetTitleSize(33);
   hframe_copy__877->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__877->GetYaxis()->SetTitleFont(43);
   hframe_copy__877->GetZaxis()->SetLabelFont(43);
   hframe_copy__877->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__877->GetZaxis()->SetLabelSize(27);
   hframe_copy__877->GetZaxis()->SetTitleSize(33);
   hframe_copy__877->GetZaxis()->SetTitleOffset(1);
   hframe_copy__877->GetZaxis()->SetTitleFont(43);
   hframe_copy__877->Draw("sameaxis");
   WPt_2->Modified();
   WPt->cd();
  
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
   WPt->cd();
  
// ------------>Primitives in pad: WPt_1
   TPad *WPt_1 = new TPad("WPt_1", "WPt_1",0,0.2897959,1,1);
   WPt_1->Draw();
   WPt_1->cd();
   WPt_1->Range(-141.7721,-2.104668,744.3038,3.128752);
   WPt_1->SetFillColor(0);
   WPt_1->SetFillStyle(4000);
   WPt_1->SetBorderMode(0);
   WPt_1->SetBorderSize(2);
   WPt_1->SetLogy();
   WPt_1->SetTickx(1);
   WPt_1->SetTicky(1);
   WPt_1->SetLeftMargin(0.16);
   WPt_1->SetRightMargin(0.05);
   WPt_1->SetTopMargin(0.06);
   WPt_1->SetBottomMargin(0.02);
   WPt_1->SetFrameFillStyle(0);
   WPt_1->SetFrameBorderMode(0);
   WPt_1->SetFrameFillStyle(0);
   WPt_1->SetFrameBorderMode(0);
   
   TH1F *hframe__878 = new TH1F("hframe__878","",1000,0,700);
   hframe__878->SetMinimum(0.01);
   hframe__878->SetMaximum(652.75);
   hframe__878->SetDirectory(0);
   hframe__878->SetStats(0);
   hframe__878->SetLineStyle(0);
   hframe__878->SetMarkerStyle(20);
   hframe__878->GetXaxis()->SetNdivisions(8);
   hframe__878->GetXaxis()->SetLabelFont(43);
   hframe__878->GetXaxis()->SetLabelOffset(0.007);
   hframe__878->GetXaxis()->SetLabelSize(0);
   hframe__878->GetXaxis()->SetTitleSize(0);
   hframe__878->GetXaxis()->SetTitleOffset(0.9);
   hframe__878->GetXaxis()->SetTitleFont(43);
   hframe__878->GetYaxis()->SetTitle("< Events / 20-200 GeV >");
   hframe__878->GetYaxis()->SetLabelFont(43);
   hframe__878->GetYaxis()->SetLabelOffset(0.007);
   hframe__878->GetYaxis()->SetLabelSize(27);
   hframe__878->GetYaxis()->SetTitleSize(33);
   hframe__878->GetYaxis()->SetTitleOffset(1.5625);
   hframe__878->GetYaxis()->SetTitleFont(43);
   hframe__878->GetZaxis()->SetLabelFont(43);
   hframe__878->GetZaxis()->SetLabelOffset(0.007);
   hframe__878->GetZaxis()->SetLabelSize(27);
   hframe__878->GetZaxis()->SetTitleSize(33);
   hframe__878->GetZaxis()->SetTitleOffset(1);
   hframe__878->GetZaxis()->SetTitleFont(43);
   hframe__878->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis445[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *StackedMCstackHist_stack_124_stack_125_stack_126 = new TH1F("StackedMCstackHist_stack_124_stack_125_stack_126","StackedMCstackHist",20, xAxis445);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMinimum(0.03539272);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMaximum(141.5709);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetDirectory(0);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetStats(0);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetLineStyle(0);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMarkerStyle(20);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_124_stack_125_stack_126);
   
   Double_t xAxis446[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_WPtInclusive",20, xAxis446);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.09367487);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.4244889);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.312215);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,2.304082);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,2.616037);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,3.194549);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,3.537406);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,3.276675);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,2.674161);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,2.479481);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1.944485);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,1.72184);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.8874809);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.4527269);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.1325301);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.01030007);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.0002170027);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.02733775);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.06552632);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.1002124);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.134426);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.1436975);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.1454625);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.1762439);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.1449742);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.1311503);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.1311111);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.113816);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.1078554);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.05644795);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.03747348);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.01237256);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.002459015);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.000109462);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3839.048);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,160);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis447[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_WPtInclusive",20, xAxis447);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1.354988);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,5.506707);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,15.17339);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,27.83639);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,37.26287);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,45.39053);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,47.68772);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,45.23981);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,39.31559);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,32.11422);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,25.00366);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,19.34324);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,9.665383);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,4.742539);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1.227266);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.07878615);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.001246061);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.06312369);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1289208);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.2162425);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.293032);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.3390775);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.3753401);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.3856466);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.3754796);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.3496538);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.3152771);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.2782595);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.2441532);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.108865);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.07620023);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.02744713);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.004802142);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.0009218916);
   TT_stack_2_stack_2_stack_2->SetEntries(118418.1);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,160);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis448[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_WPtInclusive",20, xAxis448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,2.491602);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,10.23722);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,24.43729);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,34.16341);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,37.40761);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,39.89672);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,36.83772);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,36.81972);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,32.14249);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,27.18322);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,19.88523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,15.85036);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,7.262711);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,3.807215);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1.000968);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.1001672);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.00720033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.440949);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.8933932);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.346604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.665047);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.773139);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.832267);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.79106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.713797);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.606114);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,1.457818);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,1.268246);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,1.107477);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.4889353);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.3554928);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.1305079);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.02711666);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.01140956);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4152.976);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,160);
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
   Double_t xAxis449[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__879 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__879","h_SR_WPtInclusive",20, xAxis449);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(1,0.04732884);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(2,0.2851069);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(4,0.8792773);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(5,1.729161);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(6,1.979886);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(7,2.401184);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(9,2.551121);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(10,2.779385);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(11,2.603573);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(12,3.000737);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(14,2.630522);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(15,2.273152);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(16,1.50391);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(17,0.8554516);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(18,0.2061258);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(19,0.009726397);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(20,0.00192213);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(1,0.01618474);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(2,0.03930683);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(4,0.06981387);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(5,0.09047232);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(6,0.1010756);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(7,0.1061936);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(9,0.1101279);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(10,0.1134181);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(11,0.1143533);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(12,0.1119288);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(14,0.1094947);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(15,0.103178);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(16,0.05166353);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(17,0.04019253);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(18,0.01475722);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(19,0.002518007);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(20,0.0006103391);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetEntries(5805.635);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetXaxis()->SetRange(1,160);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3540[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   325,
   375,
   450,
   600,
   750};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3540[20] = {
   3.940264,
   16.16841,
   0,
   40.92289,
   64.30388,
   77.28651,
   88.4818,
   0,
   88.06284,
   85.3362,
   74.13225,
   61.77693,
   0,
   46.83337,
   36.91544,
   17.81558,
   9.002481,
   2.360764,
   0.1892535,
   0.008663394};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3540[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3540[20] = {
   0.4462824,
   0.9050225,
   0,
   1.367533,
   1.695971,
   1.810979,
   1.875964,
   0,
   1.840566,
   1.760427,
   1.648958,
   1.497272,
   0,
   1.303392,
   1.139188,
   0.5040791,
   0.365494,
   0.1339356,
   0.02764815,
   0.01144727};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3540[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3540[20] = {
   0.4462824,
   0.9050225,
   0,
   1.367533,
   1.695971,
   1.810979,
   1.875964,
   0,
   1.840566,
   1.760427,
   1.648958,
   1.497272,
   0,
   1.303392,
   1.139188,
   0.5040791,
   0.365494,
   0.1339356,
   0.02764815,
   0.01144727};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3540,BkgSum-SR-Inclusive_sum_errors_fy3540,BkgSum-SR-Inclusive_sum_errors_felx3540,BkgSum-SR-Inclusive_sum_errors_fehx3540,BkgSum-SR-Inclusive_sum_errors_fely3540,BkgSum-SR-Inclusive_sum_errors_fehy3540);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1345;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540","Graph",100,0,880);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMinimum(0.09939354);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMaximum(99.39354);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors353235363540);
   
   grae->Draw("e2 ");
   Double_t xAxis450[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *Data__880 = new TH1F("Data__880","h_SR_WPtInclusive",20, xAxis450);
   Data__880->SetBinContent(1,4.65);
   Data__880->SetBinContent(2,15.05);
   Data__880->SetBinContent(4,37.7);
   Data__880->SetBinContent(5,63.35);
   Data__880->SetBinContent(6,79.75);
   Data__880->SetBinContent(7,91.55);
   Data__880->SetBinContent(9,93.25);
   Data__880->SetBinContent(10,83.05);
   Data__880->SetBinContent(11,77.3);
   Data__880->SetBinContent(12,60.75);
   Data__880->SetBinContent(14,49.3);
   Data__880->SetBinContent(15,36.55);
   Data__880->SetBinContent(16,17.9);
   Data__880->SetBinContent(17,8.62);
   Data__880->SetBinContent(18,2.41);
   Data__880->SetBinContent(19,0.235);
   Data__880->SetBinContent(20,0.01);
   Data__880->SetBinError(1,0.4821825);
   Data__880->SetBinError(2,0.8674676);
   Data__880->SetBinError(4,1.372953);
   Data__880->SetBinError(5,1.779747);
   Data__880->SetBinError(6,1.996873);
   Data__880->SetBinError(7,2.139509);
   Data__880->SetBinError(9,2.159282);
   Data__880->SetBinError(10,2.037768);
   Data__880->SetBinError(11,1.96596);
   Data__880->SetBinError(12,1.742843);
   Data__880->SetBinError(14,1.570032);
   Data__880->SetBinError(15,1.351851);
   Data__880->SetBinError(16,0.598331);
   Data__880->SetBinError(17,0.4152108);
   Data__880->SetBinError(18,0.1552417);
   Data__880->SetBinError(19,0.03427827);
   Data__880->SetBinError(20,0.01);
   Data__880->SetEntries(14798.96);
   Data__880->SetDirectory(0);
   Data__880->SetFillStyle(3001);
   Data__880->SetLineWidth(2);
   Data__880->SetMarkerStyle(20);
   Data__880->SetMarkerSize(1.2);
   Data__880->GetXaxis()->SetRange(1,160);
   Data__880->GetXaxis()->SetLabelFont(42);
   Data__880->GetXaxis()->SetTitleOffset(1);
   Data__880->GetXaxis()->SetTitleFont(42);
   Data__880->GetYaxis()->SetLabelFont(42);
   Data__880->GetYaxis()->SetTitleFont(42);
   Data__880->GetZaxis()->SetLabelFont(42);
   Data__880->GetZaxis()->SetTitleOffset(1);
   Data__880->GetZaxis()->SetTitleFont(42);
   Data__880->Draw("EP same");
   TLine *line = new TLine(750,0.01,750,0.02);
   line->SetLineWidth(2);
   line->Draw();
   
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

   ci = 1345;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1345;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__881 = new TH1F("hframe_copy__881","",1000,0,700);
   hframe_copy__881->SetMinimum(0.01);
   hframe_copy__881->SetMaximum(652.75);
   hframe_copy__881->SetDirectory(0);
   hframe_copy__881->SetStats(0);
   hframe_copy__881->SetLineStyle(0);
   hframe_copy__881->SetMarkerStyle(20);
   hframe_copy__881->GetXaxis()->SetNdivisions(8);
   hframe_copy__881->GetXaxis()->SetLabelFont(43);
   hframe_copy__881->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__881->GetXaxis()->SetLabelSize(0);
   hframe_copy__881->GetXaxis()->SetTitleSize(0);
   hframe_copy__881->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__881->GetXaxis()->SetTitleFont(43);
   hframe_copy__881->GetYaxis()->SetTitle("< Events / 20-200 GeV >");
   hframe_copy__881->GetYaxis()->SetLabelFont(43);
   hframe_copy__881->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__881->GetYaxis()->SetLabelSize(27);
   hframe_copy__881->GetYaxis()->SetTitleSize(33);
   hframe_copy__881->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__881->GetYaxis()->SetTitleFont(43);
   hframe_copy__881->GetZaxis()->SetLabelFont(43);
   hframe_copy__881->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__881->GetZaxis()->SetLabelSize(27);
   hframe_copy__881->GetZaxis()->SetTitleSize(33);
   hframe_copy__881->GetZaxis()->SetTitleOffset(1);
   hframe_copy__881->GetZaxis()->SetTitleFont(43);
   hframe_copy__881->Draw("sameaxis");
   
   TH1F *hframe_copy__882 = new TH1F("hframe_copy__882","",1000,0,700);
   hframe_copy__882->SetMinimum(0.01);
   hframe_copy__882->SetMaximum(652.75);
   hframe_copy__882->SetDirectory(0);
   hframe_copy__882->SetStats(0);
   hframe_copy__882->SetLineStyle(0);
   hframe_copy__882->SetMarkerStyle(20);
   hframe_copy__882->GetXaxis()->SetNdivisions(8);
   hframe_copy__882->GetXaxis()->SetLabelFont(43);
   hframe_copy__882->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__882->GetXaxis()->SetLabelSize(0);
   hframe_copy__882->GetXaxis()->SetTitleSize(0);
   hframe_copy__882->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__882->GetXaxis()->SetTitleFont(43);
   hframe_copy__882->GetYaxis()->SetTitle("< Events / 20-200 GeV >");
   hframe_copy__882->GetYaxis()->SetLabelFont(43);
   hframe_copy__882->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__882->GetYaxis()->SetLabelSize(27);
   hframe_copy__882->GetYaxis()->SetTitleSize(33);
   hframe_copy__882->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__882->GetYaxis()->SetTitleFont(43);
   hframe_copy__882->GetZaxis()->SetLabelFont(43);
   hframe_copy__882->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__882->GetZaxis()->SetLabelSize(27);
   hframe_copy__882->GetZaxis()->SetTitleSize(33);
   hframe_copy__882->GetZaxis()->SetTitleOffset(1);
   hframe_copy__882->GetZaxis()->SetTitleFont(43);
   hframe_copy__882->Draw("sameaxis");
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
   WPt_1->Modified();
   WPt->cd();
   WPt->Modified();
   WPt->cd();
   WPt->SetSelected(WPt);
}
