void MVAOutputM1000()
{
//=========Macro generated from canvas: MVAOutputM1000/MVAOutputM1000
//=========  (Fri Nov 18 13:27:37 2022) by ROOT version 6.20/02
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
   0.007325926,
   0.008500684,
   0.01001878,
   0.01097614,
   0.01186824,
   0.01248258,
   0.0132682,
   0.01382201,
   0.01453053,
   0.01494736,
   0.01578604,
   0.01651602,
   0.01693856,
   0.0178846,
   0.01832782,
   0.01865434,
   0.01970001,
   0.02056903,
   0.02047295,
   0.0253043};
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
   0.007325926,
   0.008500684,
   0.01001878,
   0.01097614,
   0.01186824,
   0.01248258,
   0.0132682,
   0.01382201,
   0.01453053,
   0.01494736,
   0.01578604,
   0.01651602,
   0.01693856,
   0.0178846,
   0.01832782,
   0.01865434,
   0.01970001,
   0.02056903,
   0.02047295,
   0.0253043};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3129,BackgroundStatSystError_fy3129,BackgroundStatSystError_felx3129,BackgroundStatSystError_fehx3129,BackgroundStatSystError_fely3129,BackgroundStatSystError_fehy3129);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1242;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError312131253129 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError312131253129","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMinimum(0.9696348);
   Graph_Graph_Graph_BackgroundStatSystError312131253129->SetMaximum(1.030365);
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
   0.007325926,
   0.008500684,
   0.01001878,
   0.01097614,
   0.01186824,
   0.01248258,
   0.0132682,
   0.01382201,
   0.01453053,
   0.01494736,
   0.01578604,
   0.01651602,
   0.01693856,
   0.0178846,
   0.01832782,
   0.01865434,
   0.01970001,
   0.02056903,
   0.02047295,
   0.0253043};
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
   0.007325926,
   0.008500684,
   0.01001878,
   0.01097614,
   0.01186824,
   0.01248258,
   0.0132682,
   0.01382201,
   0.01453053,
   0.01494736,
   0.01578604,
   0.01651602,
   0.01693856,
   0.0178846,
   0.01832782,
   0.01865434,
   0.01970001,
   0.02056903,
   0.02047295,
   0.0253043};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3130,BackgroundStatError_fy3130,BackgroundStatError_felx3130,BackgroundStatError_fehx3130,BackgroundStatError_fely3130,BackgroundStatError_fehy3130);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1241;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError312231263130 = new TH1F("Graph_Graph_Graph_BackgroundStatError312231263130","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMinimum(0.9696348);
   Graph_Graph_Graph_BackgroundStatError312231263130->SetMaximum(1.030365);
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
   
   Double_t Graph1_fx3131[20] = {
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
   Double_t Graph1_fy3131[20] = {
   0.8688297,
   0.8964329,
   0.9420793,
   0.9516772,
   0.9796449,
   0.9611606,
   0.96855,
   0.9710206,
   0.9733829,
   0.8845558,
   0.9729949,
   1.026355,
   0.9974779,
   0.921732,
   1.032356,
   0.9403791,
   1.040268,
   1.04973,
   0.9231209,
   0.9496684};
   Double_t Graph1_felx3131[20] = {
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
   Double_t Graph1_fely3131[20] = {
   0.01109969,
   0.01267241,
   0.01505834,
   0.01679459,
   0.01823246,
   0.01930446,
   0.02010409,
   0.0209562,
   0.02208814,
   0.0212976,
   0.02322587,
   0.02542944,
   0.0260251,
   0.0255348,
   0.02850117,
   0.02727169,
   0.02984402,
   0.03066294,
   0.02874943,
   0.03693782};
   Double_t Graph1_fehx3131[20] = {
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
   Double_t Graph1_fehy3131[20] = {
   0.01109969,
   0.01267241,
   0.01505834,
   0.01679459,
   0.01823246,
   0.01930446,
   0.02010409,
   0.0209562,
   0.02208814,
   0.0212976,
   0.02322587,
   0.02542944,
   0.0260251,
   0.0255348,
   0.02850117,
   0.02727169,
   0.02984402,
   0.03066294,
   0.02874943,
   0.03693782};
   grae = new TGraphAsymmErrors(20,Graph1_fx3131,Graph1_fy3131,Graph1_felx3131,Graph1_fehx3131,Graph1_fely3131,Graph1_fehy3131);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1312331273131 = new TH1F("Graph_Graph_Graph_Graph1312331273131","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1312331273131->SetMinimum(0.8354637);
   Graph_Graph_Graph_Graph1312331273131->SetMaximum(1.102659);
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
   MVAOutputM1000_1->Range(-0.204557,-2.173861,1.073924,6.519195);
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
   hframe__227->SetMaximum(994514.8);
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
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMinimum(225.7963);
   StackedMCstackHist_stack_31_stack_32_stack_33->SetMaximum(210106.3);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,3261.557);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,2110.531);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1938.693);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1485.75);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1328.922);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1226.558);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1343.092);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1183.098);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,995.379);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1072.595);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,958.4927);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,866.6385);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,833.5504);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,795.3516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,650.976);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,833.3878);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,648.8625);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,736.2466);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,754.7726);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,606.2536);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,120.7739);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,94.0787);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,93.80161);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,88.98155);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,76.01058);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,73.18198);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,97.13592);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,70.18815);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,66.04416);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,63.62318);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,74.52236);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,58.06718);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,59.26007);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,58.43248);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,58.66033);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,57.44654);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,52.67379);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,53.94454);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,57.22692);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,48.22972);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5173.507);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,127945.9);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,93499.77);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,68141.2);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,55201);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,47392.52);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,41952.52);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,38035.21);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,34854.08);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,32302.58);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,30202.13);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,27556.29);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,25363.1);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,23653.57);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,21912.69);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,20565.1);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,19747.03);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,18367.23);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,17315.84);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,16954.62);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,10812.12);
   TT_stack_2_stack_2_stack_2->SetBinError(1,374.5808);
   TT_stack_2_stack_2_stack_2->SetBinError(2,321.0683);
   TT_stack_2_stack_2_stack_2->SetBinError(3,273.9742);
   TT_stack_2_stack_2_stack_2->SetBinError(4,246.4452);
   TT_stack_2_stack_2_stack_2->SetBinError(5,228.4454);
   TT_stack_2_stack_2_stack_2->SetBinError(6,215.1612);
   TT_stack_2_stack_2_stack_2->SetBinError(7,204.605);
   TT_stack_2_stack_2_stack_2->SetBinError(8,196.0631);
   TT_stack_2_stack_2_stack_2->SetBinError(9,188.862);
   TT_stack_2_stack_2_stack_2->SetBinError(10,182.3394);
   TT_stack_2_stack_2_stack_2->SetBinError(11,174.2891);
   TT_stack_2_stack_2_stack_2->SetBinError(12,167.7888);
   TT_stack_2_stack_2_stack_2->SetBinError(13,161.7829);
   TT_stack_2_stack_2_stack_2->SetBinError(14,155.6517);
   TT_stack_2_stack_2_stack_2->SetBinError(15,150.8099);
   TT_stack_2_stack_2_stack_2->SetBinError(16,147.4128);
   TT_stack_2_stack_2_stack_2->SetBinError(17,142.2753);
   TT_stack_2_stack_2_stack_2->SetBinError(18,137.6302);
   TT_stack_2_stack_2_stack_2->SetBinError(19,136.5063);
   TT_stack_2_stack_2_stack_2->SetBinError(20,109.1733);
   TT_stack_2_stack_2_stack_2->SetEntries(700717.6);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,9832.821);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16032.18);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,13012.9);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,10794.11);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,10218.29);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,8404.395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,8549.011);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,8184.335);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,6604.115);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,7727.902);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,7559.403);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,5513.679);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,4967.163);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,5564.822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4201.5);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,4707.255);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,4343.259);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,4277.462);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,4627.874);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,2502.273);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,955.3586);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,888.1084);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,780.4973);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,692.7862);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,656.7726);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,602.4536);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,594.2067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,574.6609);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,544.1832);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,550.0703);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,536.9955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,493.2945);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,468.219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,477.5342);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,436.8413);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,444.4027);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,434.452);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,434.8584);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,432.6931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,331.4163);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3154.25);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(1,29.64882);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(2,52.40077);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(3,52.25933);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(4,80.89279);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(5,49.71805);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(6,90.68791);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(7,83.6755);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(8,82.78119);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(9,111.1425);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(10,83.04044);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(11,107.8537);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(12,147.4254);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(13,119.5909);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(14,109.3402);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(15,141.7652);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(16,148.7298);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(17,167.2753);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(18,173.6958);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(19,175.5746);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinContent(20,126.2055);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(1,7.545646);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(2,10.39313);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(3,11.12671);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(4,11.97707);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(5,12.68681);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(6,13.20335);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(7,13.19099);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(8,14.30387);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(9,15.18732);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(10,15.43131);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(11,15.81594);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(12,16.92572);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(13,17.44589);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(14,18.21614);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(15,18.2632);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(16,19.94526);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(17,20.74131);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(18,21.73018);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(19,23.9245);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetBinError(20,20.1854);
   ChargedHiggs_HplusTBHplusToTB_M_800__228->SetEntries(842.8916);
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
   141040.3,
   111642.5,
   83092.8,
   67480.87,
   58939.73,
   51583.47,
   47927.31,
   44221.51,
   39902.08,
   39002.63,
   36074.19,
   31743.42,
   29454.29,
   28272.86,
   25417.58,
   25287.67,
   23359.36,
   22329.55,
   22337.27,
   13920.65};
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
   1033.251,
   949.0375,
   832.4882,
   740.6792,
   699.5106,
   643.8947,
   635.9089,
   611.2301,
   579.7983,
   582.9862,
   569.4686,
   524.275,
   498.9133,
   505.6488,
   465.8487,
   471.7249,
   460.1796,
   459.2972,
   457.3097,
   352.2523};
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
   1033.251,
   949.0375,
   832.4882,
   740.6792,
   699.5106,
   643.8947,
   635.9089,
   611.2301,
   579.7983,
   582.9862,
   569.4686,
   524.275,
   498.9133,
   505.6488,
   465.8487,
   471.7249,
   460.1796,
   459.2972,
   457.3097,
   352.2523};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3132,BkgSum-SR-Inclusive_sum_errors_fy3132,BkgSum-SR-Inclusive_sum_errors_felx3132,BkgSum-SR-Inclusive_sum_errors_fehx3132,BkgSum-SR-Inclusive_sum_errors_fely3132,BkgSum-SR-Inclusive_sum_errors_fehy3132);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1240;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMinimum(717.881);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors312431283132->SetMaximum(154924.1);
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
   Data__229->SetBinContent(1,122540);
   Data__229->SetBinContent(2,100080);
   Data__229->SetBinContent(3,78280);
   Data__229->SetBinContent(4,64220);
   Data__229->SetBinContent(5,57740);
   Data__229->SetBinContent(6,49580);
   Data__229->SetBinContent(7,46420);
   Data__229->SetBinContent(8,42940);
   Data__229->SetBinContent(9,38840);
   Data__229->SetBinContent(10,34500);
   Data__229->SetBinContent(11,35100);
   Data__229->SetBinContent(12,32580);
   Data__229->SetBinContent(13,29380);
   Data__229->SetBinContent(14,26060);
   Data__229->SetBinContent(15,26240);
   Data__229->SetBinContent(16,23780);
   Data__229->SetBinContent(17,24300);
   Data__229->SetBinContent(18,23440);
   Data__229->SetBinContent(19,20620);
   Data__229->SetBinContent(20,13220);
   Data__229->SetBinError(1,1565.503);
   Data__229->SetBinError(2,1414.779);
   Data__229->SetBinError(3,1251.239);
   Data__229->SetBinError(4,1133.314);
   Data__229->SetBinError(5,1074.616);
   Data__229->SetBinError(6,995.7911);
   Data__229->SetBinError(7,963.5352);
   Data__229->SetBinError(8,926.7146);
   Data__229->SetBinError(9,881.3626);
   Data__229->SetBinError(10,830.6624);
   Data__229->SetBinError(11,837.8544);
   Data__229->SetBinError(12,807.2174);
   Data__229->SetBinError(13,766.5507);
   Data__229->SetBinError(14,721.9418);
   Data__229->SetBinError(15,724.4308);
   Data__229->SetBinError(16,689.6376);
   Data__229->SetBinError(17,697.137);
   Data__229->SetBinError(18,684.6897);
   Data__229->SetBinError(19,642.1838);
   Data__229->SetBinError(20,514.1984);
   Data__229->SetEntries(44493);
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

   ci = 1240;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1240;
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
   hframe_copy__230->SetMaximum(994514.8);
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
   hframe_copy__231->SetMaximum(994514.8);
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
   MVAOutputM1000_1->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->Modified();
   MVAOutputM1000->cd();
   MVAOutputM1000->SetSelected(MVAOutputM1000);
}
