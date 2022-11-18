void HPlusPt()
{
//=========Macro generated from canvas: HPlusPt/HPlusPt
//=========  (Fri Nov 18 13:28:51 2022) by ROOT version 6.20/02
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
   0.06770298,
   0.03874297,
   0.02836313,
   0.02148492,
   0.01645962,
   0.01285648,
   0.01065522,
   0.009293369,
   0.008675857,
   0.008655549,
   0.008997134,
   0.009851771,
   0.01074763,
   0.0120779,
   0.01398878,
   0.01634974,
   0.01447859,
   0.02117177,
   0.03249213,
   0.05333684,
   0.07430906,
   0.202281,
   0.2256005};
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
   0.06770298,
   0.03874297,
   0.02836313,
   0.02148492,
   0.01645962,
   0.01285648,
   0.01065522,
   0.009293369,
   0.008675857,
   0.008655549,
   0.008997134,
   0.009851771,
   0.01074763,
   0.0120779,
   0.01398878,
   0.01634974,
   0.01447859,
   0.02117177,
   0.03249213,
   0.05333684,
   0.07430906,
   0.202281,
   0.2256005};
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
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMinimum(0.7292794);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMaximum(1.270721);
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
   0.06770298,
   0.03874297,
   0,
   0.02836313,
   0.02148492,
   0.01645962,
   0.01285648,
   0,
   0.01065522,
   0.009293369,
   0.008675857,
   0.008655549,
   0,
   0.008997134,
   0.009851771,
   0.01074763,
   0.0120779,
   0,
   0.01398878,
   0.01634974,
   0.01447859,
   0.02117177,
   0.03249213,
   0.05333684,
   0.07430906,
   0.202281,
   0.2256005};
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
   0.06770298,
   0.03874297,
   0,
   0.02836313,
   0.02148492,
   0.01645962,
   0.01285648,
   0,
   0.01065522,
   0.009293369,
   0.008675857,
   0.008655549,
   0,
   0.008997134,
   0.009851771,
   0.01074763,
   0.0120779,
   0,
   0.01398878,
   0.01634974,
   0.01447859,
   0.02117177,
   0.03249213,
   0.05333684,
   0.07430906,
   0.202281,
   0.2256005};
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
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMinimum(0.7292794);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMaximum(1.270721);
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
   0.8511754,
   0.9802394,
   1.012102,
   0.9500579,
   0.9310057,
   0.8899959,
   0.9198146,
   0.8869075,
   0.9261709,
   0.9319173,
   0.9518126,
   0.9895893,
   0.9774551,
   0.9415201,
   0.962115,
   1.028767,
   1.010875,
   0.9945087,
   1.02317,
   0.9705652,
   0.9412968,
   0.5539391,
   0.4586124};
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
   0.07245686,
   0.04432795,
   0.03425445,
   0.02627921,
   0.02129717,
   0.01727903,
   0.01523741,
   0.01352836,
   0.01336813,
   0.01356458,
   0.01444131,
   0.01614057,
   0.01782206,
   0.01980064,
   0.02293352,
   0.02759368,
   0.02451012,
   0.03505183,
   0.05283627,
   0.08005087,
   0.09760793,
   0.1670189,
   0.1872277};
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
   0.07245686,
   0.04432795,
   0.03425445,
   0.02627921,
   0.02129717,
   0.01727903,
   0.01523741,
   0.01352836,
   0.01336813,
   0.01356458,
   0.01444131,
   0.01614057,
   0.01782206,
   0.01980064,
   0.02293352,
   0.02759368,
   0.02451012,
   0.03505183,
   0.05283627,
   0.08005087,
   0.09760793,
   0.1670189,
   0.1872277};
   grae = new TGraphAsymmErrors(23,Graph1_fx3377,Graph1_fy3377,Graph1_felx3377,Graph1_fehx3377,Graph1_fely3377,Graph1_fehy3377);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1336933733377 = new TH1F("Graph_Graph_Graph_Graph1336933733377","Graph",100,0,990);
   Graph_Graph_Graph_Graph1336933733377->SetMinimum(0.1909225);
   Graph_Graph_Graph_Graph1336933733377->SetMaximum(1.156468);
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
   HPlusPt_1->Range(-162.0253,-2.114399,850.6329,3.605568);
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
   hframe__647->SetMaximum(1829.657);
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
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMinimum(0.1036526);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMaximum(414.6103);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.1401879);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.688309);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.109506);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1.591804);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,2.811596);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,3.301026);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,4.981553);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,5.802224);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,6.033343);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,5.680963);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,5.500912);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,4.833125);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,3.866103);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,3.25085);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,2.38908);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,2.064285);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,1.052491);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.4913124);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.2524329);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.1135878);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.03403112);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.009064563);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.008372286);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.05111521);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.07425462);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.1016444);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.1224861);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.1929118);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.1796086);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.2594853);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.2445678);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.2532234);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.2582165);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.2412789);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.2483566);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.2235159);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.1940778);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.1671329);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.1462207);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.06836823);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.04872153);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.03306743);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.02362753);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.00875123);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.002762064);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.004047791);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5006.565);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,5.448437);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,16.90376);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,30.85245);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,49.93728);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,77.13081);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,115.287);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,158.8015);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,197.5258);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,215.0568);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,210.7549);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,189.9745);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,158.6789);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,129.791);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,102.522);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,78.18848);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,57.93775);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,29.16827);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,14.25023);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,6.169731);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,2.519036);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.7129192);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.1088099);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.05391763);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.1175616);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.2080003);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.2823852);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.3627837);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.4553363);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.5600002);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.660881);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.7398289);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.7741165);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.7669563);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.7280956);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.6649798);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.5989189);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.5306827);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.4621268);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.3975397);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.1782832);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.1249039);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.08236036);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.05221204);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.0197163);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.007645016);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.005478118);
   TT_stack_2_stack_2_stack_2->SetEntries(682501.9);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,2.517813);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,7.350816);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11.16612);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,17.25619);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,22.68855);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,30.45754);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,34.30036);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,38.97458);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,38.0413);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,36.8055);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,32.72073);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,26.41529);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,20.21181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,14.29889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,10.8876);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,7.554564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,3.433245);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,1.447358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.9079967);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.3965395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.2410485);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.08070332);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.06853951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.5336486);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.9407852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.185859);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.42738);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.615263);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.823724);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.987618);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,2.112694);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,2.095464);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,2.037085);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,1.90445);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,1.731246);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,1.525172);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,1.335603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,1.181351);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,1.020086);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.4482918);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.3154381);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.2210191);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.1510603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.07017676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.03933745);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.02871849);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3125.801);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(1,0.009947);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(2,0.05835425);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(4,0.06795912);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(5,0.1084671);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(6,0.2134802);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(7,0.2147028);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(9,0.2496009);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(10,0.3212617);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(11,0.340493);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(12,0.4373981);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(14,0.3772963);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(15,0.5386622);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(16,0.4209661);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(17,0.3666167);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(19,0.3489558);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(20,0.325795);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(21,0.2157653);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(22,0.08205619);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(23,0.05235241);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(24,0.01011889);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(25,0.009981963);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(26,-0.002492049);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(27,-0.0007756683);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(1,0.01043983);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(2,0.01930078);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(4,0.02369372);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(5,0.02884896);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(6,0.03429795);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(7,0.03773248);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(9,0.0425019);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(10,0.04550458);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(11,0.04716247);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(12,0.04837732);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(14,0.04970926);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(15,0.05094426);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(16,0.0502622);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(17,0.04919643);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(19,0.04760395);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(20,0.04626937);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(21,0.02207171);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(22,0.01672725);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(23,0.01156);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(24,0.008085311);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(25,0.003296002);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(26,0.00173986);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(27,0.001208852);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetEntries(802.4496);
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
   8.106438,
   24.94289,
   0,
   43.12808,
   68.78528,
   102.631,
   149.0456,
   0,
   198.0834,
   242.3026,
   259.1314,
   253.2414,
   0,
   228.1962,
   189.9273,
   153.869,
   120.0718,
   0,
   91.46516,
   67.5566,
   33.654,
   16.1889,
   7.33016,
   3.029163,
   0.9879987,
   0.1985778,
   0.1308294};
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
   0.54883,
   0.9663616,
   0,
   1.223247,
   1.477846,
   1.689266,
   1.916202,
   0,
   2.110621,
   2.251807,
   2.248187,
   2.191943,
   0,
   2.053112,
   1.87112,
   1.653727,
   1.450215,
   0,
   1.279486,
   1.104533,
   0.4872624,
   0.3427477,
   0.2381725,
   0.161566,
   0.07341726,
   0.04016852,
   0.02951518};
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
   0.54883,
   0.9663616,
   0,
   1.223247,
   1.477846,
   1.689266,
   1.916202,
   0,
   2.110621,
   2.251807,
   2.248187,
   2.191943,
   0,
   2.053112,
   1.87112,
   1.653727,
   1.450215,
   0,
   1.279486,
   1.104533,
   0.4872624,
   0.3427477,
   0.2381725,
   0.161566,
   0.07341726,
   0.04016852,
   0.02951518};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMinimum(0.2875176);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMaximum(287.5176);
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
   Data__649->SetBinContent(1,6.9);
   Data__649->SetBinContent(2,24.45);
   Data__649->SetBinContent(4,43.65);
   Data__649->SetBinContent(5,65.35);
   Data__649->SetBinContent(6,95.55);
   Data__649->SetBinContent(7,132.65);
   Data__649->SetBinContent(9,182.2);
   Data__649->SetBinContent(10,214.9);
   Data__649->SetBinContent(11,240);
   Data__649->SetBinContent(12,236);
   Data__649->SetBinContent(14,217.2);
   Data__649->SetBinContent(15,187.95);
   Data__649->SetBinContent(16,150.4);
   Data__649->SetBinContent(17,113.05);
   Data__649->SetBinContent(19,88);
   Data__649->SetBinContent(20,69.5);
   Data__649->SetBinContent(21,34.02);
   Data__649->SetBinContent(22,16.1);
   Data__649->SetBinContent(23,7.5);
   Data__649->SetBinContent(24,2.94);
   Data__649->SetBinContent(25,0.93);
   Data__649->SetBinContent(26,0.11);
   Data__649->SetBinContent(27,0.06);
   Data__649->SetBinError(1,0.587367);
   Data__649->SetBinError(2,1.105667);
   Data__649->SetBinError(4,1.477329);
   Data__649->SetBinError(5,1.807623);
   Data__649->SetBinError(6,2.185749);
   Data__649->SetBinError(7,2.575364);
   Data__649->SetBinError(9,3.018278);
   Data__649->SetBinError(10,3.277957);
   Data__649->SetBinError(11,3.464102);
   Data__649->SetBinError(12,3.435113);
   Data__649->SetBinError(14,3.295451);
   Data__649->SetBinError(15,3.065534);
   Data__649->SetBinError(16,2.742262);
   Data__649->SetBinError(17,2.377499);
   Data__649->SetBinError(19,2.097618);
   Data__649->SetBinError(20,1.864135);
   Data__649->SetBinError(21,0.8248636);
   Data__649->SetBinError(22,0.5674504);
   Data__649->SetBinError(23,0.3872983);
   Data__649->SetBinError(24,0.2424871);
   Data__649->SetBinError(25,0.09643651);
   Data__649->SetBinError(26,0.03316625);
   Data__649->SetBinError(27,0.0244949);
   Data__649->SetEntries(43345.76);
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
   hframe_copy__650->SetMaximum(1829.657);
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
   hframe_copy__651->SetMaximum(1829.657);
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
