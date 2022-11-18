void HTb()
{
//=========Macro generated from canvas: HTb/HTb
//=========  (Fri Nov 18 13:30:41 2022) by ROOT version 6.20/02
   TCanvas *HTb = new TCanvas("HTb", "HTb",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   HTb->SetHighLightColor(2);
   HTb->Range(0,0,1,1);
   HTb->SetFillColor(0);
   HTb->SetBorderMode(0);
   HTb->SetBorderSize(2);
   HTb->SetTickx(1);
   HTb->SetTicky(1);
   HTb->SetLeftMargin(0.16);
   HTb->SetRightMargin(0.05);
   HTb->SetTopMargin(0.06);
   HTb->SetBottomMargin(0.13);
   HTb->SetFrameFillStyle(0);
   HTb->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: HTb_2
   TPad *HTb_2 = new TPad("HTb_2", "HTb_2",0,0,1,0.304);
   HTb_2->Draw();
   HTb_2->cd();
   HTb_2->Range(-183.5443,-0.428,1588.608,1.7);
   HTb_2->SetFillColor(0);
   HTb_2->SetFillStyle(4000);
   HTb_2->SetBorderMode(0);
   HTb_2->SetBorderSize(2);
   HTb_2->SetTickx(1);
   HTb_2->SetTicky(1);
   HTb_2->SetLeftMargin(0.16);
   HTb_2->SetRightMargin(0.05);
   HTb_2->SetTopMargin(0);
   HTb_2->SetBottomMargin(0.3421053);
   HTb_2->SetFrameFillStyle(0);
   HTb_2->SetFrameBorderMode(0);
   HTb_2->SetFrameFillStyle(0);
   HTb_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1128 = new TH1F("hframe__1128","",1000,100,1500);
   hframe__1128->SetMinimum(0.3);
   hframe__1128->SetMaximum(1.7);
   hframe__1128->SetDirectory(0);
   hframe__1128->SetStats(0);
   hframe__1128->SetLineStyle(0);
   hframe__1128->SetMarkerStyle(20);
   hframe__1128->GetXaxis()->SetTitle("H_{T, b} (GeV)");
   hframe__1128->GetXaxis()->SetNdivisions(8);
   hframe__1128->GetXaxis()->SetLabelFont(43);
   hframe__1128->GetXaxis()->SetLabelOffset(0.007);
   hframe__1128->GetXaxis()->SetLabelSize(27);
   hframe__1128->GetXaxis()->SetTitleSize(33);
   hframe__1128->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1128->GetXaxis()->SetTitleFont(43);
   hframe__1128->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1128->GetYaxis()->SetNdivisions(505);
   hframe__1128->GetYaxis()->SetLabelFont(43);
   hframe__1128->GetYaxis()->SetLabelOffset(0.007);
   hframe__1128->GetYaxis()->SetLabelSize(21);
   hframe__1128->GetYaxis()->SetTitleSize(33);
   hframe__1128->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1128->GetYaxis()->SetTitleFont(43);
   hframe__1128->GetZaxis()->SetLabelFont(43);
   hframe__1128->GetZaxis()->SetLabelOffset(0.007);
   hframe__1128->GetZaxis()->SetLabelSize(27);
   hframe__1128->GetZaxis()->SetTitleSize(33);
   hframe__1128->GetZaxis()->SetTitleOffset(1);
   hframe__1128->GetZaxis()->SetTitleFont(43);
   hframe__1128->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3687[19] = {
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
   850,
   950,
   1050,
   1150,
   1300};
   Double_t BackgroundStatSystError_fy3687[19] = {
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
   Double_t BackgroundStatSystError_felx3687[19] = {
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
   50,
   50,
   50,
   50,
   100};
   Double_t BackgroundStatSystError_fely3687[19] = {
   0.06795267,
   0.02224997,
   0.01669968,
   0.01618738,
   0.0177864,
   0.02152246,
   0.02651929,
   0.03266805,
   0.03925644,
   0.04655142,
   0.05616747,
   0.06808328,
   0.0787216,
   0.09503641,
   0.08077895,
   0.1066921,
   0.1477675,
   0.2378727,
   0.1999914};
   Double_t BackgroundStatSystError_fehx3687[19] = {
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
   50,
   50,
   50,
   50,
   100};
   Double_t BackgroundStatSystError_fehy3687[19] = {
   0.06795267,
   0.02224997,
   0.01669968,
   0.01618738,
   0.0177864,
   0.02152246,
   0.02651929,
   0.03266805,
   0.03925644,
   0.04655142,
   0.05616747,
   0.06808328,
   0.0787216,
   0.09503641,
   0.08077895,
   0.1066921,
   0.1477675,
   0.2378727,
   0.1999914};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3687,BackgroundStatSystError_fy3687,BackgroundStatSystError_felx3687,BackgroundStatSystError_fehx3687,BackgroundStatSystError_fely3687,BackgroundStatSystError_fehy3687);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1385;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError367936833687 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError367936833687","Graph",100,0,1530);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMinimum(0.7145528);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMaximum(1.285447);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError367936833687);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3688[20] = {
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
   850,
   950,
   1050,
   1150,
   1300};
   Double_t BackgroundStatError_fy3688[20] = {
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
   Double_t BackgroundStatError_felx3688[20] = {
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
   50,
   50,
   50,
   50,
   100};
   Double_t BackgroundStatError_fely3688[20] = {
   0,
   0.06795267,
   0.02224997,
   0.01669968,
   0.01618738,
   0.0177864,
   0.02152246,
   0.02651929,
   0.03266805,
   0.03925644,
   0.04655142,
   0.05616747,
   0.06808328,
   0.0787216,
   0.09503641,
   0.08077895,
   0.1066921,
   0.1477675,
   0.2378727,
   0.1999914};
   Double_t BackgroundStatError_fehx3688[20] = {
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
   50,
   50,
   50,
   50,
   100};
   Double_t BackgroundStatError_fehy3688[20] = {
   0,
   0.06795267,
   0.02224997,
   0.01669968,
   0.01618738,
   0.0177864,
   0.02152246,
   0.02651929,
   0.03266805,
   0.03925644,
   0.04655142,
   0.05616747,
   0.06808328,
   0.0787216,
   0.09503641,
   0.08077895,
   0.1066921,
   0.1477675,
   0.2378727,
   0.1999914};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3688,BackgroundStatError_fy3688,BackgroundStatError_felx3688,BackgroundStatError_fehx3688,BackgroundStatError_fely3688,BackgroundStatError_fehy3688);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1384;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError368036843688 = new TH1F("Graph_Graph_Graph_BackgroundStatError368036843688","Graph",100,0,1535);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMinimum(0.7145528);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMaximum(1.285447);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError368036843688->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError368036843688);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx162[2] = {
   100,
   1500};
   Double_t Graph0_fy162[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx162,Graph0_fy162);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0160161162 = new TH1F("Graph_Graph_Graph_Graph0160161162","Graph",100,0,1640);
   Graph_Graph_Graph_Graph0160161162->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0160161162->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0160161162->SetDirectory(0);
   Graph_Graph_Graph_Graph0160161162->SetStats(0);
   Graph_Graph_Graph_Graph0160161162->SetLineStyle(0);
   Graph_Graph_Graph_Graph0160161162->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0160161162->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0160161162->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0160161162->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0160161162);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3689[19] = {
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
   850,
   950,
   1050,
   1150,
   1300};
   Double_t Graph1_fy3689[19] = {
   0.7765022,
   0.9602124,
   1.003971,
   1.027212,
   1.05164,
   1.017926,
   0.9856246,
   1.051621,
   1.035927,
   0.9427667,
   0.9658403,
   1.037276,
   0.9866744,
   0.9478665,
   0.9441523,
   0.9201197,
   1.322522,
   1.759311,
   1.503061};
   Double_t Graph1_felx3689[19] = {
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
   50,
   50,
   50,
   50,
   100};
   Double_t Graph1_fely3689[19] = {
   0.06493438,
   0.02407311,
   0.01857932,
   0.01871684,
   0.02112171,
   0.02471013,
   0.02939872,
   0.03797183,
   0.04516857,
   0.05083057,
   0.06313896,
   0.07605675,
   0.09161042,
   0.1094502,
   0.08961497,
   0.1229562,
   0.2145414,
   0.3591178,
   0.3645459};
   Double_t Graph1_fehx3689[19] = {
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
   50,
   50,
   50,
   50,
   100};
   Double_t Graph1_fehy3689[19] = {
   0.06493438,
   0.02407311,
   0.01857932,
   0.01871684,
   0.02112171,
   0.02471013,
   0.02939872,
   0.03797183,
   0.04516857,
   0.05083057,
   0.06313896,
   0.07605675,
   0.09161042,
   0.1094502,
   0.08961497,
   0.1229562,
   0.2145414,
   0.3591178,
   0.3645459};
   grae = new TGraphAsymmErrors(19,Graph1_fx3689,Graph1_fy3689,Graph1_felx3689,Graph1_fehx3689,Graph1_fely3689,Graph1_fehy3689);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1368136853689 = new TH1F("Graph_Graph_Graph_Graph1368136853689","Graph",100,0,1530);
   Graph_Graph_Graph_Graph1368136853689->SetMinimum(0.5708817);
   Graph_Graph_Graph_Graph1368136853689->SetMaximum(2.259115);
   Graph_Graph_Graph_Graph1368136853689->SetDirectory(0);
   Graph_Graph_Graph_Graph1368136853689->SetStats(0);
   Graph_Graph_Graph_Graph1368136853689->SetLineStyle(0);
   Graph_Graph_Graph_Graph1368136853689->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1368136853689->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1368136853689->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1368136853689->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1368136853689);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1129 = new TH1F("hframe_copy__1129","",1000,100,1500);
   hframe_copy__1129->SetMinimum(0.3);
   hframe_copy__1129->SetMaximum(1.7);
   hframe_copy__1129->SetDirectory(0);
   hframe_copy__1129->SetStats(0);
   hframe_copy__1129->SetLineStyle(0);
   hframe_copy__1129->SetMarkerStyle(20);
   hframe_copy__1129->GetXaxis()->SetTitle("H_{T, b} (GeV)");
   hframe_copy__1129->GetXaxis()->SetNdivisions(8);
   hframe_copy__1129->GetXaxis()->SetLabelFont(43);
   hframe_copy__1129->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1129->GetXaxis()->SetLabelSize(27);
   hframe_copy__1129->GetXaxis()->SetTitleSize(33);
   hframe_copy__1129->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1129->GetXaxis()->SetTitleFont(43);
   hframe_copy__1129->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1129->GetYaxis()->SetNdivisions(505);
   hframe_copy__1129->GetYaxis()->SetLabelFont(43);
   hframe_copy__1129->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1129->GetYaxis()->SetLabelSize(21);
   hframe_copy__1129->GetYaxis()->SetTitleSize(33);
   hframe_copy__1129->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1129->GetYaxis()->SetTitleFont(43);
   hframe_copy__1129->GetZaxis()->SetLabelFont(43);
   hframe_copy__1129->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1129->GetZaxis()->SetLabelSize(27);
   hframe_copy__1129->GetZaxis()->SetTitleSize(33);
   hframe_copy__1129->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1129->GetZaxis()->SetTitleFont(43);
   hframe_copy__1129->Draw("sameaxis");
   HTb_2->Modified();
   HTb->cd();
  
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
   HTb->cd();
  
// ------------>Primitives in pad: HTb_1
   TPad *HTb_1 = new TPad("HTb_1", "HTb_1",0,0.2897959,1,1);
   HTb_1->Draw();
   HTb_1->cd();
   HTb_1->Range(-183.5443,-2.100543,1588.608,2.926612);
   HTb_1->SetFillColor(0);
   HTb_1->SetFillStyle(4000);
   HTb_1->SetBorderMode(0);
   HTb_1->SetBorderSize(2);
   HTb_1->SetLogy();
   HTb_1->SetTickx(1);
   HTb_1->SetTicky(1);
   HTb_1->SetLeftMargin(0.16);
   HTb_1->SetRightMargin(0.05);
   HTb_1->SetTopMargin(0.06);
   HTb_1->SetBottomMargin(0.02);
   HTb_1->SetFrameFillStyle(0);
   HTb_1->SetFrameBorderMode(0);
   HTb_1->SetFrameFillStyle(0);
   HTb_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1130 = new TH1F("hframe__1130","",1000,100,1500);
   hframe__1130->SetMinimum(0.01);
   hframe__1130->SetMaximum(421.68);
   hframe__1130->SetDirectory(0);
   hframe__1130->SetStats(0);
   hframe__1130->SetLineStyle(0);
   hframe__1130->SetMarkerStyle(20);
   hframe__1130->GetXaxis()->SetNdivisions(8);
   hframe__1130->GetXaxis()->SetLabelFont(43);
   hframe__1130->GetXaxis()->SetLabelOffset(0.007);
   hframe__1130->GetXaxis()->SetLabelSize(0);
   hframe__1130->GetXaxis()->SetTitleSize(0);
   hframe__1130->GetXaxis()->SetTitleOffset(0.9);
   hframe__1130->GetXaxis()->SetTitleFont(43);
   hframe__1130->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe__1130->GetYaxis()->SetLabelFont(43);
   hframe__1130->GetYaxis()->SetLabelOffset(0.007);
   hframe__1130->GetYaxis()->SetLabelSize(27);
   hframe__1130->GetYaxis()->SetTitleSize(33);
   hframe__1130->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1130->GetYaxis()->SetTitleFont(43);
   hframe__1130->GetZaxis()->SetLabelFont(43);
   hframe__1130->GetZaxis()->SetLabelOffset(0.007);
   hframe__1130->GetZaxis()->SetLabelSize(27);
   hframe__1130->GetZaxis()->SetTitleSize(33);
   hframe__1130->GetZaxis()->SetTitleOffset(1);
   hframe__1130->GetZaxis()->SetTitleFont(43);
   hframe__1130->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis571[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *StackedMCstackHist_stack_160_stack_161_stack_162 = new TH1F("StackedMCstackHist_stack_160_stack_161_stack_162","StackedMCstackHist",20, xAxis571);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMinimum(0.02345768);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMaximum(93.8307);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetDirectory(0);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetStats(0);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetLineStyle(0);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMarkerStyle(20);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_160_stack_161_stack_162->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_160_stack_161_stack_162);
   
   Double_t xAxis572[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_HTbInclusive",20, xAxis572);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.07740983);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.9461413);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,2.020001);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,2.219394);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1.873595);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.318203);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.9674447);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.7166183);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.4419018);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.3826166);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.2546269);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.1488084);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.1156389);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.07827161);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.06491329);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.03938061);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.02981003);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.006381521);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.009223932);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.01645958);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.04946758);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.07591926);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.08679385);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.07177372);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.06043945);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.05234105);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.04574208);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.03477432);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.03477539);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.03037879);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.02235337);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.01929346);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.01600509);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.009101416);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.007675689);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.006700935);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.002301533);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.003300425);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(3995.304);
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
   Double_t xAxis573[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_HTbInclusive",20, xAxis573);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1.319017);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,15.64906);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,29.6243);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,31.1067);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,24.33516);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,16.58981);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,10.84292);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,7.391727);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,4.897884);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,3.419767);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,2.390395);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1.691818);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1.202703);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.8617358);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.5119045);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.3104366);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.1684242);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.08214034);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.05073408);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.04020306);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.1394929);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1922374);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1971174);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1739786);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1434244);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.115595);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.09488464);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.07729796);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.06450955);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.05350751);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.04477849);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.03749172);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.03188655);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.01727179);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.0134586);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.009815113);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.006829317);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.003844258);
   TT_stack_2_stack_2_stack_2->SetEntries(123515.9);
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
   Double_t xAxis574[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_HTbInclusive",20, xAxis574);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,2.286757);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,16.5433);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,26.52469);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,25.3181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,20.93664);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,15.43431);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,10.99751);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,6.478659);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4.815366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3.495286);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2.200499);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1.745691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1.032991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,0.642494);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,0.5988399);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.2587993);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.08909563);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.04789517);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,-0.003406752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.2464831);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.7223233);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.9491604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.9245402);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.8171539);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.7005276);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.5913883);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.4647412);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.3895403);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.3317179);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.2651142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.238984);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.1802343);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.1461021);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.09294002);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.0630591);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.04076082);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.03163951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.01011136);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(4301.141);
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
   Double_t xAxis575[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1131 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1131","h_SR_HTbInclusive",20, xAxis575);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(2,0.01033304);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(3,0.1215741);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(4,0.3612103);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(5,0.6720806);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(6,0.918173);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(7,1.32348);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(8,1.35068);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(9,1.407372);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(10,1.536192);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(11,1.284721);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(12,1.005768);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(13,0.7720664);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(14,0.4907285);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(15,0.3255706);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(16,0.1542397);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(17,0.05960448);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(18,0.02640362);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(19,0.004252208);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(20,0.002394897);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(2,0.004852155);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(3,0.01667924);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(4,0.02803455);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(5,0.03651494);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(6,0.04245364);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(7,0.04738034);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(8,0.05098111);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(9,0.05249114);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(10,0.05156084);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(11,0.04818776);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(12,0.04362918);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(13,0.03808197);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(14,0.03166862);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(15,0.02540163);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(16,0.01253245);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(17,0.007566611);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(18,0.004590454);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(19,0.002558929);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(20,0.001126619);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetEntries(6343.995);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3690[20] = {
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
   850,
   950,
   1050,
   1150,
   1300};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3690[20] = {
   0,
   3.683183,
   33.1385,
   58.16899,
   58.64419,
   47.14539,
   33.34232,
   22.80787,
   14.587,
   10.15515,
   7.29767,
   4.845521,
   3.586317,
   2.351333,
   1.582501,
   1.175658,
   0.6086165,
   0.2873299,
   0.136417,
   0.05655126};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3690[20] = {
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
   50,
   50,
   50,
   50,
   100};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3690[20] = {
   0,
   0.2502821,
   0.7373305,
   0.9714033,
   0.949296,
   0.8385467,
   0.7176088,
   0.6048487,
   0.4765289,
   0.3986551,
   0.3397169,
   0.2721607,
   0.2441682,
   0.1851007,
   0.1503953,
   0.0949684,
   0.06493459,
   0.04245802,
   0.03244989,
   0.01130977};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3690[20] = {
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
   50,
   50,
   50,
   50,
   100};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3690[20] = {
   0,
   0.2502821,
   0.7373305,
   0.9714033,
   0.949296,
   0.8385467,
   0.7176088,
   0.6048487,
   0.4765289,
   0.3986551,
   0.3397169,
   0.2721607,
   0.2441682,
   0.1851007,
   0.1503953,
   0.0949684,
   0.06493459,
   0.04245802,
   0.03244989,
   0.01130977};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3690,BkgSum-SR-Inclusive_sum_errors_fy3690,BkgSum-SR-Inclusive_sum_errors_felx3690,BkgSum-SR-Inclusive_sum_errors_fehx3690,BkgSum-SR-Inclusive_sum_errors_fely3690,BkgSum-SR-Inclusive_sum_errors_fehy3690);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1383;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690","Graph",100,0,1535);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMinimum(0.06555284);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMaximum(65.55284);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors368236863690);
   
   grae->Draw("e2 ");
   Double_t xAxis576[21] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1400}; 
   
   TH1F *Data__1132 = new TH1F("Data__1132","h_SR_HTbInclusive",20, xAxis576);
   Data__1132->SetBinContent(2,2.86);
   Data__1132->SetBinContent(3,31.82);
   Data__1132->SetBinContent(4,58.4);
   Data__1132->SetBinContent(5,60.24);
   Data__1132->SetBinContent(6,49.58);
   Data__1132->SetBinContent(7,33.94);
   Data__1132->SetBinContent(8,22.48);
   Data__1132->SetBinContent(9,15.34);
   Data__1132->SetBinContent(10,10.52);
   Data__1132->SetBinContent(11,6.88);
   Data__1132->SetBinContent(12,4.68);
   Data__1132->SetBinContent(13,3.72);
   Data__1132->SetBinContent(14,2.32);
   Data__1132->SetBinContent(15,1.5);
   Data__1132->SetBinContent(16,1.11);
   Data__1132->SetBinContent(17,0.56);
   Data__1132->SetBinContent(18,0.38);
   Data__1132->SetBinContent(19,0.24);
   Data__1132->SetBinContent(20,0.085);
   Data__1132->SetBinError(2,0.2391652);
   Data__1132->SetBinError(3,0.7977468);
   Data__1132->SetBinError(4,1.08074);
   Data__1132->SetBinError(5,1.097634);
   Data__1132->SetBinError(6,0.9957911);
   Data__1132->SetBinError(7,0.8238932);
   Data__1132->SetBinError(8,0.6705222);
   Data__1132->SetBinError(9,0.5538953);
   Data__1132->SetBinError(10,0.4586938);
   Data__1132->SetBinError(11,0.3709447);
   Data__1132->SetBinError(12,0.3059412);
   Data__1132->SetBinError(13,0.2727636);
   Data__1132->SetBinError(14,0.2154066);
   Data__1132->SetBinError(15,0.1732051);
   Data__1132->SetBinError(16,0.1053565);
   Data__1132->SetBinError(17,0.07483315);
   Data__1132->SetBinError(18,0.06164414);
   Data__1132->SetBinError(19,0.04898979);
   Data__1132->SetBinError(20,0.02061553);
   Data__1132->SetEntries(15393.43);
   Data__1132->SetDirectory(0);
   Data__1132->SetFillStyle(3001);
   Data__1132->SetLineWidth(2);
   Data__1132->SetMarkerStyle(20);
   Data__1132->SetMarkerSize(1.2);
   Data__1132->GetXaxis()->SetRange(1,100);
   Data__1132->GetXaxis()->SetLabelFont(42);
   Data__1132->GetXaxis()->SetTitleOffset(1);
   Data__1132->GetXaxis()->SetTitleFont(42);
   Data__1132->GetYaxis()->SetLabelFont(42);
   Data__1132->GetYaxis()->SetTitleFont(42);
   Data__1132->GetZaxis()->SetLabelFont(42);
   Data__1132->GetZaxis()->SetTitleOffset(1);
   Data__1132->GetZaxis()->SetTitleFont(42);
   Data__1132->Draw("EP same");
   
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

   ci = 1383;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1383;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1133 = new TH1F("hframe_copy__1133","",1000,100,1500);
   hframe_copy__1133->SetMinimum(0.01);
   hframe_copy__1133->SetMaximum(421.68);
   hframe_copy__1133->SetDirectory(0);
   hframe_copy__1133->SetStats(0);
   hframe_copy__1133->SetLineStyle(0);
   hframe_copy__1133->SetMarkerStyle(20);
   hframe_copy__1133->GetXaxis()->SetNdivisions(8);
   hframe_copy__1133->GetXaxis()->SetLabelFont(43);
   hframe_copy__1133->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1133->GetXaxis()->SetLabelSize(0);
   hframe_copy__1133->GetXaxis()->SetTitleSize(0);
   hframe_copy__1133->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1133->GetXaxis()->SetTitleFont(43);
   hframe_copy__1133->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__1133->GetYaxis()->SetLabelFont(43);
   hframe_copy__1133->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1133->GetYaxis()->SetLabelSize(27);
   hframe_copy__1133->GetYaxis()->SetTitleSize(33);
   hframe_copy__1133->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1133->GetYaxis()->SetTitleFont(43);
   hframe_copy__1133->GetZaxis()->SetLabelFont(43);
   hframe_copy__1133->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1133->GetZaxis()->SetLabelSize(27);
   hframe_copy__1133->GetZaxis()->SetTitleSize(33);
   hframe_copy__1133->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1133->GetZaxis()->SetTitleFont(43);
   hframe_copy__1133->Draw("sameaxis");
   
   TH1F *hframe_copy__1134 = new TH1F("hframe_copy__1134","",1000,100,1500);
   hframe_copy__1134->SetMinimum(0.01);
   hframe_copy__1134->SetMaximum(421.68);
   hframe_copy__1134->SetDirectory(0);
   hframe_copy__1134->SetStats(0);
   hframe_copy__1134->SetLineStyle(0);
   hframe_copy__1134->SetMarkerStyle(20);
   hframe_copy__1134->GetXaxis()->SetNdivisions(8);
   hframe_copy__1134->GetXaxis()->SetLabelFont(43);
   hframe_copy__1134->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1134->GetXaxis()->SetLabelSize(0);
   hframe_copy__1134->GetXaxis()->SetTitleSize(0);
   hframe_copy__1134->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1134->GetXaxis()->SetTitleFont(43);
   hframe_copy__1134->GetYaxis()->SetTitle("< Events / 50-200 GeV >");
   hframe_copy__1134->GetYaxis()->SetLabelFont(43);
   hframe_copy__1134->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1134->GetYaxis()->SetLabelSize(27);
   hframe_copy__1134->GetYaxis()->SetTitleSize(33);
   hframe_copy__1134->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1134->GetYaxis()->SetTitleFont(43);
   hframe_copy__1134->GetZaxis()->SetLabelFont(43);
   hframe_copy__1134->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1134->GetZaxis()->SetLabelSize(27);
   hframe_copy__1134->GetZaxis()->SetTitleSize(33);
   hframe_copy__1134->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1134->GetZaxis()->SetTitleFont(43);
   hframe_copy__1134->Draw("sameaxis");
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
   HTb_1->Modified();
   HTb->cd();
   HTb->Modified();
   HTb->cd();
   HTb->SetSelected(HTb);
}
