void HPlusBJetPt()
{
//=========Macro generated from canvas: HPlusBJetPt/HPlusBJetPt
//=========  (Fri Nov 18 13:28:36 2022) by ROOT version 6.20/02
   TCanvas *HPlusBJetPt = new TCanvas("HPlusBJetPt", "HPlusBJetPt",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   HPlusBJetPt->SetHighLightColor(2);
   HPlusBJetPt->Range(0,0,1,1);
   HPlusBJetPt->SetFillColor(0);
   HPlusBJetPt->SetBorderMode(0);
   HPlusBJetPt->SetBorderSize(2);
   HPlusBJetPt->SetTickx(1);
   HPlusBJetPt->SetTicky(1);
   HPlusBJetPt->SetLeftMargin(0.16);
   HPlusBJetPt->SetRightMargin(0.05);
   HPlusBJetPt->SetTopMargin(0.06);
   HPlusBJetPt->SetBottomMargin(0.13);
   HPlusBJetPt->SetFrameFillStyle(0);
   HPlusBJetPt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: HPlusBJetPt_2
   TPad *HPlusBJetPt_2 = new TPad("HPlusBJetPt_2", "HPlusBJetPt_2",0,0,1,0.304);
   HPlusBJetPt_2->Draw();
   HPlusBJetPt_2->cd();
   HPlusBJetPt_2->Range(-113.924,-0.428,848.1013,1.7);
   HPlusBJetPt_2->SetFillColor(0);
   HPlusBJetPt_2->SetFillStyle(4000);
   HPlusBJetPt_2->SetBorderMode(0);
   HPlusBJetPt_2->SetBorderSize(2);
   HPlusBJetPt_2->SetTickx(1);
   HPlusBJetPt_2->SetTicky(1);
   HPlusBJetPt_2->SetLeftMargin(0.16);
   HPlusBJetPt_2->SetRightMargin(0.05);
   HPlusBJetPt_2->SetTopMargin(0);
   HPlusBJetPt_2->SetBottomMargin(0.3421053);
   HPlusBJetPt_2->SetFrameFillStyle(0);
   HPlusBJetPt_2->SetFrameBorderMode(0);
   HPlusBJetPt_2->SetFrameFillStyle(0);
   HPlusBJetPt_2->SetFrameBorderMode(0);
   
   TH1F *hframe__834 = new TH1F("hframe__834","",1000,40,800);
   hframe__834->SetMinimum(0.3);
   hframe__834->SetMaximum(1.7);
   hframe__834->SetDirectory(0);
   hframe__834->SetStats(0);
   hframe__834->SetLineStyle(0);
   hframe__834->SetMarkerStyle(20);
   hframe__834->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe__834->GetXaxis()->SetNdivisions(8);
   hframe__834->GetXaxis()->SetLabelFont(43);
   hframe__834->GetXaxis()->SetLabelOffset(0.007);
   hframe__834->GetXaxis()->SetLabelSize(27);
   hframe__834->GetXaxis()->SetTitleSize(33);
   hframe__834->GetXaxis()->SetTitleOffset(2.960526);
   hframe__834->GetXaxis()->SetTitleFont(43);
   hframe__834->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__834->GetYaxis()->SetNdivisions(505);
   hframe__834->GetYaxis()->SetLabelFont(43);
   hframe__834->GetYaxis()->SetLabelOffset(0.007);
   hframe__834->GetYaxis()->SetLabelSize(21);
   hframe__834->GetYaxis()->SetTitleSize(33);
   hframe__834->GetYaxis()->SetTitleOffset(1.5625);
   hframe__834->GetYaxis()->SetTitleFont(43);
   hframe__834->GetZaxis()->SetLabelFont(43);
   hframe__834->GetZaxis()->SetLabelOffset(0.007);
   hframe__834->GetZaxis()->SetLabelSize(27);
   hframe__834->GetZaxis()->SetTitleSize(33);
   hframe__834->GetZaxis()->SetTitleOffset(1);
   hframe__834->GetZaxis()->SetTitleFont(43);
   hframe__834->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3507[11] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   450,
   550,
   700};
   Double_t BackgroundStatSystError_fy3507[11] = {
   1,
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
   Double_t BackgroundStatSystError_felx3507[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BackgroundStatSystError_fely3507[11] = {
   0.02728334,
   0.01149685,
   0.01287835,
   0.01564002,
   0.01990343,
   0.02439015,
   0.03192199,
   0.03883982,
   0.04066259,
   0.06890225,
   0.09530636};
   Double_t BackgroundStatSystError_fehx3507[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BackgroundStatSystError_fehy3507[11] = {
   0.02728334,
   0.01149685,
   0.01287835,
   0.01564002,
   0.01990343,
   0.02439015,
   0.03192199,
   0.03883982,
   0.04066259,
   0.06890225,
   0.09530636};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,BackgroundStatSystError_fx3507,BackgroundStatSystError_fy3507,BackgroundStatSystError_felx3507,BackgroundStatSystError_fehx3507,BackgroundStatSystError_fely3507,BackgroundStatSystError_fehy3507);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1339;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError349935033507 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError349935033507","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetMinimum(0.8856324);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetMaximum(1.114368);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError349935033507);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3508[11] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   450,
   550,
   700};
   Double_t BackgroundStatError_fy3508[11] = {
   1,
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
   Double_t BackgroundStatError_felx3508[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BackgroundStatError_fely3508[11] = {
   0.02728334,
   0.01149685,
   0.01287835,
   0.01564002,
   0.01990343,
   0.02439015,
   0.03192199,
   0.03883982,
   0.04066259,
   0.06890225,
   0.09530636};
   Double_t BackgroundStatError_fehx3508[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BackgroundStatError_fehy3508[11] = {
   0.02728334,
   0.01149685,
   0.01287835,
   0.01564002,
   0.01990343,
   0.02439015,
   0.03192199,
   0.03883982,
   0.04066259,
   0.06890225,
   0.09530636};
   grae = new TGraphAsymmErrors(11,BackgroundStatError_fx3508,BackgroundStatError_fy3508,BackgroundStatError_felx3508,BackgroundStatError_fehx3508,BackgroundStatError_fely3508,BackgroundStatError_fehy3508);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1338;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError350035043508 = new TH1F("Graph_Graph_Graph_BackgroundStatError350035043508","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatError350035043508->SetMinimum(0.8856324);
   Graph_Graph_Graph_BackgroundStatError350035043508->SetMaximum(1.114368);
   Graph_Graph_Graph_BackgroundStatError350035043508->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError350035043508->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError350035043508->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError350035043508->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError350035043508->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError350035043508->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError350035043508);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx120[2] = {
   40,
   800};
   Double_t Graph0_fy120[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx120,Graph0_fy120);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0118119120 = new TH1F("Graph_Graph_Graph_Graph0118119120","Graph",100,0,876);
   Graph_Graph_Graph_Graph0118119120->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0118119120->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0118119120->SetDirectory(0);
   Graph_Graph_Graph_Graph0118119120->SetStats(0);
   Graph_Graph_Graph_Graph0118119120->SetLineStyle(0);
   Graph_Graph_Graph_Graph0118119120->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0118119120->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0118119120->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0118119120->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0118119120->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0118119120->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0118119120->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0118119120->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0118119120->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0118119120->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0118119120->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0118119120->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0118119120->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0118119120->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0118119120->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0118119120->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0118119120->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0118119120->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0118119120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0118119120->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0118119120);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3509[11] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   450,
   550,
   700};
   Double_t Graph1_fy3509[11] = {
   0.8703986,
   0.9305079,
   0.9896354,
   1.013339,
   1.05202,
   0.9490229,
   1.099387,
   0.933074,
   1.120053,
   1.148774,
   1.066382};
   Double_t Graph1_felx3509[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t Graph1_fely3509[11] = {
   0.03208332,
   0.01355844,
   0.01571642,
   0.01935178,
   0.02543309,
   0.02927355,
   0.04185295,
   0.04602514,
   0.05413979,
   0.09227174,
   0.1170506};
   Double_t Graph1_fehx3509[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t Graph1_fehy3509[11] = {
   0.03208332,
   0.01355844,
   0.01571642,
   0.01935178,
   0.02543309,
   0.02927355,
   0.04185295,
   0.04602514,
   0.05413979,
   0.09227174,
   0.1170506};
   grae = new TGraphAsymmErrors(11,Graph1_fx3509,Graph1_fy3509,Graph1_felx3509,Graph1_fehx3509,Graph1_fely3509,Graph1_fehy3509);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1350135053509 = new TH1F("Graph_Graph_Graph_Graph1350135053509","Graph",100,0,880);
   Graph_Graph_Graph_Graph1350135053509->SetMinimum(0.7980422);
   Graph_Graph_Graph_Graph1350135053509->SetMaximum(1.281319);
   Graph_Graph_Graph_Graph1350135053509->SetDirectory(0);
   Graph_Graph_Graph_Graph1350135053509->SetStats(0);
   Graph_Graph_Graph_Graph1350135053509->SetLineStyle(0);
   Graph_Graph_Graph_Graph1350135053509->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1350135053509->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1350135053509->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1350135053509->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1350135053509->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1350135053509->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1350135053509->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1350135053509->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1350135053509->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1350135053509->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1350135053509->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1350135053509->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1350135053509->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1350135053509->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1350135053509->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1350135053509->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1350135053509->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1350135053509->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1350135053509->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1350135053509->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1350135053509->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1350135053509);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__835 = new TH1F("hframe_copy__835","",1000,40,800);
   hframe_copy__835->SetMinimum(0.3);
   hframe_copy__835->SetMaximum(1.7);
   hframe_copy__835->SetDirectory(0);
   hframe_copy__835->SetStats(0);
   hframe_copy__835->SetLineStyle(0);
   hframe_copy__835->SetMarkerStyle(20);
   hframe_copy__835->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe_copy__835->GetXaxis()->SetNdivisions(8);
   hframe_copy__835->GetXaxis()->SetLabelFont(43);
   hframe_copy__835->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__835->GetXaxis()->SetLabelSize(27);
   hframe_copy__835->GetXaxis()->SetTitleSize(33);
   hframe_copy__835->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__835->GetXaxis()->SetTitleFont(43);
   hframe_copy__835->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__835->GetYaxis()->SetNdivisions(505);
   hframe_copy__835->GetYaxis()->SetLabelFont(43);
   hframe_copy__835->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__835->GetYaxis()->SetLabelSize(21);
   hframe_copy__835->GetYaxis()->SetTitleSize(33);
   hframe_copy__835->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__835->GetYaxis()->SetTitleFont(43);
   hframe_copy__835->GetZaxis()->SetLabelFont(43);
   hframe_copy__835->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__835->GetZaxis()->SetLabelSize(27);
   hframe_copy__835->GetZaxis()->SetTitleSize(33);
   hframe_copy__835->GetZaxis()->SetTitleOffset(1);
   hframe_copy__835->GetZaxis()->SetTitleFont(43);
   hframe_copy__835->Draw("sameaxis");
   HPlusBJetPt_2->Modified();
   HPlusBJetPt->cd();
  
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
   HPlusBJetPt->cd();
  
// ------------>Primitives in pad: HPlusBJetPt_1
   TPad *HPlusBJetPt_1 = new TPad("HPlusBJetPt_1", "HPlusBJetPt_1",0,0.2897959,1,1);
   HPlusBJetPt_1->Draw();
   HPlusBJetPt_1->cd();
   HPlusBJetPt_1->Range(-113.924,-2.105552,848.1013,3.172049);
   HPlusBJetPt_1->SetFillColor(0);
   HPlusBJetPt_1->SetFillStyle(4000);
   HPlusBJetPt_1->SetBorderMode(0);
   HPlusBJetPt_1->SetBorderSize(2);
   HPlusBJetPt_1->SetLogy();
   HPlusBJetPt_1->SetTickx(1);
   HPlusBJetPt_1->SetTicky(1);
   HPlusBJetPt_1->SetLeftMargin(0.16);
   HPlusBJetPt_1->SetRightMargin(0.05);
   HPlusBJetPt_1->SetTopMargin(0.06);
   HPlusBJetPt_1->SetBottomMargin(0.02);
   HPlusBJetPt_1->SetFrameFillStyle(0);
   HPlusBJetPt_1->SetFrameBorderMode(0);
   HPlusBJetPt_1->SetFrameFillStyle(0);
   HPlusBJetPt_1->SetFrameBorderMode(0);
   
   TH1F *hframe__836 = new TH1F("hframe__836","",1000,40,800);
   hframe__836->SetMinimum(0.01);
   hframe__836->SetMaximum(716.7924);
   hframe__836->SetDirectory(0);
   hframe__836->SetStats(0);
   hframe__836->SetLineStyle(0);
   hframe__836->SetMarkerStyle(20);
   hframe__836->GetXaxis()->SetNdivisions(8);
   hframe__836->GetXaxis()->SetLabelFont(43);
   hframe__836->GetXaxis()->SetLabelOffset(0.007);
   hframe__836->GetXaxis()->SetLabelSize(0);
   hframe__836->GetXaxis()->SetTitleSize(0);
   hframe__836->GetXaxis()->SetTitleOffset(0.9);
   hframe__836->GetXaxis()->SetTitleFont(43);
   hframe__836->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe__836->GetYaxis()->SetLabelFont(43);
   hframe__836->GetYaxis()->SetLabelOffset(0.007);
   hframe__836->GetYaxis()->SetLabelSize(27);
   hframe__836->GetYaxis()->SetTitleSize(33);
   hframe__836->GetYaxis()->SetTitleOffset(1.5625);
   hframe__836->GetYaxis()->SetTitleFont(43);
   hframe__836->GetZaxis()->SetLabelFont(43);
   hframe__836->GetZaxis()->SetLabelOffset(0.007);
   hframe__836->GetZaxis()->SetLabelSize(27);
   hframe__836->GetZaxis()->SetTitleSize(33);
   hframe__836->GetZaxis()->SetTitleOffset(1);
   hframe__836->GetZaxis()->SetTitleFont(43);
   hframe__836->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis427[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *StackedMCstackHist_stack_118_stack_119_stack_120 = new TH1F("StackedMCstackHist_stack_118_stack_119_stack_120","StackedMCstackHist",11, xAxis427);
   StackedMCstackHist_stack_118_stack_119_stack_120->SetMinimum(0.003944608);
   StackedMCstackHist_stack_118_stack_119_stack_120->SetMaximum(180.9435);
   StackedMCstackHist_stack_118_stack_119_stack_120->SetDirectory(0);
   StackedMCstackHist_stack_118_stack_119_stack_120->SetStats(0);
   StackedMCstackHist_stack_118_stack_119_stack_120->SetLineStyle(0);
   StackedMCstackHist_stack_118_stack_119_stack_120->SetMarkerStyle(20);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_118_stack_119_stack_120->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_118_stack_119_stack_120);
   
   Double_t xAxis428[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_HPlusBJetPtInclusive",11, xAxis428);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.3444716);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,2.530165);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1.968778);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.403891);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.8904757);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.6099959);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.311962);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.2955857);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.1142131);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.0583554);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.01648246);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.03782485);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.1059407);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.1107924);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.07965851);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.07052276);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.0495457);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.03754053);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.03436599);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.01431584);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.01179818);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.003472256);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1752.882);
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
   Double_t xAxis429[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_HPlusBJetPtInclusive",11, xAxis429);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,12.36835);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,65.11772);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,48.8297);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,30.97795);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,19.31988);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,12.14467);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,7.5843);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,4.613613);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2.346427);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.8303989);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.2011029);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.1170524);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.2765408);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.2403534);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1913743);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1514939);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1203439);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.09484493);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.07386602);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.03741224);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.0221517);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.007707067);
   TT_stack_2_stack_2_stack_2->SetEntries(175132.7);
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
   Double_t xAxis430[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_HPlusBJetPtInclusive",11, xAxis430);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,4.198974);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,33.58715);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,29.33205);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,21.7363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,12.31754);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9.394428);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,4.656187);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,3.900393);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1.360608);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,0.4605103);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,0.171581);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.4447105);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,1.125578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.9974335);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.8206331);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.6254792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.5243092);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.3874984);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.3323225);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.1501296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.08951557);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.03611391);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3585.172);
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
   Double_t xAxis431[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__837 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__837","h_SR_HPlusBJetPtInclusive",11, xAxis431);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(1,0.01241186);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(2,0.1029895);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(3,0.09721395);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(4,0.1020745);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(5,0.07870248);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(6,0.07692006);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(7,0.08065962);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(8,0.04957858);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(9,0.01735226);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(10,0.00845583);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(11,0.0005491376);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(1,0.004610636);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(2,0.01440053);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(3,0.01567757);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(4,0.01557109);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(5,0.01560966);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(6,0.01535205);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(7,0.01425318);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(8,0.01196829);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(9,0.005634294);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(10,0.00295684);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(11,0.0007105782);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetEntries(248.1754);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->GetXaxis()->SetRange(1,160);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3510[11] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   450,
   550,
   700};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3510[11] = {
   16.91179,
   101.235,
   80.13052,
   54.11814,
   32.52789,
   22.1491,
   12.55245,
   8.809591,
   3.821249,
   1.349265,
   0.3891664};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3510[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3510[11] = {
   0.4614102,
   1.163884,
   1.031949,
   0.846409,
   0.6474165,
   0.5402199,
   0.4006992,
   0.3421629,
   0.1553819,
   0.09296737,
   0.03709003};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3510[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   50,
   50,
   100};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3510[11] = {
   0.4614102,
   1.163884,
   1.031949,
   0.846409,
   0.6474165,
   0.5402199,
   0.4006992,
   0.3421629,
   0.1553819,
   0.09296737,
   0.03709003};
   grae = new TGraphAsymmErrors(11,BkgSum-SR-Inclusive_sum_errors_fx3510,BkgSum-SR-Inclusive_sum_errors_fy3510,BkgSum-SR-Inclusive_sum_errors_felx3510,BkgSum-SR-Inclusive_sum_errors_fehx3510,BkgSum-SR-Inclusive_sum_errors_fely3510,BkgSum-SR-Inclusive_sum_errors_fehy3510);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1337;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510","Graph",100,0,880);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetMinimum(0.3168687);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetMaximum(112.6036);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors350235063510);
   
   grae->Draw("e2 ");
   Double_t xAxis432[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *Data__838 = new TH1F("Data__838","h_SR_HPlusBJetPtInclusive",11, xAxis432);
   Data__838->SetBinContent(1,14.72);
   Data__838->SetBinContent(2,94.2);
   Data__838->SetBinContent(3,79.3);
   Data__838->SetBinContent(4,54.84);
   Data__838->SetBinContent(5,34.22);
   Data__838->SetBinContent(6,21.02);
   Data__838->SetBinContent(7,13.8);
   Data__838->SetBinContent(8,8.22);
   Data__838->SetBinContent(9,4.28);
   Data__838->SetBinContent(10,1.55);
   Data__838->SetBinContent(11,0.415);
   Data__838->SetBinError(1,0.5425864);
   Data__838->SetBinError(2,1.372589);
   Data__838->SetBinError(3,1.259365);
   Data__838->SetBinError(4,1.047282);
   Data__838->SetBinError(5,0.8272847);
   Data__838->SetBinError(6,0.6483826);
   Data__838->SetBinError(7,0.525357);
   Data__838->SetBinError(8,0.4054627);
   Data__838->SetBinError(9,0.2068816);
   Data__838->SetBinError(10,0.124499);
   Data__838->SetBinError(11,0.04555217);
   Data__838->SetEntries(16491.17);
   Data__838->SetDirectory(0);
   Data__838->SetFillStyle(3001);
   Data__838->SetLineWidth(2);
   Data__838->SetMarkerStyle(20);
   Data__838->SetMarkerSize(1.2);
   Data__838->GetXaxis()->SetRange(1,160);
   Data__838->GetXaxis()->SetLabelFont(42);
   Data__838->GetXaxis()->SetTitleOffset(1);
   Data__838->GetXaxis()->SetTitleFont(42);
   Data__838->GetYaxis()->SetLabelFont(42);
   Data__838->GetYaxis()->SetTitleFont(42);
   Data__838->GetZaxis()->SetLabelFont(42);
   Data__838->GetZaxis()->SetTitleOffset(1);
   Data__838->GetZaxis()->SetTitleFont(42);
   Data__838->Draw("EP same");
   
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

   ci = 1337;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1337;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__839 = new TH1F("hframe_copy__839","",1000,40,800);
   hframe_copy__839->SetMinimum(0.01);
   hframe_copy__839->SetMaximum(716.7924);
   hframe_copy__839->SetDirectory(0);
   hframe_copy__839->SetStats(0);
   hframe_copy__839->SetLineStyle(0);
   hframe_copy__839->SetMarkerStyle(20);
   hframe_copy__839->GetXaxis()->SetNdivisions(8);
   hframe_copy__839->GetXaxis()->SetLabelFont(43);
   hframe_copy__839->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__839->GetXaxis()->SetLabelSize(0);
   hframe_copy__839->GetXaxis()->SetTitleSize(0);
   hframe_copy__839->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__839->GetXaxis()->SetTitleFont(43);
   hframe_copy__839->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__839->GetYaxis()->SetLabelFont(43);
   hframe_copy__839->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__839->GetYaxis()->SetLabelSize(27);
   hframe_copy__839->GetYaxis()->SetTitleSize(33);
   hframe_copy__839->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__839->GetYaxis()->SetTitleFont(43);
   hframe_copy__839->GetZaxis()->SetLabelFont(43);
   hframe_copy__839->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__839->GetZaxis()->SetLabelSize(27);
   hframe_copy__839->GetZaxis()->SetTitleSize(33);
   hframe_copy__839->GetZaxis()->SetTitleOffset(1);
   hframe_copy__839->GetZaxis()->SetTitleFont(43);
   hframe_copy__839->Draw("sameaxis");
   
   TH1F *hframe_copy__840 = new TH1F("hframe_copy__840","",1000,40,800);
   hframe_copy__840->SetMinimum(0.01);
   hframe_copy__840->SetMaximum(716.7924);
   hframe_copy__840->SetDirectory(0);
   hframe_copy__840->SetStats(0);
   hframe_copy__840->SetLineStyle(0);
   hframe_copy__840->SetMarkerStyle(20);
   hframe_copy__840->GetXaxis()->SetNdivisions(8);
   hframe_copy__840->GetXaxis()->SetLabelFont(43);
   hframe_copy__840->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__840->GetXaxis()->SetLabelSize(0);
   hframe_copy__840->GetXaxis()->SetTitleSize(0);
   hframe_copy__840->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__840->GetXaxis()->SetTitleFont(43);
   hframe_copy__840->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__840->GetYaxis()->SetLabelFont(43);
   hframe_copy__840->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__840->GetYaxis()->SetLabelSize(27);
   hframe_copy__840->GetYaxis()->SetTitleSize(33);
   hframe_copy__840->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__840->GetYaxis()->SetTitleFont(43);
   hframe_copy__840->GetZaxis()->SetLabelFont(43);
   hframe_copy__840->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__840->GetZaxis()->SetLabelSize(27);
   hframe_copy__840->GetZaxis()->SetTitleSize(33);
   hframe_copy__840->GetZaxis()->SetTitleOffset(1);
   hframe_copy__840->GetZaxis()->SetTitleFont(43);
   hframe_copy__840->Draw("sameaxis");
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
   HPlusBJetPt_1->Modified();
   HPlusBJetPt->cd();
   HPlusBJetPt->Modified();
   HPlusBJetPt->cd();
   HPlusBJetPt->SetSelected(HPlusBJetPt);
}
