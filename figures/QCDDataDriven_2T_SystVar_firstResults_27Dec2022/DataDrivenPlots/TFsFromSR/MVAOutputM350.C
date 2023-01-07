void MVAOutputM350()
{
//=========Macro generated from canvas: MVAOutputM350/MVAOutputM350
//=========  (Tue Dec 27 11:52:03 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM350 = new TCanvas("MVAOutputM350", "MVAOutputM350",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM350->SetHighLightColor(2);
   MVAOutputM350->Range(0,0,1,1);
   MVAOutputM350->SetFillColor(0);
   MVAOutputM350->SetBorderMode(0);
   MVAOutputM350->SetBorderSize(2);
   MVAOutputM350->SetTickx(1);
   MVAOutputM350->SetTicky(1);
   MVAOutputM350->SetLeftMargin(0.16);
   MVAOutputM350->SetRightMargin(0.05);
   MVAOutputM350->SetTopMargin(0.06);
   MVAOutputM350->SetBottomMargin(0.13);
   MVAOutputM350->SetFrameFillStyle(0);
   MVAOutputM350->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM350_2
   TPad *MVAOutputM350_2 = new TPad("MVAOutputM350_2", "MVAOutputM350_2",0,0,1,0.304);
   MVAOutputM350_2->Draw();
   MVAOutputM350_2->cd();
   MVAOutputM350_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM350_2->SetFillColor(0);
   MVAOutputM350_2->SetFillStyle(4000);
   MVAOutputM350_2->SetBorderMode(0);
   MVAOutputM350_2->SetBorderSize(2);
   MVAOutputM350_2->SetTickx(1);
   MVAOutputM350_2->SetTicky(1);
   MVAOutputM350_2->SetLeftMargin(0.16);
   MVAOutputM350_2->SetRightMargin(0.05);
   MVAOutputM350_2->SetTopMargin(0);
   MVAOutputM350_2->SetBottomMargin(0.3421053);
   MVAOutputM350_2->SetFrameFillStyle(0);
   MVAOutputM350_2->SetFrameBorderMode(0);
   MVAOutputM350_2->SetFrameFillStyle(0);
   MVAOutputM350_2->SetFrameBorderMode(0);
   
   TH1F *hframe__99 = new TH1F("hframe__99","",1000,0,1.01);
   hframe__99->SetMinimum(0.3);
   hframe__99->SetMaximum(1.7);
   hframe__99->SetDirectory(0);
   hframe__99->SetStats(0);
   hframe__99->SetLineStyle(0);
   hframe__99->SetMarkerStyle(20);
   hframe__99->GetXaxis()->SetTitle("DNN Output");
   hframe__99->GetXaxis()->SetLabelFont(43);
   hframe__99->GetXaxis()->SetLabelOffset(0.007);
   hframe__99->GetXaxis()->SetLabelSize(27);
   hframe__99->GetXaxis()->SetTitleSize(33);
   hframe__99->GetXaxis()->SetTitleOffset(2.960526);
   hframe__99->GetXaxis()->SetTitleFont(43);
   hframe__99->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__99->GetYaxis()->SetNdivisions(505);
   hframe__99->GetYaxis()->SetLabelFont(43);
   hframe__99->GetYaxis()->SetLabelOffset(0.007);
   hframe__99->GetYaxis()->SetLabelSize(21);
   hframe__99->GetYaxis()->SetTitleSize(33);
   hframe__99->GetYaxis()->SetTitleOffset(1.5625);
   hframe__99->GetYaxis()->SetTitleFont(43);
   hframe__99->GetZaxis()->SetLabelFont(43);
   hframe__99->GetZaxis()->SetLabelOffset(0.007);
   hframe__99->GetZaxis()->SetLabelSize(27);
   hframe__99->GetZaxis()->SetTitleSize(33);
   hframe__99->GetZaxis()->SetTitleOffset(1);
   hframe__99->GetZaxis()->SetTitleFont(43);
   hframe__99->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3057[19] = {
   0.05,
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
   Double_t BackgroundStatSystError_fy3057[19] = {
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
   Double_t BackgroundStatSystError_felx3057[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3057[19] = {
   0.1266231,
   0.09048486,
   0.06409308,
   0.04582734,
   0.03535833,
   0.02920147,
   0.02466779,
   0.02179147,
   0.01987949,
   0.01930664,
   0.01975368,
   0.02140749,
   0.02471845,
   0.03412193,
   0.05545779,
   0.1277629,
   0.2580254,
   2.525853,
   1.523996};
   Double_t BackgroundStatSystError_fehx3057[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3057[19] = {
   0.1266231,
   0.09048486,
   0.06409308,
   0.04582734,
   0.03535833,
   0.02920147,
   0.02466779,
   0.02179147,
   0.01987949,
   0.01930664,
   0.01975368,
   0.02140749,
   0.02471845,
   0.03412193,
   0.05545779,
   0.1277629,
   0.2580254,
   2.525853,
   1.523996};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3057,BackgroundStatSystError_fy3057,BackgroundStatSystError_felx3057,BackgroundStatSystError_fehx3057,BackgroundStatSystError_fely3057,BackgroundStatSystError_fehy3057);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1225;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError304930533057 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError304930533057","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMinimum(-2.031024);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMaximum(4.031024);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError304930533057);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3058[19] = {
   0.05,
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
   Double_t BackgroundStatError_fy3058[19] = {
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
   Double_t BackgroundStatError_felx3058[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fely3058[19] = {
   0.1266231,
   0.09048486,
   0.06409308,
   0.04582734,
   0.03535833,
   0.02920147,
   0.02466779,
   0.02179147,
   0.01987949,
   0.01930664,
   0.01975368,
   0.02140749,
   0.02471845,
   0.03412193,
   0.05545779,
   0.1277629,
   0.2580254,
   2.525853,
   1.523996};
   Double_t BackgroundStatError_fehx3058[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fehy3058[19] = {
   0.1266231,
   0.09048486,
   0.06409308,
   0.04582734,
   0.03535833,
   0.02920147,
   0.02466779,
   0.02179147,
   0.01987949,
   0.01930664,
   0.01975368,
   0.02140749,
   0.02471845,
   0.03412193,
   0.05545779,
   0.1277629,
   0.2580254,
   2.525853,
   1.523996};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3058,BackgroundStatError_fy3058,BackgroundStatError_felx3058,BackgroundStatError_fehx3058,BackgroundStatError_fely3058,BackgroundStatError_fehy3058);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1224;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError305030543058 = new TH1F("Graph_Graph_Graph_BackgroundStatError305030543058","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMinimum(-2.031024);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMaximum(4.031024);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError305030543058);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx15[2] = {
   0,
   1.01};
   Double_t Graph0_fy15[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx15,Graph0_fy15);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0131415 = new TH1F("Graph_Graph_Graph_Graph0131415","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0131415->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0131415->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0131415->SetDirectory(0);
   Graph_Graph_Graph_Graph0131415->SetStats(0);
   Graph_Graph_Graph_Graph0131415->SetLineStyle(0);
   Graph_Graph_Graph_Graph0131415->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0131415);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3059[6] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3059[6] = {
   0.9844151,
   1.054085,
   0.9506189,
   1.077395,
   0.9472943,
   0.08363201};
   Double_t Graph1_felx3059[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3059[6] = {
   0.1378457,
   0.1019023,
   0.06453222,
   0.0521388,
   0.03676215,
   0.009125};
   Double_t Graph1_fehx3059[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3059[6] = {
   0.1378457,
   0.1019023,
   0.06453222,
   0.0521388,
   0.03676215,
   0.009125};
   grae = new TGraphAsymmErrors(6,Graph1_fx3059,Graph1_fy3059,Graph1_felx3059,Graph1_fehx3059,Graph1_fely3059,Graph1_fehy3059);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1305130553059 = new TH1F("Graph_Graph_Graph_Graph1305130553059","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1305130553059->SetMinimum(0.06705631);
   Graph_Graph_Graph_Graph1305130553059->SetMaximum(1.264135);
   Graph_Graph_Graph_Graph1305130553059->SetDirectory(0);
   Graph_Graph_Graph_Graph1305130553059->SetStats(0);
   Graph_Graph_Graph_Graph1305130553059->SetLineStyle(0);
   Graph_Graph_Graph_Graph1305130553059->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1305130553059);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__100 = new TH1F("hframe_copy__100","",1000,0,1.01);
   hframe_copy__100->SetMinimum(0.3);
   hframe_copy__100->SetMaximum(1.7);
   hframe_copy__100->SetDirectory(0);
   hframe_copy__100->SetStats(0);
   hframe_copy__100->SetLineStyle(0);
   hframe_copy__100->SetMarkerStyle(20);
   hframe_copy__100->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__100->GetXaxis()->SetLabelFont(43);
   hframe_copy__100->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__100->GetXaxis()->SetLabelSize(27);
   hframe_copy__100->GetXaxis()->SetTitleSize(33);
   hframe_copy__100->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__100->GetXaxis()->SetTitleFont(43);
   hframe_copy__100->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__100->GetYaxis()->SetNdivisions(505);
   hframe_copy__100->GetYaxis()->SetLabelFont(43);
   hframe_copy__100->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__100->GetYaxis()->SetLabelSize(21);
   hframe_copy__100->GetYaxis()->SetTitleSize(33);
   hframe_copy__100->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__100->GetYaxis()->SetTitleFont(43);
   hframe_copy__100->GetZaxis()->SetLabelFont(43);
   hframe_copy__100->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__100->GetZaxis()->SetLabelSize(27);
   hframe_copy__100->GetZaxis()->SetTitleSize(33);
   hframe_copy__100->GetZaxis()->SetTitleOffset(1);
   hframe_copy__100->GetZaxis()->SetTitleFont(43);
   hframe_copy__100->Draw("sameaxis");
   MVAOutputM350_2->Modified();
   MVAOutputM350->cd();
  
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
   MVAOutputM350->cd();
  
// ------------>Primitives in pad: MVAOutputM350_1
   TPad *MVAOutputM350_1 = new TPad("MVAOutputM350_1", "MVAOutputM350_1",0,0.2897959,1,1);
   MVAOutputM350_1->Draw();
   MVAOutputM350_1->cd();
   MVAOutputM350_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM350_1->SetFillColor(0);
   MVAOutputM350_1->SetFillStyle(4000);
   MVAOutputM350_1->SetBorderMode(0);
   MVAOutputM350_1->SetBorderSize(2);
   MVAOutputM350_1->SetLogy();
   MVAOutputM350_1->SetTickx(1);
   MVAOutputM350_1->SetTicky(1);
   MVAOutputM350_1->SetLeftMargin(0.16);
   MVAOutputM350_1->SetRightMargin(0.05);
   MVAOutputM350_1->SetTopMargin(0.06);
   MVAOutputM350_1->SetBottomMargin(0.02);
   MVAOutputM350_1->SetFrameFillStyle(0);
   MVAOutputM350_1->SetFrameBorderMode(0);
   MVAOutputM350_1->SetFrameFillStyle(0);
   MVAOutputM350_1->SetFrameBorderMode(0);
   
   TH1F *hframe__101 = new TH1F("hframe__101","",1000,0,1.01);
   hframe__101->SetMinimum(0.01);
   hframe__101->SetMaximum(500000);
   hframe__101->SetDirectory(0);
   hframe__101->SetStats(0);
   hframe__101->SetLineStyle(0);
   hframe__101->SetMarkerStyle(20);
   hframe__101->GetXaxis()->SetLabelFont(43);
   hframe__101->GetXaxis()->SetLabelOffset(0.007);
   hframe__101->GetXaxis()->SetLabelSize(0);
   hframe__101->GetXaxis()->SetTitleSize(0);
   hframe__101->GetXaxis()->SetTitleOffset(0.9);
   hframe__101->GetXaxis()->SetTitleFont(43);
   hframe__101->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__101->GetYaxis()->SetLabelFont(43);
   hframe__101->GetYaxis()->SetLabelOffset(0.007);
   hframe__101->GetYaxis()->SetLabelSize(27);
   hframe__101->GetYaxis()->SetTitleSize(33);
   hframe__101->GetYaxis()->SetTitleOffset(1.5625);
   hframe__101->GetYaxis()->SetTitleFont(43);
   hframe__101->GetZaxis()->SetLabelFont(43);
   hframe__101->GetZaxis()->SetLabelOffset(0.007);
   hframe__101->GetZaxis()->SetLabelSize(27);
   hframe__101->GetZaxis()->SetTitleSize(33);
   hframe__101->GetZaxis()->SetTitleOffset(1);
   hframe__101->GetZaxis()->SetTitleFont(43);
   hframe__101->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis85[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_13_stack_14_stack_15 = new TH1F("StackedMCstackHist_stack_13_stack_14_stack_15","StackedMCstackHist",19, xAxis85);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMinimum(16.47445);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMaximum(65897.81);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetDirectory(0);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetStats(0);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetLineStyle(0);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMarkerStyle(20);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_13_stack_14_stack_15);
   
   Double_t xAxis86[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM350Inclusive",19, xAxis86);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,14.9649);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,79.55837);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,135.4684);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,271.7726);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,462.1586);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,580.6884);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,924.4183);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1234.001);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1375.895);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1484.789);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1558.57);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1506.113);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,1233.718);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,643.8297);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,205.3307);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,38.23627);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,8.320628);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,1.433374);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.004646907);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,5.510567);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,14.83002);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,21.40161);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,28.6749);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,37.18022);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,42.53473);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,60.48524);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,62.16332);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,61.72808);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,61.89011);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,65.17777);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,62.25501);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,61.49286);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,38.9307);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,18.74468);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,10.62955);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,5.287748);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.455266);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.003285981);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4091.033);
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
   Double_t xAxis87[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM350Inclusive",19, xAxis87);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,212.3564);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,877.7103);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1713.833);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3434.031);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,5706.927);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,8791.466);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,12256.44);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,16385.97);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,19318.08);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,21069.27);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,20492.19);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,18188.67);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,12929.78);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,7214.72);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2629.649);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,501.4891);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,94.04763);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,7.141931);
   TT_stack_2_stack_2_stack_2->SetBinError(1,11.36566);
   TT_stack_2_stack_2_stack_2->SetBinError(2,32.97021);
   TT_stack_2_stack_2_stack_2->SetBinError(3,45.65881);
   TT_stack_2_stack_2_stack_2->SetBinError(4,64.73391);
   TT_stack_2_stack_2_stack_2->SetBinError(5,83.37884);
   TT_stack_2_stack_2_stack_2->SetBinError(6,103.8604);
   TT_stack_2_stack_2_stack_2->SetBinError(7,122.6923);
   TT_stack_2_stack_2_stack_2->SetBinError(8,142.0723);
   TT_stack_2_stack_2_stack_2->SetBinError(9,154.1801);
   TT_stack_2_stack_2_stack_2->SetBinError(10,161.3586);
   TT_stack_2_stack_2_stack_2->SetBinError(11,159.1922);
   TT_stack_2_stack_2_stack_2->SetBinError(12,150.1572);
   TT_stack_2_stack_2_stack_2->SetBinError(13,126.3158);
   TT_stack_2_stack_2_stack_2->SetBinError(14,94.6573);
   TT_stack_2_stack_2_stack_2->SetBinError(15,57.2337);
   TT_stack_2_stack_2_stack_2->SetBinError(16,25.84926);
   TT_stack_2_stack_2_stack_2->SetBinError(17,10.71017);
   TT_stack_2_stack_2_stack_2->SetBinError(18,3.007958);
   TT_stack_2_stack_2_stack_2->SetEntries(123166.2);
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
   Double_t xAxis88[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM350Inclusive",19, xAxis88);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,290.7529);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1072.928);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,2716.146);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,4220.723);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7849.79);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,10715.85);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,12457.07);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,15362.42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,18258.89);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,18632.07);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,17527.81);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,13212.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,11180.94);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,5200.693);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2215.106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,485.8195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,41.7009);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,-6.854272);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,-0.002091159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,64.37265);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,180.1096);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,288.2359);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,356.285);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,487.2045);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,575.7626);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,617.4601);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,701.8054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,756.3439);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,776.1582);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,762.6638);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,685.4581);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,610.5195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,433.693);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,273.5146);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,128.0109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,35.20228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,2.780551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.002091159);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4378.613);
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
   Double_t xAxis89[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__102 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__102","h_SR_MVAOutputM350Inclusive",19, xAxis89);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(1,7.39435);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(2,40.53165);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(3,78.49471);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(4,210.461);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(5,501.8785);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(6,712.0913);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(7,1065.802);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(8,1283.5);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(9,1519.393);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(10,1635.427);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(11,1679.927);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(12,1421.515);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(13,975.9771);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(14,534.1493);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(15,230.1694);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(16,73.07566);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(17,25.70931);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(18,2.858487);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(1,2.139955);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(2,8.197395);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(3,13.22721);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(4,20.52624);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(5,29.24033);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(6,36.42988);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(7,43.94527);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(8,49.85023);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(9,53.60807);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(10,55.03105);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(11,55.00451);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(12,51.35498);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(13,44.09632);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(14,33.51736);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(15,21.93012);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(16,12.16556);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(17,6.097115);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(18,2.506476);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetEntries(6377.897);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3060[19] = {
   0.05,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3060[19] = {
   518.0742,
   2030.197,
   4565.447,
   7926.526,
   14018.88,
   20088,
   25637.93,
   32982.39,
   38952.86,
   41186.13,
   39578.58,
   32907.56,
   25344.43,
   13059.24,
   5050.086,
   1025.545,
   144.0692,
   1.721033,
   0.002555748};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3060[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3060[19] = {
   65.60018,
   183.702,
   292.6135,
   363.2516,
   495.684,
   586.5993,
   632.4309,
   718.7348,
   774.363,
   795.1657,
   781.8224,
   704.4684,
   626.4751,
   445.6065,
   280.0666,
   131.0266,
   37.1735,
   4.347077,
   0.003894948};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3060[19] = {
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
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3060[19] = {
   65.60018,
   183.702,
   292.6135,
   363.2516,
   495.684,
   586.5993,
   632.4309,
   718.7348,
   774.363,
   795.1657,
   781.8224,
   704.4684,
   626.4751,
   445.6065,
   280.0666,
   131.0266,
   37.1735,
   4.347077,
   0.003894948};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3060,BkgSum-SR-Inclusive_sum_errors_fy3060,BkgSum-SR-Inclusive_sum_errors_felx3060,BkgSum-SR-Inclusive_sum_errors_fehx3060,BkgSum-SR-Inclusive_sum_errors_fely3060,BkgSum-SR-Inclusive_sum_errors_fehy3060);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1223;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMinimum(0.0007667243);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMaximum(46179.43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors305230563060);
   
   grae->Draw("e2 ");
   Double_t xAxis90[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__103 = new TH1F("Data__103","h_SR_MVAOutputM350Inclusive",19, xAxis90);
   Data__103->SetBinContent(1,510);
   Data__103->SetBinContent(2,2140);
   Data__103->SetBinContent(3,4340);
   Data__103->SetBinContent(4,8540);
   Data__103->SetBinContent(5,13280);
   Data__103->SetBinContent(6,1680);
   Data__103->SetBinError(1,71.41428);
   Data__103->SetBinError(2,206.8816);
   Data__103->SetBinError(3,294.6184);
   Data__103->SetBinError(4,413.2796);
   Data__103->SetBinError(5,515.3639);
   Data__103->SetBinError(6,183.303);
   Data__103->SetEntries(1537.358);
   Data__103->SetDirectory(0);
   Data__103->SetFillStyle(3001);
   Data__103->SetLineWidth(2);
   Data__103->SetMarkerStyle(20);
   Data__103->SetMarkerSize(1.2);
   Data__103->GetXaxis()->SetRange(1,200);
   Data__103->GetXaxis()->SetLabelFont(42);
   Data__103->GetXaxis()->SetTitleOffset(1);
   Data__103->GetXaxis()->SetTitleFont(42);
   Data__103->GetYaxis()->SetLabelFont(42);
   Data__103->GetYaxis()->SetTitleFont(42);
   Data__103->GetZaxis()->SetLabelFont(42);
   Data__103->GetZaxis()->SetTitleOffset(1);
   Data__103->GetZaxis()->SetTitleFont(42);
   Data__103->Draw("EP same");
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

   ci = 1223;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1223;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__104 = new TH1F("hframe_copy__104","",1000,0,1.01);
   hframe_copy__104->SetMinimum(0.01);
   hframe_copy__104->SetMaximum(500000);
   hframe_copy__104->SetDirectory(0);
   hframe_copy__104->SetStats(0);
   hframe_copy__104->SetLineStyle(0);
   hframe_copy__104->SetMarkerStyle(20);
   hframe_copy__104->GetXaxis()->SetLabelFont(43);
   hframe_copy__104->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__104->GetXaxis()->SetLabelSize(0);
   hframe_copy__104->GetXaxis()->SetTitleSize(0);
   hframe_copy__104->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__104->GetXaxis()->SetTitleFont(43);
   hframe_copy__104->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__104->GetYaxis()->SetLabelFont(43);
   hframe_copy__104->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__104->GetYaxis()->SetLabelSize(27);
   hframe_copy__104->GetYaxis()->SetTitleSize(33);
   hframe_copy__104->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__104->GetYaxis()->SetTitleFont(43);
   hframe_copy__104->GetZaxis()->SetLabelFont(43);
   hframe_copy__104->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__104->GetZaxis()->SetLabelSize(27);
   hframe_copy__104->GetZaxis()->SetTitleSize(33);
   hframe_copy__104->GetZaxis()->SetTitleOffset(1);
   hframe_copy__104->GetZaxis()->SetTitleFont(43);
   hframe_copy__104->Draw("sameaxis");
   
   TH1F *hframe_copy__105 = new TH1F("hframe_copy__105","",1000,0,1.01);
   hframe_copy__105->SetMinimum(0.01);
   hframe_copy__105->SetMaximum(500000);
   hframe_copy__105->SetDirectory(0);
   hframe_copy__105->SetStats(0);
   hframe_copy__105->SetLineStyle(0);
   hframe_copy__105->SetMarkerStyle(20);
   hframe_copy__105->GetXaxis()->SetLabelFont(43);
   hframe_copy__105->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__105->GetXaxis()->SetLabelSize(0);
   hframe_copy__105->GetXaxis()->SetTitleSize(0);
   hframe_copy__105->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__105->GetXaxis()->SetTitleFont(43);
   hframe_copy__105->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__105->GetYaxis()->SetLabelFont(43);
   hframe_copy__105->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__105->GetYaxis()->SetLabelSize(27);
   hframe_copy__105->GetYaxis()->SetTitleSize(33);
   hframe_copy__105->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__105->GetYaxis()->SetTitleFont(43);
   hframe_copy__105->GetZaxis()->SetLabelFont(43);
   hframe_copy__105->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__105->GetZaxis()->SetLabelSize(27);
   hframe_copy__105->GetZaxis()->SetTitleSize(33);
   hframe_copy__105->GetZaxis()->SetTitleOffset(1);
   hframe_copy__105->GetZaxis()->SetTitleFont(43);
   hframe_copy__105->Draw("sameaxis");
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
   MVAOutputM350_1->Modified();
   MVAOutputM350->cd();
   MVAOutputM350->Modified();
   MVAOutputM350->cd();
   MVAOutputM350->SetSelected(MVAOutputM350);
}
