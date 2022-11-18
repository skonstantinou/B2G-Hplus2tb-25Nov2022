void BBPair_dRMin_dPhi()
{
//=========Macro generated from canvas: BBPair_dRMin_dPhi/BBPair_dRMin_dPhi
//=========  (Fri Nov 18 13:10:11 2022) by ROOT version 6.20/02
   TCanvas *BBPair_dRMin_dPhi = new TCanvas("BBPair_dRMin_dPhi", "BBPair_dRMin_dPhi",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   BBPair_dRMin_dPhi->SetHighLightColor(2);
   BBPair_dRMin_dPhi->Range(0,0,1,1);
   BBPair_dRMin_dPhi->SetFillColor(0);
   BBPair_dRMin_dPhi->SetBorderMode(0);
   BBPair_dRMin_dPhi->SetBorderSize(2);
   BBPair_dRMin_dPhi->SetTickx(1);
   BBPair_dRMin_dPhi->SetTicky(1);
   BBPair_dRMin_dPhi->SetLeftMargin(0.16);
   BBPair_dRMin_dPhi->SetRightMargin(0.05);
   BBPair_dRMin_dPhi->SetTopMargin(0.06);
   BBPair_dRMin_dPhi->SetBottomMargin(0.13);
   BBPair_dRMin_dPhi->SetFrameFillStyle(0);
   BBPair_dRMin_dPhi->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: BBPair_dRMin_dPhi_2
   TPad *BBPair_dRMin_dPhi_2 = new TPad("BBPair_dRMin_dPhi_2", "BBPair_dRMin_dPhi_2",0,0,1,0.304);
   BBPair_dRMin_dPhi_2->Draw();
   BBPair_dRMin_dPhi_2->cd();
   BBPair_dRMin_dPhi_2->Range(-0.7088607,-0.428,3.721519,1.7);
   BBPair_dRMin_dPhi_2->SetFillColor(0);
   BBPair_dRMin_dPhi_2->SetFillStyle(4000);
   BBPair_dRMin_dPhi_2->SetBorderMode(0);
   BBPair_dRMin_dPhi_2->SetBorderSize(2);
   BBPair_dRMin_dPhi_2->SetTickx(1);
   BBPair_dRMin_dPhi_2->SetTicky(1);
   BBPair_dRMin_dPhi_2->SetLeftMargin(0.16);
   BBPair_dRMin_dPhi_2->SetRightMargin(0.05);
   BBPair_dRMin_dPhi_2->SetTopMargin(0);
   BBPair_dRMin_dPhi_2->SetBottomMargin(0.3421053);
   BBPair_dRMin_dPhi_2->SetFrameFillStyle(0);
   BBPair_dRMin_dPhi_2->SetFrameBorderMode(0);
   BBPair_dRMin_dPhi_2->SetFrameFillStyle(0);
   BBPair_dRMin_dPhi_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1233 = new TH1F("hframe__1233","",1000,0,3.5);
   hframe__1233->SetMinimum(0.3);
   hframe__1233->SetMaximum(1.7);
   hframe__1233->SetDirectory(0);
   hframe__1233->SetStats(0);
   hframe__1233->SetLineStyle(0);
   hframe__1233->SetMarkerStyle(20);
   hframe__1233->GetXaxis()->SetNdivisions(8);
   hframe__1233->GetXaxis()->SetLabelFont(43);
   hframe__1233->GetXaxis()->SetLabelOffset(0.007);
   hframe__1233->GetXaxis()->SetLabelSize(27);
   hframe__1233->GetXaxis()->SetTitleSize(33);
   hframe__1233->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1233->GetXaxis()->SetTitleFont(43);
   hframe__1233->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1233->GetYaxis()->SetNdivisions(505);
   hframe__1233->GetYaxis()->SetLabelFont(43);
   hframe__1233->GetYaxis()->SetLabelOffset(0.007);
   hframe__1233->GetYaxis()->SetLabelSize(21);
   hframe__1233->GetYaxis()->SetTitleSize(33);
   hframe__1233->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1233->GetYaxis()->SetTitleFont(43);
   hframe__1233->GetZaxis()->SetLabelFont(43);
   hframe__1233->GetZaxis()->SetLabelOffset(0.007);
   hframe__1233->GetZaxis()->SetLabelSize(27);
   hframe__1233->GetZaxis()->SetTitleSize(33);
   hframe__1233->GetZaxis()->SetTitleOffset(1);
   hframe__1233->GetZaxis()->SetTitleFont(43);
   hframe__1233->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3747[9] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85};
   Double_t BackgroundStatSystError_fy3747[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3747[9] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fely3747[9] = {
   0.02869682,
   0.02790663,
   0.02633742,
   0.02425481,
   0.02081718,
   0.02025199,
   0.02246298,
   0.02634253,
   0.03573999};
   Double_t BackgroundStatSystError_fehx3747[9] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fehy3747[9] = {
   0.02869682,
   0.02790663,
   0.02633742,
   0.02425481,
   0.02081718,
   0.02025199,
   0.02246298,
   0.02634253,
   0.03573999};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,BackgroundStatSystError_fx3747,BackgroundStatSystError_fy3747,BackgroundStatSystError_felx3747,BackgroundStatSystError_fehx3747,BackgroundStatSystError_fely3747,BackgroundStatSystError_fehy3747);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1400;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError373937433747 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError373937433747","Graph",100,0,0.99);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->SetMinimum(0.957112);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->SetMaximum(1.042888);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError373937433747->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError373937433747);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3748[35] = {
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
   Double_t BackgroundStatError_fy3748[35] = {
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
   Double_t BackgroundStatError_felx3748[35] = {
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
   Double_t BackgroundStatError_fely3748[35] = {
   0.02869682,
   0.02790663,
   0.02633742,
   0.02425481,
   0.02081718,
   0.02025199,
   0.02246298,
   0.02634253,
   0.03573999,
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
   0,
   0,
   0,
   0};
   Double_t BackgroundStatError_fehx3748[35] = {
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
   Double_t BackgroundStatError_fehy3748[35] = {
   0.02869682,
   0.02790663,
   0.02633742,
   0.02425481,
   0.02081718,
   0.02025199,
   0.02246298,
   0.02634253,
   0.03573999,
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
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(35,BackgroundStatError_fx3748,BackgroundStatError_fy3748,BackgroundStatError_felx3748,BackgroundStatError_fehx3748,BackgroundStatError_fely3748,BackgroundStatError_fehy3748);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1399;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError374037443748 = new TH1F("Graph_Graph_Graph_BackgroundStatError374037443748","Graph",100,0,3.85);
   Graph_Graph_Graph_BackgroundStatError374037443748->SetMinimum(0.957112);
   Graph_Graph_Graph_BackgroundStatError374037443748->SetMaximum(1.042888);
   Graph_Graph_Graph_BackgroundStatError374037443748->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError374037443748->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError374037443748->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError374037443748->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError374037443748->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError374037443748->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError374037443748);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx177[2] = {
   0,
   3.5};
   Double_t Graph0_fy177[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx177,Graph0_fy177);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0175176177 = new TH1F("Graph_Graph_Graph_Graph0175176177","Graph",100,0,3.85);
   Graph_Graph_Graph_Graph0175176177->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0175176177->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0175176177->SetDirectory(0);
   Graph_Graph_Graph_Graph0175176177->SetStats(0);
   Graph_Graph_Graph_Graph0175176177->SetLineStyle(0);
   Graph_Graph_Graph_Graph0175176177->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0175176177->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0175176177->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0175176177->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0175176177->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0175176177->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0175176177->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0175176177->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0175176177->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0175176177->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0175176177->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0175176177->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0175176177->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0175176177->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0175176177->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0175176177->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0175176177->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0175176177->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0175176177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0175176177->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0175176177);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3749[9] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85};
   Double_t Graph1_fy3749[9] = {
   0.9642265,
   0.9705238,
   0.9212026,
   0.9448057,
   0.9359053,
   0.9639769,
   0.9193247,
   0.9736704,
   0.9921032};
   Double_t Graph1_felx3749[9] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fely3749[9] = {
   0.02879892,
   0.02819337,
   0.02579883,
   0.02424971,
   0.02053095,
   0.02041335,
   0.02227071,
   0.02707776,
   0.0378511};
   Double_t Graph1_fehx3749[9] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fehy3749[9] = {
   0.02879892,
   0.02819337,
   0.02579883,
   0.02424971,
   0.02053095,
   0.02041335,
   0.02227071,
   0.02707776,
   0.0378511};
   grae = new TGraphAsymmErrors(9,Graph1_fx3749,Graph1_fy3749,Graph1_felx3749,Graph1_fehx3749,Graph1_fely3749,Graph1_fehy3749);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1374137453749 = new TH1F("Graph_Graph_Graph_Graph1374137453749","Graph",100,0,0.99);
   Graph_Graph_Graph_Graph1374137453749->SetMinimum(0.8819487);
   Graph_Graph_Graph_Graph1374137453749->SetMaximum(1.043409);
   Graph_Graph_Graph_Graph1374137453749->SetDirectory(0);
   Graph_Graph_Graph_Graph1374137453749->SetStats(0);
   Graph_Graph_Graph_Graph1374137453749->SetLineStyle(0);
   Graph_Graph_Graph_Graph1374137453749->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1374137453749->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1374137453749->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1374137453749->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1374137453749->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1374137453749->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1374137453749->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1374137453749->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1374137453749->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1374137453749->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1374137453749->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1374137453749->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1374137453749->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1374137453749->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1374137453749->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1374137453749->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1374137453749->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1374137453749->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1374137453749->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1374137453749->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1374137453749->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1374137453749);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1234 = new TH1F("hframe_copy__1234","",1000,0,3.5);
   hframe_copy__1234->SetMinimum(0.3);
   hframe_copy__1234->SetMaximum(1.7);
   hframe_copy__1234->SetDirectory(0);
   hframe_copy__1234->SetStats(0);
   hframe_copy__1234->SetLineStyle(0);
   hframe_copy__1234->SetMarkerStyle(20);
   hframe_copy__1234->GetXaxis()->SetNdivisions(8);
   hframe_copy__1234->GetXaxis()->SetLabelFont(43);
   hframe_copy__1234->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1234->GetXaxis()->SetLabelSize(27);
   hframe_copy__1234->GetXaxis()->SetTitleSize(33);
   hframe_copy__1234->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1234->GetXaxis()->SetTitleFont(43);
   hframe_copy__1234->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1234->GetYaxis()->SetNdivisions(505);
   hframe_copy__1234->GetYaxis()->SetLabelFont(43);
   hframe_copy__1234->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1234->GetYaxis()->SetLabelSize(21);
   hframe_copy__1234->GetYaxis()->SetTitleSize(33);
   hframe_copy__1234->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1234->GetYaxis()->SetTitleFont(43);
   hframe_copy__1234->GetZaxis()->SetLabelFont(43);
   hframe_copy__1234->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1234->GetZaxis()->SetLabelSize(27);
   hframe_copy__1234->GetZaxis()->SetTitleSize(33);
   hframe_copy__1234->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1234->GetZaxis()->SetTitleFont(43);
   hframe_copy__1234->Draw("sameaxis");
   BBPair_dRMin_dPhi_2->Modified();
   BBPair_dRMin_dPhi->cd();
  
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
   BBPair_dRMin_dPhi->cd();
  
// ------------>Primitives in pad: BBPair_dRMin_dPhi_1
   TPad *BBPair_dRMin_dPhi_1 = new TPad("BBPair_dRMin_dPhi_1", "BBPair_dRMin_dPhi_1",0,0.2897959,1,1);
   BBPair_dRMin_dPhi_1->Draw();
   BBPair_dRMin_dPhi_1->cd();
   BBPair_dRMin_dPhi_1->Range(-0.7088607,-1.212452,3.721519,4.564671);
   BBPair_dRMin_dPhi_1->SetFillColor(0);
   BBPair_dRMin_dPhi_1->SetFillStyle(4000);
   BBPair_dRMin_dPhi_1->SetBorderMode(0);
   BBPair_dRMin_dPhi_1->SetBorderSize(2);
   BBPair_dRMin_dPhi_1->SetLogy();
   BBPair_dRMin_dPhi_1->SetTickx(1);
   BBPair_dRMin_dPhi_1->SetTicky(1);
   BBPair_dRMin_dPhi_1->SetLeftMargin(0.16);
   BBPair_dRMin_dPhi_1->SetRightMargin(0.05);
   BBPair_dRMin_dPhi_1->SetTopMargin(0.06);
   BBPair_dRMin_dPhi_1->SetBottomMargin(0.02);
   BBPair_dRMin_dPhi_1->SetFrameFillStyle(0);
   BBPair_dRMin_dPhi_1->SetFrameBorderMode(0);
   BBPair_dRMin_dPhi_1->SetFrameFillStyle(0);
   BBPair_dRMin_dPhi_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1235 = new TH1F("hframe__1235","",1000,0,3.5);
   hframe__1235->SetMinimum(0.08);
   hframe__1235->SetMaximum(16521.28);
   hframe__1235->SetDirectory(0);
   hframe__1235->SetStats(0);
   hframe__1235->SetLineStyle(0);
   hframe__1235->SetMarkerStyle(20);
   hframe__1235->GetXaxis()->SetNdivisions(8);
   hframe__1235->GetXaxis()->SetLabelFont(43);
   hframe__1235->GetXaxis()->SetLabelOffset(0.007);
   hframe__1235->GetXaxis()->SetLabelSize(0);
   hframe__1235->GetXaxis()->SetTitleSize(0);
   hframe__1235->GetXaxis()->SetTitleOffset(0.9);
   hframe__1235->GetXaxis()->SetTitleFont(43);
   hframe__1235->GetYaxis()->SetTitle("Events / 0");
   hframe__1235->GetYaxis()->SetLabelFont(43);
   hframe__1235->GetYaxis()->SetLabelOffset(0.007);
   hframe__1235->GetYaxis()->SetLabelSize(27);
   hframe__1235->GetYaxis()->SetTitleSize(33);
   hframe__1235->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1235->GetYaxis()->SetTitleFont(43);
   hframe__1235->GetZaxis()->SetLabelFont(43);
   hframe__1235->GetZaxis()->SetLabelOffset(0.007);
   hframe__1235->GetZaxis()->SetLabelSize(27);
   hframe__1235->GetZaxis()->SetTitleSize(33);
   hframe__1235->GetZaxis()->SetTitleOffset(1);
   hframe__1235->GetZaxis()->SetTitleFont(43);
   hframe__1235->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_175_stack_176_stack_177 = new TH1F("StackedMCstackHist_stack_175_stack_176_stack_177","StackedMCstackHist",35,0,3.5);
   StackedMCstackHist_stack_175_stack_176_stack_177->SetMinimum(0.9253334);
   StackedMCstackHist_stack_175_stack_176_stack_177->SetMaximum(3701.334);
   StackedMCstackHist_stack_175_stack_176_stack_177->SetDirectory(0);
   StackedMCstackHist_stack_175_stack_176_stack_177->SetStats(0);
   StackedMCstackHist_stack_175_stack_176_stack_177->SetLineStyle(0);
   StackedMCstackHist_stack_175_stack_176_stack_177->SetMarkerStyle(20);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_175_stack_176_stack_177->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_175_stack_176_stack_177);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_BBPair_dRMin_dPhiInclusive",35,0,3.5);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,22.26254);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,25.72126);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,24.61369);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,33.86596);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,43.07042);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,50.32185);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,38.89543);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,28.62074);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,18.09103);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,2.024734);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.221492);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.339282);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.472356);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,3.316943);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,3.846324);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,3.221058);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.20107);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.909817);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_BBPair_dRMin_dPhiInclusive",35,0,3.5);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,345.3234);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,360.0185);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,382.4494);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,440.2253);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,565.6691);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,611.9803);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,558.4395);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,447.8651);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,247.4877);
   TT_stack_2_stack_2_stack_2->SetBinError(1,4.498253);
   TT_stack_2_stack_2_stack_2->SetBinError(2,4.610532);
   TT_stack_2_stack_2_stack_2->SetBinError(3,4.753346);
   TT_stack_2_stack_2_stack_2->SetBinError(4,5.095893);
   TT_stack_2_stack_2_stack_2->SetBinError(5,5.803213);
   TT_stack_2_stack_2_stack_2->SetBinError(6,6.01454);
   TT_stack_2_stack_2_stack_2->SetBinError(7,5.744609);
   TT_stack_2_stack_2_stack_2->SetBinError(8,5.139837);
   TT_stack_2_stack_2_stack_2->SetBinError(9,3.820886);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_BBPair_dRMin_dPhiInclusive",35,0,3.5);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,795.004);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,835.2503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,976.9973);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,1132.588);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,1611.571);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,1651.031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,1256.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,851.479);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,426.8895);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,32.99593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,33.68718);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,36.06555);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,38.5559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,45.73471);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,46.30244);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,41.11171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,34.53223);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,24.37739);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1236 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1236","h_SR_BBPair_dRMin_dPhiInclusive",35,0,3.5);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinContent(1,2.126506);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinContent(2,2.286024);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinContent(3,2.379274);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinContent(4,1.632639);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinContent(5,2.37454);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinContent(6,2.809363);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinContent(7,3.501198);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinContent(8,2.357848);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinContent(9,1.793427);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinError(1,0.5435585);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinError(2,0.5244766);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinError(3,0.5251282);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinError(4,0.6162484);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinError(5,0.6882309);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinError(6,0.6912145);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinError(7,0.6551123);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinError(8,0.5950357);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetBinError(9,0.4109715);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetEntries(4205);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->GetXaxis()->SetRange(1,35);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1236->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3750[35] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3750[35] = {
   1162.59,
   1220.99,
   1384.06,
   1606.68,
   2220.31,
   2313.333,
   1853.535,
   1327.965,
   692.4683,
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
   0,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3750[35] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3750[35] = {
   33.36263,
   34.07372,
   36.45258,
   38.9697,
   46.22059,
   46.8496,
   41.6359,
   34.98196,
   24.74881,
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
   0,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3750[35] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3750[35] = {
   33.36263,
   34.07372,
   36.45258,
   38.9697,
   46.22059,
   46.8496,
   41.6359,
   34.98196,
   24.74881,
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
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(35,BkgSum-SR-Inclusive_sum_errors_fx3750,BkgSum-SR-Inclusive_sum_errors_fy3750,BkgSum-SR-Inclusive_sum_errors_felx3750,BkgSum-SR-Inclusive_sum_errors_fehx3750,BkgSum-SR-Inclusive_sum_errors_fely3750,BkgSum-SR-Inclusive_sum_errors_fehy3750);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1398;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750","Graph",100,0,3.85);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->SetMinimum(2.596201);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->SetMaximum(2596.201);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors374237463750->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors374237463750);
   
   grae->Draw("e2 ");
   
   TH1F *Data__1237 = new TH1F("Data__1237","h_SR_BBPair_dRMin_dPhiInclusive",35,0,3.5);
   Data__1237->SetBinContent(1,1121);
   Data__1237->SetBinContent(2,1185);
   Data__1237->SetBinContent(3,1275);
   Data__1237->SetBinContent(4,1518);
   Data__1237->SetBinContent(5,2078);
   Data__1237->SetBinContent(6,2230);
   Data__1237->SetBinContent(7,1704);
   Data__1237->SetBinContent(8,1293);
   Data__1237->SetBinContent(9,687);
   Data__1237->SetBinError(1,33.48134);
   Data__1237->SetBinError(2,34.42383);
   Data__1237->SetBinError(3,35.70714);
   Data__1237->SetBinError(4,38.96152);
   Data__1237->SetBinError(5,45.58509);
   Data__1237->SetBinError(6,47.22288);
   Data__1237->SetBinError(7,41.27953);
   Data__1237->SetBinError(8,35.95831);
   Data__1237->SetBinError(9,26.21068);
   Data__1237->SetEntries(13095);
   Data__1237->SetDirectory(0);
   Data__1237->SetFillStyle(3001);
   Data__1237->SetLineWidth(2);
   Data__1237->SetMarkerStyle(20);
   Data__1237->SetMarkerSize(1.2);
   Data__1237->GetXaxis()->SetRange(1,35);
   Data__1237->GetXaxis()->SetLabelFont(42);
   Data__1237->GetXaxis()->SetTitleOffset(1);
   Data__1237->GetXaxis()->SetTitleFont(42);
   Data__1237->GetYaxis()->SetLabelFont(42);
   Data__1237->GetYaxis()->SetTitleFont(42);
   Data__1237->GetZaxis()->SetLabelFont(42);
   Data__1237->GetZaxis()->SetTitleOffset(1);
   Data__1237->GetZaxis()->SetTitleFont(42);
   Data__1237->Draw("EP same");
   
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

   ci = 1398;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1398;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1238 = new TH1F("hframe_copy__1238","",1000,0,3.5);
   hframe_copy__1238->SetMinimum(0.08);
   hframe_copy__1238->SetMaximum(16521.28);
   hframe_copy__1238->SetDirectory(0);
   hframe_copy__1238->SetStats(0);
   hframe_copy__1238->SetLineStyle(0);
   hframe_copy__1238->SetMarkerStyle(20);
   hframe_copy__1238->GetXaxis()->SetNdivisions(8);
   hframe_copy__1238->GetXaxis()->SetLabelFont(43);
   hframe_copy__1238->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1238->GetXaxis()->SetLabelSize(0);
   hframe_copy__1238->GetXaxis()->SetTitleSize(0);
   hframe_copy__1238->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1238->GetXaxis()->SetTitleFont(43);
   hframe_copy__1238->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1238->GetYaxis()->SetLabelFont(43);
   hframe_copy__1238->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1238->GetYaxis()->SetLabelSize(27);
   hframe_copy__1238->GetYaxis()->SetTitleSize(33);
   hframe_copy__1238->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1238->GetYaxis()->SetTitleFont(43);
   hframe_copy__1238->GetZaxis()->SetLabelFont(43);
   hframe_copy__1238->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1238->GetZaxis()->SetLabelSize(27);
   hframe_copy__1238->GetZaxis()->SetTitleSize(33);
   hframe_copy__1238->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1238->GetZaxis()->SetTitleFont(43);
   hframe_copy__1238->Draw("sameaxis");
   
   TH1F *hframe_copy__1239 = new TH1F("hframe_copy__1239","",1000,0,3.5);
   hframe_copy__1239->SetMinimum(0.08);
   hframe_copy__1239->SetMaximum(16521.28);
   hframe_copy__1239->SetDirectory(0);
   hframe_copy__1239->SetStats(0);
   hframe_copy__1239->SetLineStyle(0);
   hframe_copy__1239->SetMarkerStyle(20);
   hframe_copy__1239->GetXaxis()->SetNdivisions(8);
   hframe_copy__1239->GetXaxis()->SetLabelFont(43);
   hframe_copy__1239->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1239->GetXaxis()->SetLabelSize(0);
   hframe_copy__1239->GetXaxis()->SetTitleSize(0);
   hframe_copy__1239->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1239->GetXaxis()->SetTitleFont(43);
   hframe_copy__1239->GetYaxis()->SetTitle("Events / 0");
   hframe_copy__1239->GetYaxis()->SetLabelFont(43);
   hframe_copy__1239->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1239->GetYaxis()->SetLabelSize(27);
   hframe_copy__1239->GetYaxis()->SetTitleSize(33);
   hframe_copy__1239->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1239->GetYaxis()->SetTitleFont(43);
   hframe_copy__1239->GetZaxis()->SetLabelFont(43);
   hframe_copy__1239->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1239->GetZaxis()->SetLabelSize(27);
   hframe_copy__1239->GetZaxis()->SetTitleSize(33);
   hframe_copy__1239->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1239->GetZaxis()->SetTitleFont(43);
   hframe_copy__1239->Draw("sameaxis");
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
   BBPair_dRMin_dPhi_1->Modified();
   BBPair_dRMin_dPhi->cd();
   BBPair_dRMin_dPhi->Modified();
   BBPair_dRMin_dPhi->cd();
   BBPair_dRMin_dPhi->SetSelected(BBPair_dRMin_dPhi);
}
