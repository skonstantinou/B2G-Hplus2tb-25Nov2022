void MVAOutputM250()
{
//=========Macro generated from canvas: MVAOutputM250/MVAOutputM250
//=========  (Tue Dec 27 11:55:02 2022) by ROOT version 6.20/02
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
   0.1523478,
   0.06791702,
   0.05433703,
   0.04147003,
   0.03715256,
   0.03208363,
   0.029201,
   0.02764576,
   0.02912716,
   0.03141755,
   0.03926816,
   0.05435752,
   0.08169403,
   0.141016,
   0.4191499,
   8.879494,
   -0.9495243};
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
   0.1523478,
   0.06791702,
   0.05433703,
   0.04147003,
   0.03715256,
   0.03208363,
   0.029201,
   0.02764576,
   0.02912716,
   0.03141755,
   0.03926816,
   0.05435752,
   0.08169403,
   0.141016,
   0.4191499,
   8.879494,
   -0.9495243};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,BackgroundStatSystError_fx3033,BackgroundStatSystError_fy3033,BackgroundStatSystError_felx3033,BackgroundStatSystError_fehx3033,BackgroundStatSystError_fely3033,BackgroundStatSystError_fehy3033);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1219;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError302530293033 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError302530293033","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMinimum(-9.655393);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMaximum(11.65539);
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
   0.1523478,
   0.06791702,
   0.05433703,
   0.04147003,
   0.03715256,
   0.03208363,
   0.029201,
   0.02764576,
   0.02912716,
   0.03141755,
   0.03926816,
   0.05435752,
   0.08169403,
   0.141016,
   0.4191499,
   8.879494,
   -0.9495243,
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
   0.1523478,
   0.06791702,
   0.05433703,
   0.04147003,
   0.03715256,
   0.03208363,
   0.029201,
   0.02764576,
   0.02912716,
   0.03141755,
   0.03926816,
   0.05435752,
   0.08169403,
   0.141016,
   0.4191499,
   8.879494,
   -0.9495243,
   0};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3034,BackgroundStatError_fy3034,BackgroundStatError_felx3034,BackgroundStatError_fehx3034,BackgroundStatError_fely3034,BackgroundStatError_fehy3034);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1218;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError302630303034 = new TH1F("Graph_Graph_Graph_BackgroundStatError302630303034","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMinimum(-9.655393);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMaximum(11.65539);
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
   
   Double_t Graph1_fx3035[5] = {
   0.05,
   0.15,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3035[5] = {
   0.9118047,
   1.116592,
   1.067658,
   0.950223,
   0.1033903};
   Double_t Graph1_felx3035[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3035[5] = {
   0.1587248,
   0.07817705,
   0.06063893,
   0.04350772,
   0.01282399};
   Double_t Graph1_fehx3035[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3035[5] = {
   0.1587248,
   0.07817705,
   0.06063893,
   0.04350772,
   0.01282399};
   grae = new TGraphAsymmErrors(5,Graph1_fx3035,Graph1_fy3035,Graph1_felx3035,Graph1_fehx3035,Graph1_fely3035,Graph1_fehy3035);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1302730313035 = new TH1F("Graph_Graph_Graph_Graph1302730313035","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1302730313035->SetMinimum(0.08150972);
   Graph_Graph_Graph_Graph1302730313035->SetMaximum(1.305189);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMinimum(9.029176);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMaximum(36116.7);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,4.541536);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,69.40414);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,108.8987);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,208.1731);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,348.5764);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,476.6548);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,501.3498);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,661.9719);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,565.5297);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,519.567);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,322.7468);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,149.3872);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,72.43871);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,55.90281);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,3.734843);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.04835139);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,-0.002492908);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,2.822184);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,10.48658);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,17.7881);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,24.1878);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,39.11769);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,35.58476);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,36.38565);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,44.02032);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,40.77692);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,36.17776);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,28.60897);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,18.8786);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,14.89216);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,17.79562);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,2.030558);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.04089151);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.002492909);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1407.043);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,84.7327);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,512.5139);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1639.242);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2833.955);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3980.792);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,5308.274);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,6693.053);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,7347.314);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,7486.164);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,6266.785);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,4080.948);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2167.033);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,962.5569);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,260.9789);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,31.0841);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,4.140895);
   TT_stack_2_stack_2_stack_2->SetBinError(1,7.20416);
   TT_stack_2_stack_2_stack_2->SetBinError(2,18.04603);
   TT_stack_2_stack_2_stack_2->SetBinError(3,45.96948);
   TT_stack_2_stack_2_stack_2->SetBinError(4,60.22894);
   TT_stack_2_stack_2_stack_2->SetBinError(5,70.81115);
   TT_stack_2_stack_2_stack_2->SetBinError(6,81.81453);
   TT_stack_2_stack_2_stack_2->SetBinError(7,91.62345);
   TT_stack_2_stack_2_stack_2->SetBinError(8,95.76011);
   TT_stack_2_stack_2_stack_2->SetBinError(9,97.21124);
   TT_stack_2_stack_2_stack_2->SetBinError(10,88.8497);
   TT_stack_2_stack_2_stack_2->SetBinError(11,71.58484);
   TT_stack_2_stack_2_stack_2->SetBinError(12,51.98987);
   TT_stack_2_stack_2_stack_2->SetBinError(13,34.85774);
   TT_stack_2_stack_2_stack_2->SetBinError(14,17.94948);
   TT_stack_2_stack_2_stack_2->SetBinError(15,6.234842);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.435357);
   TT_stack_2_stack_2_stack_2->SetEntries(39682.78);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,272.6454);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1245.07);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,4058.959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,6997.621);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8244.34);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,11166.06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,12999.35);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,14563.65);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,12142.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,10280.6);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,6745.593);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3536.638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1485.733);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,539.8292);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,62.7371);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,-3.77789);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,-0.04554471);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,54.59208);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,122.3156);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,311.6669);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,411.2587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,460.0874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,536.4812);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,581.3786);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,615.0819);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,578.6868);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,527.5503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,430.9716);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,313.3129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,202.4097);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,118.1362);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,40.36143);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,2.721971);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.04554471);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3627.053);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(1,1.894121);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(2,51.0023);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(3,168.4909);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(4,294.9867);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(5,428.5974);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(6,571.2704);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(7,571.5286);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(8,546.342);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(9,413.6599);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(10,277.4176);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(11,135.6911);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(12,56.28387);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(13,8.306653);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(14,4.316306);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(15,1.318052);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(16,0.01659863);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(1,2.412177);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(2,7.632528);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(3,18.66954);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(4,24.69776);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(5,29.8118);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(6,32.23181);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(7,33.17553);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(8,31.16254);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(9,27.44471);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(10,23.16916);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(11,17.04321);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(12,11.30452);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(13,6.875055);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(14,3.4331);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(15,1.280161);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(16,0.5582537);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetEntries(1836.014);
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
   361.9196,
   1826.988,
   5807.101,
   10039.75,
   12573.71,
   16950.99,
   20193.76,
   22572.94,
   20194.56,
   17066.96,
   11149.29,
   5853.058,
   2520.729,
   856.7109,
   97.55604,
   0.4113565,
   -0.04803762,
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
   55.13764,
   124.0836,
   315.5406,
   416.3487,
   467.1454,
   543.8492,
   589.6778,
   624.0461,
   588.2101,
   536.2018,
   437.812,
   318.1577,
   205.9285,
   120.8099,
   40.89061,
   3.652638,
   0.04561289,
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
   55.13764,
   124.0836,
   315.5406,
   416.3487,
   467.1454,
   543.8492,
   589.6778,
   624.0461,
   588.2101,
   536.2018,
   437.812,
   318.1577,
   205.9285,
   120.8099,
   40.89061,
   3.652638,
   0.04561289,
   0};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3036,BkgSum-SR-Inclusive_sum_errors_fy3036,BkgSum-SR-Inclusive_sum_errors_felx3036,BkgSum-SR-Inclusive_sum_errors_fehx3036,BkgSum-SR-Inclusive_sum_errors_fely3036,BkgSum-SR-Inclusive_sum_errors_fehy3036);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1217;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMinimum(25.51669);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMaximum(25516.69);
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
   Data__61->SetBinContent(1,330);
   Data__61->SetBinContent(2,2040);
   Data__61->SetBinContent(3,6200);
   Data__61->SetBinContent(4,9540);
   Data__61->SetBinContent(5,1300);
   Data__61->SetBinError(1,57.44563);
   Data__61->SetBinError(2,142.8286);
   Data__61->SetBinError(3,352.1363);
   Data__61->SetBinError(4,436.8066);
   Data__61->SetBinError(5,161.2452);
   Data__61->SetEntries(1033.602);
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
      tex = new TLatex(0.19,0.885,"Data blinded in signal region");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
   
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

   ci = 1217;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1217;
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
   MVAOutputM250_1->Modified();
   MVAOutputM250->cd();
   MVAOutputM250->Modified();
   MVAOutputM250->cd();
   MVAOutputM250->SetSelected(MVAOutputM250);
}
