void BBPair_dRMin_Rbb()
{
//=========Macro generated from canvas: BBPair_dRMin_Rbb/BBPair_dRMin_Rbb
//=========  (Fri Nov 18 13:09:48 2022) by ROOT version 6.20/02
   TCanvas *BBPair_dRMin_Rbb = new TCanvas("BBPair_dRMin_Rbb", "BBPair_dRMin_Rbb",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   BBPair_dRMin_Rbb->SetHighLightColor(2);
   BBPair_dRMin_Rbb->Range(0,0,1,1);
   BBPair_dRMin_Rbb->SetFillColor(0);
   BBPair_dRMin_Rbb->SetBorderMode(0);
   BBPair_dRMin_Rbb->SetBorderSize(2);
   BBPair_dRMin_Rbb->SetTickx(1);
   BBPair_dRMin_Rbb->SetTicky(1);
   BBPair_dRMin_Rbb->SetLeftMargin(0.16);
   BBPair_dRMin_Rbb->SetRightMargin(0.05);
   BBPair_dRMin_Rbb->SetTopMargin(0.06);
   BBPair_dRMin_Rbb->SetBottomMargin(0.13);
   BBPair_dRMin_Rbb->SetFrameFillStyle(0);
   BBPair_dRMin_Rbb->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: BBPair_dRMin_Rbb_2
   TPad *BBPair_dRMin_Rbb_2 = new TPad("BBPair_dRMin_Rbb_2", "BBPair_dRMin_Rbb_2",0,0,1,0.304);
   BBPair_dRMin_Rbb_2->Draw();
   BBPair_dRMin_Rbb_2->cd();
   BBPair_dRMin_Rbb_2->Range(-0.7088607,-0.428,3.721519,1.7);
   BBPair_dRMin_Rbb_2->SetFillColor(0);
   BBPair_dRMin_Rbb_2->SetFillStyle(4000);
   BBPair_dRMin_Rbb_2->SetBorderMode(0);
   BBPair_dRMin_Rbb_2->SetBorderSize(2);
   BBPair_dRMin_Rbb_2->SetTickx(1);
   BBPair_dRMin_Rbb_2->SetTicky(1);
   BBPair_dRMin_Rbb_2->SetLeftMargin(0.16);
   BBPair_dRMin_Rbb_2->SetRightMargin(0.05);
   BBPair_dRMin_Rbb_2->SetTopMargin(0);
   BBPair_dRMin_Rbb_2->SetBottomMargin(0.3421053);
   BBPair_dRMin_Rbb_2->SetFrameFillStyle(0);
   BBPair_dRMin_Rbb_2->SetFrameBorderMode(0);
   BBPair_dRMin_Rbb_2->SetFrameFillStyle(0);
   BBPair_dRMin_Rbb_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1191 = new TH1F("hframe__1191","",1000,0,3.5);
   hframe__1191->SetMinimum(0.3);
   hframe__1191->SetMaximum(1.7);
   hframe__1191->SetDirectory(0);
   hframe__1191->SetStats(0);
   hframe__1191->SetLineStyle(0);
   hframe__1191->SetMarkerStyle(20);
   hframe__1191->GetXaxis()->SetNdivisions(8);
   hframe__1191->GetXaxis()->SetLabelFont(43);
   hframe__1191->GetXaxis()->SetLabelOffset(0.007);
   hframe__1191->GetXaxis()->SetLabelSize(27);
   hframe__1191->GetXaxis()->SetTitleSize(33);
   hframe__1191->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1191->GetXaxis()->SetTitleFont(43);
   hframe__1191->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1191->GetYaxis()->SetNdivisions(505);
   hframe__1191->GetYaxis()->SetLabelFont(43);
   hframe__1191->GetYaxis()->SetLabelOffset(0.007);
   hframe__1191->GetYaxis()->SetLabelSize(21);
   hframe__1191->GetYaxis()->SetTitleSize(33);
   hframe__1191->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1191->GetYaxis()->SetTitleFont(43);
   hframe__1191->GetZaxis()->SetLabelFont(43);
   hframe__1191->GetZaxis()->SetLabelOffset(0.007);
   hframe__1191->GetZaxis()->SetLabelSize(27);
   hframe__1191->GetZaxis()->SetTitleSize(33);
   hframe__1191->GetZaxis()->SetTitleOffset(1);
   hframe__1191->GetZaxis()->SetTitleFont(43);
   hframe__1191->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3723[11] = {
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.05,
   3.15,
   3.25};
   Double_t BackgroundStatSystError_fy3723[11] = {
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
   Double_t BackgroundStatSystError_felx3723[11] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fely3723[11] = {
   0.05802939,
   0.03066834,
   0.02513546,
   0.02204203,
   0.02096619,
   0.02306626,
   0.02583193,
   0.02753448,
   0.02835418,
   0.02948213,
   0.06693023};
   Double_t BackgroundStatSystError_fehx3723[11] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fehy3723[11] = {
   0.05802939,
   0.03066834,
   0.02513546,
   0.02204203,
   0.02096619,
   0.02306626,
   0.02583193,
   0.02753448,
   0.02835418,
   0.02948213,
   0.06693023};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,BackgroundStatSystError_fx3723,BackgroundStatSystError_fy3723,BackgroundStatSystError_felx3723,BackgroundStatSystError_fehx3723,BackgroundStatSystError_fely3723,BackgroundStatSystError_fehy3723);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1394;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError371537193723 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError371537193723","Graph",100,2.09,3.41);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetMinimum(0.9196837);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetMaximum(1.080316);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError371537193723);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3724[35] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.05,
   3.15,
   3.25,
   3.35,
   3.45};
   Double_t BackgroundStatError_fy3724[35] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3724[35] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatError_fely3724[35] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05802939,
   0.03066834,
   0.02513546,
   0.02204203,
   0.02096619,
   0.02306626,
   0.02583193,
   0.02753448,
   0.02835418,
   0.02948213,
   0.06693023,
   0,
   0};
   Double_t BackgroundStatError_fehx3724[35] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatError_fehy3724[35] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05802939,
   0.03066834,
   0.02513546,
   0.02204203,
   0.02096619,
   0.02306626,
   0.02583193,
   0.02753448,
   0.02835418,
   0.02948213,
   0.06693023,
   0,
   0};
   grae = new TGraphAsymmErrors(35,BackgroundStatError_fx3724,BackgroundStatError_fy3724,BackgroundStatError_felx3724,BackgroundStatError_fehx3724,BackgroundStatError_fely3724,BackgroundStatError_fehy3724);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1393;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError371637203724 = new TH1F("Graph_Graph_Graph_BackgroundStatError371637203724","Graph",100,0,3.85);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetMinimum(0.9196837);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetMaximum(1.080316);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError371637203724->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError371637203724);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx171[2] = {
   0,
   3.5};
   Double_t Graph0_fy171[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx171,Graph0_fy171);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0169170171 = new TH1F("Graph_Graph_Graph_Graph0169170171","Graph",100,0,3.85);
   Graph_Graph_Graph_Graph0169170171->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0169170171->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0169170171->SetDirectory(0);
   Graph_Graph_Graph_Graph0169170171->SetStats(0);
   Graph_Graph_Graph_Graph0169170171->SetLineStyle(0);
   Graph_Graph_Graph_Graph0169170171->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0169170171->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0169170171->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0169170171->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0169170171);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3725[11] = {
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.05,
   3.15,
   3.25};
   Double_t Graph1_fy3725[11] = {
   0.9632046,
   0.9932601,
   0.9374622,
   0.9607572,
   0.9606493,
   0.9191938,
   0.9175135,
   0.9882648,
   0.9291802,
   0.9616705,
   0.9206454};
   Double_t Graph1_felx3725[11] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fely3725[11] = {
   0.06031821,
   0.03220867,
   0.02513566,
   0.02230102,
   0.02097808,
   0.02256072,
   0.02546684,
   0.02814439,
   0.02783924,
   0.02973449,
   0.06679064};
   Double_t Graph1_fehx3725[11] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fehy3725[11] = {
   0.06031821,
   0.03220867,
   0.02513566,
   0.02230102,
   0.02097808,
   0.02256072,
   0.02546684,
   0.02814439,
   0.02783924,
   0.02973449,
   0.06679064};
   grae = new TGraphAsymmErrors(11,Graph1_fx3725,Graph1_fy3725,Graph1_felx3725,Graph1_fehx3725,Graph1_fely3725,Graph1_fehy3725);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1371737213725 = new TH1F("Graph_Graph_Graph_Graph1371737213725","Graph",100,2.09,3.41);
   Graph_Graph_Graph_Graph1371737213725->SetMinimum(0.8366934);
   Graph_Graph_Graph_Graph1371737213725->SetMaximum(1.04263);
   Graph_Graph_Graph_Graph1371737213725->SetDirectory(0);
   Graph_Graph_Graph_Graph1371737213725->SetStats(0);
   Graph_Graph_Graph_Graph1371737213725->SetLineStyle(0);
   Graph_Graph_Graph_Graph1371737213725->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1371737213725->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1371737213725->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1371737213725->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1371737213725);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1192 = new TH1F("hframe_copy__1192","",1000,0,3.5);
   hframe_copy__1192->SetMinimum(0.3);
   hframe_copy__1192->SetMaximum(1.7);
   hframe_copy__1192->SetDirectory(0);
   hframe_copy__1192->SetStats(0);
   hframe_copy__1192->SetLineStyle(0);
   hframe_copy__1192->SetMarkerStyle(20);
   hframe_copy__1192->GetXaxis()->SetNdivisions(8);
   hframe_copy__1192->GetXaxis()->SetLabelFont(43);
   hframe_copy__1192->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1192->GetXaxis()->SetLabelSize(27);
   hframe_copy__1192->GetXaxis()->SetTitleSize(33);
   hframe_copy__1192->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1192->GetXaxis()->SetTitleFont(43);
   hframe_copy__1192->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1192->GetYaxis()->SetNdivisions(505);
   hframe_copy__1192->GetYaxis()->SetLabelFont(43);
   hframe_copy__1192->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1192->GetYaxis()->SetLabelSize(21);
   hframe_copy__1192->GetYaxis()->SetTitleSize(33);
   hframe_copy__1192->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1192->GetYaxis()->SetTitleFont(43);
   hframe_copy__1192->GetZaxis()->SetLabelFont(43);
   hframe_copy__1192->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1192->GetZaxis()->SetLabelSize(27);
   hframe_copy__1192->GetZaxis()->SetTitleSize(33);
   hframe_copy__1192->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1192->GetZaxis()->SetTitleFont(43);
   hframe_copy__1192->Draw("sameaxis");
   BBPair_dRMin_Rbb_2->Modified();
   BBPair_dRMin_Rbb->cd();
  
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
   BBPair_dRMin_Rbb->cd();
  
// ------------>Primitives in pad: BBPair_dRMin_Rbb_1
   TPad *BBPair_dRMin_Rbb_1 = new TPad("BBPair_dRMin_Rbb_1", "BBPair_dRMin_Rbb_1",0,0.2897959,1,1);
   BBPair_dRMin_Rbb_1->Draw();
   BBPair_dRMin_Rbb_1->cd();
   BBPair_dRMin_Rbb_1->Range(-0.7088607,-1.211911,3.721519,4.538146);
   BBPair_dRMin_Rbb_1->SetFillColor(0);
   BBPair_dRMin_Rbb_1->SetFillStyle(4000);
   BBPair_dRMin_Rbb_1->SetBorderMode(0);
   BBPair_dRMin_Rbb_1->SetBorderSize(2);
   BBPair_dRMin_Rbb_1->SetLogy();
   BBPair_dRMin_Rbb_1->SetTickx(1);
   BBPair_dRMin_Rbb_1->SetTicky(1);
   BBPair_dRMin_Rbb_1->SetLeftMargin(0.16);
   BBPair_dRMin_Rbb_1->SetRightMargin(0.05);
   BBPair_dRMin_Rbb_1->SetTopMargin(0.06);
   BBPair_dRMin_Rbb_1->SetBottomMargin(0.02);
   BBPair_dRMin_Rbb_1->SetFrameFillStyle(0);
   BBPair_dRMin_Rbb_1->SetFrameBorderMode(0);
   BBPair_dRMin_Rbb_1->SetFrameFillStyle(0);
   BBPair_dRMin_Rbb_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1193 = new TH1F("hframe__1193","",1000,0,3.5);
   hframe__1193->SetMinimum(0.08);
   hframe__1193->SetMaximum(15600.66);
   hframe__1193->SetDirectory(0);
   hframe__1193->SetStats(0);
   hframe__1193->SetLineStyle(0);
   hframe__1193->SetMarkerStyle(20);
   hframe__1193->GetXaxis()->SetNdivisions(8);
   hframe__1193->GetXaxis()->SetLabelFont(43);
   hframe__1193->GetXaxis()->SetLabelOffset(0.007);
   hframe__1193->GetXaxis()->SetLabelSize(0);
   hframe__1193->GetXaxis()->SetTitleSize(0);
   hframe__1193->GetXaxis()->SetTitleOffset(0.9);
   hframe__1193->GetXaxis()->SetTitleFont(43);
   hframe__1193->GetYaxis()->SetTitle("Events / 0");
   hframe__1193->GetYaxis()->SetLabelFont(43);
   hframe__1193->GetYaxis()->SetLabelOffset(0.007);
   hframe__1193->GetYaxis()->SetLabelSize(27);
   hframe__1193->GetYaxis()->SetTitleSize(33);
   hframe__1193->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1193->GetYaxis()->SetTitleFont(43);
   hframe__1193->GetZaxis()->SetLabelFont(43);
   hframe__1193->GetZaxis()->SetLabelOffset(0.007);
   hframe__1193->GetZaxis()->SetLabelSize(27);
   hframe__1193->GetZaxis()->SetTitleSize(33);
   hframe__1193->GetZaxis()->SetTitleOffset(1);
   hframe__1193->GetZaxis()->SetTitleFont(43);
   hframe__1193->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_169_stack_170_stack_171 = new TH1F("StackedMCstackHist_stack_169_stack_170_stack_171","StackedMCstackHist",35,0,3.5);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetMinimum(0.8731594);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetMaximum(3492.638);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetDirectory(0);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetStats(0);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetLineStyle(0);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetMarkerStyle(20);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_169_stack_170_stack_171->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_169_stack_170_stack_171);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_BBPair_dRMin_RbbInclusive",35,0,3.5);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,7.368896);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,21.02932);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,30.36051);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,43.60749);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,44.93237);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(28,35.73053);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(29,30.27246);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(30,21.69546);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(31,25.89372);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(32,20.49654);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(33,4.075623);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,1.258943);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,1.944115);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,2.3462);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,3.41075);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,3.667274);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(28,3.053686);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(29,2.35464);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(30,2.244393);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(31,2.171722);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(32,1.973993);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(33,0.9011482);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(45451);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,35);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_BBPair_dRMin_RbbInclusive",35,0,3.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(23,96.40098);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,330.4096);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,461.4323);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,547.1091);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,557.4052);
   TT_stack_2_stack_2_stack_2->SetBinContent(28,471.2039);
   TT_stack_2_stack_2_stack_2->SetBinContent(29,390.4396);
   TT_stack_2_stack_2_stack_2->SetBinContent(30,358.8874);
   TT_stack_2_stack_2_stack_2->SetBinContent(31,346.9698);
   TT_stack_2_stack_2_stack_2->SetBinContent(32,328.2399);
   TT_stack_2_stack_2_stack_2->SetBinContent(33,70.9632);
   TT_stack_2_stack_2_stack_2->SetBinError(23,2.381047);
   TT_stack_2_stack_2_stack_2->SetBinError(24,4.411956);
   TT_stack_2_stack_2_stack_2->SetBinError(25,5.217736);
   TT_stack_2_stack_2_stack_2->SetBinError(26,5.694639);
   TT_stack_2_stack_2_stack_2->SetBinError(27,5.744339);
   TT_stack_2_stack_2_stack_2->SetBinError(28,5.295006);
   TT_stack_2_stack_2_stack_2->SetBinError(29,4.80112);
   TT_stack_2_stack_2_stack_2->SetBinError(30,4.604525);
   TT_stack_2_stack_2_stack_2->SetBinError(31,4.527089);
   TT_stack_2_stack_2_stack_2->SetBinError(32,4.380197);
   TT_stack_2_stack_2_stack_2->SetBinError(33,2.041402);
   TT_stack_2_stack_2_stack_2->SetEntries(70981);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,35);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_BBPair_dRMin_RbbInclusive",35,0,3.5);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,160.9714);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,606.0142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,992.0003);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,1341.093);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,1580.561);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(28,1298.996);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(29,993.9811);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(30,867.0586);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(31,826.0427);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(32,738.9542);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(33,131.3381);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,15.12483);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,28.96498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,36.85443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,42.06044);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,45.25679);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(28,41.20516);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(29,36.1509);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(30,33.96911);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(31,33.62114);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(32,31.70549);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(33,13.63142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7515.688);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,35);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1194 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1194","h_SR_BBPair_dRMin_RbbInclusive",35,0,3.5);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(23,1.097196);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(24,2.063896);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(25,2.168602);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(26,3.008213);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(27,3.090136);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(28,1.447964);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(29,1.550881);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(30,2.591443);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(31,1.554677);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(32,2.410163);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(33,0.2776528);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(23,0.245684);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(24,0.5077464);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(25,0.5969259);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(26,0.6595658);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(27,0.657499);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(28,0.6235834);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(29,0.5916798);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(30,0.5272018);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(31,0.496533);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(32,0.5141792);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(33,0.2449526);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetEntries(4205);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetXaxis()->SetRange(1,35);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3726[35] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.05,
   3.15,
   3.25,
   3.35,
   3.45};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3726[35] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   264.7413,
   957.4531,
   1483.793,
   1931.81,
   2182.899,
   1805.93,
   1414.693,
   1247.641,
   1198.906,
   1087.691,
   206.377,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3726[35] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3726[35] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   15.36277,
   29.36349,
   37.29582,
   42.58101,
   45.76706,
   41.65606,
   36.54425,
   34.35315,
   33.994,
   32.06744,
   13.81286,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3726[35] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3726[35] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   15.36277,
   29.36349,
   37.29582,
   42.58101,
   45.76706,
   41.65606,
   36.54425,
   34.35315,
   33.994,
   32.06744,
   13.81286,
   0,
   0};
   grae = new TGraphAsymmErrors(35,BkgSum-SR-Inclusive_sum_errors_fx3726,BkgSum-SR-Inclusive_sum_errors_fy3726,BkgSum-SR-Inclusive_sum_errors_felx3726,BkgSum-SR-Inclusive_sum_errors_fehx3726,BkgSum-SR-Inclusive_sum_errors_fely3726,BkgSum-SR-Inclusive_sum_errors_fehy3726);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1392;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726","Graph",100,0,3.85);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetMinimum(2.451532);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetMaximum(2451.532);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors371837223726);
   
   grae->Draw("e2 ");
   
   TH1F *Data__1195 = new TH1F("Data__1195","h_SR_BBPair_dRMin_RbbInclusive",35,0,3.5);
   Data__1195->SetBinContent(23,255);
   Data__1195->SetBinContent(24,951);
   Data__1195->SetBinContent(25,1391);
   Data__1195->SetBinContent(26,1856);
   Data__1195->SetBinContent(27,2097);
   Data__1195->SetBinContent(28,1660);
   Data__1195->SetBinContent(29,1298);
   Data__1195->SetBinContent(30,1233);
   Data__1195->SetBinContent(31,1114);
   Data__1195->SetBinContent(32,1046);
   Data__1195->SetBinContent(33,190);
   Data__1195->SetBinError(23,15.96872);
   Data__1195->SetBinError(24,30.83829);
   Data__1195->SetBinError(25,37.29611);
   Data__1195->SetBinError(26,43.08132);
   Data__1195->SetBinError(27,45.79301);
   Data__1195->SetBinError(28,40.7431);
   Data__1195->SetBinError(29,36.02777);
   Data__1195->SetBinError(30,35.1141);
   Data__1195->SetBinError(31,33.37664);
   Data__1195->SetBinError(32,32.34192);
   Data__1195->SetBinError(33,13.78405);
   Data__1195->SetEntries(13095);
   Data__1195->SetDirectory(0);
   Data__1195->SetFillStyle(3001);
   Data__1195->SetLineWidth(2);
   Data__1195->SetMarkerStyle(20);
   Data__1195->SetMarkerSize(1.2);
   Data__1195->GetXaxis()->SetRange(1,35);
   Data__1195->GetXaxis()->SetLabelFont(42);
   Data__1195->GetXaxis()->SetTitleOffset(1);
   Data__1195->GetXaxis()->SetTitleFont(42);
   Data__1195->GetYaxis()->SetLabelFont(42);
   Data__1195->GetYaxis()->SetTitleFont(42);
   Data__1195->GetZaxis()->SetLabelFont(42);
   Data__1195->GetZaxis()->SetTitleOffset(1);
   Data__1195->GetZaxis()->SetTitleFont(42);
   Data__1195->Draw("EP same");
   
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

   ci = 1392;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1392;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1196 = new TH1F("hframe_copy__1196","",1000,0,3.5);
   hframe_copy__1196->SetMinimum(0.08);
   hframe_copy__1196->SetMaximum(15600.66);
   hframe_copy__1196->SetDirectory(0);
   hframe_copy__1196->SetStats(0);
   hframe_copy__1196->SetLineStyle(0);
   hframe_copy__1196->SetMarkerStyle(20);
   hframe_copy__1196->GetXaxis()->SetNdivisions(8);
   hframe_copy__1196->GetXaxis()->SetLabelFont(43);
   hframe_copy__1196->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1196->GetXaxis()->SetLabelSize(0);
   hframe_copy__1196->GetXaxis()->SetTitleSize(0);
   hframe_copy__1196->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1196->GetXaxis()->SetTitleFont(43);
   hframe_copy__1196->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1196->GetYaxis()->SetLabelFont(43);
   hframe_copy__1196->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1196->GetYaxis()->SetLabelSize(27);
   hframe_copy__1196->GetYaxis()->SetTitleSize(33);
   hframe_copy__1196->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1196->GetYaxis()->SetTitleFont(43);
   hframe_copy__1196->GetZaxis()->SetLabelFont(43);
   hframe_copy__1196->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1196->GetZaxis()->SetLabelSize(27);
   hframe_copy__1196->GetZaxis()->SetTitleSize(33);
   hframe_copy__1196->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1196->GetZaxis()->SetTitleFont(43);
   hframe_copy__1196->Draw("sameaxis");
   
   TH1F *hframe_copy__1197 = new TH1F("hframe_copy__1197","",1000,0,3.5);
   hframe_copy__1197->SetMinimum(0.08);
   hframe_copy__1197->SetMaximum(15600.66);
   hframe_copy__1197->SetDirectory(0);
   hframe_copy__1197->SetStats(0);
   hframe_copy__1197->SetLineStyle(0);
   hframe_copy__1197->SetMarkerStyle(20);
   hframe_copy__1197->GetXaxis()->SetNdivisions(8);
   hframe_copy__1197->GetXaxis()->SetLabelFont(43);
   hframe_copy__1197->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1197->GetXaxis()->SetLabelSize(0);
   hframe_copy__1197->GetXaxis()->SetTitleSize(0);
   hframe_copy__1197->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1197->GetXaxis()->SetTitleFont(43);
   hframe_copy__1197->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1197->GetYaxis()->SetLabelFont(43);
   hframe_copy__1197->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1197->GetYaxis()->SetLabelSize(27);
   hframe_copy__1197->GetYaxis()->SetTitleSize(33);
   hframe_copy__1197->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1197->GetYaxis()->SetTitleFont(43);
   hframe_copy__1197->GetZaxis()->SetLabelFont(43);
   hframe_copy__1197->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1197->GetZaxis()->SetLabelSize(27);
   hframe_copy__1197->GetZaxis()->SetTitleSize(33);
   hframe_copy__1197->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1197->GetZaxis()->SetTitleFont(43);
   hframe_copy__1197->Draw("sameaxis");
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
   BBPair_dRMin_Rbb_1->Modified();
   BBPair_dRMin_Rbb->cd();
   BBPair_dRMin_Rbb->Modified();
   BBPair_dRMin_Rbb->cd();
   BBPair_dRMin_Rbb->SetSelected(BBPair_dRMin_Rbb);
}
