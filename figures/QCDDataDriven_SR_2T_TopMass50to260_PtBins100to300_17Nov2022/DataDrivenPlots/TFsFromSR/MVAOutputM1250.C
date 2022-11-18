void MVAOutputM1250()
{
//=========Macro generated from canvas: MVAOutputM1250/MVAOutputM1250
//=========  (Fri Nov 18 13:27:26 2022) by ROOT version 6.20/02
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
   0.01161996,
   0.02033864,
   0.0253289,
   0.02964125,
   0.03200502,
   0.03564816,
   0.03818746,
   0.04054147,
   0.04274485,
   0.04777889,
   0.04849594,
   0.05288866,
   0.05368654,
   0.05679655,
   0.05784161,
   0.06274724,
   0.06037639,
   0.06495772,
   0.06483754,
   0.06229961};
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
   0.01161996,
   0.02033864,
   0.0253289,
   0.02964125,
   0.03200502,
   0.03564816,
   0.03818746,
   0.04054147,
   0.04274485,
   0.04777889,
   0.04849594,
   0.05288866,
   0.05368654,
   0.05679655,
   0.05784161,
   0.06274724,
   0.06037639,
   0.06495772,
   0.06483754,
   0.06229961};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3141,BackgroundStatSystError_fy3141,BackgroundStatSystError_felx3141,BackgroundStatSystError_fehx3141,BackgroundStatSystError_fely3141,BackgroundStatSystError_fehy3141);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1245;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError313331373141 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError313331373141","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMinimum(0.9220507);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMaximum(1.077949);
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
   0.01161996,
   0.02033864,
   0.0253289,
   0.02964125,
   0.03200502,
   0.03564816,
   0.03818746,
   0.04054147,
   0.04274485,
   0.04777889,
   0.04849594,
   0.05288866,
   0.05368654,
   0.05679655,
   0.05784161,
   0.06274724,
   0.06037639,
   0.06495772,
   0.06483754,
   0.06229961};
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
   0.01161996,
   0.02033864,
   0.0253289,
   0.02964125,
   0.03200502,
   0.03564816,
   0.03818746,
   0.04054147,
   0.04274485,
   0.04777889,
   0.04849594,
   0.05288866,
   0.05368654,
   0.05679655,
   0.05784161,
   0.06274724,
   0.06037639,
   0.06495772,
   0.06483754,
   0.06229961};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3142,BackgroundStatError_fy3142,BackgroundStatError_felx3142,BackgroundStatError_fehx3142,BackgroundStatError_fely3142,BackgroundStatError_fehy3142);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1244;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError313431383142 = new TH1F("Graph_Graph_Graph_BackgroundStatError313431383142","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMinimum(0.9220507);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMaximum(1.077949);
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
   
   Double_t Graph1_fx3143[8] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.975};
   Double_t Graph1_fy3143[8] = {
   1.001403,
   1.007452,
   1.025495,
   1.005318,
   1.106324,
   0.9662836,
   0.1114295,
   0.04203105};
   Double_t Graph1_felx3143[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3143[8] = {
   0.01289051,
   0.02334718,
   0.02929986,
   0.03338103,
   0.03918801,
   0.03883822,
   0.01450689,
   0.01486022};
   Double_t Graph1_fehx3143[8] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3143[8] = {
   0.01289051,
   0.02334718,
   0.02929986,
   0.03338103,
   0.03918801,
   0.03883822,
   0.01450689,
   0.01486022};
   grae = new TGraphAsymmErrors(8,Graph1_fx3143,Graph1_fy3143,Graph1_felx3143,Graph1_fehx3143,Graph1_fely3143,Graph1_fehy3143);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1313531393143 = new TH1F("Graph_Graph_Graph_Graph1313531393143","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1313531393143->SetMinimum(0.02445375);
   Graph_Graph_Graph_Graph1313531393143->SetMaximum(1.257346);
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
   MVAOutputM1250_1->Range(-0.204557,-2.172418,1.073924,6.448467);
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
   hframe__248->SetMaximum(853520.5);
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
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMinimum(56.13989);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMaximum(191383.9);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,4197.479);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1234.514);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,906.464);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,630.0214);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,640.2557);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,489.9924);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,486.3971);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,384.2902);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,385.4141);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,291.9017);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,291.1042);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,286.0316);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,239.0125);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,214.1459);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,230.2884);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,178.3173);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,186.9206);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,177.4879);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,184.5766);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,243.9256);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,113.2156);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,54.45239);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,48.63043);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,38.63536);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,43.8336);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,43.29557);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,36.94463);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,33.89313);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,33.65727);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,32.03417);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,24.73078);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,33.63413);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,25.65774);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,27.18888);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,28.57219);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,21.95916);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,26.4562);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,23.44);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,22.70258);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,27.38709);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(4024.2);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,61347.48);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,18144.2);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,11732.39);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,8920.524);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,7236.611);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,6055.749);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,5236.98);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,4718.044);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,4194.543);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,3535.489);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3119.903);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2812.949);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2593.665);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2407.784);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2159.189);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1946.928);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1944.422);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1803.864);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1899.697);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1861.276);
   TT_stack_2_stack_2_stack_2->SetBinError(1,275.9957);
   TT_stack_2_stack_2_stack_2->SetBinError(2,150.6851);
   TT_stack_2_stack_2_stack_2->SetBinError(3,121.2506);
   TT_stack_2_stack_2_stack_2->SetBinError(4,105.4735);
   TT_stack_2_stack_2_stack_2->SetBinError(5,94.64998);
   TT_stack_2_stack_2_stack_2->SetBinError(6,86.25868);
   TT_stack_2_stack_2_stack_2->SetBinError(7,80.74956);
   TT_stack_2_stack_2_stack_2->SetBinError(8,76.16661);
   TT_stack_2_stack_2_stack_2->SetBinError(9,72.28408);
   TT_stack_2_stack_2_stack_2->SetBinError(10,65.91639);
   TT_stack_2_stack_2_stack_2->SetBinError(11,61.84927);
   TT_stack_2_stack_2_stack_2->SetBinError(12,58.73794);
   TT_stack_2_stack_2_stack_2->SetBinError(13,56.05394);
   TT_stack_2_stack_2_stack_2->SetBinError(14,54.7699);
   TT_stack_2_stack_2_stack_2->SetBinError(15,51.3718);
   TT_stack_2_stack_2_stack_2->SetBinError(16,48.45763);
   TT_stack_2_stack_2_stack_2->SetBinError(17,48.55681);
   TT_stack_2_stack_2_stack_2->SetBinError(18,46.30568);
   TT_stack_2_stack_2_stack_2->SetBinError(19,47.08301);
   TT_stack_2_stack_2_stack_2->SetBinError(20,46.06903);
   TT_stack_2_stack_2_stack_2->SetEntries(124130.9);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,54985.98);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,17585.83);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11252.05);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8493.498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,6531.208);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6266.233);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,4866.274);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,4267.924);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,3557.844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,2908.095);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3170.691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2325.314);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2218.866);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1879.231);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2059.397);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1693.749);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1920.047);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1604.215);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1139.974);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1701.508);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1368.426);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,734.5373);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,590.8602);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,522.9197);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,449.1788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,446.4091);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,394.5217);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,370.6236);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,338.5871);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,313.3578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,312.1579);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,278.7846);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,264.1004);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,248.23);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,250.5262);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,233.6511);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,238.2761);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,227.054);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,202.4121);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,231.0212);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4316.857);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(1,565.8681);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(2,465.3623);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(3,489.0824);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(4,510.9996);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(5,460.8127);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(6,599.6697);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(7,603.3475);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(8,611.2627);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(9,601.1263);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(10,646.814);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(11,618.392);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(12,619.417);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(13,660.8192);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(14,680.8781);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(15,646.7764);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(16,689.3482);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(17,718.4102);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(18,628.4046);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(19,660.6578);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(20,601.0857);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(1,33.21857);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(2,29.88067);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(3,29.69136);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(4,30.38067);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(5,30.83206);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(6,31.98992);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(7,32.58742);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(8,32.80527);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(9,33.32086);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(10,33.5828);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(11,34.0657);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(12,34.29221);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(13,34.37895);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(14,34.82927);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(15,35.81907);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(16,35.65486);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(17,36.33257);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(18,36.56375);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(19,37.29314);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(20,36.17505);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetEntries(6400.654);
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
   120530.9,
   36964.55,
   23890.9,
   18044.04,
   14408.08,
   12811.97,
   10589.65,
   9370.259,
   8137.802,
   6735.486,
   6581.698,
   5424.294,
   5051.544,
   4501.161,
   4448.875,
   3818.994,
   4051.389,
   3585.567,
   3224.248,
   3806.71};
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
   1400.565,
   751.8086,
   605.1301,
   534.848,
   461.1308,
   456.7233,
   404.3918,
   379.8841,
   347.8491,
   321.814,
   319.1857,
   286.8837,
   271.1999,
   255.6504,
   257.3301,
   239.6313,
   244.6082,
   232.9102,
   209.0523,
   237.1565};
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
   1400.565,
   751.8086,
   605.1301,
   534.848,
   461.1308,
   456.7233,
   404.3918,
   379.8841,
   347.8491,
   321.814,
   319.1857,
   286.8837,
   271.1999,
   255.6504,
   257.3301,
   239.6313,
   244.6082,
   232.9102,
   209.0523,
   237.1565};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3144,BkgSum-SR-Inclusive_sum_errors_fy3144,BkgSum-SR-Inclusive_sum_errors_felx3144,BkgSum-SR-Inclusive_sum_errors_fehx3144,BkgSum-SR-Inclusive_sum_errors_fely3144,BkgSum-SR-Inclusive_sum_errors_fehy3144);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1243;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMinimum(2713.676);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMaximum(133823.1);
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
   Data__250->SetBinContent(1,120700);
   Data__250->SetBinContent(2,37240);
   Data__250->SetBinContent(3,24500);
   Data__250->SetBinContent(4,18140);
   Data__250->SetBinContent(5,15940);
   Data__250->SetBinContent(6,12380);
   Data__250->SetBinContent(7,1180);
   Data__250->SetBinContent(20,160);
   Data__250->SetBinError(1,1553.705);
   Data__250->SetBinError(2,863.018);
   Data__250->SetBinError(3,700);
   Data__250->SetBinError(4,602.3288);
   Data__250->SetBinError(5,564.6238);
   Data__250->SetBinError(6,497.5942);
   Data__250->SetBinError(7,153.6229);
   Data__250->SetBinError(20,56.56854);
   Data__250->SetEntries(11512);
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

   ci = 1243;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1243;
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
   hframe_copy__251->SetMaximum(853520.5);
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
   hframe_copy__252->SetMaximum(853520.5);
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
