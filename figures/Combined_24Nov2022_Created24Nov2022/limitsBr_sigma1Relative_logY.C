void limitsBr_sigma1Relative_logY()
{
//=========Macro generated from canvas: limitsBr_sigma1Relative_logY/
//=========  (Thu Nov 24 12:43:36 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_sigma1Relative_logY = new TCanvas("limitsBr_sigma1Relative_logY", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_sigma1Relative_logY->SetHighLightColor(2);
   limitsBr_sigma1Relative_logY->Range(-367.0886,-0.6185185,3177.215,10.67778);
   limitsBr_sigma1Relative_logY->SetFillColor(0);
   limitsBr_sigma1Relative_logY->SetBorderMode(0);
   limitsBr_sigma1Relative_logY->SetBorderSize(2);
   limitsBr_sigma1Relative_logY->SetTickx(1);
   limitsBr_sigma1Relative_logY->SetTicky(1);
   limitsBr_sigma1Relative_logY->SetLeftMargin(0.16);
   limitsBr_sigma1Relative_logY->SetRightMargin(0.05);
   limitsBr_sigma1Relative_logY->SetTopMargin(0.06);
   limitsBr_sigma1Relative_logY->SetBottomMargin(0.13);
   limitsBr_sigma1Relative_logY->SetFrameFillStyle(0);
   limitsBr_sigma1Relative_logY->SetFrameBorderMode(0);
   limitsBr_sigma1Relative_logY->SetFrameFillStyle(0);
   limitsBr_sigma1Relative_logY->SetFrameBorderMode(0);
   
   TH1F *hframe__71 = new TH1F("hframe__71","",1000,200,3000);
   hframe__71->SetMinimum(0.85);
   hframe__71->SetMaximum(10);
   hframe__71->SetDirectory(0);
   hframe__71->SetStats(0);
   hframe__71->SetLineStyle(0);
   hframe__71->SetMarkerStyle(20);
   hframe__71->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__71->GetXaxis()->SetLabelFont(43);
   hframe__71->GetXaxis()->SetLabelOffset(0.007);
   hframe__71->GetXaxis()->SetLabelSize(27);
   hframe__71->GetXaxis()->SetTitleSize(33);
   hframe__71->GetXaxis()->SetTitleOffset(0.9);
   hframe__71->GetXaxis()->SetTitleFont(43);
   hframe__71->GetYaxis()->SetTitle("Expected #pm1#sigma / median");
   hframe__71->GetYaxis()->SetLabelFont(43);
   hframe__71->GetYaxis()->SetLabelOffset(0.007);
   hframe__71->GetYaxis()->SetLabelSize(27);
   hframe__71->GetYaxis()->SetTitleSize(33);
   hframe__71->GetYaxis()->SetTitleOffset(1.25);
   hframe__71->GetYaxis()->SetTitleFont(43);
   hframe__71->GetZaxis()->SetLabelFont(43);
   hframe__71->GetZaxis()->SetLabelOffset(0.007);
   hframe__71->GetZaxis()->SetLabelSize(27);
   hframe__71->GetZaxis()->SetTitleSize(33);
   hframe__71->GetZaxis()->SetTitleFont(43);
   hframe__71->Draw(" ");
   TBox *box = new TBox(200,0.95,3000,1.05);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3001);
   box->Draw();
   
   Double_t ExpectedMinus1Sigma_fx136[17] = {
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
   Double_t ExpectedMinus1Sigma_fy136[17] = {
   0.7070312,
   0.7265625,
   0.7265625,
   0.7070312,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7070312,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7070312,
   0.7070312,
   0.7070312};
   TGraph *graph = new TGraph(17,ExpectedMinus1Sigma_fx136,ExpectedMinus1Sigma_fy136);
   graph->SetName("ExpectedMinus1Sigma");
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
   
   TH1F *Graph_Graph_Graph_ExpectedMinus1Sigma124130136 = new TH1F("Graph_Graph_Graph_ExpectedMinus1Sigma124130136","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->SetMinimum(0.7050781);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->SetMaximum(0.7285156);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma124130136->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus1Sigma124130136);
   
   graph->Draw("pl ");
   
   Double_t ExpectedMinus1Sigma_fx137[17] = {
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
   Double_t ExpectedMinus1Sigma_fy137[17] = {
   0.7070312,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7070312,
   0.7070312,
   0.7070312,
   0.7070312,
   0.7070312,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7070312,
   0.7265625,
   0.7265625,
   0.7070312,
   0.7070312};
   graph = new TGraph(17,ExpectedMinus1Sigma_fx137,ExpectedMinus1Sigma_fy137);
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
   
   TH1F *Graph_Graph_Graph_ExpectedMinus1Sigma125131137 = new TH1F("Graph_Graph_Graph_ExpectedMinus1Sigma125131137","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->SetMinimum(0.7050781);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->SetMaximum(0.7285156);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma125131137->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus1Sigma125131137);
   
   graph->Draw("pl ");
   
   Double_t ExpectedMinus1Sigma_fx138[17] = {
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
   Double_t ExpectedMinus1Sigma_fy138[17] = {
   0.7265625,
   0.7070312,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7265625,
   0.7070312,
   0.7265625,
   0.7070312,
   0.7265625,
   0.7070312};
   graph = new TGraph(17,ExpectedMinus1Sigma_fx138,ExpectedMinus1Sigma_fy138);
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
   
   TH1F *Graph_Graph_Graph_ExpectedMinus1Sigma126132138 = new TH1F("Graph_Graph_Graph_ExpectedMinus1Sigma126132138","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->SetMinimum(0.7050781);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->SetMaximum(0.7285156);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus1Sigma126132138->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus1Sigma126132138);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus1Sigma_fx139[17] = {
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
   Double_t ExpectedPlus1Sigma_fy139[17] = {
   1.38266,
   1.38266,
   1.414548,
   1.38266,
   1.398604,
   1.38266,
   1.398604,
   1.38266,
   1.38266,
   1.38266,
   1.398604,
   1.398604,
   1.398604,
   1.398604,
   1.398604,
   1.38266,
   1.398604};
   graph = new TGraph(17,ExpectedPlus1Sigma_fx139,ExpectedPlus1Sigma_fy139);
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
   
   TH1F *Graph_Graph_Graph_ExpectedPlus1Sigma127133139 = new TH1F("Graph_Graph_Graph_ExpectedPlus1Sigma127133139","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->SetMinimum(1.379471);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->SetMaximum(1.417737);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma127133139->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus1Sigma127133139);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus1Sigma_fx140[17] = {
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
   Double_t ExpectedPlus1Sigma_fy140[17] = {
   1.398604,
   1.414548,
   1.398604,
   1.414548,
   1.38266,
   1.38266,
   1.38266,
   1.38266,
   1.38266,
   1.414548,
   1.414548,
   1.414548,
   1.414549,
   1.430493,
   1.430493,
   1.414548,
   1.414548};
   graph = new TGraph(17,ExpectedPlus1Sigma_fx140,ExpectedPlus1Sigma_fy140);
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
   
   TH1F *Graph_Graph_Graph_ExpectedPlus1Sigma128134140 = new TH1F("Graph_Graph_Graph_ExpectedPlus1Sigma128134140","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->SetMinimum(1.377877);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->SetMaximum(1.435276);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma128134140->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus1Sigma128134140);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus1Sigma_fx141[17] = {
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
   Double_t ExpectedPlus1Sigma_fy141[17] = {
   1.398604,
   1.38266,
   1.398604,
   1.38266,
   1.398604,
   1.398604,
   1.398604,
   1.38266,
   1.38266,
   1.398604,
   1.398604,
   1.398604,
   1.38266,
   1.414548,
   1.38266,
   1.398604,
   1.398604};
   graph = new TGraph(17,ExpectedPlus1Sigma_fx141,ExpectedPlus1Sigma_fy141);
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
   
   TH1F *Graph_Graph_Graph_ExpectedPlus1Sigma129135141 = new TH1F("Graph_Graph_Graph_ExpectedPlus1Sigma129135141","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->SetMinimum(1.379471);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->SetMaximum(1.417737);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus1Sigma129135141->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus1Sigma129135141);
   
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
   
   TH1F *hframe_copy__72 = new TH1F("hframe_copy__72","",1000,200,3000);
   hframe_copy__72->SetMinimum(0.85);
   hframe_copy__72->SetMaximum(10);
   hframe_copy__72->SetDirectory(0);
   hframe_copy__72->SetStats(0);
   hframe_copy__72->SetLineStyle(0);
   hframe_copy__72->SetMarkerStyle(20);
   hframe_copy__72->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__72->GetXaxis()->SetLabelFont(43);
   hframe_copy__72->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__72->GetXaxis()->SetLabelSize(27);
   hframe_copy__72->GetXaxis()->SetTitleSize(33);
   hframe_copy__72->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__72->GetXaxis()->SetTitleFont(43);
   hframe_copy__72->GetYaxis()->SetTitle("Expected #pm1#sigma / median");
   hframe_copy__72->GetYaxis()->SetLabelFont(43);
   hframe_copy__72->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__72->GetYaxis()->SetLabelSize(27);
   hframe_copy__72->GetYaxis()->SetTitleSize(33);
   hframe_copy__72->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__72->GetYaxis()->SetTitleFont(43);
   hframe_copy__72->GetZaxis()->SetLabelFont(43);
   hframe_copy__72->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__72->GetZaxis()->SetLabelSize(27);
   hframe_copy__72->GetZaxis()->SetTitleSize(33);
   hframe_copy__72->GetZaxis()->SetTitleFont(43);
   hframe_copy__72->Draw("sameaxis");
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
   limitsBr_sigma1Relative_logY->Modified();
   limitsBr_sigma1Relative_logY->cd();
   limitsBr_sigma1Relative_logY->SetSelected(limitsBr_sigma1Relative_logY);
}
