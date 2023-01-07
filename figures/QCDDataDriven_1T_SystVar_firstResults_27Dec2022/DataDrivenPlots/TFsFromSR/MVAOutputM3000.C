void MVAOutputM3000()
{
//=========Macro generated from canvas: MVAOutputM3000/MVAOutputM3000
//=========  (Tue Dec 27 11:55:17 2022) by ROOT version 6.20/02
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
   0.01332089,
   0.03289977,
   0.04506734,
   0.0570452,
   0.0693146,
   0.07877243,
   0.08671715,
   0.09300374,
   0.09885891,
   0.1186127,
   0.1260356,
   0.1222754,
   0.1215482,
   0.1297758,
   0.1339614,
   0.136961,
   0.1609965,
   0.1305418,
   0.1347979,
   0.1140806};
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
   0.01332089,
   0.03289977,
   0.04506734,
   0.0570452,
   0.0693146,
   0.07877243,
   0.08671715,
   0.09300374,
   0.09885891,
   0.1186127,
   0.1260356,
   0.1222754,
   0.1215482,
   0.1297758,
   0.1339614,
   0.136961,
   0.1609965,
   0.1305418,
   0.1347979,
   0.1140806};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3201,BackgroundStatSystError_fy3201,BackgroundStatSystError_felx3201,BackgroundStatSystError_fehx3201,BackgroundStatSystError_fely3201,BackgroundStatSystError_fehy3201);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1261;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError319331973201 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError319331973201","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMinimum(0.8068041);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMaximum(1.193196);
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
   0.01332089,
   0.03289977,
   0.04506734,
   0.0570452,
   0.0693146,
   0.07877243,
   0.08671715,
   0.09300374,
   0.09885891,
   0.1186127,
   0.1260356,
   0.1222754,
   0.1215482,
   0.1297758,
   0.1339614,
   0.136961,
   0.1609965,
   0.1305418,
   0.1347979,
   0.1140806};
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
   0.01332089,
   0.03289977,
   0.04506734,
   0.0570452,
   0.0693146,
   0.07877243,
   0.08671715,
   0.09300374,
   0.09885891,
   0.1186127,
   0.1260356,
   0.1222754,
   0.1215482,
   0.1297758,
   0.1339614,
   0.136961,
   0.1609965,
   0.1305418,
   0.1347979,
   0.1140806};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3202,BackgroundStatError_fy3202,BackgroundStatError_felx3202,BackgroundStatError_fehx3202,BackgroundStatError_fely3202,BackgroundStatError_fehy3202);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1260;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError319431983202 = new TH1F("Graph_Graph_Graph_BackgroundStatError319431983202","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMinimum(0.8068041);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMaximum(1.193196);
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
   
   Double_t Graph1_fx3203[8] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.975};
   Double_t Graph1_fy3203[8] = {
   1.047949,
   0.9936773,
   0.8794976,
   1.122686,
   1.143818,
   1.165413,
   0.04487444,
   0.1275911};
   Double_t Graph1_felx3203[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3203[8] = {
   0.01461417,
   0.03555657,
   0.04584698,
   0.06638583,
   0.0810831,
   0.09301006,
   0.02006846,
   0.04511027};
   Double_t Graph1_fehx3203[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3203[8] = {
   0.01461417,
   0.03555657,
   0.04584698,
   0.06638583,
   0.0810831,
   0.09301006,
   0.02006846,
   0.04511027};
   grae = new TGraphAsymmErrors(8,Graph1_fx3203,Graph1_fy3203,Graph1_felx3203,Graph1_fehx3203,Graph1_fely3203,Graph1_fehy3203);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1319531993203 = new TH1F("Graph_Graph_Graph_Graph1319531993203","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1319531993203->SetMinimum(0.02232538);
   Graph_Graph_Graph_Graph1319531993203->SetMaximum(1.381784);
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
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
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
   MVAOutputM3000_1->Range(-0.204557,-2.17081,1.073924,6.36969);
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
   hframe__353->SetMaximum(719880);
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
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMinimum(0.9406483);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMaximum(186575.4);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2508.985);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,454.9048);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,233.8969);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,217.4238);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,122.7162);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,73.47985);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,79.67993);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,55.43253);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,67.29475);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,37.30756);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,18.52614);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,58.33288);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,29.36234);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,19.52489);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,24.50903);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,24.7602);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,9.537536);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,36.31331);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,35.76894);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,35.11238);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,81.4463);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,39.0851);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,27.18282);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,27.99028);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,17.5665);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,17.79127);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,16.93989);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,13.39884);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,15.38352);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,11.17172);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,7.925309);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,15.69525);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,7.747733);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,7.383689);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,9.20112);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,9.933979);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,6.137561);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,11.08936);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,11.06881);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,9.677257);
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
   Double_t xAxis303[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM3000Inclusive",20, xAxis303);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,34473.55);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4612.523);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2441.729);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1552.165);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1170.094);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,928.6111);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,707.4515);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,607.8165);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,503.5116);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,423.6369);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,367.6007);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,305.8174);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,312.7485);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,289.7376);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,250.4548);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,263.7787);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,263.9289);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,230.9234);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,242.8575);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,307.8788);
   TT_stack_2_stack_2_stack_2->SetBinError(1,207.9246);
   TT_stack_2_stack_2_stack_2->SetBinError(2,76.44894);
   TT_stack_2_stack_2_stack_2->SetBinError(3,55.79986);
   TT_stack_2_stack_2_stack_2->SetBinError(4,44.37263);
   TT_stack_2_stack_2_stack_2->SetBinError(5,38.39043);
   TT_stack_2_stack_2_stack_2->SetBinError(6,34.26095);
   TT_stack_2_stack_2_stack_2->SetBinError(7,30.07811);
   TT_stack_2_stack_2_stack_2->SetBinError(8,27.66575);
   TT_stack_2_stack_2_stack_2->SetBinError(9,25.01774);
   TT_stack_2_stack_2_stack_2->SetBinError(10,22.94829);
   TT_stack_2_stack_2_stack_2->SetBinError(11,22.15058);
   TT_stack_2_stack_2_stack_2->SetBinError(12,20.06146);
   TT_stack_2_stack_2_stack_2->SetBinError(13,19.83438);
   TT_stack_2_stack_2_stack_2->SetBinError(14,19.35112);
   TT_stack_2_stack_2_stack_2->SetBinError(15,17.99375);
   TT_stack_2_stack_2_stack_2->SetBinError(16,18.2941);
   TT_stack_2_stack_2_stack_2->SetBinError(17,18.59018);
   TT_stack_2_stack_2_stack_2->SetBinError(18,17.3953);
   TT_stack_2_stack_2_stack_2->SetBinError(19,17.16929);
   TT_stack_2_stack_2_stack_2->SetBinError(20,19.62327);
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
   Double_t xAxis304[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM3000Inclusive",20, xAxis304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,61151.99);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,10651.96);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5692.788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,3325.334);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,2186.765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,1692.234);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,1441.309);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,1209);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1058.155);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,752.3757);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,705.1054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,763.0565);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,821.6757);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,666.7557);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,691.5958);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,553.1923);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,318.5025);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,671.9534);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,590.8396);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,911.0147);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1288.025);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,509.9871);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,371.9996);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,285.8666);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,237.4615);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,208.698);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,190.1357);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,171.3914);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,158.3366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,141.6339);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,135.5071);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,135.4556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,139.8443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,124.9587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,127.8948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,113.3893);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,93.27256);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,120.8555);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,115.4082);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,141.3747);
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
   Double_t xAxis305[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__354 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__354","h_SR_MVAOutputM3000Inclusive",20, xAxis305);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(1,946.2129);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(2,600.5229);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(3,417.6637);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(4,301.3911);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(5,222.9229);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(6,180.8021);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(7,140.1616);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(8,123.964);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(9,98.87326);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(10,87.81948);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(11,93.30989);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(12,51.79172);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(13,48.24513);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(14,64.09955);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(15,33.81042);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(16,37.83438);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(17,42.9739);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(18,37.86369);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(19,30.90188);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(20,22.85418);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(1,42.79981);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(2,33.10759);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(3,27.67401);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(4,23.92951);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(5,21.13545);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(6,18.43571);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(7,16.6017);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(8,14.86249);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(9,13.97227);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(10,13.36522);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(11,12.41658);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(12,11.67253);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(13,10.77006);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(14,10.0483);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(15,10.46752);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(16,9.715769);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(17,9.707991);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(18,9.628303);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(19,9.222892);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(20,8.76102);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetEntries(1839.371);
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
   98134.52,
   15719.39,
   8368.414,
   5094.923,
   3479.575,
   2694.324,
   2228.44,
   1872.249,
   1628.961,
   1213.32,
   1091.232,
   1127.207,
   1163.786,
   976.0182,
   966.5596,
   841.7313,
   591.9689,
   939.1901,
   869.466,
   1254.006};
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
   1307.239,
   517.1644,
   377.1422,
   290.6409,
   241.1853,
   212.2385,
   193.244,
   174.1262,
   161.0373,
   143.9152,
   137.5341,
   137.8297,
   141.4562,
   126.6636,
   129.4817,
   115.2844,
   95.30495,
   122.6035,
   117.2022,
   143.0578};
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
   1307.239,
   517.1644,
   377.1422,
   290.6409,
   241.1853,
   212.2385,
   193.244,
   174.1262,
   161.0373,
   143.9152,
   137.5341,
   137.8297,
   141.4562,
   126.6636,
   129.4817,
   115.2844,
   95.30495,
   122.6035,
   117.2022,
   143.0578};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3204,BkgSum-SR-Inclusive_sum_errors_fy3204,BkgSum-SR-Inclusive_sum_errors_felx3204,BkgSum-SR-Inclusive_sum_errors_fehx3204,BkgSum-SR-Inclusive_sum_errors_fely3204,BkgSum-SR-Inclusive_sum_errors_fehy3204);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1259;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMinimum(446.9976);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMaximum(109336.3);
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
   Data__355->SetBinContent(1,102840);
   Data__355->SetBinContent(2,15620);
   Data__355->SetBinContent(3,7360);
   Data__355->SetBinContent(4,5720);
   Data__355->SetBinContent(5,3980);
   Data__355->SetBinContent(6,3140);
   Data__355->SetBinContent(7,100);
   Data__355->SetBinContent(20,160);
   Data__355->SetBinError(1,1434.155);
   Data__355->SetBinError(2,558.9275);
   Data__355->SetBinError(3,383.6665);
   Data__355->SetBinError(4,338.2307);
   Data__355->SetBinError(5,282.1347);
   Data__355->SetBinError(6,250.5993);
   Data__355->SetBinError(7,44.72136);
   Data__355->SetBinError(20,56.56854);
   Data__355->SetEntries(6946);
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

   ci = 1259;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1259;
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
   hframe_copy__356->SetMaximum(719880);
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
   hframe_copy__357->SetMaximum(719880);
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
   MVAOutputM3000_1->Modified();
   MVAOutputM3000->cd();
   MVAOutputM3000->Modified();
   MVAOutputM3000->cd();
   MVAOutputM3000->SetSelected(MVAOutputM3000);
}
