void HPlusBJetPt()
{
//=========Macro generated from canvas: HPlusBJetPt/HPlusBJetPt
//=========  (Fri Nov 18 13:28:55 2022) by ROOT version 6.20/02
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
   0.01780278,
   0.01073527,
   0.01731238,
   0.02517522,
   0.03199783,
   0.04356219,
   0.04910103,
   0.06004851,
   0.05444706,
   0.0786291,
   0.08123938};
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
   0.01780278,
   0.01073527,
   0.01731238,
   0.02517522,
   0.03199783,
   0.04356219,
   0.04910103,
   0.06004851,
   0.05444706,
   0.0786291,
   0.08123938};
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
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetMinimum(0.9025127);
   Graph_Graph_Graph_BackgroundStatSystError349935033507->SetMaximum(1.097487);
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
   0.01780278,
   0.01073527,
   0.01731238,
   0.02517522,
   0.03199783,
   0.04356219,
   0.04910103,
   0.06004851,
   0.05444706,
   0.0786291,
   0.08123938};
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
   0.01780278,
   0.01073527,
   0.01731238,
   0.02517522,
   0.03199783,
   0.04356219,
   0.04910103,
   0.06004851,
   0.05444706,
   0.0786291,
   0.08123938};
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
   Graph_Graph_Graph_BackgroundStatError350035043508->SetMinimum(0.9025127);
   Graph_Graph_Graph_BackgroundStatError350035043508->SetMaximum(1.097487);
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
   1.028211,
   1.012625,
   1.014488,
   0.9533646,
   0.9703857,
   1.051007,
   1.039202,
   0.9123444,
   1.050043,
   1.145632,
   1.157648};
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
   0.02126019,
   0.01224302,
   0.01937725,
   0.02660581,
   0.03513032,
   0.04762566,
   0.05818412,
   0.06387689,
   0.06667777,
   0.1004785,
   0.1135167};
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
   0.02126019,
   0.01224302,
   0.01937725,
   0.02660581,
   0.03513032,
   0.04762566,
   0.05818412,
   0.06387689,
   0.06667777,
   0.1004785,
   0.1135167};
   grae = new TGraphAsymmErrors(11,Graph1_fx3509,Graph1_fy3509,Graph1_felx3509,Graph1_fehx3509,Graph1_fely3509,Graph1_fehy3509);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1350135053509 = new TH1F("Graph_Graph_Graph_Graph1350135053509","Graph",100,0,880);
   Graph_Graph_Graph_Graph1350135053509->SetMinimum(0.8061978);
   Graph_Graph_Graph_Graph1350135053509->SetMaximum(1.313434);
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
   HPlusBJetPt_1->Range(-113.924,-2.108288,848.1013,3.306112);
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
   hframe__836->SetMaximum(957.7401);
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
   StackedMCstackHist_stack_118_stack_119_stack_120->SetMinimum(0.01025937);
   StackedMCstackHist_stack_118_stack_119_stack_120->SetMaximum(234.2135);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1.40989);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,4.993656);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,2.24501);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.127864);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.7132487);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.384946);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.3170528);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.1672347);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.1339999);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.0500112);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.03790475);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.07314819);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.1168764);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.08101555);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.05474164);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.04500923);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.03348491);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.03126332);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.02368117);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.01496369);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.01010681);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.005603488);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3989.909);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,25.69298);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,70.10847);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,25.96322);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,11.6391);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,6.595566);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,3.987341);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2.877688);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1.93474);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1.277193);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.6092217);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.2749488);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.1795326);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.2963127);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.1788867);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1188581);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.08893483);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.06911662);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.05827011);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.04767503);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.02750262);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.01878154);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.00898026);
   TT_stack_2_stack_2_stack_2->SetEntries(122716.1);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,18.39363);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,60.0121);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,25.8289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,14.16922);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8.416892);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,4.895018);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,2.944587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2.37002);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,0.9506165);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,0.4755124);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,0.1363332);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.7864218);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,1.415081);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.9146682);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.6653786);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.4932174);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.3963315);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.2941049);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.2632076);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.1247237);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.08663733);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.03492272);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4286.864);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(1,0.4619082);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(2,1.917379);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(3,1.457326);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(4,1.248835);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(5,1.400582);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(6,1.552056);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(7,1.427182);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(8,1.132554);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(9,0.5392699);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(10,0.1460731);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinContent(11,0.02750586);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(1,0.02926904);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(2,0.06243342);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(3,0.05265508);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(4,0.04903483);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(5,0.05081364);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(6,0.05295725);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(7,0.05091873);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(8,0.04469811);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(9,0.02295467);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(10,0.01211201);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetBinError(11,0.003445601);
   ChargedHiggs_HplusTBHplusToTB_M_800__837->SetEntries(6212.005);
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
   45.4965,
   135.1142,
   54.03713,
   26.93618,
   15.72571,
   9.267305,
   6.139328,
   4.471995,
   2.361809,
   1.134745,
   0.4491867};
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
   0.8099641,
   1.450488,
   0.9355116,
   0.6781243,
   0.5031884,
   0.4037041,
   0.3014473,
   0.2685367,
   0.1285935,
   0.089224,
   0.03649165};
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
   0.8099641,
   1.450488,
   0.9355116,
   0.6781243,
   0.5031884,
   0.4037041,
   0.3014473,
   0.2685367,
   0.1285935,
   0.089224,
   0.03649165};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetMinimum(0.3714256);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors350235063510->SetMaximum(150.1799);
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
   Data__838->SetBinContent(1,46.78);
   Data__838->SetBinContent(2,136.82);
   Data__838->SetBinContent(3,54.82);
   Data__838->SetBinContent(4,25.68);
   Data__838->SetBinContent(5,15.26);
   Data__838->SetBinContent(6,9.74);
   Data__838->SetBinContent(7,6.38);
   Data__838->SetBinContent(8,4.08);
   Data__838->SetBinContent(9,2.48);
   Data__838->SetBinContent(10,1.3);
   Data__838->SetBinContent(11,0.52);
   Data__838->SetBinError(1,0.9672642);
   Data__838->SetBinError(2,1.654207);
   Data__838->SetBinError(3,1.047091);
   Data__838->SetBinError(4,0.7166589);
   Data__838->SetBinError(5,0.5524491);
   Data__838->SetBinError(6,0.4413615);
   Data__838->SetBinError(7,0.3572114);
   Data__838->SetBinError(8,0.2856571);
   Data__838->SetBinError(9,0.1574802);
   Data__838->SetBinError(10,0.1140175);
   Data__838->SetBinError(11,0.0509902);
   Data__838->SetEntries(15307.86);
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
   hframe_copy__839->SetMaximum(957.7401);
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
   hframe_copy__840->SetMaximum(957.7401);
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
