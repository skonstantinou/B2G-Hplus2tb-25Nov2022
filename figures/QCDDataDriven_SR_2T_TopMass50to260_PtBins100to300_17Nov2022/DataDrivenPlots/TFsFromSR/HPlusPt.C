void HPlusPt()
{
//=========Macro generated from canvas: HPlusPt/HPlusPt
//=========  (Fri Nov 18 13:28:12 2022) by ROOT version 6.20/02
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
   0.1500234,
   0.08254849,
   0.06191099,
   0.0490163,
   0.03737486,
   0.02925724,
   0.02516402,
   0.02248411,
   0.02153076,
   0.02147978,
   0.02236247,
   0.02467898,
   0.02733361,
   0.03013599,
   0.03518785,
   0.04060955,
   0.03422916,
   0.04844575,
   0.06516494,
   0.09359895,
   0.1161756,
   0.1919359,
   0.2751431};
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
   0.1500234,
   0.08254849,
   0.06191099,
   0.0490163,
   0.03737486,
   0.02925724,
   0.02516402,
   0.02248411,
   0.02153076,
   0.02147978,
   0.02236247,
   0.02467898,
   0.02733361,
   0.03013599,
   0.03518785,
   0.04060955,
   0.03422916,
   0.04844575,
   0.06516494,
   0.09359895,
   0.1161756,
   0.1919359,
   0.2751431};
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
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMinimum(0.6698283);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMaximum(1.330172);
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
   0.1500234,
   0.08254849,
   0,
   0.06191099,
   0.0490163,
   0.03737486,
   0.02925724,
   0,
   0.02516402,
   0.02248411,
   0.02153076,
   0.02147978,
   0,
   0.02236247,
   0.02467898,
   0.02733361,
   0.03013599,
   0,
   0.03518785,
   0.04060955,
   0.03422916,
   0.04844575,
   0.06516494,
   0.09359895,
   0.1161756,
   0.1919359,
   0.2751431};
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
   0.1500234,
   0.08254849,
   0,
   0.06191099,
   0.0490163,
   0.03737486,
   0.02925724,
   0,
   0.02516402,
   0.02248411,
   0.02153076,
   0.02147978,
   0,
   0.02236247,
   0.02467898,
   0.02733361,
   0.03013599,
   0,
   0.03518785,
   0.04060955,
   0.03422916,
   0.04844575,
   0.06516494,
   0.09359895,
   0.1161756,
   0.1919359,
   0.2751431};
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
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMinimum(0.6698283);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMaximum(1.330172);
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
   
   Double_t Graph1_fx3377[3] = {
   10,
   750,
   850};
   Double_t Graph1_fy3377[3] = {
   1.066531,
   0.04942058,
   1.673657};
   Double_t Graph1_felx3377[3] = {
   10,
   50,
   50};
   Double_t Graph1_fely3377[3] = {
   0.1451365,
   0.04942058,
   0.3742411};
   Double_t Graph1_fehx3377[3] = {
   10,
   50,
   50};
   Double_t Graph1_fehy3377[3] = {
   0.1451365,
   0.04942058,
   0.3742411};
   grae = new TGraphAsymmErrors(3,Graph1_fx3377,Graph1_fy3377,Graph1_felx3377,Graph1_fehx3377,Graph1_fely3377,Graph1_fehy3377);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1336933733377 = new TH1F("Graph_Graph_Graph_Graph1336933733377","Graph",100,0,990);
   Graph_Graph_Graph_Graph1336933733377->SetMinimum(-0.2047898);
   Graph_Graph_Graph_Graph1336933733377->SetMaximum(2.252688);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0-800");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   HPlusPt_1->Range(-162.0253,-2.103225,850.6329,3.058015);
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
   hframe__647->SetMaximum(560.1972);
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
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMinimum(0.03130735);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMaximum(125.2294);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.06541079);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.2947786);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.5479057);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.7705249);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1.192617);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.848638);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,2.171937);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,2.694472);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,3.013102);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,2.825515);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,2.774981);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,2.334121);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,1.778399);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,1.810629);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,1.348856);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.8719292);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.5875563);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.3595028);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.1886885);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.09603619);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.03784553);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.01351735);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.003252631);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.0168054);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.04674605);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.05600481);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.07110249);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.09422284);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.1338965);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.14667);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.141413);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.1389596);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.1418521);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.1373761);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.1206863);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.1116891);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.1185425);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.09654682);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.08548404);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.04136033);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.03113311);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.02215611);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.0198791);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.005875003);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.003887112);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.004955115);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3843.266);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.9498786);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,2.750395);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,5.679958);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,9.590294);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,15.02309);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,22.47887);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,31.9689);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,37.74144);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,40.95602);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,39.93993);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,36.08414);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,30.46226);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,25.5528);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,21.02891);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,16.37492);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,12.53549);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,6.659869);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,3.675547);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,1.860796);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.9209682);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.3205559);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.08860204);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.04463714);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.05256);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.0882694);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1281946);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1679335);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.2121989);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.2611292);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.312904);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.3422358);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.357265);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.3528949);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.3363298);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.3082982);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.2831642);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.2566976);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.2261839);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.1983813);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.09097523);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.06782097);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.04809232);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.03387085);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.01364868);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.007126673);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.004973772);
   TT_stack_2_stack_2_stack_2->SetEntries(119915);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1.516283);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,5.650703);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8.644915);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,11.00188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,18.86466);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,29.55799);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,30.40152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,37.83247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,34.09865);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,34.31344);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,32.92057);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,24.00257);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,20.18493);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,15.18488);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,10.01661);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,8.246381);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,5.6568);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,2.605004);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,1.459644);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.7950603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.2961688);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.1002254);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.07160903);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.3757651);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.7108483);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.9100994);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.031118);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.290403);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.548988);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.586955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.720394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.636562);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,1.61136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,1.563517);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,1.36208);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,1.262613);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,1.110473);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.9446368);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.852406);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.430247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.3129067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.2224572);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.1649977);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.07457917);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.03797937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.03212094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4199.979);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(1,0.1385625);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(2,0.3254585);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(4,0.6100533);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(5,0.9799693);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(6,1.302744);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(7,1.403036);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(9,1.724724);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(10,2.144407);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(11,2.148969);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(12,2.189397);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(14,2.311928);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(15,2.381189);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(16,2.067653);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(17,1.956578);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(19,1.813499);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(20,1.513904);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(21,0.9128339);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(22,0.5981933);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(23,0.2821587);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(24,0.1466968);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(25,0.04148215);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(26,0.01837504);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(27,0.007053906);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(1,0.0228033);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(2,0.0409829);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(4,0.05380133);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(5,0.06499504);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(6,0.07467091);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(7,0.08383679);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(9,0.09029743);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(10,0.09546687);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(11,0.09995116);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(12,0.1021393);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(14,0.1027338);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(15,0.1019497);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(16,0.09869637);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(17,0.09575161);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(19,0.09173518);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(20,0.08543458);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(21,0.04307912);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(22,0.03378203);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(23,0.02525145);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(24,0.01845562);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(25,0.008284282);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(26,0.004540943);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(27,0.002796668);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetEntries(6121.385);
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
   2.531573,
   8.695877,
   0,
   14.87278,
   21.3627,
   35.08036,
   53.88549,
   0,
   64.54236,
   78.26838,
   78.06776,
   77.07889,
   0,
   71.77969,
   56.79894,
   47.51612,
   38.02442,
   0,
   27.74039,
   21.6538,
   12.90423,
   6.640053,
   3.509129,
   1.812065,
   0.6545703,
   0.2023448,
   0.1194988};
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
   0.3797952,
   0.7178315,
   0,
   0.9207884,
   1.04712,
   1.311124,
   1.576541,
   0,
   1.624145,
   1.759795,
   1.680858,
   1.655638,
   0,
   1.605172,
   1.40174,
   1.298787,
   1.145904,
   0,
   0.9761246,
   0.8793513,
   0.4417008,
   0.3216824,
   0.2286722,
   0.1696073,
   0.07604508,
   0.03883724,
   0.03287927};
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
   0.3797952,
   0.7178315,
   0,
   0.9207884,
   1.04712,
   1.311124,
   1.576541,
   0,
   1.624145,
   1.759795,
   1.680858,
   1.655638,
   0,
   1.605172,
   1.40174,
   1.298787,
   1.145904,
   0,
   0.9761246,
   0.8793513,
   0.4417008,
   0.3216824,
   0.2286722,
   0.1696073,
   0.07604508,
   0.03883724,
   0.03287927};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMinimum(0.08803099);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMaximum(88.03099);
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
   Data__649->SetBinContent(1,2.7);
   Data__649->SetBinContent(26,0.01);
   Data__649->SetBinContent(27,0.2);
   Data__649->SetBinError(1,0.3674235);
   Data__649->SetBinError(26,0.01);
   Data__649->SetBinError(27,0.04472136);
   Data__649->SetEntries(61.76587);
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
   TLine *line = new TLine(750,0.01,750,0.02);
   line->SetLineWidth(2);
   line->Draw();
      tex = new TLatex(0.19,0.885,"Data blinded in");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.19,0.85,"signal region");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   hframe_copy__650->SetMaximum(560.1972);
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
   hframe_copy__651->SetMaximum(560.1972);
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
   HPlusPt_1->Modified();
   HPlusPt->cd();
   HPlusPt->Modified();
   HPlusPt->cd();
   HPlusPt->SetSelected(HPlusPt);
}
