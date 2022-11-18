void MVAOutputM250()
{
//=========Macro generated from canvas: MVAOutputM250/MVAOutputM250
//=========  (Fri Nov 18 13:27:12 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3033[18] = {
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
   Double_t BackgroundStatSystError_fy3033[18] = {
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
   Double_t BackgroundStatSystError_felx3033[18] = {
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
   Double_t BackgroundStatSystError_fely3033[18] = {
   0.06881273,
   0.0395219,
   0.0432375,
   0.03845067,
   0.03642969,
   0.03311823,
   0.03136191,
   0.03119229,
   0.0324193,
   0.03603234,
   0.04238223,
   0.0502131,
   0.06996571,
   0.1034213,
   0.197588,
   0.4921354,
   1.850971,
   -1};
   Double_t BackgroundStatSystError_fehx3033[18] = {
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
   Double_t BackgroundStatSystError_fehy3033[18] = {
   0.06881273,
   0.0395219,
   0.0432375,
   0.03845067,
   0.03642969,
   0.03311823,
   0.03136191,
   0.03119229,
   0.0324193,
   0.03603234,
   0.04238223,
   0.0502131,
   0.06996571,
   0.1034213,
   0.197588,
   0.4921354,
   1.850971,
   -1};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,BackgroundStatSystError_fx3033,BackgroundStatSystError_fy3033,BackgroundStatSystError_felx3033,BackgroundStatSystError_fehx3033,BackgroundStatSystError_fely3033,BackgroundStatSystError_fehy3033);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError302530293033 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError302530293033","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMinimum(-1.221165);
   Graph_Graph_Graph_BackgroundStatSystError302530293033->SetMaximum(3.221165);
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
   0.06881273,
   0.0395219,
   0.0432375,
   0.03845067,
   0.03642969,
   0.03311823,
   0.03136191,
   0.03119229,
   0.0324193,
   0.03603234,
   0.04238223,
   0.0502131,
   0.06996571,
   0.1034213,
   0.197588,
   0.4921354,
   1.850971,
   -1};
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
   0.06881273,
   0.0395219,
   0.0432375,
   0.03845067,
   0.03642969,
   0.03311823,
   0.03136191,
   0.03119229,
   0.0324193,
   0.03603234,
   0.04238223,
   0.0502131,
   0.06996571,
   0.1034213,
   0.197588,
   0.4921354,
   1.850971,
   -1};
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
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMinimum(-1.221165);
   Graph_Graph_Graph_BackgroundStatError302630303034->SetMaximum(3.221165);
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
   0.8276884,
   0.9543872,
   1.03838,
   0.9914035,
   0.08944741};
   Double_t Graph1_felx3035[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3035[5] = {
   0.06803557,
   0.04161326,
   0.0477953,
   0.04141648,
   0.01174502};
   Double_t Graph1_fehx3035[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3035[5] = {
   0.06803557,
   0.04161326,
   0.0477953,
   0.04141648,
   0.01174502};
   grae = new TGraphAsymmErrors(5,Graph1_fx3035,Graph1_fy3035,Graph1_felx3035,Graph1_fehx3035,Graph1_fely3035,Graph1_fehy3035);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1302730313035 = new TH1F("Graph_Graph_Graph_Graph1302730313035","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1302730313035->SetMinimum(0.06993215);
   Graph_Graph_Graph_Graph1302730313035->SetMaximum(1.187022);
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
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMinimum(7.108236);
   StackedMCstackHist_stack_7_stack_8_stack_9->SetMaximum(28432.94);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,48.90066);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,136.9264);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,293.6977);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,267.7021);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,372.4178);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,462.6037);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,489.9444);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,529.8757);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,411.9893);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,335.7771);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,269.2946);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,194.0275);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,116.6494);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,44.2135);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,17.34038);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,4.633386);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.180845);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,9.528603);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,14.68939);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,29.81035);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,28.87609);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,33.05712);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,40.68428);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,39.3997);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,39.70912);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,33.5191);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,28.24305);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,22.98435);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,22.49941);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,21.33934);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,8.717294);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,6.365246);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.628262);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.09241476);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1395.844);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,516.2314);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1631.679);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2713.834);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3550.038);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,4285.714);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,5218.44);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5957.619);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5964.968);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,5660.168);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4788.493);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3648.705);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2459.457);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1505.712);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,645.3275);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,193.3513);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,27.3222);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,2.866802);
   TT_stack_2_stack_2_stack_2->SetBinError(1,18.2309);
   TT_stack_2_stack_2_stack_2->SetBinError(2,32.24221);
   TT_stack_2_stack_2_stack_2->SetBinError(3,58.82736);
   TT_stack_2_stack_2_stack_2->SetBinError(4,67.6682);
   TT_stack_2_stack_2_stack_2->SetBinError(5,73.95605);
   TT_stack_2_stack_2_stack_2->SetBinError(6,81.5514);
   TT_stack_2_stack_2_stack_2->SetBinError(7,87.07808);
   TT_stack_2_stack_2_stack_2->SetBinError(8,87.18457);
   TT_stack_2_stack_2_stack_2->SetBinError(9,84.75994);
   TT_stack_2_stack_2_stack_2->SetBinError(10,77.72216);
   TT_stack_2_stack_2_stack_2->SetBinError(11,67.98294);
   TT_stack_2_stack_2_stack_2->SetBinError(12,55.8437);
   TT_stack_2_stack_2_stack_2->SetBinError(13,44.08683);
   TT_stack_2_stack_2_stack_2->SetBinError(14,28.60211);
   TT_stack_2_stack_2_stack_2->SetBinError(15,15.77763);
   TT_stack_2_stack_2_stack_2->SetBinError(16,5.777994);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.05921);
   TT_stack_2_stack_2_stack_2->SetEntries(39165.95);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1222.98);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,3742.785);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,6083.555);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7741.631);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8310.381);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9707.185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,10825.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,11275.75);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,10245.06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,8313.527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,5730.356);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,4195.306);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1777.396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,949.8065);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,244.6767);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,39.48843);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,-1.744408);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,-0.001562293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,121.3132);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,214.9197);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,387.504);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,438.3342);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,465.442);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,501.4158);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,533.2309);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,545.9639);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,521.0813);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,477.0814);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,402.5726);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,338.5878);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,232.769);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,166.886);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,88.3522);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,34.58239);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,1.253034);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.001562293);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3521.971);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(1,34.67371);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(2,175.0696);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(3,340.2363);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(4,544.5953);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(5,574.1129);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(6,496.2039);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(7,440.5625);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(8,307.7455);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(9,235.1761);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(10,162.9352);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(11,50.29856);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(12,29.41372);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(13,14.6338);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(14,6.240082);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(15,-0.6317372);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(16,-0.01859926);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinContent(17,0.5419905);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(1,6.071103);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(2,13.18071);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(3,28.21741);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(4,31.75039);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(5,32.82616);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(6,30.85411);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(7,28.3914);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(8,24.81128);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(9,20.6312);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(10,16.46565);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(11,12.22363);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(12,8.897895);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(13,6.455643);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(14,3.782988);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(15,2.792233);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(16,0.8033062);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetBinError(17,0.5419905);
   ChargedHiggs_HplusTBHplusToTB_M_800__60->SetEntries(1802.971);
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
   1788.113,
   5511.39,
   9091.087,
   11559.37,
   12968.51,
   15388.23,
   17273.46,
   17770.59,
   16317.22,
   13437.8,
   9648.355,
   6848.79,
   3399.757,
   1639.348,
   455.3683,
   71.44402,
   1.303238,
   -0.001562293};
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
   123.0449,
   217.8206,
   393.0759,
   444.4656,
   472.4389,
   509.6309,
   541.7288,
   554.3055,
   528.9929,
   484.1953,
   408.9188,
   343.8989,
   237.8664,
   169.5435,
   89.97533,
   35.16013,
   2.412256,
   0.001562293};
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
   123.0449,
   217.8206,
   393.0759,
   444.4656,
   472.4389,
   509.6309,
   541.7288,
   554.3055,
   528.9929,
   484.1953,
   408.9188,
   343.8989,
   237.8664,
   169.5435,
   89.97533,
   35.16013,
   2.412256,
   0.001562293};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMinimum(20.15738);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors302830323036->SetMaximum(20157.38);
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
   Data__61->SetBinContent(1,1480);
   Data__61->SetBinContent(2,5260);
   Data__61->SetBinContent(3,9440);
   Data__61->SetBinContent(4,11460);
   Data__61->SetBinContent(5,1160);
   Data__61->SetBinError(1,121.6553);
   Data__61->SetBinError(2,229.3469);
   Data__61->SetBinError(3,434.5112);
   Data__61->SetBinError(4,478.7484);
   Data__61->SetBinError(5,152.3155);
   Data__61->SetEntries(1630.83);
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
      tex = new TLatex(0.19,0.885,"Data blinded in");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(17);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.19,0.85,"signal region");
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
