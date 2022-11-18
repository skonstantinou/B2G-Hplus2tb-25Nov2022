void HTb()
{
//=========Macro generated from canvas: HTb/HTb
//=========  (Fri Nov 18 13:30:13 2022) by ROOT version 6.20/02
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
   0.1835456,
   0.05754371,
   0.03648159,
   0.03329164,
   0.03586423,
   0.04207631,
   0.04894851,
   0.05851004,
   0.07282039,
   0.0907622,
   0.106433,
   0.1315266,
   0.161579,
   0.2018693,
   0.1682857,
   0.2109311,
   0.5718914,
   0.4454772,
   0.4727356};
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
   0.1835456,
   0.05754371,
   0.03648159,
   0.03329164,
   0.03586423,
   0.04207631,
   0.04894851,
   0.05851004,
   0.07282039,
   0.0907622,
   0.106433,
   0.1315266,
   0.161579,
   0.2018693,
   0.1682857,
   0.2109311,
   0.5718914,
   0.4454772,
   0.4727356};
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
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMinimum(0.3137303);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMaximum(1.68627);
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
   0.1835456,
   0.05754371,
   0.03648159,
   0.03329164,
   0.03586423,
   0.04207631,
   0.04894851,
   0.05851004,
   0.07282039,
   0.0907622,
   0.106433,
   0.1315266,
   0.161579,
   0.2018693,
   0.1682857,
   0.2109311,
   0.5718914,
   0.4454772,
   0.4727356};
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
   0.1835456,
   0.05754371,
   0.03648159,
   0.03329164,
   0.03586423,
   0.04207631,
   0.04894851,
   0.05851004,
   0.07282039,
   0.0907622,
   0.106433,
   0.1315266,
   0.161579,
   0.2018693,
   0.1682857,
   0.2109311,
   0.5718914,
   0.4454772,
   0.4727356};
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
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMinimum(0.3137303);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMaximum(1.68627);
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
   0.4274224,
   0.8603542,
   0.9918419,
   1.052694,
   1.086636,
   1.036411,
   0.9820283,
   0.9827241,
   0.9214928,
   1.045917,
   1.10742,
   1.106239,
   1.259846,
   0.9968365,
   0.9683579,
   0.9248807,
   3.809484,
   0.6307861,
   1.159263};
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
   0.09112677,
   0.03931059,
   0.02674799,
   0.02515702,
   0.0275208,
   0.03127741,
   0.03564537,
   0.04252663,
   0.05127323,
   0.06837371,
   0.08277249,
   0.1031573,
   0.1366495,
   0.1576137,
   0.1229816,
   0.1500355,
   1.018128,
   0.2820961,
   0.4098615};
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
   0.09112677,
   0.03931059,
   0.02674799,
   0.02515702,
   0.0275208,
   0.03127741,
   0.03564537,
   0.04252663,
   0.05127323,
   0.06837371,
   0.08277249,
   0.1031573,
   0.1366495,
   0.1576137,
   0.1229816,
   0.1500355,
   1.018128,
   0.2820961,
   0.4098615};
   grae = new TGraphAsymmErrors(19,Graph1_fx3689,Graph1_fy3689,Graph1_felx3689,Graph1_fehx3689,Graph1_fely3689,Graph1_fehy3689);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1368136853689 = new TH1F("Graph_Graph_Graph_Graph1368136853689","Graph",100,0,1530);
   Graph_Graph_Graph_Graph1368136853689->SetMinimum(0.3026661);
   Graph_Graph_Graph_Graph1368136853689->SetMaximum(5.276744);
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
   HTb_1->Range(-183.5443,-2.095422,1588.608,2.67568);
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
   hframe__1130->SetMaximum(245.14);
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
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMinimum(0.01330681);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMaximum(53.22722);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.01128019);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.07024366);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.3351968);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.4959435);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.3326242);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.2648795);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.2277577);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.1740912);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.08512855);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.08846244);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.03873741);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.03914845);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.02801314);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.02537061);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.01514212);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.01046866);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.007069177);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.002632234);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,-0.0005558424);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.005640808);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.0142155);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.05447598);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.06204827);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.03803424);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.0382941);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.03779277);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.03940664);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.01778135);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.01769679);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.01050247);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.01072822);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.007634197);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.009707303);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.004970145);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.004818245);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.003419758);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.002517274);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.000867813);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(361.6235);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.1175123);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1.820064);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,4.838574);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,5.696426);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,4.717922);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,3.158651);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2.194698);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,1.399289);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.9756172);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.6527812);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,0.4948714);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,0.3603193);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.2603772);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.2007691);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.1080923);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.05109104);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.02911055);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.0150513);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.008192196);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.01203369);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.04725435);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.07737153);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.0835766);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.07609963);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.06240262);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.0519995);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.04131498);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.0346657);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.02813486);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.02449396);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.0209253);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.01763876);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.01539382);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.008117511);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.005387724);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.004293291);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.003073974);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.001517252);
   TT_stack_2_stack_2_stack_2->SetEntries(22153.44);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,0.9006342);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9.244641);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,22.55242);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,27.07465);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,23.64352);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,17.76498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13.03535);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,9.29437);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,5.949618);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3.7333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2.699129);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1.679649);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1.060981);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,0.5763991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,0.5170248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.3493041);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.0005706513);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.06158264);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.02686832);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.1884788);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.6388432);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.00706);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.102611);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.025568);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.8885228);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.7539007);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.633304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.5090086);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.404757);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.3430362);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.2724461);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.2171813);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.1609825);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.1073252);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.08636201);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.02028785);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.03508703);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.01621767);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3172.3);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(2,-0.000534795);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(3,0.0003610463);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(4,0.002805701);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(5,0.0053278);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(6,0.01440808);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(7,0.01849463);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(8,0.01545414);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(9,0.01321971);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(10,0.02220241);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(11,0.0036441);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(12,0.01068258);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(13,0.007324481);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(14,0.008017173);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(15,-0.001536198);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(16,-0.001224811);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(17,0.0005157007);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(20,0.0001561169);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(2,0.000534795);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(3,0.002394435);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(4,0.002852178);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(5,0.004728466);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(6,0.005349908);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(7,0.006585021);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(8,0.006705996);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(9,0.006630532);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(10,0.006168416);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(11,0.005534883);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(12,0.005107541);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(13,0.00455768);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(14,0.003300371);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(15,0.00273676);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(16,0.001327925);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(17,0.0006387419);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(20,0.0001561169);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetEntries(42.68216);
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
   1.029427,
   11.13495,
   27.72619,
   33.26702,
   28.69406,
   21.18851,
   15.4578,
   10.86775,
   7.010364,
   4.474544,
   3.232738,
   2.079117,
   1.349371,
   0.8025388,
   0.6402591,
   0.4108638,
   0.03675038,
   0.07926617,
   0.03450467};
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
   0.1889467,
   0.6407462,
   1.011496,
   1.107513,
   1.02909,
   0.8915342,
   0.7566364,
   0.6358724,
   0.5104975,
   0.4061194,
   0.3440699,
   0.273459,
   0.2180301,
   0.1620079,
   0.1077464,
   0.08666395,
   0.02101723,
   0.03531127,
   0.01631159};
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
   0.1889467,
   0.6407462,
   1.011496,
   1.107513,
   1.02909,
   0.8915342,
   0.7566364,
   0.6358724,
   0.5104975,
   0.4061194,
   0.3440699,
   0.273459,
   0.2180301,
   0.1620079,
   0.1077464,
   0.08666395,
   0.02101723,
   0.03531127,
   0.01631159};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMinimum(0.03781198);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMaximum(37.81198);
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
   Data__1132->SetBinContent(2,0.44);
   Data__1132->SetBinContent(3,9.58);
   Data__1132->SetBinContent(4,27.5);
   Data__1132->SetBinContent(5,35.02);
   Data__1132->SetBinContent(6,31.18);
   Data__1132->SetBinContent(7,21.96);
   Data__1132->SetBinContent(8,15.18);
   Data__1132->SetBinContent(9,10.68);
   Data__1132->SetBinContent(10,6.46);
   Data__1132->SetBinContent(11,4.68);
   Data__1132->SetBinContent(12,3.58);
   Data__1132->SetBinContent(13,2.3);
   Data__1132->SetBinContent(14,1.7);
   Data__1132->SetBinContent(15,0.8);
   Data__1132->SetBinContent(16,0.62);
   Data__1132->SetBinContent(17,0.38);
   Data__1132->SetBinContent(18,0.14);
   Data__1132->SetBinContent(19,0.05);
   Data__1132->SetBinContent(20,0.04);
   Data__1132->SetBinError(2,0.09380832);
   Data__1132->SetBinError(3,0.4377214);
   Data__1132->SetBinError(4,0.7416198);
   Data__1132->SetBinError(5,0.836899);
   Data__1132->SetBinError(6,0.7896835);
   Data__1132->SetBinError(7,0.6627217);
   Data__1132->SetBinError(8,0.5509991);
   Data__1132->SetBinError(9,0.4621688);
   Data__1132->SetBinError(10,0.359444);
   Data__1132->SetBinError(11,0.3059412);
   Data__1132->SetBinError(12,0.2675818);
   Data__1132->SetBinError(13,0.2144761);
   Data__1132->SetBinError(14,0.1843909);
   Data__1132->SetBinError(15,0.1264911);
   Data__1132->SetBinError(16,0.07874008);
   Data__1132->SetBinError(17,0.06164414);
   Data__1132->SetBinError(18,0.03741657);
   Data__1132->SetBinError(19,0.02236068);
   Data__1132->SetBinError(20,0.01414214);
   Data__1132->SetEntries(8645.864);
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
   hframe_copy__1133->SetMaximum(245.14);
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
   hframe_copy__1134->SetMaximum(245.14);
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
