void limitsBr_sigma2Relative_logY()
{
//=========Macro generated from canvas: limitsBr_sigma2Relative_logY/
//=========  (Thu Nov 24 12:43:36 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_sigma2Relative_logY = new TCanvas("limitsBr_sigma2Relative_logY", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_sigma2Relative_logY->SetHighLightColor(2);
   limitsBr_sigma2Relative_logY->Range(-367.0886,-0.6185185,3177.215,10.67778);
   limitsBr_sigma2Relative_logY->SetFillColor(0);
   limitsBr_sigma2Relative_logY->SetBorderMode(0);
   limitsBr_sigma2Relative_logY->SetBorderSize(2);
   limitsBr_sigma2Relative_logY->SetTickx(1);
   limitsBr_sigma2Relative_logY->SetTicky(1);
   limitsBr_sigma2Relative_logY->SetLeftMargin(0.16);
   limitsBr_sigma2Relative_logY->SetRightMargin(0.05);
   limitsBr_sigma2Relative_logY->SetTopMargin(0.06);
   limitsBr_sigma2Relative_logY->SetBottomMargin(0.13);
   limitsBr_sigma2Relative_logY->SetFrameFillStyle(0);
   limitsBr_sigma2Relative_logY->SetFrameBorderMode(0);
   limitsBr_sigma2Relative_logY->SetFrameFillStyle(0);
   limitsBr_sigma2Relative_logY->SetFrameBorderMode(0);
   
   TH1F *hframe__77 = new TH1F("hframe__77","",1000,200,3000);
   hframe__77->SetMinimum(0.85);
   hframe__77->SetMaximum(10);
   hframe__77->SetDirectory(0);
   hframe__77->SetStats(0);
   hframe__77->SetLineStyle(0);
   hframe__77->SetMarkerStyle(20);
   hframe__77->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__77->GetXaxis()->SetLabelFont(43);
   hframe__77->GetXaxis()->SetLabelOffset(0.007);
   hframe__77->GetXaxis()->SetLabelSize(27);
   hframe__77->GetXaxis()->SetTitleSize(33);
   hframe__77->GetXaxis()->SetTitleOffset(0.9);
   hframe__77->GetXaxis()->SetTitleFont(43);
   hframe__77->GetYaxis()->SetTitle("Expected #pm2#sigma / median");
   hframe__77->GetYaxis()->SetLabelFont(43);
   hframe__77->GetYaxis()->SetLabelOffset(0.007);
   hframe__77->GetYaxis()->SetLabelSize(27);
   hframe__77->GetYaxis()->SetTitleSize(33);
   hframe__77->GetYaxis()->SetTitleOffset(1.25);
   hframe__77->GetYaxis()->SetTitleFont(43);
   hframe__77->GetZaxis()->SetLabelFont(43);
   hframe__77->GetZaxis()->SetLabelOffset(0.007);
   hframe__77->GetZaxis()->SetLabelSize(27);
   hframe__77->GetZaxis()->SetTitleSize(33);
   hframe__77->GetZaxis()->SetTitleFont(43);
   hframe__77->Draw(" ");
   TBox *box = new TBox(200,0.95,3000,1.05);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3001);
   box->Draw();
   
   Double_t ExpectedMinus2Sigma_fx154[17] = {
   200,
   220,
   250,
   300,
   350,
   400,
   500,
   600,
   700,
   800,
   1000,
   1250,
   1500,
   1750,
   2000,
   2500,
   3000};
   Double_t ExpectedMinus2Sigma_fy154[17] = {
   0.53125,
   0.5625,
   0.5625,
   0.53125,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.53125,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.53125,
   0.53125,
   0.53125};
   TGraph *graph = new TGraph(17,ExpectedMinus2Sigma_fx154,ExpectedMinus2Sigma_fy154);
   graph->SetName("ExpectedMinus2Sigma");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#999900");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#999900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(36);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_ExpectedMinus2Sigma142148154 = new TH1F("Graph_Graph_Graph_ExpectedMinus2Sigma142148154","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->SetMinimum(0.528125);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->SetMaximum(0.565625);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma142148154->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus2Sigma142148154);
   
   graph->Draw("pl ");
   
   Double_t ExpectedMinus2Sigma_fx155[17] = {
   200,
   220,
   250,
   300,
   350,
   400,
   500,
   600,
   700,
   800,
   1000,
   1250,
   1500,
   1750,
   2000,
   2500,
   3000};
   Double_t ExpectedMinus2Sigma_fy155[17] = {
   0.53125,
   0.5625,
   0.5625,
   0.5625,
   0.53125,
   0.53125,
   0.53125,
   0.53125,
   0.53125,
   0.5625,
   0.5625,
   0.5625,
   0.53125,
   0.5625,
   0.5625,
   0.53125,
   0.53125};
   graph = new TGraph(17,ExpectedMinus2Sigma_fx155,ExpectedMinus2Sigma_fy155);
   graph->SetName("ExpectedMinus2Sigma");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#ff9900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ff9900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(32);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_ExpectedMinus2Sigma143149155 = new TH1F("Graph_Graph_Graph_ExpectedMinus2Sigma143149155","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->SetMinimum(0.528125);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->SetMaximum(0.565625);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma143149155->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus2Sigma143149155);
   
   graph->Draw("pl ");
   
   Double_t ExpectedMinus2Sigma_fx156[17] = {
   200,
   220,
   250,
   300,
   350,
   400,
   500,
   600,
   700,
   800,
   1000,
   1250,
   1500,
   1750,
   2000,
   2500,
   3000};
   Double_t ExpectedMinus2Sigma_fy156[17] = {
   0.5625,
   0.53125,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.5625,
   0.53125,
   0.5625,
   0.53125,
   0.5625,
   0.53125};
   graph = new TGraph(17,ExpectedMinus2Sigma_fx156,ExpectedMinus2Sigma_fy156);
   graph->SetName("ExpectedMinus2Sigma");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(4);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_ExpectedMinus2Sigma144150156 = new TH1F("Graph_Graph_Graph_ExpectedMinus2Sigma144150156","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->SetMinimum(0.528125);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->SetMaximum(0.565625);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma144150156->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus2Sigma144150156);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus2Sigma_fx157[17] = {
   200,
   220,
   250,
   300,
   350,
   400,
   500,
   600,
   700,
   800,
   1000,
   1250,
   1500,
   1750,
   2000,
   2500,
   3000};
   Double_t ExpectedPlus2Sigma_fy157[17] = {
   1.836072,
   1.849027,
   1.871947,
   1.836073,
   1.860487,
   1.849027,
   1.860487,
   1.849027,
   1.849027,
   1.849027,
   1.860487,
   1.873317,
   1.873317,
   1.873317,
   1.873317,
   1.861982,
   1.886147};
   graph = new TGraph(17,ExpectedPlus2Sigma_fx157,ExpectedPlus2Sigma_fy157);
   graph->SetName("ExpectedPlus2Sigma");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#999900");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#999900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(26);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_ExpectedPlus2Sigma145151157 = new TH1F("Graph_Graph_Graph_ExpectedPlus2Sigma145151157","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->SetMinimum(1.831065);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->SetMaximum(1.891155);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma145151157->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus2Sigma145151157);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus2Sigma_fx158[17] = {
   200,
   220,
   250,
   300,
   350,
   400,
   500,
   600,
   700,
   800,
   1000,
   1250,
   1500,
   1750,
   2000,
   2500,
   3000};
   Double_t ExpectedPlus2Sigma_fy158[17] = {
   1.898977,
   1.897358,
   1.886147,
   1.897358,
   1.861982,
   1.849027,
   1.861982,
   1.849027,
   1.861982,
   1.897358,
   1.884652,
   1.910063,
   1.910063,
   1.933731,
   1.933731,
   1.935474,
   1.922769};
   graph = new TGraph(17,ExpectedPlus2Sigma_fx158,ExpectedPlus2Sigma_fy158);
   graph->SetName("ExpectedPlus2Sigma");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#ff9900");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ff9900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(46);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_ExpectedPlus2Sigma146152158 = new TH1F("Graph_Graph_Graph_ExpectedPlus2Sigma146152158","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->SetMinimum(1.840382);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->SetMaximum(1.944119);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma146152158->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus2Sigma146152158);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus2Sigma_fx159[17] = {
   200,
   220,
   250,
   300,
   350,
   400,
   500,
   600,
   700,
   800,
   1000,
   1250,
   1500,
   1750,
   2000,
   2500,
   3000};
   Double_t ExpectedPlus2Sigma_fy159[17] = {
   1.860487,
   1.836072,
   1.860487,
   1.849027,
   1.860487,
   1.860487,
   1.860487,
   1.849027,
   1.849027,
   1.860487,
   1.860487,
   1.873317,
   1.849027,
   1.884652,
   1.861982,
   1.886147,
   1.873317};
   graph = new TGraph(17,ExpectedPlus2Sigma_fx159,ExpectedPlus2Sigma_fy159);
   graph->SetName("ExpectedPlus2Sigma");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(24);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_ExpectedPlus2Sigma147153159 = new TH1F("Graph_Graph_Graph_ExpectedPlus2Sigma147153159","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->SetMinimum(1.831065);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->SetMaximum(1.891155);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma147153159->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus2Sigma147153159);
   
   graph->Draw("pl ");
   
   TLegend *leg = new TLegend(0.69,0.51,1.09,0.91,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(4000);
   TLegendEntry *entry=leg->AddEntry("NULL","H^{#pm} #rightarrow H W^{#pm}, H#rightarrow #tau^{+}#tau^{-}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedPlus2Sigma","#font[42]{datacards_multicategory_Combined_24Nov2022_Created24Nov2022}","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedPlus2Sigma","#font[42]{datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841}","lp");

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(46);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedPlus2Sigma","#font[42]{datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305}","lp");

   ci = TColor::GetColor("#999900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#999900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedMinus2Sigma","#font[42]{None}","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedMinus2Sigma","#font[42]{None}","lp");

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(32);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedMinus2Sigma","#font[42]{None}","lp");

   ci = TColor::GetColor("#999900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#999900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(36);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__78 = new TH1F("hframe_copy__78","",1000,200,3000);
   hframe_copy__78->SetMinimum(0.85);
   hframe_copy__78->SetMaximum(10);
   hframe_copy__78->SetDirectory(0);
   hframe_copy__78->SetStats(0);
   hframe_copy__78->SetLineStyle(0);
   hframe_copy__78->SetMarkerStyle(20);
   hframe_copy__78->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__78->GetXaxis()->SetLabelFont(43);
   hframe_copy__78->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__78->GetXaxis()->SetLabelSize(27);
   hframe_copy__78->GetXaxis()->SetTitleSize(33);
   hframe_copy__78->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__78->GetXaxis()->SetTitleFont(43);
   hframe_copy__78->GetYaxis()->SetTitle("Expected #pm2#sigma / median");
   hframe_copy__78->GetYaxis()->SetLabelFont(43);
   hframe_copy__78->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__78->GetYaxis()->SetLabelSize(27);
   hframe_copy__78->GetYaxis()->SetTitleSize(33);
   hframe_copy__78->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__78->GetYaxis()->SetTitleFont(43);
   hframe_copy__78->GetZaxis()->SetLabelFont(43);
   hframe_copy__78->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__78->GetZaxis()->SetLabelSize(27);
   hframe_copy__78->GetZaxis()->SetTitleSize(33);
   hframe_copy__78->GetZaxis()->SetTitleFont(43);
   hframe_copy__78->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.95,0.952,"13 TeV");
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
   limitsBr_sigma2Relative_logY->Modified();
   limitsBr_sigma2Relative_logY->cd();
   limitsBr_sigma2Relative_logY->SetSelected(limitsBr_sigma2Relative_logY);
}
