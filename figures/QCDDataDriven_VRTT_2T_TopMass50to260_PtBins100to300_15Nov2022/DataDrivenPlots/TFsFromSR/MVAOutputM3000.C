void MVAOutputM3000()
{
//=========Macro generated from canvas: MVAOutputM3000/MVAOutputM3000
//=========  (Fri Nov 18 13:27:47 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM3000 = new TCanvas("MVAOutputM3000", "MVAOutputM3000",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM3000->SetHighLightColor(2);
   MVAOutputM3000->Range(0,0,1,1);
   MVAOutputM3000->SetFillColor(0);
   MVAOutputM3000->SetBorderMode(0);
   MVAOutputM3000->SetBorderSize(2);
   MVAOutputM3000->SetTickx(1);
   MVAOutputM3000->SetTicky(1);
   MVAOutputM3000->SetLeftMargin(0.16);
   MVAOutputM3000->SetRightMargin(0.05);
   MVAOutputM3000->SetTopMargin(0.06);
   MVAOutputM3000->SetBottomMargin(0.13);
   MVAOutputM3000->SetFrameFillStyle(0);
   MVAOutputM3000->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM3000_2
   TPad *MVAOutputM3000_2 = new TPad("MVAOutputM3000_2", "MVAOutputM3000_2",0,0,1,0.304);
   MVAOutputM3000_2->Draw();
   MVAOutputM3000_2->cd();
   MVAOutputM3000_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM3000_2->SetFillColor(0);
   MVAOutputM3000_2->SetFillStyle(4000);
   MVAOutputM3000_2->SetBorderMode(0);
   MVAOutputM3000_2->SetBorderSize(2);
   MVAOutputM3000_2->SetTickx(1);
   MVAOutputM3000_2->SetTicky(1);
   MVAOutputM3000_2->SetLeftMargin(0.16);
   MVAOutputM3000_2->SetRightMargin(0.05);
   MVAOutputM3000_2->SetTopMargin(0);
   MVAOutputM3000_2->SetBottomMargin(0.3421053);
   MVAOutputM3000_2->SetFrameFillStyle(0);
   MVAOutputM3000_2->SetFrameBorderMode(0);
   MVAOutputM3000_2->SetFrameFillStyle(0);
   MVAOutputM3000_2->SetFrameBorderMode(0);
   
   TH1F *hframe__351 = new TH1F("hframe__351","",1000,0,1.01);
   hframe__351->SetMinimum(0.3);
   hframe__351->SetMaximum(1.7);
   hframe__351->SetDirectory(0);
   hframe__351->SetStats(0);
   hframe__351->SetLineStyle(0);
   hframe__351->SetMarkerStyle(20);
   hframe__351->GetXaxis()->SetTitle("DNN Output");
   hframe__351->GetXaxis()->SetLabelFont(43);
   hframe__351->GetXaxis()->SetLabelOffset(0.007);
   hframe__351->GetXaxis()->SetLabelSize(27);
   hframe__351->GetXaxis()->SetTitleSize(33);
   hframe__351->GetXaxis()->SetTitleOffset(2.960526);
   hframe__351->GetXaxis()->SetTitleFont(43);
   hframe__351->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__351->GetYaxis()->SetNdivisions(505);
   hframe__351->GetYaxis()->SetLabelFont(43);
   hframe__351->GetYaxis()->SetLabelOffset(0.007);
   hframe__351->GetYaxis()->SetLabelSize(21);
   hframe__351->GetYaxis()->SetTitleSize(33);
   hframe__351->GetYaxis()->SetTitleOffset(1.5625);
   hframe__351->GetYaxis()->SetTitleFont(43);
   hframe__351->GetZaxis()->SetLabelFont(43);
   hframe__351->GetZaxis()->SetLabelOffset(0.007);
   hframe__351->GetZaxis()->SetLabelSize(27);
   hframe__351->GetZaxis()->SetTitleSize(33);
   hframe__351->GetZaxis()->SetTitleOffset(1);
   hframe__351->GetZaxis()->SetTitleFont(43);
   hframe__351->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3201[20] = {
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
   Double_t BackgroundStatSystError_fy3201[20] = {
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
   Double_t BackgroundStatSystError_felx3201[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3201[20] = {
   0.003533502,
   0.01130115,
   0.01538733,
   0.01821702,
   0.02091881,
   0.02221328,
   0.02431336,
   0.02570635,
   0.02697062,
   0.02875266,
   0.03021906,
   0.03084216,
   0.03140691,
   0.03313374,
   0.03353445,
   0.03381291,
   0.03458602,
   0.03517498,
   0.0385643,
   0.05343185};
   Double_t BackgroundStatSystError_fehx3201[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3201[20] = {
   0.003533502,
   0.01130115,
   0.01538733,
   0.01821702,
   0.02091881,
   0.02221328,
   0.02431336,
   0.02570635,
   0.02697062,
   0.02875266,
   0.03021906,
   0.03084216,
   0.03140691,
   0.03313374,
   0.03353445,
   0.03381291,
   0.03458602,
   0.03517498,
   0.0385643,
   0.05343185};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3201,BackgroundStatSystError_fy3201,BackgroundStatSystError_felx3201,BackgroundStatSystError_fehx3201,BackgroundStatSystError_fely3201,BackgroundStatSystError_fehy3201);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1260;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError319331973201 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError319331973201","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMinimum(0.9358818);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMaximum(1.064118);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError319331973201);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3202[20] = {
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
   Double_t BackgroundStatError_fy3202[20] = {
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
   Double_t BackgroundStatError_felx3202[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3202[20] = {
   0.003533502,
   0.01130115,
   0.01538733,
   0.01821702,
   0.02091881,
   0.02221328,
   0.02431336,
   0.02570635,
   0.02697062,
   0.02875266,
   0.03021906,
   0.03084216,
   0.03140691,
   0.03313374,
   0.03353445,
   0.03381291,
   0.03458602,
   0.03517498,
   0.0385643,
   0.05343185};
   Double_t BackgroundStatError_fehx3202[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3202[20] = {
   0.003533502,
   0.01130115,
   0.01538733,
   0.01821702,
   0.02091881,
   0.02221328,
   0.02431336,
   0.02570635,
   0.02697062,
   0.02875266,
   0.03021906,
   0.03084216,
   0.03140691,
   0.03313374,
   0.03353445,
   0.03381291,
   0.03458602,
   0.03517498,
   0.0385643,
   0.05343185};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3202,BackgroundStatError_fy3202,BackgroundStatError_felx3202,BackgroundStatError_fehx3202,BackgroundStatError_fely3202,BackgroundStatError_fehy3202);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1259;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError319431983202 = new TH1F("Graph_Graph_Graph_BackgroundStatError319431983202","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMinimum(0.9358818);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMaximum(1.064118);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError319431983202->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError319431983202);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx51[2] = {
   0,
   1.01};
   Double_t Graph0_fy51[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx51,Graph0_fy51);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0495051 = new TH1F("Graph_Graph_Graph_Graph0495051","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0495051->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0495051->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0495051->SetDirectory(0);
   Graph_Graph_Graph_Graph0495051->SetStats(0);
   Graph_Graph_Graph_Graph0495051->SetLineStyle(0);
   Graph_Graph_Graph_Graph0495051->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0495051->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0495051->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0495051->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0495051);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3203[20] = {
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
   Double_t Graph1_fy3203[20] = {
   0.9361329,
   0.9392225,
   0.9571873,
   0.9545973,
   0.9509892,
   0.9555291,
   1.014043,
   0.9345754,
   0.915381,
   0.9383711,
   0.9315398,
   1.053361,
   1.10982,
   1.012205,
   0.9861141,
   0.9287155,
   1.116898,
   0.9267013,
   0.9742802,
   0.6241673};
   Double_t Graph1_felx3203[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3203[20] = {
   0.005443093,
   0.01652598,
   0.02228429,
   0.02605817,
   0.02932025,
   0.03140064,
   0.03630855,
   0.0363233,
   0.03755854,
   0.03879687,
   0.04149408,
   0.04619294,
   0.05003455,
   0.04820023,
   0.04942943,
   0.04720926,
   0.05598503,
   0.0506311,
   0.05625009,
   0.05627927};
   Double_t Graph1_fehx3203[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3203[20] = {
   0.005443093,
   0.01652598,
   0.02228429,
   0.02605817,
   0.02932025,
   0.03140064,
   0.03630855,
   0.0363233,
   0.03755854,
   0.03879687,
   0.04149408,
   0.04619294,
   0.05003455,
   0.04820023,
   0.04942943,
   0.04720926,
   0.05598503,
   0.0506311,
   0.05625009,
   0.05627927};
   grae = new TGraphAsymmErrors(20,Graph1_fx3203,Graph1_fy3203,Graph1_felx3203,Graph1_fehx3203,Graph1_fely3203,Graph1_fehy3203);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1319531993203 = new TH1F("Graph_Graph_Graph_Graph1319531993203","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1319531993203->SetMinimum(0.5073886);
   Graph_Graph_Graph_Graph1319531993203->SetMaximum(1.233382);
   Graph_Graph_Graph_Graph1319531993203->SetDirectory(0);
   Graph_Graph_Graph_Graph1319531993203->SetStats(0);
   Graph_Graph_Graph_Graph1319531993203->SetLineStyle(0);
   Graph_Graph_Graph_Graph1319531993203->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1319531993203->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1319531993203->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1319531993203->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1319531993203);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__352 = new TH1F("hframe_copy__352","",1000,0,1.01);
   hframe_copy__352->SetMinimum(0.3);
   hframe_copy__352->SetMaximum(1.7);
   hframe_copy__352->SetDirectory(0);
   hframe_copy__352->SetStats(0);
   hframe_copy__352->SetLineStyle(0);
   hframe_copy__352->SetMarkerStyle(20);
   hframe_copy__352->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__352->GetXaxis()->SetLabelFont(43);
   hframe_copy__352->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__352->GetXaxis()->SetLabelSize(27);
   hframe_copy__352->GetXaxis()->SetTitleSize(33);
   hframe_copy__352->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__352->GetXaxis()->SetTitleFont(43);
   hframe_copy__352->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__352->GetYaxis()->SetNdivisions(505);
   hframe_copy__352->GetYaxis()->SetLabelFont(43);
   hframe_copy__352->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__352->GetYaxis()->SetLabelSize(21);
   hframe_copy__352->GetYaxis()->SetTitleSize(33);
   hframe_copy__352->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__352->GetYaxis()->SetTitleFont(43);
   hframe_copy__352->GetZaxis()->SetLabelFont(43);
   hframe_copy__352->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__352->GetZaxis()->SetLabelSize(27);
   hframe_copy__352->GetZaxis()->SetTitleSize(33);
   hframe_copy__352->GetZaxis()->SetTitleOffset(1);
   hframe_copy__352->GetZaxis()->SetTitleFont(43);
   hframe_copy__352->Draw("sameaxis");
   MVAOutputM3000_2->Modified();
   MVAOutputM3000->cd();
  
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
   MVAOutputM3000->cd();
  
// ------------>Primitives in pad: MVAOutputM3000_1
   TPad *MVAOutputM3000_1 = new TPad("MVAOutputM3000_1", "MVAOutputM3000_1",0,0.2897959,1,1);
   MVAOutputM3000_1->Draw();
   MVAOutputM3000_1->cd();
   MVAOutputM3000_1->Range(-0.204557,-2.187985,1.073924,7.211261);
   MVAOutputM3000_1->SetFillColor(0);
   MVAOutputM3000_1->SetFillStyle(4000);
   MVAOutputM3000_1->SetBorderMode(0);
   MVAOutputM3000_1->SetBorderSize(2);
   MVAOutputM3000_1->SetLogy();
   MVAOutputM3000_1->SetTickx(1);
   MVAOutputM3000_1->SetTicky(1);
   MVAOutputM3000_1->SetLeftMargin(0.16);
   MVAOutputM3000_1->SetRightMargin(0.05);
   MVAOutputM3000_1->SetTopMargin(0.06);
   MVAOutputM3000_1->SetBottomMargin(0.02);
   MVAOutputM3000_1->SetFrameFillStyle(0);
   MVAOutputM3000_1->SetFrameBorderMode(0);
   MVAOutputM3000_1->SetFrameFillStyle(0);
   MVAOutputM3000_1->SetFrameBorderMode(0);
   
   TH1F *hframe__353 = new TH1F("hframe__353","",1000,0,1.01);
   hframe__353->SetMinimum(0.01);
   hframe__353->SetMaximum(4439212);
   hframe__353->SetDirectory(0);
   hframe__353->SetStats(0);
   hframe__353->SetLineStyle(0);
   hframe__353->SetMarkerStyle(20);
   hframe__353->GetXaxis()->SetLabelFont(43);
   hframe__353->GetXaxis()->SetLabelOffset(0.007);
   hframe__353->GetXaxis()->SetLabelSize(0);
   hframe__353->GetXaxis()->SetTitleSize(0);
   hframe__353->GetXaxis()->SetTitleOffset(0.9);
   hframe__353->GetXaxis()->SetTitleFont(43);
   hframe__353->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__353->GetYaxis()->SetLabelFont(43);
   hframe__353->GetYaxis()->SetLabelOffset(0.007);
   hframe__353->GetYaxis()->SetLabelSize(27);
   hframe__353->GetYaxis()->SetTitleSize(33);
   hframe__353->GetYaxis()->SetTitleOffset(1.5625);
   hframe__353->GetYaxis()->SetTitleFont(43);
   hframe__353->GetZaxis()->SetLabelFont(43);
   hframe__353->GetZaxis()->SetLabelOffset(0.007);
   hframe__353->GetZaxis()->SetLabelSize(27);
   hframe__353->GetZaxis()->SetTitleSize(33);
   hframe__353->GetZaxis()->SetTitleOffset(1);
   hframe__353->GetZaxis()->SetTitleFont(43);
   hframe__353->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis301[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_49_stack_50_stack_51 = new TH1F("StackedMCstackHist_stack_49_stack_50_stack_51","StackedMCstackHist",20, xAxis301);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMinimum(35.10304);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMaximum(1111384);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetDirectory(0);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetStats(0);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetLineStyle(0);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMarkerStyle(20);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_49_stack_50_stack_51->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_49_stack_50_stack_51);
   
   Double_t xAxis302[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM3000Inclusive",20, xAxis302);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,14676.65);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1785.089);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1112.987);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,717.5671);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,599.376);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,430.8394);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,500.9631);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,431.7014);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,427.1588);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,296.8931);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,361.2596);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,312.508);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,247.9723);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,260.1281);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,265.3335);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,257.5763);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,241.2919);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,294.8806);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,277.4978);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,133.0306);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,262.2726);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,81.74098);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,80.25921);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,55.42353);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,64.73059);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,39.1638);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,46.42469);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,42.9207);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,37.86524);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,36.39113);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,37.12378);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,35.75992);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,34.11009);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,29.16617);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,32.93263);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,30.27713);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,30.16719);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,35.26531);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,35.31689);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,20.04903);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5173.506);
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
   Double_t xAxis303[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM3000Inclusive",20, xAxis303);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,530633.4);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,54698.28);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,30411.85);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,21761.56);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,17158.86);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,14707.4);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,12276.1);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,10965.62);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,9611.99);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,8938.645);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,8072.078);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,7510.046);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,7099.633);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,6639.064);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,6253.762);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,6041.045);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,5855.622);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,5675.859);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,4863.12);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,2598.751);
   TT_stack_2_stack_2_stack_2->SetBinError(1,764.5293);
   TT_stack_2_stack_2_stack_2->SetBinError(2,246.1714);
   TT_stack_2_stack_2_stack_2->SetBinError(3,183.2129);
   TT_stack_2_stack_2_stack_2->SetBinError(4,154.8617);
   TT_stack_2_stack_2_stack_2->SetBinError(5,137.5903);
   TT_stack_2_stack_2_stack_2->SetBinError(6,127.2165);
   TT_stack_2_stack_2_stack_2->SetBinError(7,116.2736);
   TT_stack_2_stack_2_stack_2->SetBinError(8,109.6806);
   TT_stack_2_stack_2_stack_2->SetBinError(9,102.7742);
   TT_stack_2_stack_2_stack_2->SetBinError(10,99.09658);
   TT_stack_2_stack_2_stack_2->SetBinError(11,94.22915);
   TT_stack_2_stack_2_stack_2->SetBinError(12,90.74421);
   TT_stack_2_stack_2_stack_2->SetBinError(13,88.24079);
   TT_stack_2_stack_2_stack_2->SetBinError(14,85.31479);
   TT_stack_2_stack_2_stack_2->SetBinError(15,82.64629);
   TT_stack_2_stack_2_stack_2->SetBinError(16,81.25032);
   TT_stack_2_stack_2_stack_2->SetBinError(17,80.03054);
   TT_stack_2_stack_2_stack_2->SetBinError(18,78.84644);
   TT_stack_2_stack_2_stack_2->SetBinError(19,72.71967);
   TT_stack_2_stack_2_stack_2->SetBinError(20,53.0548);
   TT_stack_2_stack_2_stack_2->SetEntries(700714.3);
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
   Double_t xAxis304[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM3000Inclusive",20, xAxis304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,86630.15);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,12296.93);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,7025.617);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5637.437);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,4366.099);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,4243.69);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,2606.901);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2769.538);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,2939.054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3232.877);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2387.457);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2050.604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1518.697);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1814.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1552.993);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2035.47);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1029.969);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1259.206);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1017.775);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1209.469);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,2081.545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,732.7398);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,558.448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,485.0721);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,437.1228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,409.443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,352.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,344.6067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,332.4527);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,342.6045);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,310.9146);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,288.4662);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,261.9004);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,274.2764);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,255.6556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,268.1284);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,231.1766);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,239.1961);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,223.3115);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,202.8069);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3154.237);
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
   Double_t xAxis305[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__354 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__354","h_SR_MVAOutputM3000Inclusive",20, xAxis305);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(1,1034.346);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(2,119.9814);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(3,109.5518);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(4,83.36177);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(5,81.26499);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(6,58.78953);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(7,54.87594);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(8,50.89062);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(9,36.7607);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(10,67.37227);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(11,49.44587);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(12,42.26767);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(13,45.41365);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(14,35.74354);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(15,35.00635);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(16,59.04936);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(17,51.98496);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(18,62.98826);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(19,37.85596);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(20,16.75339);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(1,48.43941);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(2,19.87093);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(3,15.93407);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(4,14.71167);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(5,13.73234);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(6,13.16032);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(7,12.43943);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(8,12.66877);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(9,12.01548);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(10,11.96983);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(11,11.83628);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(12,11.69003);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(13,11.00097);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(14,11.18595);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(15,11.24037);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(16,11.6614);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(17,11.99374);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(18,11.41745);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(19,11.03617);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(20,6.619838);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetEntries(842.8918);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3204[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3204[20] = {
   631940.2,
   68780.3,
   38550.45,
   28116.57,
   22124.33,
   19381.93,
   15383.97,
   14166.86,
   12978.2,
   12468.42,
   10820.79,
   9873.158,
   8866.303,
   8713.651,
   8072.088,
   8334.092,
   7126.883,
   7229.945,
   6158.393,
   3941.251};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3204[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3204[20] = {
   2232.962,
   777.2963,
   593.1886,
   512.2,
   462.8147,
   430.5362,
   374.0359,
   364.1783,
   350.0302,
   358.5001,
   326.9942,
   304.5095,
   278.4632,
   288.7158,
   270.6931,
   281.7999,
   246.4905,
   254.3132,
   237.4941,
   210.5883};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3204[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3204[20] = {
   2232.962,
   777.2963,
   593.1886,
   512.2,
   462.8147,
   430.5362,
   374.0359,
   364.1783,
   350.0302,
   358.5001,
   326.9942,
   304.5095,
   278.4632,
   288.7158,
   270.6931,
   281.7999,
   246.4905,
   254.3132,
   237.4941,
   210.5883};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3204,BkgSum-SR-Inclusive_sum_errors_fy3204,BkgSum-SR-Inclusive_sum_errors_felx3204,BkgSum-SR-Inclusive_sum_errors_fehx3204,BkgSum-SR-Inclusive_sum_errors_fely3204,BkgSum-SR-Inclusive_sum_errors_fehy3204);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMinimum(3357.596);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMaximum(697217.4);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors319632003204);
   
   grae->Draw("e2 ");
   Double_t xAxis306[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__355 = new TH1F("Data__355","h_SR_MVAOutputM3000Inclusive",20, xAxis306);
   Data__355->SetBinContent(1,591580);
   Data__355->SetBinContent(2,64600);
   Data__355->SetBinContent(3,36900);
   Data__355->SetBinContent(4,26840);
   Data__355->SetBinContent(5,21040);
   Data__355->SetBinContent(6,18520);
   Data__355->SetBinContent(7,15600);
   Data__355->SetBinContent(8,13240);
   Data__355->SetBinContent(9,11880);
   Data__355->SetBinContent(10,11700);
   Data__355->SetBinContent(11,10080);
   Data__355->SetBinContent(12,10400);
   Data__355->SetBinContent(13,9840);
   Data__355->SetBinContent(14,8820);
   Data__355->SetBinContent(15,7960);
   Data__355->SetBinContent(16,7740);
   Data__355->SetBinContent(17,7960);
   Data__355->SetBinContent(18,6700);
   Data__355->SetBinContent(19,6000);
   Data__355->SetBinContent(20,2460);
   Data__355->SetBinError(1,3439.709);
   Data__355->SetBinError(2,1136.662);
   Data__355->SetBinError(3,859.0693);
   Data__355->SetBinError(4,732.6664);
   Data__355->SetBinError(5,648.691);
   Data__355->SetBinError(6,608.605);
   Data__355->SetBinError(7,558.5696);
   Data__355->SetBinError(8,514.5872);
   Data__355->SetBinError(9,487.4423);
   Data__355->SetBinError(10,483.7355);
   Data__355->SetBinError(11,448.9989);
   Data__355->SetBinError(12,456.0702);
   Data__355->SetBinError(13,443.6215);
   Data__355->SetBinError(14,420);
   Data__355->SetBinError(15,398.9987);
   Data__355->SetBinError(16,393.4463);
   Data__355->SetBinError(17,398.9987);
   Data__355->SetBinError(18,366.0601);
   Data__355->SetBinError(19,346.4102);
   Data__355->SetBinError(20,221.8107);
   Data__355->SetEntries(44493);
   Data__355->SetDirectory(0);
   Data__355->SetFillStyle(3001);
   Data__355->SetLineWidth(2);
   Data__355->SetMarkerStyle(20);
   Data__355->SetMarkerSize(1.2);
   Data__355->GetXaxis()->SetRange(1,200);
   Data__355->GetXaxis()->SetLabelFont(42);
   Data__355->GetXaxis()->SetTitleOffset(1);
   Data__355->GetXaxis()->SetTitleFont(42);
   Data__355->GetYaxis()->SetLabelFont(42);
   Data__355->GetYaxis()->SetTitleFont(42);
   Data__355->GetZaxis()->SetLabelFont(42);
   Data__355->GetZaxis()->SetTitleOffset(1);
   Data__355->GetZaxis()->SetTitleFont(42);
   Data__355->Draw("EP same");
   
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

   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__356 = new TH1F("hframe_copy__356","",1000,0,1.01);
   hframe_copy__356->SetMinimum(0.01);
   hframe_copy__356->SetMaximum(4439212);
   hframe_copy__356->SetDirectory(0);
   hframe_copy__356->SetStats(0);
   hframe_copy__356->SetLineStyle(0);
   hframe_copy__356->SetMarkerStyle(20);
   hframe_copy__356->GetXaxis()->SetLabelFont(43);
   hframe_copy__356->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__356->GetXaxis()->SetLabelSize(0);
   hframe_copy__356->GetXaxis()->SetTitleSize(0);
   hframe_copy__356->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__356->GetXaxis()->SetTitleFont(43);
   hframe_copy__356->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__356->GetYaxis()->SetLabelFont(43);
   hframe_copy__356->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__356->GetYaxis()->SetLabelSize(27);
   hframe_copy__356->GetYaxis()->SetTitleSize(33);
   hframe_copy__356->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__356->GetYaxis()->SetTitleFont(43);
   hframe_copy__356->GetZaxis()->SetLabelFont(43);
   hframe_copy__356->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__356->GetZaxis()->SetLabelSize(27);
   hframe_copy__356->GetZaxis()->SetTitleSize(33);
   hframe_copy__356->GetZaxis()->SetTitleOffset(1);
   hframe_copy__356->GetZaxis()->SetTitleFont(43);
   hframe_copy__356->Draw("sameaxis");
   
   TH1F *hframe_copy__357 = new TH1F("hframe_copy__357","",1000,0,1.01);
   hframe_copy__357->SetMinimum(0.01);
   hframe_copy__357->SetMaximum(4439212);
   hframe_copy__357->SetDirectory(0);
   hframe_copy__357->SetStats(0);
   hframe_copy__357->SetLineStyle(0);
   hframe_copy__357->SetMarkerStyle(20);
   hframe_copy__357->GetXaxis()->SetLabelFont(43);
   hframe_copy__357->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__357->GetXaxis()->SetLabelSize(0);
   hframe_copy__357->GetXaxis()->SetTitleSize(0);
   hframe_copy__357->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__357->GetXaxis()->SetTitleFont(43);
   hframe_copy__357->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__357->GetYaxis()->SetLabelFont(43);
   hframe_copy__357->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__357->GetYaxis()->SetLabelSize(27);
   hframe_copy__357->GetYaxis()->SetTitleSize(33);
   hframe_copy__357->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__357->GetYaxis()->SetTitleFont(43);
   hframe_copy__357->GetZaxis()->SetLabelFont(43);
   hframe_copy__357->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__357->GetZaxis()->SetLabelSize(27);
   hframe_copy__357->GetZaxis()->SetTitleSize(33);
   hframe_copy__357->GetZaxis()->SetTitleOffset(1);
   hframe_copy__357->GetZaxis()->SetTitleFont(43);
   hframe_copy__357->Draw("sameaxis");
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
   MVAOutputM3000_1->Modified();
   MVAOutputM3000->cd();
   MVAOutputM3000->Modified();
   MVAOutputM3000->cd();
   MVAOutputM3000->SetSelected(MVAOutputM3000);
}
