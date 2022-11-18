void MVAOutputM350()
{
//=========Macro generated from canvas: MVAOutputM350/MVAOutputM350
//=========  (Fri Nov 18 13:27:14 2022) by ROOT version 6.20/02
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
   0.05975113,
   0.05240183,
   0.04544891,
   0.04127779,
   0.03682639,
   0.03537695,
   0.03363826,
   0.03393979,
   0.03470032,
   0.03643437,
   0.03927161,
   0.04402903,
   0.04783908,
   0.05959561,
   0.07000245,
   0.1206337,
   0.1841629,
   0.5663672,
   0.7175191};
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
   0.05975113,
   0.05240183,
   0.04544891,
   0.04127779,
   0.03682639,
   0.03537695,
   0.03363826,
   0.03393979,
   0.03470032,
   0.03643437,
   0.03927161,
   0.04402903,
   0.04783908,
   0.05959561,
   0.07000245,
   0.1206337,
   0.1841629,
   0.5663672,
   0.7175191};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3057,BackgroundStatSystError_fy3057,BackgroundStatSystError_felx3057,BackgroundStatSystError_fehx3057,BackgroundStatSystError_fely3057,BackgroundStatSystError_fehy3057);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1224;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError304930533057 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError304930533057","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMinimum(0.138977);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMaximum(1.861023);
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
   0.05975113,
   0.05240183,
   0.04544891,
   0.04127779,
   0.03682639,
   0.03537695,
   0.03363826,
   0.03393979,
   0.03470032,
   0.03643437,
   0.03927161,
   0.04402903,
   0.04783908,
   0.05959561,
   0.07000245,
   0.1206337,
   0.1841629,
   0.5663672,
   0.7175191};
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
   0.05975113,
   0.05240183,
   0.04544891,
   0.04127779,
   0.03682639,
   0.03537695,
   0.03363826,
   0.03393979,
   0.03470032,
   0.03643437,
   0.03927161,
   0.04402903,
   0.04783908,
   0.05959561,
   0.07000245,
   0.1206337,
   0.1841629,
   0.5663672,
   0.7175191};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3058,BackgroundStatError_fy3058,BackgroundStatError_felx3058,BackgroundStatError_fehx3058,BackgroundStatError_fely3058,BackgroundStatError_fehy3058);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1223;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError305030543058 = new TH1F("Graph_Graph_Graph_BackgroundStatError305030543058","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMinimum(0.138977);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMaximum(1.861023);
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
   0.9904867,
   0.9544448,
   0.9596257,
   1.014393,
   0.9937641,
   0.08070621};
   Double_t Graph1_felx3059[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3059[6] = {
   0.06393564,
   0.0553825,
   0.04780236,
   0.04513992,
   0.03975056,
   0.01098272};
   Double_t Graph1_fehx3059[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3059[6] = {
   0.06393564,
   0.0553825,
   0.04780236,
   0.04513992,
   0.03975056,
   0.01098272};
   grae = new TGraphAsymmErrors(6,Graph1_fx3059,Graph1_fy3059,Graph1_felx3059,Graph1_fehx3059,Graph1_fely3059,Graph1_fehy3059);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1305130553059 = new TH1F("Graph_Graph_Graph_Graph1305130553059","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1305130553059->SetMinimum(0.06275114);
   Graph_Graph_Graph_Graph1305130553059->SetMaximum(1.158514);
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
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMinimum(6.071054);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMaximum(24284.22);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,52.95185);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,144.7035);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,218.7765);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,272.9266);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,334.1794);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,344.5871);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,377.3674);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,461.1035);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,446.2619);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,366.0042);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,302.8011);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,248.6648);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,215.3637);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,161.3189);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,127.5963);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,41.58698);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,11.65467);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,1.136059);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.06512925);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,8.942039);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,23.19574);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,26.75475);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,28.04898);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,36.92947);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,30.58998);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,33.87797);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,34.78656);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,41.0669);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,33.01077);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,29.03135);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,21.95708);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,23.43606);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,17.8859);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,17.6679);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,7.336982);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,2.502626);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.2568721);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.04607806);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1406.626);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,677.2029);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1755.309);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2344.126);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3223.326);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3923.995);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4696.353);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5060.246);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,5325.668);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,5012.407);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4570.674);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,4146.613);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3409.548);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2583.341);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1766.457);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1035.862);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,517.3223);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,164.2204);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,25.96877);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1.990165);
   TT_stack_2_stack_2_stack_2->SetBinError(1,20.95827);
   TT_stack_2_stack_2_stack_2->SetBinError(2,47.28098);
   TT_stack_2_stack_2_stack_2->SetBinError(3,54.79272);
   TT_stack_2_stack_2_stack_2->SetBinError(4,64.20821);
   TT_stack_2_stack_2_stack_2->SetBinError(5,70.80353);
   TT_stack_2_stack_2_stack_2->SetBinError(6,77.70531);
   TT_stack_2_stack_2_stack_2->SetBinError(7,80.56583);
   TT_stack_2_stack_2_stack_2->SetBinError(8,82.47342);
   TT_stack_2_stack_2_stack_2->SetBinError(9,79.95611);
   TT_stack_2_stack_2_stack_2->SetBinError(10,75.99935);
   TT_stack_2_stack_2_stack_2->SetBinError(11,72.53658);
   TT_stack_2_stack_2_stack_2->SetBinError(12,65.33555);
   TT_stack_2_stack_2_stack_2->SetBinError(13,57.07531);
   TT_stack_2_stack_2_stack_2->SetBinError(14,47.14709);
   TT_stack_2_stack_2_stack_2->SetBinError(15,36.20527);
   TT_stack_2_stack_2_stack_2->SetBinError(16,25.58846);
   TT_stack_2_stack_2_stack_2->SetBinError(17,14.24209);
   TT_stack_2_stack_2_stack_2->SetBinError(18,5.758593);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.445067);
   TT_stack_2_stack_2_stack_2->SetEntries(39733.08);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1692.896);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,4323.501);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5836.206);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,6460.435);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8320.264);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,8340.931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,9740.022);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,8994.212);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,8718.844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,7971.604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,6587.011);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,5338.792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,4839.634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3024.754);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2497.568);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,610.8005);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,349.1516);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,30.31931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,-0.0395286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,142.9757);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,321.8431);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,376.8289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,404.9734);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,456.2833);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,465.986);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,503.013);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,493.6135);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,483.6831);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,462.9485);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,426.3179);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,390.0867);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,360.1645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,290.8095);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,253.0946);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,138.5728);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,95.60304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,32.00825);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.0398539);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3593.603);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(1,30.63);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(2,93.91571);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(3,182.7582);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(4,276.3967);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(5,397.4934);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(6,469.1653);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(7,481.9659);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(8,459.7232);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(9,369.1594);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(10,227.6334);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(11,202.9454);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(12,170.9831);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(13,112.3791);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(14,56.34586);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(15,49.71159);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(16,5.257694);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(17,5.68706);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(18,-1.24892);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(1,6.077163);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(2,14.21494);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(3,18.81255);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(4,23.4602);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(5,27.8541);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(6,29.84093);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(7,30.21369);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(8,29.1953);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(9,26.60551);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(10,23.08172);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(11,20.17676);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(12,17.16675);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(13,14.36664);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(14,11.14028);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(15,8.435387);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(16,6.315918);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(17,4.107578);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(18,1.205747);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetEntries(1848.115);
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
   2423.051,
   6223.514,
   8399.108,
   9956.688,
   12578.44,
   13381.87,
   15177.64,
   14780.98,
   14177.51,
   12908.28,
   11036.43,
   8997.005,
   7638.339,
   4952.53,
   3661.026,
   1169.71,
   525.0266,
   57.42414,
   2.015766};
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
   144.78,
   326.1235,
   381.7303,
   410.9901,
   463.2185,
   473.4098,
   510.5493,
   501.6635,
   491.9642,
   470.3052,
   433.4182,
   396.1294,
   365.4112,
   295.149,
   256.2808,
   141.1064,
   96.69044,
   32.52315,
   1.44635};
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
   144.78,
   326.1235,
   381.7303,
   410.9901,
   463.2185,
   473.4098,
   510.5493,
   501.6635,
   491.9642,
   470.3052,
   433.4182,
   396.1294,
   365.4112,
   295.149,
   256.2808,
   141.1064,
   96.69044,
   32.52315,
   1.44635};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3060,BkgSum-SR-Inclusive_sum_errors_fy3060,BkgSum-SR-Inclusive_sum_errors_felx3060,BkgSum-SR-Inclusive_sum_errors_fehx3060,BkgSum-SR-Inclusive_sum_errors_fely3060,BkgSum-SR-Inclusive_sum_errors_fehy3060);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1222;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMinimum(0.5124737);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMaximum(17256.95);
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
   Data__103->SetBinContent(1,2400);
   Data__103->SetBinContent(2,5940);
   Data__103->SetBinContent(3,8060);
   Data__103->SetBinContent(4,10100);
   Data__103->SetBinContent(5,12500);
   Data__103->SetBinContent(6,1080);
   Data__103->SetBinError(1,154.9193);
   Data__103->SetBinError(2,344.6738);
   Data__103->SetBinError(3,401.4972);
   Data__103->SetBinError(4,449.4441);
   Data__103->SetBinError(5,500);
   Data__103->SetBinError(6,146.9694);
   Data__103->SetEntries(2065.852);
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

   ci = 1222;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1222;
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
