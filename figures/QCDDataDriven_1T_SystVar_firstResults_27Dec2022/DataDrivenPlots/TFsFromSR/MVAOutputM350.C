void MVAOutputM350()
{
//=========Macro generated from canvas: MVAOutputM350/MVAOutputM350
//=========  (Tue Dec 27 11:55:03 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3057[18] = {
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
   0.925};
   Double_t BackgroundStatSystError_fy3057[18] = {
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
   Double_t BackgroundStatSystError_felx3057[18] = {
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
   0.025};
   Double_t BackgroundStatSystError_fely3057[18] = {
   0.1523987,
   0.09045847,
   0.06009324,
   0.04491831,
   0.03876718,
   0.03424631,
   0.03261688,
   0.03097543,
   0.03051419,
   0.03155657,
   0.03392061,
   0.03842854,
   0.05062773,
   0.06839188,
   0.1222158,
   0.3433551,
   4.52257,
   -0.9165209};
   Double_t BackgroundStatSystError_fehx3057[18] = {
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
   0.025};
   Double_t BackgroundStatSystError_fehy3057[18] = {
   0.1523987,
   0.09045847,
   0.06009324,
   0.04491831,
   0.03876718,
   0.03424631,
   0.03261688,
   0.03097543,
   0.03051419,
   0.03155657,
   0.03392061,
   0.03842854,
   0.05062773,
   0.06839188,
   0.1222158,
   0.3433551,
   4.52257,
   -0.9165209};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,BackgroundStatSystError_fx3057,BackgroundStatSystError_fy3057,BackgroundStatSystError_felx3057,BackgroundStatSystError_fehx3057,BackgroundStatSystError_fely3057,BackgroundStatSystError_fehy3057);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError304930533057 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError304930533057","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMinimum(-4.427084);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMaximum(6.427084);
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
   0.1523987,
   0.09045847,
   0.06009324,
   0.04491831,
   0.03876718,
   0.03424631,
   0.03261688,
   0.03097543,
   0.03051419,
   0.03155657,
   0.03392061,
   0.03842854,
   0.05062773,
   0.06839188,
   0.1222158,
   0.3433551,
   4.52257,
   -0.9165209,
   0};
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
   0.1523987,
   0.09045847,
   0.06009324,
   0.04491831,
   0.03876718,
   0.03424631,
   0.03261688,
   0.03097543,
   0.03051419,
   0.03155657,
   0.03392061,
   0.03842854,
   0.05062773,
   0.06839188,
   0.1222158,
   0.3433551,
   4.52257,
   -0.9165209,
   0};
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
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMinimum(-4.427084);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMaximum(6.427084);
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
   0.7539445,
   0.9498342,
   1.062666,
   1.203714,
   1.005139,
   0.1136312};
   Double_t Graph1_felx3059[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3059[6] = {
   0.140004,
   0.09498342,
   0.06680924,
   0.05288815,
   0.04191717,
   0.01254846};
   Double_t Graph1_fehx3059[6] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3059[6] = {
   0.140004,
   0.09498342,
   0.06680924,
   0.05288815,
   0.04191717,
   0.01254846};
   grae = new TGraphAsymmErrors(6,Graph1_fx3059,Graph1_fy3059,Graph1_felx3059,Graph1_fehx3059,Graph1_fely3059,Graph1_fehy3059);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1305130553059 = new TH1F("Graph_Graph_Graph_Graph1305130553059","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1305130553059->SetMinimum(0.09097444);
   Graph_Graph_Graph_Graph1305130553059->SetMaximum(1.372154);
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
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMinimum(7.466112);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMaximum(29864.45);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1.83067);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,40.72628);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,128.794);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,149.4602);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,268.2197);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,374.3772);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,460.3788);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,504.5174);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,476.5924);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,440.3044);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,489.1037);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,415.6254);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,219.2267);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,129.2486);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,36.30999);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,6.375672);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,-0.05009007);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,-0.002492908);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,2.194236);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,10.79269);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,17.44499);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,20.98973);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,32.24231);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,35.91983);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,39.85095);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,38.18134);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,34.82168);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,36.04677);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,36.7319);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,32.3155);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,21.31074);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,20.4187);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,8.955474);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.706365);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.1718869);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.002492909);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1416.507);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,71.45031);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,517.8949);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1367.964);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2466.373);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3557.756);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4637.849);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5392.088);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,6115.794);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,6275.237);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,6034.056);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,5288.742);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,4195.823);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2544.285);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1278.591);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,355.6645);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,81.78507);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,4.008027);
   TT_stack_2_stack_2_stack_2->SetBinError(1,6.650418);
   TT_stack_2_stack_2_stack_2->SetBinError(2,25.73993);
   TT_stack_2_stack_2_stack_2->SetBinError(3,41.54751);
   TT_stack_2_stack_2_stack_2->SetBinError(4,55.95392);
   TT_stack_2_stack_2_stack_2->SetBinError(5,66.85523);
   TT_stack_2_stack_2_stack_2->SetBinError(6,76.39525);
   TT_stack_2_stack_2_stack_2->SetBinError(7,82.63504);
   TT_stack_2_stack_2_stack_2->SetBinError(8,88.17982);
   TT_stack_2_stack_2_stack_2->SetBinError(9,89.04282);
   TT_stack_2_stack_2_stack_2->SetBinError(10,87.33529);
   TT_stack_2_stack_2_stack_2->SetBinError(11,81.48702);
   TT_stack_2_stack_2_stack_2->SetBinError(12,72.30903);
   TT_stack_2_stack_2_stack_2->SetBinError(13,55.82852);
   TT_stack_2_stack_2_stack_2->SetBinError(14,39.85495);
   TT_stack_2_stack_2_stack_2->SetBinError(15,20.86158);
   TT_stack_2_stack_2_stack_2->SetBinError(16,9.999702);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.34525);
   TT_stack_2_stack_2_stack_2->SetEntries(39885.74);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,311.3627);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1547.009);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3264.851);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5990.864);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,7615.233);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,9420.433);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,10344.58);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,11224.03);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,11913.45);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,10665.46);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,9036.134);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,7005.272);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3917.73);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,2426.867);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,804.9081);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,59.39525);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,-3.294189);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,-0.04731186);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,58.19937);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,188.416);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,282.5701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,381.9513);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,437.2889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,487.0028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,520.2702);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,544.3195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,561.4737);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,532.558);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,494.4856);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,439.3315);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,332.9358);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,258.4114);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,144.5055);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,49.59368);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,1.865829);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.04557898);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3655.362);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(1,2.207088);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(2,9.270586);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(3,44.23424);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(4,127.4798);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(5,238.7903);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(6,349.9551);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(7,411.8964);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(8,537.1971);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(9,557.6818);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(10,499.8086);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(11,353.771);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(12,260.6763);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(13,99.90631);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(14,67.83455);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(15,17.70984);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(16,3.07051);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(17,0.7084752);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(18,-0.3863584);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(1,1.706132);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(2,5.907967);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(3,10.44215);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(4,16.22542);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(5,20.67382);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(6,25.44379);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(7,29.35603);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(8,32.11816);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(9,32.0846);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(10,30.41877);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(11,26.841);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(12,21.85088);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(13,16.53814);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(14,11.05172);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(15,6.300641);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(16,2.786666);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(17,0.7650001);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(18,0.3863584);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetEntries(1839.407);
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
   384.6437,
   2105.631,
   4761.609,
   8606.696,
   11441.21,
   14432.66,
   16197.04,
   17844.34,
   18665.28,
   17139.82,
   14813.98,
   11616.72,
   6681.242,
   3834.707,
   1196.883,
   147.556,
   0.6637473,
   -0.04980477,
   0};
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
   58.61919,
   190.4721,
   286.1405,
   386.5983,
   443.5434,
   494.2653,
   528.297,
   552.7361,
   569.5559,
   540.8741,
   502.4992,
   446.4136,
   338.2561,
   262.2628,
   146.2779,
   50.66411,
   3.001844,
   0.04564711,
   0};
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
   58.61919,
   190.4721,
   286.1405,
   386.5983,
   443.5434,
   494.2653,
   528.297,
   552.7361,
   569.5559,
   540.8741,
   502.4992,
   446.4136,
   338.2561,
   262.2628,
   146.2779,
   50.66411,
   3.001844,
   0.04564711,
   0};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMinimum(21.15832);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMaximum(21158.32);
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
   Data__103->SetBinContent(1,290);
   Data__103->SetBinContent(2,2000);
   Data__103->SetBinContent(3,5060);
   Data__103->SetBinContent(4,10360);
   Data__103->SetBinContent(5,11500);
   Data__103->SetBinContent(6,1640);
   Data__103->SetBinError(1,53.85165);
   Data__103->SetBinError(2,200);
   Data__103->SetBinError(3,318.1195);
   Data__103->SetBinError(4,455.1923);
   Data__103->SetBinError(5,479.5832);
   Data__103->SetBinError(6,181.1077);
   Data__103->SetEntries(1549.784);
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
