void HTb()
{
//=========Macro generated from canvas: HTb/HTb
//=========  (Fri Nov 18 13:29:56 2022) by ROOT version 6.20/02
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
   0.1182253,
   0.02692775,
   0.01561607,
   0.01364843,
   0.01462137,
   0.01743546,
   0.02107622,
   0.02554131,
   0.03144707,
   0.03765679,
   0.04584569,
   0.05710939,
   0.07113491,
   0.07944335,
   0.08233247,
   0.1127372,
   0.1569135,
   0.2203895,
   0.2735123};
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
   0.1182253,
   0.02692775,
   0.01561607,
   0.01364843,
   0.01462137,
   0.01743546,
   0.02107622,
   0.02554131,
   0.03144707,
   0.03765679,
   0.04584569,
   0.05710939,
   0.07113491,
   0.07944335,
   0.08233247,
   0.1127372,
   0.1569135,
   0.2203895,
   0.2735123};
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
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMinimum(0.6717852);
   Graph_Graph_Graph_BackgroundStatSystError367936833687->SetMaximum(1.328215);
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
   0.1182253,
   0.02692775,
   0.01561607,
   0.01364843,
   0.01462137,
   0.01743546,
   0.02107622,
   0.02554131,
   0.03144707,
   0.03765679,
   0.04584569,
   0.05710939,
   0.07113491,
   0.07944335,
   0.08233247,
   0.1127372,
   0.1569135,
   0.2203895,
   0.2735123};
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
   0.1182253,
   0.02692775,
   0.01561607,
   0.01364843,
   0.01462137,
   0.01743546,
   0.02107622,
   0.02554131,
   0.03144707,
   0.03765679,
   0.04584569,
   0.05710939,
   0.07113491,
   0.07944335,
   0.08233247,
   0.1127372,
   0.1569135,
   0.2203895,
   0.2735123};
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
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMinimum(0.6717852);
   Graph_Graph_Graph_BackgroundStatError368036843688->SetMaximum(1.328215);
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
   0.9793119,
   0.9462828,
   0.9312286,
   0.9698199,
   0.9628765,
   1.022657,
   1.024893,
   0.9551956,
   1.077366,
   0.9878441,
   1.115989,
   1.014617,
   1.117307,
   0.7023249,
   1.190745,
   0.9192337,
   0.6159573,
   0.7253891,
   0.9263374};
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
   0.1413515,
   0.03226797,
   0.01891819,
   0.01693637,
   0.01766523,
   0.0214078,
   0.02560633,
   0.0301307,
   0.03928751,
   0.04605847,
   0.05889967,
   0.06935775,
   0.09215395,
   0.08003735,
   0.1120159,
   0.1287185,
   0.1413103,
   0.218713,
   0.3087791};
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
   0.1413515,
   0.03226797,
   0.01891819,
   0.01693637,
   0.01766523,
   0.0214078,
   0.02560633,
   0.0301307,
   0.03928751,
   0.04605847,
   0.05889967,
   0.06935775,
   0.09215395,
   0.08003735,
   0.1120159,
   0.1287185,
   0.1413103,
   0.218713,
   0.3087791};
   grae = new TGraphAsymmErrors(19,Graph1_fx3689,Graph1_fy3689,Graph1_felx3689,Graph1_fehx3689,Graph1_fely3689,Graph1_fehy3689);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1368136853689 = new TH1F("Graph_Graph_Graph_Graph1368136853689","Graph",100,0,1530);
   Graph_Graph_Graph_Graph1368136853689->SetMinimum(0.3918356);
   Graph_Graph_Graph_Graph1368136853689->SetMaximum(1.385573);
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
   HTb_1->Range(-183.5443,-2.101762,1588.608,2.986353);
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
   hframe__1130->SetMaximum(479.8061);
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
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMinimum(0.02704832);
   StackedMCstackHist_stack_160_stack_161_stack_162->SetMaximum(108.1933);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.0186751);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.4212012);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,1.215225);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1.673394);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1.468484);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.17768);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.7953068);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.5728358);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.3774776);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.2894545);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.2111088);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.1766428);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.08827827);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.09153005);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.04677431);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.03041227);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.01071464);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.005671535);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.0004881787);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.006421844);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.04141999);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.08692771);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.09768248);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.08066519);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.08347819);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.05480888);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.046403);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.03931057);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.03323938);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.02585333);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.02457114);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.02076137);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.018209);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.009212268);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.007330458);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.004334304);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.003043504);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.001204215);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1775.881);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,0.5114492);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,11.48714);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,34.48757);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,45.54757);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,37.77357);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,25.74569);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,17.21343);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,11.4746);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,7.762994);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,5.356144);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,3.563852);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,2.258395);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,1.644049);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,1.121229);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.6110984);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.2652807);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.1149705);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.05457683);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.01863702);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.02379292);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.1152961);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.201263);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.2311439);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.2107549);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.1746564);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.1430351);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.1167476);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.09574524);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.07950982);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.06494257);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.05169936);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.04391559);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.03625873);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.01909083);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.01242208);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.008007767);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.005458309);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.002348067);
   TT_stack_2_stack_2_stack_2->SetEntries(176320.9);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,0.4501558);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,6.268044);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,16.33598);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,20.39984);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,22.46886);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,17.70548);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13.25306);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,8.995375);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,5.819495);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3.667611);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,2.658792);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1.783305);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,0.8989987);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,0.9799579);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,0.2911127);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.259117);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.1827778);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.09139439);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.02945322);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.1132434);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.4738689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.7825105);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.8881488);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.8736234);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.753661);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.6408279);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.5225715);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.4266246);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.3399526);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.2865578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.2340077);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.1807662);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.1694056);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.07520195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.06086194);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.0475378);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.03283096);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.01302211);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3607.682);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(2,0.0007386466);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(3,0.01069097);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(4,0.02389153);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(5,0.05318564);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(6,0.06920672);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(7,0.07413775);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(8,0.1005862);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(9,0.07960766);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(10,0.09690127);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(11,0.0552517);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(12,0.02677109);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(13,0.02568464);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(14,0.0181289);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(15,0.005350205);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(16,0.005974194);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(17,-0.001269061);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(18,0.001144295);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(19,0.0009165986);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinContent(20,0.0001745684);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(2,0.0008040051);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(3,0.003555792);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(4,0.006690696);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(5,0.010294);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(6,0.01255682);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(7,0.01435785);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(8,0.01509724);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(9,0.01501176);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(10,0.01418178);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(11,0.01340819);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(12,0.01117098);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(13,0.009350671);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(14,0.007434897);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(15,0.005743963);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(16,0.002801135);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(17,0.001730616);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(18,0.001070864);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(19,0.0006495125);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetBinError(20,0.0001745684);
   ChargedHiggs_HplusTBHplusToTB_M_800__1131->SetEntries(249.9782);
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
   0.9802802,
   18.17639,
   52.03878,
   67.6208,
   61.71092,
   44.62886,
   31.2618,
   21.04281,
   13.95997,
   9.31321,
   6.433753,
   4.218343,
   2.631326,
   2.192717,
   0.9489855,
   0.5548099,
   0.3084629,
   0.1516428,
   0.04857842};
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
   0.1158939,
   0.4894492,
   0.8126413,
   0.922918,
   0.9022984,
   0.7781249,
   0.6588804,
   0.5374609,
   0.439,
   0.3507056,
   0.2949598,
   0.240907,
   0.1871792,
   0.1741968,
   0.07813231,
   0.06254774,
   0.048402,
   0.03342047,
   0.01328679};
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
   0.1158939,
   0.4894492,
   0.8126413,
   0.922918,
   0.9022984,
   0.7781249,
   0.6588804,
   0.5374609,
   0.439,
   0.3507056,
   0.2949598,
   0.240907,
   0.1871792,
   0.1741968,
   0.07813231,
   0.06254774,
   0.048402,
   0.03342047,
   0.01328679};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMinimum(0.07539809);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors368236863690->SetMaximum(75.39809);
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
   Data__1132->SetBinContent(2,0.96);
   Data__1132->SetBinContent(3,17.2);
   Data__1132->SetBinContent(4,48.46);
   Data__1132->SetBinContent(5,65.58);
   Data__1132->SetBinContent(6,59.42);
   Data__1132->SetBinContent(7,45.64);
   Data__1132->SetBinContent(8,32.04);
   Data__1132->SetBinContent(9,20.1);
   Data__1132->SetBinContent(10,15.04);
   Data__1132->SetBinContent(11,9.2);
   Data__1132->SetBinContent(12,7.18);
   Data__1132->SetBinContent(13,4.28);
   Data__1132->SetBinContent(14,2.94);
   Data__1132->SetBinContent(15,1.54);
   Data__1132->SetBinContent(16,1.13);
   Data__1132->SetBinContent(17,0.51);
   Data__1132->SetBinContent(18,0.19);
   Data__1132->SetBinContent(19,0.11);
   Data__1132->SetBinContent(20,0.045);
   Data__1132->SetBinError(2,0.1385641);
   Data__1132->SetBinError(3,0.5865151);
   Data__1132->SetBinError(4,0.9844796);
   Data__1132->SetBinError(5,1.145251);
   Data__1132->SetBinError(6,1.090138);
   Data__1132->SetBinError(7,0.9554057);
   Data__1132->SetBinError(8,0.8004998);
   Data__1132->SetBinError(9,0.6340347);
   Data__1132->SetBinError(10,0.5484524);
   Data__1132->SetBinError(11,0.4289522);
   Data__1132->SetBinError(12,0.3789459);
   Data__1132->SetBinError(13,0.2925748);
   Data__1132->SetBinError(14,0.2424871);
   Data__1132->SetBinError(15,0.1754993);
   Data__1132->SetBinError(16,0.1063015);
   Data__1132->SetBinError(17,0.07141428);
   Data__1132->SetBinError(18,0.04358899);
   Data__1132->SetBinError(19,0.03316625);
   Data__1132->SetBinError(20,0.015);
   Data__1132->SetEntries(16628.59);
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
   hframe_copy__1133->SetMaximum(479.8061);
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
   hframe_copy__1134->SetMaximum(479.8061);
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
