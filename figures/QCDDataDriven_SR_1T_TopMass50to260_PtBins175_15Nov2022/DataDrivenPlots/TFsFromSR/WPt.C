void WPt()
{
//=========Macro generated from canvas: WPt/WPt
//=========  (Fri Nov 18 13:28:36 2022) by ROOT version 6.20/02
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
   0.1028446,
   0.05821178,
   0.04141838,
   0.03183234,
   0.03051426,
   0.02938692,
   0.03014742,
   0.0314238,
   0.03593248,
   0.04394797,
   0.04906725,
   0.06071804,
   0.06022778,
   0.08601495,
   0.1159337,
   0.2298056,
   -2.168742};
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
   0.1028446,
   0.05821178,
   0.04141838,
   0.03183234,
   0.03051426,
   0.02938692,
   0.03014742,
   0.0314238,
   0.03593248,
   0.04394797,
   0.04906725,
   0.06071804,
   0.06022778,
   0.08601495,
   0.1159337,
   0.2298056,
   -2.168742};
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
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMinimum(0.7242333);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMaximum(1.275767);
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
   0.1028446,
   0.05821178,
   0,
   0.04141838,
   0.03183234,
   0.03051426,
   0.02938692,
   0,
   0.03014742,
   0.0314238,
   0.03593248,
   0.04394797,
   0,
   0.04906725,
   0.06071804,
   0.06022778,
   0.08601495,
   0.1159337,
   0.2298056,
   -2.168742};
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
   0.1028446,
   0.05821178,
   0,
   0.04141838,
   0.03183234,
   0.03051426,
   0.02938692,
   0,
   0.03014742,
   0.0314238,
   0.03593248,
   0.04394797,
   0,
   0.04906725,
   0.06071804,
   0.06022778,
   0.08601495,
   0.1159337,
   0.2298056,
   -2.168742};
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
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMinimum(0.7242333);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMaximum(1.275767);
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
   0.942539,
   0.8991549,
   1.073801,
   1.037069,
   1.129389,
   1.064842,
   1.018091,
   0.9824425,
   1.03596,
   1.082481,
   0.9530492,
   1.109601,
   1.083226,
   0.9679364,
   1.272612,
   0.7406037};
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
   0.1053791,
   0.05768081,
   0.04466424,
   0.03441636,
   0.0349036,
   0.03283049,
   0.03282458,
   0.03379705,
   0.04005254,
   0.05058102,
   0.05270374,
   0.07103495,
   0.06920475,
   0.09357394,
   0.1578481,
   0.2233004};
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
   0.1053791,
   0.05768081,
   0.04466424,
   0.03441636,
   0.0349036,
   0.03283049,
   0.03282458,
   0.03379705,
   0.04005254,
   0.05058102,
   0.05270374,
   0.07103495,
   0.06920475,
   0.09357394,
   0.1578481,
   0.2233004};
   grae = new TGraphAsymmErrors(16,Graph1_fx3539,Graph1_fy3539,Graph1_felx3539,Graph1_fehx3539,Graph1_fely3539,Graph1_fehy3539);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1353135353539 = new TH1F("Graph_Graph_Graph_Graph1353135353539","Graph",100,0,770);
   Graph_Graph_Graph_Graph1353135353539->SetMinimum(0.4259876);
   Graph_Graph_Graph_Graph1353135353539->SetMaximum(1.521776);
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
   WPt_1->Range(-141.7721,-2.099263,744.3038,2.863872);
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
   hframe__878->SetMaximum(368.2);
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
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMinimum(0.0197588);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMaximum(79.03519);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.05654076);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.209567);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.4973105);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.9341302);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1.420998);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.37757);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1.380318);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1.294721);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.9752811);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.7287986);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.4697235);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.3719872);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.1282631);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.1026223);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.02348563);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.004330891);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,2.13531e-05);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.02251757);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.03122886);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.06885839);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.0826288);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.101213);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.09577267);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.09601377);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.113603);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.0841661);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.06913386);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.05476309);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.05141934);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.02011103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.0159365);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.005394478);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.001764792);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,1.92368e-05);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1367.156);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1.104616);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,3.248319);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,7.246815);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,13.22884);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,16.45816);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,18.6742);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,17.49733);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,14.36364);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,11.05574);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,7.916197);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,5.547009);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,3.825818);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1.654993);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.7148366);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.2137241);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.0134708);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.05837098);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1002206);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1522616);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.2047995);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.2299176);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.2439908);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.2365248);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.2140361);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.1878922);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.1587952);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.1328502);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.1099129);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.04563018);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.02977137);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.01160149);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.001963183);
   TT_stack_2_stack_2_stack_2->SetEntries(39035.45);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,3.082699);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,10.0548);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,19.16961);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,29.61423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,28.47333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,29.34523);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,28.36762);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,27.3467);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,20.25786);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,12.51011);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,11.13873);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,6.797133);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2.74027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1.39343);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.2735506);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.05646205);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,-3.583189e-05);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.4319503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.7795617);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.102126);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.375921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.391925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.427765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.401262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.32948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.141806);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.9134502);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.8294159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.6564702);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.2678396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.1871474);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.05781557);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.01686082);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,2.481843e-05);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3551.313);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(1,0.03687783);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(2,0.1020259);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(4,0.4015482);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(5,0.5419865);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(6,0.6687432);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(7,0.7722282);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(9,0.7858366);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(10,0.9263222);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(11,0.854699);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(12,0.858544);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(14,0.8613716);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(15,0.6327406);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(16,0.3965205);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(17,0.1760527);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(18,0.03564947);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(19,-2.092144e-06);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(20,0.0002493357);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(1,0.01373483);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(2,0.02513758);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(4,0.04085159);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(5,0.05265841);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(6,0.06052643);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(7,0.06390308);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(9,0.06628006);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(10,0.06784401);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(11,0.06501337);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(12,0.06407626);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(14,0.0594977);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(15,0.05532037);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(16,0.02581175);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(17,0.01829366);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(18,0.00635096);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(19,0.0009800627);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(20,0.0002493357);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetEntries(1706.804);
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
   4.243856,
   13.51269,
   0,
   26.91373,
   43.7772,
   46.35249,
   49.397,
   0,
   47.24527,
   43.00506,
   32.28888,
   21.15511,
   0,
   17.15546,
   10.99494,
   4.523526,
   2.210889,
   0.5107604,
   0.07426374,
   -1.44788e-05};
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
   0.4364576,
   0.7865977,
   0,
   1.114723,
   1.393531,
   1.414412,
   1.451626,
   0,
   1.424323,
   1.351382,
   1.16022,
   0.9297239,
   0,
   0.8417713,
   0.6675911,
   0.272442,
   0.1901695,
   0.05921432,
   0.01706622,
   3.140078e-05};
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
   0.4364576,
   0.7865977,
   0,
   1.114723,
   1.393531,
   1.414412,
   1.451626,
   0,
   1.424323,
   1.351382,
   1.16022,
   0.9297239,
   0,
   0.8417713,
   0.6675911,
   0.272442,
   0.1901695,
   0.05921432,
   0.01706622,
   3.140078e-05};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMinimum(0.05593349);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMaximum(55.93349);
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
   Data__880->SetBinContent(1,4);
   Data__880->SetBinContent(2,12.15);
   Data__880->SetBinContent(4,28.9);
   Data__880->SetBinContent(5,45.4);
   Data__880->SetBinContent(6,52.35);
   Data__880->SetBinContent(7,52.6);
   Data__880->SetBinContent(9,48.1);
   Data__880->SetBinContent(10,42.25);
   Data__880->SetBinContent(11,33.45);
   Data__880->SetBinContent(12,22.9);
   Data__880->SetBinContent(14,16.35);
   Data__880->SetBinContent(15,12.2);
   Data__880->SetBinContent(16,4.9);
   Data__880->SetBinContent(17,2.14);
   Data__880->SetBinContent(18,0.65);
   Data__880->SetBinContent(19,0.055);
   Data__880->SetBinError(1,0.4472136);
   Data__880->SetBinError(2,0.7794229);
   Data__880->SetBinError(4,1.202082);
   Data__880->SetBinError(5,1.506652);
   Data__880->SetBinError(6,1.617869);
   Data__880->SetBinError(7,1.621727);
   Data__880->SetBinError(9,1.550806);
   Data__880->SetBinError(10,1.453444);
   Data__880->SetBinError(11,1.293252);
   Data__880->SetBinError(12,1.070047);
   Data__880->SetBinError(14,0.9041571);
   Data__880->SetBinError(15,0.781025);
   Data__880->SetBinError(16,0.3130495);
   Data__880->SetBinError(17,0.2068816);
   Data__880->SetBinError(18,0.08062258);
   Data__880->SetBinError(19,0.01658312);
   Data__880->SetEntries(7665);
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
   hframe_copy__881->SetMaximum(368.2);
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
   hframe_copy__882->SetMaximum(368.2);
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
