void HPlusPt()
{
//=========Macro generated from canvas: HPlusPt/HPlusPt
//=========  (Fri Nov 18 13:28:05 2022) by ROOT version 6.20/02
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
   0.05343845,
   0.03094213,
   0.02459148,
   0.02167974,
   0.020149,
   0.01893585,
   0.01830671,
   0.01903046,
   0.01989391,
   0.02262301,
   0.0255721,
   0.0304016,
   0.03541265,
   0.0425596,
   0.04995819,
   0.0636227,
   0.05675934,
   0.08919347,
   0.1294627,
   0.1633441,
   0.2642858,
   0.36555,
   1.333137};
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
   0.05343845,
   0.03094213,
   0.02459148,
   0.02167974,
   0.020149,
   0.01893585,
   0.01830671,
   0.01903046,
   0.01989391,
   0.02262301,
   0.0255721,
   0.0304016,
   0.03541265,
   0.0425596,
   0.04995819,
   0.0636227,
   0.05675934,
   0.08919347,
   0.1294627,
   0.1633441,
   0.2642858,
   0.36555,
   1.333137};
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
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMinimum(-0.5997643);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMaximum(2.599764);
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
   0.05343845,
   0.03094213,
   0,
   0.02459148,
   0.02167974,
   0.020149,
   0.01893585,
   0,
   0.01830671,
   0.01903046,
   0.01989391,
   0.02262301,
   0,
   0.0255721,
   0.0304016,
   0.03541265,
   0.0425596,
   0,
   0.04995819,
   0.0636227,
   0.05675934,
   0.08919347,
   0.1294627,
   0.1633441,
   0.2642858,
   0.36555,
   1.333137};
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
   0.05343845,
   0.03094213,
   0,
   0.02459148,
   0.02167974,
   0.020149,
   0.01893585,
   0,
   0.01830671,
   0.01903046,
   0.01989391,
   0.02262301,
   0,
   0.0255721,
   0.0304016,
   0.03541265,
   0.0425596,
   0,
   0.04995819,
   0.0636227,
   0.05675934,
   0.08919347,
   0.1294627,
   0.1633441,
   0.2642858,
   0.36555,
   1.333137};
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
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMinimum(-0.5997643);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMaximum(2.599764);
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
   0.9897749,
   0.9835907,
   0.9978648,
   0.9882563,
   1.009692,
   0.9553372,
   0.8940226,
   1.000225,
   0.92685,
   0.9954247,
   1.02358,
   1.055908,
   1.014083,
   0.9987356,
   1.008353,
   1.014895,
   1.108469,
   1.136536,
   1.022287,
   0.8663941,
   1.148117,
   1.180537,
   6.037116};
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
   0.06813891,
   0.03906337,
   0.03094247,
   0.02684726,
   0.02478938,
   0.02256143,
   0.02091031,
   0.0233751,
   0.02336927,
   0.0278121,
   0.03194012,
   0.03868547,
   0.04447046,
   0.05285869,
   0.06429022,
   0.07783893,
   0.07373428,
   0.1191414,
   0.150728,
   0.1732788,
   0.3184303,
   0.4462009,
   3.018558};
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
   0.06813891,
   0.03906337,
   0.03094247,
   0.02684726,
   0.02478938,
   0.02256143,
   0.02091031,
   0.0233751,
   0.02336927,
   0.0278121,
   0.03194012,
   0.03868547,
   0.04447046,
   0.05285869,
   0.06429022,
   0.07783893,
   0.07373428,
   0.1191414,
   0.150728,
   0.1732788,
   0.3184303,
   0.4462009,
   3.018558};
   grae = new TGraphAsymmErrors(23,Graph1_fx3377,Graph1_fy3377,Graph1_felx3377,Graph1_fehx3377,Graph1_fely3377,Graph1_fehy3377);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1336933733377 = new TH1F("Graph_Graph_Graph_Graph1336933733377","Graph",100,0,990);
   Graph_Graph_Graph_Graph1336933733377->SetMinimum(0.6238038);
   Graph_Graph_Graph_Graph1336933733377->SetMaximum(9.89193);
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
   HPlusPt_1->Range(-162.0253,-2.105708,850.6329,3.179699);
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
   hframe__647->SetMaximum(728.7429);
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
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMinimum(0.04089382);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMaximum(163.5753);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.2694514);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.8346214);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.258337);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1.768529);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,2.23815);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,2.224849);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,2.368323);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,2.267147);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1.865446);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.854188);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1.377896);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.9362725);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.7125164);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.476225);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.5482467);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.2515071);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.1113101);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.0825918);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.03463364);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.01620687);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.007656537);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.0005337411);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.002293213);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.05206495);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.08929536);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.1496388);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.1691444);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.1706398);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.1463636);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.2124493);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.1420536);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.1331461);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.149601);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.1167445);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.09258403);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.08412445);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.07518238);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.07289474);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.0581519);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.02303515);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.01830334);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.01047501);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.004654316);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.003261538);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.00052358);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.002125076);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1763.521);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,6.750475);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,19.75102);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,32.42091);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,42.8794);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,51.46836);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,57.26012);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,61.102);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,57.81787);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,50.38003);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,40.30406);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,30.24732);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,21.56248);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,15.22307);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,10.67014);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,7.427663);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,4.796921);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,2.235296);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,1.030608);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.424654);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.2319044);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.06165339);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.01667929);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.005187689);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.141174);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.2416231);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.309772);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.3557527);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.3901644);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.4118421);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.4249194);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.4124344);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.3849471);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.3432657);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.2965025);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.2498007);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.2097336);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.1761624);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.1477908);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.1200558);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.05182958);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.03461914);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.0222304);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.01573365);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.005896572);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.003090361);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.001785629);
   TT_stack_2_stack_2_stack_2->SetEntries(175520.5);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,3.639064);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,11.64322);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,18.43203);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,23.90716);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,28.44726);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,34.35624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,38.76423);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,31.44438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,32.61184);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,22.18615);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,18.54185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,12.77895);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,9.703355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,6.726232);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,4.222203);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,3.32682);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,1.731089);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,0.4881566);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.4406556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.3289932);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.04391897);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.04208204);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,-0.0008552215);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.5493662);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.9633854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.234453);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.433104);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.599602);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.722371);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.81028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.686341);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.638267);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,1.406679);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,1.242671);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,1.038884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.8793719);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.7361412);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.5866918);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.5158879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.2243901);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.1373575);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.1138879);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.0928277);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.02915624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.02144749);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.008385487);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3583.306);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(1,0.02058375);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(2,0.04647152);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(4,0.09535099);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(5,0.1091844);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(6,0.1108307);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(7,0.1004768);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(9,0.1407457);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(10,0.1450321);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(11,0.09575015);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(12,0.1391457);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(14,0.1317436);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(15,0.09535716);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(16,0.06008242);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(17,0.1141839);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(19,0.06069495);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(20,0.06616759);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(21,0.03595879);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(22,-2.966925e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(23,0.004525837);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(24,0.0006191627);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(25,0.0006690326);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(26,-0.0003847488);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(1,0.01033759);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(2,0.01804739);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(4,0.02258346);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(5,0.02494746);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(6,0.02873725);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(7,0.02900028);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(9,0.02913068);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(10,0.02938993);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(11,0.02837593);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(12,0.02722473);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(14,0.02587729);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(15,0.02423697);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(16,0.0233566);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(17,0.02245477);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(19,0.02145789);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(20,0.02020589);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(21,0.009816012);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(22,0.006027926);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(23,0.004507511);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(24,0.002436108);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(25,0.001155441);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(26,0.0006696945);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetEntries(251.8449);
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
   10.65899,
   32.22886,
   0,
   52.11127,
   68.55509,
   82.15377,
   93.84121,
   0,
   102.2346,
   91.5294,
   84.85732,
   64.3444,
   0,
   50.16707,
   35.2777,
   25.63894,
   17.8726,
   0,
   12.19811,
   8.375247,
   4.077695,
   1.601357,
   0.8999432,
   0.5771046,
   0.1132289,
   0.05929507,
   0.00662568};
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
   0.5695999,
   0.9972296,
   0,
   1.281493,
   1.486256,
   1.655317,
   1.776963,
   0,
   1.871578,
   1.741846,
   1.688144,
   1.455664,
   0,
   1.282877,
   1.072498,
   0.9079428,
   0.7606507,
   0,
   0.6093956,
   0.5328558,
   0.2314473,
   0.1428306,
   0.1165091,
   0.0942666,
   0.02992479,
   0.02167531,
   0.008832939};
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
   0.5695999,
   0.9972296,
   0,
   1.281493,
   1.486256,
   1.655317,
   1.776963,
   0,
   1.871578,
   1.741846,
   1.688144,
   1.455664,
   0,
   1.282877,
   1.072498,
   0.9079428,
   0.7606507,
   0,
   0.6093956,
   0.5328558,
   0.2314473,
   0.1428306,
   0.1165091,
   0.0942666,
   0.02992479,
   0.02167531,
   0.008832939};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMinimum(0.1145167);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMaximum(114.5167);
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
   Data__649->SetBinContent(1,10.55);
   Data__649->SetBinContent(2,31.7);
   Data__649->SetBinContent(4,52);
   Data__649->SetBinContent(5,67.75);
   Data__649->SetBinContent(6,82.95);
   Data__649->SetBinContent(7,89.65);
   Data__649->SetBinContent(9,91.4);
   Data__649->SetBinContent(10,91.55);
   Data__649->SetBinContent(11,78.65);
   Data__649->SetBinContent(12,64.05);
   Data__649->SetBinContent(14,51.35);
   Data__649->SetBinContent(15,37.25);
   Data__649->SetBinContent(16,26);
   Data__649->SetBinContent(17,17.85);
   Data__649->SetBinContent(19,12.3);
   Data__649->SetBinContent(20,8.5);
   Data__649->SetBinContent(21,4.52);
   Data__649->SetBinContent(22,1.82);
   Data__649->SetBinContent(23,0.92);
   Data__649->SetBinContent(24,0.5);
   Data__649->SetBinContent(25,0.13);
   Data__649->SetBinContent(26,0.07);
   Data__649->SetBinContent(27,0.04);
   Data__649->SetBinError(1,0.726292);
   Data__649->SetBinError(2,1.258968);
   Data__649->SetBinError(4,1.612452);
   Data__649->SetBinError(5,1.840516);
   Data__649->SetBinError(6,2.036541);
   Data__649->SetBinError(7,2.117192);
   Data__649->SetBinError(9,2.137756);
   Data__649->SetBinError(10,2.139509);
   Data__649->SetBinError(11,1.983053);
   Data__649->SetBinError(12,1.789553);
   Data__649->SetBinError(14,1.602342);
   Data__649->SetBinError(15,1.364734);
   Data__649->SetBinError(16,1.140175);
   Data__649->SetBinError(17,0.9447222);
   Data__649->SetBinError(19,0.7842194);
   Data__649->SetBinError(20,0.6519202);
   Data__649->SetBinError(21,0.3006659);
   Data__649->SetBinError(22,0.1907878);
   Data__649->SetBinError(23,0.1356466);
   Data__649->SetBinError(24,0.1);
   Data__649->SetBinError(25,0.03605551);
   Data__649->SetBinError(26,0.02645751);
   Data__649->SetBinError(27,0.02);
   Data__649->SetEntries(16527.54);
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
   hframe_copy__650->SetMaximum(728.7429);
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
   hframe_copy__651->SetMaximum(728.7429);
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
