void HPlusPt()
{
//=========Macro generated from canvas: HPlusPt/HPlusPt
//=========  (Fri Nov 18 13:29:12 2022) by ROOT version 6.20/02
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
   0.09641361,
   0.0576321,
   0.04402295,
   0.03562681,
   0.03100431,
   0.02653059,
   0.02454527,
   0.02372259,
   0.02480381,
   0.02726699,
   0.02896921,
   0.0323769,
   0.03547043,
   0.04262399,
   0.05012415,
   0.05610257,
   0.04906282,
   0.07049867,
   0.09164347,
   0.1325241,
   0.1526669,
   0.3246616,
   0.3471363};
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
   0.09641361,
   0.0576321,
   0.04402295,
   0.03562681,
   0.03100431,
   0.02653059,
   0.02454527,
   0.02372259,
   0.02480381,
   0.02726699,
   0.02896921,
   0.0323769,
   0.03547043,
   0.04262399,
   0.05012415,
   0.05610257,
   0.04906282,
   0.07049867,
   0.09164347,
   0.1325241,
   0.1526669,
   0.3246616,
   0.3471363};
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
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMinimum(0.5834365);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMaximum(1.416564);
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
   0.09641361,
   0.0576321,
   0,
   0.04402295,
   0.03562681,
   0.03100431,
   0.02653059,
   0,
   0.02454527,
   0.02372259,
   0.02480381,
   0.02726699,
   0,
   0.02896921,
   0.0323769,
   0.03547043,
   0.04262399,
   0,
   0.05012415,
   0.05610257,
   0.04906282,
   0.07049867,
   0.09164347,
   0.1325241,
   0.1526669,
   0.3246616,
   0.3471363};
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
   0.09641361,
   0.0576321,
   0,
   0.04402295,
   0.03562681,
   0.03100431,
   0.02653059,
   0,
   0.02454527,
   0.02372259,
   0.02480381,
   0.02726699,
   0,
   0.02896921,
   0.0323769,
   0.03547043,
   0.04262399,
   0,
   0.05012415,
   0.05610257,
   0.04906282,
   0.07049867,
   0.09164347,
   0.1325241,
   0.1526669,
   0.3246616,
   0.3471363};
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
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMinimum(0.5834365);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMaximum(1.416564);
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
   1.041324,
   0.9751876,
   1.070864,
   0.9809142,
   1.078538,
   0.9820411,
   0.9702648,
   0.9454632,
   0.981587,
   1,
   1.00348,
   1.035226,
   0.977924,
   0.9590918,
   1.035192,
   1.048234,
   1.144682,
   1.207206,
   0.8711289,
   1.139211,
   0.9691672,
   2.562599,
   0.458399};
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
   0.09276854,
   0.05168484,
   0.04223075,
   0.03415105,
   0.03231414,
   0.0275459,
   0.02611865,
   0.02559047,
   0.02777458,
   0.03112865,
   0.03371256,
   0.03826304,
   0.04121458,
   0.04907141,
   0.06121216,
   0.06852523,
   0.06470125,
   0.09455567,
   0.1048716,
   0.1698235,
   0.1687103,
   0.5730146,
   0.2291995};
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
   0.09276854,
   0.05168484,
   0.04223075,
   0.03415105,
   0.03231414,
   0.0275459,
   0.02611865,
   0.02559047,
   0.02777458,
   0.03112865,
   0.03371256,
   0.03826304,
   0.04121458,
   0.04907141,
   0.06121216,
   0.06852523,
   0.06470125,
   0.09455567,
   0.1048716,
   0.1698235,
   0.1687103,
   0.5730146,
   0.2291995};
   grae = new TGraphAsymmErrors(23,Graph1_fx3377,Graph1_fy3377,Graph1_felx3377,Graph1_fehx3377,Graph1_fely3377,Graph1_fehy3377);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1336933733377 = new TH1F("Graph_Graph_Graph_Graph1336933733377","Graph",100,0,990);
   Graph_Graph_Graph_Graph1336933733377->SetMinimum(0.2062795);
   Graph_Graph_Graph_Graph1336933733377->SetMaximum(3.426255);
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
   HPlusPt_1->Range(-162.0253,-2.102473,850.6329,3.021156);
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
   hframe__647->SetMaximum(517.2951);
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
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMinimum(0.02887473);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMaximum(115.4989);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.06470505);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.3500346);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.4364786);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.6360093);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.9165264);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.088452);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1.455372);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1.461992);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1.464573);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.37043);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.9451582);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.9499325);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.776464);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.5246052);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.4001313);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.4117261);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.2054302);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.09500694);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.06521139);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.01128616);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.01140783);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.002515613);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.001720305);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.03362904);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.1013494);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.05906522);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.0723279);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.09249196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.0995831);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.1623415);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.1205023);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.1147789);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.1152664);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.1031623);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.128254);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.09383897);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.06897959);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.06299196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.06298907);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.02756131);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.01563774);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.01525676);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.005399302);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.004841348);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.002303577);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.001476556);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1194.921);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1.214252);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,3.686779);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,6.095846);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,9.888541);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,12.88241);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,16.67168);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,20.10198);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,20.93155);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,20.37441);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,17.77858);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,15.80078);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,12.43028);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,9.817264);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,7.601169);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,5.861136);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,4.413931);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,2.381032);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,1.221084);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.6940449);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.3565282);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.1242544);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.02372966);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.01015119);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.05869008);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1028599);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1324733);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.168978);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1943473);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.2225508);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.2446346);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.2498767);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.2459057);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.2297078);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.2174067);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.1925493);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.1703184);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.150159);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.1317986);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.1132867);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.05272614);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.03730977);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.02781689);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.02037905);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.008453735);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.003652453);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.002300563);
   TT_stack_2_stack_2_stack_2->SetEntries(65351.63);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,4.771032);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,14.21608);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,23.49016);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,31.52806);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,37.84507);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,46.95202);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,49.55725);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,49.79329);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,41.78248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,32.45098);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,27.40043);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,21.9744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,18.19174);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,11.7889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,7.552601);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,6.335968);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,2.882306);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,1.38436);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.824895);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.4222063);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.2048363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.05180049);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.07538874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.579366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,1.041995);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.313696);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.486882);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.586655);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.699451);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.720658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.689839);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.554546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,1.383305);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,1.256041);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,1.121049);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,1.002344);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.8326033);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.6768239);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.6126335);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.2616339);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.1860303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.1416681);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.1025522);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.05106185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.02496779);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.03016759);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7048.351);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(1,0.01183884);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(2,0.01684625);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(4,0.02793708);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(5,0.06212809);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(6,0.05650238);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(7,0.1297655);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(9,0.05562233);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(10,0.07104274);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(11,0.07509844);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(12,0.04110819);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(14,0.06204163);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(15,0.080536);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(16,0.06452473);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(17,0.03527991);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(19,0.0889882);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(20,0.0596117);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(21,0.0217605);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(22,0.006939549);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(23,0.01328613);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(24,0.004130023);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(25,-0.0001083731);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(26,0.001574463);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(27,0.0003096297);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(1,0.00573655);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(2,0.01101622);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(4,0.01530754);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(5,0.01759966);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(6,0.01927111);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(7,0.02279525);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(9,0.02365049);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(10,0.02435973);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(11,0.02256701);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(12,0.02338653);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(14,0.02386013);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(15,0.02369137);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(16,0.02312498);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(17,0.0216368);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(19,0.02098997);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(20,0.017878);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(21,0.008937025);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(22,0.006947865);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(23,0.004860962);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(24,0.004292836);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(25,0.001364655);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(26,0.0008806202);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(27,0.0003096297);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetEntries(141.8376);
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
   6.049989,
   18.2529,
   0,
   30.02249,
   42.05261,
   51.64401,
   64.71216,
   0,
   71.11461,
   72.18684,
   63.62146,
   51.59999,
   0,
   44.14638,
   35.35461,
   28.78547,
   19.91467,
   0,
   13.81387,
   11.16162,
   5.468768,
   2.70045,
   1.584151,
   0.7900206,
   0.3404985,
   0.07804576,
   0.08726023};
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
   0.5833013,
   1.051953,
   0,
   1.321679,
   1.4982,
   1.601187,
   1.716852,
   0,
   1.745528,
   1.712459,
   1.578055,
   1.406977,
   0,
   1.278886,
   1.144673,
   1.021033,
   0.8488429,
   0,
   0.6924084,
   0.6261959,
   0.2683132,
   0.1903782,
   0.1451771,
   0.1046967,
   0.05198285,
   0.02533846,
   0.03029119};
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
   0.5833013,
   1.051953,
   0,
   1.321679,
   1.4982,
   1.601187,
   1.716852,
   0,
   1.745528,
   1.712459,
   1.578055,
   1.406977,
   0,
   1.278886,
   1.144673,
   1.021033,
   0.8488429,
   0,
   0.6924084,
   0.6261959,
   0.2683132,
   0.1903782,
   0.1451771,
   0.1046967,
   0.05198285,
   0.02533846,
   0.03029119};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMinimum(0.08128922);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMaximum(81.28922);
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
   Data__649->SetBinContent(1,6.3);
   Data__649->SetBinContent(2,17.8);
   Data__649->SetBinContent(4,32.15);
   Data__649->SetBinContent(5,41.25);
   Data__649->SetBinContent(6,55.7);
   Data__649->SetBinContent(7,63.55);
   Data__649->SetBinContent(9,69);
   Data__649->SetBinContent(10,68.25);
   Data__649->SetBinContent(11,62.45);
   Data__649->SetBinContent(12,51.6);
   Data__649->SetBinContent(14,44.3);
   Data__649->SetBinContent(15,36.6);
   Data__649->SetBinContent(16,28.15);
   Data__649->SetBinContent(17,19.1);
   Data__649->SetBinContent(19,14.3);
   Data__649->SetBinContent(20,11.7);
   Data__649->SetBinContent(21,6.26);
   Data__649->SetBinContent(22,3.26);
   Data__649->SetBinContent(23,1.38);
   Data__649->SetBinContent(24,0.9);
   Data__649->SetBinContent(25,0.33);
   Data__649->SetBinContent(26,0.2);
   Data__649->SetBinContent(27,0.04);
   Data__649->SetBinError(1,0.5612486);
   Data__649->SetBinError(2,0.9433981);
   Data__649->SetBinError(4,1.267872);
   Data__649->SetBinError(5,1.436141);
   Data__649->SetBinError(6,1.668832);
   Data__649->SetBinError(7,1.782554);
   Data__649->SetBinError(9,1.857418);
   Data__649->SetBinError(10,1.847295);
   Data__649->SetBinError(11,1.76706);
   Data__649->SetBinError(12,1.606238);
   Data__649->SetBinError(14,1.488288);
   Data__649->SetBinError(15,1.352775);
   Data__649->SetBinError(16,1.186381);
   Data__649->SetBinError(17,0.977241);
   Data__649->SetBinError(19,0.8455767);
   Data__649->SetBinError(20,0.7648529);
   Data__649->SetBinError(21,0.3538361);
   Data__649->SetBinError(22,0.2553429);
   Data__649->SetBinError(23,0.1661325);
   Data__649->SetBinError(24,0.1341641);
   Data__649->SetBinError(25,0.05744563);
   Data__649->SetBinError(26,0.04472136);
   Data__649->SetBinError(27,0.02);
   Data__649->SetEntries(12843.93);
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
   hframe_copy__650->SetMaximum(517.2951);
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
   hframe_copy__651->SetMaximum(517.2951);
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
