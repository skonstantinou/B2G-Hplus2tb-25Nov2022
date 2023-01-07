void MVAOutputM220()
{
//=========Macro generated from canvas: MVAOutputM220/MVAOutputM220
//=========  (Tue Dec 27 11:52:00 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM220 = new TCanvas("MVAOutputM220", "MVAOutputM220",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM220->SetHighLightColor(2);
   MVAOutputM220->Range(0,0,1,1);
   MVAOutputM220->SetFillColor(0);
   MVAOutputM220->SetBorderMode(0);
   MVAOutputM220->SetBorderSize(2);
   MVAOutputM220->SetTickx(1);
   MVAOutputM220->SetTicky(1);
   MVAOutputM220->SetLeftMargin(0.16);
   MVAOutputM220->SetRightMargin(0.05);
   MVAOutputM220->SetTopMargin(0.06);
   MVAOutputM220->SetBottomMargin(0.13);
   MVAOutputM220->SetFrameFillStyle(0);
   MVAOutputM220->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM220_2
   TPad *MVAOutputM220_2 = new TPad("MVAOutputM220_2", "MVAOutputM220_2",0,0,1,0.304);
   MVAOutputM220_2->Draw();
   MVAOutputM220_2->cd();
   MVAOutputM220_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM220_2->SetFillColor(0);
   MVAOutputM220_2->SetFillStyle(4000);
   MVAOutputM220_2->SetBorderMode(0);
   MVAOutputM220_2->SetBorderSize(2);
   MVAOutputM220_2->SetTickx(1);
   MVAOutputM220_2->SetTicky(1);
   MVAOutputM220_2->SetLeftMargin(0.16);
   MVAOutputM220_2->SetRightMargin(0.05);
   MVAOutputM220_2->SetTopMargin(0);
   MVAOutputM220_2->SetBottomMargin(0.3421053);
   MVAOutputM220_2->SetFrameFillStyle(0);
   MVAOutputM220_2->SetFrameBorderMode(0);
   MVAOutputM220_2->SetFrameFillStyle(0);
   MVAOutputM220_2->SetFrameBorderMode(0);
   
   TH1F *hframe__36 = new TH1F("hframe__36","",1000,0,1.01);
   hframe__36->SetMinimum(0.3);
   hframe__36->SetMaximum(1.7);
   hframe__36->SetDirectory(0);
   hframe__36->SetStats(0);
   hframe__36->SetLineStyle(0);
   hframe__36->SetMarkerStyle(20);
   hframe__36->GetXaxis()->SetTitle("DNN Output");
   hframe__36->GetXaxis()->SetLabelFont(43);
   hframe__36->GetXaxis()->SetLabelOffset(0.007);
   hframe__36->GetXaxis()->SetLabelSize(27);
   hframe__36->GetXaxis()->SetTitleSize(33);
   hframe__36->GetXaxis()->SetTitleOffset(2.960526);
   hframe__36->GetXaxis()->SetTitleFont(43);
   hframe__36->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__36->GetYaxis()->SetNdivisions(505);
   hframe__36->GetYaxis()->SetLabelFont(43);
   hframe__36->GetYaxis()->SetLabelOffset(0.007);
   hframe__36->GetYaxis()->SetLabelSize(21);
   hframe__36->GetYaxis()->SetTitleSize(33);
   hframe__36->GetYaxis()->SetTitleOffset(1.5625);
   hframe__36->GetYaxis()->SetTitleFont(43);
   hframe__36->GetZaxis()->SetLabelFont(43);
   hframe__36->GetZaxis()->SetLabelOffset(0.007);
   hframe__36->GetZaxis()->SetLabelSize(27);
   hframe__36->GetZaxis()->SetTitleSize(33);
   hframe__36->GetZaxis()->SetTitleOffset(1);
   hframe__36->GetZaxis()->SetTitleFont(43);
   hframe__36->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3021[17] = {
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
   Double_t BackgroundStatSystError_fy3021[17] = {
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
   Double_t BackgroundStatSystError_felx3021[17] = {
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
   Double_t BackgroundStatSystError_fely3021[17] = {
   0.1190168,
   0.05455121,
   0.0506354,
   0.03941101,
   0.03171412,
   0.02537238,
   0.02064966,
   0.01775517,
   0.01781061,
   0.01881618,
   0.02281462,
   0.0291891,
   0.04011954,
   0.06863027,
   0.1396554,
   0.3588177,
   0.8845219};
   Double_t BackgroundStatSystError_fehx3021[17] = {
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
   Double_t BackgroundStatSystError_fehy3021[17] = {
   0.1190168,
   0.05455121,
   0.0506354,
   0.03941101,
   0.03171412,
   0.02537238,
   0.02064966,
   0.01775517,
   0.01781061,
   0.01881618,
   0.02281462,
   0.0291891,
   0.04011954,
   0.06863027,
   0.1396554,
   0.3588177,
   0.8845219};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,BackgroundStatSystError_fx3021,BackgroundStatSystError_fy3021,BackgroundStatSystError_felx3021,BackgroundStatSystError_fehx3021,BackgroundStatSystError_fely3021,BackgroundStatSystError_fehy3021);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1216;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError301330173021 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError301330173021","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMinimum(0.1039303);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMaximum(2.061426);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError301330173021);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3022[18] = {
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
   Double_t BackgroundStatError_fy3022[18] = {
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
   Double_t BackgroundStatError_felx3022[18] = {
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
   Double_t BackgroundStatError_fely3022[18] = {
   0.1190168,
   0.05455121,
   0.0506354,
   0.03941101,
   0.03171412,
   0.02537238,
   0.02064966,
   0.01775517,
   0.01781061,
   0.01881618,
   0.02281462,
   0.0291891,
   0.04011954,
   0.06863027,
   0.1396554,
   0.3588177,
   0.8845219,
   0};
   Double_t BackgroundStatError_fehx3022[18] = {
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
   Double_t BackgroundStatError_fehy3022[18] = {
   0.1190168,
   0.05455121,
   0.0506354,
   0.03941101,
   0.03171412,
   0.02537238,
   0.02064966,
   0.01775517,
   0.01781061,
   0.01881618,
   0.02281462,
   0.0291891,
   0.04011954,
   0.06863027,
   0.1396554,
   0.3588177,
   0.8845219,
   0};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3022,BackgroundStatError_fy3022,BackgroundStatError_felx3022,BackgroundStatError_fehx3022,BackgroundStatError_fely3022,BackgroundStatError_fehy3022);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1215;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError301430183022 = new TH1F("Graph_Graph_Graph_BackgroundStatError301430183022","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMinimum(0.1039303);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMaximum(2.061426);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError301430183022->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError301430183022);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx6[2] = {
   0,
   1.01};
   Double_t Graph0_fy6[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx6,Graph0_fy6);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0456 = new TH1F("Graph_Graph_Graph_Graph0456","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0456->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0456->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0456->SetDirectory(0);
   Graph_Graph_Graph_Graph0456->SetStats(0);
   Graph_Graph_Graph_Graph0456->SetLineStyle(0);
   Graph_Graph_Graph_Graph0456->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0456->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0456->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0456->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0456);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3023[5] = {
   0.05,
   0.15,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3023[5] = {
   0.7875917,
   1.013506,
   1.021196,
   0.9792847,
   0.09236692};
   Double_t Graph1_felx3023[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3023[5] = {
   0.1261156,
   0.06179452,
   0.05489982,
   0.04278025,
   0.01059521};
   Double_t Graph1_fehx3023[5] = {
   0.05,
   0.05,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3023[5] = {
   0.1261156,
   0.06179452,
   0.05489982,
   0.04278025,
   0.01059521};
   grae = new TGraphAsymmErrors(5,Graph1_fx3023,Graph1_fy3023,Graph1_felx3023,Graph1_fehx3023,Graph1_fely3023,Graph1_fehy3023);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1301530193023 = new TH1F("Graph_Graph_Graph_Graph1301530193023","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1301530193023->SetMinimum(0.07359454);
   Graph_Graph_Graph_Graph1301530193023->SetMaximum(1.175528);
   Graph_Graph_Graph_Graph1301530193023->SetDirectory(0);
   Graph_Graph_Graph_Graph1301530193023->SetStats(0);
   Graph_Graph_Graph_Graph1301530193023->SetLineStyle(0);
   Graph_Graph_Graph_Graph1301530193023->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1301530193023->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1301530193023->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1301530193023->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1301530193023);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__37 = new TH1F("hframe_copy__37","",1000,0,1.01);
   hframe_copy__37->SetMinimum(0.3);
   hframe_copy__37->SetMaximum(1.7);
   hframe_copy__37->SetDirectory(0);
   hframe_copy__37->SetStats(0);
   hframe_copy__37->SetLineStyle(0);
   hframe_copy__37->SetMarkerStyle(20);
   hframe_copy__37->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__37->GetXaxis()->SetLabelFont(43);
   hframe_copy__37->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__37->GetXaxis()->SetLabelSize(27);
   hframe_copy__37->GetXaxis()->SetTitleSize(33);
   hframe_copy__37->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__37->GetXaxis()->SetTitleFont(43);
   hframe_copy__37->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__37->GetYaxis()->SetNdivisions(505);
   hframe_copy__37->GetYaxis()->SetLabelFont(43);
   hframe_copy__37->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__37->GetYaxis()->SetLabelSize(21);
   hframe_copy__37->GetYaxis()->SetTitleSize(33);
   hframe_copy__37->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__37->GetYaxis()->SetTitleFont(43);
   hframe_copy__37->GetZaxis()->SetLabelFont(43);
   hframe_copy__37->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__37->GetZaxis()->SetLabelSize(27);
   hframe_copy__37->GetZaxis()->SetTitleSize(33);
   hframe_copy__37->GetZaxis()->SetTitleOffset(1);
   hframe_copy__37->GetZaxis()->SetTitleFont(43);
   hframe_copy__37->Draw("sameaxis");
   MVAOutputM220_2->Modified();
   MVAOutputM220->cd();
  
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
   MVAOutputM220->cd();
  
// ------------>Primitives in pad: MVAOutputM220_1
   TPad *MVAOutputM220_1 = new TPad("MVAOutputM220_1", "MVAOutputM220_1",0,0.2897959,1,1);
   MVAOutputM220_1->Draw();
   MVAOutputM220_1->cd();
   MVAOutputM220_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM220_1->SetFillColor(0);
   MVAOutputM220_1->SetFillStyle(4000);
   MVAOutputM220_1->SetBorderMode(0);
   MVAOutputM220_1->SetBorderSize(2);
   MVAOutputM220_1->SetLogy();
   MVAOutputM220_1->SetTickx(1);
   MVAOutputM220_1->SetTicky(1);
   MVAOutputM220_1->SetLeftMargin(0.16);
   MVAOutputM220_1->SetRightMargin(0.05);
   MVAOutputM220_1->SetTopMargin(0.06);
   MVAOutputM220_1->SetBottomMargin(0.02);
   MVAOutputM220_1->SetFrameFillStyle(0);
   MVAOutputM220_1->SetFrameBorderMode(0);
   MVAOutputM220_1->SetFrameFillStyle(0);
   MVAOutputM220_1->SetFrameBorderMode(0);
   
   TH1F *hframe__38 = new TH1F("hframe__38","",1000,0,1.01);
   hframe__38->SetMinimum(0.01);
   hframe__38->SetMaximum(500000);
   hframe__38->SetDirectory(0);
   hframe__38->SetStats(0);
   hframe__38->SetLineStyle(0);
   hframe__38->SetMarkerStyle(20);
   hframe__38->GetXaxis()->SetLabelFont(43);
   hframe__38->GetXaxis()->SetLabelOffset(0.007);
   hframe__38->GetXaxis()->SetLabelSize(0);
   hframe__38->GetXaxis()->SetTitleSize(0);
   hframe__38->GetXaxis()->SetTitleOffset(0.9);
   hframe__38->GetXaxis()->SetTitleFont(43);
   hframe__38->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__38->GetYaxis()->SetLabelFont(43);
   hframe__38->GetYaxis()->SetLabelOffset(0.007);
   hframe__38->GetYaxis()->SetLabelSize(27);
   hframe__38->GetYaxis()->SetTitleSize(33);
   hframe__38->GetYaxis()->SetTitleOffset(1.5625);
   hframe__38->GetYaxis()->SetTitleFont(43);
   hframe__38->GetZaxis()->SetLabelFont(43);
   hframe__38->GetZaxis()->SetLabelOffset(0.007);
   hframe__38->GetZaxis()->SetLabelSize(27);
   hframe__38->GetZaxis()->SetTitleSize(33);
   hframe__38->GetZaxis()->SetTitleOffset(1);
   hframe__38->GetZaxis()->SetTitleFont(43);
   hframe__38->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis31[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_4_stack_5_stack_6 = new TH1F("StackedMCstackHist_stack_4_stack_5_stack_6","StackedMCstackHist",18, xAxis31);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMinimum(19.67853);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMaximum(78714.11);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetDirectory(0);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetStats(0);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetLineStyle(0);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMarkerStyle(20);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_4_stack_5_stack_6->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_4_stack_5_stack_6);
   
   Double_t xAxis32[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM220Inclusive",18, xAxis32);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,24.42595);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,120.5077);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,222.6608);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,445.8692);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,569.0327);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1072.966);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1444.774);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1865.981);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,2086.806);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1493.553);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1105.523);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,684.644);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,321.5139);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,148.7959);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,20.13646);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,2.145185);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,-0.03384488);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,7.277475);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,13.96475);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,25.31426);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,38.26509);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,42.75955);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,57.65442);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,67.77134);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,73.35528);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,71.95798);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,67.37173);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,52.86966);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,42.29753);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,29.0973);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,21.81253);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,6.6982);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.4115255);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.07085299);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4079.9);
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
   Double_t xAxis33[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM220Inclusive",18, xAxis33);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,250.3683);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1187.911);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2902.433);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4477.385);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,7150.905);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,11787.49);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,17652.29);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,23956.55);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,25548.24);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,22326.99);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,16168.88);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,10012.19);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,4948.277);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1708.552);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,453.4873);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,62.65685);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,3.232394);
   TT_stack_2_stack_2_stack_2->SetBinError(1,12.32239);
   TT_stack_2_stack_2_stack_2->SetBinError(2,26.88349);
   TT_stack_2_stack_2_stack_2->SetBinError(3,59.17725);
   TT_stack_2_stack_2_stack_2->SetBinError(4,73.75744);
   TT_stack_2_stack_2_stack_2->SetBinError(5,93.24673);
   TT_stack_2_stack_2_stack_2->SetBinError(6,120.3109);
   TT_stack_2_stack_2_stack_2->SetBinError(7,147.1344);
   TT_stack_2_stack_2_stack_2->SetBinError(8,171.746);
   TT_stack_2_stack_2_stack_2->SetBinError(9,177.9339);
   TT_stack_2_stack_2_stack_2->SetBinError(10,166.2133);
   TT_stack_2_stack_2_stack_2->SetBinError(11,141.5241);
   TT_stack_2_stack_2_stack_2->SetBinError(12,111.7244);
   TT_stack_2_stack_2_stack_2->SetBinError(13,78.58504);
   TT_stack_2_stack_2_stack_2->SetBinError(14,46.14684);
   TT_stack_2_stack_2_stack_2->SetBinError(15,24.40917);
   TT_stack_2_stack_2_stack_2->SetBinError(16,8.843405);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.880317);
   TT_stack_2_stack_2_stack_2->SetEntries(122650.7);
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
   Double_t xAxis34[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM220Inclusive",18, xAxis34);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,220.3862);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1345.735);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,3651.277);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5778.434);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8736.17);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,12144.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,19527.69);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,22794.41);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,21561.27);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,18418.18);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,12469.35);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,8064.241);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,3702.481);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1448.862);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,287.0774);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,9.794671);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,-0.8615688);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,57.17086);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,141.5826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,337.0334);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,413.4982);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,511.7097);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,620.2564);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,780.964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,842.7574);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,854.9368);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,774.2714);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,661.5611);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,534.4297);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,350.0734);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,221.0905);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,103.1767);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,25.26018);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.8557646);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4354.822);
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
   Double_t xAxis35[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__39 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__39","h_SR_MVAOutputM220Inclusive",18, xAxis35);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(1,15.37386);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(2,160.0051);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(3,617.382);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(4,907.831);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(5,1210.377);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(6,1484.063);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(7,1623.113);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(8,1732.986);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(9,1465.627);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(10,1115.007);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(11,748.4254);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(12,411.8533);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(13,225.3688);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(14,79.66444);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(15,30.9398);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(16,2.005479);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(17,0.3497421);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(1,3.579296);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(2,13.2387);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(3,33.16673);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(4,41.84863);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(5,47.30683);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(6,52.77566);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(7,56.0514);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(8,56.55251);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(9,53.0669);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(10,45.60689);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(11,37.10749);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(12,27.64796);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(13,19.57752);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(14,12.10072);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(15,6.609762);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(16,2.785345);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(17,0.3497421);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetEntries(6355.559);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3024[18] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3024[18] = {
   495.1805,
   2654.154,
   6776.371,
   10701.69,
   16456.11,
   25005.23,
   38624.75,
   48616.95,
   49196.31,
   42238.73,
   29743.75,
   18761.08,
   8972.271,
   3306.209,
   760.7012,
   74.5967,
   2.33698,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3024[18] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3024[18] = {
   58.93479,
   144.7873,
   343.1243,
   421.7643,
   521.8909,
   634.4421,
   797.5878,
   863.202,
   876.2165,
   794.7717,
   678.5922,
   547.619,
   359.9634,
   226.906,
   106.236,
   26.76662,
   2.06711,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3024[18] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3024[18] = {
   58.93479,
   144.7873,
   343.1243,
   421.7643,
   521.8909,
   634.4421,
   797.5878,
   863.202,
   876.2165,
   794.7717,
   678.5922,
   547.619,
   359.9634,
   226.906,
   106.236,
   26.76662,
   2.06711,
   0};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3024,BkgSum-SR-Inclusive_sum_errors_fy3024,BkgSum-SR-Inclusive_sum_errors_felx3024,BkgSum-SR-Inclusive_sum_errors_fehx3024,BkgSum-SR-Inclusive_sum_errors_fely3024,BkgSum-SR-Inclusive_sum_errors_fehy3024);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1214;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMinimum(55.07978);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMaximum(55079.78);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors301630203024);
   
   grae->Draw("e2 ");
   Double_t xAxis36[19] = {0, 0.1, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__40 = new TH1F("Data__40","h_SR_MVAOutputM220Inclusive",18, xAxis36);
   Data__40->SetBinContent(1,390);
   Data__40->SetBinContent(2,2690);
   Data__40->SetBinContent(3,6920);
   Data__40->SetBinContent(4,10480);
   Data__40->SetBinContent(5,1520);
   Data__40->SetBinError(1,62.44998);
   Data__40->SetBinError(2,164.0122);
   Data__40->SetBinError(3,372.0215);
   Data__40->SetBinError(4,457.8209);
   Data__40->SetBinError(5,174.356);
   Data__40->SetEntries(1182.796);
   Data__40->SetDirectory(0);
   Data__40->SetFillStyle(3001);
   Data__40->SetLineWidth(2);
   Data__40->SetMarkerStyle(20);
   Data__40->SetMarkerSize(1.2);
   Data__40->GetXaxis()->SetRange(1,200);
   Data__40->GetXaxis()->SetLabelFont(42);
   Data__40->GetXaxis()->SetTitleOffset(1);
   Data__40->GetXaxis()->SetTitleFont(42);
   Data__40->GetYaxis()->SetLabelFont(42);
   Data__40->GetYaxis()->SetTitleFont(42);
   Data__40->GetZaxis()->SetLabelFont(42);
   Data__40->GetZaxis()->SetTitleOffset(1);
   Data__40->GetZaxis()->SetTitleFont(42);
   Data__40->Draw("EP same");
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

   ci = 1214;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1214;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__41 = new TH1F("hframe_copy__41","",1000,0,1.01);
   hframe_copy__41->SetMinimum(0.01);
   hframe_copy__41->SetMaximum(500000);
   hframe_copy__41->SetDirectory(0);
   hframe_copy__41->SetStats(0);
   hframe_copy__41->SetLineStyle(0);
   hframe_copy__41->SetMarkerStyle(20);
   hframe_copy__41->GetXaxis()->SetLabelFont(43);
   hframe_copy__41->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__41->GetXaxis()->SetLabelSize(0);
   hframe_copy__41->GetXaxis()->SetTitleSize(0);
   hframe_copy__41->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__41->GetXaxis()->SetTitleFont(43);
   hframe_copy__41->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__41->GetYaxis()->SetLabelFont(43);
   hframe_copy__41->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__41->GetYaxis()->SetLabelSize(27);
   hframe_copy__41->GetYaxis()->SetTitleSize(33);
   hframe_copy__41->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__41->GetYaxis()->SetTitleFont(43);
   hframe_copy__41->GetZaxis()->SetLabelFont(43);
   hframe_copy__41->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__41->GetZaxis()->SetLabelSize(27);
   hframe_copy__41->GetZaxis()->SetTitleSize(33);
   hframe_copy__41->GetZaxis()->SetTitleOffset(1);
   hframe_copy__41->GetZaxis()->SetTitleFont(43);
   hframe_copy__41->Draw("sameaxis");
   
   TH1F *hframe_copy__42 = new TH1F("hframe_copy__42","",1000,0,1.01);
   hframe_copy__42->SetMinimum(0.01);
   hframe_copy__42->SetMaximum(500000);
   hframe_copy__42->SetDirectory(0);
   hframe_copy__42->SetStats(0);
   hframe_copy__42->SetLineStyle(0);
   hframe_copy__42->SetMarkerStyle(20);
   hframe_copy__42->GetXaxis()->SetLabelFont(43);
   hframe_copy__42->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__42->GetXaxis()->SetLabelSize(0);
   hframe_copy__42->GetXaxis()->SetTitleSize(0);
   hframe_copy__42->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__42->GetXaxis()->SetTitleFont(43);
   hframe_copy__42->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__42->GetYaxis()->SetLabelFont(43);
   hframe_copy__42->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__42->GetYaxis()->SetLabelSize(27);
   hframe_copy__42->GetYaxis()->SetTitleSize(33);
   hframe_copy__42->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__42->GetYaxis()->SetTitleFont(43);
   hframe_copy__42->GetZaxis()->SetLabelFont(43);
   hframe_copy__42->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__42->GetZaxis()->SetLabelSize(27);
   hframe_copy__42->GetZaxis()->SetTitleSize(33);
   hframe_copy__42->GetZaxis()->SetTitleOffset(1);
   hframe_copy__42->GetZaxis()->SetTitleFont(43);
   hframe_copy__42->Draw("sameaxis");
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
   MVAOutputM220_1->Modified();
   MVAOutputM220->cd();
   MVAOutputM220->Modified();
   MVAOutputM220->cd();
   MVAOutputM220->SetSelected(MVAOutputM220);
}
