void TopPt()
{
//=========Macro generated from canvas: TopPt/TopPt
//=========  (Fri Nov 18 13:29:42 2022) by ROOT version 6.20/02
   TCanvas *TopPt = new TCanvas("TopPt", "TopPt",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   TopPt->SetHighLightColor(2);
   TopPt->Range(0,0,1,1);
   TopPt->SetFillColor(0);
   TopPt->SetBorderMode(0);
   TopPt->SetBorderSize(2);
   TopPt->SetTickx(1);
   TopPt->SetTicky(1);
   TopPt->SetLeftMargin(0.16);
   TopPt->SetRightMargin(0.05);
   TopPt->SetTopMargin(0.06);
   TopPt->SetBottomMargin(0.13);
   TopPt->SetFrameFillStyle(0);
   TopPt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPt_2
   TPad *TopPt_2 = new TPad("TopPt_2", "TopPt_2",0,0,1,0.304);
   TopPt_2->Draw();
   TopPt_2->cd();
   TopPt_2->Range(-162.0253,-0.428,850.6329,1.7);
   TopPt_2->SetFillColor(0);
   TopPt_2->SetFillStyle(4000);
   TopPt_2->SetBorderMode(0);
   TopPt_2->SetBorderSize(2);
   TopPt_2->SetTickx(1);
   TopPt_2->SetTicky(1);
   TopPt_2->SetLeftMargin(0.16);
   TopPt_2->SetRightMargin(0.05);
   TopPt_2->SetTopMargin(0);
   TopPt_2->SetBottomMargin(0.3421053);
   TopPt_2->SetFrameFillStyle(0);
   TopPt_2->SetFrameBorderMode(0);
   TopPt_2->SetFrameFillStyle(0);
   TopPt_2->SetFrameBorderMode(0);
   
   TH1F *hframe__729 = new TH1F("hframe__729","",1000,0,800);
   hframe__729->SetMinimum(0.3);
   hframe__729->SetMaximum(1.7);
   hframe__729->SetDirectory(0);
   hframe__729->SetStats(0);
   hframe__729->SetLineStyle(0);
   hframe__729->SetMarkerStyle(20);
   hframe__729->GetXaxis()->SetTitle("t^{res}_{H^{#pm}} p_{T} (GeV)");
   hframe__729->GetXaxis()->SetNdivisions(8);
   hframe__729->GetXaxis()->SetLabelFont(43);
   hframe__729->GetXaxis()->SetLabelOffset(0.007);
   hframe__729->GetXaxis()->SetLabelSize(27);
   hframe__729->GetXaxis()->SetTitleSize(33);
   hframe__729->GetXaxis()->SetTitleOffset(2.960526);
   hframe__729->GetXaxis()->SetTitleFont(43);
   hframe__729->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__729->GetYaxis()->SetNdivisions(505);
   hframe__729->GetYaxis()->SetLabelFont(43);
   hframe__729->GetYaxis()->SetLabelOffset(0.007);
   hframe__729->GetYaxis()->SetLabelSize(21);
   hframe__729->GetYaxis()->SetTitleSize(33);
   hframe__729->GetYaxis()->SetTitleOffset(1.5625);
   hframe__729->GetYaxis()->SetTitleFont(43);
   hframe__729->GetZaxis()->SetLabelFont(43);
   hframe__729->GetZaxis()->SetLabelOffset(0.007);
   hframe__729->GetZaxis()->SetLabelSize(27);
   hframe__729->GetZaxis()->SetTitleSize(33);
   hframe__729->GetZaxis()->SetTitleOffset(1);
   hframe__729->GetZaxis()->SetTitleFont(43);
   hframe__729->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3435[11] = {
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
   Double_t BackgroundStatSystError_fy3435[11] = {
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
   Double_t BackgroundStatSystError_felx3435[11] = {
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
   Double_t BackgroundStatSystError_fely3435[11] = {
   0.4272897,
   0.1580869,
   0.0389079,
   0.01928709,
   0.01558867,
   0.01769127,
   0.02216842,
   0.02799639,
   0.03047112,
   0.05494224,
   0.08895864};
   Double_t BackgroundStatSystError_fehx3435[11] = {
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
   Double_t BackgroundStatSystError_fehy3435[11] = {
   0.4272897,
   0.1580869,
   0.0389079,
   0.01928709,
   0.01558867,
   0.01769127,
   0.02216842,
   0.02799639,
   0.03047112,
   0.05494224,
   0.08895864};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,BackgroundStatSystError_fx3435,BackgroundStatSystError_fy3435,BackgroundStatSystError_felx3435,BackgroundStatSystError_fehx3435,BackgroundStatSystError_fely3435,BackgroundStatSystError_fehy3435);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1320;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError342734313435 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError342734313435","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMinimum(0.4872524);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMaximum(1.512748);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError342734313435->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError342734313435);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3436[11] = {
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
   Double_t BackgroundStatError_fy3436[11] = {
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
   Double_t BackgroundStatError_felx3436[11] = {
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
   Double_t BackgroundStatError_fely3436[11] = {
   0.4272897,
   0.1580869,
   0.0389079,
   0.01928709,
   0.01558867,
   0.01769127,
   0.02216842,
   0.02799639,
   0.03047112,
   0.05494224,
   0.08895864};
   Double_t BackgroundStatError_fehx3436[11] = {
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
   Double_t BackgroundStatError_fehy3436[11] = {
   0.4272897,
   0.1580869,
   0.0389079,
   0.01928709,
   0.01558867,
   0.01769127,
   0.02216842,
   0.02799639,
   0.03047112,
   0.05494224,
   0.08895864};
   grae = new TGraphAsymmErrors(11,BackgroundStatError_fx3436,BackgroundStatError_fy3436,BackgroundStatError_felx3436,BackgroundStatError_fehx3436,BackgroundStatError_fely3436,BackgroundStatError_fehy3436);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1319;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError342834323436 = new TH1F("Graph_Graph_Graph_BackgroundStatError342834323436","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMinimum(0.4872524);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMaximum(1.512748);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError342834323436->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError342834323436->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError342834323436);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx105[2] = {
   0,
   800};
   Double_t Graph0_fy105[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx105,Graph0_fy105);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0103104105 = new TH1F("Graph_Graph_Graph_Graph0103104105","Graph",100,0,880);
   Graph_Graph_Graph_Graph0103104105->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0103104105->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0103104105->SetDirectory(0);
   Graph_Graph_Graph_Graph0103104105->SetStats(0);
   Graph_Graph_Graph_Graph0103104105->SetLineStyle(0);
   Graph_Graph_Graph_Graph0103104105->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0103104105->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0103104105->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0103104105->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0103104105);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3437[11] = {
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
   Double_t Graph1_fy3437[11] = {
   0.5600871,
   0.7979901,
   1.005324,
   0.9733629,
   0.9938858,
   0.9850075,
   1.074653,
   0.9680758,
   1.050554,
   1.122024,
   1.110611};
   Double_t Graph1_felx3437[11] = {
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
   Double_t Graph1_fely3437[11] = {
   0.2504786,
   0.1085927,
   0.03561042,
   0.01940912,
   0.01697277,
   0.01973967,
   0.02625011,
   0.03191652,
   0.0364433,
   0.06866677,
   0.1073668};
   Double_t Graph1_fehx3437[11] = {
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
   Double_t Graph1_fehy3437[11] = {
   0.2504786,
   0.1085927,
   0.03561042,
   0.01940912,
   0.01697277,
   0.01973967,
   0.02625011,
   0.03191652,
   0.0364433,
   0.06866677,
   0.1073668};
   grae = new TGraphAsymmErrors(11,Graph1_fx3437,Graph1_fy3437,Graph1_felx3437,Graph1_fehx3437,Graph1_fely3437,Graph1_fehy3437);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1342934333437 = new TH1F("Graph_Graph_Graph_Graph1342934333437","Graph",100,0,880);
   Graph_Graph_Graph_Graph1342934333437->SetMinimum(0.2187716);
   Graph_Graph_Graph_Graph1342934333437->SetMaximum(1.308814);
   Graph_Graph_Graph_Graph1342934333437->SetDirectory(0);
   Graph_Graph_Graph_Graph1342934333437->SetStats(0);
   Graph_Graph_Graph_Graph1342934333437->SetLineStyle(0);
   Graph_Graph_Graph_Graph1342934333437->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1342934333437->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1342934333437->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1342934333437->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1342934333437);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__730 = new TH1F("hframe_copy__730","",1000,0,800);
   hframe_copy__730->SetMinimum(0.3);
   hframe_copy__730->SetMaximum(1.7);
   hframe_copy__730->SetDirectory(0);
   hframe_copy__730->SetStats(0);
   hframe_copy__730->SetLineStyle(0);
   hframe_copy__730->SetMarkerStyle(20);
   hframe_copy__730->GetXaxis()->SetTitle("t^{res}_{H^{#pm}} p_{T} (GeV)");
   hframe_copy__730->GetXaxis()->SetNdivisions(8);
   hframe_copy__730->GetXaxis()->SetLabelFont(43);
   hframe_copy__730->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__730->GetXaxis()->SetLabelSize(27);
   hframe_copy__730->GetXaxis()->SetTitleSize(33);
   hframe_copy__730->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__730->GetXaxis()->SetTitleFont(43);
   hframe_copy__730->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__730->GetYaxis()->SetNdivisions(505);
   hframe_copy__730->GetYaxis()->SetLabelFont(43);
   hframe_copy__730->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__730->GetYaxis()->SetLabelSize(21);
   hframe_copy__730->GetYaxis()->SetTitleSize(33);
   hframe_copy__730->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__730->GetYaxis()->SetTitleFont(43);
   hframe_copy__730->GetZaxis()->SetLabelFont(43);
   hframe_copy__730->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__730->GetZaxis()->SetLabelSize(27);
   hframe_copy__730->GetZaxis()->SetTitleSize(33);
   hframe_copy__730->GetZaxis()->SetTitleOffset(1);
   hframe_copy__730->GetZaxis()->SetTitleFont(43);
   hframe_copy__730->Draw("sameaxis");
   TopPt_2->Modified();
   TopPt->cd();
  
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
   TopPt->cd();
  
// ------------>Primitives in pad: TopPt_1
   TPad *TopPt_1 = new TPad("TopPt_1", "TopPt_1",0,0.2897959,1,1);
   TopPt_1->Draw();
   TopPt_1->cd();
   TopPt_1->Range(-162.0253,-2.101971,850.6329,2.996591);
   TopPt_1->SetFillColor(0);
   TopPt_1->SetFillStyle(4000);
   TopPt_1->SetBorderMode(0);
   TopPt_1->SetBorderSize(2);
   TopPt_1->SetLogy();
   TopPt_1->SetTickx(1);
   TopPt_1->SetTicky(1);
   TopPt_1->SetLeftMargin(0.16);
   TopPt_1->SetRightMargin(0.05);
   TopPt_1->SetTopMargin(0.06);
   TopPt_1->SetBottomMargin(0.02);
   TopPt_1->SetFrameFillStyle(0);
   TopPt_1->SetFrameBorderMode(0);
   TopPt_1->SetFrameFillStyle(0);
   TopPt_1->SetFrameBorderMode(0);
   
   TH1F *hframe__731 = new TH1F("hframe__731","",1000,0,800);
   hframe__731->SetMinimum(0.01);
   hframe__731->SetMaximum(490.5428);
   hframe__731->SetDirectory(0);
   hframe__731->SetStats(0);
   hframe__731->SetLineStyle(0);
   hframe__731->SetMarkerStyle(20);
   hframe__731->GetXaxis()->SetNdivisions(8);
   hframe__731->GetXaxis()->SetLabelFont(43);
   hframe__731->GetXaxis()->SetLabelOffset(0.007);
   hframe__731->GetXaxis()->SetLabelSize(0);
   hframe__731->GetXaxis()->SetTitleSize(0);
   hframe__731->GetXaxis()->SetTitleOffset(0.9);
   hframe__731->GetXaxis()->SetTitleFont(43);
   hframe__731->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe__731->GetYaxis()->SetLabelFont(43);
   hframe__731->GetYaxis()->SetLabelOffset(0.007);
   hframe__731->GetYaxis()->SetLabelSize(27);
   hframe__731->GetYaxis()->SetTitleSize(33);
   hframe__731->GetYaxis()->SetTitleOffset(1.5625);
   hframe__731->GetYaxis()->SetTitleFont(43);
   hframe__731->GetZaxis()->SetLabelFont(43);
   hframe__731->GetZaxis()->SetLabelOffset(0.007);
   hframe__731->GetZaxis()->SetLabelSize(27);
   hframe__731->GetZaxis()->SetTitleSize(33);
   hframe__731->GetZaxis()->SetTitleOffset(1);
   hframe__731->GetZaxis()->SetTitleFont(43);
   hframe__731->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis391[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *StackedMCstackHist_stack_103_stack_104_stack_105 = new TH1F("StackedMCstackHist_stack_103_stack_104_stack_105","StackedMCstackHist",11, xAxis391);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetMinimum(5.797961e-05);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetMaximum(144.9243);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetDirectory(0);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetStats(0);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetLineStyle(0);
   StackedMCstackHist_stack_103_stack_104_stack_105->SetMarkerStyle(20);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_103_stack_104_stack_105->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_103_stack_104_stack_105);
   
   Double_t xAxis392[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_TopPtInclusive",11, xAxis392);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.0008412065);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.01165453);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.2271663);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.8430239);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1.310681);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1.170651);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.782281);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.61638);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.2363307);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.1044174);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.01627074);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.0005995774);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.005931692);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.03131021);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.06392781);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.08305977);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.0737882);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.05701639);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.05087044);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.02129965);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.01428213);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.003514703);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1181.351);
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
   Double_t xAxis393[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_TopPtInclusive",11, xAxis393);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,0.02026606);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.1909068);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3.532527);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,13.32174);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,19.61179);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,15.82085);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,10.98013);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,6.824371);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,3.117861);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.9916691);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.1669008);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.004273757);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.01308653);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.06281767);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1248118);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1533345);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1367767);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.114959);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.09085912);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.04236109);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.02365217);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.006846168);
   TT_stack_2_stack_2_stack_2->SetEntries(64822.02);
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
   Double_t xAxis394[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_TopPtInclusive",11, xAxis394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,0.1574364);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1.150839);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,12.09589);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,37.51175);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,48.07942);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,33.56649);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,19.42907);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,11.56602);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4.555924);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1.283541);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,0.2985454);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.0761677);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.2134719);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.6129015);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.9867752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.061418);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.8808299);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.6794546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.521833);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.2363205);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.1277892);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.04215622);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7004.477);
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
   Double_t xAxis395[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__732 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__732","h_SR_TopPtInclusive",11, xAxis395);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(2,0.0003149096);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(3,0.006264218);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(4,0.02174535);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(5,0.06662712);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(6,0.04134074);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(7,0.09224946);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(8,0.07349127);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(9,0.04911491);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(10,0.01001763);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinContent(11,0.001229582);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(2,0.0003149095);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(3,0.002918036);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(4,0.007538139);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(5,0.0127419);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(6,0.01387428);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(7,0.01567533);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(8,0.01588824);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(9,0.00796743);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(10,0.003987085);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetBinError(11,0.000996977);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetEntries(131.4865);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetXaxis()->SetRange(1,160);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__732->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3438[11] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3438[11] = {
   0.1785437,
   1.3534,
   15.85558,
   51.67651,
   69.00189,
   50.55799,
   31.19148,
   19.00677,
   7.910116,
   2.379628,
   0.481717};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3438[11] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3438[11] = {
   0.07628986,
   0.2139548,
   0.6169073,
   0.9966895,
   1.075648,
   0.8944349,
   0.6914659,
   0.5321211,
   0.2410301,
   0.1307421,
   0.04285288};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3438[11] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3438[11] = {
   0.07628986,
   0.2139548,
   0.6169073,
   0.9966895,
   1.075648,
   0.8944349,
   0.6914659,
   0.5321211,
   0.2410301,
   0.1307421,
   0.04285288};
   grae = new TGraphAsymmErrors(11,BkgSum-SR-Inclusive_sum_errors_fx3438,BkgSum-SR-Inclusive_sum_errors_fy3438,BkgSum-SR-Inclusive_sum_errors_felx3438,BkgSum-SR-Inclusive_sum_errors_fehx3438,BkgSum-SR-Inclusive_sum_errors_fely3438,BkgSum-SR-Inclusive_sum_errors_fehy3438);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1318;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438","Graph",100,0,880);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMinimum(0.09202842);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMaximum(77.07507);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors343034343438->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors343034343438);
   
   grae->Draw("e2 ");
   Double_t xAxis396[12] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800}; 
   
   TH1F *Data__733 = new TH1F("Data__733","h_SR_TopPtInclusive",11, xAxis396);
   Data__733->SetBinContent(1,0.1);
   Data__733->SetBinContent(2,1.08);
   Data__733->SetBinContent(3,15.94);
   Data__733->SetBinContent(4,50.3);
   Data__733->SetBinContent(5,68.58);
   Data__733->SetBinContent(6,49.8);
   Data__733->SetBinContent(7,33.52);
   Data__733->SetBinContent(8,18.4);
   Data__733->SetBinContent(9,8.31);
   Data__733->SetBinContent(10,2.67);
   Data__733->SetBinContent(11,0.535);
   Data__733->SetBinError(1,0.04472136);
   Data__733->SetBinError(2,0.1469694);
   Data__733->SetBinError(3,0.5646238);
   Data__733->SetBinError(4,1.002996);
   Data__733->SetBinError(5,1.171153);
   Data__733->SetBinError(6,0.997998);
   Data__733->SetBinError(7,0.8187796);
   Data__733->SetBinError(8,0.60663);
   Data__733->SetBinError(9,0.2882707);
   Data__733->SetBinError(10,0.1634013);
   Data__733->SetBinError(11,0.0517204);
   Data__733->SetEntries(12763.44);
   Data__733->SetDirectory(0);
   Data__733->SetFillStyle(3001);
   Data__733->SetLineWidth(2);
   Data__733->SetMarkerStyle(20);
   Data__733->SetMarkerSize(1.2);
   Data__733->GetXaxis()->SetRange(1,160);
   Data__733->GetXaxis()->SetLabelFont(42);
   Data__733->GetXaxis()->SetTitleOffset(1);
   Data__733->GetXaxis()->SetTitleFont(42);
   Data__733->GetYaxis()->SetLabelFont(42);
   Data__733->GetYaxis()->SetTitleFont(42);
   Data__733->GetZaxis()->SetLabelFont(42);
   Data__733->GetZaxis()->SetTitleOffset(1);
   Data__733->GetZaxis()->SetTitleFont(42);
   Data__733->Draw("EP same");
   
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

   ci = 1318;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1318;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__734 = new TH1F("hframe_copy__734","",1000,0,800);
   hframe_copy__734->SetMinimum(0.01);
   hframe_copy__734->SetMaximum(490.5428);
   hframe_copy__734->SetDirectory(0);
   hframe_copy__734->SetStats(0);
   hframe_copy__734->SetLineStyle(0);
   hframe_copy__734->SetMarkerStyle(20);
   hframe_copy__734->GetXaxis()->SetNdivisions(8);
   hframe_copy__734->GetXaxis()->SetLabelFont(43);
   hframe_copy__734->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__734->GetXaxis()->SetLabelSize(0);
   hframe_copy__734->GetXaxis()->SetTitleSize(0);
   hframe_copy__734->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__734->GetXaxis()->SetTitleFont(43);
   hframe_copy__734->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__734->GetYaxis()->SetLabelFont(43);
   hframe_copy__734->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__734->GetYaxis()->SetLabelSize(27);
   hframe_copy__734->GetYaxis()->SetTitleSize(33);
   hframe_copy__734->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__734->GetYaxis()->SetTitleFont(43);
   hframe_copy__734->GetZaxis()->SetLabelFont(43);
   hframe_copy__734->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__734->GetZaxis()->SetLabelSize(27);
   hframe_copy__734->GetZaxis()->SetTitleSize(33);
   hframe_copy__734->GetZaxis()->SetTitleOffset(1);
   hframe_copy__734->GetZaxis()->SetTitleFont(43);
   hframe_copy__734->Draw("sameaxis");
   
   TH1F *hframe_copy__735 = new TH1F("hframe_copy__735","",1000,0,800);
   hframe_copy__735->SetMinimum(0.01);
   hframe_copy__735->SetMaximum(490.5428);
   hframe_copy__735->SetDirectory(0);
   hframe_copy__735->SetStats(0);
   hframe_copy__735->SetLineStyle(0);
   hframe_copy__735->SetMarkerStyle(20);
   hframe_copy__735->GetXaxis()->SetNdivisions(8);
   hframe_copy__735->GetXaxis()->SetLabelFont(43);
   hframe_copy__735->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__735->GetXaxis()->SetLabelSize(0);
   hframe_copy__735->GetXaxis()->SetTitleSize(0);
   hframe_copy__735->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__735->GetXaxis()->SetTitleFont(43);
   hframe_copy__735->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__735->GetYaxis()->SetLabelFont(43);
   hframe_copy__735->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__735->GetYaxis()->SetLabelSize(27);
   hframe_copy__735->GetYaxis()->SetTitleSize(33);
   hframe_copy__735->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__735->GetYaxis()->SetTitleFont(43);
   hframe_copy__735->GetZaxis()->SetLabelFont(43);
   hframe_copy__735->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__735->GetZaxis()->SetLabelSize(27);
   hframe_copy__735->GetZaxis()->SetTitleSize(33);
   hframe_copy__735->GetZaxis()->SetTitleOffset(1);
   hframe_copy__735->GetZaxis()->SetTitleFont(43);
   hframe_copy__735->Draw("sameaxis");
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
   TopPt_1->Modified();
   TopPt->cd();
   TopPt->Modified();
   TopPt->cd();
   TopPt->SetSelected(TopPt);
}
