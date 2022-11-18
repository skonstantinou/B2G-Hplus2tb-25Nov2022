void HTb()
{
//=========Macro generated from canvas: HTb/HTb
//=========  (Fri Nov 18 13:34:21 2022) by ROOT version 6.20/02
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
   0.08157302,
   0.02503857,
   0.01918948,
   0.01941175,
   0.02156569,
   0.02428618,
   0.02823944,
   0.03462158,
   0.04198813,
   0.04624648,
   0.05753309,
   0.06349543,
   0.08038479,
   0.08779669,
   0.08636068,
   0.09732795,
   0.1414094,
   0.1664359,
   0.1632157};
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
   0.08157302,
   0.02503857,
   0.01918948,
   0.01941175,
   0.02156569,
   0.02428618,
   0.02823944,
   0.03462158,
   0.04198813,
   0.04624648,
   0.05753309,
   0.06349543,
   0.08038479,
   0.08779669,
   0.08636068,
   0.09732795,
   0.1414094,
   0.1664359,
   0.1632157};
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
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMinimum(0.8002769);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMaximum(1.199723);
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
   0.08157302,
   0.02503857,
   0.01918948,
   0.01941175,
   0.02156569,
   0.02428618,
   0.02823944,
   0.03462158,
   0.04198813,
   0.04624648,
   0.05753309,
   0.06349543,
   0.08038479,
   0.08779669,
   0.08636068,
   0.09732795,
   0.1414094,
   0.1664359,
   0.1632157};
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
   0.08157302,
   0.02503857,
   0.01918948,
   0.01941175,
   0.02156569,
   0.02428618,
   0.02823944,
   0.03462158,
   0.04198813,
   0.04624648,
   0.05753309,
   0.06349543,
   0.08038479,
   0.08779669,
   0.08636068,
   0.09732795,
   0.1414094,
   0.1664359,
   0.1632157};
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
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMinimum(0.8002769);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMaximum(1.199723);
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
   1.119085,
   0.9222629,
   0.9480118,
   1.017707,
   1.040408,
   1.02605,
   0.8971715,
   1.10656,
   1.164756,
   0.8738452,
   1.204881,
   1.08819,
   1.131481,
   1.130604,
   1.123574,
   0.9578814,
   0.9176651,
   0.3821526,
   0.8519508};
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
   0.09852998,
   0.0268823,
   0.02029487,
   0.02100711,
   0.02341693,
   0.02659909,
   0.02813293,
   0.03957049,
   0.04891514,
   0.04684302,
   0.06887849,
   0.07254602,
   0.09207859,
   0.1036423,
   0.1013093,
   0.1064313,
   0.1508632,
   0.1152234,
   0.163958};
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
   0.09852998,
   0.0268823,
   0.02029487,
   0.02100711,
   0.02341693,
   0.02659909,
   0.02813293,
   0.03957049,
   0.04891514,
   0.04684302,
   0.06887849,
   0.07254602,
   0.09207859,
   0.1036423,
   0.1013093,
   0.1064313,
   0.1508632,
   0.1152234,
   0.163958};
   grae = new TGraphAsymmErrors(19,Graph1_fx3689,Graph1_fy3689,Graph1_felx3689,Graph1_fehx3689,Graph1_fely3689,Graph1_fehy3689);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1368136853689 = new TH1F("Graph_Graph_Graph_Graph1368136853689","Graph",100,0,1530);
   Graph_Graph_Graph_Graph1368136853689->SetMinimum(0.1662462);
   Graph_Graph_Graph_Graph1368136853689->SetMaximum(1.374443);
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
   HTb_1->Range(-183.5443,-2.098204,1588.608,2.811979);
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
   hframe__1130->SetMaximum(329.1303);
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
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMinimum(0.01844931);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMaximum(73.79726);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.02563103);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.4736176);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.9542351);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.9161835);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.7486161);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.645253);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.4744718);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.4042905);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.2570914);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.1925667);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.131516);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.112311);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.1143647);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.06940525);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.04171243);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.02787402);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.01364059);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.004093123);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.00376608);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.009514912);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.05341837);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.0670118);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.06163874);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.05408182);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.05004183);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.05560435);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.03909349);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.04499045);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.02666326);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.0223873);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.01934818);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.01868372);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.0146686);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.009645193);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.005476027);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.004644452);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.00205516);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.001935704);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1229.152);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.5388923);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,7.183854);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,14.19769);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,14.87618);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,11.97891);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,8.974454);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,6.386119);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,4.300057);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2.97126);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2.086302);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1.474702);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1.153375);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.7701008);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.6193198);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.3741202);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.1981776);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.115124);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.06939258);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.04108978);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.0247482);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.09177277);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1289919);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.1326247);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.1190752);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1031718);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.08722305);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.07182235);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.05923341);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.05007749);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.04193134);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.03683508);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.02987442);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.02706105);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.01480132);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.01081758);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.008201334);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.006403273);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.003382992);
   TT_stack_2_stack_2_stack_2->SetEntries(66608.88);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,1.740931);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,17.8667);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,30.88126);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,30.33093);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,25.21914);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,19.38474);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,15.81066);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,9.429551);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,6.507595);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,5.685929);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,3.473119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,2.86962);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,1.784604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,1.416345);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,0.678888);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.6195645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.2744326);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.2143574);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.113604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.1861844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.6302053);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.8713107);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.8833083);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.807828);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.6950116);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.6318119);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.4824571);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.4019701);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.3639485);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.2883382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.2592555);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.2116394);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.1822369);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.09287548);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.0814041);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.05623145);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.04743307);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.02556775);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7094.215);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(2,-0.00051643);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(3,0.01050329);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(4,0.01667114);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(5,0.03122089);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(6,0.02995708);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(7,0.05147441);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(8,0.03283945);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(9,0.06092194);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(10,0.07872853);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(11,0.03663631);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(12,0.01804661);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(13,0.02467028);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(14,0.01525393);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(15,0.007834316);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(16,0.003528698);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(17,0.0001753407);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(18,-0.0006068461);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(19,0.001147095);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(20,0.000621538);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(2,0.00051643);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(3,0.003303664);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(4,0.006535964);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(5,0.008130042);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(6,0.01037961);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(7,0.01203626);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(8,0.01252428);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(9,0.01294546);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(10,0.01234013);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(11,0.01052459);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(12,0.00984896);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(13,0.0087614);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(14,0.006955155);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(15,0.005266377);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(16,0.002566151);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(17,0.00153831);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(18,0.0008117057);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(19,0.0005751471);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(20,0.0003640466);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetEntries(143.9716);
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
   2.305454,
   25.52418,
   46.03318,
   46.12329,
   37.94666,
   29.00445,
   22.67125,
   14.1339,
   9.735947,
   7.964797,
   5.079338,
   4.135306,
   2.669069,
   2.10507,
   1.09472,
   0.8456162,
   0.4031972,
   0.2878431,
   0.1584599};
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
   0.1880628,
   0.6390888,
   0.8833526,
   0.8953336,
   0.8183458,
   0.7044073,
   0.6402234,
   0.489338,
   0.4087942,
   0.3683439,
   0.29223,
   0.262573,
   0.2145526,
   0.1848182,
   0.09454081,
   0.08230209,
   0.05701586,
   0.04790743,
   0.02586313};
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
   0.1880628,
   0.6390888,
   0.8833526,
   0.8953336,
   0.8183458,
   0.7044073,
   0.6402234,
   0.489338,
   0.4087942,
   0.3683439,
   0.29223,
   0.262573,
   0.2145526,
   0.1848182,
   0.09454081,
   0.08230209,
   0.05701586,
   0.04790743,
   0.02586313};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMinimum(0.05172048);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMaximum(51.72048);
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
   Data__1132->SetBinContent(2,2.58);
   Data__1132->SetBinContent(3,23.54);
   Data__1132->SetBinContent(4,43.64);
   Data__1132->SetBinContent(5,46.94);
   Data__1132->SetBinContent(6,39.48);
   Data__1132->SetBinContent(7,29.76);
   Data__1132->SetBinContent(8,20.34);
   Data__1132->SetBinContent(9,15.64);
   Data__1132->SetBinContent(10,11.34);
   Data__1132->SetBinContent(11,6.96);
   Data__1132->SetBinContent(12,6.12);
   Data__1132->SetBinContent(13,4.5);
   Data__1132->SetBinContent(14,3.02);
   Data__1132->SetBinContent(15,2.38);
   Data__1132->SetBinContent(16,1.23);
   Data__1132->SetBinContent(17,0.81);
   Data__1132->SetBinContent(18,0.37);
   Data__1132->SetBinContent(19,0.11);
   Data__1132->SetBinContent(20,0.135);
   Data__1132->SetBinError(2,0.2271563);
   Data__1132->SetBinError(3,0.6861487);
   Data__1132->SetBinError(4,0.9342377);
   Data__1132->SetBinError(5,0.9689169);
   Data__1132->SetBinError(6,0.8885944);
   Data__1132->SetBinError(7,0.7714921);
   Data__1132->SetBinError(8,0.6378087);
   Data__1132->SetBinError(9,0.5592853);
   Data__1132->SetBinError(10,0.4762352);
   Data__1132->SetBinError(11,0.3730952);
   Data__1132->SetBinError(12,0.3498571);
   Data__1132->SetBinError(13,0.3);
   Data__1132->SetBinError(14,0.2457641);
   Data__1132->SetBinError(15,0.2181742);
   Data__1132->SetBinError(16,0.1109054);
   Data__1132->SetBinError(17,0.09);
   Data__1132->SetBinError(18,0.06082763);
   Data__1132->SetBinError(19,0.03316625);
   Data__1132->SetBinError(20,0.02598076);
   Data__1132->SetEntries(13013.17);
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
   hframe_copy__1133->SetMaximum(329.1303);
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
   hframe_copy__1134->SetMaximum(329.1303);
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
