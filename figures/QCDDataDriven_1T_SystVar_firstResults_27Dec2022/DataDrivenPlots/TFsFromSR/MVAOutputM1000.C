void MVAOutputM1000()
{
//=========Macro generated from canvas: MVAOutputM1000/MVAOutputM1000
//=========  (Tue Dec 27 11:55:09 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM1000 = new TCanvas("MVAOutputM1000", "MVAOutputM1000",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM1000->SetHighLightColor(2);
   MVAOutputM1000->Range(0,0,1,1);
   MVAOutputM1000->SetFillColor(0);
   MVAOutputM1000->SetBorderMode(0);
   MVAOutputM1000->SetBorderSize(2);
   MVAOutputM1000->SetTickx(1);
   MVAOutputM1000->SetTicky(1);
   MVAOutputM1000->SetLeftMargin(0.16);
   MVAOutputM1000->SetRightMargin(0.05);
   MVAOutputM1000->SetTopMargin(0.06);
   MVAOutputM1000->SetBottomMargin(0.13);
   MVAOutputM1000->SetFrameFillStyle(0);
   MVAOutputM1000->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM1000_2
   TPad *MVAOutputM1000_2 = new TPad("MVAOutputM1000_2", "MVAOutputM1000_2",0,0,1,0.304);
   MVAOutputM1000_2->Draw();
   MVAOutputM1000_2->cd();
   MVAOutputM1000_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM1000_2->SetFillColor(0);
   MVAOutputM1000_2->SetFillStyle(4000);
   MVAOutputM1000_2->SetBorderMode(0);
   MVAOutputM1000_2->SetBorderSize(2);
   MVAOutputM1000_2->SetTickx(1);
   MVAOutputM1000_2->SetTicky(1);
   MVAOutputM1000_2->SetLeftMargin(0.16);
   MVAOutputM1000_2->SetRightMargin(0.05);
   MVAOutputM1000_2->SetTopMargin(0);
   MVAOutputM1000_2->SetBottomMargin(0.3421053);
   MVAOutputM1000_2->SetFrameFillStyle(0);
   MVAOutputM1000_2->SetFrameBorderMode(0);
   MVAOutputM1000_2->SetFrameFillStyle(0);
   MVAOutputM1000_2->SetFrameBorderMode(0);
   
   TH1F *hframe__225 = new TH1F("hframe__225","",1000,0,1.01);
   hframe__225->SetMinimum(0.3);
   hframe__225->SetMaximum(1.7);
   hframe__225->SetDirectory(0);
   hframe__225->SetStats(0);
   hframe__225->SetLineStyle(0);
   hframe__225->SetMarkerStyle(20);
   hframe__225->GetXaxis()->SetTitle("DNN Output");
   hframe__225->GetXaxis()->SetLabelFont(43);
   hframe__225->GetXaxis()->SetLabelOffset(0.007);
   hframe__225->GetXaxis()->SetLabelSize(27);
   hframe__225->GetXaxis()->SetTitleSize(33);
   hframe__225->GetXaxis()->SetTitleOffset(2.960526);
   hframe__225->GetXaxis()->SetTitleFont(43);
   hframe__225->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__225->GetYaxis()->SetNdivisions(505);
   hframe__225->GetYaxis()->SetLabelFont(43);
   hframe__225->GetYaxis()->SetLabelOffset(0.007);
   hframe__225->GetYaxis()->SetLabelSize(21);
   hframe__225->GetYaxis()->SetTitleSize(33);
   hframe__225->GetYaxis()->SetTitleOffset(1.5625);
   hframe__225->GetYaxis()->SetTitleFont(43);
   hframe__225->GetZaxis()->SetLabelFont(43);
   hframe__225->GetZaxis()->SetLabelOffset(0.007);
   hframe__225->GetZaxis()->SetLabelSize(27);
   hframe__225->GetZaxis()->SetTitleSize(33);
   hframe__225->GetZaxis()->SetTitleOffset(1);
   hframe__225->GetZaxis()->SetTitleFont(43);
   hframe__225->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3129[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
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
   Double_t BackgroundStatSystError_fy3129[20] = {
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
   Double_t BackgroundStatSystError_felx3129[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3129[20] = {
   0.01959004,
   0.02675673,
   0.03321315,
   0.03901875,
   0.04732461,
   0.05188032,
   0.05855797,
   0.06618616,
   0.06666129,
   0.07253311,
   0.07391821,
   0.07307965,
   0.07804811,
   0.07950247,
   0.08223308,
   0.08695232,
   0.08923784,
   0.08638252,
   0.08885161,
   0.1175908};
   Double_t BackgroundStatSystError_fehx3129[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3129[20] = {
   0.01959004,
   0.02675673,
   0.03321315,
   0.03901875,
   0.04732461,
   0.05188032,
   0.05855797,
   0.06618616,
   0.06666129,
   0.07253311,
   0.07391821,
   0.07307965,
   0.07804811,
   0.07950247,
   0.08223308,
   0.08695232,
   0.08923784,
   0.08638252,
   0.08885161,
   0.1175908};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3129,BackgroundStatSystError_fy3129,BackgroundStatSystError_felx3129,BackgroundStatSystError_fehx3129,BackgroundStatSystError_fely3129,BackgroundStatSystError_fehy3129);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1243;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError312131253129 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError312131253129","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMinimum(0.858891);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMaximum(1.141109);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError312131253129);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3130[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
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
   Double_t BackgroundStatError_fy3130[20] = {
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
   Double_t BackgroundStatError_felx3130[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fely3130[20] = {
   0.01959004,
   0.02675673,
   0.03321315,
   0.03901875,
   0.04732461,
   0.05188032,
   0.05855797,
   0.06618616,
   0.06666129,
   0.07253311,
   0.07391821,
   0.07307965,
   0.07804811,
   0.07950247,
   0.08223308,
   0.08695232,
   0.08923784,
   0.08638252,
   0.08885161,
   0.1175908};
   Double_t BackgroundStatError_fehx3130[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fehy3130[20] = {
   0.01959004,
   0.02675673,
   0.03321315,
   0.03901875,
   0.04732461,
   0.05188032,
   0.05855797,
   0.06618616,
   0.06666129,
   0.07253311,
   0.07391821,
   0.07307965,
   0.07804811,
   0.07950247,
   0.08223308,
   0.08695232,
   0.08923784,
   0.08638252,
   0.08885161,
   0.1175908};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3130,BackgroundStatError_fy3130,BackgroundStatError_felx3130,BackgroundStatError_fehx3130,BackgroundStatError_fely3130,BackgroundStatError_fehy3130);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1242;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError312231263130 = new TH1F("Graph_Graph_Graph_BackgroundStatError312231263130","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMinimum(0.858891);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMaximum(1.141109);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError312231263130->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError312231263130);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx33[2] = {
   0,
   1.01};
   Double_t Graph0_fy33[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx33,Graph0_fy33);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0313233 = new TH1F("Graph_Graph_Graph_Graph0313233","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0313233->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0313233->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0313233->SetDirectory(0);
   Graph_Graph_Graph_Graph0313233->SetStats(0);
   Graph_Graph_Graph_Graph0313233->SetLineStyle(0);
   Graph_Graph_Graph_Graph0313233->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0313233->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0313233->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0313233->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0313233);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3131[7] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3131[7] = {
   1.058701,
   1.092003,
   0.9708025,
   0.9722798,
   1.112698,
   1.029043,
   0.144453};
   Double_t Graph1_felx3131[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3131[7] = {
   0.02131949,
   0.0302055,
   0.03526113,
   0.04180158,
   0.05416528,
   0.05699345,
   0.02407551};
   Double_t Graph1_fehx3131[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3131[7] = {
   0.02131949,
   0.0302055,
   0.03526113,
   0.04180158,
   0.05416528,
   0.05699345,
   0.02407551};
   grae = new TGraphAsymmErrors(7,Graph1_fx3131,Graph1_fy3131,Graph1_felx3131,Graph1_fehx3131,Graph1_fely3131,Graph1_fehy3131);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1312331273131 = new TH1F("Graph_Graph_Graph_Graph1312331273131","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1312331273131->SetMinimum(0.01572897);
   Graph_Graph_Graph_Graph1312331273131->SetMaximum(1.271512);
   Graph_Graph_Graph_Graph1312331273131->SetDirectory(0);
   Graph_Graph_Graph_Graph1312331273131->SetStats(0);
   Graph_Graph_Graph_Graph1312331273131->SetLineStyle(0);
   Graph_Graph_Graph_Graph1312331273131->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1312331273131->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1312331273131->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1312331273131->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1312331273131);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__226 = new TH1F("hframe_copy__226","",1000,0,1.01);
   hframe_copy__226->SetMinimum(0.3);
   hframe_copy__226->SetMaximum(1.7);
   hframe_copy__226->SetDirectory(0);
   hframe_copy__226->SetStats(0);
   hframe_copy__226->SetLineStyle(0);
   hframe_copy__226->SetMarkerStyle(20);
   hframe_copy__226->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__226->GetXaxis()->SetLabelFont(43);
   hframe_copy__226->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetXaxis()->SetLabelSize(27);
   hframe_copy__226->GetXaxis()->SetTitleSize(33);
   hframe_copy__226->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__226->GetXaxis()->SetTitleFont(43);
   hframe_copy__226->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__226->GetYaxis()->SetNdivisions(505);
   hframe_copy__226->GetYaxis()->SetLabelFont(43);
   hframe_copy__226->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetYaxis()->SetLabelSize(21);
   hframe_copy__226->GetYaxis()->SetTitleSize(33);
   hframe_copy__226->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__226->GetYaxis()->SetTitleFont(43);
   hframe_copy__226->GetZaxis()->SetLabelFont(43);
   hframe_copy__226->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__226->GetZaxis()->SetLabelSize(27);
   hframe_copy__226->GetZaxis()->SetTitleSize(33);
   hframe_copy__226->GetZaxis()->SetTitleOffset(1);
   hframe_copy__226->GetZaxis()->SetTitleFont(43);
   hframe_copy__226->Draw("sameaxis");
   MVAOutputM1000_2->Modified();
   MVAOutputM1000->cd();
  
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
   MVAOutputM1000->cd();
  
// ------------>Primitives in pad: MVAOutputM1000_1
   TPad *MVAOutputM1000_1 = new TPad("MVAOutputM1000_1", "MVAOutputM1000_1",0,0.2897959,1,1);
   MVAOutputM1000_1->Draw();
   MVAOutputM1000_1->cd();
   MVAOutputM1000_1->Range(-0.204557,-2.163872,1.073924,6.029738);
   MVAOutputM1000_1->SetFillColor(0);
   MVAOutputM1000_1->SetFillStyle(4000);
   MVAOutputM1000_1->SetBorderMode(0);
   MVAOutputM1000_1->SetBorderSize(2);
   MVAOutputM1000_1->SetLogy();
   MVAOutputM1000_1->SetTickx(1);
   MVAOutputM1000_1->SetTicky(1);
   MVAOutputM1000_1->SetLeftMargin(0.16);
   MVAOutputM1000_1->SetRightMargin(0.05);
   MVAOutputM1000_1->SetTopMargin(0.06);
   MVAOutputM1000_1->SetBottomMargin(0.02);
   MVAOutputM1000_1->SetFrameFillStyle(0);
   MVAOutputM1000_1->SetFrameBorderMode(0);
   MVAOutputM1000_1->SetFrameFillStyle(0);
   MVAOutputM1000_1->SetFrameBorderMode(0);
   
   TH1F *hframe__227 = new TH1F("hframe__227","",1000,0,1.01);
   hframe__227->SetMinimum(0.01);
   hframe__227->SetMaximum(345240);
   hframe__227->SetDirectory(0);
   hframe__227->SetStats(0);
   hframe__227->SetLineStyle(0);
   hframe__227->SetMarkerStyle(20);
   hframe__227->GetXaxis()->SetLabelFont(43);
   hframe__227->GetXaxis()->SetLabelOffset(0.007);
   hframe__227->GetXaxis()->SetLabelSize(0);
   hframe__227->GetXaxis()->SetTitleSize(0);
   hframe__227->GetXaxis()->SetTitleOffset(0.9);
   hframe__227->GetXaxis()->SetTitleFont(43);
   hframe__227->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__227->GetYaxis()->SetLabelFont(43);
   hframe__227->GetYaxis()->SetLabelOffset(0.007);
   hframe__227->GetYaxis()->SetLabelSize(27);
   hframe__227->GetYaxis()->SetTitleSize(33);
   hframe__227->GetYaxis()->SetTitleOffset(1.5625);
   hframe__227->GetYaxis()->SetTitleFont(43);
   hframe__227->GetZaxis()->SetLabelFont(43);
   hframe__227->GetZaxis()->SetLabelOffset(0.007);
   hframe__227->GetZaxis()->SetLabelSize(27);
   hframe__227->GetZaxis()->SetTitleSize(33);
   hframe__227->GetZaxis()->SetTitleOffset(1);
   hframe__227->GetZaxis()->SetTitleFont(43);
   hframe__227->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis193[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_31_stack_32_stack_33 = new TH1F("StackedMCstackHist_stack_31_stack_32_stack_33","StackedMCstackHist",20, xAxis193);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMinimum(13.51758);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMaximum(75732.94);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetDirectory(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetStats(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetLineStyle(0);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMarkerStyle(20);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_31_stack_32_stack_33->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_31_stack_32_stack_33);
   
   Double_t xAxis194[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM1000Inclusive",20, xAxis194);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1203.902);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,550.2415);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,409.0289);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,282.6478);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,174.0831);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,142.892);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,105.614);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,170.247);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,89.07161);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,134.6413);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,93.10668);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,126.9412);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,81.70625);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,90.77908);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,117.0459);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,86.34709);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,65.88911);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,97.29329);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,68.93928);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,52.45182);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,53.80377);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,36.90991);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,35.08147);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,31.21033);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,23.77893);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,20.01714);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,15.02574);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,24.17676);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,17.73659);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,20.98561);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,17.42171);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,20.83909);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,14.13715);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,20.63417);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,18.73674);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,16.57499);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,19.84815);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,17.38988);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,15.72228);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,13.93872);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1416.07);
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
   Double_t xAxis195[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1000Inclusive",20, xAxis195);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,16611.66);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,8100.75);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4923.007);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3393.155);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2534.341);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1974.167);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1539.936);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1327.304);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1207.021);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1026.168);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,973.9724);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,870.8035);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,986.4196);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,827.256);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,785.6514);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,773.6622);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,658.6807);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,658.5425);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,642.341);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,441.9716);
   TT_stack_2_stack_2_stack_2->SetBinError(1,143.8106);
   TT_stack_2_stack_2_stack_2->SetBinError(2,100.7713);
   TT_stack_2_stack_2_stack_2->SetBinError(3,78.89977);
   TT_stack_2_stack_2_stack_2->SetBinError(4,65.4139);
   TT_stack_2_stack_2_stack_2->SetBinError(5,57.0511);
   TT_stack_2_stack_2_stack_2->SetBinError(6,50.20431);
   TT_stack_2_stack_2_stack_2->SetBinError(7,44.45435);
   TT_stack_2_stack_2_stack_2->SetBinError(8,41.38905);
   TT_stack_2_stack_2_stack_2->SetBinError(9,39.55618);
   TT_stack_2_stack_2_stack_2->SetBinError(10,36.37322);
   TT_stack_2_stack_2_stack_2->SetBinError(11,35.45627);
   TT_stack_2_stack_2_stack_2->SetBinError(12,33.52432);
   TT_stack_2_stack_2_stack_2->SetBinError(13,35.5542);
   TT_stack_2_stack_2_stack_2->SetBinError(14,32.18035);
   TT_stack_2_stack_2_stack_2->SetBinError(15,31.07616);
   TT_stack_2_stack_2_stack_2->SetBinError(16,31.14005);
   TT_stack_2_stack_2_stack_2->SetBinError(17,28.56016);
   TT_stack_2_stack_2_stack_2->SetBinError(18,28.34815);
   TT_stack_2_stack_2_stack_2->SetBinError(19,28.31889);
   TT_stack_2_stack_2_stack_2->SetBinError(20,23.39233);
   TT_stack_2_stack_2_stack_2->SetEntries(39915.52);
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
   Double_t xAxis196[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1000Inclusive",20, xAxis196);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,28769.83);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,15286.67);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,10283.91);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7452.681);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,4876.744);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,4218.921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,3338.769);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2254.519);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,2450.055);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,2021.808);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1955.571);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2113.824);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1473.468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1626.915);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1526.564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1325.856);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1403.276);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1442.281);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1398.273);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,635.6584);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,899.6001);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,631.4388);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,511.4166);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,428.1279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,353.6039);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,324.2389);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,288.0747);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,243.6653);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,245.9315);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,226.9936);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,219.9087);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,223.94);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,194.6416);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,198.6857);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,196.4421);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,186.7637);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,186.672);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,186.9437);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,184.6173);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,130.0674);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3664.316);
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
   Double_t xAxis197[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__228 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__228","h_SR_MVAOutputM1000Inclusive",20, xAxis197);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(1,106.303);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(2,101.2079);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(3,135.6151);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(4,148.5871);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(5,144.799);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(6,142.5506);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(7,124.61);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(8,143.8686);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(9,135.7481);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(10,162.7039);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(11,164.0051);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(12,181.7424);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(13,199.4308);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(14,217.5552);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(15,190.8509);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(16,259.363);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(17,280.6244);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(18,251.4359);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(19,293.321);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(20,199.6965);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(1,14.2735);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(2,15.97075);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(3,16.72057);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(4,16.43314);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(5,16.34928);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(6,16.2209);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(7,16.07255);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(8,16.75438);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(9,16.58294);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(10,16.99015);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(11,17.28967);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(12,18.21921);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(13,18.7336);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(14,19.47979);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(15,20.46388);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(16,21.55748);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(17,22.75703);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(18,23.37476);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(19,24.82821);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(20,20.40721);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetEntries(1839.371);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3132[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3132[20] = {
   46585.39,
   23937.66,
   15615.95,
   11128.48,
   7585.168,
   6335.981,
   4984.319,
   3752.07,
   3746.148,
   3182.618,
   3022.651,
   3111.569,
   2541.594,
   2544.95,
   2429.261,
   2185.865,
   2127.846,
   2198.116,
   2109.553,
   1130.082};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3132[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3132[20] = {
   912.6098,
   640.4936,
   518.6548,
   434.2195,
   358.9651,
   328.7127,
   291.8716,
   248.3351,
   249.7231,
   230.8452,
   223.4289,
   227.3924,
   198.3666,
   202.3298,
   199.7656,
   190.066,
   189.8844,
   189.8788,
   187.4372,
   132.8873};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3132[20] = {
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3132[20] = {
   912.6098,
   640.4936,
   518.6548,
   434.2195,
   358.9651,
   328.7127,
   291.8716,
   248.3351,
   249.7231,
   230.8452,
   223.4289,
   227.3924,
   198.3666,
   202.3298,
   199.7656,
   190.066,
   189.8844,
   189.8788,
   187.4372,
   132.8873};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3132,BkgSum-SR-Inclusive_sum_errors_fy3132,BkgSum-SR-Inclusive_sum_errors_felx3132,BkgSum-SR-Inclusive_sum_errors_fehx3132,BkgSum-SR-Inclusive_sum_errors_fely3132,BkgSum-SR-Inclusive_sum_errors_fehy3132);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1241;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMinimum(897.4751);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMaximum(52148.09);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors312431283132);
   
   grae->Draw("e2 ");
   Double_t xAxis198[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__229 = new TH1F("Data__229","h_SR_MVAOutputM1000Inclusive",20, xAxis198);
   Data__229->SetBinContent(1,49320);
   Data__229->SetBinContent(2,26140);
   Data__229->SetBinContent(3,15160);
   Data__229->SetBinContent(4,10820);
   Data__229->SetBinContent(5,8440);
   Data__229->SetBinContent(6,6520);
   Data__229->SetBinContent(7,720);
   Data__229->SetBinError(1,993.1767);
   Data__229->SetBinError(2,723.0491);
   Data__229->SetBinError(3,550.636);
   Data__229->SetBinError(4,465.1881);
   Data__229->SetBinError(5,410.8528);
   Data__229->SetBinError(6,361.1094);
   Data__229->SetBinError(7,120);
   Data__229->SetEntries(5856);
   Data__229->SetDirectory(0);
   Data__229->SetFillStyle(3001);
   Data__229->SetLineWidth(2);
   Data__229->SetMarkerStyle(20);
   Data__229->SetMarkerSize(1.2);
   Data__229->GetXaxis()->SetRange(1,200);
   Data__229->GetXaxis()->SetLabelFont(42);
   Data__229->GetXaxis()->SetTitleOffset(1);
   Data__229->GetXaxis()->SetTitleFont(42);
   Data__229->GetYaxis()->SetLabelFont(42);
   Data__229->GetYaxis()->SetTitleFont(42);
   Data__229->GetZaxis()->SetLabelFont(42);
   Data__229->GetZaxis()->SetTitleOffset(1);
   Data__229->GetZaxis()->SetTitleFont(42);
   Data__229->Draw("EP same");
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

   ci = 1241;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1241;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__230 = new TH1F("hframe_copy__230","",1000,0,1.01);
   hframe_copy__230->SetMinimum(0.01);
   hframe_copy__230->SetMaximum(345240);
   hframe_copy__230->SetDirectory(0);
   hframe_copy__230->SetStats(0);
   hframe_copy__230->SetLineStyle(0);
   hframe_copy__230->SetMarkerStyle(20);
   hframe_copy__230->GetXaxis()->SetLabelFont(43);
   hframe_copy__230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetXaxis()->SetLabelSize(0);
   hframe_copy__230->GetXaxis()->SetTitleSize(0);
   hframe_copy__230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__230->GetXaxis()->SetTitleFont(43);
   hframe_copy__230->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__230->GetYaxis()->SetLabelFont(43);
   hframe_copy__230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetYaxis()->SetLabelSize(27);
   hframe_copy__230->GetYaxis()->SetTitleSize(33);
   hframe_copy__230->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__230->GetYaxis()->SetTitleFont(43);
   hframe_copy__230->GetZaxis()->SetLabelFont(43);
   hframe_copy__230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__230->GetZaxis()->SetLabelSize(27);
   hframe_copy__230->GetZaxis()->SetTitleSize(33);
   hframe_copy__230->GetZaxis()->SetTitleOffset(1);
   hframe_copy__230->GetZaxis()->SetTitleFont(43);
   hframe_copy__230->Draw("sameaxis");
   
   TH1F *hframe_copy__231 = new TH1F("hframe_copy__231","",1000,0,1.01);
   hframe_copy__231->SetMinimum(0.01);
   hframe_copy__231->SetMaximum(345240);
   hframe_copy__231->SetDirectory(0);
   hframe_copy__231->SetStats(0);
   hframe_copy__231->SetLineStyle(0);
   hframe_copy__231->SetMarkerStyle(20);
   hframe_copy__231->GetXaxis()->SetLabelFont(43);
   hframe_copy__231->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetXaxis()->SetLabelSize(0);
   hframe_copy__231->GetXaxis()->SetTitleSize(0);
   hframe_copy__231->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__231->GetXaxis()->SetTitleFont(43);
   hframe_copy__231->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__231->GetYaxis()->SetLabelFont(43);
   hframe_copy__231->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetYaxis()->SetLabelSize(27);
   hframe_copy__231->GetYaxis()->SetTitleSize(33);
   hframe_copy__231->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__231->GetYaxis()->SetTitleFont(43);
   hframe_copy__231->GetZaxis()->SetLabelFont(43);
   hframe_copy__231->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__231->GetZaxis()->SetLabelSize(27);
   hframe_copy__231->GetZaxis()->SetTitleSize(33);
   hframe_copy__231->GetZaxis()->SetTitleOffset(1);
   hframe_copy__231->GetZaxis()->SetTitleFont(43);
   hframe_copy__231->Draw("sameaxis");
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
   MVAOutputM1000_1->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->SetSelected(MVAOutputM1000);
}
