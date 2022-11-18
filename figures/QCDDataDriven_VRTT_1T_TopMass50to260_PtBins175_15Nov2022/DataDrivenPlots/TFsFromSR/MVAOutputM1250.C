void MVAOutputM1250()
{
//=========Macro generated from canvas: MVAOutputM1250/MVAOutputM1250
//=========  (Fri Nov 18 13:27:29 2022) by ROOT version 6.20/02
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
   0.01079983,
   0.01724435,
   0.01995581,
   0.02213174,
   0.02398377,
   0.02707276,
   0.0306789,
   0.03337838,
   0.03635961,
   0.04094075,
   0.04555949,
   0.05003631,
   0.05485871,
   0.05599909,
   0.06311608,
   0.06813254,
   0.0664563,
   0.06278363,
   0.06507907,
   0.07015178};
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
   0.01079983,
   0.01724435,
   0.01995581,
   0.02213174,
   0.02398377,
   0.02707276,
   0.0306789,
   0.03337838,
   0.03635961,
   0.04094075,
   0.04555949,
   0.05003631,
   0.05485871,
   0.05599909,
   0.06311608,
   0.06813254,
   0.0664563,
   0.06278363,
   0.06507907,
   0.07015178};
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
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMinimum(0.9158179);
   Graph_Graph_Graph_BackgroundStatSystError313331373141->SetMaximum(1.084182);
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
   0.01079983,
   0.01724435,
   0.01995581,
   0.02213174,
   0.02398377,
   0.02707276,
   0.0306789,
   0.03337838,
   0.03635961,
   0.04094075,
   0.04555949,
   0.05003631,
   0.05485871,
   0.05599909,
   0.06311608,
   0.06813254,
   0.0664563,
   0.06278363,
   0.06507907,
   0.07015178};
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
   0.01079983,
   0.01724435,
   0.01995581,
   0.02213174,
   0.02398377,
   0.02707276,
   0.0306789,
   0.03337838,
   0.03635961,
   0.04094075,
   0.04555949,
   0.05003631,
   0.05485871,
   0.05599909,
   0.06311608,
   0.06813254,
   0.0664563,
   0.06278363,
   0.06507907,
   0.07015178};
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
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMinimum(0.9158179);
   Graph_Graph_Graph_BackgroundStatError313431383142->SetMaximum(1.084182);
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
   
   Double_t Graph1_fx3143[20] = {
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
   Double_t Graph1_fy3143[20] = {
   0.9206314,
   1.003423,
   0.9971582,
   1.080237,
   0.9503975,
   1.015027,
   0.9704806,
   0.9849287,
   0.9687835,
   0.9756302,
   1.023849,
   1.122565,
   1.166984,
   0.9507208,
   1.012765,
   1.222778,
   1.042764,
   1.047017,
   1.107964,
   0.9235568};
   Double_t Graph1_felx3143[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fely3143[20] = {
   0.01254331,
   0.02157525,
   0.02503085,
   0.02913181,
   0.02939999,
   0.03394757,
   0.03735382,
   0.04031045,
   0.04403562,
   0.04872064,
   0.05653258,
   0.06448965,
   0.07251285,
   0.06576273,
   0.07655783,
   0.09217038,
   0.08457936,
   0.07782418,
   0.08599472,
   0.08260543};
   Double_t Graph1_fehx3143[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
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
   Double_t Graph1_fehy3143[20] = {
   0.01254331,
   0.02157525,
   0.02503085,
   0.02913181,
   0.02939999,
   0.03394757,
   0.03735382,
   0.04031045,
   0.04403562,
   0.04872064,
   0.05653258,
   0.06448965,
   0.07251285,
   0.06576273,
   0.07655783,
   0.09217038,
   0.08457936,
   0.07782418,
   0.08599472,
   0.08260543};
   grae = new TGraphAsymmErrors(20,Graph1_fx3143,Graph1_fy3143,Graph1_felx3143,Graph1_fehx3143,Graph1_fely3143,Graph1_fehy3143);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1313531393143 = new TH1F("Graph_Graph_Graph_Graph1313531393143","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph1313531393143->SetMinimum(0.7935517);
   Graph_Graph_Graph_Graph1313531393143->SetMaximum(1.362348);
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
   MVAOutputM1250_1->Range(-0.204557,-2.172132,1.073924,6.434449);
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
   hframe__248->SetMaximum(828045.9);
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
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMinimum(21.61741);
   StackedMCstackHist_stack_34_stack_35_stack_36->SetMaximum(194488.7);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2741.658);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1085.221);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,806.4486);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,675.7916);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,590.205);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,443.2845);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,362.4991);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,288.16);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,250.0785);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,241.6317);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,209.7217);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,147.0308);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,137.8484);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,140.8965);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,82.31122);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,136.1244);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,95.80437);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,105.1359);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,112.1219);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,114.4183);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,124.1268);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,69.06398);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,80.25634);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,52.71555);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,45.51124);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,42.75584);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,38.85726);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,31.94583);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,33.24134);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,29.173);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,28.13426);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,25.52312);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,24.69301);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,21.85584);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,18.54626);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,24.90756);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,18.46055);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,19.67175);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,19.8964);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,21.47358);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1792.929);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,76809.23);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,25822.84);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,19126.23);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,15794.1);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,12990.22);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,10186.6);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,8180.816);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,6665.247);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,5516.833);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4517.615);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3830.605);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3094.646);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2729.092);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,2277.074);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2051.408);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1776.369);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1735.478);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1734.719);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1851.379);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,1423.624);
   TT_stack_2_stack_2_stack_2->SetBinError(1,299.7137);
   TT_stack_2_stack_2_stack_2->SetBinError(2,173.9457);
   TT_stack_2_stack_2_stack_2->SetBinError(3,149.9574);
   TT_stack_2_stack_2_stack_2->SetBinError(4,136.3446);
   TT_stack_2_stack_2_stack_2->SetBinError(5,123.9879);
   TT_stack_2_stack_2_stack_2->SetBinError(6,109.732);
   TT_stack_2_stack_2_stack_2->SetBinError(7,98.57106);
   TT_stack_2_stack_2_stack_2->SetBinError(8,89.01407);
   TT_stack_2_stack_2_stack_2->SetBinError(9,81.15344);
   TT_stack_2_stack_2_stack_2->SetBinError(10,73.51088);
   TT_stack_2_stack_2_stack_2->SetBinError(11,67.75392);
   TT_stack_2_stack_2_stack_2->SetBinError(12,60.71746);
   TT_stack_2_stack_2_stack_2->SetBinError(13,56.91047);
   TT_stack_2_stack_2_stack_2->SetBinError(14,51.86974);
   TT_stack_2_stack_2_stack_2->SetBinError(15,49.36059);
   TT_stack_2_stack_2_stack_2->SetBinError(16,45.97588);
   TT_stack_2_stack_2_stack_2->SetBinError(17,45.34731);
   TT_stack_2_stack_2_stack_2->SetBinError(18,45.36831);
   TT_stack_2_stack_2_stack_2->SetBinError(19,46.77349);
   TT_stack_2_stack_2_stack_2->SetBinError(20,41.24848);
   TT_stack_2_stack_2_stack_2->SetEntries(176805.7);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,37477.5);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16204.38);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,11897.78);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,8987.494);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8410.369);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,6985.421);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,5367.319);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,5169.298);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,4225.001);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,3461.082);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,2366.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2156.677);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1571.852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1978.693);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1322.167);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,966.1967);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1084.046);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1617.586);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,1032.985);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,1168.884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1221.545);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,719.5029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,612.0082);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,544.1224);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,510.6172);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,462.1251);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,413.4011);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,393.4291);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,352.5585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,327.1216);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,282.5394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,261.9606);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,235.4715);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,239.689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,211.6524);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,189.0338);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,187.4533);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,211.3632);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,188.2676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,184.1136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3626.226);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(1,59.30037);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(2,39.38366);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(3,63.4934);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(4,51.12605);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(5,39.06822);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(6,34.58804);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(7,52.25039);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(8,58.91468);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(9,53.69611);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(10,9.753956);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(11,39.29366);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(12,33.12534);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(13,29.68382);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(14,16.1859);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(15,13.55203);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(16,19.02844);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(17,5.337869);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(18,19.72871);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(19,17.47415);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinContent(20,-0.6215311);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(1,10.84678);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(2,10.13637);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(3,10.39545);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(4,10.7061);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(5,11.05166);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(6,10.96946);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(7,10.65702);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(8,10.45651);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(9,10.09448);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(10,9.660716);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(11,8.998871);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(12,8.817025);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(13,8.359216);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(14,8.030615);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(15,8.1574);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(16,7.434155);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(17,7.325927);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(18,7.382683);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(19,6.678052);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetBinError(20,6.425865);
   ChargedHiggs_HplusTBHplusToTB_M_800__249->SetEntries(250.0168);
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
   117028.4,
   43112.43,
   31830.46,
   25457.39,
   21990.8,
   17615.3,
   13910.63,
   12122.71,
   9991.912,
   8220.328,
   6407.197,
   5398.353,
   4438.793,
   4396.664,
   3455.886,
   2878.69,
   2915.328,
   3457.44,
   2996.486,
   2706.926};
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
   1263.886,
   743.4456,
   635.2026,
   563.4163,
   527.4222,
   476.8949,
   426.7629,
   404.6363,
   363.302,
   336.5464,
   291.9086,
   270.1137,
   243.5064,
   246.2092,
   218.122,
   196.1325,
   193.7419,
   217.0707,
   195.0085,
   189.8957};
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
   1263.886,
   743.4456,
   635.2026,
   563.4163,
   527.4222,
   476.8949,
   426.7629,
   404.6363,
   363.302,
   336.5464,
   291.9086,
   270.1137,
   243.5064,
   246.2092,
   218.122,
   196.1325,
   193.7419,
   217.0707,
   195.0085,
   189.8957};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMinimum(2265.327);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors313631403144->SetMaximum(129869.8);
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
   Data__250->SetBinContent(1,107740);
   Data__250->SetBinContent(2,43260);
   Data__250->SetBinContent(3,31740);
   Data__250->SetBinContent(4,27500);
   Data__250->SetBinContent(5,20900);
   Data__250->SetBinContent(6,17880);
   Data__250->SetBinContent(7,13500);
   Data__250->SetBinContent(8,11940);
   Data__250->SetBinContent(9,9680);
   Data__250->SetBinContent(10,8020);
   Data__250->SetBinContent(11,6560);
   Data__250->SetBinContent(12,6060);
   Data__250->SetBinContent(13,5180);
   Data__250->SetBinContent(14,4180);
   Data__250->SetBinContent(15,3500);
   Data__250->SetBinContent(16,3520);
   Data__250->SetBinContent(17,3040);
   Data__250->SetBinContent(18,3620);
   Data__250->SetBinContent(19,3320);
   Data__250->SetBinContent(20,2500);
   Data__250->SetBinError(1,1467.924);
   Data__250->SetBinError(2,930.1613);
   Data__250->SetBinError(3,796.7434);
   Data__250->SetBinError(4,741.6198);
   Data__250->SetBinError(5,646.5292);
   Data__250->SetBinError(6,597.9967);
   Data__250->SetBinError(7,519.6152);
   Data__250->SetBinError(8,488.6717);
   Data__250->SetBinError(9,440);
   Data__250->SetBinError(10,400.4997);
   Data__250->SetBinError(11,362.2154);
   Data__250->SetBinError(12,348.1379);
   Data__250->SetBinError(13,321.8695);
   Data__250->SetBinError(14,289.1366);
   Data__250->SetBinError(15,264.5751);
   Data__250->SetBinError(16,265.33);
   Data__250->SetBinError(17,246.5766);
   Data__250->SetBinError(18,269.0725);
   Data__250->SetBinError(19,257.682);
   Data__250->SetBinError(20,223.6068);
   Data__250->SetEntries(16682);
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
   hframe_copy__251->SetMaximum(828045.9);
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
   hframe_copy__252->SetMaximum(828045.9);
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
   MVAOutputM1250_1->Modified();
   MVAOutputM1250->cd();
   MVAOutputM1250->Modified();
   MVAOutputM1250->cd();
   MVAOutputM1250->SetSelected(MVAOutputM1250);
}
