void MVAOutputM1250()
{
//=========Macro generated from canvas: MVAOutputM1250/MVAOutputM1250
//=========  (Tue Dec 27 11:55:10 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM1250 = new TCanvas("MVAOutputM1250", "MVAOutputM1250",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM1250->SetHighLightColor(2);
   MVAOutputM1250->Range(0,0,1,1);
   MVAOutputM1250->SetFillColor(0);
   MVAOutputM1250->SetBorderMode(0);
   MVAOutputM1250->SetBorderSize(2);
   MVAOutputM1250->SetTickx(1);
   MVAOutputM1250->SetTicky(1);
   MVAOutputM1250->SetLeftMargin(0.16);
   MVAOutputM1250->SetRightMargin(0.05);
   MVAOutputM1250->SetTopMargin(0.06);
   MVAOutputM1250->SetBottomMargin(0.13);
   MVAOutputM1250->SetFrameFillStyle(0);
   MVAOutputM1250->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM1250_2
   TPad *MVAOutputM1250_2 = new TPad("MVAOutputM1250_2", "MVAOutputM1250_2",0,0,1,0.304);
   MVAOutputM1250_2->Draw();
   MVAOutputM1250_2->cd();
   MVAOutputM1250_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM1250_2->SetFillColor(0);
   MVAOutputM1250_2->SetFillStyle(4000);
   MVAOutputM1250_2->SetBorderMode(0);
   MVAOutputM1250_2->SetBorderSize(2);
   MVAOutputM1250_2->SetTickx(1);
   MVAOutputM1250_2->SetTicky(1);
   MVAOutputM1250_2->SetLeftMargin(0.16);
   MVAOutputM1250_2->SetRightMargin(0.05);
   MVAOutputM1250_2->SetTopMargin(0);
   MVAOutputM1250_2->SetBottomMargin(0.3421053);
   MVAOutputM1250_2->SetFrameFillStyle(0);
   MVAOutputM1250_2->SetFrameBorderMode(0);
   MVAOutputM1250_2->SetFrameFillStyle(0);
   MVAOutputM1250_2->SetFrameBorderMode(0);
   
   TH1F *hframe__246 = new TH1F("hframe__246","",1000,0,1.01);
   hframe__246->SetMinimum(0.3);
   hframe__246->SetMaximum(1.7);
   hframe__246->SetDirectory(0);
   hframe__246->SetStats(0);
   hframe__246->SetLineStyle(0);
   hframe__246->SetMarkerStyle(20);
   hframe__246->GetXaxis()->SetTitle("DNN Output");
   hframe__246->GetXaxis()->SetLabelFont(43);
   hframe__246->GetXaxis()->SetLabelOffset(0.007);
   hframe__246->GetXaxis()->SetLabelSize(27);
   hframe__246->GetXaxis()->SetTitleSize(33);
   hframe__246->GetXaxis()->SetTitleOffset(2.960526);
   hframe__246->GetXaxis()->SetTitleFont(43);
   hframe__246->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__246->GetYaxis()->SetNdivisions(505);
   hframe__246->GetYaxis()->SetLabelFont(43);
   hframe__246->GetYaxis()->SetLabelOffset(0.007);
   hframe__246->GetYaxis()->SetLabelSize(21);
   hframe__246->GetYaxis()->SetTitleSize(33);
   hframe__246->GetYaxis()->SetTitleOffset(1.5625);
   hframe__246->GetYaxis()->SetTitleFont(43);
   hframe__246->GetZaxis()->SetLabelFont(43);
   hframe__246->GetZaxis()->SetLabelOffset(0.007);
   hframe__246->GetZaxis()->SetLabelSize(27);
   hframe__246->GetZaxis()->SetTitleSize(33);
   hframe__246->GetZaxis()->SetTitleOffset(1);
   hframe__246->GetZaxis()->SetTitleFont(43);
   hframe__246->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3141[20] = {
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
   Double_t BackgroundStatSystError_fy3141[20] = {
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
   Double_t BackgroundStatSystError_felx3141[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fely3141[20] = {
   0.01685066,
   0.02720189,
   0.03454339,
   0.04356578,
   0.04958957,
   0.05586219,
   0.06450276,
   0.07157492,
   0.08345261,
   0.09117943,
   0.09139722,
   0.0969172,
   0.0976883,
   0.09727234,
   0.10673,
   0.0920371,
   0.09484761,
   0.09305983,
   0.0910282,
   0.102589};
   Double_t BackgroundStatSystError_fehx3141[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatSystError_fehy3141[20] = {
   0.01685066,
   0.02720189,
   0.03454339,
   0.04356578,
   0.04958957,
   0.05586219,
   0.06450276,
   0.07157492,
   0.08345261,
   0.09117943,
   0.09139722,
   0.0969172,
   0.0976883,
   0.09727234,
   0.10673,
   0.0920371,
   0.09484761,
   0.09305983,
   0.0910282,
   0.102589};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3141,BackgroundStatSystError_fy3141,BackgroundStatSystError_felx3141,BackgroundStatSystError_fehx3141,BackgroundStatSystError_fely3141,BackgroundStatSystError_fehy3141);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1246;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError313331373141 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError313331373141","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMinimum(0.871924);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMaximum(1.128076);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError313331373141);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3142[20] = {
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
   Double_t BackgroundStatError_fy3142[20] = {
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
   Double_t BackgroundStatError_felx3142[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fely3142[20] = {
   0.01685066,
   0.02720189,
   0.03454339,
   0.04356578,
   0.04958957,
   0.05586219,
   0.06450276,
   0.07157492,
   0.08345261,
   0.09117943,
   0.09139722,
   0.0969172,
   0.0976883,
   0.09727234,
   0.10673,
   0.0920371,
   0.09484761,
   0.09305983,
   0.0910282,
   0.102589};
   Double_t BackgroundStatError_fehx3142[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BackgroundStatError_fehy3142[20] = {
   0.01685066,
   0.02720189,
   0.03454339,
   0.04356578,
   0.04958957,
   0.05586219,
   0.06450276,
   0.07157492,
   0.08345261,
   0.09117943,
   0.09139722,
   0.0969172,
   0.0976883,
   0.09727234,
   0.10673,
   0.0920371,
   0.09484761,
   0.09305983,
   0.0910282,
   0.102589};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3142,BackgroundStatError_fy3142,BackgroundStatError_felx3142,BackgroundStatError_fehx3142,BackgroundStatError_fely3142,BackgroundStatError_fehy3142);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1245;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError313431383142 = new TH1F("Graph_Graph_Graph_BackgroundStatError313431383142","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMinimum(0.871924);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMaximum(1.128076);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError313431383142->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError313431383142);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx36[2] = {
   0,
   1.01};
   Double_t Graph0_fy36[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx36,Graph0_fy36);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0343536 = new TH1F("Graph_Graph_Graph_Graph0343536","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0343536->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0343536->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0343536->SetDirectory(0);
   Graph_Graph_Graph_Graph0343536->SetStats(0);
   Graph_Graph_Graph_Graph0343536->SetLineStyle(0);
   Graph_Graph_Graph_Graph0343536->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0343536->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0343536->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0343536->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0343536);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3143[7] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3143[7] = {
   1.04705,
   1.098872,
   1.031979,
   1.01524,
   0.962476,
   0.8888751,
   0.1034975};
   Double_t Graph1_felx3143[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3143[7] = {
   0.01831862,
   0.03092042,
   0.03796197,
   0.04733582,
   0.05306302,
   0.05702136,
   0.02258501};
   Double_t Graph1_fehx3143[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3143[7] = {
   0.01831862,
   0.03092042,
   0.03796197,
   0.04733582,
   0.05306302,
   0.05702136,
   0.02258501};
   grae = new TGraphAsymmErrors(7,Graph1_fx3143,Graph1_fy3143,Graph1_felx3143,Graph1_fehx3143,Graph1_fely3143,Graph1_fehy3143);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1313531393143 = new TH1F("Graph_Graph_Graph_Graph1313531393143","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1313531393143->SetMinimum(0.07282126);
   Graph_Graph_Graph_Graph1313531393143->SetMaximum(1.23468);
   Graph_Graph_Graph_Graph1313531393143->SetDirectory(0);
   Graph_Graph_Graph_Graph1313531393143->SetStats(0);
   Graph_Graph_Graph_Graph1313531393143->SetLineStyle(0);
   Graph_Graph_Graph_Graph1313531393143->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1313531393143->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1313531393143->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1313531393143->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1313531393143);
   
   grae->Draw("ep ");
   TLatex *   tex = new TLatex(0.55,0.38,"Data blinded: 0.3-1.1");
tex->SetNDC();
   tex->SetTextAlign(21);
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy__247 = new TH1F("hframe_copy__247","",1000,0,1.01);
   hframe_copy__247->SetMinimum(0.3);
   hframe_copy__247->SetMaximum(1.7);
   hframe_copy__247->SetDirectory(0);
   hframe_copy__247->SetStats(0);
   hframe_copy__247->SetLineStyle(0);
   hframe_copy__247->SetMarkerStyle(20);
   hframe_copy__247->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__247->GetXaxis()->SetLabelFont(43);
   hframe_copy__247->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__247->GetXaxis()->SetLabelSize(27);
   hframe_copy__247->GetXaxis()->SetTitleSize(33);
   hframe_copy__247->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__247->GetXaxis()->SetTitleFont(43);
   hframe_copy__247->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__247->GetYaxis()->SetNdivisions(505);
   hframe_copy__247->GetYaxis()->SetLabelFont(43);
   hframe_copy__247->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__247->GetYaxis()->SetLabelSize(21);
   hframe_copy__247->GetYaxis()->SetTitleSize(33);
   hframe_copy__247->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__247->GetYaxis()->SetTitleFont(43);
   hframe_copy__247->GetZaxis()->SetLabelFont(43);
   hframe_copy__247->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__247->GetZaxis()->SetLabelSize(27);
   hframe_copy__247->GetZaxis()->SetTitleSize(33);
   hframe_copy__247->GetZaxis()->SetTitleOffset(1);
   hframe_copy__247->GetZaxis()->SetTitleFont(43);
   hframe_copy__247->Draw("sameaxis");
   MVAOutputM1250_2->Modified();
   MVAOutputM1250->cd();
  
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
   MVAOutputM1250->cd();
  
// ------------>Primitives in pad: MVAOutputM1250_1
   TPad *MVAOutputM1250_1 = new TPad("MVAOutputM1250_1", "MVAOutputM1250_1",0,0.2897959,1,1);
   MVAOutputM1250_1->Draw();
   MVAOutputM1250_1->cd();
   MVAOutputM1250_1->Range(-0.204557,-2.166528,1.073924,6.15986);
   MVAOutputM1250_1->SetFillColor(0);
   MVAOutputM1250_1->SetFillStyle(4000);
   MVAOutputM1250_1->SetBorderMode(0);
   MVAOutputM1250_1->SetBorderSize(2);
   MVAOutputM1250_1->SetLogy();
   MVAOutputM1250_1->SetTickx(1);
   MVAOutputM1250_1->SetTicky(1);
   MVAOutputM1250_1->SetLeftMargin(0.16);
   MVAOutputM1250_1->SetRightMargin(0.05);
   MVAOutputM1250_1->SetTopMargin(0.06);
   MVAOutputM1250_1->SetBottomMargin(0.02);
   MVAOutputM1250_1->SetFrameFillStyle(0);
   MVAOutputM1250_1->SetFrameBorderMode(0);
   MVAOutputM1250_1->SetFrameFillStyle(0);
   MVAOutputM1250_1->SetFrameBorderMode(0);
   
   TH1F *hframe__248 = new TH1F("hframe__248","",1000,0,1.01);
   hframe__248->SetMinimum(0.01);
   hframe__248->SetMaximum(457380);
   hframe__248->SetDirectory(0);
   hframe__248->SetStats(0);
   hframe__248->SetLineStyle(0);
   hframe__248->SetMarkerStyle(20);
   hframe__248->GetXaxis()->SetLabelFont(43);
   hframe__248->GetXaxis()->SetLabelOffset(0.007);
   hframe__248->GetXaxis()->SetLabelSize(0);
   hframe__248->GetXaxis()->SetTitleSize(0);
   hframe__248->GetXaxis()->SetTitleOffset(0.9);
   hframe__248->GetXaxis()->SetTitleFont(43);
   hframe__248->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe__248->GetYaxis()->SetLabelFont(43);
   hframe__248->GetYaxis()->SetLabelOffset(0.007);
   hframe__248->GetYaxis()->SetLabelSize(27);
   hframe__248->GetYaxis()->SetTitleSize(33);
   hframe__248->GetYaxis()->SetTitleOffset(1.5625);
   hframe__248->GetYaxis()->SetTitleFont(43);
   hframe__248->GetZaxis()->SetLabelFont(43);
   hframe__248->GetZaxis()->SetLabelOffset(0.007);
   hframe__248->GetZaxis()->SetLabelSize(27);
   hframe__248->GetZaxis()->SetTitleSize(33);
   hframe__248->GetZaxis()->SetTitleOffset(1);
   hframe__248->GetZaxis()->SetTitleFont(43);
   hframe__248->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis211[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_34_stack_35_stack_36 = new TH1F("StackedMCstackHist_stack_34_stack_35_stack_36","StackedMCstackHist",20, xAxis211);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMinimum(4.740947);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMaximum(108171.2);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetDirectory(0);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetStats(0);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetLineStyle(0);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMarkerStyle(20);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_34_stack_35_stack_36->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_34_stack_35_stack_36);
   
   Double_t xAxis212[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM1250Inclusive",20, xAxis212);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,1591.069);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,590.4159);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,308.382);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,244.6653);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,186.5566);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,150.8185);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,147.0496);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,136.0049);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,76.05406);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,91.4033);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,63.70888);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,82.00828);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,26.72664);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,71.13091);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,40.95804);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,86.61871);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,68.595);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,69.17514);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,53.60515);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,57.92336);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,62.136);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,41.45262);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,29.20348);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,27.68454);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,23.8248);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,19.84001);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,23.03549);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,23.3115);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,16.43539);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,22.0296);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,16.55301);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,14.38471);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,11.8005);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,16.10928);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,8.660256);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,16.0754);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,15.01672);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,16.1653);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,13.17861);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,16.05029);
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
   Double_t xAxis213[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM1250Inclusive",20, xAxis213);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,22337.78);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,7477.373);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,4414.711);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2874.437);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2045.457);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1554.371);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1226.921);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1005.981);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,839.8043);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,696.0646);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,638.5638);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,620.6233);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,549.1974);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,590.4395);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,554.2816);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,543.8525);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,577.541);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,571.8998);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,629.387);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,508.1232);
   TT_stack_2_stack_2_stack_2->SetBinError(1,166.9574);
   TT_stack_2_stack_2_stack_2->SetBinError(2,96.98117);
   TT_stack_2_stack_2_stack_2->SetBinError(3,74.71048);
   TT_stack_2_stack_2_stack_2->SetBinError(4,60.64927);
   TT_stack_2_stack_2_stack_2->SetBinError(5,51.3294);
   TT_stack_2_stack_2_stack_2->SetBinError(6,44.21786);
   TT_stack_2_stack_2_stack_2->SetBinError(7,40.11649);
   TT_stack_2_stack_2_stack_2->SetBinError(8,35.56746);
   TT_stack_2_stack_2_stack_2->SetBinError(9,32.74957);
   TT_stack_2_stack_2_stack_2->SetBinError(10,30.02178);
   TT_stack_2_stack_2_stack_2->SetBinError(11,28.41762);
   TT_stack_2_stack_2_stack_2->SetBinError(12,28.47248);
   TT_stack_2_stack_2_stack_2->SetBinError(13,26.17881);
   TT_stack_2_stack_2_stack_2->SetBinError(14,27.49349);
   TT_stack_2_stack_2_stack_2->SetBinError(15,26.40078);
   TT_stack_2_stack_2_stack_2->SetBinError(16,26.16776);
   TT_stack_2_stack_2_stack_2->SetBinError(17,26.73719);
   TT_stack_2_stack_2_stack_2->SetBinError(18,26.91051);
   TT_stack_2_stack_2_stack_2->SetBinError(19,27.96583);
   TT_stack_2_stack_2_stack_2->SetBinError(20,25.23287);
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
   Double_t xAxis214[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM1250Inclusive",20, xAxis214);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,38475.05);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,14919.42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9598.902);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,5942.794);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,4604.521);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,3762.395);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,2684.098);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,2034.711);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1401.559);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1216.849);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1271.417);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,995.3089);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1179.601);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1022.777);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,816.9589);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1220.886);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1146.02);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1288.135);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1305.533);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,968.6651);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1036.347);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,616.3366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,488.1839);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,389.1185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,334.2645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,301.5616);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,257.6365);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,223.3595);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,189.8916);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,178.9185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,177.3666);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,161.4381);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,169.0731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,160.7118);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,148.1409);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,167.6031);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,167.1927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,176.766);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,178.3522);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,154.5784);
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
   Double_t xAxis215[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__249 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__249","h_SR_MVAOutputM1250Inclusive",20, xAxis215);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(1,187.4897);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(2,231.7245);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(3,290.6331);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(4,293.3401);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(5,229.8415);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(6,211.4553);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(7,245.6546);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(8,245.1697);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(9,168.7756);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(10,158.0523);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(11,185.373);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(12,172.7585);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(13,124.5892);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(14,125.8205);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(15,142.5515);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(16,112.9733);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(17,120.034);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(18,130.4164);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(19,85.44102);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(20,121.9248);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(1,19.89291);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(2,21.79215);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(3,22.77632);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(4,22.70672);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(5,21.44298);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(6,21.01744);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(7,20.47659);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(8,19.33311);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(9,18.57046);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(10,17.99294);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(11,17.67144);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(12,17.26104);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(13,16.74914);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(14,16.4877);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(15,16.23548);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(16,15.91112);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(17,15.9405);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(18,16.01312);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(19,16.18309);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(20,16.23319);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetEntries(1839.371);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3144[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3144[20] = {
   62403.9,
   22987.21,
   14322,
   9061.896,
   6836.534,
   5467.585,
   4058.068,
   3176.696,
   2317.418,
   2004.316,
   1973.69,
   1697.94,
   1755.526,
   1684.347,
   1412.198,
   1851.357,
   1792.156,
   1929.21,
   1988.525,
   1534.712};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3144[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3144[20] = {
   1051.547,
   625.2955,
   494.7302,
   394.7885,
   339.0208,
   305.4313,
   261.7566,
   227.3718,
   193.3946,
   182.7524,
   180.3898,
   164.5596,
   171.4943,
   163.8404,
   150.724,
   170.3936,
   169.9817,
   179.5319,
   181.0118,
   157.4446};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3144[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3144[20] = {
   1051.547,
   625.2955,
   494.7302,
   394.7885,
   339.0208,
   305.4313,
   261.7566,
   227.3718,
   193.3946,
   182.7524,
   180.3898,
   164.5596,
   171.4943,
   163.8404,
   150.724,
   170.3936,
   169.9817,
   179.5319,
   181.0118,
   157.4446};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3144,BkgSum-SR-Inclusive_sum_errors_fy3144,BkgSum-SR-Inclusive_sum_errors_felx3144,BkgSum-SR-Inclusive_sum_errors_fehx3144,BkgSum-SR-Inclusive_sum_errors_fely3144,BkgSum-SR-Inclusive_sum_errors_fehy3144);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1244;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMinimum(1135.327);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMaximum(69674.84);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors313631403144);
   
   grae->Draw("e2 ");
   Double_t xAxis216[21] = {0, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__250 = new TH1F("Data__250","h_SR_MVAOutputM1250Inclusive",20, xAxis216);
   Data__250->SetBinContent(1,65340);
   Data__250->SetBinContent(2,25260);
   Data__250->SetBinContent(3,14780);
   Data__250->SetBinContent(4,9200);
   Data__250->SetBinContent(5,6580);
   Data__250->SetBinContent(6,4860);
   Data__250->SetBinContent(7,420);
   Data__250->SetBinError(1,1143.154);
   Data__250->SetBinError(2,710.7742);
   Data__250->SetBinError(3,543.6911);
   Data__250->SetBinError(4,428.9522);
   Data__250->SetBinError(5,362.7671);
   Data__250->SetBinError(6,311.7691);
   Data__250->SetBinError(7,91.65151);
   Data__250->SetEntries(6322);
   Data__250->SetDirectory(0);
   Data__250->SetFillStyle(3001);
   Data__250->SetLineWidth(2);
   Data__250->SetMarkerStyle(20);
   Data__250->SetMarkerSize(1.2);
   Data__250->GetXaxis()->SetRange(1,200);
   Data__250->GetXaxis()->SetLabelFont(42);
   Data__250->GetXaxis()->SetTitleOffset(1);
   Data__250->GetXaxis()->SetTitleFont(42);
   Data__250->GetYaxis()->SetLabelFont(42);
   Data__250->GetYaxis()->SetTitleFont(42);
   Data__250->GetZaxis()->SetLabelFont(42);
   Data__250->GetZaxis()->SetTitleOffset(1);
   Data__250->GetZaxis()->SetTitleFont(42);
   Data__250->Draw("EP same");
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

   ci = 1244;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1244;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__251 = new TH1F("hframe_copy__251","",1000,0,1.01);
   hframe_copy__251->SetMinimum(0.01);
   hframe_copy__251->SetMaximum(457380);
   hframe_copy__251->SetDirectory(0);
   hframe_copy__251->SetStats(0);
   hframe_copy__251->SetLineStyle(0);
   hframe_copy__251->SetMarkerStyle(20);
   hframe_copy__251->GetXaxis()->SetLabelFont(43);
   hframe_copy__251->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__251->GetXaxis()->SetLabelSize(0);
   hframe_copy__251->GetXaxis()->SetTitleSize(0);
   hframe_copy__251->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__251->GetXaxis()->SetTitleFont(43);
   hframe_copy__251->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__251->GetYaxis()->SetLabelFont(43);
   hframe_copy__251->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__251->GetYaxis()->SetLabelSize(27);
   hframe_copy__251->GetYaxis()->SetTitleSize(33);
   hframe_copy__251->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__251->GetYaxis()->SetTitleFont(43);
   hframe_copy__251->GetZaxis()->SetLabelFont(43);
   hframe_copy__251->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__251->GetZaxis()->SetLabelSize(27);
   hframe_copy__251->GetZaxis()->SetTitleSize(33);
   hframe_copy__251->GetZaxis()->SetTitleOffset(1);
   hframe_copy__251->GetZaxis()->SetTitleFont(43);
   hframe_copy__251->Draw("sameaxis");
   
   TH1F *hframe_copy__252 = new TH1F("hframe_copy__252","",1000,0,1.01);
   hframe_copy__252->SetMinimum(0.01);
   hframe_copy__252->SetMaximum(457380);
   hframe_copy__252->SetDirectory(0);
   hframe_copy__252->SetStats(0);
   hframe_copy__252->SetLineStyle(0);
   hframe_copy__252->SetMarkerStyle(20);
   hframe_copy__252->GetXaxis()->SetLabelFont(43);
   hframe_copy__252->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__252->GetXaxis()->SetLabelSize(0);
   hframe_copy__252->GetXaxis()->SetTitleSize(0);
   hframe_copy__252->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__252->GetXaxis()->SetTitleFont(43);
   hframe_copy__252->GetYaxis()->SetTitle("< Events / 0.05-0.05  >");
   hframe_copy__252->GetYaxis()->SetLabelFont(43);
   hframe_copy__252->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__252->GetYaxis()->SetLabelSize(27);
   hframe_copy__252->GetYaxis()->SetTitleSize(33);
   hframe_copy__252->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__252->GetYaxis()->SetTitleFont(43);
   hframe_copy__252->GetZaxis()->SetLabelFont(43);
   hframe_copy__252->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__252->GetZaxis()->SetLabelSize(27);
   hframe_copy__252->GetZaxis()->SetTitleSize(33);
   hframe_copy__252->GetZaxis()->SetTitleOffset(1);
   hframe_copy__252->GetZaxis()->SetTitleFont(43);
   hframe_copy__252->Draw("sameaxis");
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
   MVAOutputM1250_1->Modified();
   MVAOutputM1250->cd();
   MVAOutputM1250->Modified();
   MVAOutputM1250->cd();
   MVAOutputM1250->SetSelected(MVAOutputM1250);
}
