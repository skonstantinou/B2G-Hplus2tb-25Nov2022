void WMass()
{
//=========Macro generated from canvas: WMass/WMass
//=========  (Fri Nov 18 13:29:06 2022) by ROOT version 6.20/02
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
   0.1007751,
   0.05040299,
   0.03675005,
   0.03959963,
   0.04438081,
   0.03861021,
   0.03556851,
   0.04447805,
   0.06747111,
   0.1287257,
   0.6453211};
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
   0.1007751,
   0.05040299,
   0.03675005,
   0.03959963,
   0.04438081,
   0.03861021,
   0.03556851,
   0.04447805,
   0.06747111,
   0.1287257,
   0.6453211};
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
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->SetMinimum(0.2256147);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError35413543354735493553->SetMaximum(1.774385);
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
   0.1007751,
   0.05040299,
   0.03675005,
   0.03959963,
   0,
   0.04438081,
   0,
   0.03861021,
   0,
   0.03556851,
   0,
   0.04447805,
   0.06747111,
   0.1287257,
   0.6453211};
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
   0.1007751,
   0.05040299,
   0.03675005,
   0.03959963,
   0,
   0.04438081,
   0,
   0.03861021,
   0,
   0.03556851,
   0,
   0.04447805,
   0.06747111,
   0.1287257,
   0.6453211};
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
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->SetMinimum(0.2256147);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError35423544354835503554->SetMaximum(1.774385);
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
   0.1007751,
   0.05040299,
   0.03675005,
   0.03959963,
   0.04438081,
   0.03861021,
   0.03556851,
   0.04447805,
   0.06747111,
   0.1287257,
   0.6453211};
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
   0.1007751,
   0.05040299,
   0.03675005,
   0.03959963,
   0.04438081,
   0.03861021,
   0.03556851,
   0.04447805,
   0.06747111,
   0.1287257,
   0.6453211};
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
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->SetMinimum(0.2256147);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError354135433547354935533555->SetMaximum(1.774385);
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
   0.1007751,
   0.05040299,
   0.03675005,
   0.03959963,
   0,
   0.04438081,
   0,
   0.03861021,
   0,
   0.03556851,
   0,
   0.04447805,
   0.06747111,
   0.1287257,
   0.6453211};
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
   0.1007751,
   0.05040299,
   0.03675005,
   0.03959963,
   0,
   0.04438081,
   0,
   0.03861021,
   0,
   0.03556851,
   0,
   0.04447805,
   0.06747111,
   0.1287257,
   0.6453211};
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
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->SetMinimum(0.2256147);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError354235443548355035543556->SetMaximum(1.774385);
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
   
   Double_t Graph0_fx3557[11] = {
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
   Double_t Graph0_fy3557[11] = {
   1.027059,
   1.03236,
   0.941262,
   1.163899,
   1.000388,
   0.9984714,
   0.9674792,
   1.071451,
   0.966678,
   0.9517966,
   1.566367};
   Double_t Graph0_felx3557[11] = {
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
   Double_t Graph0_fely3557[11] = {
   0.07336135,
   0.03686999,
   0.02597635,
   0.03156064,
   0.03291036,
   0.02866852,
   0.02594048,
   0.03398436,
   0.04851618,
   0.0942419,
   0.6394667};
   Double_t Graph0_fehx3557[11] = {
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
   Double_t Graph0_fehy3557[11] = {
   0.07336135,
   0.03686999,
   0.02597635,
   0.03156064,
   0.03291036,
   0.02866852,
   0.02594048,
   0.03398436,
   0.04851618,
   0.0942419,
   0.6394667};
   grae = new TGraphAsymmErrors(11,Graph0_fx3557,Graph0_fy3557,Graph0_felx3557,Graph0_fehx3557,Graph0_fely3557,Graph0_fehy3557);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph0354535513557 = new TH1F("Graph_Graph_Graph_Graph0354535513557","Graph",100,17,173);
   Graph_Graph_Graph_Graph0354535513557->SetMinimum(0.7227267);
   Graph_Graph_Graph_Graph0354535513557->SetMaximum(2.340662);
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
   WMass_1->Range(3.670887,-2.11563,168.2278,3.665883);
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
   hframe__899->SetMaximum(2084.454);
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
   StackedMCstackHist_stack_127_stack_128_stack_129->SetMinimum(0.1150206);
   StackedMCstackHist_stack_127_stack_128_stack_129->SetMaximum(460.0823);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.161213);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,1.119892);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,1.473418);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,3.207392);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,2.288847);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,3.629075);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,4.284273);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.511915);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.319262);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.06786035);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,8.876418e-05);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.05750653);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.2935031);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.210524);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.4311001);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.2814359);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.3948961);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.4943077);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.2187737);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.07524687);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.02286548);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.0002732594);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(382.44);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1.875808);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,7.216957);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,16.49825);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,36.70911);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,30.99258);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,43.17138);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,58.61202);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,17.9308);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,6.595176);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.8602428);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.02832388);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.1067546);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.2107983);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.3177208);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.6736335);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.6154815);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.7266925);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.848435);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.3315263);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.2029289);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.05127093);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.008647253);
   TT_stack_2_stack_2_stack_2->SetEntries(20332.15);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,17.0466);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,67.60567);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,121.5219);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,193.7808);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,151.4468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,196.171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,224.6551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,73.32868);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,34.15405);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,4.430185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,0.1631133);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,1.919328);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,3.810635);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,5.112207);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,9.219703);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,8.170408);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,9.344649);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,10.18053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,4.107128);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,2.762471);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.6874608);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.1232926);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(2853.323);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(1,0.01713829);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(2,0.03701144);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(3,0.08629604);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(4,0.161838);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(6,0.2434739);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(8,0.1358437);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(10,0.1812562);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(12,0.0730568);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(13,-0.01071401);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(14,0.01396708);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinContent(15,0.001728437);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(1,0.008707315);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(2,0.01900228);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(3,0.02658652);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(4,0.06653656);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(6,0.07137467);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(8,0.08292635);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(10,0.07468496);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(12,0.03508458);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(13,0.02161944);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(14,0.006379016);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetBinError(15,0.001728438);
   ChargedHiggs_HplusTBHplusToTB_M_800__900->SetEntries(35.6082);
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
   19.08362,
   75.94252,
   139.4936,
   233.6973,
   0,
   184.7283,
   0,
   242.9714,
   0,
   287.5514,
   0,
   92.7714,
   41.06849,
   5.358288,
   0.191526};
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
   1.923154,
   3.82773,
   5.126396,
   9.254326,
   0,
   8.19839,
   0,
   9.381177,
   0,
   10.22778,
   0,
   4.126291,
   2.770936,
   0.6897492,
   0.1235958};
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
   1.923154,
   3.82773,
   5.126396,
   9.254326,
   0,
   8.19839,
   0,
   9.381177,
   0,
   10.22778,
   0,
   4.126291,
   2.770936,
   0.6897492,
   0.1235958};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->SetMinimum(0.3275571);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors354635523558->SetMaximum(327.5571);
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
   Data__901->SetBinContent(1,19.6);
   Data__901->SetBinContent(2,78.4);
   Data__901->SetBinContent(3,131.3);
   Data__901->SetBinContent(4,272);
   Data__901->SetBinContent(6,184.8);
   Data__901->SetBinContent(8,242.6);
   Data__901->SetBinContent(10,278.2);
   Data__901->SetBinContent(12,99.4);
   Data__901->SetBinContent(13,39.7);
   Data__901->SetBinContent(14,5.1);
   Data__901->SetBinContent(15,0.3);
   Data__901->SetBinError(1,1.4);
   Data__901->SetBinError(2,2.8);
   Data__901->SetBinError(3,3.623534);
   Data__901->SetBinError(4,7.375636);
   Data__901->SetBinError(6,6.079474);
   Data__901->SetBinError(8,6.96563);
   Data__901->SetBinError(10,7.459222);
   Data__901->SetBinError(12,3.152777);
   Data__901->SetBinError(13,1.992486);
   Data__901->SetBinError(14,0.5049752);
   Data__901->SetBinError(15,0.1224745);
   Data__901->SetEntries(7850.587);
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
   line = new TLine(80.385,0.01,80.385,2084.454);

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
   hframe_copy__902->SetMaximum(2084.454);
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
   hframe_copy__903->SetMaximum(2084.454);
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
