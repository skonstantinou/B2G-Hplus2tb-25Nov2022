void MVAOutputM3000()
{
//=========Macro generated from canvas: MVAOutputM3000/MVAOutputM3000
//=========  (Fri Nov 18 13:27:27 2022) by ROOT version 6.20/02
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
   0.01352962,
   0.03528021,
   0.04465928,
   0.05647958,
   0.05941054,
   0.06869784,
   0.07646643,
   0.08077216,
   0.08658629,
   0.09121622,
   0.09503763,
   0.1000648,
   0.1201436,
   0.1122562,
   0.1347241,
   0.1239862,
   0.1450995,
   0.145564,
   0.1624571,
   0.3267346};
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
   0.01352962,
   0.03528021,
   0.04465928,
   0.05647958,
   0.05941054,
   0.06869784,
   0.07646643,
   0.08077216,
   0.08658629,
   0.09121622,
   0.09503763,
   0.1000648,
   0.1201436,
   0.1122562,
   0.1347241,
   0.1239862,
   0.1450995,
   0.145564,
   0.1624571,
   0.3267346};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3201,BackgroundStatSystError_fy3201,BackgroundStatSystError_felx3201,BackgroundStatSystError_fehx3201,BackgroundStatSystError_fely3201,BackgroundStatSystError_fehy3201);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1260;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError319331973201 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError319331973201","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMinimum(0.6079185);
   Graph_Graph_Graph_BackgroundStatSystError319331973201->SetMaximum(1.392081);
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
   0.01352962,
   0.03528021,
   0.04465928,
   0.05647958,
   0.05941054,
   0.06869784,
   0.07646643,
   0.08077216,
   0.08658629,
   0.09121622,
   0.09503763,
   0.1000648,
   0.1201436,
   0.1122562,
   0.1347241,
   0.1239862,
   0.1450995,
   0.145564,
   0.1624571,
   0.3267346};
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
   0.01352962,
   0.03528021,
   0.04465928,
   0.05647958,
   0.05941054,
   0.06869784,
   0.07646643,
   0.08077216,
   0.08658629,
   0.09121622,
   0.09503763,
   0.1000648,
   0.1201436,
   0.1122562,
   0.1347241,
   0.1239862,
   0.1450995,
   0.145564,
   0.1624571,
   0.3267346};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3202,BackgroundStatError_fy3202,BackgroundStatError_felx3202,BackgroundStatError_fehx3202,BackgroundStatError_fely3202,BackgroundStatError_fehy3202);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1259;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError319431983202 = new TH1F("Graph_Graph_Graph_BackgroundStatError319431983202","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMinimum(0.6079185);
   Graph_Graph_Graph_BackgroundStatError319431983202->SetMaximum(1.392081);
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
   
   Double_t Graph1_fx3203[7] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325};
   Double_t Graph1_fy3203[7] = {
   1.020664,
   1.006131,
   1.083982,
   1.233527,
   1.058157,
   1.104033,
   0.1309593};
   Double_t Graph1_felx3203[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3203[7] = {
   0.01471822,
   0.03833053,
   0.05000037,
   0.06831873,
   0.06575066,
   0.07826286,
   0.03004412};
   Double_t Graph1_fehx3203[7] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3203[7] = {
   0.01471822,
   0.03833053,
   0.05000037,
   0.06831873,
   0.06575066,
   0.07826286,
   0.03004412};
   grae = new TGraphAsymmErrors(7,Graph1_fx3203,Graph1_fy3203,Graph1_felx3203,Graph1_fehx3203,Graph1_fely3203,Graph1_fehy3203);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1319531993203 = new TH1F("Graph_Graph_Graph_Graph1319531993203","Graph",100,0,0.385);
   Graph_Graph_Graph_Graph1319531993203->SetMinimum(0.09082366);
   Graph_Graph_Graph_Graph1319531993203->SetMaximum(1.421939);
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
   MVAOutputM3000_1->Range(-0.204557,-2.170178,1.073924,6.338716);
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
   hframe__353->SetMaximum(673260);
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
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMinimum(2.706946);
   StackedMCstackHist_stack_49_stack_50_stack_51->SetMaximum(170754.7);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,2436.802);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,382.2492);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,241.2548);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,146.1813);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,161.8954);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,154.3282);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,101.3042);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,69.68762);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,72.83211);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,58.43888);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,53.03457);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,47.81739);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,41.93184);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,52.01228);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,42.70423);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,37.67787);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,30.1122);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,23.0783);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,14.96316);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,13.69651);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,85.7002);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,32.91757);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,26.77891);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,23.59041);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,21.18703);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,22.55203);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,15.95302);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,13.05145);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,13.85522);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,11.79601);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,11.55878);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,11.54706);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,11.35204);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,12.32409);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,11.02864);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,8.261247);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,10.22345);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,7.887039);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,4.468027);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,4.582736);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1414.932);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,32377.91);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4605.625);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,2658.179);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,1872.872);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1461.645);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1130.594);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,988.0579);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,843.7053);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,705.9871);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,668.2529);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,578.3795);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,531.755);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,463.7488);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,453.5897);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,407.4996);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,358.7403);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,325.5019);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,245.4687);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,175.349);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,64.97516);
   TT_stack_2_stack_2_stack_2->SetBinError(1,203.5394);
   TT_stack_2_stack_2_stack_2->SetBinError(2,76.40662);
   TT_stack_2_stack_2_stack_2->SetBinError(3,58.08589);
   TT_stack_2_stack_2_stack_2->SetBinError(4,48.66487);
   TT_stack_2_stack_2_stack_2->SetBinError(5,43.11952);
   TT_stack_2_stack_2_stack_2->SetBinError(6,37.68746);
   TT_stack_2_stack_2_stack_2->SetBinError(7,34.97729);
   TT_stack_2_stack_2_stack_2->SetBinError(8,32.79879);
   TT_stack_2_stack_2_stack_2->SetBinError(9,30.05109);
   TT_stack_2_stack_2_stack_2->SetBinError(10,28.99884);
   TT_stack_2_stack_2_stack_2->SetBinError(11,27.0903);
   TT_stack_2_stack_2_stack_2->SetBinError(12,25.83572);
   TT_stack_2_stack_2_stack_2->SetBinError(13,23.71063);
   TT_stack_2_stack_2_stack_2->SetBinError(14,24.16606);
   TT_stack_2_stack_2_stack_2->SetBinError(15,22.62082);
   TT_stack_2_stack_2_stack_2->SetBinError(16,21.30386);
   TT_stack_2_stack_2_stack_2->SetBinError(17,20.2634);
   TT_stack_2_stack_2_stack_2->SetBinError(18,17.24612);
   TT_stack_2_stack_2_stack_2->SetBinError(19,14.55703);
   TT_stack_2_stack_2_stack_2->SetBinError(20,8.961381);
   TT_stack_2_stack_2_stack_2->SetEntries(39982.08);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,59418.07);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,8708.161);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5772.295);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,3266.604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,3271.765);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,2320.041);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,1812.303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,1609.558);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,1501.444);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,1332.281);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,1179.299);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1118.357);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,631.0618);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,829.2604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,509.253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,663.826);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,408.2342);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,529.8133);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,422.8838);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,65.28986);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1255.661);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,475.9828);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,381.9548);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,293.5922);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,286.837);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,243.7276);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,218.5242);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,200.7035);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,194.6467);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,185.1842);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,169.5466);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,167.5297);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,134.0185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,147.3707);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,126.7884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,129.4546);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,108.4852);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,114.6547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,98.44734);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,45.9477);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3633.413);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(1,988.2849);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(2,347.9783);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(3,311.998);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(4,248.3984);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(5,241.0133);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(6,219.937);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(7,153.103);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(8,115.0676);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(9,140.2746);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(10,132.4748);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(11,118.6288);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(12,108.0574);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(13,93.02957);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(14,93.9938);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(15,92.56542);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(16,82.91405);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(17,47.02291);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(18,49.62492);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(19,33.39387);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinContent(20,3.771476);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(1,44.89053);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(2,25.9585);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(3,23.70079);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(4,21.55524);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(5,20.14296);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(6,19.03751);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(7,17.53191);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(8,16.33031);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(9,16.26609);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(10,16.05221);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(11,15.01781);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(12,15.14823);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(13,14.64483);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(14,14.14395);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(15,13.20262);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(16,12.66168);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(17,11.58236);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(18,9.983251);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(19,7.39187);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetBinError(20,3.937865);
   ChargedHiggs_HplusTBHplusToTB_M_800__354->SetEntries(1850.394);
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
   94232.78,
   13696.03,
   8671.729,
   5285.657,
   4895.305,
   3604.963,
   2901.665,
   2522.951,
   2280.263,
   2058.973,
   1810.713,
   1697.929,
   1136.743,
   1334.862,
   959.4568,
   1060.244,
   763.8483,
   798.3604,
   613.1959,
   143.9615};
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
   1274.934,
   483.1989,
   387.2732,
   298.5317,
   290.8327,
   247.6532,
   221.88,
   203.7842,
   197.4395,
   187.8118,
   172.0858,
   169.903,
   136.5724,
   149.8466,
   129.2619,
   131.4557,
   110.834,
   116.2125,
   99.61801,
   47.03721};
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
   1274.934,
   483.1989,
   387.2732,
   298.5317,
   290.8327,
   247.6532,
   221.88,
   203.7842,
   197.4395,
   187.8118,
   172.0858,
   169.903,
   136.5724,
   149.8466,
   129.2619,
   131.4557,
   110.834,
   116.2125,
   99.61801,
   47.03721};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3204,BkgSum-SR-Inclusive_sum_errors_fy3204,BkgSum-SR-Inclusive_sum_errors_felx3204,BkgSum-SR-Inclusive_sum_errors_fehx3204,BkgSum-SR-Inclusive_sum_errors_fely3204,BkgSum-SR-Inclusive_sum_errors_fehy3204);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMinimum(87.23189);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors319632003204->SetMaximum(105048.8);
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
   Data__355->SetBinContent(1,96180);
   Data__355->SetBinContent(2,13780);
   Data__355->SetBinContent(3,9400);
   Data__355->SetBinContent(4,6520);
   Data__355->SetBinContent(5,5180);
   Data__355->SetBinContent(6,3980);
   Data__355->SetBinContent(7,380);
   Data__355->SetBinError(1,1386.939);
   Data__355->SetBinError(2,524.9762);
   Data__355->SetBinError(3,433.5897);
   Data__355->SetBinError(4,361.1094);
   Data__355->SetBinError(5,321.8695);
   Data__355->SetBinError(6,282.1347);
   Data__355->SetBinError(7,87.17798);
   Data__355->SetEntries(6771);
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

   ci = 1258;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1258;
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
   hframe_copy__356->SetMaximum(673260);
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
   hframe_copy__357->SetMaximum(673260);
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
