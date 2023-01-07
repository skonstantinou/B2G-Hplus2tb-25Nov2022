void MVAOutputM250()
{
//=========Macro generated from canvas: MVAOutputM250/MVAOutputM250
//=========  (Tue Dec 27 11:52:01 2022) by ROOT version 6.20/02
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
   0.1205361,
   0.05564751,
   0.05112507,
   0.03967774,
   0.03283141,
   0.02689416,
   0.0216215,
   0.01821397,
   0.01725542,
   0.01801547,
   0.02153423,
   0.02859365,
   0.04190093,
   0.07658816,
   0.1769863,
   0.3727149,
   1.030754};
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
   0.1205361,
   0.05564751,
   0.05112507,
   0.03967774,
   0.03283141,
   0.02689416,
   0.0216215,
   0.01821397,
   0.01725542,
   0.01801547,
   0.02153423,
   0.02859365,
   0.04190093,
   0.07658816,
   0.1769863,
   0.3727149,
   1.030754};
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
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMinimum(-0.2369044);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMaximum(2.236904);
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
   0.1205361,
   0.05564751,
   0.05112507,
   0.03967774,
   0.03283141,
   0.02689416,
   0.0216215,
   0.01821397,
   0.01725542,
   0.01801547,
   0.02153423,
   0.02859365,
   0.04190093,
   0.07658816,
   0.1769863,
   0.3727149,
   1.030754,
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
   0.1205361,
   0.05564751,
   0.05112507,
   0.03967774,
   0.03283141,
   0.02689416,
   0.0216215,
   0.01821397,
   0.01725542,
   0.01801547,
   0.02153423,
   0.02859365,
   0.04190093,
   0.07658816,
   0.1769863,
   0.3727149,
   1.030754,
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
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMinimum(-0.2369044);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMaximum(2.236904);
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
   0.8075241,
   0.9586775,
   1.044943,
   1.00777,
   0.09423522};
   Double_t Graph1_felx3035[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3035[5] = {
   0.1293073,
   0.06003471,
   0.05666997,
   0.04365137,
   0.01110573};
   Double_t Graph1_fehx3035[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3035[5] = {
   0.1293073,
   0.06003471,
   0.05666997,
   0.04365137,
   0.01110573};
   grae = new TGraphAsymmErrors(5,Graph1_fx3035,Graph1_fy3035,Graph1_felx3035,Graph1_fehx3035,Graph1_fely3035,Graph1_fehy3035);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1302730313035 = new TH1F("Graph_Graph_Graph_Graph1302730313035","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1302730313035->SetMinimum(0.07481655);
   Graph_Graph_Graph_Graph1302730313035->SetMaximum(1.203461);
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
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMinimum(20.63035);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMaximum(82521.4);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,22.16839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,104.8587);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,259.3409);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,354.1429);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,556.0223);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,885.2792);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1315.52);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1782.699);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,2115.322);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1819.557);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1253.021);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,708.72);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,356.5474);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,100.1718);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,11.95094);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,1.848935);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.03817413);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,6.421051);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,13.15665);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,29.4914);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,31.53304);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,46.10984);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,51.31189);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,60.38787);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,76.39761);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,78.91343);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,67.85649);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,55.09329);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,42.87154);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,29.52366);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,17.39528);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,6.430759);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.754693);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.03107045);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4080.049);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,230.2417);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1138.975);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2820.861);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4295.618);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,6664.887);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,10522.09);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,16198.17);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,22896.47);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,26506.59);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,24528.64);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,17946.19);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,10546.99);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,4545.465);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1460.629);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,317.3287);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,47.7644);
   TT_stack_2_stack_2_stack_2->SetBinError(1,11.83675);
   TT_stack_2_stack_2_stack_2->SetBinError(2,26.34818);
   TT_stack_2_stack_2_stack_2->SetBinError(3,58.37824);
   TT_stack_2_stack_2_stack_2->SetBinError(4,72.35172);
   TT_stack_2_stack_2_stack_2->SetBinError(5,90.13941);
   TT_stack_2_stack_2_stack_2->SetBinError(6,113.2376);
   TT_stack_2_stack_2_stack_2->SetBinError(7,140.9214);
   TT_stack_2_stack_2_stack_2->SetBinError(8,167.9649);
   TT_stack_2_stack_2_stack_2->SetBinError(9,181.253);
   TT_stack_2_stack_2_stack_2->SetBinError(10,174.1291);
   TT_stack_2_stack_2_stack_2->SetBinError(11,149.2106);
   TT_stack_2_stack_2_stack_2->SetBinError(12,114.2864);
   TT_stack_2_stack_2_stack_2->SetBinError(13,75.71052);
   TT_stack_2_stack_2_stack_2->SetBinError(14,42.80017);
   TT_stack_2_stack_2_stack_2->SetBinError(15,20.45525);
   TT_stack_2_stack_2_stack_2->SetBinError(16,7.517776);
   TT_stack_2_stack_2_stack_2->SetEntries(122683.2);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,230.5477);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1416.08);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3427.332);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5928.049);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8060);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,11512.75);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,17294.07);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,22922.88);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,22953.96);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,19427.12);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,13407.83);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,8463.321);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3844.661);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1020.395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,166.707);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,3.065051);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,-0.007793951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,56.63492);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,145.0582);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,326.2059);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,412.2159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,491.3711);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,603.7503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,736.8141);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,847.1591);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,867.7297);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,803.2093);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,683.9152);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,550.4683);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,357.3708);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,192.2147);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,85.12379);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,17.92734);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.003901779);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4352.528);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(1,13.76997);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(2,124.4353);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(3,491.0987);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(4,796.8549);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(5,1116.214);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(6,1413.858);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(7,1548.894);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(8,1738.986);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(9,1641.009);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(10,1230.248);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(11,921.9097);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(12,461.4198);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(13,249.0453);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(14,86.12546);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(15,26.38371);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(16,6.942029);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(17,0.3497421);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(1,3.261198);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(2,11.60138);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(3,30.41238);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(4,39.03729);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(5,45.38535);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(6,50.50093);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(7,54.77951);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(8,57.0122);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(9,55.33884);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(10,49.26128);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(11,40.55485);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(12,30.01685);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(13,20.95512);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(14,12.7016);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(15,7.031076);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(16,3.107652);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(17,0.3497421);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetEntries(6358.447);
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
   482.9577,
   2659.914,
   6507.534,
   10577.81,
   15280.91,
   22920.12,
   34807.75,
   47602.05,
   51575.88,
   45775.32,
   32607.04,
   19719.03,
   8746.673,
   2581.196,
   495.9867,
   52.67839,
   0.03038018,
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
   58.21385,
   148.0176,
   332.6982,
   419.7036,
   501.6939,
   616.4171,
   752.5959,
   867.0221,
   889.9634,
   824.664,
   702.1674,
   563.8392,
   366.4937,
   197.689,
   87.78287,
   19.63402,
   0.03131448,
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
   58.21385,
   148.0176,
   332.6982,
   419.7036,
   501.6939,
   616.4171,
   752.5959,
   867.0221,
   889.9634,
   824.664,
   702.1674,
   563.8392,
   366.4937,
   197.689,
   87.78287,
   19.63402,
   0.03131448,
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMinimum(57.71242);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMaximum(57712.42);
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
   Data__61->SetBinContent(1,390);
   Data__61->SetBinContent(2,2550);
   Data__61->SetBinContent(3,6800);
   Data__61->SetBinContent(4,10660);
   Data__61->SetBinContent(5,1440);
   Data__61->SetBinError(1,62.44998);
   Data__61->SetBinError(2,159.6872);
   Data__61->SetBinError(3,368.7818);
   Data__61->SetBinError(4,461.7359);
   Data__61->SetBinError(5,169.7056);
   Data__61->SetEntries(1170.804);
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
