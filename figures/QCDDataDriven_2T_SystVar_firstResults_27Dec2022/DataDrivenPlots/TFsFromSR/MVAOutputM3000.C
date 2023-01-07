void MVAOutputM3000()
{
//=========Macro generated from canvas: MVAOutputM3000/MVAOutputM3000
//=========  (Tue Dec 27 11:52:21 2022) by ROOT version 6.20/02
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
   0.00889762,
   0.02267458,
   0.03114167,
   0.0380215,
   0.04429152,
   0.05168257,
   0.05711317,
   0.06117141,
   0.07161097,
   0.07109614,
   0.07621285,
   0.08290467,
   0.08318039,
   0.08500531,
   0.09001184,
   0.09659482,
   0.1063845,
   0.09933294,
   0.0918815,
   0.07800626};
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
   0.00889762,
   0.02267458,
   0.03114167,
   0.0380215,
   0.04429152,
   0.05168257,
   0.05711317,
   0.06117141,
   0.07161097,
   0.07109614,
   0.07621285,
   0.08290467,
   0.08318039,
   0.08500531,
   0.09001184,
   0.09659482,
   0.1063845,
   0.09933294,
   0.0918815,
   0.07800626};
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
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMinimum(0.8723386);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMaximum(1.127661);
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
   0.00889762,
   0.02267458,
   0.03114167,
   0.0380215,
   0.04429152,
   0.05168257,
   0.05711317,
   0.06117141,
   0.07161097,
   0.07109614,
   0.07621285,
   0.08290467,
   0.08318039,
   0.08500531,
   0.09001184,
   0.09659482,
   0.1063845,
   0.09933294,
   0.0918815,
   0.07800626};
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
   0.00889762,
   0.02267458,
   0.03114167,
   0.0380215,
   0.04429152,
   0.05168257,
   0.05711317,
   0.06117141,
   0.07161097,
   0.07109614,
   0.07621285,
   0.08290467,
   0.08318039,
   0.08500531,
   0.09001184,
   0.09659482,
   0.1063845,
   0.09933294,
   0.0918815,
   0.07800626};
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
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMinimum(0.8723386);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMaximum(1.127661);
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
   1.010035,
   0.99437,
   0.9740494,
   0.9809952,
   0.9946806,
   1.171149,
   0.09383828,
   0.1918238};
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
   0.01009329,
   0.02499238,
   0.0345026,
   0.0434392,
   0.04942608,
   0.06437215,
   0.02000639,
   0.03915586};
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
   0.01009329,
   0.02499238,
   0.0345026,
   0.0434392,
   0.04942608,
   0.06437215,
   0.02000639,
   0.03915586};
   grae = new TGraphAsymmErrors(8,Graph1_fx3203,Graph1_fy3203,Graph1_felx3203,Graph1_fehx3203,Graph1_fely3203,Graph1_fehy3203);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1319531993203 = new TH1F("Graph_Graph_Graph_Graph1319531993203","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1319531993203->SetMinimum(0.0664487);
   Graph_Graph_Graph_Graph1319531993203->SetMaximum(1.35169);
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
   MVAOutputM3000_1->Range(-0.204557,-2.177103,1.073924,6.678044);
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
   hframe__353->SetMaximum(1401960);
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
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMinimum(14.1929);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMaximum(344670.6);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,7390.842);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1108.074);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,690.9559);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,412.7001);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,307.3291);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,318.9962);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,165.6832);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,169.3308);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,89.21404);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,151.3478);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,131.0649);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,126.5751);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,76.65415);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,92.6218);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,62.02171);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,105.5644);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,82.85157);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,89.08567);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,92.81539);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,110.5079);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,142.942);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,55.43586);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,42.41831);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,37.78195);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,32.6507);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,30.06728);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,21.85614);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,23.24154);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,19.16962);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,23.29495);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,20.64788);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,19.39483);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,13.90456);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,20.16803);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,17.14796);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,20.32818);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,16.63393);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,15.62189);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,17.30324);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,18.20731);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4090.428);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,101531);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,14481.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,7596.681);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,5115.592);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,3723.107);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2823.375);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2322.258);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1949.917);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1595.25);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,1424.005);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,1206.689);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1082.826);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1046.262);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,978.0866);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,828.2791);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,815.5184);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,763.9954);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,758.6147);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,841.1078);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1152.238);
   TT_stack_2_stack_2_stack_2->SetBinError(1,353.8897);
   TT_stack_2_stack_2_stack_2->SetBinError(2,133.8499);
   TT_stack_2_stack_2_stack_2->SetBinError(3,97.09828);
   TT_stack_2_stack_2_stack_2->SetBinError(4,79.88794);
   TT_stack_2_stack_2_stack_2->SetBinError(5,67.80477);
   TT_stack_2_stack_2_stack_2->SetBinError(6,59.11446);
   TT_stack_2_stack_2_stack_2->SetBinError(7,53.48339);
   TT_stack_2_stack_2_stack_2->SetBinError(8,48.9357);
   TT_stack_2_stack_2_stack_2->SetBinError(9,44.77639);
   TT_stack_2_stack_2_stack_2->SetBinError(10,41.61609);
   TT_stack_2_stack_2_stack_2->SetBinError(11,38.30952);
   TT_stack_2_stack_2_stack_2->SetBinError(12,36.26127);
   TT_stack_2_stack_2_stack_2->SetBinError(13,35.39294);
   TT_stack_2_stack_2_stack_2->SetBinError(14,34.57103);
   TT_stack_2_stack_2_stack_2->SetBinError(15,31.93084);
   TT_stack_2_stack_2_stack_2->SetBinError(16,31.4846);
   TT_stack_2_stack_2_stack_2->SetBinError(17,30.12801);
   TT_stack_2_stack_2_stack_2->SetBinError(18,30.43994);
   TT_stack_2_stack_2_stack_2->SetBinError(19,31.99478);
   TT_stack_2_stack_2_stack_2->SetBinError(20,37.27757);
   TT_stack_2_stack_2_stack_2->SetEntries(123255.7);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,89368.4);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16249.85);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,8077.035);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,4869.312);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,4112.881);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,2510.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,2200.977);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,1886.864);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1624.236);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1527.167);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1517.47);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,997.9443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,866.5457);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,787.5076);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1110.109);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,742.763);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,555.8923);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,563.2047);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,917.4911);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1239.551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1722.534);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,707.2559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,498.4862);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,385.3287);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,352.7414);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,284.5116);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,261.4921);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,238.9964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,231.8788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,215.3596);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,213.2086);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,178.319);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,161.056);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,152.8035);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,176.3751);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,156.2884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,145.2072);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,135.9088);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,166.1764);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,190.7351);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4384.703);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(1,3367.538);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(2,1831.208);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(3,1241.678);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(4,1003.548);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(5,721.1483);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(6,609.1491);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(7,477.0352);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(8,399.3886);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(9,354.5547);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(10,341.6417);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(11,232.9388);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(12,230.9326);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(13,205.1306);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(14,177.1602);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(15,158.9434);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(16,149.0784);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(17,143.723);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(18,130.5679);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(19,94.96235);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(20,135.422);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(1,77.93647);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(2,57.38079);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(3,48.02432);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(4,41.69066);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(5,36.76222);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(6,33.37128);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(7,30.64109);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(8,28.49002);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(9,25.98914);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(10,24.50834);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(11,23.20646);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(12,21.66461);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(13,20.75269);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(14,19.79315);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(15,18.81278);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(16,18.05086);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(17,17.39064);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(18,17.28514);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(19,16.80867);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(20,16.99529);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetEntries(6381.875);
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
   198290.2,
   31839.25,
   16364.67,
   10397.6,
   8143.317,
   5652.571,
   4688.918,
   4006.112,
   3308.699,
   3102.52,
   2855.225,
   2207.345,
   1989.462,
   1858.216,
   2000.409,
   1663.846,
   1402.739,
   1410.905,
   1851.414,
   2502.297};
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
   1764.311,
   721.9417,
   509.6232,
   395.3325,
   360.6799,
   292.1394,
   267.799,
   245.0595,
   236.9392,
   220.5772,
   217.6048,
   182.9992,
   165.4842,
   157.9582,
   180.0605,
   160.7189,
   149.2297,
   140.1494,
   170.1107,
   195.1948};
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
   1764.311,
   721.9417,
   509.6232,
   395.3325,
   360.6799,
   292.1394,
   267.799,
   245.0595,
   236.9392,
   220.5772,
   217.6048,
   182.9992,
   165.4842,
   157.9582,
   180.0605,
   160.7189,
   149.2297,
   140.1494,
   170.1107,
   195.1948};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMinimum(1128.159);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMaximum(219934.6);
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
   Data__355->SetBinContent(1,200280);
   Data__355->SetBinContent(2,31660);
   Data__355->SetBinContent(3,15940);
   Data__355->SetBinContent(4,10200);
   Data__355->SetBinContent(5,8100);
   Data__355->SetBinContent(6,6620);
   Data__355->SetBinContent(7,440);
   Data__355->SetBinContent(20,480);
   Data__355->SetBinError(1,2001.4);
   Data__355->SetBinError(2,795.7387);
   Data__355->SetBinError(3,564.6238);
   Data__355->SetBinError(4,451.6636);
   Data__355->SetBinError(5,402.4922);
   Data__355->SetBinError(6,363.8681);
   Data__355->SetBinError(7,93.80832);
   Data__355->SetBinError(20,97.97959);
   Data__355->SetEntries(13686);
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
   hframe_copy__356->SetMaximum(1401960);
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
   hframe_copy__357->SetMaximum(1401960);
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
