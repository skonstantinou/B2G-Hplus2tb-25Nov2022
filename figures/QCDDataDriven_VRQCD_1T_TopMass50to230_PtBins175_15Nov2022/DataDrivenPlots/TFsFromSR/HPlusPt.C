void HPlusPt()
{
//=========Macro generated from canvas: HPlusPt/HPlusPt
//=========  (Fri Nov 18 13:28:21 2022) by ROOT version 6.20/02
   TCanvas *HPlusPt = new TCanvas("HPlusPt", "HPlusPt",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   HPlusPt->SetHighLightColor(2);
   HPlusPt->Range(0,0,1,1);
   HPlusPt->SetFillColor(0);
   HPlusPt->SetBorderMode(0);
   HPlusPt->SetBorderSize(2);
   HPlusPt->SetTickx(1);
   HPlusPt->SetTicky(1);
   HPlusPt->SetLeftMargin(0.16);
   HPlusPt->SetRightMargin(0.05);
   HPlusPt->SetTopMargin(0.06);
   HPlusPt->SetBottomMargin(0.13);
   HPlusPt->SetFrameFillStyle(0);
   HPlusPt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: HPlusPt_2
   TPad *HPlusPt_2 = new TPad("HPlusPt_2", "HPlusPt_2",0,0,1,0.304);
   HPlusPt_2->Draw();
   HPlusPt_2->cd();
   HPlusPt_2->Range(-162.0253,-0.428,850.6329,1.7);
   HPlusPt_2->SetFillColor(0);
   HPlusPt_2->SetFillStyle(4000);
   HPlusPt_2->SetBorderMode(0);
   HPlusPt_2->SetBorderSize(2);
   HPlusPt_2->SetTickx(1);
   HPlusPt_2->SetTicky(1);
   HPlusPt_2->SetLeftMargin(0.16);
   HPlusPt_2->SetRightMargin(0.05);
   HPlusPt_2->SetTopMargin(0);
   HPlusPt_2->SetBottomMargin(0.3421053);
   HPlusPt_2->SetFrameFillStyle(0);
   HPlusPt_2->SetFrameBorderMode(0);
   HPlusPt_2->SetFrameFillStyle(0);
   HPlusPt_2->SetFrameBorderMode(0);
   
   TH1F *hframe__645 = new TH1F("hframe__645","",1000,0,800);
   hframe__645->SetMinimum(0.3);
   hframe__645->SetMaximum(1.7);
   hframe__645->SetDirectory(0);
   hframe__645->SetStats(0);
   hframe__645->SetLineStyle(0);
   hframe__645->SetMarkerStyle(20);
   hframe__645->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe__645->GetXaxis()->SetNdivisions(8);
   hframe__645->GetXaxis()->SetLabelFont(43);
   hframe__645->GetXaxis()->SetLabelOffset(0.007);
   hframe__645->GetXaxis()->SetLabelSize(27);
   hframe__645->GetXaxis()->SetTitleSize(33);
   hframe__645->GetXaxis()->SetTitleOffset(2.960526);
   hframe__645->GetXaxis()->SetTitleFont(43);
   hframe__645->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__645->GetYaxis()->SetNdivisions(505);
   hframe__645->GetYaxis()->SetLabelFont(43);
   hframe__645->GetYaxis()->SetLabelOffset(0.007);
   hframe__645->GetYaxis()->SetLabelSize(21);
   hframe__645->GetYaxis()->SetTitleSize(33);
   hframe__645->GetYaxis()->SetTitleOffset(1.5625);
   hframe__645->GetYaxis()->SetTitleFont(43);
   hframe__645->GetZaxis()->SetLabelFont(43);
   hframe__645->GetZaxis()->SetLabelOffset(0.007);
   hframe__645->GetZaxis()->SetLabelSize(27);
   hframe__645->GetZaxis()->SetTitleSize(33);
   hframe__645->GetZaxis()->SetTitleOffset(1);
   hframe__645->GetZaxis()->SetTitleFont(43);
   hframe__645->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3375[23] = {
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
   310,
   330,
   370,
   390,
   425,
   475,
   525,
   575,
   650,
   750,
   850};
   Double_t BackgroundStatSystError_fy3375[23] = {
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
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3375[23] = {
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
   10,
   25,
   25,
   25,
   25,
   50,
   50,
   50};
   Double_t BackgroundStatSystError_fely3375[23] = {
   0.09911495,
   0.05810032,
   0.0500967,
   0.04231852,
   0.04244491,
   0.04064193,
   0.04533289,
   0.04833765,
   0.05605101,
   0.06211749,
   0.07365776,
   0.08804599,
   0.1042617,
   0.1183419,
   0.1610629,
   0.1961133,
   0.1748658,
   0.2350536,
   0.3761112,
   0.3076388,
   0.3864158,
   0.5186052,
   0.7550605};
   Double_t BackgroundStatSystError_fehx3375[23] = {
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
   10,
   25,
   25,
   25,
   25,
   50,
   50,
   50};
   Double_t BackgroundStatSystError_fehy3375[23] = {
   0.09911495,
   0.05810032,
   0.0500967,
   0.04231852,
   0.04244491,
   0.04064193,
   0.04533289,
   0.04833765,
   0.05605101,
   0.06211749,
   0.07365776,
   0.08804599,
   0.1042617,
   0.1183419,
   0.1610629,
   0.1961133,
   0.1748658,
   0.2350536,
   0.3761112,
   0.3076388,
   0.3864158,
   0.5186052,
   0.7550605};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,BackgroundStatSystError_fx3375,BackgroundStatSystError_fy3375,BackgroundStatSystError_felx3375,BackgroundStatSystError_fehx3375,BackgroundStatSystError_fely3375,BackgroundStatSystError_fehy3375);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1304;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError336733713375 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError336733713375","Graph",100,0,990);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMinimum(0.09392744);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMaximum(1.906073);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError336733713375);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3376[27] = {
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
   310,
   330,
   350,
   370,
   390,
   425,
   475,
   525,
   575,
   650,
   750,
   850};
   Double_t BackgroundStatError_fy3376[27] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3376[27] = {
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
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50,
   50,
   50};
   Double_t BackgroundStatError_fely3376[27] = {
   0.09911495,
   0.05810032,
   0,
   0.0500967,
   0.04231852,
   0.04244491,
   0.04064193,
   0,
   0.04533289,
   0.04833765,
   0.05605101,
   0.06211749,
   0,
   0.07365776,
   0.08804599,
   0.1042617,
   0.1183419,
   0,
   0.1610629,
   0.1961133,
   0.1748658,
   0.2350536,
   0.3761112,
   0.3076388,
   0.3864158,
   0.5186052,
   0.7550605};
   Double_t BackgroundStatError_fehx3376[27] = {
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
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50,
   50,
   50};
   Double_t BackgroundStatError_fehy3376[27] = {
   0.09911495,
   0.05810032,
   0,
   0.0500967,
   0.04231852,
   0.04244491,
   0.04064193,
   0,
   0.04533289,
   0.04833765,
   0.05605101,
   0.06211749,
   0,
   0.07365776,
   0.08804599,
   0.1042617,
   0.1183419,
   0,
   0.1610629,
   0.1961133,
   0.1748658,
   0.2350536,
   0.3761112,
   0.3076388,
   0.3864158,
   0.5186052,
   0.7550605};
   grae = new TGraphAsymmErrors(27,BackgroundStatError_fx3376,BackgroundStatError_fy3376,BackgroundStatError_felx3376,BackgroundStatError_fehx3376,BackgroundStatError_fely3376,BackgroundStatError_fehy3376);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1303;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError336833723376 = new TH1F("Graph_Graph_Graph_BackgroundStatError336833723376","Graph",100,0,990);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMinimum(0.09392744);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMaximum(1.906073);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError336833723376->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError336833723376->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError336833723376);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx93[2] = {
   0,
   800};
   Double_t Graph0_fy93[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx93,Graph0_fy93);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0919293 = new TH1F("Graph_Graph_Graph_Graph0919293","Graph",100,0,880);
   Graph_Graph_Graph_Graph0919293->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0919293->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0919293->SetDirectory(0);
   Graph_Graph_Graph_Graph0919293->SetStats(0);
   Graph_Graph_Graph_Graph0919293->SetLineStyle(0);
   Graph_Graph_Graph_Graph0919293->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0919293->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0919293->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0919293->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0919293->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0919293->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0919293->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0919293->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0919293->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0919293->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0919293->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0919293->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0919293->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0919293->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0919293->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0919293->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0919293->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0919293->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0919293->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0919293->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0919293);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3377[23] = {
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
   310,
   330,
   370,
   390,
   425,
   475,
   525,
   575,
   650,
   750,
   850};
   Double_t Graph1_fy3377[23] = {
   1.059975,
   1.116001,
   1.235782,
   0.9993552,
   1.050143,
   0.8926977,
   0.9325643,
   0.9209218,
   1.068267,
   0.9612084,
   0.9750974,
   1.163683,
   0.9612363,
   0.7604316,
   1.23918,
   1.195349,
   1.23171,
   1.500125,
   1.079568,
   1.326846,
   1.345096,
   1.140503,
   2.129729};
   Double_t Graph1_felx3377[23] = {
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
   10,
   25,
   25,
   25,
   25,
   50,
   50,
   50};
   Double_t Graph1_fely3377[23] = {
   0.07457955,
   0.04489214,
   0.04067627,
   0.03085547,
   0.03160559,
   0.02803402,
   0.03189303,
   0.03420218,
   0.04335963,
   0.04566839,
   0.05476692,
   0.07189254,
   0.07771135,
   0.07928048,
   0.1368446,
   0.1626664,
   0.1504773,
   0.2165244,
   0.2994184,
   0.2766664,
   0.3473022,
   0.4310696,
   0.8049617};
   Double_t Graph1_fehx3377[23] = {
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
   10,
   25,
   25,
   25,
   25,
   50,
   50,
   50};
   Double_t Graph1_fehy3377[23] = {
   0.07457955,
   0.04489214,
   0.04067627,
   0.03085547,
   0.03160559,
   0.02803402,
   0.03189303,
   0.03420218,
   0.04335963,
   0.04566839,
   0.05476692,
   0.07189254,
   0.07771135,
   0.07928048,
   0.1368446,
   0.1626664,
   0.1504773,
   0.2165244,
   0.2994184,
   0.2766664,
   0.3473022,
   0.4310696,
   0.8049617};
   grae = new TGraphAsymmErrors(23,Graph1_fx3377,Graph1_fy3377,Graph1_felx3377,Graph1_fehx3377,Graph1_fely3377,Graph1_fehy3377);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1336933733377 = new TH1F("Graph_Graph_Graph_Graph1336933733377","Graph",100,0,990);
   Graph_Graph_Graph_Graph1336933733377->SetMinimum(0.4557972);
   Graph_Graph_Graph_Graph1336933733377->SetMaximum(3.160044);
   Graph_Graph_Graph_Graph1336933733377->SetDirectory(0);
   Graph_Graph_Graph_Graph1336933733377->SetStats(0);
   Graph_Graph_Graph_Graph1336933733377->SetLineStyle(0);
   Graph_Graph_Graph_Graph1336933733377->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1336933733377->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1336933733377->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1336933733377->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1336933733377->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1336933733377->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1336933733377->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1336933733377->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1336933733377->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1336933733377->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1336933733377->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1336933733377->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1336933733377->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1336933733377->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1336933733377->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1336933733377->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1336933733377->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1336933733377->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1336933733377->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1336933733377->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1336933733377->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1336933733377);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__646 = new TH1F("hframe_copy__646","",1000,0,800);
   hframe_copy__646->SetMinimum(0.3);
   hframe_copy__646->SetMaximum(1.7);
   hframe_copy__646->SetDirectory(0);
   hframe_copy__646->SetStats(0);
   hframe_copy__646->SetLineStyle(0);
   hframe_copy__646->SetMarkerStyle(20);
   hframe_copy__646->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe_copy__646->GetXaxis()->SetNdivisions(8);
   hframe_copy__646->GetXaxis()->SetLabelFont(43);
   hframe_copy__646->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__646->GetXaxis()->SetLabelSize(27);
   hframe_copy__646->GetXaxis()->SetTitleSize(33);
   hframe_copy__646->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__646->GetXaxis()->SetTitleFont(43);
   hframe_copy__646->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__646->GetYaxis()->SetNdivisions(505);
   hframe_copy__646->GetYaxis()->SetLabelFont(43);
   hframe_copy__646->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__646->GetYaxis()->SetLabelSize(21);
   hframe_copy__646->GetYaxis()->SetTitleSize(33);
   hframe_copy__646->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__646->GetYaxis()->SetTitleFont(43);
   hframe_copy__646->GetZaxis()->SetLabelFont(43);
   hframe_copy__646->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__646->GetZaxis()->SetLabelSize(27);
   hframe_copy__646->GetZaxis()->SetTitleSize(33);
   hframe_copy__646->GetZaxis()->SetTitleOffset(1);
   hframe_copy__646->GetZaxis()->SetTitleFont(43);
   hframe_copy__646->Draw("sameaxis");
   HPlusPt_2->Modified();
   HPlusPt->cd();
  
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
   HPlusPt->cd();
  
// ------------>Primitives in pad: HPlusPt_1
   TPad *HPlusPt_1 = new TPad("HPlusPt_1", "HPlusPt_1",0,0.2897959,1,1);
   HPlusPt_1->Draw();
   HPlusPt_1->cd();
   HPlusPt_1->Range(-162.0253,-2.100363,850.6329,2.917792);
   HPlusPt_1->SetFillColor(0);
   HPlusPt_1->SetFillStyle(4000);
   HPlusPt_1->SetBorderMode(0);
   HPlusPt_1->SetBorderSize(2);
   HPlusPt_1->SetLogy();
   HPlusPt_1->SetTickx(1);
   HPlusPt_1->SetTicky(1);
   HPlusPt_1->SetLeftMargin(0.16);
   HPlusPt_1->SetRightMargin(0.05);
   HPlusPt_1->SetTopMargin(0.06);
   HPlusPt_1->SetBottomMargin(0.02);
   HPlusPt_1->SetFrameFillStyle(0);
   HPlusPt_1->SetFrameBorderMode(0);
   HPlusPt_1->SetFrameFillStyle(0);
   HPlusPt_1->SetFrameBorderMode(0);
   
   TH1F *hframe__647 = new TH1F("hframe__647","",1000,0,800);
   hframe__647->SetMinimum(0.01);
   hframe__647->SetMaximum(413.7165);
   hframe__647->SetDirectory(0);
   hframe__647->SetStats(0);
   hframe__647->SetLineStyle(0);
   hframe__647->SetMarkerStyle(20);
   hframe__647->GetXaxis()->SetNdivisions(8);
   hframe__647->GetXaxis()->SetLabelFont(43);
   hframe__647->GetXaxis()->SetLabelOffset(0.007);
   hframe__647->GetXaxis()->SetLabelSize(0);
   hframe__647->GetXaxis()->SetTitleSize(0);
   hframe__647->GetXaxis()->SetTitleOffset(0.9);
   hframe__647->GetXaxis()->SetTitleFont(43);
   hframe__647->GetYaxis()->SetTitle("< Events / 20-100 GeV >");
   hframe__647->GetYaxis()->SetLabelFont(43);
   hframe__647->GetYaxis()->SetLabelOffset(0.007);
   hframe__647->GetYaxis()->SetLabelSize(27);
   hframe__647->GetYaxis()->SetTitleSize(33);
   hframe__647->GetYaxis()->SetTitleOffset(1.5625);
   hframe__647->GetYaxis()->SetTitleFont(43);
   hframe__647->GetZaxis()->SetLabelFont(43);
   hframe__647->GetZaxis()->SetLabelOffset(0.007);
   hframe__647->GetZaxis()->SetLabelSize(27);
   hframe__647->GetZaxis()->SetTitleSize(33);
   hframe__647->GetZaxis()->SetTitleOffset(1);
   hframe__647->GetZaxis()->SetTitleFont(43);
   hframe__647->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis373[28] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 450, 500, 550, 600, 700, 800, 900}; 
   
   TH1F *StackedMCstackHist_stack_91_stack_92_stack_93 = new TH1F("StackedMCstackHist_stack_91_stack_92_stack_93","StackedMCstackHist",27, xAxis373);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMinimum(0.02271766);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMaximum(90.87062);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetDirectory(0);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetStats(0);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetLineStyle(0);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMarkerStyle(20);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_91_stack_92_stack_93->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_91_stack_92_stack_93);
   
   Double_t xAxis374[28] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 450, 500, 550, 600, 700, 800, 900}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_HPlusPtInclusive",27, xAxis374);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.09644905);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.4635616);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.4757959);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.6649139);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.7275298);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.6646736);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.6342322);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.4614304);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.4115202);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.3022354);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.2106664);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.1591759);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.1188637);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.07768402);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.04747622);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.03163524);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.02214476);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.01562249);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.01677926);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.0007757118);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.0005249227);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.006481728);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,-0.001597317);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.02770308);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.0955933);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.09326705);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.110239);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.106622);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.08600316);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.119421);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.1010808);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.06250037);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.05846249);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.04747731);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.03583741);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.02709452);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.02664033);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.0261809);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.01645461);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.0079802);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.006364519);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.008004152);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.005946845);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.001726605);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.00316504);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.001669597);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(359.5708);
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
   Double_t xAxis375[28] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 450, 500, 550, 600, 700, 800, 900}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_HPlusPtInclusive",27, xAxis375);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1.368207);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4.015058);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,6.317281);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,7.868735);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,8.165611);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,8.392452);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,7.795134);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,6.250496);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,5.000838);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3.680876);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2.615422);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2.046558);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1.351107);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.9768987);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.631151);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.4925223);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,0.2578478);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.1304433);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.05510205);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.03337052);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.0234279);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.0051602);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.003026621);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.06476352);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1110749);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.139023);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1548904);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1585654);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1605934);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.1555229);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.1382478);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.1238106);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.1065909);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.08960488);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.07859126);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.06385607);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.05531203);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.0434445);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.03946014);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.01819956);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.01238316);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.008184822);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.005958611);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.003829789);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.001576748);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.00132902);
   TT_stack_2_stack_2_stack_2->SetEntries(22084.54);
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
   Double_t xAxis376[28] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 450, 500, 550, 600, 700, 800, 900}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_HPlusPtInclusive",27, xAxis376);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,8.063875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,23.20953);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,30.55169);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,43.95019);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,43.67113);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,47.73701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,37.41198);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,32.65081);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,22.99814);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,19.0608);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,13.4287);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,9.051632);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,6.488531);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,4.994614);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,2.630012);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1.734597);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,0.8079258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.4938809);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.1689557);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.3125407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.08756343);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.0497345);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.03143874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.9417894);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,1.602001);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.863344);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,2.212887);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,2.222889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,2.301023);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,2.068849);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.894979);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.586386);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,1.426258);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,1.192989);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.9873951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.8268624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.7132358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.5304795);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.4409037);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.189199);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.149776);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.08985517);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.1063216);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.04288638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.03163311);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.02472544);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3163.797);
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
   Double_t xAxis377[28] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 450, 500, 550, 600, 700, 800, 900}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__648 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__648","h_SR_HPlusPtInclusive",27, xAxis377);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(1,0.005262855);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(2,0.01632439);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(4,0.02612603);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(5,0.02832426);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(6,0.0241132);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(7,0.0400384);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(9,0.003636073);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(10,0.03957867);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(11,0.004431971);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(12,0.02138393);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(14,0.01947909);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(15,0.02255749);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(16,0.02367495);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(17,-0.002519459);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(19,0.008562532);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(20,0.0008721408);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(21,-0.0005413982);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(22,0.003299729);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(23,9.284876e-06);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(24,4.533265e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(25,0.001259767);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(26,0.0005030111);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(1,0.004163899);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(2,0.009246731);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(4,0.0117949);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(5,0.01267506);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(6,0.01446656);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(7,0.01426119);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(9,0.01371194);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(10,0.01373886);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(11,0.01286164);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(12,0.01131912);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(14,0.009513096);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(15,0.01048505);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(16,0.009488196);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(17,0.007975715);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(19,0.008322716);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(20,0.006794099);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(21,0.003610478);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(22,0.002700309);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(23,0.001979582);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(24,0.0009654305);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(25,0.0006835085);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(26,0.0003775119);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetEntries(41.41466);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->GetXaxis()->SetRange(1,160);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3378[27] = {
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
   310,
   330,
   350,
   370,
   390,
   425,
   475,
   525,
   575,
   650,
   750,
   850};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3378[27] = {
   9.528531,
   27.68815,
   0,
   37.34476,
   52.48384,
   52.56428,
   56.79414,
   0,
   45.84134,
   39.36274,
   28.41049,
   23.04391,
   0,
   16.25479,
   11.25737,
   7.958501,
   6.049196,
   0,
   3.308639,
   2.258754,
   1.087918,
   0.6399467,
   0.240837,
   0.3466869,
   0.1115162,
   0.06137643,
   0.03286804};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3378[27] = {
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
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50,
   50,
   50};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3378[27] = {
   0.9444199,
   1.60869,
   0,
   1.870849,
   2.221039,
   2.231086,
   2.308223,
   0,
   2.07812,
   1.902702,
   1.592437,
   1.43143,
   0,
   1.197291,
   0.991166,
   0.8297669,
   0.7158732,
   0,
   0.532899,
   0.4429717,
   0.1902397,
   0.1504218,
   0.09058151,
   0.1066544,
   0.04309164,
   0.03183013,
   0.02481736};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3378[27] = {
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
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50,
   50,
   50};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3378[27] = {
   0.9444199,
   1.60869,
   0,
   1.870849,
   2.221039,
   2.231086,
   2.308223,
   0,
   2.07812,
   1.902702,
   1.592437,
   1.43143,
   0,
   1.197291,
   0.991166,
   0.8297669,
   0.7158732,
   0,
   0.532899,
   0.4429717,
   0.1902397,
   0.1504218,
   0.09058151,
   0.1066544,
   0.04309164,
   0.03183013,
   0.02481736};
   grae = new TGraphAsymmErrors(27,BkgSum-SR-Inclusive_sum_errors_fx3378,BkgSum-SR-Inclusive_sum_errors_fy3378,BkgSum-SR-Inclusive_sum_errors_felx3378,BkgSum-SR-Inclusive_sum_errors_fehx3378,BkgSum-SR-Inclusive_sum_errors_fely3378,BkgSum-SR-Inclusive_sum_errors_fehy3378);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1302;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378","Graph",100,0,990);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMinimum(0.0650126);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMaximum(65.0126);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors337033743378);
   
   grae->Draw("e2 ");
   Double_t xAxis378[28] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 450, 500, 550, 600, 700, 800, 900}; 
   
   TH1F *Data__649 = new TH1F("Data__649","h_SR_HPlusPtInclusive",27, xAxis378);
   Data__649->SetBinContent(1,10.1);
   Data__649->SetBinContent(2,30.9);
   Data__649->SetBinContent(4,46.15);
   Data__649->SetBinContent(5,52.45);
   Data__649->SetBinContent(6,55.2);
   Data__649->SetBinContent(7,50.7);
   Data__649->SetBinContent(9,42.75);
   Data__649->SetBinContent(10,36.25);
   Data__649->SetBinContent(11,30.35);
   Data__649->SetBinContent(12,22.15);
   Data__649->SetBinContent(14,15.85);
   Data__649->SetBinContent(15,13.1);
   Data__649->SetBinContent(16,7.65);
   Data__649->SetBinContent(17,4.6);
   Data__649->SetBinContent(19,4.1);
   Data__649->SetBinContent(20,2.7);
   Data__649->SetBinContent(21,1.34);
   Data__649->SetBinContent(22,0.96);
   Data__649->SetBinContent(23,0.26);
   Data__649->SetBinContent(24,0.46);
   Data__649->SetBinContent(25,0.15);
   Data__649->SetBinContent(26,0.07);
   Data__649->SetBinContent(27,0.07);
   Data__649->SetBinError(1,0.7106335);
   Data__649->SetBinError(2,1.24298);
   Data__649->SetBinError(4,1.519046);
   Data__649->SetBinError(5,1.619413);
   Data__649->SetBinError(6,1.661325);
   Data__649->SetBinError(7,1.592168);
   Data__649->SetBinError(9,1.462019);
   Data__649->SetBinError(10,1.346291);
   Data__649->SetBinError(11,1.231868);
   Data__649->SetBinError(12,1.052378);
   Data__649->SetBinError(14,0.8902247);
   Data__649->SetBinError(15,0.8093207);
   Data__649->SetBinError(16,0.6184658);
   Data__649->SetBinError(17,0.4795832);
   Data__649->SetBinError(19,0.4527693);
   Data__649->SetBinError(20,0.3674235);
   Data__649->SetBinError(21,0.1637071);
   Data__649->SetBinError(22,0.1385641);
   Data__649->SetBinError(23,0.07211103);
   Data__649->SetBinError(24,0.09591663);
   Data__649->SetBinError(25,0.03872983);
   Data__649->SetBinError(26,0.02645751);
   Data__649->SetBinError(27,0.02645751);
   Data__649->SetEntries(8607.276);
   Data__649->SetDirectory(0);
   Data__649->SetFillStyle(3001);
   Data__649->SetLineWidth(2);
   Data__649->SetMarkerStyle(20);
   Data__649->SetMarkerSize(1.2);
   Data__649->GetXaxis()->SetRange(1,160);
   Data__649->GetXaxis()->SetLabelFont(42);
   Data__649->GetXaxis()->SetTitleOffset(1);
   Data__649->GetXaxis()->SetTitleFont(42);
   Data__649->GetYaxis()->SetLabelFont(42);
   Data__649->GetYaxis()->SetTitleFont(42);
   Data__649->GetZaxis()->SetLabelFont(42);
   Data__649->GetZaxis()->SetTitleOffset(1);
   Data__649->GetZaxis()->SetTitleFont(42);
   Data__649->Draw("EP same");
   
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

   ci = 1302;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1302;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__650 = new TH1F("hframe_copy__650","",1000,0,800);
   hframe_copy__650->SetMinimum(0.01);
   hframe_copy__650->SetMaximum(413.7165);
   hframe_copy__650->SetDirectory(0);
   hframe_copy__650->SetStats(0);
   hframe_copy__650->SetLineStyle(0);
   hframe_copy__650->SetMarkerStyle(20);
   hframe_copy__650->GetXaxis()->SetNdivisions(8);
   hframe_copy__650->GetXaxis()->SetLabelFont(43);
   hframe_copy__650->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__650->GetXaxis()->SetLabelSize(0);
   hframe_copy__650->GetXaxis()->SetTitleSize(0);
   hframe_copy__650->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__650->GetXaxis()->SetTitleFont(43);
   hframe_copy__650->GetYaxis()->SetTitle("< Events / 20-100 GeV >");
   hframe_copy__650->GetYaxis()->SetLabelFont(43);
   hframe_copy__650->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__650->GetYaxis()->SetLabelSize(27);
   hframe_copy__650->GetYaxis()->SetTitleSize(33);
   hframe_copy__650->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__650->GetYaxis()->SetTitleFont(43);
   hframe_copy__650->GetZaxis()->SetLabelFont(43);
   hframe_copy__650->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__650->GetZaxis()->SetLabelSize(27);
   hframe_copy__650->GetZaxis()->SetTitleSize(33);
   hframe_copy__650->GetZaxis()->SetTitleOffset(1);
   hframe_copy__650->GetZaxis()->SetTitleFont(43);
   hframe_copy__650->Draw("sameaxis");
   
   TH1F *hframe_copy__651 = new TH1F("hframe_copy__651","",1000,0,800);
   hframe_copy__651->SetMinimum(0.01);
   hframe_copy__651->SetMaximum(413.7165);
   hframe_copy__651->SetDirectory(0);
   hframe_copy__651->SetStats(0);
   hframe_copy__651->SetLineStyle(0);
   hframe_copy__651->SetMarkerStyle(20);
   hframe_copy__651->GetXaxis()->SetNdivisions(8);
   hframe_copy__651->GetXaxis()->SetLabelFont(43);
   hframe_copy__651->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__651->GetXaxis()->SetLabelSize(0);
   hframe_copy__651->GetXaxis()->SetTitleSize(0);
   hframe_copy__651->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__651->GetXaxis()->SetTitleFont(43);
   hframe_copy__651->GetYaxis()->SetTitle("< Events / 20-100 GeV >");
   hframe_copy__651->GetYaxis()->SetLabelFont(43);
   hframe_copy__651->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__651->GetYaxis()->SetLabelSize(27);
   hframe_copy__651->GetYaxis()->SetTitleSize(33);
   hframe_copy__651->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__651->GetYaxis()->SetTitleFont(43);
   hframe_copy__651->GetZaxis()->SetLabelFont(43);
   hframe_copy__651->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__651->GetZaxis()->SetLabelSize(27);
   hframe_copy__651->GetZaxis()->SetTitleSize(33);
   hframe_copy__651->GetZaxis()->SetTitleOffset(1);
   hframe_copy__651->GetZaxis()->SetTitleFont(43);
   hframe_copy__651->Draw("sameaxis");
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
   HPlusPt_1->Modified();
   HPlusPt->cd();
   HPlusPt->Modified();
   HPlusPt->cd();
   HPlusPt->SetSelected(HPlusPt);
}
