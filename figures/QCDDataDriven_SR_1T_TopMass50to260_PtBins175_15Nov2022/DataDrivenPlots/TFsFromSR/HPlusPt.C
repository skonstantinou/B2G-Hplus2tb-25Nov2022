void HPlusPt()
{
//=========Macro generated from canvas: HPlusPt/HPlusPt
//=========  (Fri Nov 18 13:27:56 2022) by ROOT version 6.20/02
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
   0.1377473,
   0.07108924,
   0.05284303,
   0.04457566,
   0.03852879,
   0.03546437,
   0.03241409,
   0.03155896,
   0.0331676,
   0.03509415,
   0.04004106,
   0.04675064,
   0.05105183,
   0.05863072,
   0.07335488,
   0.08150214,
   0.07155367,
   0.09793733,
   0.1415202,
   0.1808997,
   0.1813062,
   0.2857592,
   0.3153009};
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
   0.1377473,
   0.07108924,
   0.05284303,
   0.04457566,
   0.03852879,
   0.03546437,
   0.03241409,
   0.03155896,
   0.0331676,
   0.03509415,
   0.04004106,
   0.04675064,
   0.05105183,
   0.05863072,
   0.07335488,
   0.08150214,
   0.07155367,
   0.09793733,
   0.1415202,
   0.1808997,
   0.1813062,
   0.2857592,
   0.3153009};
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
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMinimum(0.6216389);
   Graph_Graph_Graph_BackgroundStatSystError336733713375->SetMaximum(1.378361);
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
   0.1377473,
   0.07108924,
   0,
   0.05284303,
   0.04457566,
   0.03852879,
   0.03546437,
   0,
   0.03241409,
   0.03155896,
   0.0331676,
   0.03509415,
   0,
   0.04004106,
   0.04675064,
   0.05105183,
   0.05863072,
   0,
   0.07335488,
   0.08150214,
   0.07155367,
   0.09793733,
   0.1415202,
   0.1808997,
   0.1813062,
   0.2857592,
   0.3153009};
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
   0.1377473,
   0.07108924,
   0,
   0.05284303,
   0.04457566,
   0.03852879,
   0.03546437,
   0,
   0.03241409,
   0.03155896,
   0.0331676,
   0.03509415,
   0,
   0.04004106,
   0.04675064,
   0.05105183,
   0.05863072,
   0,
   0.07335488,
   0.08150214,
   0.07155367,
   0.09793733,
   0.1415202,
   0.1808997,
   0.1813062,
   0.2857592,
   0.3153009};
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
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMinimum(0.6216389);
   Graph_Graph_Graph_BackgroundStatError336833723376->SetMaximum(1.378361);
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
   1.620196,
   0.2658693,
   0.7292647};
   Double_t Graph1_felx3377[3] = {
   10,
   50,
   50};
   Double_t Graph1_fely3377[3] = {
   0.1896296,
   0.1534997,
   0.2977211};
   Double_t Graph1_fehx3377[3] = {
   10,
   50,
   50};
   Double_t Graph1_fehy3377[3] = {
   0.1896296,
   0.1534997,
   0.2977211};
   grae = new TGraphAsymmErrors(3,Graph1_fx3377,Graph1_fy3377,Graph1_felx3377,Graph1_fehx3377,Graph1_fely3377,Graph1_fehy3377);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1336933733377 = new TH1F("Graph_Graph_Graph_Graph1336933733377","Graph",100,0,990);
   Graph_Graph_Graph_Graph1336933733377->SetMinimum(0.1011326);
   Graph_Graph_Graph_Graph1336933733377->SetMaximum(1.979571);
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
   HPlusPt_1->Range(-162.0253,-2.097686,850.6329,2.786593);
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
   hframe__647->SetMaximum(311.5562);
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
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMinimum(0.01725855);
   StackedMCstackHist_stack_91_stack_92_stack_93->SetMaximum(69.0342);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.06955768);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.2857565);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.4489378);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.6160887);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.8737084);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.029626);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1.024282);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.9950503);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.9399683);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.001138);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.6729367);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.5400866);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.3825208);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.3861697);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.2346041);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.200684);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(21,0.139487);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(22,0.06454721);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,0.03822728);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,0.02439271);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,0.01041325);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,0.005006498);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,0.002030668);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.02046131);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.0424391);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.05720589);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.07432618);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.08605169);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.09161192);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.08380565);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.08377067);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.07698271);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.08686922);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.07428117);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.05908743);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.05404631);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.04825073);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.04040078);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.03699598);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(21,0.02169894);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(22,0.01138566);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.0114856);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,0.009813976);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,0.002864609);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,0.003252704);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,0.0008140953);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1376.47);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.9670115);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,3.172905);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,5.241533);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,7.897983);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,10.59038);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,12.75311);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,14.75786);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,14.44216);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,12.70866);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,11.05376);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,8.515738);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,6.605471);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,4.856264);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,3.502183);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,2.537248);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1.962682);
   TT_stack_2_stack_2_stack_2->SetBinContent(21,1.041824);
   TT_stack_2_stack_2_stack_2->SetBinContent(22,0.5500481);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,0.265307);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,0.1859149);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,0.08426226);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,0.02115843);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,0.01896021);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.05467721);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.09949718);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.128071);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1579702);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1838583);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.2010634);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.2170084);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.214697);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.2005041);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.1884644);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.1646738);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.1453262);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.1248651);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.1067332);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.08985985);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.0802548);
   TT_stack_2_stack_2_stack_2->SetBinError(21,0.03683755);
   TT_stack_2_stack_2_stack_2->SetBinError(22,0.02642205);
   TT_stack_2_stack_2_stack_2->SetBinError(23,0.01794794);
   TT_stack_2_stack_2_stack_2->SetBinError(24,0.01526783);
   TT_stack_2_stack_2_stack_2->SetBinError(25,0.007158704);
   TT_stack_2_stack_2_stack_2->SetBinError(26,0.003560078);
   TT_stack_2_stack_2_stack_2->SetBinError(27,0.003135577);
   TT_stack_2_stack_2_stack_2->SetEntries(39275.33);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1.216245);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,4.82808);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10.29973);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,13.35397);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,18.45558);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,21.57855);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,25.6827);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,27.70916);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,25.70037);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,21.84881);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,17.37669);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,12.08642);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,10.35001);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,8.315803);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,4.917037);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,3.93782);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(21,1.937945);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(22,1.088161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,0.4764822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,0.2565386);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,0.1259884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,0.08667248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,0.06128377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.304778);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.5790819);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.833247);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.959021);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.134754);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.234448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.32376);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.34201);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.287318);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,1.171585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,1.048253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.8853152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.7841195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.7058861);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.5553456);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.4893442);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(21,0.2190612);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(22,0.1642628);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,0.108312);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,0.08247895);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,0.03925767);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,0.03188169);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,0.0257382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3560.353);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(1,0.08768131);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(2,0.3080657);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(4,0.4763098);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(5,0.6639562);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(6,0.825521);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(7,0.7013631);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(9,0.7556883);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(10,0.8142074);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(11,0.7468053);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(12,0.652297);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(14,0.5606072);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(15,0.4403431);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(16,0.4433996);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(17,0.3234783);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(19,0.3455755);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(20,0.3076724);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(21,0.1109454);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(22,0.06055754);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(23,0.02977792);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(24,0.02984162);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(25,0.006922995);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(26,-0.00163809);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinContent(27,-0.0006744179);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(1,0.02151263);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(2,0.03830163);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(4,0.04677257);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(5,0.05378033);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(6,0.05912329);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(7,0.05946209);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(9,0.06040408);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(10,0.05953294);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(11,0.05845889);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(12,0.05614);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(14,0.05204458);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(15,0.04810995);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(16,0.04485919);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(17,0.04382061);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(19,0.03937923);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(20,0.03602927);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(21,0.01780391);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(22,0.01403533);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(23,0.0105609);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(24,0.007082278);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(25,0.003598554);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(26,0.002060047);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetBinError(27,0.001252924);
   ChargedHiggs_HplusTBHplusToTB_M_800__648->SetEntries(1873.191);
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
   2.252814,
   8.286741,
   0,
   15.9902,
   21.86804,
   29.91966,
   35.36129,
   0,
   41.46484,
   43.14637,
   39.34899,
   33.90371,
   0,
   26.56537,
   19.23198,
   15.58879,
   12.20415,
   0,
   7.688889,
   6.101187,
   3.119256,
   1.702756,
   0.7800165,
   0.4668461,
   0.2206639,
   0.1128374,
   0.08227465};
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
   0.310319,
   0.5890982,
   0,
   0.8449706,
   0.9747821,
   1.152769,
   1.254066,
   0,
   1.344045,
   1.361655,
   1.305112,
   1.189822,
   0,
   1.063706,
   0.8991073,
   0.7958364,
   0.7155384,
   0,
   0.5640175,
   0.4972598,
   0.2231942,
   0.1667634,
   0.1103881,
   0.08445235,
   0.04000772,
   0.03224433,
   0.02594127};
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
   0.310319,
   0.5890982,
   0,
   0.8449706,
   0.9747821,
   1.152769,
   1.254066,
   0,
   1.344045,
   1.361655,
   1.305112,
   1.189822,
   0,
   1.063706,
   0.8991073,
   0.7958364,
   0.7155384,
   0,
   0.5640175,
   0.4972598,
   0.2231942,
   0.1667634,
   0.1103881,
   0.08445235,
   0.04000772,
   0.03224433,
   0.02594127};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMinimum(0.04895883);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors337033743378->SetMaximum(48.95883);
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
   Data__649->SetBinContent(1,3.65);
   Data__649->SetBinContent(26,0.03);
   Data__649->SetBinContent(27,0.06);
   Data__649->SetBinError(1,0.4272002);
   Data__649->SetBinError(26,0.01732051);
   Data__649->SetBinError(27,0.0244949);
   Data__649->SetEntries(76.26827);
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
   hframe_copy__650->SetMaximum(311.5562);
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
   hframe_copy__651->SetMaximum(311.5562);
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
