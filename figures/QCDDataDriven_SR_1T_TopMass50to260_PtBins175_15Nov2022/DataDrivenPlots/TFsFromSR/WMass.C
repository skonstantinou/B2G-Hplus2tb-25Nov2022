void WMass()
{
//=========Macro generated from canvas: WMass/WMass
//=========  (Fri Nov 18 13:28:41 2022) by ROOT version 6.20/02
   TCanvas *WMass = new TCanvas("WMass", "WMass",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   WMass->SetHighLightColor(2);
   WMass->Range(0,0,1,1);
   WMass->SetFillColor(0);
   WMass->SetBorderMode(0);
   WMass->SetBorderSize(2);
   WMass->SetTickx(1);
   WMass->SetTicky(1);
   WMass->SetLeftMargin(0.16);
   WMass->SetRightMargin(0.05);
   WMass->SetTopMargin(0.06);
   WMass->SetBottomMargin(0.13);
   WMass->SetFrameFillStyle(0);
   WMass->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: WMass_2
   TPad *WMass_2 = new TPad("WMass_2", "WMass_2",0,0,1,0.304);
   WMass_2->Draw();
   WMass_2->cd();
   WMass_2->Range(3.670887,-0.428,168.2278,1.7);
   WMass_2->SetFillColor(0);
   WMass_2->SetFillStyle(4000);
   WMass_2->SetBorderMode(0);
   WMass_2->SetBorderSize(2);
   WMass_2->SetTickx(1);
   WMass_2->SetTicky(1);
   WMass_2->SetLeftMargin(0.16);
   WMass_2->SetRightMargin(0.05);
   WMass_2->SetTopMargin(0);
   WMass_2->SetBottomMargin(0.3421053);
   WMass_2->SetFrameFillStyle(0);
   WMass_2->SetFrameBorderMode(0);
   WMass_2->SetFrameFillStyle(0);
   WMass_2->SetFrameBorderMode(0);
   
   TH1F *hframe__897 = new TH1F("hframe__897","",1000,30,160);
   hframe__897->SetMinimum(0.3);
   hframe__897->SetMaximum(1.7);
   hframe__897->SetDirectory(0);
   hframe__897->SetStats(0);
   hframe__897->SetLineStyle(0);
   hframe__897->SetMarkerStyle(20);
   hframe__897->GetXaxis()->SetTitle("m_{W} (GeV)");
   hframe__897->GetXaxis()->SetNdivisions(8);
   hframe__897->GetXaxis()->SetLabelFont(43);
   hframe__897->GetXaxis()->SetLabelOffset(0.007);
   hframe__897->GetXaxis()->SetLabelSize(27);
   hframe__897->GetXaxis()->SetTitleSize(33);
   hframe__897->GetXaxis()->SetTitleOffset(2.960526);
   hframe__897->GetXaxis()->SetTitleFont(43);
   hframe__897->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__897->GetYaxis()->SetNdivisions(505);
   hframe__897->GetYaxis()->SetLabelFont(43);
   hframe__897->GetYaxis()->SetLabelOffset(0.007);
   hframe__897->GetYaxis()->SetLabelSize(21);
   hframe__897->GetYaxis()->SetTitleSize(33);
   hframe__897->GetYaxis()->SetTitleOffset(1.5625);
   hframe__897->GetYaxis()->SetTitleFont(43);
   hframe__897->GetZaxis()->SetLabelFont(43);
   hframe__897->GetZaxis()->SetLabelOffset(0.007);
   hframe__897->GetZaxis()->SetLabelSize(27);
   hframe__897->GetZaxis()->SetTitleSize(33);
   hframe__897->GetZaxis()->SetTitleOffset(1);
   hframe__897->GetZaxis()->SetTitleFont(43);
   hframe__897->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3553[11] = {
   35,
   45,
   55,
   62.5,
   72.5,
   82.5,
   92.5,
   105,
   115,
   130,
   150};
   Double_t BackgroundStatSystError_fy3553[11] = {
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
   Double_t BackgroundStatSystError_felx3553[11] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BackgroundStatSystError_fely3553[11] = {
   0.9927365,
   0.142163,
   0.04611815,
   0.02514101,
   0.02031547,
   0.02045662,
   0.0272058,
   0.04931755,
   0.1086037,
   0.2290763,
   0.9764244};
   Double_t BackgroundStatSystError_fehx3553[11] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BackgroundStatSystError_fehy3553[11] = {
   0.9927365,
   0.142163,
   0.04611815,
   0.02514101,
   0.02031547,
   0.02045662,
   0.0272058,
   0.04931755,
   0.1086037,
   0.2290763,
   0.9764244};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,BackgroundStatSystError_fx3553,BackgroundStatSystError_fy3553,BackgroundStatSystError_felx3553,BackgroundStatSystError_fehx3553,BackgroundStatSystError_fely3553,BackgroundStatSystError_fehy3553);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1350;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553 = new TH1F("Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553","Graph",100,17,173);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->SetMinimum(0.006537176);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->SetMaximum(2.191284);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3554[15] = {
   35,
   45,
   55,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   105,
   115,
   130,
   150};
   Double_t BackgroundStatError_fy3554[15] = {
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
   Double_t BackgroundStatError_felx3554[15] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BackgroundStatError_fely3554[15] = {
   0.9927365,
   0.142163,
   0.04611815,
   0.02514101,
   0,
   0.02031547,
   0,
   0.02045662,
   0,
   0.0272058,
   0,
   0.04931755,
   0.1086037,
   0.2290763,
   0.9764244};
   Double_t BackgroundStatError_fehx3554[15] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BackgroundStatError_fehy3554[15] = {
   0.9927365,
   0.142163,
   0.04611815,
   0.02514101,
   0,
   0.02031547,
   0,
   0.02045662,
   0,
   0.0272058,
   0,
   0.04931755,
   0.1086037,
   0.2290763,
   0.9764244};
   grae = new TGraphAsymmErrors(15,BackgroundStatError_fx3554,BackgroundStatError_fy3554,BackgroundStatError_felx3554,BackgroundStatError_fehx3554,BackgroundStatError_fely3554,BackgroundStatError_fehy3554);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1349;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554 = new TH1F("Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554","Graph",100,17,173);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->SetMinimum(0.006537176);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->SetMaximum(2.191284);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554);
   
   grae->Draw("ep ");
   TLine *line = new TLine(80.385,0.3,80.385,1.7);

   ci = 1352;
   color = new TColor(ci, 0, 0, 0, " ", 0.5);
   line->SetLineColor(ci);
   line->SetLineStyle(3);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t BackgroundStatSystError_fx3555[11] = {
   35,
   45,
   55,
   62.5,
   72.5,
   82.5,
   92.5,
   105,
   115,
   130,
   150};
   Double_t BackgroundStatSystError_fy3555[11] = {
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
   Double_t BackgroundStatSystError_felx3555[11] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BackgroundStatSystError_fely3555[11] = {
   0.9927365,
   0.142163,
   0.04611815,
   0.02514101,
   0.02031547,
   0.02045662,
   0.0272058,
   0.04931755,
   0.1086037,
   0.2290763,
   0.9764244};
   Double_t BackgroundStatSystError_fehx3555[11] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BackgroundStatSystError_fehy3555[11] = {
   0.9927365,
   0.142163,
   0.04611815,
   0.02514101,
   0.02031547,
   0.02045662,
   0.0272058,
   0.04931755,
   0.1086037,
   0.2290763,
   0.9764244};
   grae = new TGraphAsymmErrors(11,BackgroundStatSystError_fx3555,BackgroundStatSystError_fy3555,BackgroundStatSystError_felx3555,BackgroundStatSystError_fehx3555,BackgroundStatSystError_fely3555,BackgroundStatSystError_fehy3555);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   ci = 1350;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555","Graph",100,17,173);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->SetMinimum(0.006537176);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->SetMaximum(2.191284);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3556[15] = {
   35,
   45,
   55,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   105,
   115,
   130,
   150};
   Double_t BackgroundStatError_fy3556[15] = {
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
   Double_t BackgroundStatError_felx3556[15] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BackgroundStatError_fely3556[15] = {
   0.9927365,
   0.142163,
   0.04611815,
   0.02514101,
   0,
   0.02031547,
   0,
   0.02045662,
   0,
   0.0272058,
   0,
   0.04931755,
   0.1086037,
   0.2290763,
   0.9764244};
   Double_t BackgroundStatError_fehx3556[15] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BackgroundStatError_fehy3556[15] = {
   0.9927365,
   0.142163,
   0.04611815,
   0.02514101,
   0,
   0.02031547,
   0,
   0.02045662,
   0,
   0.0272058,
   0,
   0.04931755,
   0.1086037,
   0.2290763,
   0.9764244};
   grae = new TGraphAsymmErrors(15,BackgroundStatError_fx3556,BackgroundStatError_fy3556,BackgroundStatError_felx3556,BackgroundStatError_fehx3556,BackgroundStatError_fely3556,BackgroundStatError_fehy3556);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1349;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556","Graph",100,17,173);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->SetMinimum(0.006537176);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->SetMaximum(2.191284);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx3557[10] = {
   45,
   55,
   62.5,
   72.5,
   82.5,
   92.5,
   105,
   115,
   130,
   150};
   Double_t Graph0_fy3557[10] = {
   0.9960471,
   1.134775,
   1.040926,
   1.063004,
   1.051602,
   0.9777446,
   0.9933761,
   0.9703555,
   0.9059181,
   0.9842246};
   Double_t Graph0_felx3557[10] = {
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t Graph0_fely3557[10] = {
   0.1484819,
   0.05158069,
   0.0271126,
   0.022561,
   0.02299167,
   0.02941334,
   0.05411265,
   0.1168171,
   0.2421168,
   0.9842246};
   Double_t Graph0_fehx3557[10] = {
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t Graph0_fehy3557[10] = {
   0.1484819,
   0.05158069,
   0.0271126,
   0.022561,
   0.02299167,
   0.02941334,
   0.05411265,
   0.1168171,
   0.2421168,
   0.9842246};
   grae = new TGraphAsymmErrors(10,Graph0_fx3557,Graph0_fy3557,Graph0_felx3557,Graph0_fehx3557,Graph0_fely3557,Graph0_fehy3557);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph0354535513557 = new TH1F("Graph_Graph_Graph_Graph0354535513557","Graph",100,28,172);
   Graph_Graph_Graph_Graph0354535513557->SetMinimum(1.319948e-08);
   Graph_Graph_Graph_Graph0354535513557->SetMaximum(2.165294);
   Graph_Graph_Graph_Graph0354535513557->SetDirectory(0);
   Graph_Graph_Graph_Graph0354535513557->SetStats(0);
   Graph_Graph_Graph_Graph0354535513557->SetLineStyle(0);
   Graph_Graph_Graph_Graph0354535513557->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0354535513557->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0354535513557->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0354535513557->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0354535513557->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0354535513557->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0354535513557->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0354535513557->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0354535513557->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph0354535513557->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0354535513557->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0354535513557->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0354535513557->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0354535513557->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0354535513557->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0354535513557->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0354535513557->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0354535513557->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0354535513557->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0354535513557->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0354535513557->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph0354535513557);
   
   grae->Draw("ep ");
   
   Double_t Graph1_fx129[2] = {
   30,
   160};
   Double_t Graph1_fy129[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph1_fx129,Graph1_fy129);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph1127128129 = new TH1F("Graph_Graph_Graph_Graph1127128129","Graph",100,17,173);
   Graph_Graph_Graph_Graph1127128129->SetMinimum(0.9);
   Graph_Graph_Graph_Graph1127128129->SetMaximum(2.1);
   Graph_Graph_Graph_Graph1127128129->SetDirectory(0);
   Graph_Graph_Graph_Graph1127128129->SetStats(0);
   Graph_Graph_Graph_Graph1127128129->SetLineStyle(0);
   Graph_Graph_Graph_Graph1127128129->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1127128129->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1127128129->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1127128129->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1127128129->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1127128129->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1127128129->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1127128129->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1127128129->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1127128129->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1127128129->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1127128129->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1127128129->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1127128129->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1127128129->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1127128129->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1127128129->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1127128129->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1127128129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1127128129->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph1127128129);
   
   graph->Draw("l");
   
   TH1F *hframe_copy__898 = new TH1F("hframe_copy__898","",1000,30,160);
   hframe_copy__898->SetMinimum(0.3);
   hframe_copy__898->SetMaximum(1.7);
   hframe_copy__898->SetDirectory(0);
   hframe_copy__898->SetStats(0);
   hframe_copy__898->SetLineStyle(0);
   hframe_copy__898->SetMarkerStyle(20);
   hframe_copy__898->GetXaxis()->SetTitle("m_{W} (GeV)");
   hframe_copy__898->GetXaxis()->SetNdivisions(8);
   hframe_copy__898->GetXaxis()->SetLabelFont(43);
   hframe_copy__898->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__898->GetXaxis()->SetLabelSize(27);
   hframe_copy__898->GetXaxis()->SetTitleSize(33);
   hframe_copy__898->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__898->GetXaxis()->SetTitleFont(43);
   hframe_copy__898->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__898->GetYaxis()->SetNdivisions(505);
   hframe_copy__898->GetYaxis()->SetLabelFont(43);
   hframe_copy__898->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__898->GetYaxis()->SetLabelSize(21);
   hframe_copy__898->GetYaxis()->SetTitleSize(33);
   hframe_copy__898->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__898->GetYaxis()->SetTitleFont(43);
   hframe_copy__898->GetZaxis()->SetLabelFont(43);
   hframe_copy__898->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__898->GetZaxis()->SetLabelSize(27);
   hframe_copy__898->GetZaxis()->SetTitleSize(33);
   hframe_copy__898->GetZaxis()->SetTitleOffset(1);
   hframe_copy__898->GetZaxis()->SetTitleFont(43);
   hframe_copy__898->Draw("sameaxis");
   WMass_2->Modified();
   WMass->cd();
  
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
   WMass->cd();
  
// ------------>Primitives in pad: WMass_1
   TPad *WMass_1 = new TPad("WMass_1", "WMass_1",0,0.2897959,1,1);
   WMass_1->Draw();
   WMass_1->cd();
   WMass_1->Range(3.670887,-2.119402,168.2278,3.850686);
   WMass_1->SetFillColor(0);
   WMass_1->SetFillStyle(4000);
   WMass_1->SetBorderMode(0);
   WMass_1->SetBorderSize(2);
   WMass_1->SetLogy();
   WMass_1->SetTickx(1);
   WMass_1->SetTicky(1);
   WMass_1->SetLeftMargin(0.16);
   WMass_1->SetRightMargin(0.05);
   WMass_1->SetTopMargin(0.06);
   WMass_1->SetBottomMargin(0.02);
   WMass_1->SetFrameFillStyle(0);
   WMass_1->SetFrameBorderMode(0);
   WMass_1->SetFrameFillStyle(0);
   WMass_1->SetFrameBorderMode(0);
   
   TH1F *hframe__899 = new TH1F("hframe__899","",1000,30,160);
   hframe__899->SetMinimum(0.01);
   hframe__899->SetMaximum(3108);
   hframe__899->SetDirectory(0);
   hframe__899->SetStats(0);
   hframe__899->SetLineStyle(0);
   hframe__899->SetMarkerStyle(20);
   hframe__899->GetXaxis()->SetNdivisions(8);
   hframe__899->GetXaxis()->SetLabelFont(43);
   hframe__899->GetXaxis()->SetLabelOffset(0.007);
   hframe__899->GetXaxis()->SetLabelSize(0);
   hframe__899->GetXaxis()->SetTitleSize(0);
   hframe__899->GetXaxis()->SetTitleOffset(0.9);
   hframe__899->GetXaxis()->SetTitleFont(43);
   hframe__899->GetYaxis()->SetTitle("< Events / 5-20 GeV >");
   hframe__899->GetYaxis()->SetLabelFont(43);
   hframe__899->GetYaxis()->SetLabelOffset(0.007);
   hframe__899->GetYaxis()->SetLabelSize(27);
   hframe__899->GetYaxis()->SetTitleSize(33);
   hframe__899->GetYaxis()->SetTitleOffset(1.5625);
   hframe__899->GetYaxis()->SetTitleFont(43);
   hframe__899->GetZaxis()->SetLabelFont(43);
   hframe__899->GetZaxis()->SetLabelOffset(0.007);
   hframe__899->GetZaxis()->SetLabelSize(27);
   hframe__899->GetZaxis()->SetTitleSize(33);
   hframe__899->GetZaxis()->SetTitleOffset(1);
   hframe__899->GetZaxis()->SetTitleFont(43);
   hframe__899->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis463[16] = {30, 40, 50, 60, 65, 70, 75, 80, 85, 90, 95, 100, 110, 120, 140, 160}; 
   
   TH1F *StackedMCstackHist_stack_127_stack_128_stack_129 = new TH1F("StackedMCstackHist_stack_127_stack_128_stack_129","StackedMCstackHist",15, xAxis463);
   StackedMCstackHist_stack_127_stack_128_stack_129->SetMinimum(0.1670737);
   StackedMCstackHist_stack_127_stack_128_stack_129->SetMaximum(668.295);
   StackedMCstackHist_stack_127_stack_128_stack_129->SetDirectory(0);
   StackedMCstackHist_stack_127_stack_128_stack_129->SetStats(0);
   StackedMCstackHist_stack_127_stack_128_stack_129->SetLineStyle(0);
   StackedMCstackHist_stack_127_stack_128_stack_129->SetMarkerStyle(20);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_127_stack_128_stack_129->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_127_stack_128_stack_129);
   
   Double_t xAxis464[16] = {30, 40, 50, 60, 65, 70, 75, 80, 85, 90, 95, 100, 110, 120, 140, 160}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_WMassInclusive",15, xAxis464);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.0008915635);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.0516302);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.8028102);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,5.141063);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,11.54969);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,14.07889);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,7.056614);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.8360195);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.2212047);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.03976855);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.002393316);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.0003939881);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.03009502);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.1069933);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.3958142);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.5809837);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.627632);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.4682191);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.1221645);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.06521403);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.01244218);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.00222974);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1389.335);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,50);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis465[16] = {30, 40, 50, 60, 65, 70, 75, 80, 85, 90, 95, 100, 110, 120, 140, 160}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_WMassInclusive",15, xAxis465);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.7462439);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,8.583068);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,65.25121);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,142.779);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,168.6499);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,87.38259);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,11.19235);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1.720877);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.1550912);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.002534327);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.07031299);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.2356873);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.9151639);
   TT_stack_2_stack_2_stack_2->SetBinError(6,1.344224);
   TT_stack_2_stack_2_stack_2->SetBinError(8,1.460856);
   TT_stack_2_stack_2_stack_2->SetBinError(10,1.056207);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.2715901);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.1060768);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.02264459);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.002534327);
   TT_stack_2_stack_2_stack_2->SetEntries(39178.77);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,50);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis466[16] = {30, 40, 50, 60, 65, 70, 75, 80, 85, 90, 95, 100, 110, 120, 140, 160}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_WMassInclusive",15, xAxis466);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,0.09867814);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,3.719985);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,33.26574);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,212.8171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,263.3557);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,215.1403);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,131.5912);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,21.89635);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,5.168715);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,0.577837);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,0.04587377);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.0988457);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.6377023);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,1.949909);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,7.050008);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,8.358137);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,7.982246);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,6.03983);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,1.646367);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.7621537);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.1751106);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.04948875);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3466.658);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,50);
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
   Double_t xAxis467[16] = {30, 40, 50, 60, 65, 70, 75, 80, 85, 90, 95, 100, 110, 120, 140, 160}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__900 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__900","h_SR_WMassInclusive",15, xAxis467);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(2,0.05605793);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(3,0.4938108);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(4,4.314683);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(6,9.094531);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(8,12.67895);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(10,6.427166);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(12,0.9783565);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(13,0.2470399);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(14,0.03935406);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(15,-0.001989406);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(2,0.02457064);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(3,0.07465719);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(4,0.2902366);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(6,0.4228859);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(8,0.4847927);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(10,0.3647198);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(12,0.1007626);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(13,0.04877045);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(14,0.01286158);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(15,0.003512056);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetEntries(1812.933);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->GetXaxis()->SetRange(1,50);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3558[15] = {
   35,
   45,
   55,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   105,
   115,
   130,
   150};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3558[15] = {
   0.09956971,
   4.517859,
   42.65162,
   283.2094,
   0,
   417.6844,
   0,
   397.8692,
   0,
   226.0304,
   0,
   33.92471,
   7.110796,
   0.7726967,
   0.05080141};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3558[15] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3558[15] = {
   0.09884648,
   0.6422724,
   1.967014,
   7.120169,
   0,
   8.485455,
   0,
   8.139058,
   0,
   6.149337,
   0,
   1.673084,
   0.7722587,
   0.1770065,
   0.04960374};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3558[15] = {
   5,
   5,
   5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   5,
   5,
   10,
   10};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3558[15] = {
   0.09884648,
   0.6422724,
   1.967014,
   7.120169,
   0,
   8.485455,
   0,
   8.139058,
   0,
   6.149337,
   0,
   1.673084,
   0.7722587,
   0.1770065,
   0.04960374};
   grae = new TGraphAsymmErrors(15,BkgSum-SR-Inclusive_sum_errors_fx3558,BkgSum-SR-Inclusive_sum_errors_fy3558,BkgSum-SR-Inclusive_sum_errors_felx3558,BkgSum-SR-Inclusive_sum_errors_fehx3558,BkgSum-SR-Inclusive_sum_errors_fely3558,BkgSum-SR-Inclusive_sum_errors_fehy3558);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1348;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558","Graph",100,17,173);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->SetMinimum(0.4687868);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->SetMaximum(468.7868);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors354635523558);
   
   grae->Draw("e2 ");
   Double_t xAxis468[16] = {30, 40, 50, 60, 65, 70, 75, 80, 85, 90, 95, 100, 110, 120, 140, 160}; 
   
   TH1F *Data__901 = new TH1F("Data__901","h_SR_WMassInclusive",15, xAxis468);
   Data__901->SetBinContent(2,4.5);
   Data__901->SetBinContent(3,48.4);
   Data__901->SetBinContent(4,294.8);
   Data__901->SetBinContent(6,444);
   Data__901->SetBinContent(8,418.4);
   Data__901->SetBinContent(10,221);
   Data__901->SetBinContent(12,33.7);
   Data__901->SetBinContent(13,6.9);
   Data__901->SetBinContent(14,0.7);
   Data__901->SetBinContent(15,0.05);
   Data__901->SetBinError(2,0.6708204);
   Data__901->SetBinError(3,2.2);
   Data__901->SetBinError(4,7.678542);
   Data__901->SetBinError(6,9.423375);
   Data__901->SetBinError(8,9.147677);
   Data__901->SetBinError(10,6.648308);
   Data__901->SetBinError(12,1.835756);
   Data__901->SetBinError(13,0.8306624);
   Data__901->SetBinError(14,0.1870829);
   Data__901->SetBinError(15,0.05);
   Data__901->SetEntries(7606.666);
   Data__901->SetDirectory(0);
   Data__901->SetFillStyle(3001);
   Data__901->SetLineWidth(2);
   Data__901->SetMarkerStyle(20);
   Data__901->SetMarkerSize(1.2);
   Data__901->GetXaxis()->SetRange(1,50);
   Data__901->GetXaxis()->SetLabelFont(42);
   Data__901->GetXaxis()->SetTitleOffset(1);
   Data__901->GetXaxis()->SetTitleFont(42);
   Data__901->GetYaxis()->SetLabelFont(42);
   Data__901->GetYaxis()->SetTitleFont(42);
   Data__901->GetZaxis()->SetLabelFont(42);
   Data__901->GetZaxis()->SetTitleOffset(1);
   Data__901->GetZaxis()->SetTitleFont(42);
   Data__901->Draw("EP same");
   line = new TLine(80.385,0.01,80.385,3108);

   ci = 1351;
   color = new TColor(ci, 0, 0, 0, " ", 0.5);
   line->SetLineColor(ci);
   line->SetLineStyle(3);
   line->SetLineWidth(2);
   line->Draw();
   
   TLegend *leg = new TLegend(0.65,0.51,0.85,0.91,NULL,"brNDC");
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

   ci = 1348;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1348;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__902 = new TH1F("hframe_copy__902","",1000,30,160);
   hframe_copy__902->SetMinimum(0.01);
   hframe_copy__902->SetMaximum(3108);
   hframe_copy__902->SetDirectory(0);
   hframe_copy__902->SetStats(0);
   hframe_copy__902->SetLineStyle(0);
   hframe_copy__902->SetMarkerStyle(20);
   hframe_copy__902->GetXaxis()->SetNdivisions(8);
   hframe_copy__902->GetXaxis()->SetLabelFont(43);
   hframe_copy__902->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__902->GetXaxis()->SetLabelSize(0);
   hframe_copy__902->GetXaxis()->SetTitleSize(0);
   hframe_copy__902->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__902->GetXaxis()->SetTitleFont(43);
   hframe_copy__902->GetYaxis()->SetTitle("< Events / 5-20 GeV >");
   hframe_copy__902->GetYaxis()->SetLabelFont(43);
   hframe_copy__902->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__902->GetYaxis()->SetLabelSize(27);
   hframe_copy__902->GetYaxis()->SetTitleSize(33);
   hframe_copy__902->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__902->GetYaxis()->SetTitleFont(43);
   hframe_copy__902->GetZaxis()->SetLabelFont(43);
   hframe_copy__902->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__902->GetZaxis()->SetLabelSize(27);
   hframe_copy__902->GetZaxis()->SetTitleSize(33);
   hframe_copy__902->GetZaxis()->SetTitleOffset(1);
   hframe_copy__902->GetZaxis()->SetTitleFont(43);
   hframe_copy__902->Draw("sameaxis");
   
   TH1F *hframe_copy__903 = new TH1F("hframe_copy__903","",1000,30,160);
   hframe_copy__903->SetMinimum(0.01);
   hframe_copy__903->SetMaximum(3108);
   hframe_copy__903->SetDirectory(0);
   hframe_copy__903->SetStats(0);
   hframe_copy__903->SetLineStyle(0);
   hframe_copy__903->SetMarkerStyle(20);
   hframe_copy__903->GetXaxis()->SetNdivisions(8);
   hframe_copy__903->GetXaxis()->SetLabelFont(43);
   hframe_copy__903->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__903->GetXaxis()->SetLabelSize(0);
   hframe_copy__903->GetXaxis()->SetTitleSize(0);
   hframe_copy__903->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__903->GetXaxis()->SetTitleFont(43);
   hframe_copy__903->GetYaxis()->SetTitle("< Events / 5-20 GeV >");
   hframe_copy__903->GetYaxis()->SetLabelFont(43);
   hframe_copy__903->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__903->GetYaxis()->SetLabelSize(27);
   hframe_copy__903->GetYaxis()->SetTitleSize(33);
   hframe_copy__903->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__903->GetYaxis()->SetTitleFont(43);
   hframe_copy__903->GetZaxis()->SetLabelFont(43);
   hframe_copy__903->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__903->GetZaxis()->SetLabelSize(27);
   hframe_copy__903->GetZaxis()->SetTitleSize(33);
   hframe_copy__903->GetZaxis()->SetTitleOffset(1);
   hframe_copy__903->GetZaxis()->SetTitleFont(43);
   hframe_copy__903->Draw("sameaxis");
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
   WMass_1->Modified();
   WMass->cd();
   WMass->Modified();
   WMass->cd();
   WMass->SetSelected(WMass);
}
