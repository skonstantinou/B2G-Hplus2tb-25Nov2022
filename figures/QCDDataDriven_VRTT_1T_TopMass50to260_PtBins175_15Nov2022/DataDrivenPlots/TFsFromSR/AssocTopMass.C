void AssocTopMass()
{
//=========Macro generated from canvas: AssocTopMass/AssocTopMass
//=========  (Fri Nov 18 13:28:00 2022) by ROOT version 6.20/02
   TCanvas *AssocTopMass = new TCanvas("AssocTopMass", "AssocTopMass",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   AssocTopMass->SetHighLightColor(2);
   AssocTopMass->Range(0,0,1,1);
   AssocTopMass->SetFillColor(0);
   AssocTopMass->SetBorderMode(0);
   AssocTopMass->SetBorderSize(2);
   AssocTopMass->SetTickx(1);
   AssocTopMass->SetTicky(1);
   AssocTopMass->SetLeftMargin(0.16);
   AssocTopMass->SetRightMargin(0.05);
   AssocTopMass->SetTopMargin(0.06);
   AssocTopMass->SetBottomMargin(0.13);
   AssocTopMass->SetFrameFillStyle(0);
   AssocTopMass->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: AssocTopMass_2
   TPad *AssocTopMass_2 = new TPad("AssocTopMass_2", "AssocTopMass_2",0,0,1,0.304);
   AssocTopMass_2->Draw();
   AssocTopMass_2->cd();
   AssocTopMass_2->Range(-202.5316,-0.428,1063.291,1.7);
   AssocTopMass_2->SetFillColor(0);
   AssocTopMass_2->SetFillStyle(4000);
   AssocTopMass_2->SetBorderMode(0);
   AssocTopMass_2->SetBorderSize(2);
   AssocTopMass_2->SetTickx(1);
   AssocTopMass_2->SetTicky(1);
   AssocTopMass_2->SetLeftMargin(0.16);
   AssocTopMass_2->SetRightMargin(0.05);
   AssocTopMass_2->SetTopMargin(0);
   AssocTopMass_2->SetBottomMargin(0.3421053);
   AssocTopMass_2->SetFrameFillStyle(0);
   AssocTopMass_2->SetFrameBorderMode(0);
   AssocTopMass_2->SetFrameFillStyle(0);
   AssocTopMass_2->SetFrameBorderMode(0);
   
   TH1F *hframe__603 = new TH1F("hframe__603","",1000,0,1000);
   hframe__603->SetMinimum(0.3);
   hframe__603->SetMaximum(1.7);
   hframe__603->SetDirectory(0);
   hframe__603->SetStats(0);
   hframe__603->SetLineStyle(0);
   hframe__603->SetMarkerStyle(20);
   hframe__603->GetXaxis()->SetTitle("m_{t^{res}_{assoc}} (GeV)");
   hframe__603->GetXaxis()->SetLabelFont(43);
   hframe__603->GetXaxis()->SetLabelOffset(0.007);
   hframe__603->GetXaxis()->SetLabelSize(27);
   hframe__603->GetXaxis()->SetTitleSize(33);
   hframe__603->GetXaxis()->SetTitleOffset(2.960526);
   hframe__603->GetXaxis()->SetTitleFont(43);
   hframe__603->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__603->GetYaxis()->SetNdivisions(505);
   hframe__603->GetYaxis()->SetLabelFont(43);
   hframe__603->GetYaxis()->SetLabelOffset(0.007);
   hframe__603->GetYaxis()->SetLabelSize(21);
   hframe__603->GetYaxis()->SetTitleSize(33);
   hframe__603->GetYaxis()->SetTitleOffset(1.5625);
   hframe__603->GetYaxis()->SetTitleFont(43);
   hframe__603->GetZaxis()->SetLabelFont(43);
   hframe__603->GetZaxis()->SetLabelOffset(0.007);
   hframe__603->GetZaxis()->SetLabelSize(27);
   hframe__603->GetZaxis()->SetTitleSize(33);
   hframe__603->GetZaxis()->SetTitleOffset(1);
   hframe__603->GetZaxis()->SetTitleFont(43);
   hframe__603->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3349[5] = {
   75,
   125,
   175,
   225,
   275};
   Double_t BackgroundStatSystError_fy3349[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3349[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatSystError_fely3349[5] = {
   0.05006518,
   0.01570624,
   0.002901948,
   0.01659546,
   0.04230029};
   Double_t BackgroundStatSystError_fehx3349[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatSystError_fehy3349[5] = {
   0.05006518,
   0.01570624,
   0.002901948,
   0.01659546,
   0.04230029};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,BackgroundStatSystError_fx3349,BackgroundStatSystError_fy3349,BackgroundStatSystError_felx3349,BackgroundStatSystError_fehx3349,BackgroundStatSystError_fely3349,BackgroundStatSystError_fehy3349);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1296;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349 = new TH1F("Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349","Graph",100,25,325);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->SetMinimum(0.9399218);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->SetMaximum(1.060078);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33373339334333453349);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3350[20] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975};
   Double_t BackgroundStatError_fy3350[20] = {
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
   Double_t BackgroundStatError_felx3350[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatError_fely3350[20] = {
   0,
   0.05006518,
   0.01570624,
   0.002901948,
   0.01659546,
   0.04230029,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BackgroundStatError_fehx3350[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatError_fehy3350[20] = {
   0,
   0.05006518,
   0.01570624,
   0.002901948,
   0.01659546,
   0.04230029,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3350,BackgroundStatError_fy3350,BackgroundStatError_felx3350,BackgroundStatError_fehx3350,BackgroundStatError_fely3350,BackgroundStatError_fehy3350);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1295;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350 = new TH1F("Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350","Graph",100,0,1100);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->SetMinimum(0.9399218);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->SetMaximum(1.060078);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_BackgroundStatError33383340334433463350);
   
   grae->Draw("ep ");
   TLine *line = new TLine(173.21,0.3,173.21,1.7);

   ci = 1298;
   color = new TColor(ci, 0, 0, 0, " ", 0.5);
   line->SetLineColor(ci);
   line->SetLineStyle(3);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t BackgroundStatSystError_fx3351[5] = {
   75,
   125,
   175,
   225,
   275};
   Double_t BackgroundStatSystError_fy3351[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3351[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatSystError_fely3351[5] = {
   0.05006518,
   0.01570624,
   0.002901948,
   0.01659546,
   0.04230029};
   Double_t BackgroundStatSystError_fehx3351[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatSystError_fehy3351[5] = {
   0.05006518,
   0.01570624,
   0.002901948,
   0.01659546,
   0.04230029};
   grae = new TGraphAsymmErrors(5,BackgroundStatSystError_fx3351,BackgroundStatSystError_fy3351,BackgroundStatSystError_felx3351,BackgroundStatSystError_fehx3351,BackgroundStatSystError_fely3351,BackgroundStatSystError_fehy3351);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   ci = 1296;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351","Graph",100,25,325);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->SetMinimum(0.9399218);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->SetMaximum(1.060078);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError333733393343334533493351);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3352[20] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975};
   Double_t BackgroundStatError_fy3352[20] = {
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
   Double_t BackgroundStatError_felx3352[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatError_fely3352[20] = {
   0,
   0.05006518,
   0.01570624,
   0.002901948,
   0.01659546,
   0.04230029,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BackgroundStatError_fehx3352[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatError_fehy3352[20] = {
   0,
   0.05006518,
   0.01570624,
   0.002901948,
   0.01659546,
   0.04230029,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3352,BackgroundStatError_fy3352,BackgroundStatError_felx3352,BackgroundStatError_fehx3352,BackgroundStatError_fely3352,BackgroundStatError_fehy3352);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1295;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352","Graph",100,0,1100);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->SetMinimum(0.9399218);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->SetMaximum(1.060078);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError333833403344334633503352);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx3353[3] = {
   125,
   175,
   225};
   Double_t Graph0_fy3353[3] = {
   1.018925,
   1.473546,
   0.4535486};
   Double_t Graph0_felx3353[3] = {
   25,
   25,
   25};
   Double_t Graph0_fely3353[3] = {
   0.01921133,
   0.01365156,
   0.009630371};
   Double_t Graph0_fehx3353[3] = {
   25,
   25,
   25};
   Double_t Graph0_fehy3353[3] = {
   0.01921133,
   0.01365156,
   0.009630371};
   grae = new TGraphAsymmErrors(3,Graph0_fx3353,Graph0_fy3353,Graph0_felx3353,Graph0_fehx3353,Graph0_fely3353,Graph0_fehy3353);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph0334133473353 = new TH1F("Graph_Graph_Graph_Graph0334133473353","Graph",100,85,265);
   Graph_Graph_Graph_Graph0334133473353->SetMinimum(0.3395902);
   Graph_Graph_Graph_Graph0334133473353->SetMaximum(1.591526);
   Graph_Graph_Graph_Graph0334133473353->SetDirectory(0);
   Graph_Graph_Graph_Graph0334133473353->SetStats(0);
   Graph_Graph_Graph_Graph0334133473353->SetLineStyle(0);
   Graph_Graph_Graph_Graph0334133473353->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0334133473353->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0334133473353->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0334133473353->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0334133473353->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0334133473353->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0334133473353->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0334133473353->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph0334133473353->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0334133473353->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0334133473353->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0334133473353->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0334133473353->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0334133473353->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0334133473353->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0334133473353->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0334133473353->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0334133473353->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0334133473353->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0334133473353->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph0334133473353);
   
   grae->Draw("ep ");
   
   Double_t Graph1_fx87[2] = {
   0,
   1000};
   Double_t Graph1_fy87[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph1_fx87,Graph1_fy87);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph1858687 = new TH1F("Graph_Graph_Graph_Graph1858687","Graph",100,0,1100);
   Graph_Graph_Graph_Graph1858687->SetMinimum(0.9);
   Graph_Graph_Graph_Graph1858687->SetMaximum(2.1);
   Graph_Graph_Graph_Graph1858687->SetDirectory(0);
   Graph_Graph_Graph_Graph1858687->SetStats(0);
   Graph_Graph_Graph_Graph1858687->SetLineStyle(0);
   Graph_Graph_Graph_Graph1858687->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1858687->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1858687->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1858687->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1858687->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1858687->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1858687->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1858687->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1858687->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1858687->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1858687->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1858687->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1858687->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1858687->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1858687->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1858687->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1858687->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1858687->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1858687->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph1858687);
   
   graph->Draw("l");
   
   TH1F *hframe_copy__604 = new TH1F("hframe_copy__604","",1000,0,1000);
   hframe_copy__604->SetMinimum(0.3);
   hframe_copy__604->SetMaximum(1.7);
   hframe_copy__604->SetDirectory(0);
   hframe_copy__604->SetStats(0);
   hframe_copy__604->SetLineStyle(0);
   hframe_copy__604->SetMarkerStyle(20);
   hframe_copy__604->GetXaxis()->SetTitle("m_{t^{res}_{assoc}} (GeV)");
   hframe_copy__604->GetXaxis()->SetLabelFont(43);
   hframe_copy__604->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__604->GetXaxis()->SetLabelSize(27);
   hframe_copy__604->GetXaxis()->SetTitleSize(33);
   hframe_copy__604->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__604->GetXaxis()->SetTitleFont(43);
   hframe_copy__604->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__604->GetYaxis()->SetNdivisions(505);
   hframe_copy__604->GetYaxis()->SetLabelFont(43);
   hframe_copy__604->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__604->GetYaxis()->SetLabelSize(21);
   hframe_copy__604->GetYaxis()->SetTitleSize(33);
   hframe_copy__604->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__604->GetYaxis()->SetTitleFont(43);
   hframe_copy__604->GetZaxis()->SetLabelFont(43);
   hframe_copy__604->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__604->GetZaxis()->SetLabelSize(27);
   hframe_copy__604->GetZaxis()->SetTitleSize(33);
   hframe_copy__604->GetZaxis()->SetTitleOffset(1);
   hframe_copy__604->GetZaxis()->SetTitleFont(43);
   hframe_copy__604->Draw("sameaxis");
   AssocTopMass_2->Modified();
   AssocTopMass->cd();
  
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
   AssocTopMass->cd();
  
// ------------>Primitives in pad: AssocTopMass_1
   TPad *AssocTopMass_1 = new TPad("AssocTopMass_1", "AssocTopMass_1",0,0.2897959,1,1);
   AssocTopMass_1->Draw();
   AssocTopMass_1->cd();
   AssocTopMass_1->Range(-202.5316,-1.227527,1063.291,5.303312);
   AssocTopMass_1->SetFillColor(0);
   AssocTopMass_1->SetFillStyle(4000);
   AssocTopMass_1->SetBorderMode(0);
   AssocTopMass_1->SetBorderSize(2);
   AssocTopMass_1->SetLogy();
   AssocTopMass_1->SetTickx(1);
   AssocTopMass_1->SetTicky(1);
   AssocTopMass_1->SetLeftMargin(0.16);
   AssocTopMass_1->SetRightMargin(0.05);
   AssocTopMass_1->SetTopMargin(0.06);
   AssocTopMass_1->SetBottomMargin(0.02);
   AssocTopMass_1->SetFrameFillStyle(0);
   AssocTopMass_1->SetFrameBorderMode(0);
   AssocTopMass_1->SetFrameFillStyle(0);
   AssocTopMass_1->SetFrameBorderMode(0);
   
   TH1F *hframe__605 = new TH1F("hframe__605","",1000,0,1000);
   hframe__605->SetMinimum(0.08);
   hframe__605->SetMaximum(81557);
   hframe__605->SetDirectory(0);
   hframe__605->SetStats(0);
   hframe__605->SetLineStyle(0);
   hframe__605->SetMarkerStyle(20);
   hframe__605->GetXaxis()->SetLabelFont(43);
   hframe__605->GetXaxis()->SetLabelOffset(0.007);
   hframe__605->GetXaxis()->SetLabelSize(0);
   hframe__605->GetXaxis()->SetTitleSize(0);
   hframe__605->GetXaxis()->SetTitleOffset(0.9);
   hframe__605->GetXaxis()->SetTitleFont(43);
   hframe__605->GetYaxis()->SetTitle("Events / 50 GeV");
   hframe__605->GetYaxis()->SetLabelFont(43);
   hframe__605->GetYaxis()->SetLabelOffset(0.007);
   hframe__605->GetYaxis()->SetLabelSize(27);
   hframe__605->GetYaxis()->SetTitleSize(33);
   hframe__605->GetYaxis()->SetTitleOffset(1.5625);
   hframe__605->GetYaxis()->SetTitleFont(43);
   hframe__605->GetZaxis()->SetLabelFont(43);
   hframe__605->GetZaxis()->SetLabelOffset(0.007);
   hframe__605->GetZaxis()->SetLabelSize(27);
   hframe__605->GetZaxis()->SetTitleSize(33);
   hframe__605->GetZaxis()->SetTitleOffset(1);
   hframe__605->GetZaxis()->SetTitleFont(43);
   hframe__605->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_85_stack_86_stack_87 = new TH1F("StackedMCstackHist_stack_85_stack_86_stack_87","StackedMCstackHist",20,0,1000);
   StackedMCstackHist_stack_85_stack_86_stack_87->SetMinimum(3.16271);
   StackedMCstackHist_stack_85_stack_86_stack_87->SetMaximum(12650.84);
   StackedMCstackHist_stack_85_stack_86_stack_87->SetDirectory(0);
   StackedMCstackHist_stack_85_stack_86_stack_87->SetStats(0);
   StackedMCstackHist_stack_85_stack_86_stack_87->SetLineStyle(0);
   StackedMCstackHist_stack_85_stack_86_stack_87->SetMarkerStyle(20);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_85_stack_86_stack_87->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_85_stack_86_stack_87);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_AssocTopMassInclusive",20,0,1000);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,65.8667);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,305.3317);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,67.12119);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,3.752517);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,8.787326);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,3.982214);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(52636);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,100);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_AssocTopMassInclusive",20,0,1000);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1666.021);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,7601.443);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,1138.25);
   TT_stack_2_stack_2_stack_2->SetBinError(3,9.846035);
   TT_stack_2_stack_2_stack_2->SetBinError(4,21.19571);
   TT_stack_2_stack_2_stack_2->SetBinError(5,8.137197);
   TT_stack_2_stack_2_stack_2->SetEntries(185137);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,100);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_AssocTopMassInclusive",20,0,1000);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,555.295);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,1028.865);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,3684.955);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,903.4661);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,27.80094);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,42.06131);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,80.65);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,38.21688);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3639.598);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,100);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__606 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__606","h_SR_AssocTopMassInclusive",20,0,1000);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetBinContent(3,3.453083);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetBinContent(4,24.29764);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetBinContent(5,4.967446);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetBinError(3,0.8009622);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetBinError(4,1.730354);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetBinError(5,0.8037167);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetEntries(5945);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__606->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3354[20] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3354[20] = {
   0,
   555.295,
   2760.752,
   7906.775,
   4890.325,
   903.4661,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3354[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3354[20] = {
   0,
   27.80094,
   43.36104,
   22.94505,
   81.15722,
   38.21688,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3354[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3354[20] = {
   0,
   27.80094,
   43.36104,
   22.94505,
   81.15722,
   38.21688,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3354,BkgSum-SR-Inclusive_sum_errors_fy3354,BkgSum-SR-Inclusive_sum_errors_felx3354,BkgSum-SR-Inclusive_sum_errors_fehx3354,BkgSum-SR-Inclusive_sum_errors_fely3354,BkgSum-SR-Inclusive_sum_errors_fehy3354);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1294;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354","Graph",100,0,1100);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->SetMinimum(8.722692);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->SetMaximum(8722.692);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors334233483354->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors334233483354);
   
   grae->Draw("e2 ");
   
   TH1F *Data__607 = new TH1F("Data__607","h_SR_AssocTopMassInclusive",20,0,1000);
   Data__607->SetBinContent(3,2813);
   Data__607->SetBinContent(4,11651);
   Data__607->SetBinContent(5,2218);
   Data__607->SetBinError(3,53.03772);
   Data__607->SetBinError(4,107.9398);
   Data__607->SetBinError(5,47.09565);
   Data__607->SetEntries(16686);
   Data__607->SetDirectory(0);
   Data__607->SetFillStyle(3001);
   Data__607->SetLineWidth(2);
   Data__607->SetMarkerStyle(20);
   Data__607->SetMarkerSize(1.2);
   Data__607->GetXaxis()->SetRange(1,100);
   Data__607->GetXaxis()->SetLabelFont(42);
   Data__607->GetXaxis()->SetTitleOffset(1);
   Data__607->GetXaxis()->SetTitleFont(42);
   Data__607->GetYaxis()->SetLabelFont(42);
   Data__607->GetYaxis()->SetTitleFont(42);
   Data__607->GetZaxis()->SetLabelFont(42);
   Data__607->GetZaxis()->SetTitleOffset(1);
   Data__607->GetZaxis()->SetTitleFont(42);
   Data__607->Draw("EP same");
   line = new TLine(173.21,0.08,173.21,81557);

   ci = 1297;
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

   ci = 1294;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1294;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__608 = new TH1F("hframe_copy__608","",1000,0,1000);
   hframe_copy__608->SetMinimum(0.08);
   hframe_copy__608->SetMaximum(81557);
   hframe_copy__608->SetDirectory(0);
   hframe_copy__608->SetStats(0);
   hframe_copy__608->SetLineStyle(0);
   hframe_copy__608->SetMarkerStyle(20);
   hframe_copy__608->GetXaxis()->SetLabelFont(43);
   hframe_copy__608->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__608->GetXaxis()->SetLabelSize(0);
   hframe_copy__608->GetXaxis()->SetTitleSize(0);
   hframe_copy__608->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__608->GetXaxis()->SetTitleFont(43);
   hframe_copy__608->GetYaxis()->SetTitle("Events / 50 GeV");
   hframe_copy__608->GetYaxis()->SetLabelFont(43);
   hframe_copy__608->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__608->GetYaxis()->SetLabelSize(27);
   hframe_copy__608->GetYaxis()->SetTitleSize(33);
   hframe_copy__608->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__608->GetYaxis()->SetTitleFont(43);
   hframe_copy__608->GetZaxis()->SetLabelFont(43);
   hframe_copy__608->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__608->GetZaxis()->SetLabelSize(27);
   hframe_copy__608->GetZaxis()->SetTitleSize(33);
   hframe_copy__608->GetZaxis()->SetTitleOffset(1);
   hframe_copy__608->GetZaxis()->SetTitleFont(43);
   hframe_copy__608->Draw("sameaxis");
   
   TH1F *hframe_copy__609 = new TH1F("hframe_copy__609","",1000,0,1000);
   hframe_copy__609->SetMinimum(0.08);
   hframe_copy__609->SetMaximum(81557);
   hframe_copy__609->SetDirectory(0);
   hframe_copy__609->SetStats(0);
   hframe_copy__609->SetLineStyle(0);
   hframe_copy__609->SetMarkerStyle(20);
   hframe_copy__609->GetXaxis()->SetLabelFont(43);
   hframe_copy__609->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__609->GetXaxis()->SetLabelSize(0);
   hframe_copy__609->GetXaxis()->SetTitleSize(0);
   hframe_copy__609->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__609->GetXaxis()->SetTitleFont(43);
   hframe_copy__609->GetYaxis()->SetTitle("Events / 50 GeV");
   hframe_copy__609->GetYaxis()->SetLabelFont(43);
   hframe_copy__609->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__609->GetYaxis()->SetLabelSize(27);
   hframe_copy__609->GetYaxis()->SetTitleSize(33);
   hframe_copy__609->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__609->GetYaxis()->SetTitleFont(43);
   hframe_copy__609->GetZaxis()->SetLabelFont(43);
   hframe_copy__609->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__609->GetZaxis()->SetLabelSize(27);
   hframe_copy__609->GetZaxis()->SetTitleSize(33);
   hframe_copy__609->GetZaxis()->SetTitleOffset(1);
   hframe_copy__609->GetZaxis()->SetTitleFont(43);
   hframe_copy__609->Draw("sameaxis");
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
   AssocTopMass_1->Modified();
   AssocTopMass->cd();
   AssocTopMass->Modified();
   AssocTopMass->cd();
   AssocTopMass->SetSelected(AssocTopMass);
}
