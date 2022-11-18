void HPlusBJetPt()
{
//=========Macro generated from canvas: HPlusBJetPt/HPlusBJetPt
//=========  (Fri Nov 18 13:28:53 2022) by ROOT version 6.20/02
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
   0.0788713,
   0.03038872,
   0.03055167,
   0.03536672,
   0.04364876,
   0.05005804,
   0.06898783,
   0.07976981,
   0.08570098,
   0.1344001,
   0.1825256};
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
   0.0788713,
   0.03038872,
   0.03055167,
   0.03536672,
   0.04364876,
   0.05005804,
   0.06898783,
   0.07976981,
   0.08570098,
   0.1344001,
   0.1825256};
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
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetMinimum(0.7809693);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetMaximum(1.219031);
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
   0.0788713,
   0.03038872,
   0.03055167,
   0.03536672,
   0.04364876,
   0.05005804,
   0.06898783,
   0.07976981,
   0.08570098,
   0.1344001,
   0.1825256};
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
   0.0788713,
   0.03038872,
   0.03055167,
   0.03536672,
   0.04364876,
   0.05005804,
   0.06898783,
   0.07976981,
   0.08570098,
   0.1344001,
   0.1825256};
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
   Graph_Graph_Graph_BackgroundStatError350035043508->SetMinimum(0.7809693);
   Graph_Graph_Graph_BackgroundStatError350035043508->SetMaximum(1.219031);
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
   0.843417,
   0.8781905,
   1.029122,
   1.135194,
   1.125482,
   0.9328782,
   1.08962,
   0.9154533,
   1.191173,
   1.097571,
   1.538782};
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
   0.05635317,
   0.02094495,
   0.02280752,
   0.02767119,
   0.03393457,
   0.03525948,
   0.05260736,
   0.05602483,
   0.06947063,
   0.1056138,
   0.1709757};
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
   0.05635317,
   0.02094495,
   0.02280752,
   0.02767119,
   0.03393457,
   0.03525948,
   0.05260736,
   0.05602483,
   0.06947063,
   0.1056138,
   0.1709757};
   grae = new TGraphAsymmErrors(11,Graph1_fx3509,Graph1_fy3509,Graph1_felx3509,Graph1_fehx3509,Graph1_fely3509,Graph1_fehy3509);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1350135053509 = new TH1F("Graph_Graph_Graph_Graph1350135053509","Graph",100,0,880);
   Graph_Graph_Graph_Graph1350135053509->SetMinimum(0.6947945);
   Graph_Graph_Graph_Graph1350135053509->SetMaximum(1.802027);
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
   HPlusBJetPt_1->Range(-113.924,-2.096969,848.1013,2.751465);
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
   hframe__836->SetMaximum(288.7748);
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
   StackedMCstackHist_stack_118_stack_119_stack_120->SetMinimum(0.002292979);
   StackedMCstackHist_stack_118_stack_119_stack_120->SetMaximum(70.3134);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.05597925);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.4968957);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.5906339);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.3100736);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.3280829);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.185341);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.08393481);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.07487475);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.03931628);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.01908658);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.01066419);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.01326167);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.06643496);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.06351792);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.03503225);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.05186378);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.02490842);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.01655495);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.01533511);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.007610674);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.006167756);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.003299798);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(349.6619);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1.301793);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,7.528885);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,6.708187);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4.339189);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2.797038);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1.615443);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1.031157);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,0.7194256);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,0.3753308);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.1563076);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.05573399);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.03898911);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.09600855);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.09106307);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.07321372);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.05890359);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.04462092);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.03544732);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.02968369);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.0150775);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.009644545);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.004200743);
   TT_stack_2_stack_2_stack_2->SetEntries(21934.63);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,3.953954);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,32.01109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,32.26889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,25.00207);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,16.42205);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,13.20653);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,6.759212);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,5.038876);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,2.053508);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,0.8085967);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,0.1967971);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.4169137);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,1.211054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,1.20375);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.045525);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.8495927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.7494968);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.5418205);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.4641103);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.2108479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.131752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.04774195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3140.675);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(1,-0.0008501343);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(2,0.01154772);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(3,0.02127041);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(4,0.02619888);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(5,0.01723278);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(6,0.007001224);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(7,0.02011705);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(8,0.01082674);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(9,0.002284501);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(10,0.0006020474);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(11,-1.016616e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(1,0.001836111);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(2,0.00570583);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(3,0.006548712);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(4,0.007296252);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(5,0.007478119);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(6,0.007386757);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(7,0.006445866);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(8,0.004820662);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(9,0.002419833);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(10,0.001308839);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(11,0.0004209155);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetEntries(42.87104);
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
   5.311726,
   40.03687,
   39.56771,
   29.65133,
   19.54717,
   15.00732,
   7.874303,
   5.833176,
   2.468155,
   0.9839909,
   0.2631952};
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
   0.4189428,
   1.216669,
   1.208859,
   1.04867,
   0.8532099,
   0.7512369,
   0.5432311,
   0.4653113,
   0.2115233,
   0.1322485,
   0.04803986};
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
   0.4189428,
   1.216669,
   1.208859,
   1.04867,
   0.8532099,
   0.7512369,
   0.5432311,
   0.4653113,
   0.2115233,
   0.1322485,
   0.04803986};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetMinimum(0.1936398);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetMaximum(45.35738);
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
   Data__838->SetBinContent(1,4.48);
   Data__838->SetBinContent(2,35.16);
   Data__838->SetBinContent(3,40.72);
   Data__838->SetBinContent(4,33.66);
   Data__838->SetBinContent(5,22);
   Data__838->SetBinContent(6,14);
   Data__838->SetBinContent(7,8.58);
   Data__838->SetBinContent(8,5.34);
   Data__838->SetBinContent(9,2.94);
   Data__838->SetBinContent(10,1.08);
   Data__838->SetBinContent(11,0.405);
   Data__838->SetBinError(1,0.2993326);
   Data__838->SetBinError(2,0.8385702);
   Data__838->SetBinError(3,0.9024411);
   Data__838->SetBinError(4,0.8204877);
   Data__838->SetBinError(5,0.663325);
   Data__838->SetBinError(6,0.5291503);
   Data__838->SetBinError(7,0.4142463);
   Data__838->SetBinError(8,0.3268027);
   Data__838->SetBinError(9,0.1714643);
   Data__838->SetBinError(10,0.103923);
   Data__838->SetBinError(11,0.045);
   Data__838->SetEntries(8535.55);
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
   hframe_copy__839->SetMaximum(288.7748);
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
   hframe_copy__840->SetMaximum(288.7748);
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
