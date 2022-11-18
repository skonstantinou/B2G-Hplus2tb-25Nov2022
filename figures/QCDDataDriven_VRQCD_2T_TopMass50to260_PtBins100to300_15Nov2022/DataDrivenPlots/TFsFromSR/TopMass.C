void TopMass()
{
//=========Macro generated from canvas: TopMass/TopMass
//=========  (Fri Nov 18 13:29:27 2022) by ROOT version 6.20/02
   TCanvas *TopMass = new TCanvas("TopMass", "TopMass",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   TopMass->SetHighLightColor(2);
   TopMass->Range(0,0,1,1);
   TopMass->SetFillColor(0);
   TopMass->SetBorderMode(0);
   TopMass->SetBorderSize(2);
   TopMass->SetTickx(1);
   TopMass->SetTicky(1);
   TopMass->SetLeftMargin(0.16);
   TopMass->SetRightMargin(0.05);
   TopMass->SetTopMargin(0.06);
   TopMass->SetBottomMargin(0.13);
   TopMass->SetFrameFillStyle(0);
   TopMass->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopMass_2
   TPad *TopMass_2 = new TPad("TopMass_2", "TopMass_2",0,0,1,0.304);
   TopMass_2->Draw();
   TopMass_2->cd();
   TopMass_2->Range(-202.5316,-0.428,1063.291,1.7);
   TopMass_2->SetFillColor(0);
   TopMass_2->SetFillStyle(4000);
   TopMass_2->SetBorderMode(0);
   TopMass_2->SetBorderSize(2);
   TopMass_2->SetTickx(1);
   TopMass_2->SetTicky(1);
   TopMass_2->SetLeftMargin(0.16);
   TopMass_2->SetRightMargin(0.05);
   TopMass_2->SetTopMargin(0);
   TopMass_2->SetBottomMargin(0.3421053);
   TopMass_2->SetFrameFillStyle(0);
   TopMass_2->SetFrameBorderMode(0);
   TopMass_2->SetFrameFillStyle(0);
   TopMass_2->SetFrameBorderMode(0);
   
   TH1F *hframe__687 = new TH1F("hframe__687","",1000,0,1000);
   hframe__687->SetMinimum(0.3);
   hframe__687->SetMaximum(1.7);
   hframe__687->SetDirectory(0);
   hframe__687->SetStats(0);
   hframe__687->SetLineStyle(0);
   hframe__687->SetMarkerStyle(20);
   hframe__687->GetXaxis()->SetTitle("m_{t^{res}_{H^{#pm}}} (GeV)");
   hframe__687->GetXaxis()->SetNdivisions(8);
   hframe__687->GetXaxis()->SetLabelFont(43);
   hframe__687->GetXaxis()->SetLabelOffset(0.007);
   hframe__687->GetXaxis()->SetLabelSize(27);
   hframe__687->GetXaxis()->SetTitleSize(33);
   hframe__687->GetXaxis()->SetTitleOffset(2.960526);
   hframe__687->GetXaxis()->SetTitleFont(43);
   hframe__687->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__687->GetYaxis()->SetNdivisions(505);
   hframe__687->GetYaxis()->SetLabelFont(43);
   hframe__687->GetYaxis()->SetLabelOffset(0.007);
   hframe__687->GetYaxis()->SetLabelSize(21);
   hframe__687->GetYaxis()->SetTitleSize(33);
   hframe__687->GetYaxis()->SetTitleOffset(1.5625);
   hframe__687->GetYaxis()->SetTitleFont(43);
   hframe__687->GetZaxis()->SetLabelFont(43);
   hframe__687->GetZaxis()->SetLabelOffset(0.007);
   hframe__687->GetZaxis()->SetLabelSize(27);
   hframe__687->GetZaxis()->SetTitleSize(33);
   hframe__687->GetZaxis()->SetTitleOffset(1);
   hframe__687->GetZaxis()->SetTitleFont(43);
   hframe__687->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3409[5] = {
   75,
   125,
   175,
   225,
   275};
   Double_t BackgroundStatSystError_fy3409[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3409[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatSystError_fely3409[5] = {
   0.03992481,
   0.01680969,
   0.02851234,
   0.01096157,
   0.02505197};
   Double_t BackgroundStatSystError_fehx3409[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatSystError_fehy3409[5] = {
   0.03992481,
   0.01680969,
   0.02851234,
   0.01096157,
   0.02505197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,BackgroundStatSystError_fx3409,BackgroundStatSystError_fy3409,BackgroundStatSystError_felx3409,BackgroundStatSystError_fehx3409,BackgroundStatSystError_fely3409,BackgroundStatSystError_fehy3409);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1312;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409 = new TH1F("Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409","Graph",100,25,325);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->SetMinimum(0.9520902);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->SetMaximum(1.04791);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError33973399340334053409);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3410[20] = {
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
   Double_t BackgroundStatError_fy3410[20] = {
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
   Double_t BackgroundStatError_felx3410[20] = {
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
   Double_t BackgroundStatError_fely3410[20] = {
   0,
   0.03992481,
   0.01680969,
   0.02851234,
   0.01096157,
   0.02505197,
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
   Double_t BackgroundStatError_fehx3410[20] = {
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
   Double_t BackgroundStatError_fehy3410[20] = {
   0,
   0.03992481,
   0.01680969,
   0.02851234,
   0.01096157,
   0.02505197,
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
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3410,BackgroundStatError_fy3410,BackgroundStatError_felx3410,BackgroundStatError_fehx3410,BackgroundStatError_fely3410,BackgroundStatError_fehy3410);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1311;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410 = new TH1F("Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410","Graph",100,0,1100);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->SetMinimum(0.9520902);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->SetMaximum(1.04791);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_BackgroundStatError33983400340434063410);
   
   grae->Draw("ep ");
   TLine *line = new TLine(173.21,0.3,173.21,1.7);

   ci = 1314;
   color = new TColor(ci, 0, 0, 0, " ", 0.5);
   line->SetLineColor(ci);
   line->SetLineStyle(3);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t BackgroundStatSystError_fx3411[5] = {
   75,
   125,
   175,
   225,
   275};
   Double_t BackgroundStatSystError_fy3411[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3411[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatSystError_fely3411[5] = {
   0.03992481,
   0.01680969,
   0.02851234,
   0.01096157,
   0.02505197};
   Double_t BackgroundStatSystError_fehx3411[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t BackgroundStatSystError_fehy3411[5] = {
   0.03992481,
   0.01680969,
   0.02851234,
   0.01096157,
   0.02505197};
   grae = new TGraphAsymmErrors(5,BackgroundStatSystError_fx3411,BackgroundStatSystError_fy3411,BackgroundStatSystError_felx3411,BackgroundStatSystError_fehx3411,BackgroundStatSystError_fely3411,BackgroundStatSystError_fehy3411);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   ci = 1312;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411","Graph",100,25,325);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->SetMinimum(0.9520902);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->SetMaximum(1.04791);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatSystError339733993403340534093411);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3412[20] = {
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
   Double_t BackgroundStatError_fy3412[20] = {
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
   Double_t BackgroundStatError_felx3412[20] = {
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
   Double_t BackgroundStatError_fely3412[20] = {
   0,
   0.03992481,
   0.01680969,
   0.02851234,
   0.01096157,
   0.02505197,
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
   Double_t BackgroundStatError_fehx3412[20] = {
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
   Double_t BackgroundStatError_fehy3412[20] = {
   0,
   0.03992481,
   0.01680969,
   0.02851234,
   0.01096157,
   0.02505197,
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
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3412,BackgroundStatError_fy3412,BackgroundStatError_felx3412,BackgroundStatError_fehx3412,BackgroundStatError_fely3412,BackgroundStatError_fehy3412);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1311;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412","Graph",100,0,1100);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->SetMinimum(0.9520902);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->SetMaximum(1.04791);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->SetLineStyle(0);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_BackgroundStatError339834003404340634103412);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx3413[5] = {
   75,
   125,
   175,
   225,
   275};
   Double_t Graph0_fy3413[5] = {
   0.9939403,
   0.9611923,
   1.072422,
   1.013701,
   0.9897458};
   Double_t Graph0_felx3413[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t Graph0_fely3413[5] = {
   0.03972584,
   0.01770599,
   0.03450462,
   0.01198744,
   0.02644263};
   Double_t Graph0_fehx3413[5] = {
   25,
   25,
   25,
   25,
   25};
   Double_t Graph0_fehy3413[5] = {
   0.03972584,
   0.01770599,
   0.03450462,
   0.01198744,
   0.02644263};
   grae = new TGraphAsymmErrors(5,Graph0_fx3413,Graph0_fy3413,Graph0_felx3413,Graph0_fehx3413,Graph0_fely3413,Graph0_fehy3413);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph0340134073413 = new TH1F("Graph_Graph_Graph_Graph0340134073413","Graph",100,25,325);
   Graph_Graph_Graph_Graph0340134073413->SetMinimum(0.9271423);
   Graph_Graph_Graph_Graph0340134073413->SetMaximum(1.123271);
   Graph_Graph_Graph_Graph0340134073413->SetDirectory(0);
   Graph_Graph_Graph_Graph0340134073413->SetStats(0);
   Graph_Graph_Graph_Graph0340134073413->SetLineStyle(0);
   Graph_Graph_Graph_Graph0340134073413->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0340134073413->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0340134073413->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0340134073413->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0340134073413->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0340134073413->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0340134073413->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0340134073413->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0340134073413->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph0340134073413->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0340134073413->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0340134073413->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0340134073413->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0340134073413->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0340134073413->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0340134073413->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0340134073413->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0340134073413->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0340134073413->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0340134073413->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0340134073413->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph0340134073413);
   
   grae->Draw("ep ");
   
   Double_t Graph1_fx99[2] = {
   0,
   1000};
   Double_t Graph1_fy99[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph1_fx99,Graph1_fy99);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph1979899 = new TH1F("Graph_Graph_Graph_Graph1979899","Graph",100,0,1100);
   Graph_Graph_Graph_Graph1979899->SetMinimum(0.9);
   Graph_Graph_Graph_Graph1979899->SetMaximum(2.1);
   Graph_Graph_Graph_Graph1979899->SetDirectory(0);
   Graph_Graph_Graph_Graph1979899->SetStats(0);
   Graph_Graph_Graph_Graph1979899->SetLineStyle(0);
   Graph_Graph_Graph_Graph1979899->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1979899->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1979899->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1979899->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1979899->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1979899->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1979899->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1979899->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1979899->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1979899->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1979899->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1979899->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1979899->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1979899->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1979899->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1979899->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1979899->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1979899->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1979899->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1979899->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph1979899);
   
   graph->Draw("l");
   
   TH1F *hframe_copy__688 = new TH1F("hframe_copy__688","",1000,0,1000);
   hframe_copy__688->SetMinimum(0.3);
   hframe_copy__688->SetMaximum(1.7);
   hframe_copy__688->SetDirectory(0);
   hframe_copy__688->SetStats(0);
   hframe_copy__688->SetLineStyle(0);
   hframe_copy__688->SetMarkerStyle(20);
   hframe_copy__688->GetXaxis()->SetTitle("m_{t^{res}_{H^{#pm}}} (GeV)");
   hframe_copy__688->GetXaxis()->SetNdivisions(8);
   hframe_copy__688->GetXaxis()->SetLabelFont(43);
   hframe_copy__688->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__688->GetXaxis()->SetLabelSize(27);
   hframe_copy__688->GetXaxis()->SetTitleSize(33);
   hframe_copy__688->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__688->GetXaxis()->SetTitleFont(43);
   hframe_copy__688->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__688->GetYaxis()->SetNdivisions(505);
   hframe_copy__688->GetYaxis()->SetLabelFont(43);
   hframe_copy__688->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__688->GetYaxis()->SetLabelSize(21);
   hframe_copy__688->GetYaxis()->SetTitleSize(33);
   hframe_copy__688->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__688->GetYaxis()->SetTitleFont(43);
   hframe_copy__688->GetZaxis()->SetLabelFont(43);
   hframe_copy__688->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__688->GetZaxis()->SetLabelSize(27);
   hframe_copy__688->GetZaxis()->SetTitleSize(33);
   hframe_copy__688->GetZaxis()->SetTitleOffset(1);
   hframe_copy__688->GetZaxis()->SetTitleFont(43);
   hframe_copy__688->Draw("sameaxis");
   TopMass_2->Modified();
   TopMass->cd();
  
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
   TopMass->cd();
  
// ------------>Primitives in pad: TopMass_1
   TPad *TopMass_1 = new TPad("TopMass_1", "TopMass_1",0,0.2897959,1,1);
   TopMass_1->Draw();
   TopMass_1->cd();
   TopMass_1->Range(-202.5316,-1.222918,1063.291,5.077489);
   TopMass_1->SetFillColor(0);
   TopMass_1->SetFillStyle(4000);
   TopMass_1->SetBorderMode(0);
   TopMass_1->SetBorderSize(2);
   TopMass_1->SetLogy();
   TopMass_1->SetTickx(1);
   TopMass_1->SetTicky(1);
   TopMass_1->SetLeftMargin(0.16);
   TopMass_1->SetRightMargin(0.05);
   TopMass_1->SetTopMargin(0.06);
   TopMass_1->SetBottomMargin(0.02);
   TopMass_1->SetFrameFillStyle(0);
   TopMass_1->SetFrameBorderMode(0);
   TopMass_1->SetFrameFillStyle(0);
   TopMass_1->SetFrameBorderMode(0);
   
   TH1F *hframe__689 = new TH1F("hframe__689","",1000,0,1000);
   hframe__689->SetMinimum(0.08);
   hframe__689->SetMaximum(50057);
   hframe__689->SetDirectory(0);
   hframe__689->SetStats(0);
   hframe__689->SetLineStyle(0);
   hframe__689->SetMarkerStyle(20);
   hframe__689->GetXaxis()->SetNdivisions(8);
   hframe__689->GetXaxis()->SetLabelFont(43);
   hframe__689->GetXaxis()->SetLabelOffset(0.007);
   hframe__689->GetXaxis()->SetLabelSize(0);
   hframe__689->GetXaxis()->SetTitleSize(0);
   hframe__689->GetXaxis()->SetTitleOffset(0.9);
   hframe__689->GetXaxis()->SetTitleFont(43);
   hframe__689->GetYaxis()->SetTitle("Events / 50 GeV");
   hframe__689->GetYaxis()->SetLabelFont(43);
   hframe__689->GetYaxis()->SetLabelOffset(0.007);
   hframe__689->GetYaxis()->SetLabelSize(27);
   hframe__689->GetYaxis()->SetTitleSize(33);
   hframe__689->GetYaxis()->SetTitleOffset(1.5625);
   hframe__689->GetYaxis()->SetTitleFont(43);
   hframe__689->GetZaxis()->SetLabelFont(43);
   hframe__689->GetZaxis()->SetLabelOffset(0.007);
   hframe__689->GetZaxis()->SetLabelSize(27);
   hframe__689->GetZaxis()->SetTitleSize(33);
   hframe__689->GetZaxis()->SetTitleOffset(1);
   hframe__689->GetZaxis()->SetTitleFont(43);
   hframe__689->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_97_stack_98_stack_99 = new TH1F("StackedMCstackHist_stack_97_stack_98_stack_99","StackedMCstackHist",20,0,1000);
   StackedMCstackHist_stack_97_stack_98_stack_99->SetMinimum(2.821739);
   StackedMCstackHist_stack_97_stack_98_stack_99->SetMaximum(11286.96);
   StackedMCstackHist_stack_97_stack_98_stack_99->SetDirectory(0);
   StackedMCstackHist_stack_97_stack_98_stack_99->SetStats(0);
   StackedMCstackHist_stack_97_stack_98_stack_99->SetLineStyle(0);
   StackedMCstackHist_stack_97_stack_98_stack_99->SetMarkerStyle(20);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_97_stack_98_stack_99->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_97_stack_98_stack_99);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_TopMassInclusive",20,0,1000);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,8.422874);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,57.00907);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,17.82247);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,168.2564);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,33.95213);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,1.253625);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,3.661821);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.606225);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,6.117169);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.46786);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(45451);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_TopMassInclusive",20,0,1000);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,109.4196);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,971.5893);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,465.7724);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2113.154);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,299.5281);
   TT_stack_2_stack_2_stack_2->SetBinError(2,2.556735);
   TT_stack_2_stack_2_stack_2->SetBinError(3,7.534029);
   TT_stack_2_stack_2_stack_2->SetBinError(4,5.135039);
   TT_stack_2_stack_2_stack_2->SetBinError(5,11.22345);
   TT_stack_2_stack_2_stack_2->SetBinError(6,4.276719);
   TT_stack_2_stack_2_stack_2->SetEntries(70981);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_TopMassInclusive",20,0,1000);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,511.9741);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,2037.385);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,417.1699);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,4772.938);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,1082.035);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,24.98355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,50.85292);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,25.029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,76.26294);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,35.116);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7515.688);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__690 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__690","h_SR_TopMassInclusive",20,0,1000);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinContent(2,0.2238578);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinContent(3,3.331918);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinContent(4,2.001192);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinContent(5,13.21035);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinContent(6,2.493502);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinError(2,0.2148317);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinError(3,0.6401421);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinError(4,0.4667376);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinError(5,1.421267);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetBinError(6,0.6601907);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetEntries(4205);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__690->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3414[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3414[20] = {
   0,
   629.8165,
   3065.984,
   900.7647,
   7054.348,
   1415.515,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3414[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3414[20] = {
   0,
   25.14531,
   51.53824,
   25.68291,
   77.32672,
   35.46144,
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3414[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3414[20] = {
   0,
   25.14531,
   51.53824,
   25.68291,
   77.32672,
   35.46144,
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
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3414,BkgSum-SR-Inclusive_sum_errors_fy3414,BkgSum-SR-Inclusive_sum_errors_felx3414,BkgSum-SR-Inclusive_sum_errors_fehx3414,BkgSum-SR-Inclusive_sum_errors_fely3414,BkgSum-SR-Inclusive_sum_errors_fehy3414);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1310;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414","Graph",100,0,1100);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->SetMinimum(7.844842);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->SetMaximum(7844.842);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors340234083414->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors340234083414);
   
   grae->Draw("e2 ");
   
   TH1F *Data__691 = new TH1F("Data__691","h_SR_TopMassInclusive",20,0,1000);
   Data__691->SetBinContent(2,626);
   Data__691->SetBinContent(3,2947);
   Data__691->SetBinContent(4,966);
   Data__691->SetBinContent(5,7151);
   Data__691->SetBinContent(6,1401);
   Data__691->SetBinError(2,25.01999);
   Data__691->SetBinError(3,54.28628);
   Data__691->SetBinError(4,31.08054);
   Data__691->SetBinError(5,84.56359);
   Data__691->SetBinError(6,37.42993);
   Data__691->SetEntries(13095);
   Data__691->SetDirectory(0);
   Data__691->SetFillStyle(3001);
   Data__691->SetLineWidth(2);
   Data__691->SetMarkerStyle(20);
   Data__691->SetMarkerSize(1.2);
   Data__691->GetXaxis()->SetRange(1,100);
   Data__691->GetXaxis()->SetLabelFont(42);
   Data__691->GetXaxis()->SetTitleOffset(1);
   Data__691->GetXaxis()->SetTitleFont(42);
   Data__691->GetYaxis()->SetLabelFont(42);
   Data__691->GetYaxis()->SetTitleFont(42);
   Data__691->GetZaxis()->SetLabelFont(42);
   Data__691->GetZaxis()->SetTitleOffset(1);
   Data__691->GetZaxis()->SetTitleFont(42);
   Data__691->Draw("EP same");
   line = new TLine(173.21,0.08,173.21,50057);

   ci = 1313;
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

   ci = 1310;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1310;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__692 = new TH1F("hframe_copy__692","",1000,0,1000);
   hframe_copy__692->SetMinimum(0.08);
   hframe_copy__692->SetMaximum(50057);
   hframe_copy__692->SetDirectory(0);
   hframe_copy__692->SetStats(0);
   hframe_copy__692->SetLineStyle(0);
   hframe_copy__692->SetMarkerStyle(20);
   hframe_copy__692->GetXaxis()->SetNdivisions(8);
   hframe_copy__692->GetXaxis()->SetLabelFont(43);
   hframe_copy__692->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__692->GetXaxis()->SetLabelSize(0);
   hframe_copy__692->GetXaxis()->SetTitleSize(0);
   hframe_copy__692->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__692->GetXaxis()->SetTitleFont(43);
   hframe_copy__692->GetYaxis()->SetTitle("Events / 50 GeV");
   hframe_copy__692->GetYaxis()->SetLabelFont(43);
   hframe_copy__692->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__692->GetYaxis()->SetLabelSize(27);
   hframe_copy__692->GetYaxis()->SetTitleSize(33);
   hframe_copy__692->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__692->GetYaxis()->SetTitleFont(43);
   hframe_copy__692->GetZaxis()->SetLabelFont(43);
   hframe_copy__692->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__692->GetZaxis()->SetLabelSize(27);
   hframe_copy__692->GetZaxis()->SetTitleSize(33);
   hframe_copy__692->GetZaxis()->SetTitleOffset(1);
   hframe_copy__692->GetZaxis()->SetTitleFont(43);
   hframe_copy__692->Draw("sameaxis");
   
   TH1F *hframe_copy__693 = new TH1F("hframe_copy__693","",1000,0,1000);
   hframe_copy__693->SetMinimum(0.08);
   hframe_copy__693->SetMaximum(50057);
   hframe_copy__693->SetDirectory(0);
   hframe_copy__693->SetStats(0);
   hframe_copy__693->SetLineStyle(0);
   hframe_copy__693->SetMarkerStyle(20);
   hframe_copy__693->GetXaxis()->SetNdivisions(8);
   hframe_copy__693->GetXaxis()->SetLabelFont(43);
   hframe_copy__693->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__693->GetXaxis()->SetLabelSize(0);
   hframe_copy__693->GetXaxis()->SetTitleSize(0);
   hframe_copy__693->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__693->GetXaxis()->SetTitleFont(43);
   hframe_copy__693->GetYaxis()->SetTitle("Events / 50 GeV");
   hframe_copy__693->GetYaxis()->SetLabelFont(43);
   hframe_copy__693->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__693->GetYaxis()->SetLabelSize(27);
   hframe_copy__693->GetYaxis()->SetTitleSize(33);
   hframe_copy__693->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__693->GetYaxis()->SetTitleFont(43);
   hframe_copy__693->GetZaxis()->SetLabelFont(43);
   hframe_copy__693->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__693->GetZaxis()->SetLabelSize(27);
   hframe_copy__693->GetZaxis()->SetTitleSize(33);
   hframe_copy__693->GetZaxis()->SetTitleOffset(1);
   hframe_copy__693->GetZaxis()->SetTitleFont(43);
   hframe_copy__693->Draw("sameaxis");
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
   TopMass_1->Modified();
   TopMass->cd();
   TopMass->Modified();
   TopMass->cd();
   TopMass->SetSelected(TopMass);
}
