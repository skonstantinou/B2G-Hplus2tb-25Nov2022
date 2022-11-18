void MVAOutputM250()
{
//=========Macro generated from canvas: MVAOutputM250/MVAOutputM250
//=========  (Fri Nov 18 13:27:21 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM250 = new TCanvas("MVAOutputM250", "MVAOutputM250",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM250->SetHighLightColor(2);
   MVAOutputM250->Range(0,0,1,1);
   MVAOutputM250->SetFillColor(0);
   MVAOutputM250->SetBorderMode(0);
   MVAOutputM250->SetBorderSize(2);
   MVAOutputM250->SetTickx(1);
   MVAOutputM250->SetTicky(1);
   MVAOutputM250->SetLeftMargin(0.16);
   MVAOutputM250->SetRightMargin(0.05);
   MVAOutputM250->SetTopMargin(0.06);
   MVAOutputM250->SetBottomMargin(0.13);
   MVAOutputM250->SetFrameFillStyle(0);
   MVAOutputM250->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM250_2
   TPad *MVAOutputM250_2 = new TPad("MVAOutputM250_2", "MVAOutputM250_2",0,0,1,0.304);
   MVAOutputM250_2->Draw();
   MVAOutputM250_2->cd();
   MVAOutputM250_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM250_2->SetFillColor(0);
   MVAOutputM250_2->SetFillStyle(4000);
   MVAOutputM250_2->SetBorderMode(0);
   MVAOutputM250_2->SetBorderSize(2);
   MVAOutputM250_2->SetTickx(1);
   MVAOutputM250_2->SetTicky(1);
   MVAOutputM250_2->SetLeftMargin(0.16);
   MVAOutputM250_2->SetRightMargin(0.05);
   MVAOutputM250_2->SetTopMargin(0);
   MVAOutputM250_2->SetBottomMargin(0.3421053);
   MVAOutputM250_2->SetFrameFillStyle(0);
   MVAOutputM250_2->SetFrameBorderMode(0);
   MVAOutputM250_2->SetFrameFillStyle(0);
   MVAOutputM250_2->SetFrameBorderMode(0);
   
   TH1F *hframe__57 = new TH1F("hframe__57","",1000,0,1.01);
   hframe__57->SetMinimum(0.3);
   hframe__57->SetMaximum(1.7);
   hframe__57->SetDirectory(0);
   hframe__57->SetStats(0);
   hframe__57->SetLineStyle(0);
   hframe__57->SetMarkerStyle(20);
   hframe__57->GetXaxis()->SetTitle("DNN Output");
   hframe__57->GetXaxis()->SetLabelFont(43);
   hframe__57->GetXaxis()->SetLabelOffset(0.007);
   hframe__57->GetXaxis()->SetLabelSize(27);
   hframe__57->GetXaxis()->SetTitleSize(33);
   hframe__57->GetXaxis()->SetTitleOffset(2.960526);
   hframe__57->GetXaxis()->SetTitleFont(43);
   hframe__57->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__57->GetYaxis()->SetNdivisions(505);
   hframe__57->GetYaxis()->SetLabelFont(43);
   hframe__57->GetYaxis()->SetLabelOffset(0.007);
   hframe__57->GetYaxis()->SetLabelSize(21);
   hframe__57->GetYaxis()->SetTitleSize(33);
   hframe__57->GetYaxis()->SetTitleOffset(1.5625);
   hframe__57->GetYaxis()->SetTitleFont(43);
   hframe__57->GetZaxis()->SetLabelFont(43);
   hframe__57->GetZaxis()->SetLabelOffset(0.007);
   hframe__57->GetZaxis()->SetLabelSize(27);
   hframe__57->GetZaxis()->SetTitleSize(33);
   hframe__57->GetZaxis()->SetTitleOffset(1);
   hframe__57->GetZaxis()->SetTitleFont(43);
   hframe__57->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3033[17] = {
   0.05,
   0.15,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925};
   Double_t BackgroundStatSystError_fy3033[17] = {
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
   Double_t BackgroundStatSystError_felx3033[17] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3033[17] = {
   0.04758403,
   0.02487363,
   0.02605943,
   0.02192481,
   0.01946107,
   0.01804755,
   0.01706912,
   0.01766704,
   0.01865833,
   0.02125579,
   0.02711037,
   0.03545961,
   0.05012813,
   0.07884586,
   0.1536569,
   0.538978,
   1};
   Double_t BackgroundStatSystError_fehx3033[17] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3033[17] = {
   0.04758403,
   0.02487363,
   0.02605943,
   0.02192481,
   0.01946107,
   0.01804755,
   0.01706912,
   0.01766704,
   0.01865833,
   0.02125579,
   0.02711037,
   0.03545961,
   0.05012813,
   0.07884586,
   0.1536569,
   0.538978,
   1};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,BackgroundStatSystError_fx3033,BackgroundStatSystError_fy3033,BackgroundStatSystError_felx3033,BackgroundStatSystError_fehx3033,BackgroundStatSystError_fely3033,BackgroundStatSystError_fehy3033);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1218;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError302530293033 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError302530293033","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMinimum(4.205503e-08);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMaximum(2.2);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError302530293033);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3034[18] = {
   0.05,
   0.15,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BackgroundStatError_fy3034[18] = {
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
   Double_t BackgroundStatError_felx3034[18] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fely3034[18] = {
   0.04758403,
   0.02487363,
   0.02605943,
   0.02192481,
   0.01946107,
   0.01804755,
   0.01706912,
   0.01766704,
   0.01865833,
   0.02125579,
   0.02711037,
   0.03545961,
   0.05012813,
   0.07884586,
   0.1536569,
   0.538978,
   1,
   0};
   Double_t BackgroundStatError_fehx3034[18] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fehy3034[18] = {
   0.04758403,
   0.02487363,
   0.02605943,
   0.02192481,
   0.01946107,
   0.01804755,
   0.01706912,
   0.01766704,
   0.01865833,
   0.02125579,
   0.02711037,
   0.03545961,
   0.05012813,
   0.07884586,
   0.1536569,
   0.538978,
   1,
   0};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3034,BackgroundStatError_fy3034,BackgroundStatError_felx3034,BackgroundStatError_fehx3034,BackgroundStatError_fely3034,BackgroundStatError_fehy3034);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1217;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError302630303034 = new TH1F("Graph_Graph_Graph_BackgroundStatError302630303034","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMinimum(4.205503e-08);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMaximum(2.2);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError302630303034->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError302630303034);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx9[2] = {
   0,
   1.01};
   Double_t Graph0_fy9[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx9,Graph0_fy9);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0789 = new TH1F("Graph_Graph_Graph_Graph0789","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0789->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0789->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0789->SetDirectory(0);
   Graph_Graph_Graph_Graph0789->SetStats(0);
   Graph_Graph_Graph_Graph0789->SetLineStyle(0);
   Graph_Graph_Graph_Graph0789->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0789->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0789->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0789->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0789);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3035[16] = {
   0.05,
   0.15,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875};
   Double_t Graph1_fy3035[16] = {
   1.003371,
   1.036672,
   1.034403,
   0.9456101,
   0.9532116,
   1.054885,
   0.965469,
   0.9819096,
   0.9841553,
   0.9064199,
   1.002051,
   0.8617029,
   0.9995217,
   1.033527,
   0.8127942,
   0.8482454};
   Double_t Graph1_felx3035[16] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3035[16] = {
   0.0582215,
   0.0309351,
   0.03284234,
   0.02598771,
   0.02329762,
   0.02297576,
   0.02074958,
   0.02179333,
   0.0230753,
   0.02478927,
   0.0329829,
   0.03945467,
   0.06060491,
   0.09722607,
   0.1594021,
   0.5998001};
   Double_t Graph1_fehx3035[16] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3035[16] = {
   0.0582215,
   0.0309351,
   0.03284234,
   0.02598771,
   0.02329762,
   0.02297576,
   0.02074958,
   0.02179333,
   0.0230753,
   0.02478927,
   0.0329829,
   0.03945467,
   0.06060491,
   0.09722607,
   0.1594021,
   0.5998001};
   grae = new TGraphAsymmErrors(16,Graph1_fx3035,Graph1_fy3035,Graph1_felx3035,Graph1_fehx3035,Graph1_fely3035,Graph1_fehy3035);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1302730313035 = new TH1F("Graph_Graph_Graph_Graph1302730313035","Graph",100,0,0.99);
   Graph_Graph_Graph_Graph1302730313035->SetMinimum(0.1284853);
   Graph_Graph_Graph_Graph1302730313035->SetMaximum(1.568006);
   Graph_Graph_Graph_Graph1302730313035->SetDirectory(0);
   Graph_Graph_Graph_Graph1302730313035->SetStats(0);
   Graph_Graph_Graph_Graph1302730313035->SetLineStyle(0);
   Graph_Graph_Graph_Graph1302730313035->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1302730313035->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1302730313035->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1302730313035->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1302730313035);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__58 = new TH1F("hframe_copy__58","",1000,0,1.01);
   hframe_copy__58->SetMinimum(0.3);
   hframe_copy__58->SetMaximum(1.7);
   hframe_copy__58->SetDirectory(0);
   hframe_copy__58->SetStats(0);
   hframe_copy__58->SetLineStyle(0);
   hframe_copy__58->SetMarkerStyle(20);
   hframe_copy__58->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__58->GetXaxis()->SetLabelFont(43);
   hframe_copy__58->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__58->GetXaxis()->SetLabelSize(27);
   hframe_copy__58->GetXaxis()->SetTitleSize(33);
   hframe_copy__58->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__58->GetXaxis()->SetTitleFont(43);
   hframe_copy__58->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__58->GetYaxis()->SetNdivisions(505);
   hframe_copy__58->GetYaxis()->SetLabelFont(43);
   hframe_copy__58->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__58->GetYaxis()->SetLabelSize(21);
   hframe_copy__58->GetYaxis()->SetTitleSize(33);
   hframe_copy__58->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__58->GetYaxis()->SetTitleFont(43);
   hframe_copy__58->GetZaxis()->SetLabelFont(43);
   hframe_copy__58->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__58->GetZaxis()->SetLabelSize(27);
   hframe_copy__58->GetZaxis()->SetTitleSize(33);
   hframe_copy__58->GetZaxis()->SetTitleOffset(1);
   hframe_copy__58->GetZaxis()->SetTitleFont(43);
   hframe_copy__58->Draw("sameaxis");
   MVAOutputM250_2->Modified();
   MVAOutputM250->cd();
  
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
   MVAOutputM250->cd();
  
// ------------>Primitives in pad: MVAOutputM250_1
   TPad *MVAOutputM250_1 = new TPad("MVAOutputM250_1", "MVAOutputM250_1",0,0.2897959,1,1);
   MVAOutputM250_1->Draw();
   MVAOutputM250_1->cd();
   MVAOutputM250_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM250_1->SetFillColor(0);
   MVAOutputM250_1->SetFillStyle(4000);
   MVAOutputM250_1->SetBorderMode(0);
   MVAOutputM250_1->SetBorderSize(2);
   MVAOutputM250_1->SetLogy();
   MVAOutputM250_1->SetTickx(1);
   MVAOutputM250_1->SetTicky(1);
   MVAOutputM250_1->SetLeftMargin(0.16);
   MVAOutputM250_1->SetRightMargin(0.05);
   MVAOutputM250_1->SetTopMargin(0.06);
   MVAOutputM250_1->SetBottomMargin(0.02);
   MVAOutputM250_1->SetFrameFillStyle(0);
   MVAOutputM250_1->SetFrameBorderMode(0);
   MVAOutputM250_1->SetFrameFillStyle(0);
   MVAOutputM250_1->SetFrameBorderMode(0);
   
   TH1F *hframe__59 = new TH1F("hframe__59","",1000,0,1.01);
   hframe__59->SetMinimum(0.01);
   hframe__59->SetMaximum(500000);
   hframe__59->SetDirectory(0);
   hframe__59->SetStats(0);
   hframe__59->SetLineStyle(0);
   hframe__59->SetMarkerStyle(20);
   hframe__59->GetXaxis()->SetLabelFont(43);
   hframe__59->GetXaxis()->SetLabelOffset(0.007);
   hframe__59->GetXaxis()->SetLabelSize(0);
   hframe__59->GetXaxis()->SetTitleSize(0);
   hframe__59->GetXaxis()->SetTitleOffset(0.9);
   hframe__59->GetXaxis()->SetTitleFont(43);
   hframe__59->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__59->GetYaxis()->SetLabelFont(43);
   hframe__59->GetYaxis()->SetLabelOffset(0.007);
   hframe__59->GetYaxis()->SetLabelSize(27);
   hframe__59->GetYaxis()->SetTitleSize(33);
   hframe__59->GetYaxis()->SetTitleOffset(1.5625);
   hframe__59->GetYaxis()->SetTitleFont(43);
   hframe__59->GetZaxis()->SetLabelFont(43);
   hframe__59->GetZaxis()->SetLabelOffset(0.007);
   hframe__59->GetZaxis()->SetLabelSize(27);
   hframe__59->GetZaxis()->SetTitleSize(33);
   hframe__59->GetZaxis()->SetTitleOffset(1);
   hframe__59->GetZaxis()->SetTitleFont(43);
   hframe__59->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis49[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_7_stack_8_stack_9 = new TH1F("StackedMCstackHist_stack_7_stack_8_stack_9","StackedMCstackHist",18, xAxis49);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMinimum(17.93947);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMaximum(71757.87);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetDirectory(0);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetStats(0);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetLineStyle(0);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMarkerStyle(20);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_7_stack_8_stack_9->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_7_stack_8_stack_9);
   
   Double_t xAxis50[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM250Inclusive",18, xAxis50);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,72.99522);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,320.5549);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,541.1661);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,773.5516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,968.546);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,983.4931);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1067.149);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1130.643);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,851.2382);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,729.4601);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,447.3534);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,282.858);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,141.6901);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,48.02395);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,13.69203);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.4272742);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,11.95107);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,23.80759);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,45.5974);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,54.72968);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,60.39822);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,75.4196);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,75.0658);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,90.35453);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,62.71049);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,67.42623);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,40.19754);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,31.67749);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,22.17396);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,14.14719);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,4.96645);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.2080699);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1721.043);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,200);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis51[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM250Inclusive",18, xAxis51);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1628.951);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,5958.816);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,11460.59);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,15709.11);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,20214.6);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,24719.75);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,27485.09);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,27435.72);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,23820.03);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,17836.9);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,11769.57);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,7007.185);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,3609.946);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1541.118);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,302.8581);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,25.14295);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.9735957);
   TT_stack_2_stack_2_stack_2->SetBinError(1,30.90723);
   TT_stack_2_stack_2_stack_2->SetBinError(2,59.27524);
   TT_stack_2_stack_2_stack_2->SetBinError(3,116.0239);
   TT_stack_2_stack_2_stack_2->SetBinError(4,135.7723);
   TT_stack_2_stack_2_stack_2->SetBinError(5,154.3711);
   TT_stack_2_stack_2_stack_2->SetBinError(6,170.2532);
   TT_stack_2_stack_2_stack_2->SetBinError(7,179.5682);
   TT_stack_2_stack_2_stack_2->SetBinError(8,179.7486);
   TT_stack_2_stack_2_stack_2->SetBinError(9,167.7943);
   TT_stack_2_stack_2_stack_2->SetBinError(10,144.9457);
   TT_stack_2_stack_2_stack_2->SetBinError(11,117.8109);
   TT_stack_2_stack_2_stack_2->SetBinError(12,90.97517);
   TT_stack_2_stack_2_stack_2->SetBinError(13,65.29719);
   TT_stack_2_stack_2_stack_2->SetBinError(14,43.03469);
   TT_stack_2_stack_2_stack_2->SetBinError(15,18.98614);
   TT_stack_2_stack_2_stack_2->SetBinError(16,5.259189);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.9735956);
   TT_stack_2_stack_2_stack_2->SetEntries(173651.7);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,200);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis52[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM250Inclusive",18, xAxis52);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1258.075);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,4553.369);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,7178.377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11520.42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,13940.22);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,14263.19);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,16296.43);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,12781.63);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,12294.44);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,10934.32);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,6205.299);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3781.057);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1690.967);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,597.5444);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,323.2182);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,21.58594);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,136.8962);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,261.7685);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,484.0278);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,596.2551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,663.1336);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,696.8457);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,740.3732);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,702.248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,666.051);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,606.3405);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,483.6716);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,380.5741);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,263.9687);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,166.3535);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,96.32603);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,24.86519);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3511.589);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,200);
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
   Double_t xAxis53[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__60 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__60","h_SR_MVAOutputM250Inclusive",18, xAxis53);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(1,9.957171);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(2,18.52944);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(3,65.94762);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(4,106.9276);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(5,106.1724);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(6,94.10299);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(7,77.48821);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(8,50.84235);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(9,54.41451);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(10,21.33442);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(11,19.15689);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(12,-5.031752);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(13,6.64223);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(14,0.2858595);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(15,-0.8932719);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(1,2.930981);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(2,6.265526);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(3,12.86115);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(4,14.79728);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(5,15.52014);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(6,15.34339);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(7,14.72587);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(8,13.13199);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(9,11.10138);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(10,8.51498);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(11,6.717306);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(12,4.378759);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(13,2.83283);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(14,1.559675);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(15,0.8932719);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetEntries(249.6461);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3036[18] = {
   0.05,
   0.15,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3036[18] = {
   2960.021,
   10832.74,
   19180.14,
   28003.09,
   35123.37,
   39966.43,
   44848.67,
   41348,
   36965.71,
   29500.68,
   18422.22,
   11071.1,
   5442.603,
   2186.686,
   639.7683,
   47.15616,
   0.9735957,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3036[18] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3036[18] = {
   140.8497,
   269.4496,
   499.8235,
   613.9622,
   683.5383,
   721.2961,
   765.5273,
   730.4969,
   689.7184,
   627.0601,
   499.4332,
   392.5769,
   272.8275,
   172.4112,
   98.30484,
   25.41613,
   0.9735956,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3036[18] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3036[18] = {
   140.8497,
   269.4496,
   499.8235,
   613.9622,
   683.5383,
   721.2961,
   765.5273,
   730.4969,
   689.7184,
   627.0601,
   499.4332,
   392.5769,
   272.8275,
   172.4112,
   98.30484,
   25.41613,
   0.9735956,
   0};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3036,BkgSum-SR-Inclusive_sum_errors_fy3036,BkgSum-SR-Inclusive_sum_errors_felx3036,BkgSum-SR-Inclusive_sum_errors_fehx3036,BkgSum-SR-Inclusive_sum_errors_fely3036,BkgSum-SR-Inclusive_sum_errors_fehy3036);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1216;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMinimum(50.17561);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMaximum(50175.61);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors302830323036);
   
   grae->Draw("e2 ");
   Double_t xAxis54[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__61 = new TH1F("Data__61","h_SR_MVAOutputM250Inclusive",18, xAxis54);
   Data__61->SetBinContent(1,2970);
   Data__61->SetBinContent(2,11230);
   Data__61->SetBinContent(3,19840);
   Data__61->SetBinContent(4,26480);
   Data__61->SetBinContent(5,33480);
   Data__61->SetBinContent(6,42160);
   Data__61->SetBinContent(7,43300);
   Data__61->SetBinContent(8,40600);
   Data__61->SetBinContent(9,36380);
   Data__61->SetBinContent(10,26740);
   Data__61->SetBinContent(11,18460);
   Data__61->SetBinContent(12,9540);
   Data__61->SetBinContent(13,5440);
   Data__61->SetBinContent(14,2260);
   Data__61->SetBinContent(15,520);
   Data__61->SetBinContent(16,40);
   Data__61->SetBinError(1,172.3369);
   Data__61->SetBinError(2,335.1119);
   Data__61->SetBinError(3,629.9206);
   Data__61->SetBinError(4,727.7362);
   Data__61->SetBinError(5,818.2909);
   Data__61->SetBinError(6,918.2592);
   Data__61->SetBinError(7,930.5912);
   Data__61->SetBinError(8,901.1104);
   Data__61->SetBinError(9,852.9947);
   Data__61->SetBinError(10,731.3002);
   Data__61->SetBinError(11,607.6183);
   Data__61->SetBinError(12,436.8066);
   Data__61->SetBinError(13,329.8485);
   Data__61->SetBinError(14,212.6029);
   Data__61->SetBinError(15,101.9804);
   Data__61->SetBinError(16,28.28427);
   Data__61->SetEntries(16335.07);
   Data__61->SetDirectory(0);
   Data__61->SetFillStyle(3001);
   Data__61->SetLineWidth(2);
   Data__61->SetMarkerStyle(20);
   Data__61->SetMarkerSize(1.2);
   Data__61->GetXaxis()->SetRange(1,200);
   Data__61->GetXaxis()->SetLabelFont(42);
   Data__61->GetXaxis()->SetTitleOffset(1);
   Data__61->GetXaxis()->SetTitleFont(42);
   Data__61->GetYaxis()->SetLabelFont(42);
   Data__61->GetYaxis()->SetTitleFont(42);
   Data__61->GetZaxis()->SetLabelFont(42);
   Data__61->GetZaxis()->SetTitleOffset(1);
   Data__61->GetZaxis()->SetTitleFont(42);
   Data__61->Draw("EP same");
   
   TLegend *leg = new TLegend(0.39,0.76,0.92,0.91,NULL,"brNDC");
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

   ci = 1216;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1216;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__62 = new TH1F("hframe_copy__62","",1000,0,1.01);
   hframe_copy__62->SetMinimum(0.01);
   hframe_copy__62->SetMaximum(500000);
   hframe_copy__62->SetDirectory(0);
   hframe_copy__62->SetStats(0);
   hframe_copy__62->SetLineStyle(0);
   hframe_copy__62->SetMarkerStyle(20);
   hframe_copy__62->GetXaxis()->SetLabelFont(43);
   hframe_copy__62->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__62->GetXaxis()->SetLabelSize(0);
   hframe_copy__62->GetXaxis()->SetTitleSize(0);
   hframe_copy__62->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__62->GetXaxis()->SetTitleFont(43);
   hframe_copy__62->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__62->GetYaxis()->SetLabelFont(43);
   hframe_copy__62->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__62->GetYaxis()->SetLabelSize(27);
   hframe_copy__62->GetYaxis()->SetTitleSize(33);
   hframe_copy__62->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__62->GetYaxis()->SetTitleFont(43);
   hframe_copy__62->GetZaxis()->SetLabelFont(43);
   hframe_copy__62->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__62->GetZaxis()->SetLabelSize(27);
   hframe_copy__62->GetZaxis()->SetTitleSize(33);
   hframe_copy__62->GetZaxis()->SetTitleOffset(1);
   hframe_copy__62->GetZaxis()->SetTitleFont(43);
   hframe_copy__62->Draw("sameaxis");
   
   TH1F *hframe_copy__63 = new TH1F("hframe_copy__63","",1000,0,1.01);
   hframe_copy__63->SetMinimum(0.01);
   hframe_copy__63->SetMaximum(500000);
   hframe_copy__63->SetDirectory(0);
   hframe_copy__63->SetStats(0);
   hframe_copy__63->SetLineStyle(0);
   hframe_copy__63->SetMarkerStyle(20);
   hframe_copy__63->GetXaxis()->SetLabelFont(43);
   hframe_copy__63->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__63->GetXaxis()->SetLabelSize(0);
   hframe_copy__63->GetXaxis()->SetTitleSize(0);
   hframe_copy__63->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__63->GetXaxis()->SetTitleFont(43);
   hframe_copy__63->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__63->GetYaxis()->SetLabelFont(43);
   hframe_copy__63->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__63->GetYaxis()->SetLabelSize(27);
   hframe_copy__63->GetYaxis()->SetTitleSize(33);
   hframe_copy__63->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__63->GetYaxis()->SetTitleFont(43);
   hframe_copy__63->GetZaxis()->SetLabelFont(43);
   hframe_copy__63->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__63->GetZaxis()->SetLabelSize(27);
   hframe_copy__63->GetZaxis()->SetTitleSize(33);
   hframe_copy__63->GetZaxis()->SetTitleOffset(1);
   hframe_copy__63->GetZaxis()->SetTitleFont(43);
   hframe_copy__63->Draw("sameaxis");
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
   MVAOutputM250_1->Modified();
   MVAOutputM250->cd();
   MVAOutputM250->Modified();
   MVAOutputM250->cd();
   MVAOutputM250->SetSelected(MVAOutputM250);
}
