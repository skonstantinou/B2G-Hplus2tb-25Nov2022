void MVAOutputM220()
{
//=========Macro generated from canvas: MVAOutputM220/MVAOutputM220
//=========  (Fri Nov 18 13:27:21 2022) by ROOT version 6.20/02
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
   0.04462688,
   0.02402556,
   0.02477373,
   0.02124375,
   0.01882638,
   0.01728801,
   0.01689633,
   0.01729483,
   0.01938975,
   0.02356004,
   0.03024897,
   0.0384302,
   0.05684037,
   0.08748429,
   0.1659505,
   0.5042506,
   1};
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
   0.04462688,
   0.02402556,
   0.02477373,
   0.02124375,
   0.01882638,
   0.01728801,
   0.01689633,
   0.01729483,
   0.01938975,
   0.02356004,
   0.03024897,
   0.0384302,
   0.05684037,
   0.08748429,
   0.1659505,
   0.5042506,
   1};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,BackgroundStatSystError_fx3021,BackgroundStatSystError_fy3021,BackgroundStatSystError_felx3021,BackgroundStatSystError_fehx3021,BackgroundStatSystError_fely3021,BackgroundStatSystError_fehy3021);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1215;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError301330173021 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError301330173021","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMinimum(4.205503e-08);
   Graph_Graph_Graph_BackgroundStatSystError301330173021->SetMaximum(2.2);
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
   0.04462688,
   0.02402556,
   0.02477373,
   0.02124375,
   0.01882638,
   0.01728801,
   0.01689633,
   0.01729483,
   0.01938975,
   0.02356004,
   0.03024897,
   0.0384302,
   0.05684037,
   0.08748429,
   0.1659505,
   0.5042506,
   1,
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
   0.04462688,
   0.02402556,
   0.02477373,
   0.02124375,
   0.01882638,
   0.01728801,
   0.01689633,
   0.01729483,
   0.01938975,
   0.02356004,
   0.03024897,
   0.0384302,
   0.05684037,
   0.08748429,
   0.1659505,
   0.5042506,
   1,
   0};
   grae = new TGraphAsymmErrors(18,BackgroundStatError_fx3022,BackgroundStatError_fy3022,BackgroundStatError_felx3022,BackgroundStatError_fehx3022,BackgroundStatError_fely3022,BackgroundStatError_fehy3022);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1214;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError301430183022 = new TH1F("Graph_Graph_Graph_BackgroundStatError301430183022","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMinimum(4.205503e-08);
   Graph_Graph_Graph_BackgroundStatError301430183022->SetMaximum(2.2);
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
   
   Double_t Graph1_fx3023[16] = {
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
   0.875};
   Double_t Graph1_fy3023[16] = {
   0.963643,
   1.048508,
   0.9781203,
   0.96506,
   0.9526657,
   1.018767,
   0.998431,
   0.9660002,
   0.9665411,
   0.9817053,
   0.9748653,
   0.849526,
   0.9880471,
   0.9646747,
   0.7869915,
   0.4356103};
   Double_t Graph1_felx3023[16] = {
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
   0.025};
   Double_t Graph1_fely3023[16] = {
   0.05328958,
   0.02989642,
   0.02990201,
   0.02536998,
   0.02253607,
   0.02146318,
   0.02098823,
   0.02122181,
   0.02384523,
   0.02872498,
   0.03658604,
   0.04285292,
   0.06818173,
   0.1028347,
   0.1759766,
   0.4356103};
   Double_t Graph1_fehx3023[16] = {
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
   0.025};
   Double_t Graph1_fehy3023[16] = {
   0.05328958,
   0.02989642,
   0.02990201,
   0.02536998,
   0.02253607,
   0.02146318,
   0.02098823,
   0.02122181,
   0.02384523,
   0.02872498,
   0.03658604,
   0.04285292,
   0.06818173,
   0.1028347,
   0.1759766,
   0.4356103};
   grae = new TGraphAsymmErrors(16,Graph1_fx3023,Graph1_fy3023,Graph1_felx3023,Graph1_fehx3023,Graph1_fely3023,Graph1_fehy3023);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1301530193023 = new TH1F("Graph_Graph_Graph_Graph1301530193023","Graph",100,0,0.99);
   Graph_Graph_Graph_Graph1301530193023->SetMinimum(3.497203e-16);
   Graph_Graph_Graph_Graph1301530193023->SetMaximum(1.186245);
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
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMinimum(18.13245);
   StackedMCstackHist_stack_4_stack_5_stack_6->SetMaximum(72529.81);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,89.23951);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,351.9324);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,606.8198);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,781.3318);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1018.916);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1084.746);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1240.611);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,979.519);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,787.561);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,649.3193);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,367.5847);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,215.3911);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,102.987);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,29.50805);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,16.409);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,3.343522);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,13.05709);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,24.87998);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,48.73572);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,55.66533);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,63.35282);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,76.83488);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,95.24974);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,69.44351);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,53.82446);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,69.98137);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,35.25529);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,28.31844);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,20.69218);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,9.73045);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,7.118885);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,2.417194);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1711.59);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1825.123);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,6485.554);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,12382.52);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,16962.96);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,21985.19);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,26741.41);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,29348.28);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,27381.15);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,21975.45);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,15243.71);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,9456.892);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,5729.382);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2830.996);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1186.573);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,258.0978);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,9.18056);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.9735957);
   TT_stack_2_stack_2_stack_2->SetBinError(1,32.74255);
   TT_stack_2_stack_2_stack_2->SetBinError(2,61.85821);
   TT_stack_2_stack_2_stack_2->SetBinError(3,120.6383);
   TT_stack_2_stack_2_stack_2->SetBinError(4,141.1334);
   TT_stack_2_stack_2_stack_2->SetBinError(5,160.9873);
   TT_stack_2_stack_2_stack_2->SetBinError(6,176.9118);
   TT_stack_2_stack_2_stack_2->SetBinError(7,185.74);
   TT_stack_2_stack_2_stack_2->SetBinError(8,179.4181);
   TT_stack_2_stack_2_stack_2->SetBinError(9,161.0591);
   TT_stack_2_stack_2_stack_2->SetBinError(10,134.1747);
   TT_stack_2_stack_2_stack_2->SetBinError(11,105.8139);
   TT_stack_2_stack_2_stack_2->SetBinError(12,82.24042);
   TT_stack_2_stack_2_stack_2->SetBinError(13,57.95193);
   TT_stack_2_stack_2_stack_2->SetBinError(14,37.64721);
   TT_stack_2_stack_2_stack_2->SetBinError(15,17.49489);
   TT_stack_2_stack_2_stack_2->SetBinError(16,3.125346);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.9735956);
   TT_stack_2_stack_2_stack_2->SetEntries(173367);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1479.011);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,4893.469);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,8889.354);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,12243.48);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,14511.68);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,16403.79);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,14742.23);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,14537.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,11234.5);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,7902.297);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,4741.639);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3307.446);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1316.826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,608.368);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,233.7579);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,33.38852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,147.2759);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,273.8429);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,526.1689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,618.7235);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,684.7701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,739.9223);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,736.9373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,716.5448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,636.9551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,539.8085);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,426.26);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,344.7619);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,233.6503);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,154.8017);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,82.20482);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,22.81182);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3503.288);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(1,10.92657);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(2,24.50626);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(3,67.49837);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(4,116.375);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(5,122.0886);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(6,78.90859);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(7,71.65614);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(8,73.87312);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(9,29.29852);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(10,18.92785);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(11,0.1102327);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(12,1.301586);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(13,3.956031);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(14,0.3969032);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinContent(15,-0.8932719);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(1,3.170835);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(2,6.780148);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(3,13.66554);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(4,14.961);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(5,16.06151);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(6,15.86368);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(7,14.42565);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(8,12.4915);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(9,9.983865);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(10,7.474982);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(11,5.470254);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(12,3.512609);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(13,2.015341);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(14,1.237928);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetBinError(15,0.8932719);
   ChargedHiggs_HplusTBHplusToTB_M_800__39->SetEntries(248.013);
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
   3393.373,
   11730.96,
   21878.7,
   29987.77,
   37515.79,
   44229.95,
   45331.12,
   42898.54,
   33997.52,
   23795.33,
   14566.12,
   9252.219,
   4250.81,
   1824.449,
   508.2647,
   45.9126,
   0.9735957,
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
   151.4357,
   281.8428,
   542.017,
   637.0527,
   706.2865,
   764.6479,
   765.9297,
   741.923,
   659.2033,
   560.6188,
   440.61,
   355.5646,
   241.6176,
   159.6106,
   84.3468,
   23.15146,
   0.9735956,
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
   151.4357,
   281.8428,
   542.017,
   637.0527,
   706.2865,
   764.6479,
   765.9297,
   741.923,
   659.2033,
   560.6188,
   440.61,
   355.5646,
   241.6176,
   159.6106,
   84.3468,
   23.15146,
   0.9735956,
   0};
   grae = new TGraphAsymmErrors(18,BkgSum-SR-Inclusive_sum_errors_fx3024,BkgSum-SR-Inclusive_sum_errors_fy3024,BkgSum-SR-Inclusive_sum_errors_felx3024,BkgSum-SR-Inclusive_sum_errors_fehx3024,BkgSum-SR-Inclusive_sum_errors_fely3024,BkgSum-SR-Inclusive_sum_errors_fehy3024);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1213;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMinimum(50.70676);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors301630203024->SetMaximum(50706.76);
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
   Data__40->SetBinContent(1,3270);
   Data__40->SetBinContent(2,12300);
   Data__40->SetBinContent(3,21400);
   Data__40->SetBinContent(4,28940);
   Data__40->SetBinContent(5,35740);
   Data__40->SetBinContent(6,45060);
   Data__40->SetBinContent(7,45260);
   Data__40->SetBinContent(8,41440);
   Data__40->SetBinContent(9,32860);
   Data__40->SetBinContent(10,23360);
   Data__40->SetBinContent(11,14200);
   Data__40->SetBinContent(12,7860);
   Data__40->SetBinContent(13,4200);
   Data__40->SetBinContent(14,1760);
   Data__40->SetBinContent(15,400);
   Data__40->SetBinContent(16,20);
   Data__40->SetBinError(1,180.8314);
   Data__40->SetBinError(2,350.7136);
   Data__40->SetBinError(3,654.2171);
   Data__40->SetBinError(4,760.7891);
   Data__40->SetBinError(5,845.4585);
   Data__40->SetBinError(6,949.3155);
   Data__40->SetBinError(7,951.42);
   Data__40->SetBinError(8,910.3845);
   Data__40->SetBinError(9,810.6787);
   Data__40->SetBinError(10,683.5203);
   Data__40->SetBinError(11,532.9165);
   Data__40->SetBinError(12,396.4846);
   Data__40->SetBinError(13,289.8275);
   Data__40->SetBinError(14,187.6166);
   Data__40->SetBinError(15,89.44272);
   Data__40->SetBinError(16,20);
   Data__40->SetEntries(16302.52);
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

   ci = 1213;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1213;
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
   MVAOutputM220_1->Modified();
   MVAOutputM220->cd();
   MVAOutputM220->Modified();
   MVAOutputM220->cd();
   MVAOutputM220->SetSelected(MVAOutputM220);
}
