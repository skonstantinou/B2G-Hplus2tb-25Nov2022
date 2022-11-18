void HT()
{
//=========Macro generated from canvas: HT/HT
//=========  (Fri Nov 18 13:27:59 2022) by ROOT version 6.20/02
   TCanvas *HT = new TCanvas("HT", "HT",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   HT->SetHighLightColor(2);
   HT->Range(0,0,1,1);
   HT->SetFillColor(0);
   HT->SetBorderMode(0);
   HT->SetBorderSize(2);
   HT->SetTickx(1);
   HT->SetTicky(1);
   HT->SetLeftMargin(0.16);
   HT->SetRightMargin(0.05);
   HT->SetTopMargin(0.06);
   HT->SetBottomMargin(0.13);
   HT->SetFrameFillStyle(0);
   HT->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: HT_2
   TPad *HT_2 = new TPad("HT_2", "HT_2",0,0,1,0.304);
   HT_2->Draw();
   HT_2->cd();
   HT_2->Range(-6.329089,-0.428,3158.228,1.7);
   HT_2->SetFillColor(0);
   HT_2->SetFillStyle(4000);
   HT_2->SetBorderMode(0);
   HT_2->SetBorderSize(2);
   HT_2->SetTickx(1);
   HT_2->SetTicky(1);
   HT_2->SetLeftMargin(0.16);
   HT_2->SetRightMargin(0.05);
   HT_2->SetTopMargin(0);
   HT_2->SetBottomMargin(0.3421053);
   HT_2->SetFrameFillStyle(0);
   HT_2->SetFrameBorderMode(0);
   HT_2->SetFrameFillStyle(0);
   HT_2->SetFrameBorderMode(0);
   
   TH1F *hframe__435 = new TH1F("hframe__435","",1000,500,3000);
   hframe__435->SetMinimum(0.3);
   hframe__435->SetMaximum(1.7);
   hframe__435->SetDirectory(0);
   hframe__435->SetStats(0);
   hframe__435->SetLineStyle(0);
   hframe__435->SetMarkerStyle(20);
   hframe__435->GetXaxis()->SetTitle("H_{T} (GeV)");
   hframe__435->GetXaxis()->SetLabelFont(43);
   hframe__435->GetXaxis()->SetLabelOffset(0.007);
   hframe__435->GetXaxis()->SetLabelSize(27);
   hframe__435->GetXaxis()->SetTitleSize(33);
   hframe__435->GetXaxis()->SetTitleOffset(2.960526);
   hframe__435->GetXaxis()->SetTitleFont(43);
   hframe__435->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__435->GetYaxis()->SetNdivisions(505);
   hframe__435->GetYaxis()->SetLabelFont(43);
   hframe__435->GetYaxis()->SetLabelOffset(0.007);
   hframe__435->GetYaxis()->SetLabelSize(21);
   hframe__435->GetYaxis()->SetTitleSize(33);
   hframe__435->GetYaxis()->SetTitleOffset(1.5625);
   hframe__435->GetYaxis()->SetTitleFont(43);
   hframe__435->GetZaxis()->SetLabelFont(43);
   hframe__435->GetZaxis()->SetLabelOffset(0.007);
   hframe__435->GetZaxis()->SetLabelSize(27);
   hframe__435->GetZaxis()->SetTitleSize(33);
   hframe__435->GetZaxis()->SetTitleOffset(1);
   hframe__435->GetZaxis()->SetTitleFont(43);
   hframe__435->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3249[20] = {
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1050,
   1150,
   1250,
   1350,
   1450,
   1625,
   1875,
   2125,
   2375,
   2750};
   Double_t BackgroundStatSystError_fy3249[20] = {
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
   Double_t BackgroundStatSystError_felx3249[20] = {
   25,
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
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BackgroundStatSystError_fely3249[20] = {
   0.04014059,
   0.03723514,
   0.04028146,
   0.04232984,
   0.04740443,
   0.05216731,
   0.06072259,
   0.06795059,
   0.07800683,
   0.08213004,
   0.07073154,
   0.1022079,
   0.1071311,
   0.1522185,
   0.1991645,
   0.1858362,
   0.3278914,
   0.5166939,
   0.7016294,
   0.8163399};
   Double_t BackgroundStatSystError_fehx3249[20] = {
   25,
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
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BackgroundStatSystError_fehy3249[20] = {
   0.04014059,
   0.03723514,
   0.04028146,
   0.04232984,
   0.04740443,
   0.05216731,
   0.06072259,
   0.06795059,
   0.07800683,
   0.08213004,
   0.07073154,
   0.1022079,
   0.1071311,
   0.1522185,
   0.1991645,
   0.1858362,
   0.3278914,
   0.5166939,
   0.7016294,
   0.8163399};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3249,BackgroundStatSystError_fy3249,BackgroundStatSystError_felx3249,BackgroundStatSystError_fehx3249,BackgroundStatSystError_fely3249,BackgroundStatSystError_fehy3249);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1272;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError324132453249 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError324132453249","Graph",100,250,3250);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetMinimum(0.02039215);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetMaximum(1.979608);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError324132453249->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError324132453249);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3250[20] = {
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1050,
   1150,
   1250,
   1350,
   1450,
   1625,
   1875,
   2125,
   2375,
   2750};
   Double_t BackgroundStatError_fy3250[20] = {
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
   Double_t BackgroundStatError_felx3250[20] = {
   25,
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
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BackgroundStatError_fely3250[20] = {
   0.04014059,
   0.03723514,
   0.04028146,
   0.04232984,
   0.04740443,
   0.05216731,
   0.06072259,
   0.06795059,
   0.07800683,
   0.08213004,
   0.07073154,
   0.1022079,
   0.1071311,
   0.1522185,
   0.1991645,
   0.1858362,
   0.3278914,
   0.5166939,
   0.7016294,
   0.8163399};
   Double_t BackgroundStatError_fehx3250[20] = {
   25,
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
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BackgroundStatError_fehy3250[20] = {
   0.04014059,
   0.03723514,
   0.04028146,
   0.04232984,
   0.04740443,
   0.05216731,
   0.06072259,
   0.06795059,
   0.07800683,
   0.08213004,
   0.07073154,
   0.1022079,
   0.1071311,
   0.1522185,
   0.1991645,
   0.1858362,
   0.3278914,
   0.5166939,
   0.7016294,
   0.8163399};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3250,BackgroundStatError_fy3250,BackgroundStatError_felx3250,BackgroundStatError_fehx3250,BackgroundStatError_fely3250,BackgroundStatError_fehy3250);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1271;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError324232463250 = new TH1F("Graph_Graph_Graph_BackgroundStatError324232463250","Graph",100,250,3250);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetMinimum(0.02039215);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetMaximum(1.979608);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError324232463250->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError324232463250->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError324232463250);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx63[2] = {
   500,
   3000};
   Double_t Graph0_fy63[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx63,Graph0_fy63);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0616263 = new TH1F("Graph_Graph_Graph_Graph0616263","Graph",100,250,3250);
   Graph_Graph_Graph_Graph0616263->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0616263->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0616263->SetDirectory(0);
   Graph_Graph_Graph_Graph0616263->SetStats(0);
   Graph_Graph_Graph_Graph0616263->SetLineStyle(0);
   Graph_Graph_Graph_Graph0616263->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0616263->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0616263->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0616263->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0616263);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3251[20] = {
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1050,
   1150,
   1250,
   1350,
   1450,
   1625,
   1875,
   2125,
   2375,
   2750};
   Double_t Graph1_fy3251[20] = {
   0.9980179,
   1.032424,
   1.127847,
   0.9998163,
   1.018713,
   0.9107241,
   0.9973147,
   1.009665,
   1.018906,
   0.8687909,
   0.8532978,
   1.12608,
   0.9241723,
   1.294095,
   1.214838,
   1.628673,
   1.22436,
   2.09869,
   0.5655592,
   0.987576};
   Double_t Graph1_felx3251[20] = {
   25,
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
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t Graph1_fely3251[20] = {
   0.0295847,
   0.02792375,
   0.03146289,
   0.03113801,
   0.03504478,
   0.03639986,
   0.04451233,
   0.0503575,
   0.05740882,
   0.05608021,
   0.04792598,
   0.08043428,
   0.07728318,
   0.1307234,
   0.1668708,
   0.1798569,
   0.2610344,
   0.5820719,
   0.3999107,
   0.5701773};
   Double_t Graph1_fehx3251[20] = {
   25,
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
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t Graph1_fehy3251[20] = {
   0.0295847,
   0.02792375,
   0.03146289,
   0.03113801,
   0.03504478,
   0.03639986,
   0.04451233,
   0.0503575,
   0.05740882,
   0.05608021,
   0.04792598,
   0.08043428,
   0.07728318,
   0.1307234,
   0.1668708,
   0.1798569,
   0.2610344,
   0.5820719,
   0.3999107,
   0.5701773};
   grae = new TGraphAsymmErrors(20,Graph1_fx3251,Graph1_fy3251,Graph1_felx3251,Graph1_fehx3251,Graph1_fely3251,Graph1_fehy3251);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1324332473251 = new TH1F("Graph_Graph_Graph_Graph1324332473251","Graph",100,250,3250);
   Graph_Graph_Graph_Graph1324332473251->SetMinimum(0.1490836);
   Graph_Graph_Graph_Graph1324332473251->SetMaximum(2.932273);
   Graph_Graph_Graph_Graph1324332473251->SetDirectory(0);
   Graph_Graph_Graph_Graph1324332473251->SetStats(0);
   Graph_Graph_Graph_Graph1324332473251->SetLineStyle(0);
   Graph_Graph_Graph_Graph1324332473251->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1324332473251->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1324332473251->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1324332473251->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1324332473251);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__436 = new TH1F("hframe_copy__436","",1000,500,3000);
   hframe_copy__436->SetMinimum(0.3);
   hframe_copy__436->SetMaximum(1.7);
   hframe_copy__436->SetDirectory(0);
   hframe_copy__436->SetStats(0);
   hframe_copy__436->SetLineStyle(0);
   hframe_copy__436->SetMarkerStyle(20);
   hframe_copy__436->GetXaxis()->SetTitle("H_{T} (GeV)");
   hframe_copy__436->GetXaxis()->SetLabelFont(43);
   hframe_copy__436->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__436->GetXaxis()->SetLabelSize(27);
   hframe_copy__436->GetXaxis()->SetTitleSize(33);
   hframe_copy__436->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__436->GetXaxis()->SetTitleFont(43);
   hframe_copy__436->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__436->GetYaxis()->SetNdivisions(505);
   hframe_copy__436->GetYaxis()->SetLabelFont(43);
   hframe_copy__436->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__436->GetYaxis()->SetLabelSize(21);
   hframe_copy__436->GetYaxis()->SetTitleSize(33);
   hframe_copy__436->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__436->GetYaxis()->SetTitleFont(43);
   hframe_copy__436->GetZaxis()->SetLabelFont(43);
   hframe_copy__436->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__436->GetZaxis()->SetLabelSize(27);
   hframe_copy__436->GetZaxis()->SetTitleSize(33);
   hframe_copy__436->GetZaxis()->SetTitleOffset(1);
   hframe_copy__436->GetZaxis()->SetTitleFont(43);
   hframe_copy__436->Draw("sameaxis");
   HT_2->Modified();
   HT->cd();
  
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
   HT->cd();
  
// ------------>Primitives in pad: HT_1
   TPad *HT_1 = new TPad("HT_1", "HT_1",0,0.2897959,1,1);
   HT_1->Draw();
   HT_1->cd();
   HT_1->Range(-6.329089,-2.093129,3158.228,2.563302);
   HT_1->SetFillColor(0);
   HT_1->SetFillStyle(4000);
   HT_1->SetBorderMode(0);
   HT_1->SetBorderSize(2);
   HT_1->SetLogy();
   HT_1->SetTickx(1);
   HT_1->SetTicky(1);
   HT_1->SetLeftMargin(0.16);
   HT_1->SetRightMargin(0.05);
   HT_1->SetTopMargin(0.06);
   HT_1->SetBottomMargin(0.02);
   HT_1->SetFrameFillStyle(0);
   HT_1->SetFrameBorderMode(0);
   HT_1->SetFrameFillStyle(0);
   HT_1->SetFrameBorderMode(0);
   
   TH1F *hframe__437 = new TH1F("hframe__437","",1000,500,3000);
   hframe__437->SetMinimum(0.01);
   hframe__437->SetMaximum(192.2719);
   hframe__437->SetDirectory(0);
   hframe__437->SetStats(0);
   hframe__437->SetLineStyle(0);
   hframe__437->SetMarkerStyle(20);
   hframe__437->GetXaxis()->SetLabelFont(43);
   hframe__437->GetXaxis()->SetLabelOffset(0.007);
   hframe__437->GetXaxis()->SetLabelSize(0);
   hframe__437->GetXaxis()->SetTitleSize(0);
   hframe__437->GetXaxis()->SetTitleOffset(0.9);
   hframe__437->GetXaxis()->SetTitleFont(43);
   hframe__437->GetYaxis()->SetTitle("< Events / 50-500 GeV >");
   hframe__437->GetYaxis()->SetLabelFont(43);
   hframe__437->GetYaxis()->SetLabelOffset(0.007);
   hframe__437->GetYaxis()->SetLabelSize(27);
   hframe__437->GetYaxis()->SetTitleSize(33);
   hframe__437->GetYaxis()->SetTitleOffset(1.5625);
   hframe__437->GetYaxis()->SetTitleFont(43);
   hframe__437->GetZaxis()->SetLabelFont(43);
   hframe__437->GetZaxis()->SetLabelOffset(0.007);
   hframe__437->GetZaxis()->SetLabelSize(27);
   hframe__437->GetZaxis()->SetTitleSize(33);
   hframe__437->GetZaxis()->SetTitleOffset(1);
   hframe__437->GetZaxis()->SetTitleFont(43);
   hframe__437->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis319[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *StackedMCstackHist_stack_61_stack_62_stack_63 = new TH1F("StackedMCstackHist_stack_61_stack_62_stack_63","StackedMCstackHist",20, xAxis319);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetMinimum(0.01059255);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetMaximum(42.3702);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetDirectory(0);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetStats(0);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetLineStyle(0);
   StackedMCstackHist_stack_61_stack_62_stack_63->SetMarkerStyle(20);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_61_stack_62_stack_63->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_61_stack_62_stack_63);
   
   Double_t xAxis320[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_HTInclusive",20, xAxis320);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.3132707);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.3771383);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,0.3541243);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.2680568);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,0.1899105);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,0.1355536);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,0.111028);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,0.08610535);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,0.0877878);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.04456379);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.05353165);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.02988371);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,0.02361893);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.01246447);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.01378905);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.007136704);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.001498391);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.001716033);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.0005321839);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,-0.0003252936);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.05343705);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.06300109);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,0.04644105);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.03083875);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.02734534);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.03644914);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.02234413);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,0.01628445);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.01659238);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.01270846);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.009083827);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.005626417);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,0.007344194);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.004256568);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.004254288);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.002179807);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.001050296);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.001222957);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.0005149717);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.0003336558);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(332.1355);
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
   Double_t xAxis321[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_HTInclusive",20, xAxis321);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,5.177346);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4.807324);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,3.829682);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,3.018811);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2.359888);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,1.778593);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,1.335361);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,1.068747);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,0.8036011);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,0.6146319);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,0.4322902);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,0.293891);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,0.2078119);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,0.1148628);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,0.06692359);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,0.04165212);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.01195078);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.004647505);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.001757375);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.0001749371);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.07833121);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.07626309);
   TT_stack_2_stack_2_stack_2->SetBinError(3,0.06872161);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.06108969);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.05457622);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.04716964);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.04094085);
   TT_stack_2_stack_2_stack_2->SetBinError(8,0.03683219);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.03179917);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.02780424);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.01648272);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.01342354);
   TT_stack_2_stack_2_stack_2->SetBinError(13,0.01117014);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.008322659);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.006416874);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.003257857);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.001709345);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.001015403);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.0006762973);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.000126161);
   TT_stack_2_stack_2_stack_2->SetEntries(21665.81);
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
   Double_t xAxis322[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_HTInclusive",20, xAxis322);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,17.31459);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,21.29691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,18.60298);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,17.33692);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,14.03976);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,11.83316);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,8.620645);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,6.808187);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,5.291716);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,4.865724);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,3.229177);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,1.416777);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,1.315899);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,0.6299585);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,0.3555595);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,0.1526021);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.05842514);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.01841382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.01185573);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.006225838);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.9104901);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.9810633);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,0.9141296);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,0.8703154);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,0.784046);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,0.714678);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,0.6095143);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,0.5395925);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,0.4809889);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,0.4527309);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.2620927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.1773017);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,0.1652273);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.1148933);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.08654815);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.03721987);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.02348142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.01270325);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.009888283);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.004946814);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3080.838);
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
   Double_t xAxis323[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__438 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__438","h_SR_HTInclusive",20, xAxis323);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(1,-0.00304529);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(2,0.006067527);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(3,0.008128476);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(4,0.006421556);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(5,0.008302633);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(6,0.01351729);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(7,0.01899577);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(8,0.01413631);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(9,0.007585732);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(10,0.00888205);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(11,0.007600599);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(12,0.005415909);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(13,0.0011757);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(14,-0.0001634969);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(15,-0.0002734797);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(16,0.0002531398);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(17,0.0001613703);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(18,-2.448452e-05);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinContent(19,0.0001248935);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(1,0.00139217);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(2,0.00336657);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(3,0.003009631);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(4,0.003725629);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(5,0.004402564);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(6,0.005111904);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(7,0.0054112);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(8,0.006038725);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(9,0.006103042);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(10,0.005123129);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(11,0.003615421);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(12,0.002767641);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(13,0.002373087);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(14,0.001565528);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(15,0.001208844);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(16,0.0004838427);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(17,0.0002376339);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(18,0.0001689662);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetBinError(19,0.0001248935);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetEntries(44.1399);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetXaxis()->SetRange(1,100);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__438->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3252[20] = {
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1050,
   1150,
   1250,
   1350,
   1450,
   1625,
   1875,
   2125,
   2375,
   2750};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3252[20] = {
   22.8052,
   26.48137,
   22.78678,
   20.62379,
   16.58956,
   13.7473,
   10.06703,
   7.963039,
   6.183105,
   5.52492,
   3.714999,
   1.740551,
   1.54733,
   0.7572857,
   0.4362721,
   0.2013909,
   0.07187431,
   0.02477736,
   0.01414529,
   0.006075482};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3252[20] = {
   25,
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
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3252[20] = {
   0.9154144,
   0.9860377,
   0.9178848,
   0.8730017,
   0.7864188,
   0.7171598,
   0.6112963,
   0.5410932,
   0.4823244,
   0.4537619,
   0.2627676,
   0.1778981,
   0.1657672,
   0.1152729,
   0.08688991,
   0.03742572,
   0.02356697,
   0.01280231,
   0.009924753,
   0.004959658};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3252[20] = {
   25,
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
   50,
   125,
   125,
   125,
   125,
   250};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3252[20] = {
   0.9154144,
   0.9860377,
   0.9178848,
   0.8730017,
   0.7864188,
   0.7171598,
   0.6112963,
   0.5410932,
   0.4823244,
   0.4537619,
   0.2627676,
   0.1778981,
   0.1657672,
   0.1152729,
   0.08688991,
   0.03742572,
   0.02356697,
   0.01280231,
   0.009924753,
   0.004959658};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3252,BkgSum-SR-Inclusive_sum_errors_fy3252,BkgSum-SR-Inclusive_sum_errors_felx3252,BkgSum-SR-Inclusive_sum_errors_fehx3252,BkgSum-SR-Inclusive_sum_errors_fely3252,BkgSum-SR-Inclusive_sum_errors_fehy3252);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1270;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252","Graph",100,250,3250);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetMinimum(0.001004241);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetMaximum(30.21404);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors324432483252->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors324432483252);
   
   grae->Draw("e2 ");
   Double_t xAxis324[21] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1750, 2000, 2250, 2500, 3000}; 
   
   TH1F *Data__439 = new TH1F("Data__439","h_SR_HTInclusive",20, xAxis324);
   Data__439->SetBinContent(1,22.76);
   Data__439->SetBinContent(2,27.34);
   Data__439->SetBinContent(3,25.7);
   Data__439->SetBinContent(4,20.62);
   Data__439->SetBinContent(5,16.9);
   Data__439->SetBinContent(6,12.52);
   Data__439->SetBinContent(7,10.04);
   Data__439->SetBinContent(8,8.04);
   Data__439->SetBinContent(9,6.3);
   Data__439->SetBinContent(10,4.8);
   Data__439->SetBinContent(11,3.17);
   Data__439->SetBinContent(12,1.96);
   Data__439->SetBinContent(13,1.43);
   Data__439->SetBinContent(14,0.98);
   Data__439->SetBinContent(15,0.53);
   Data__439->SetBinContent(16,0.328);
   Data__439->SetBinContent(17,0.088);
   Data__439->SetBinContent(18,0.052);
   Data__439->SetBinContent(19,0.008);
   Data__439->SetBinContent(20,0.006);
   Data__439->SetBinError(1,0.6746851);
   Data__439->SetBinError(2,0.7394593);
   Data__439->SetBinError(3,0.7169379);
   Data__439->SetBinError(4,0.6421838);
   Data__439->SetBinError(5,0.5813777);
   Data__439->SetBinError(6,0.5003998);
   Data__439->SetBinError(7,0.4481071);
   Data__439->SetBinError(8,0.4009988);
   Data__439->SetBinError(9,0.3549648);
   Data__439->SetBinError(10,0.3098387);
   Data__439->SetBinError(11,0.1780449);
   Data__439->SetBinError(12,0.14);
   Data__439->SetBinError(13,0.1195826);
   Data__439->SetBinError(14,0.09899495);
   Data__439->SetBinError(15,0.0728011);
   Data__439->SetBinError(16,0.03622154);
   Data__439->SetBinError(17,0.01876166);
   Data__439->SetBinError(18,0.01442221);
   Data__439->SetBinError(19,0.005656854);
   Data__439->SetBinError(20,0.003464102);
   Data__439->SetEntries(8405.801);
   Data__439->SetDirectory(0);
   Data__439->SetFillStyle(3001);
   Data__439->SetLineWidth(2);
   Data__439->SetMarkerStyle(20);
   Data__439->SetMarkerSize(1.2);
   Data__439->GetXaxis()->SetRange(1,100);
   Data__439->GetXaxis()->SetLabelFont(42);
   Data__439->GetXaxis()->SetTitleOffset(1);
   Data__439->GetXaxis()->SetTitleFont(42);
   Data__439->GetYaxis()->SetLabelFont(42);
   Data__439->GetYaxis()->SetTitleFont(42);
   Data__439->GetZaxis()->SetLabelFont(42);
   Data__439->GetZaxis()->SetTitleOffset(1);
   Data__439->GetZaxis()->SetTitleFont(42);
   Data__439->Draw("EP same");
   TLine *line = new TLine(2375,0.01,2375,0.01365685);
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

   ci = 1270;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1270;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__440 = new TH1F("hframe_copy__440","",1000,500,3000);
   hframe_copy__440->SetMinimum(0.01);
   hframe_copy__440->SetMaximum(192.2719);
   hframe_copy__440->SetDirectory(0);
   hframe_copy__440->SetStats(0);
   hframe_copy__440->SetLineStyle(0);
   hframe_copy__440->SetMarkerStyle(20);
   hframe_copy__440->GetXaxis()->SetLabelFont(43);
   hframe_copy__440->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__440->GetXaxis()->SetLabelSize(0);
   hframe_copy__440->GetXaxis()->SetTitleSize(0);
   hframe_copy__440->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__440->GetXaxis()->SetTitleFont(43);
   hframe_copy__440->GetYaxis()->SetTitle("< Events / 50-500 GeV >");
   hframe_copy__440->GetYaxis()->SetLabelFont(43);
   hframe_copy__440->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__440->GetYaxis()->SetLabelSize(27);
   hframe_copy__440->GetYaxis()->SetTitleSize(33);
   hframe_copy__440->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__440->GetYaxis()->SetTitleFont(43);
   hframe_copy__440->GetZaxis()->SetLabelFont(43);
   hframe_copy__440->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__440->GetZaxis()->SetLabelSize(27);
   hframe_copy__440->GetZaxis()->SetTitleSize(33);
   hframe_copy__440->GetZaxis()->SetTitleOffset(1);
   hframe_copy__440->GetZaxis()->SetTitleFont(43);
   hframe_copy__440->Draw("sameaxis");
   
   TH1F *hframe_copy__441 = new TH1F("hframe_copy__441","",1000,500,3000);
   hframe_copy__441->SetMinimum(0.01);
   hframe_copy__441->SetMaximum(192.2719);
   hframe_copy__441->SetDirectory(0);
   hframe_copy__441->SetStats(0);
   hframe_copy__441->SetLineStyle(0);
   hframe_copy__441->SetMarkerStyle(20);
   hframe_copy__441->GetXaxis()->SetLabelFont(43);
   hframe_copy__441->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__441->GetXaxis()->SetLabelSize(0);
   hframe_copy__441->GetXaxis()->SetTitleSize(0);
   hframe_copy__441->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__441->GetXaxis()->SetTitleFont(43);
   hframe_copy__441->GetYaxis()->SetTitle("< Events / 50-500 GeV >");
   hframe_copy__441->GetYaxis()->SetLabelFont(43);
   hframe_copy__441->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__441->GetYaxis()->SetLabelSize(27);
   hframe_copy__441->GetYaxis()->SetTitleSize(33);
   hframe_copy__441->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__441->GetYaxis()->SetTitleFont(43);
   hframe_copy__441->GetZaxis()->SetLabelFont(43);
   hframe_copy__441->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__441->GetZaxis()->SetLabelSize(27);
   hframe_copy__441->GetZaxis()->SetTitleSize(33);
   hframe_copy__441->GetZaxis()->SetTitleOffset(1);
   hframe_copy__441->GetZaxis()->SetTitleFont(43);
   hframe_copy__441->Draw("sameaxis");
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
   HT_1->Modified();
   HT->cd();
   HT->Modified();
   HT->cd();
   HT->SetSelected(HT);
}
