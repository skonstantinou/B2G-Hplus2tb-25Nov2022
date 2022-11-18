void BBPair_dRMin_Rbb()
{
//=========Macro generated from canvas: BBPair_dRMin_Rbb/BBPair_dRMin_Rbb
//=========  (Fri Nov 18 13:07:23 2022) by ROOT version 6.20/02
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
   0.109144,
   0.05772053,
   0.04542092,
   0.03832951,
   0.03686511,
   0.03990344,
   0.04766304,
   0.04877117,
   0.04968008,
   0.05216476,
   0.132407};
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
   0.109144,
   0.05772053,
   0.04542092,
   0.03832951,
   0.03686511,
   0.03990344,
   0.04766304,
   0.04877117,
   0.04968008,
   0.05216476,
   0.132407};
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
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetMinimum(0.8411116);
   Graph_Graph_Graph_BackgroundStatSystError371537193723->SetMaximum(1.158888);
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
   0.109144,
   0.05772053,
   0.04542092,
   0.03832951,
   0.03686511,
   0.03990344,
   0.04766304,
   0.04877117,
   0.04968008,
   0.05216476,
   0.132407,
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
   0.109144,
   0.05772053,
   0.04542092,
   0.03832951,
   0.03686511,
   0.03990344,
   0.04766304,
   0.04877117,
   0.04968008,
   0.05216476,
   0.132407,
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
   Graph_Graph_Graph_BackgroundStatError371637203724->SetMinimum(0.8411116);
   Graph_Graph_Graph_BackgroundStatError371637203724->SetMaximum(1.158888);
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
   1.116026,
   1.019302,
   1.012584,
   0.9564869,
   1.018103,
   0.9751404,
   1.071268,
   0.9987456,
   0.9488684,
   1.011286,
   1.304994};
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
   0.08534463,
   0.04269388,
   0.03367804,
   0.02736172,
   0.02720996,
   0.0286806,
   0.03586871,
   0.03533308,
   0.0351674,
   0.038223,
   0.1110885};
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
   0.08534463,
   0.04269388,
   0.03367804,
   0.02736172,
   0.02720996,
   0.0286806,
   0.03586871,
   0.03533308,
   0.0351674,
   0.038223,
   0.1110885};
   grae = new TGraphAsymmErrors(11,Graph1_fx3725,Graph1_fy3725,Graph1_felx3725,Graph1_fehx3725,Graph1_fely3725,Graph1_fehy3725);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1371737213725 = new TH1F("Graph_Graph_Graph_Graph1371737213725","Graph",100,2.09,3.41);
   Graph_Graph_Graph_Graph1371737213725->SetMinimum(0.8634628);
   Graph_Graph_Graph_Graph1371737213725->SetMaximum(1.466321);
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
   BBPair_dRMin_Rbb_1->Range(-0.7088607,-1.207694,3.721519,4.331509);
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
   hframe__1193->SetMaximum(9980.596);
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
   StackedMCstackHist_stack_169_stack_170_stack_171->SetMinimum(0.5500424);
   StackedMCstackHist_stack_169_stack_170_stack_171->SetMaximum(2200.17);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(23,2.537547);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(24,5.909477);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(25,13.95753);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(26,16.81741);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(27,19.88483);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(28,12.24468);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(29,11.45624);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(30,9.075241);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(31,12.62552);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(32,8.585527);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(33,1.169909);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(23,0.6530097);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(24,1.766757);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(25,1.632783);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(26,2.37535);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(27,2.394668);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(28,2.097617);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(29,2.022425);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(30,1.375139);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(31,2.329027);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(32,1.378901);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(33,0.5240399);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(13272);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(23,33.25459);
   TT_stack_2_stack_2_stack_2->SetBinContent(24,110.5975);
   TT_stack_2_stack_2_stack_2->SetBinContent(25,153.8336);
   TT_stack_2_stack_2_stack_2->SetBinContent(26,189.2287);
   TT_stack_2_stack_2_stack_2->SetBinContent(27,199.5234);
   TT_stack_2_stack_2_stack_2->SetBinContent(28,164.12);
   TT_stack_2_stack_2_stack_2->SetBinContent(29,132.6857);
   TT_stack_2_stack_2_stack_2->SetBinContent(30,127.3889);
   TT_stack_2_stack_2_stack_2->SetBinContent(31,120.9001);
   TT_stack_2_stack_2_stack_2->SetBinContent(32,112.688);
   TT_stack_2_stack_2_stack_2->SetBinContent(33,22.14598);
   TT_stack_2_stack_2_stack_2->SetBinError(23,1.416839);
   TT_stack_2_stack_2_stack_2->SetBinError(24,2.602021);
   TT_stack_2_stack_2_stack_2->SetBinError(25,3.071325);
   TT_stack_2_stack_2_stack_2->SetBinError(26,3.397985);
   TT_stack_2_stack_2_stack_2->SetBinError(27,3.499728);
   TT_stack_2_stack_2_stack_2->SetBinError(28,3.177546);
   TT_stack_2_stack_2_stack_2->SetBinError(29,2.857563);
   TT_stack_2_stack_2_stack_2->SetBinError(30,2.813198);
   TT_stack_2_stack_2_stack_2->SetBinError(31,2.719733);
   TT_stack_2_stack_2_stack_2->SetBinError(32,2.635141);
   TT_stack_2_stack_2_stack_2->SetBinError(33,1.165557);
   TT_stack_2_stack_2_stack_2->SetEntries(23419);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(23,117.4301);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(24,442.699);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(25,724.9745);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(26,1071.546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(27,1155.698);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(28,1009.106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(29,688.5161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(30,663.5394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(31,633.704);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(32,570.9148);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(33,82.43171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(23,16.65036);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(24,32.12407);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(25,40.40078);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(26,48.79366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(27,50.51576);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(28,47.15087);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(29,39.5323);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(30,38.89126);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(31,37.94747);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(32,35.98514);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(33,13.94328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3207.878);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(23,0.2667312);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(24,0.81925);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(25,1.06866);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(26,0.286515);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(27,0.982828);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(28,0.5672092);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(29,0.4673669);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(30,0.5975202);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(31,0.2642213);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(32,0.4284795);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinContent(33,0.2050743);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(23,0.1228691);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(24,0.2679469);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(25,0.2980475);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(26,0.3234696);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(27,0.3344746);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(28,0.3258208);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(29,0.2828354);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(30,0.296023);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(31,0.3094322);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(32,0.2783003);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetBinError(33,0.1089344);
   ChargedHiggs_HplusTBHplusToTB_M_800__1194->SetEntries(1103);
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
   153.2223,
   559.206,
   892.7656,
   1277.592,
   1375.106,
   1185.47,
   832.658,
   800.0035,
   767.2297,
   692.1883,
   105.7476,
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
   16.72329,
   32.27767,
   40.55024,
   48.96948,
   50.69344,
   47.30435,
   39.68701,
   39.01711,
   38.11603,
   36.10783,
   14.00172,
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
   16.72329,
   32.27767,
   40.55024,
   48.96948,
   50.69344,
   47.30435,
   39.68701,
   39.01711,
   38.11603,
   36.10783,
   14.00172,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetMinimum(1.568379);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors371837223726->SetMaximum(1568.379);
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
   Data__1195->SetBinContent(23,171);
   Data__1195->SetBinContent(24,570);
   Data__1195->SetBinContent(25,904);
   Data__1195->SetBinContent(26,1222);
   Data__1195->SetBinContent(27,1400);
   Data__1195->SetBinContent(28,1156);
   Data__1195->SetBinContent(29,892);
   Data__1195->SetBinContent(30,799);
   Data__1195->SetBinContent(31,728);
   Data__1195->SetBinContent(32,700);
   Data__1195->SetBinContent(33,138);
   Data__1195->SetBinError(23,13.0767);
   Data__1195->SetBinError(24,23.87467);
   Data__1195->SetBinError(25,30.06659);
   Data__1195->SetBinError(26,34.95712);
   Data__1195->SetBinError(27,37.41657);
   Data__1195->SetBinError(28,34);
   Data__1195->SetBinError(29,29.86637);
   Data__1195->SetBinError(30,28.26659);
   Data__1195->SetBinError(31,26.98148);
   Data__1195->SetBinError(32,26.45751);
   Data__1195->SetBinError(33,11.74734);
   Data__1195->SetEntries(8684);
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
   hframe_copy__1196->SetMaximum(9980.596);
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
   hframe_copy__1197->SetMaximum(9980.596);
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
