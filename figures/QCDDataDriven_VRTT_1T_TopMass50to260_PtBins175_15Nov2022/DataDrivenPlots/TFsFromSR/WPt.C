void WPt()
{
//=========Macro generated from canvas: WPt/WPt
//=========  (Fri Nov 18 13:28:45 2022) by ROOT version 6.20/02
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
   0.08341302,
   0.04318032,
   0.02726387,
   0.02070123,
   0.01777214,
   0.01646562,
   0.01652458,
   0.01752519,
   0.02028937,
   0.02345426,
   0.0283733,
   0.03564345,
   0.03260788,
   0.05214673,
   0.07868917,
   0.2323454,
   1.347402};
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
   0.08341302,
   0.04318032,
   0.02726387,
   0.02070123,
   0.01777214,
   0.01646562,
   0.01652458,
   0.01752519,
   0.02028937,
   0.02345426,
   0.0283733,
   0.03564345,
   0.03260788,
   0.05214673,
   0.07868917,
   0.2323454,
   1.347402};
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
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMinimum(-0.6168822);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMaximum(2.616882);
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
   0.08341302,
   0.04318032,
   0,
   0.02726387,
   0.02070123,
   0.01777214,
   0.01646562,
   0,
   0.01652458,
   0.01752519,
   0.02028937,
   0.02345426,
   0,
   0.0283733,
   0.03564345,
   0.03260788,
   0.05214673,
   0.07868917,
   0.2323454,
   1.347402};
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
   0.08341302,
   0.04318032,
   0,
   0.02726387,
   0.02070123,
   0.01777214,
   0.01646562,
   0,
   0.01652458,
   0.01752519,
   0.02028937,
   0.02345426,
   0,
   0.0283733,
   0.03564345,
   0.03260788,
   0.05214673,
   0.07868917,
   0.2323454,
   1.347402};
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
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMinimum(-0.6168822);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMaximum(2.616882);
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
   
   Double_t Graph1_fx3539[16] = {
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
   600};
   Double_t Graph1_fy3539[16] = {
   0.9669509,
   0.9879739,
   0.9397046,
   0.9857713,
   0.9375579,
   0.9430258,
   0.9535448,
   0.9935296,
   1.056722,
   1.017408,
   0.9596575,
   1.115974,
   0.9890177,
   1.063128,
   1.163931,
   0.8501764};
   Double_t Graph1_felx3539[16] = {
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
   100};
   Double_t Graph1_fely3539[16] = {
   0.0930449,
   0.048912,
   0.03056859,
   0.02423865,
   0.02078337,
   0.01981042,
   0.0202333,
   0.02206754,
   0.02667776,
   0.02955533,
   0.0350184,
   0.0474132,
   0.04054577,
   0.06920371,
   0.1076055,
   0.2563378};
   Double_t Graph1_fehx3539[16] = {
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
   100};
   Double_t Graph1_fehy3539[16] = {
   0.0930449,
   0.048912,
   0.03056859,
   0.02423865,
   0.02078337,
   0.01981042,
   0.0202333,
   0.02206754,
   0.02667776,
   0.02955533,
   0.0350184,
   0.0474132,
   0.04054577,
   0.06920371,
   0.1076055,
   0.2563378};
   grae = new TGraphAsymmErrors(16,Graph1_fx3539,Graph1_fy3539,Graph1_felx3539,Graph1_fehx3539,Graph1_fely3539,Graph1_fehy3539);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1353135353539 = new TH1F("Graph_Graph_Graph_Graph1353135353539","Graph",100,0,770);
   Graph_Graph_Graph_Graph1353135353539->SetMinimum(0.5260687);
   Graph_Graph_Graph_Graph1353135353539->SetMaximum(1.339306);
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
   WPt_1->Range(-141.7721,-2.107215,744.3038,3.253543);
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
   hframe__878->SetMaximum(854.8641);
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
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMinimum(0.04805807);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMaximum(192.2323);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.1705567);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.5235986);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.052797);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1.829987);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,2.837018);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,2.859855);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,2.939368);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,2.610163);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,2.131572);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.671307);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1.080996);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.716367);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.3484063);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.1461279);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.04587444);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.002652267);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,3.281118e-05);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.04329864);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.09373693);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.0925906);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.1245343);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.2028307);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.1776862);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.2281464);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.1898975);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.14945);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.1320224);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.09779097);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.08411233);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.03870008);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.02587066);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.009570497);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.0009316652);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,3.281118e-05);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1729.147);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,2.742445);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,9.263269);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,23.69645);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,45.19221);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,65.19564);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,77.65977);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,77.52757);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,66.71687);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,49.68517);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,34.9485);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,23.84761);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,15.56091);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,7.028367);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,2.905223);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.6150609);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.0335861);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.0008895096);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.08787418);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1623564);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.2620388);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.3636288);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.4386347);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.4797035);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.4792722);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.4433955);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.3830059);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.320198);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.2645892);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.2121472);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.09053423);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.05892746);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.01910331);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.003089124);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.0006338061);
   TT_stack_2_stack_2_stack_2->SetEntries(173023.8);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,2.671563);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,10.86145);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,25.53252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,36.8715);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,40.49397);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,39.62555);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,35.99325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,32.68303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,22.42227);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,21.61644);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,14.19993);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,8.544085);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,4.655368);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1.38838);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.3442788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.0284541);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,-0.0003754105);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.4554082);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.8716686);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.342409);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.693636);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.867227);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.91098);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.849805);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.721445);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.449068);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,1.321247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,1.073772);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.8547786);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.3797875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.2223929);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.07615901);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.01468061);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.0003744949);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3537.789);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(1,0.009523005);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(2,0.006362729);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(4,0.06076854);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(5,0.08392046);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(6,0.124189);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(7,0.1622678);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(9,0.1653379);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(10,0.1836972);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(11,0.1129448);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(12,0.1732619);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(14,0.1556241);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(15,0.07851893);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(16,0.08416486);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(17,0.02863778);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(18,0.007194415);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(19,0.0001513265);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(1,0.005461485);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(2,0.01253122);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(4,0.02057164);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(5,0.02736706);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(6,0.02870127);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(7,0.03205657);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(9,0.03302227);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(10,0.03276502);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(11,0.03130715);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(12,0.03200639);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(14,0.02899635);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(15,0.02707619);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(16,0.01269784);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(17,0.008957404);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(18,0.003008773);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(19,0.0003960769);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetEntries(224.2308);
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
   5.584565,
   20.64832,
   0,
   50.28176,
   83.89369,
   108.5266,
   120.1452,
   0,
   116.4602,
   102.01,
   74.23901,
   58.23624,
   0,
   39.12854,
   24.82136,
   12.03214,
   4.439731,
   1.005214,
   0.06469246,
   0.0005469102};
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
   0.4658254,
   0.8916011,
   0,
   1.370875,
   1.736703,
   1.92875,
   1.978265,
   0,
   1.924456,
   1.787746,
   1.506263,
   1.365888,
   0,
   1.110206,
   0.884719,
   0.3923426,
   0.2315174,
   0.07909946,
   0.015031,
   0.0007369078};
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
   0.4658254,
   0.8916011,
   0,
   1.370875,
   1.736703,
   1.92875,
   1.978265,
   0,
   1.924456,
   1.787746,
   1.506263,
   1.365888,
   0,
   1.110206,
   0.884719,
   0.3923426,
   0.2315174,
   0.07909946,
   0.015031,
   0.0007369078};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMinimum(0.1343358);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMaximum(134.3358);
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
   Data__880->SetBinContent(1,5.4);
   Data__880->SetBinContent(2,20.4);
   Data__880->SetBinContent(4,47.25);
   Data__880->SetBinContent(5,82.7);
   Data__880->SetBinContent(6,101.75);
   Data__880->SetBinContent(7,113.3);
   Data__880->SetBinContent(9,111.05);
   Data__880->SetBinContent(10,101.35);
   Data__880->SetBinContent(11,78.45);
   Data__880->SetBinContent(12,59.25);
   Data__880->SetBinContent(14,37.55);
   Data__880->SetBinContent(15,27.7);
   Data__880->SetBinContent(16,11.9);
   Data__880->SetBinContent(17,4.72);
   Data__880->SetBinContent(18,1.17);
   Data__880->SetBinContent(19,0.055);
   Data__880->SetBinError(1,0.5196152);
   Data__880->SetBinError(2,1.00995);
   Data__880->SetBinError(4,1.537043);
   Data__880->SetBinError(5,2.03347);
   Data__880->SetBinError(6,2.255549);
   Data__880->SetBinError(7,2.380126);
   Data__880->SetBinError(9,2.356374);
   Data__880->SetBinError(10,2.251111);
   Data__880->SetBinError(11,1.98053);
   Data__880->SetBinError(12,1.721191);
   Data__880->SetBinError(14,1.370219);
   Data__880->SetBinError(15,1.17686);
   Data__880->SetBinError(16,0.4878524);
   Data__880->SetBinError(17,0.3072458);
   Data__880->SetBinError(18,0.1081665);
   Data__880->SetBinError(19,0.01658312);
   Data__880->SetEntries(16302.08);
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
   hframe_copy__881->SetMaximum(854.8641);
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
   hframe_copy__882->SetMaximum(854.8641);
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
