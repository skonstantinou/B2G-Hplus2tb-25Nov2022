void limitsBr_sigma1_logY()
{
//=========Macro generated from canvas: limitsBr_sigma1_logY/
//=========  (Thu Nov 24 12:43:35 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_sigma1_logY = new TCanvas("limitsBr_sigma1_logY", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_sigma1_logY->SetHighLightColor(2);
   limitsBr_sigma1_logY->Range(-367.0886,-2.593662,3177.215,1.972968);
   limitsBr_sigma1_logY->SetFillColor(0);
   limitsBr_sigma1_logY->SetBorderMode(0);
   limitsBr_sigma1_logY->SetBorderSize(2);
   limitsBr_sigma1_logY->SetLogy();
   limitsBr_sigma1_logY->SetTickx(1);
   limitsBr_sigma1_logY->SetTicky(1);
   limitsBr_sigma1_logY->SetLeftMargin(0.16);
   limitsBr_sigma1_logY->SetRightMargin(0.05);
   limitsBr_sigma1_logY->SetTopMargin(0.06);
   limitsBr_sigma1_logY->SetBottomMargin(0.13);
   limitsBr_sigma1_logY->SetFrameFillStyle(0);
   limitsBr_sigma1_logY->SetFrameBorderMode(0);
   limitsBr_sigma1_logY->SetFrameFillStyle(0);
   limitsBr_sigma1_logY->SetFrameBorderMode(0);
   
   TH1F *hframe__53 = new TH1F("hframe__53","",1000,200,3000);
   hframe__53->SetMinimum(0.01);
   hframe__53->SetMaximum(50);
   hframe__53->SetDirectory(0);
   hframe__53->SetStats(0);
   hframe__53->SetLineStyle(0);
   hframe__53->SetMarkerStyle(20);
   hframe__53->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__53->GetXaxis()->SetLabelFont(43);
   hframe__53->GetXaxis()->SetLabelOffset(0.007);
   hframe__53->GetXaxis()->SetLabelSize(27);
   hframe__53->GetXaxis()->SetTitleSize(33);
   hframe__53->GetXaxis()->SetTitleOffset(0.9);
   hframe__53->GetXaxis()->SetTitleFont(43);
   hframe__53->GetYaxis()->SetTitle("Expected #pm1#sigma");
   hframe__53->GetYaxis()->SetLabelFont(43);
   hframe__53->GetYaxis()->SetLabelOffset(0.007);
   hframe__53->GetYaxis()->SetLabelSize(27);
   hframe__53->GetYaxis()->SetTitleSize(33);
   hframe__53->GetYaxis()->SetTitleOffset(1.25);
   hframe__53->GetYaxis()->SetTitleFont(43);
   hframe__53->GetZaxis()->SetLabelFont(43);
   hframe__53->GetZaxis()->SetLabelOffset(0.007);
   hframe__53->GetZaxis()->SetLabelSize(27);
   hframe__53->GetZaxis()->SetTitleSize(33);
   hframe__53->GetZaxis()->SetTitleFont(43);
   hframe__53->Draw(" ");
   
   Double_t ExpectedMinus1Sigma_fx91[17] = {
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
   Double_t ExpectedMinus1Sigma_fy91[17] = {
   3.623535,
   2.542969,
   1.680176,
   1.325684,
   1.044434,
   0.8060303,
   0.5222168,
   0.3519287,
   0.2554321,
   0.1988525,
   0.1447449,
   0.1305542,
   0.1362305,
   0.1447449,
   0.1519012,
   0.1822815,
   0.1933289};
   TGraph *graph = new TGraph(17,ExpectedMinus1Sigma_fx91,ExpectedMinus1Sigma_fy91);
   graph->SetName("ExpectedMinus1Sigma");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999900");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#999900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(36);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_ExpectedMinus1Sigma798591 = new TH1F("Graph_Graph_Graph_ExpectedMinus1Sigma798591","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->SetMinimum(0.1174988);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->SetMaximum(3.972833);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma798591->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus1Sigma798591);
   
   graph->Draw("pl ");
   
   Double_t ExpectedMinus1Sigma_fx92[17] = {
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
   Double_t ExpectedMinus1Sigma_fy92[17] = {
   8.307617,
   5.994141,
   4.631836,
   2.90625,
   2.076904,
   1.546631,
   1.016357,
   0.729126,
   0.5523682,
   0.4200439,
   0.3405762,
   0.2611084,
   0.259613,
   0.3178711,
   0.3065186,
   0.2927551,
   0.3314209};
   graph = new TGraph(17,ExpectedMinus1Sigma_fx92,ExpectedMinus1Sigma_fy92);
   graph->SetName("ExpectedMinus1Sigma");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#ff9900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ff9900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(32);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_ExpectedMinus1Sigma808692 = new TH1F("Graph_Graph_Graph_ExpectedMinus1Sigma808692","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->SetMinimum(0.2336517);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->SetMaximum(9.112418);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma808692->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus1Sigma808692);
   
   graph->Draw("pl ");
   
   Double_t ExpectedMinus1Sigma_fx93[17] = {
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
   Double_t ExpectedMinus1Sigma_fy93[17] = {
   3.360352,
   2.297852,
   1.589355,
   1.226074,
   0.9309082,
   0.71521,
   0.4654541,
   0.3178711,
   0.2327271,
   0.1816406,
   0.1333923,
   0.1163635,
   0.1187592,
   0.1305542,
   0.1353302,
   0.1560974,
   0.1657104};
   graph = new TGraph(17,ExpectedMinus1Sigma_fx93,ExpectedMinus1Sigma_fy93);
   graph->SetName("ExpectedMinus1Sigma");
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
   
   TH1F *Graph_Graph_Graph_ExpectedMinus1Sigma818793 = new TH1F("Graph_Graph_Graph_ExpectedMinus1Sigma818793","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->SetMinimum(0.1047272);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->SetMaximum(3.68475);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma818793->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus1Sigma818793);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus1Sigma_fx94[17] = {
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
   Double_t ExpectedPlus1Sigma_fy94[17] = {
   7.086133,
   4.83931,
   3.271143,
   2.592488,
   2.010494,
   1.533889,
   1.005247,
   0.669726,
   0.4860914,
   0.3888732,
   0.2786282,
   0.2513117,
   0.2622383,
   0.2786282,
   0.3004814,
   0.3564671,
   0.3824309};
   graph = new TGraph(17,ExpectedPlus1Sigma_fx94,ExpectedPlus1Sigma_fy94);
   graph->SetName("ExpectedPlus1Sigma");
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
   
   TH1F *Graph_Graph_Graph_ExpectedPlus1Sigma828894 = new TH1F("Graph_Graph_Graph_ExpectedPlus1Sigma828894","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->SetMinimum(0.2261805);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->SetMaximum(7.769615);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma828894->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus1Sigma828894);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus1Sigma_fx95[17] = {
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
   Double_t ExpectedPlus1Sigma_fy95[17] = {
   16.4336,
   11.67002,
   8.916102,
   5.658194,
   4.061564,
   3.024569,
   1.987574,
   1.425868,
   1.080203,
   0.8177858,
   0.6630696,
   0.5083534,
   0.5194045,
   0.6258405,
   0.6034891,
   0.5857115,
   0.6630696};
   graph = new TGraph(17,ExpectedPlus1Sigma_fx95,ExpectedPlus1Sigma_fy95);
   graph->SetName("ExpectedPlus1Sigma");
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
   
   TH1F *Graph_Graph_Graph_ExpectedPlus1Sigma838995 = new TH1F("Graph_Graph_Graph_ExpectedPlus1Sigma838995","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->SetMinimum(0.457518);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->SetMaximum(18.02612);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma838995->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus1Sigma838995);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus1Sigma_fx96[17] = {
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
   Double_t ExpectedPlus1Sigma_fy96[17] = {
   6.468545,
   4.493645,
   3.059447,
   2.333239,
   1.791962,
   1.376751,
   0.8959809,
   0.6049138,
   0.4428833,
   0.3496511,
   0.256775,
   0.2239952,
   0.2322437,
   0.2541767,
   0.2646498,
   0.3004814,
   0.3277979};
   graph = new TGraph(17,ExpectedPlus1Sigma_fx96,ExpectedPlus1Sigma_fy96);
   graph->SetName("ExpectedPlus1Sigma");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(24);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_ExpectedPlus1Sigma849096 = new TH1F("Graph_Graph_Graph_ExpectedPlus1Sigma849096","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->SetMinimum(0.2015957);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->SetMaximum(7.093);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma849096->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus1Sigma849096);
   
   graph->Draw("pl ");
   
   TLegend *leg = new TLegend(0.65,0.51,1.05,0.91,NULL,"brNDC");
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
   entry=leg->AddEntry("ExpectedPlus1Sigma","#font[42]{datacards_multicategory_Combined_24Nov2022_Created24Nov2022}","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedPlus1Sigma","#font[42]{datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841}","lp");

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(46);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedPlus1Sigma","#font[42]{datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305}","lp");

   ci = TColor::GetColor("#999900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#999900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedMinus1Sigma","#font[42]{None}","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedMinus1Sigma","#font[42]{None}","lp");

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(32);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ExpectedMinus1Sigma","#font[42]{None}","lp");

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
   
   TH1F *hframe_copy__54 = new TH1F("hframe_copy__54","",1000,200,3000);
   hframe_copy__54->SetMinimum(0.01);
   hframe_copy__54->SetMaximum(50);
   hframe_copy__54->SetDirectory(0);
   hframe_copy__54->SetStats(0);
   hframe_copy__54->SetLineStyle(0);
   hframe_copy__54->SetMarkerStyle(20);
   hframe_copy__54->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__54->GetXaxis()->SetLabelFont(43);
   hframe_copy__54->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__54->GetXaxis()->SetLabelSize(27);
   hframe_copy__54->GetXaxis()->SetTitleSize(33);
   hframe_copy__54->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__54->GetXaxis()->SetTitleFont(43);
   hframe_copy__54->GetYaxis()->SetTitle("Expected #pm1#sigma");
   hframe_copy__54->GetYaxis()->SetLabelFont(43);
   hframe_copy__54->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__54->GetYaxis()->SetLabelSize(27);
   hframe_copy__54->GetYaxis()->SetTitleSize(33);
   hframe_copy__54->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__54->GetYaxis()->SetTitleFont(43);
   hframe_copy__54->GetZaxis()->SetLabelFont(43);
   hframe_copy__54->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__54->GetZaxis()->SetLabelSize(27);
   hframe_copy__54->GetZaxis()->SetTitleSize(33);
   hframe_copy__54->GetZaxis()->SetTitleFont(43);
   hframe_copy__54->Draw("sameaxis");
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
   limitsBr_sigma1_logY->Modified();
   limitsBr_sigma1_logY->cd();
   limitsBr_sigma1_logY->SetSelected(limitsBr_sigma1_logY);
}
