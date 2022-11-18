void WPt()
{
//=========Macro generated from canvas: WPt/WPt
//=========  (Fri Nov 18 13:31:00 2022) by ROOT version 6.20/02
   TCanvas *WPt = new TCanvas("WPt", "WPt",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   WPt->SetHighLightColor(2);
   WPt->Range(0,0,1,1);
   WPt->SetFillColor(0);
   WPt->SetBorderMode(0);
   WPt->SetBorderSize(2);
   WPt->SetTickx(1);
   WPt->SetTicky(1);
   WPt->SetLeftMargin(0.16);
   WPt->SetRightMargin(0.05);
   WPt->SetTopMargin(0.06);
   WPt->SetBottomMargin(0.13);
   WPt->SetFrameFillStyle(0);
   WPt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: WPt_2
   TPad *WPt_2 = new TPad("WPt_2", "WPt_2",0,0,1,0.304);
   WPt_2->Draw();
   WPt_2->cd();
   WPt_2->Range(-141.7721,-0.428,744.3038,1.7);
   WPt_2->SetFillColor(0);
   WPt_2->SetFillStyle(4000);
   WPt_2->SetBorderMode(0);
   WPt_2->SetBorderSize(2);
   WPt_2->SetTickx(1);
   WPt_2->SetTicky(1);
   WPt_2->SetLeftMargin(0.16);
   WPt_2->SetRightMargin(0.05);
   WPt_2->SetTopMargin(0);
   WPt_2->SetBottomMargin(0.3421053);
   WPt_2->SetFrameFillStyle(0);
   WPt_2->SetFrameBorderMode(0);
   WPt_2->SetFrameFillStyle(0);
   WPt_2->SetFrameBorderMode(0);
   
   TH1F *hframe__876 = new TH1F("hframe__876","",1000,0,700);
   hframe__876->SetMinimum(0.3);
   hframe__876->SetMaximum(1.7);
   hframe__876->SetDirectory(0);
   hframe__876->SetStats(0);
   hframe__876->SetLineStyle(0);
   hframe__876->SetMarkerStyle(20);
   hframe__876->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe__876->GetXaxis()->SetNdivisions(8);
   hframe__876->GetXaxis()->SetLabelFont(43);
   hframe__876->GetXaxis()->SetLabelOffset(0.007);
   hframe__876->GetXaxis()->SetLabelSize(27);
   hframe__876->GetXaxis()->SetTitleSize(33);
   hframe__876->GetXaxis()->SetTitleOffset(2.960526);
   hframe__876->GetXaxis()->SetTitleFont(43);
   hframe__876->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__876->GetYaxis()->SetNdivisions(505);
   hframe__876->GetYaxis()->SetLabelFont(43);
   hframe__876->GetYaxis()->SetLabelOffset(0.007);
   hframe__876->GetYaxis()->SetLabelSize(21);
   hframe__876->GetYaxis()->SetTitleSize(33);
   hframe__876->GetYaxis()->SetTitleOffset(1.5625);
   hframe__876->GetYaxis()->SetTitleFont(43);
   hframe__876->GetZaxis()->SetLabelFont(43);
   hframe__876->GetZaxis()->SetLabelOffset(0.007);
   hframe__876->GetZaxis()->SetLabelSize(27);
   hframe__876->GetZaxis()->SetTitleSize(33);
   hframe__876->GetZaxis()->SetTitleOffset(1);
   hframe__876->GetZaxis()->SetTitleFont(43);
   hframe__876->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3537[17] = {
   10,
   30,
   70,
   90,
   110,
   130,
   170,
   190,
   210,
   230,
   270,
   290,
   325,
   375,
   450,
   600,
   750};
   Double_t BackgroundStatSystError_fy3537[17] = {
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
   Double_t BackgroundStatSystError_felx3537[17] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BackgroundStatSystError_fely3537[17] = {
   0.07491838,
   0.04768656,
   0.03558454,
   0.02777953,
   0.02615996,
   0.02515066,
   0.02517695,
   0.02497585,
   0.02586892,
   0.02742155,
   0.0314888,
   0.03490413,
   0.03246835,
   0.04563374,
   0.06198306,
   0.1218905,
   0.5380381};
   Double_t BackgroundStatSystError_fehx3537[17] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BackgroundStatSystError_fehy3537[17] = {
   0.07491838,
   0.04768656,
   0.03558454,
   0.02777953,
   0.02615996,
   0.02515066,
   0.02517695,
   0.02497585,
   0.02586892,
   0.02742155,
   0.0314888,
   0.03490413,
   0.03246835,
   0.04563374,
   0.06198306,
   0.1218905,
   0.5380381};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,BackgroundStatSystError_fx3537,BackgroundStatSystError_fy3537,BackgroundStatSystError_felx3537,BackgroundStatSystError_fehx3537,BackgroundStatSystError_fely3537,BackgroundStatSystError_fehy3537);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1347;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError352935333537 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError352935333537","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMinimum(0.3543543);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMaximum(1.645646);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError352935333537->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError352935333537);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3538[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   325,
   375,
   450,
   600,
   750};
   Double_t BackgroundStatError_fy3538[20] = {
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
   Double_t BackgroundStatError_felx3538[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BackgroundStatError_fely3538[20] = {
   0.07491838,
   0.04768656,
   0,
   0.03558454,
   0.02777953,
   0.02615996,
   0.02515066,
   0,
   0.02517695,
   0.02497585,
   0.02586892,
   0.02742155,
   0,
   0.0314888,
   0.03490413,
   0.03246835,
   0.04563374,
   0.06198306,
   0.1218905,
   0.5380381};
   Double_t BackgroundStatError_fehx3538[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BackgroundStatError_fehy3538[20] = {
   0.07491838,
   0.04768656,
   0,
   0.03558454,
   0.02777953,
   0.02615996,
   0.02515066,
   0,
   0.02517695,
   0.02497585,
   0.02586892,
   0.02742155,
   0,
   0.0314888,
   0.03490413,
   0.03246835,
   0.04563374,
   0.06198306,
   0.1218905,
   0.5380381};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3538,BackgroundStatError_fy3538,BackgroundStatError_felx3538,BackgroundStatError_fehx3538,BackgroundStatError_fely3538,BackgroundStatError_fehy3538);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1346;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError353035343538 = new TH1F("Graph_Graph_Graph_BackgroundStatError353035343538","Graph",100,0,880);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMinimum(0.3543543);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMaximum(1.645646);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError353035343538->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError353035343538->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError353035343538);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx126[2] = {
   0,
   700};
   Double_t Graph0_fy126[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx126,Graph0_fy126);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0124125126 = new TH1F("Graph_Graph_Graph_Graph0124125126","Graph",100,0,770);
   Graph_Graph_Graph_Graph0124125126->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0124125126->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0124125126->SetDirectory(0);
   Graph_Graph_Graph_Graph0124125126->SetStats(0);
   Graph_Graph_Graph_Graph0124125126->SetLineStyle(0);
   Graph_Graph_Graph_Graph0124125126->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0124125126->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0124125126->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0124125126->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0124125126);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3539[17] = {
   10,
   30,
   70,
   90,
   110,
   130,
   170,
   190,
   210,
   230,
   270,
   290,
   325,
   375,
   450,
   600,
   750};
   Double_t Graph1_fy3539[17] = {
   0.9391939,
   0.9364274,
   0.9277964,
   0.9629417,
   0.9758729,
   0.9114387,
   1.047081,
   0.9994433,
   1.045245,
   0.9419727,
   1.11827,
   1.042349,
   1.125448,
   0.9270256,
   1.322267,
   1.12813,
   1.050974};
   Double_t Graph1_felx3539[17] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t Graph1_fely3539[17] = {
   0.07182195,
   0.04705725,
   0.0351428,
   0.02815186,
   0.02717055,
   0.02562608,
   0.02799442,
   0.02723168,
   0.02959954,
   0.02961066,
   0.03727566,
   0.0397681,
   0.03920682,
   0.0501278,
   0.07959112,
   0.1399273,
   0.6067804};
   Double_t Graph1_fehx3539[17] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t Graph1_fehy3539[17] = {
   0.07182195,
   0.04705725,
   0.0351428,
   0.02815186,
   0.02717055,
   0.02562608,
   0.02799442,
   0.02723168,
   0.02959954,
   0.02961066,
   0.03727566,
   0.0397681,
   0.03920682,
   0.0501278,
   0.07959112,
   0.1399273,
   0.6067804};
   grae = new TGraphAsymmErrors(17,Graph1_fx3539,Graph1_fy3539,Graph1_felx3539,Graph1_fehx3539,Graph1_fely3539,Graph1_fehy3539);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1353135353539 = new TH1F("Graph_Graph_Graph_Graph1353135353539","Graph",100,0,880);
   Graph_Graph_Graph_Graph1353135353539->SetMinimum(0.322838);
   Graph_Graph_Graph_Graph1353135353539->SetMaximum(1.779111);
   Graph_Graph_Graph_Graph1353135353539->SetDirectory(0);
   Graph_Graph_Graph_Graph1353135353539->SetStats(0);
   Graph_Graph_Graph_Graph1353135353539->SetLineStyle(0);
   Graph_Graph_Graph_Graph1353135353539->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1353135353539->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1353135353539->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1353135353539->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1353135353539);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__877 = new TH1F("hframe_copy__877","",1000,0,700);
   hframe_copy__877->SetMinimum(0.3);
   hframe_copy__877->SetMaximum(1.7);
   hframe_copy__877->SetDirectory(0);
   hframe_copy__877->SetStats(0);
   hframe_copy__877->SetLineStyle(0);
   hframe_copy__877->SetMarkerStyle(20);
   hframe_copy__877->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe_copy__877->GetXaxis()->SetNdivisions(8);
   hframe_copy__877->GetXaxis()->SetLabelFont(43);
   hframe_copy__877->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__877->GetXaxis()->SetLabelSize(27);
   hframe_copy__877->GetXaxis()->SetTitleSize(33);
   hframe_copy__877->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__877->GetXaxis()->SetTitleFont(43);
   hframe_copy__877->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__877->GetYaxis()->SetNdivisions(505);
   hframe_copy__877->GetYaxis()->SetLabelFont(43);
   hframe_copy__877->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__877->GetYaxis()->SetLabelSize(21);
   hframe_copy__877->GetYaxis()->SetTitleSize(33);
   hframe_copy__877->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__877->GetYaxis()->SetTitleFont(43);
   hframe_copy__877->GetZaxis()->SetLabelFont(43);
   hframe_copy__877->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__877->GetZaxis()->SetLabelSize(27);
   hframe_copy__877->GetZaxis()->SetTitleSize(33);
   hframe_copy__877->GetZaxis()->SetTitleOffset(1);
   hframe_copy__877->GetZaxis()->SetTitleFont(43);
   hframe_copy__877->Draw("sameaxis");
   WPt_2->Modified();
   WPt->cd();
  
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
   WPt->cd();
  
// ------------>Primitives in pad: WPt_1
   TPad *WPt_1 = new TPad("WPt_1", "WPt_1",0,0.2897959,1,1);
   WPt_1->Draw();
   WPt_1->cd();
   WPt_1->Range(-141.7721,-2.102113,744.3038,3.003559);
   WPt_1->SetFillColor(0);
   WPt_1->SetFillStyle(4000);
   WPt_1->SetBorderMode(0);
   WPt_1->SetBorderSize(2);
   WPt_1->SetLogy();
   WPt_1->SetTickx(1);
   WPt_1->SetTicky(1);
   WPt_1->SetLeftMargin(0.16);
   WPt_1->SetRightMargin(0.05);
   WPt_1->SetTopMargin(0.06);
   WPt_1->SetBottomMargin(0.02);
   WPt_1->SetFrameFillStyle(0);
   WPt_1->SetFrameBorderMode(0);
   WPt_1->SetFrameFillStyle(0);
   WPt_1->SetFrameBorderMode(0);
   
   TH1F *hframe__878 = new TH1F("hframe__878","",1000,0,700);
   hframe__878->SetMinimum(0.01);
   hframe__878->SetMaximum(497.9879);
   hframe__878->SetDirectory(0);
   hframe__878->SetStats(0);
   hframe__878->SetLineStyle(0);
   hframe__878->SetMarkerStyle(20);
   hframe__878->GetXaxis()->SetNdivisions(8);
   hframe__878->GetXaxis()->SetLabelFont(43);
   hframe__878->GetXaxis()->SetLabelOffset(0.007);
   hframe__878->GetXaxis()->SetLabelSize(0);
   hframe__878->GetXaxis()->SetTitleSize(0);
   hframe__878->GetXaxis()->SetTitleOffset(0.9);
   hframe__878->GetXaxis()->SetTitleFont(43);
   hframe__878->GetYaxis()->SetTitle("< Events / 20-200 GeV >");
   hframe__878->GetYaxis()->SetLabelFont(43);
   hframe__878->GetYaxis()->SetLabelOffset(0.007);
   hframe__878->GetYaxis()->SetLabelSize(27);
   hframe__878->GetYaxis()->SetTitleSize(33);
   hframe__878->GetYaxis()->SetTitleOffset(1.5625);
   hframe__878->GetYaxis()->SetTitleFont(43);
   hframe__878->GetZaxis()->SetLabelFont(43);
   hframe__878->GetZaxis()->SetLabelOffset(0.007);
   hframe__878->GetZaxis()->SetLabelSize(27);
   hframe__878->GetZaxis()->SetTitleSize(33);
   hframe__878->GetZaxis()->SetTitleOffset(1);
   hframe__878->GetZaxis()->SetTitleFont(43);
   hframe__878->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis445[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *StackedMCstackHist_stack_124_stack_125_stack_126 = new TH1F("StackedMCstackHist_stack_124_stack_125_stack_126","StackedMCstackHist",20, xAxis445);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMinimum(0.02775831);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMaximum(111.0333);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetDirectory(0);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetStats(0);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetLineStyle(0);
   StackedMCstackHist_stack_124_stack_125_stack_126->SetMarkerStyle(20);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_124_stack_125_stack_126->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_124_stack_125_stack_126);
   
   Double_t xAxis446[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_WPtInclusive",20, xAxis446);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,0.1491481);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,0.4099671);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,0.8867267);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,1.163009);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,1.235775);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,1.12207);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1.361549);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,1.632278);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,1.462081);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.078691);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1.041061);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.7202009);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.4435928);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.2150756);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.06316689);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.005415716);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,-0.001214647);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,0.03830095);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.06432086);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.1304737);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.1279186);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.1095283);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.09580111);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.1125431);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.1494929);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.1185902);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.1263296);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.1041419);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.0883611);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.04321083);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.02555549);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.01087116);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.002451813);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.001343226);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1151.549);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,160);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis447[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_WPtInclusive",20, xAxis447);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1.700765);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4.63458);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,9.94808);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,17.15357);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,20.76403);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,22.41723);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,22.17313);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,21.80801);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,19.00786);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,16.04816);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,12.13834);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,9.167441);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,4.613051);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,2.206741);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.6410241);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.07285146);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.005730312);
   TT_stack_2_stack_2_stack_2->SetBinError(1,0.06952666);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.1154242);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.1691999);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.2231429);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.2466607);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.2572725);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.2558005);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.2538894);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.2372864);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.2197704);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.1911007);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.1655866);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.07467127);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.05126919);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.01932225);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.004547082);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.001847199);
   TT_stack_2_stack_2_stack_2->SetEntries(64149.07);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,160);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis448[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_WPtInclusive",20, xAxis448);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,7.253639);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,16.09964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,26.72731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,42.43476);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,44.09487);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,45.85648);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,43.27007);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,43.94722);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,39.18113);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,36.59021);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,27.06133);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,23.06676);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,9.58642);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,4.956621);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,1.383133);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.2098203);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.02402927);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,0.6773883);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,0.9995981);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,1.319443);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,1.667929);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.707841);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.723624);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.65856);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.657071);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.520137);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,1.451029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,1.248303);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,1.134829);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.4675431);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.3317968);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.127465);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.03473304);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.01518749);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(6788.356);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,160);
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
   Double_t xAxis449[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__879 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__879","h_SR_WPtInclusive",20, xAxis449);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(1,0.04304188);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(2,0.05971462);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(4,0.06933211);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(5,0.1582939);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(6,0.1145994);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(7,0.04880782);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(9,0.07834566);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(10,0.06187355);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(11,0.09640889);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(12,0.06654669);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(14,0.06720816);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(15,0.07814508);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(16,0.02168506);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(17,0.01137124);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(18,0.006115728);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinContent(19,0.0007503991);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(1,0.01098226);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(2,0.01957675);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(4,0.02733261);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(5,0.02994951);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(6,0.02779367);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(7,0.02662485);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(9,0.02468051);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(10,0.02417898);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(11,0.02269854);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(12,0.02195315);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(14,0.0211686);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(15,0.01964113);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(16,0.009969876);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(17,0.007462782);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(18,0.002601612);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetBinError(19,0.0005609692);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetEntries(141.5435);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetXaxis()->SetRange(1,160);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__879->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3540[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   325,
   375,
   450,
   600,
   750};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3540[20] = {
   9.103552,
   21.14419,
   0,
   37.56212,
   60.75134,
   66.09467,
   69.39578,
   0,
   66.80476,
   67.38751,
   59.65107,
   53.71706,
   0,
   40.24074,
   32.95441,
   14.64306,
   7.378437,
   2.087324,
   0.2880874,
   0.02854494};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3540[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3540[20] = {
   0.6820234,
   1.008294,
   0,
   1.336631,
   1.687644,
   1.729034,
   1.74535,
   0,
   1.68194,
   1.683061,
   1.543109,
   1.473005,
   0,
   1.267132,
   1.150245,
   0.4754362,
   0.3367057,
   0.1293788,
   0.03511512,
   0.01535826};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3540[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   50,
   100,
   50};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3540[20] = {
   0.6820234,
   1.008294,
   0,
   1.336631,
   1.687644,
   1.729034,
   1.74535,
   0,
   1.68194,
   1.683061,
   1.543109,
   1.473005,
   0,
   1.267132,
   1.150245,
   0.4754362,
   0.3367057,
   0.1293788,
   0.03511512,
   0.01535826};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3540,BkgSum-SR-Inclusive_sum_errors_fy3540,BkgSum-SR-Inclusive_sum_errors_felx3540,BkgSum-SR-Inclusive_sum_errors_fehx3540,BkgSum-SR-Inclusive_sum_errors_fely3540,BkgSum-SR-Inclusive_sum_errors_fehy3540);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1345;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540","Graph",100,0,880);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMinimum(0.07825525);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMaximum(78.25525);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors353235363540->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors353235363540);
   
   grae->Draw("e2 ");
   Double_t xAxis450[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 500, 700, 800}; 
   
   TH1F *Data__880 = new TH1F("Data__880","h_SR_WPtInclusive",20, xAxis450);
   Data__880->SetBinContent(1,8.55);
   Data__880->SetBinContent(2,19.8);
   Data__880->SetBinContent(4,34.85);
   Data__880->SetBinContent(5,58.5);
   Data__880->SetBinContent(6,64.5);
   Data__880->SetBinContent(7,63.25);
   Data__880->SetBinContent(9,69.95);
   Data__880->SetBinContent(10,67.35);
   Data__880->SetBinContent(11,62.35);
   Data__880->SetBinContent(12,50.6);
   Data__880->SetBinContent(14,45);
   Data__880->SetBinContent(15,34.35);
   Data__880->SetBinContent(16,16.48);
   Data__880->SetBinContent(17,6.84);
   Data__880->SetBinContent(18,2.76);
   Data__880->SetBinContent(19,0.325);
   Data__880->SetBinContent(20,0.03);
   Data__880->SetBinError(1,0.6538348);
   Data__880->SetBinError(2,0.9949874);
   Data__880->SetBinError(4,1.320038);
   Data__880->SetBinError(5,1.710263);
   Data__880->SetBinError(6,1.795828);
   Data__880->SetBinError(7,1.778342);
   Data__880->SetBinError(9,1.87016);
   Data__880->SetBinError(10,1.835075);
   Data__880->SetBinError(11,1.765644);
   Data__880->SetBinError(12,1.590597);
   Data__880->SetBinError(14,1.5);
   Data__880->SetBinError(15,1.310534);
   Data__880->SetBinError(16,0.574108);
   Data__880->SetBinError(17,0.3698648);
   Data__880->SetBinError(18,0.1661325);
   Data__880->SetBinError(19,0.04031129);
   Data__880->SetBinError(20,0.01732051);
   Data__880->SetEntries(12449.29);
   Data__880->SetDirectory(0);
   Data__880->SetFillStyle(3001);
   Data__880->SetLineWidth(2);
   Data__880->SetMarkerStyle(20);
   Data__880->SetMarkerSize(1.2);
   Data__880->GetXaxis()->SetRange(1,160);
   Data__880->GetXaxis()->SetLabelFont(42);
   Data__880->GetXaxis()->SetTitleOffset(1);
   Data__880->GetXaxis()->SetTitleFont(42);
   Data__880->GetYaxis()->SetLabelFont(42);
   Data__880->GetYaxis()->SetTitleFont(42);
   Data__880->GetZaxis()->SetLabelFont(42);
   Data__880->GetZaxis()->SetTitleOffset(1);
   Data__880->GetZaxis()->SetTitleFont(42);
   Data__880->Draw("EP same");
   
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

   ci = 1345;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1345;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__881 = new TH1F("hframe_copy__881","",1000,0,700);
   hframe_copy__881->SetMinimum(0.01);
   hframe_copy__881->SetMaximum(497.9879);
   hframe_copy__881->SetDirectory(0);
   hframe_copy__881->SetStats(0);
   hframe_copy__881->SetLineStyle(0);
   hframe_copy__881->SetMarkerStyle(20);
   hframe_copy__881->GetXaxis()->SetNdivisions(8);
   hframe_copy__881->GetXaxis()->SetLabelFont(43);
   hframe_copy__881->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__881->GetXaxis()->SetLabelSize(0);
   hframe_copy__881->GetXaxis()->SetTitleSize(0);
   hframe_copy__881->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__881->GetXaxis()->SetTitleFont(43);
   hframe_copy__881->GetYaxis()->SetTitle("< Events / 20-200 GeV >");
   hframe_copy__881->GetYaxis()->SetLabelFont(43);
   hframe_copy__881->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__881->GetYaxis()->SetLabelSize(27);
   hframe_copy__881->GetYaxis()->SetTitleSize(33);
   hframe_copy__881->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__881->GetYaxis()->SetTitleFont(43);
   hframe_copy__881->GetZaxis()->SetLabelFont(43);
   hframe_copy__881->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__881->GetZaxis()->SetLabelSize(27);
   hframe_copy__881->GetZaxis()->SetTitleSize(33);
   hframe_copy__881->GetZaxis()->SetTitleOffset(1);
   hframe_copy__881->GetZaxis()->SetTitleFont(43);
   hframe_copy__881->Draw("sameaxis");
   
   TH1F *hframe_copy__882 = new TH1F("hframe_copy__882","",1000,0,700);
   hframe_copy__882->SetMinimum(0.01);
   hframe_copy__882->SetMaximum(497.9879);
   hframe_copy__882->SetDirectory(0);
   hframe_copy__882->SetStats(0);
   hframe_copy__882->SetLineStyle(0);
   hframe_copy__882->SetMarkerStyle(20);
   hframe_copy__882->GetXaxis()->SetNdivisions(8);
   hframe_copy__882->GetXaxis()->SetLabelFont(43);
   hframe_copy__882->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__882->GetXaxis()->SetLabelSize(0);
   hframe_copy__882->GetXaxis()->SetTitleSize(0);
   hframe_copy__882->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__882->GetXaxis()->SetTitleFont(43);
   hframe_copy__882->GetYaxis()->SetTitle("< Events / 20-200 GeV >");
   hframe_copy__882->GetYaxis()->SetLabelFont(43);
   hframe_copy__882->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__882->GetYaxis()->SetLabelSize(27);
   hframe_copy__882->GetYaxis()->SetTitleSize(33);
   hframe_copy__882->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__882->GetYaxis()->SetTitleFont(43);
   hframe_copy__882->GetZaxis()->SetLabelFont(43);
   hframe_copy__882->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__882->GetZaxis()->SetLabelSize(27);
   hframe_copy__882->GetZaxis()->SetTitleSize(33);
   hframe_copy__882->GetZaxis()->SetTitleOffset(1);
   hframe_copy__882->GetZaxis()->SetTitleFont(43);
   hframe_copy__882->Draw("sameaxis");
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
   WPt_1->Modified();
   WPt->cd();
   WPt->Modified();
   WPt->cd();
   WPt->SetSelected(WPt);
}
