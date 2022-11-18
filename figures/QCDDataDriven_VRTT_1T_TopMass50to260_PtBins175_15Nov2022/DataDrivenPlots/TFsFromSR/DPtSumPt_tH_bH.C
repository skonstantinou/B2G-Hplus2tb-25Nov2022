void DPtSumPt_tH_bH()
{
//=========Macro generated from canvas: DPtSumPt_tH_bH/DPtSumPt_tH_bH
//=========  (Fri Nov 18 13:29:05 2022) by ROOT version 6.20/02
   TCanvas *DPtSumPt_tH_bH = new TCanvas("DPtSumPt_tH_bH", "DPtSumPt_tH_bH",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   DPtSumPt_tH_bH->SetHighLightColor(2);
   DPtSumPt_tH_bH->Range(0,0,1,1);
   DPtSumPt_tH_bH->SetFillColor(0);
   DPtSumPt_tH_bH->SetBorderMode(0);
   DPtSumPt_tH_bH->SetBorderSize(2);
   DPtSumPt_tH_bH->SetTickx(1);
   DPtSumPt_tH_bH->SetTicky(1);
   DPtSumPt_tH_bH->SetLeftMargin(0.16);
   DPtSumPt_tH_bH->SetRightMargin(0.05);
   DPtSumPt_tH_bH->SetTopMargin(0.06);
   DPtSumPt_tH_bH->SetBottomMargin(0.13);
   DPtSumPt_tH_bH->SetFrameFillStyle(0);
   DPtSumPt_tH_bH->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: DPtSumPt_tH_bH_2
   TPad *DPtSumPt_tH_bH_2 = new TPad("DPtSumPt_tH_bH_2", "DPtSumPt_tH_bH_2",0,0,1,0.304);
   DPtSumPt_tH_bH_2->Draw();
   DPtSumPt_tH_bH_2->cd();
   DPtSumPt_tH_bH_2->Range(-0.2025316,-0.428,1.063291,1.7);
   DPtSumPt_tH_bH_2->SetFillColor(0);
   DPtSumPt_tH_bH_2->SetFillStyle(4000);
   DPtSumPt_tH_bH_2->SetBorderMode(0);
   DPtSumPt_tH_bH_2->SetBorderSize(2);
   DPtSumPt_tH_bH_2->SetTickx(1);
   DPtSumPt_tH_bH_2->SetTicky(1);
   DPtSumPt_tH_bH_2->SetLeftMargin(0.16);
   DPtSumPt_tH_bH_2->SetRightMargin(0.05);
   DPtSumPt_tH_bH_2->SetTopMargin(0);
   DPtSumPt_tH_bH_2->SetBottomMargin(0.3421053);
   DPtSumPt_tH_bH_2->SetFrameFillStyle(0);
   DPtSumPt_tH_bH_2->SetFrameBorderMode(0);
   DPtSumPt_tH_bH_2->SetFrameFillStyle(0);
   DPtSumPt_tH_bH_2->SetFrameBorderMode(0);
   
   TH1F *hframe__960 = new TH1F("hframe__960","",1000,0,1);
   hframe__960->SetMinimum(0.3);
   hframe__960->SetMaximum(1.7);
   hframe__960->SetDirectory(0);
   hframe__960->SetStats(0);
   hframe__960->SetLineStyle(0);
   hframe__960->SetMarkerStyle(20);
   hframe__960->GetXaxis()->SetTitle("p_{T}^{assym}(t^{res}_{H^{#pm}}, b_{H^{#pm}})");
   hframe__960->GetXaxis()->SetNdivisions(8);
   hframe__960->GetXaxis()->SetLabelFont(43);
   hframe__960->GetXaxis()->SetLabelOffset(0.007);
   hframe__960->GetXaxis()->SetLabelSize(27);
   hframe__960->GetXaxis()->SetTitleSize(33);
   hframe__960->GetXaxis()->SetTitleOffset(2.960526);
   hframe__960->GetXaxis()->SetTitleFont(43);
   hframe__960->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__960->GetYaxis()->SetNdivisions(505);
   hframe__960->GetYaxis()->SetLabelFont(43);
   hframe__960->GetYaxis()->SetLabelOffset(0.007);
   hframe__960->GetYaxis()->SetLabelSize(21);
   hframe__960->GetYaxis()->SetTitleSize(33);
   hframe__960->GetYaxis()->SetTitleOffset(1.5625);
   hframe__960->GetYaxis()->SetTitleFont(43);
   hframe__960->GetZaxis()->SetLabelFont(43);
   hframe__960->GetZaxis()->SetLabelOffset(0.007);
   hframe__960->GetZaxis()->SetLabelSize(27);
   hframe__960->GetZaxis()->SetTitleSize(33);
   hframe__960->GetZaxis()->SetTitleOffset(1);
   hframe__960->GetZaxis()->SetTitleFont(43);
   hframe__960->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3591[19] = {
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
   0.925};
   Double_t BackgroundStatSystError_fy3591[19] = {
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
   Double_t BackgroundStatSystError_felx3591[19] = {
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
   Double_t BackgroundStatSystError_fely3591[19] = {
   0.01952414,
   0.02010276,
   0.02062531,
   0.02140053,
   0.0222815,
   0.02344622,
   0.02441273,
   0.02512239,
   0.02564074,
   0.02612446,
   0.02693722,
   0.02785676,
   0.02797946,
   0.03017015,
   0.03673356,
   0.0596133,
   0.1232612,
   0.5449381,
   1};
   Double_t BackgroundStatSystError_fehx3591[19] = {
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
   Double_t BackgroundStatSystError_fehy3591[19] = {
   0.01952414,
   0.02010276,
   0.02062531,
   0.02140053,
   0.0222815,
   0.02344622,
   0.02441273,
   0.02512239,
   0.02564074,
   0.02612446,
   0.02693722,
   0.02785676,
   0.02797946,
   0.03017015,
   0.03673356,
   0.0596133,
   0.1232612,
   0.5449381,
   1};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3591,BackgroundStatSystError_fy3591,BackgroundStatSystError_felx3591,BackgroundStatSystError_fehx3591,BackgroundStatSystError_fely3591,BackgroundStatSystError_fehy3591);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1361;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError358335873591 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError358335873591","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMinimum(1.897938e-08);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMaximum(2.2);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError358335873591->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError358335873591);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3592[20] = {
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
   Double_t BackgroundStatError_fy3592[20] = {
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
   Double_t BackgroundStatError_felx3592[20] = {
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
   Double_t BackgroundStatError_fely3592[20] = {
   0.01952414,
   0.02010276,
   0.02062531,
   0.02140053,
   0.0222815,
   0.02344622,
   0.02441273,
   0.02512239,
   0.02564074,
   0.02612446,
   0.02693722,
   0.02785676,
   0.02797946,
   0.03017015,
   0.03673356,
   0.0596133,
   0.1232612,
   0.5449381,
   1,
   0};
   Double_t BackgroundStatError_fehx3592[20] = {
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
   Double_t BackgroundStatError_fehy3592[20] = {
   0.01952414,
   0.02010276,
   0.02062531,
   0.02140053,
   0.0222815,
   0.02344622,
   0.02441273,
   0.02512239,
   0.02564074,
   0.02612446,
   0.02693722,
   0.02785676,
   0.02797946,
   0.03017015,
   0.03673356,
   0.0596133,
   0.1232612,
   0.5449381,
   1,
   0};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3592,BackgroundStatError_fy3592,BackgroundStatError_felx3592,BackgroundStatError_fehx3592,BackgroundStatError_fely3592,BackgroundStatError_fehy3592);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1360;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError358435883592 = new TH1F("Graph_Graph_Graph_BackgroundStatError358435883592","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMinimum(1.897938e-08);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMaximum(2.2);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError358435883592->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError358435883592->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError358435883592);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx138[2] = {
   0,
   1};
   Double_t Graph0_fy138[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx138,Graph0_fy138);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0136137138 = new TH1F("Graph_Graph_Graph_Graph0136137138","Graph",100,0,1.1);
   Graph_Graph_Graph_Graph0136137138->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0136137138->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0136137138->SetDirectory(0);
   Graph_Graph_Graph_Graph0136137138->SetStats(0);
   Graph_Graph_Graph_Graph0136137138->SetLineStyle(0);
   Graph_Graph_Graph_Graph0136137138->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0136137138->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0136137138->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0136137138->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0136137138);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3593[17] = {
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
   0.825};
   Double_t Graph1_fy3593[17] = {
   1.018797,
   1.007117,
   1.00106,
   0.9530828,
   1.03221,
   0.9709248,
   0.9996814,
   1.023816,
   0.9601083,
   0.9365855,
   0.8991422,
   0.9302515,
   0.9527762,
   0.9405105,
   0.9682306,
   1.103343,
   0.7621074};
   Double_t Graph1_felx3593[17] = {
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
   Double_t Graph1_fely3593[17] = {
   0.02471673,
   0.02507625,
   0.02536972,
   0.02563756,
   0.02757712,
   0.02783174,
   0.029479,
   0.0308412,
   0.03001805,
   0.03066243,
   0.031457,
   0.03286882,
   0.03465214,
   0.03777181,
   0.04787592,
   0.08388559,
   0.1415198};
   Double_t Graph1_fehx3593[17] = {
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
   Double_t Graph1_fehy3593[17] = {
   0.02471673,
   0.02507625,
   0.02536972,
   0.02563756,
   0.02757712,
   0.02783174,
   0.029479,
   0.0308412,
   0.03001805,
   0.03066243,
   0.031457,
   0.03286882,
   0.03465214,
   0.03777181,
   0.04787592,
   0.08388559,
   0.1415198};
   grae = new TGraphAsymmErrors(17,Graph1_fx3593,Graph1_fy3593,Graph1_felx3593,Graph1_fehx3593,Graph1_fely3593,Graph1_fehy3593);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1358535893593 = new TH1F("Graph_Graph_Graph_Graph1358535893593","Graph",100,0,0.935);
   Graph_Graph_Graph_Graph1358535893593->SetMinimum(0.5639235);
   Graph_Graph_Graph_Graph1358535893593->SetMaximum(1.243892);
   Graph_Graph_Graph_Graph1358535893593->SetDirectory(0);
   Graph_Graph_Graph_Graph1358535893593->SetStats(0);
   Graph_Graph_Graph_Graph1358535893593->SetLineStyle(0);
   Graph_Graph_Graph_Graph1358535893593->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1358535893593->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1358535893593->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1358535893593->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1358535893593);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__961 = new TH1F("hframe_copy__961","",1000,0,1);
   hframe_copy__961->SetMinimum(0.3);
   hframe_copy__961->SetMaximum(1.7);
   hframe_copy__961->SetDirectory(0);
   hframe_copy__961->SetStats(0);
   hframe_copy__961->SetLineStyle(0);
   hframe_copy__961->SetMarkerStyle(20);
   hframe_copy__961->GetXaxis()->SetTitle("p_{T}^{assym}(t^{res}_{H^{#pm}}, b_{H^{#pm}})");
   hframe_copy__961->GetXaxis()->SetNdivisions(8);
   hframe_copy__961->GetXaxis()->SetLabelFont(43);
   hframe_copy__961->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__961->GetXaxis()->SetLabelSize(27);
   hframe_copy__961->GetXaxis()->SetTitleSize(33);
   hframe_copy__961->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__961->GetXaxis()->SetTitleFont(43);
   hframe_copy__961->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__961->GetYaxis()->SetNdivisions(505);
   hframe_copy__961->GetYaxis()->SetLabelFont(43);
   hframe_copy__961->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__961->GetYaxis()->SetLabelSize(21);
   hframe_copy__961->GetYaxis()->SetTitleSize(33);
   hframe_copy__961->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__961->GetYaxis()->SetTitleFont(43);
   hframe_copy__961->GetZaxis()->SetLabelFont(43);
   hframe_copy__961->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__961->GetZaxis()->SetLabelSize(27);
   hframe_copy__961->GetZaxis()->SetTitleSize(33);
   hframe_copy__961->GetZaxis()->SetTitleOffset(1);
   hframe_copy__961->GetZaxis()->SetTitleFont(43);
   hframe_copy__961->Draw("sameaxis");
   DPtSumPt_tH_bH_2->Modified();
   DPtSumPt_tH_bH->cd();
  
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
   DPtSumPt_tH_bH->cd();
  
// ------------>Primitives in pad: DPtSumPt_tH_bH_1
   TPad *DPtSumPt_tH_bH_1 = new TPad("DPtSumPt_tH_bH_1", "DPtSumPt_tH_bH_1",0,0.2897959,1,1);
   DPtSumPt_tH_bH_1->Draw();
   DPtSumPt_tH_bH_1->cd();
   DPtSumPt_tH_bH_1->Range(-0.2025316,-2.132078,1.063291,4.471836);
   DPtSumPt_tH_bH_1->SetFillColor(0);
   DPtSumPt_tH_bH_1->SetFillStyle(4000);
   DPtSumPt_tH_bH_1->SetBorderMode(0);
   DPtSumPt_tH_bH_1->SetBorderSize(2);
   DPtSumPt_tH_bH_1->SetLogy();
   DPtSumPt_tH_bH_1->SetTickx(1);
   DPtSumPt_tH_bH_1->SetTicky(1);
   DPtSumPt_tH_bH_1->SetLeftMargin(0.16);
   DPtSumPt_tH_bH_1->SetRightMargin(0.05);
   DPtSumPt_tH_bH_1->SetTopMargin(0.06);
   DPtSumPt_tH_bH_1->SetBottomMargin(0.02);
   DPtSumPt_tH_bH_1->SetFrameFillStyle(0);
   DPtSumPt_tH_bH_1->SetFrameBorderMode(0);
   DPtSumPt_tH_bH_1->SetFrameFillStyle(0);
   DPtSumPt_tH_bH_1->SetFrameBorderMode(0);
   
   TH1F *hframe__962 = new TH1F("hframe__962","",1000,0,1);
   hframe__962->SetMinimum(0.01);
   hframe__962->SetMaximum(11901.49);
   hframe__962->SetDirectory(0);
   hframe__962->SetStats(0);
   hframe__962->SetLineStyle(0);
   hframe__962->SetMarkerStyle(20);
   hframe__962->GetXaxis()->SetNdivisions(8);
   hframe__962->GetXaxis()->SetLabelFont(43);
   hframe__962->GetXaxis()->SetLabelOffset(0.007);
   hframe__962->GetXaxis()->SetLabelSize(0);
   hframe__962->GetXaxis()->SetTitleSize(0);
   hframe__962->GetXaxis()->SetTitleOffset(0.9);
   hframe__962->GetXaxis()->SetTitleFont(43);
   hframe__962->GetYaxis()->SetTitle("Events / 0.05");
   hframe__962->GetYaxis()->SetLabelFont(43);
   hframe__962->GetYaxis()->SetLabelOffset(0.007);
   hframe__962->GetYaxis()->SetLabelSize(27);
   hframe__962->GetYaxis()->SetTitleSize(33);
   hframe__962->GetYaxis()->SetTitleOffset(1.5625);
   hframe__962->GetYaxis()->SetTitleFont(43);
   hframe__962->GetZaxis()->SetLabelFont(43);
   hframe__962->GetZaxis()->SetLabelOffset(0.007);
   hframe__962->GetZaxis()->SetLabelSize(27);
   hframe__962->GetZaxis()->SetTitleSize(33);
   hframe__962->GetZaxis()->SetTitleOffset(1);
   hframe__962->GetZaxis()->SetTitleFont(43);
   hframe__962->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_136_stack_137_stack_138 = new TH1F("StackedMCstackHist_stack_136_stack_137_stack_138","StackedMCstackHist",20,0,1);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMinimum(0.6670612);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMaximum(2668.245);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetDirectory(0);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetStats(0);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetLineStyle(0);
   StackedMCstackHist_stack_136_stack_137_stack_138->SetMarkerStyle(20);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_136_stack_137_stack_138->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_136_stack_137_stack_138);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_DPtSumPt_tH_bHInclusive",20,0,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,45.63221);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,39.63908);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,44.8655);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,36.45271);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,31.00149);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,32.62482);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,30.87355);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,26.75954);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,24.04189);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,28.06323);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,25.03785);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,21.66593);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,22.5889);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,14.59723);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,9.503691);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,4.126587);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.842554);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.002819254);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,3.372405);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,3.458733);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,3.846489);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,2.645331);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.445661);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,2.708698);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,3.316657);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,2.658494);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,2.090605);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.190586);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.129728);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,2.417624);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,2.033574);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,1.827215);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,1.41768);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.115774);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.601948);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.001987665);
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
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_DPtSumPt_tH_bHInclusive",20,0,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,974.7794);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,943.3081);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,901.0767);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,848.7034);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,801.4851);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,735.0316);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,699.4577);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,666.715);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,630.7889);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,617.6079);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,588.1238);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,561.4582);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,539.2175);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,457.6293);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,298.6585);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,115.0519);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,25.44158);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1.124648);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.04746489);
   TT_stack_2_stack_2_stack_2->SetBinError(1,7.602696);
   TT_stack_2_stack_2_stack_2->SetBinError(2,7.474143);
   TT_stack_2_stack_2_stack_2->SetBinError(3,7.307711);
   TT_stack_2_stack_2_stack_2->SetBinError(4,7.084459);
   TT_stack_2_stack_2_stack_2->SetBinError(5,6.882201);
   TT_stack_2_stack_2_stack_2->SetBinError(6,6.598966);
   TT_stack_2_stack_2_stack_2->SetBinError(7,6.4303);
   TT_stack_2_stack_2_stack_2->SetBinError(8,6.298272);
   TT_stack_2_stack_2_stack_2->SetBinError(9,6.121473);
   TT_stack_2_stack_2_stack_2->SetBinError(10,6.037401);
   TT_stack_2_stack_2_stack_2->SetBinError(11,5.882949);
   TT_stack_2_stack_2_stack_2->SetBinError(12,5.722722);
   TT_stack_2_stack_2_stack_2->SetBinError(13,5.580429);
   TT_stack_2_stack_2_stack_2->SetBinError(14,5.11148);
   TT_stack_2_stack_2_stack_2->SetBinError(15,4.096827);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.52197);
   TT_stack_2_stack_2_stack_2->SetBinError(17,1.218354);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.2277987);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.04746489);
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
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_DPtSumPt_tH_bHInclusive",20,0,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,647.2414);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,618.6547);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,609.4097);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,564.8752);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,524.7953);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,485.7877);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,420.0352);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,382.8906);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,410.674);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,350.5005);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,295.4822);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,277.9333);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,231.6642);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,186.9899);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,114.2578);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,37.61773);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,11.76825);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,2.001604);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,31.4793);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,31.12549);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,30.99844);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,30.0959);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,29.34705);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,28.50968);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,27.13556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,26.16242);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,26.5435);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,25.2195);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,23.66319);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,23.16779);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,21.39164);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,19.13355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,14.8991);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,8.931058);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,4.489203);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,1.689865);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3639.597);
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
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__963 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__963","h_SR_DPtSumPt_tH_bHInclusive",20,0,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(1,3.491815);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(2,4.262216);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(3,3.609487);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(4,3.677891);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(5,2.238003);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(6,2.26527);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(7,1.859377);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(8,1.795106);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(9,1.005162);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(10,1.256541);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(11,1.608611);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(12,1.778273);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(13,0.8768247);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(14,1.210264);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(15,1.017812);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(16,0.696862);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(17,0.07398443);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinContent(18,-0.005336639);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(1,0.7399356);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(2,0.7263477);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(3,0.7167827);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(4,0.6826909);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(5,0.6010503);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(6,0.5565334);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(7,0.5332598);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(8,0.4689591);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(9,0.4318811);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(10,0.4212599);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(11,0.3938877);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(12,0.3732718);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(13,0.3604873);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(14,0.3164243);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(15,0.3150841);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(16,0.2245753);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(17,0.1104743);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetBinError(18,0.03101808);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetEntries(5945);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__963->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3594[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3594[20] = {
   1667.653,
   1601.602,
   1555.352,
   1450.031,
   1357.282,
   1253.444,
   1150.366,
   1076.365,
   1065.505,
   996.1717,
   908.6439,
   861.0574,
   793.4707,
   659.2164,
   422.42,
   156.7962,
   38.05238,
   3.129072,
   0.04746489,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3594[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3594[20] = {
   32.55949,
   32.19662,
   32.07961,
   31.03144,
   30.24228,
   29.38852,
   28.08359,
   27.04086,
   27.32033,
   26.02445,
   24.47634,
   23.98627,
   22.20088,
   19.88866,
   15.51699,
   9.347142,
   4.690381,
   1.705151,
   0.04746489,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3594[20] = {
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
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3594[20] = {
   32.55949,
   32.19662,
   32.07961,
   31.03144,
   30.24228,
   29.38852,
   28.08359,
   27.04086,
   27.32033,
   26.02445,
   24.47634,
   23.98627,
   22.20088,
   19.88866,
   15.51699,
   9.347142,
   4.690381,
   1.705151,
   0.04746489,
   0};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3594,BkgSum-SR-Inclusive_sum_errors_fy3594,BkgSum-SR-Inclusive_sum_errors_felx3594,BkgSum-SR-Inclusive_sum_errors_fehx3594,BkgSum-SR-Inclusive_sum_errors_fely3594,BkgSum-SR-Inclusive_sum_errors_fehy3594);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1359;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMinimum(1.870234);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMaximum(1870.234);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors358635903594->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors358635903594);
   
   grae->Draw("e2 ");
   
   TH1F *Data__964 = new TH1F("Data__964","h_SR_DPtSumPt_tH_bHInclusive",20,0,1);
   Data__964->SetBinContent(1,1699);
   Data__964->SetBinContent(2,1613);
   Data__964->SetBinContent(3,1557);
   Data__964->SetBinContent(4,1382);
   Data__964->SetBinContent(5,1401);
   Data__964->SetBinContent(6,1217);
   Data__964->SetBinContent(7,1150);
   Data__964->SetBinContent(8,1102);
   Data__964->SetBinContent(9,1023);
   Data__964->SetBinContent(10,933);
   Data__964->SetBinContent(11,817);
   Data__964->SetBinContent(12,801);
   Data__964->SetBinContent(13,756);
   Data__964->SetBinContent(14,620);
   Data__964->SetBinContent(15,409);
   Data__964->SetBinContent(16,173);
   Data__964->SetBinContent(17,29);
   Data__964->SetBinError(1,41.21893);
   Data__964->SetBinError(2,40.16217);
   Data__964->SetBinError(3,39.45884);
   Data__964->SetBinError(4,37.17526);
   Data__964->SetBinError(5,37.42993);
   Data__964->SetBinError(6,34.88553);
   Data__964->SetBinError(7,33.91165);
   Data__964->SetBinError(8,33.19639);
   Data__964->SetBinError(9,31.98437);
   Data__964->SetBinError(10,30.54505);
   Data__964->SetBinError(11,28.58321);
   Data__964->SetBinError(12,28.30194);
   Data__964->SetBinError(13,27.49545);
   Data__964->SetBinError(14,24.8998);
   Data__964->SetBinError(15,20.22375);
   Data__964->SetBinError(16,13.15295);
   Data__964->SetBinError(17,5.385165);
   Data__964->SetEntries(16686);
   Data__964->SetDirectory(0);
   Data__964->SetFillStyle(3001);
   Data__964->SetLineWidth(2);
   Data__964->SetMarkerStyle(20);
   Data__964->SetMarkerSize(1.2);
   Data__964->GetXaxis()->SetRange(1,100);
   Data__964->GetXaxis()->SetLabelFont(42);
   Data__964->GetXaxis()->SetTitleOffset(1);
   Data__964->GetXaxis()->SetTitleFont(42);
   Data__964->GetYaxis()->SetLabelFont(42);
   Data__964->GetYaxis()->SetTitleFont(42);
   Data__964->GetZaxis()->SetLabelFont(42);
   Data__964->GetZaxis()->SetTitleOffset(1);
   Data__964->GetZaxis()->SetTitleFont(42);
   Data__964->Draw("EP same");
   
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

   ci = 1359;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1359;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__965 = new TH1F("hframe_copy__965","",1000,0,1);
   hframe_copy__965->SetMinimum(0.01);
   hframe_copy__965->SetMaximum(11901.49);
   hframe_copy__965->SetDirectory(0);
   hframe_copy__965->SetStats(0);
   hframe_copy__965->SetLineStyle(0);
   hframe_copy__965->SetMarkerStyle(20);
   hframe_copy__965->GetXaxis()->SetNdivisions(8);
   hframe_copy__965->GetXaxis()->SetLabelFont(43);
   hframe_copy__965->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__965->GetXaxis()->SetLabelSize(0);
   hframe_copy__965->GetXaxis()->SetTitleSize(0);
   hframe_copy__965->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__965->GetXaxis()->SetTitleFont(43);
   hframe_copy__965->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__965->GetYaxis()->SetLabelFont(43);
   hframe_copy__965->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__965->GetYaxis()->SetLabelSize(27);
   hframe_copy__965->GetYaxis()->SetTitleSize(33);
   hframe_copy__965->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__965->GetYaxis()->SetTitleFont(43);
   hframe_copy__965->GetZaxis()->SetLabelFont(43);
   hframe_copy__965->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__965->GetZaxis()->SetLabelSize(27);
   hframe_copy__965->GetZaxis()->SetTitleSize(33);
   hframe_copy__965->GetZaxis()->SetTitleOffset(1);
   hframe_copy__965->GetZaxis()->SetTitleFont(43);
   hframe_copy__965->Draw("sameaxis");
   
   TH1F *hframe_copy__966 = new TH1F("hframe_copy__966","",1000,0,1);
   hframe_copy__966->SetMinimum(0.01);
   hframe_copy__966->SetMaximum(11901.49);
   hframe_copy__966->SetDirectory(0);
   hframe_copy__966->SetStats(0);
   hframe_copy__966->SetLineStyle(0);
   hframe_copy__966->SetMarkerStyle(20);
   hframe_copy__966->GetXaxis()->SetNdivisions(8);
   hframe_copy__966->GetXaxis()->SetLabelFont(43);
   hframe_copy__966->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__966->GetXaxis()->SetLabelSize(0);
   hframe_copy__966->GetXaxis()->SetTitleSize(0);
   hframe_copy__966->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__966->GetXaxis()->SetTitleFont(43);
   hframe_copy__966->GetYaxis()->SetTitle("Events / 0.05");
   hframe_copy__966->GetYaxis()->SetLabelFont(43);
   hframe_copy__966->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__966->GetYaxis()->SetLabelSize(27);
   hframe_copy__966->GetYaxis()->SetTitleSize(33);
   hframe_copy__966->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__966->GetYaxis()->SetTitleFont(43);
   hframe_copy__966->GetZaxis()->SetLabelFont(43);
   hframe_copy__966->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__966->GetZaxis()->SetLabelSize(27);
   hframe_copy__966->GetZaxis()->SetTitleSize(33);
   hframe_copy__966->GetZaxis()->SetTitleOffset(1);
   hframe_copy__966->GetZaxis()->SetTitleFont(43);
   hframe_copy__966->Draw("sameaxis");
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
   DPtSumPt_tH_bH_1->Modified();
   DPtSumPt_tH_bH->cd();
   DPtSumPt_tH_bH->Modified();
   DPtSumPt_tH_bH->cd();
   DPtSumPt_tH_bH->SetSelected(DPtSumPt_tH_bH);
}
