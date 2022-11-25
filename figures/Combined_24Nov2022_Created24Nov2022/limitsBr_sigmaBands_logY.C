void limitsBr_sigmaBands_logY()
{
//=========Macro generated from canvas: limitsBr_sigmaBands_logY/
//=========  (Thu Nov 24 12:43:35 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_sigmaBands_logY = new TCanvas("limitsBr_sigmaBands_logY", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_sigmaBands_logY->SetHighLightColor(2);
   limitsBr_sigmaBands_logY->Range(-367.0886,-2.593662,3177.215,1.972968);
   limitsBr_sigmaBands_logY->SetFillColor(0);
   limitsBr_sigmaBands_logY->SetBorderMode(0);
   limitsBr_sigmaBands_logY->SetBorderSize(2);
   limitsBr_sigmaBands_logY->SetLogy();
   limitsBr_sigmaBands_logY->SetTickx(1);
   limitsBr_sigmaBands_logY->SetTicky(1);
   limitsBr_sigmaBands_logY->SetLeftMargin(0.16);
   limitsBr_sigmaBands_logY->SetRightMargin(0.05);
   limitsBr_sigmaBands_logY->SetTopMargin(0.06);
   limitsBr_sigmaBands_logY->SetBottomMargin(0.13);
   limitsBr_sigmaBands_logY->SetFrameFillStyle(0);
   limitsBr_sigmaBands_logY->SetFrameBorderMode(0);
   limitsBr_sigmaBands_logY->SetFrameFillStyle(0);
   limitsBr_sigmaBands_logY->SetFrameBorderMode(0);
   
   TH1F *hframe__41 = new TH1F("hframe__41","",1000,200,3000);
   hframe__41->SetMinimum(0.01);
   hframe__41->SetMaximum(50);
   hframe__41->SetDirectory(0);
   hframe__41->SetStats(0);
   hframe__41->SetLineStyle(0);
   hframe__41->SetMarkerStyle(20);
   hframe__41->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__41->GetXaxis()->SetLabelFont(43);
   hframe__41->GetXaxis()->SetLabelOffset(0.007);
   hframe__41->GetXaxis()->SetLabelSize(27);
   hframe__41->GetXaxis()->SetTitleSize(33);
   hframe__41->GetXaxis()->SetTitleOffset(0.9);
   hframe__41->GetXaxis()->SetTitleFont(43);
   hframe__41->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe__41->GetYaxis()->SetLabelFont(43);
   hframe__41->GetYaxis()->SetLabelOffset(0.007);
   hframe__41->GetYaxis()->SetLabelSize(27);
   hframe__41->GetYaxis()->SetTitleSize(33);
   hframe__41->GetYaxis()->SetTitleOffset(1.25);
   hframe__41->GetYaxis()->SetTitleFont(43);
   hframe__41->GetZaxis()->SetLabelFont(43);
   hframe__41->GetZaxis()->SetLabelOffset(0.007);
   hframe__41->GetZaxis()->SetLabelSize(27);
   hframe__41->GetZaxis()->SetTitleSize(33);
   hframe__41->GetZaxis()->SetTitleFont(43);
   hframe__41->Draw(" ");
   
   Double_t Expected2Sigma_fx65[34] = {
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
   3000,
   3000,
   2500,
   2000,
   1750,
   1500,
   1250,
   1000,
   800,
   700,
   600,
   500,
   400,
   350,
   300,
   250,
   220,
   200};
   Double_t Expected2Sigma_fy65[34] = {
   2.601562,
   1.726562,
   1.230469,
   0.9492188,
   0.7207031,
   0.5537109,
   0.3603516,
   0.2460938,
   0.1801758,
   0.140625,
   0.1032715,
   0.09008789,
   0.0892334,
   0.1010742,
   0.1016846,
   0.1208496,
   0.1245117,
   0.4390587,
   0.4052269,
   0.3563949,
   0.3386485,
   0.3105788,
   0.3000234,
   0.3415738,
   0.4651217,
   0.5922665,
   0.8089494,
   1.191875,
   1.831417,
   2.383749,
   3.120233,
   4.069815,
   5.967236,
   8.604753};
   TGraph *graph = new TGraph(34,Expected2Sigma_fx65,Expected2Sigma_fy65);
   graph->SetName("Expected2Sigma");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected2Sigma556065 = new TH1F("Graph_Graph_Graph_Expected2Sigma556065","Graph",100,0,3280);
   Graph_Graph_Graph_Expected2Sigma556065->SetMinimum(0.08031006);
   Graph_Graph_Graph_Expected2Sigma556065->SetMaximum(9.456304);
   Graph_Graph_Graph_Expected2Sigma556065->SetDirectory(0);
   Graph_Graph_Graph_Expected2Sigma556065->SetStats(0);
   Graph_Graph_Graph_Expected2Sigma556065->SetLineStyle(0);
   Graph_Graph_Graph_Expected2Sigma556065->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected2Sigma556065->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma556065->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma556065->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma556065->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma556065->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected2Sigma556065->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma556065->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma556065->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma556065->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma556065->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma556065->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected2Sigma556065->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma556065->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma556065->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma556065->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma556065->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma556065->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected2Sigma556065);
   
   graph->Draw("f ");
   
   Double_t Expected1Sigma_fx66[34] = {
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
   3000,
   3000,
   2500,
   2000,
   1750,
   1500,
   1250,
   1000,
   800,
   700,
   600,
   500,
   400,
   350,
   300,
   250,
   220,
   200};
   Double_t Expected1Sigma_fy66[34] = {
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
   0.1657104,
   0.3277979,
   0.3004814,
   0.2646498,
   0.2541767,
   0.2322437,
   0.2239952,
   0.256775,
   0.3496511,
   0.4428833,
   0.6049138,
   0.8959809,
   1.376751,
   1.791962,
   2.333239,
   3.059447,
   4.493645,
   6.468545};
   graph = new TGraph(34,Expected1Sigma_fx66,Expected1Sigma_fy66);
   graph->SetName("Expected1Sigma");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected1Sigma566166 = new TH1F("Graph_Graph_Graph_Expected1Sigma566166","Graph",100,0,3280);
   Graph_Graph_Graph_Expected1Sigma566166->SetMinimum(0.1047272);
   Graph_Graph_Graph_Expected1Sigma566166->SetMaximum(7.103763);
   Graph_Graph_Graph_Expected1Sigma566166->SetDirectory(0);
   Graph_Graph_Graph_Expected1Sigma566166->SetStats(0);
   Graph_Graph_Graph_Expected1Sigma566166->SetLineStyle(0);
   Graph_Graph_Graph_Expected1Sigma566166->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected1Sigma566166->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma566166->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma566166->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma566166->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma566166->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected1Sigma566166->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma566166->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma566166->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma566166->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma566166->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma566166->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected1Sigma566166->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma566166->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma566166->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma566166->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma566166->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma566166->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected1Sigma566166);
   
   graph->Draw("f ");
   
   Double_t Expected_fx67[17] = {
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
   Double_t Expected_fy67[17] = {
   5.125,
   3.5,
   2.3125,
   1.875,
   1.4375,
   1.109375,
   0.71875,
   0.484375,
   0.3515625,
   0.28125,
   0.1992188,
   0.1796875,
   0.1875,
   0.1992188,
   0.2148438,
   0.2578125,
   0.2734375};
   graph = new TGraph(17,Expected_fx67,Expected_fy67);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(27);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Expected576267 = new TH1F("Graph_Graph_Graph_Expected576267","Graph",100,0,3280);
   Graph_Graph_Graph_Expected576267->SetMinimum(0.1617187);
   Graph_Graph_Graph_Expected576267->SetMaximum(5.619531);
   Graph_Graph_Graph_Expected576267->SetDirectory(0);
   Graph_Graph_Graph_Expected576267->SetStats(0);
   Graph_Graph_Graph_Expected576267->SetLineStyle(0);
   Graph_Graph_Graph_Expected576267->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected576267->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected576267->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected576267->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected576267->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected576267->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected576267->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected576267->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected576267->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected576267->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected576267->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected576267->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected576267->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected576267->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected576267->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected576267->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected576267->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected576267->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected576267);
   
   graph->Draw("l ");
   
   Double_t Expected_fx68[17] = {
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
   Double_t Expected_fy68[17] = {
   11.75,
   8.25,
   6.375,
   4,
   2.9375,
   2.1875,
   1.4375,
   1.03125,
   0.78125,
   0.578125,
   0.46875,
   0.359375,
   0.3671875,
   0.4375,
   0.421875,
   0.4140625,
   0.46875};
   graph = new TGraph(17,Expected_fx68,Expected_fy68);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(26);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Expected586368 = new TH1F("Graph_Graph_Graph_Expected586368","Graph",100,0,3280);
   Graph_Graph_Graph_Expected586368->SetMinimum(0.3234375);
   Graph_Graph_Graph_Expected586368->SetMaximum(12.88906);
   Graph_Graph_Graph_Expected586368->SetDirectory(0);
   Graph_Graph_Graph_Expected586368->SetStats(0);
   Graph_Graph_Graph_Expected586368->SetLineStyle(0);
   Graph_Graph_Graph_Expected586368->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected586368->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected586368->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected586368->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected586368->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected586368->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected586368->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected586368->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected586368->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected586368->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected586368->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected586368->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected586368->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected586368->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected586368->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected586368->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected586368->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected586368->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected586368);
   
   graph->Draw("l ");
   
   Double_t Expected_fx69[17] = {
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
   Double_t Expected_fy69[17] = {
   4.625,
   3.25,
   2.1875,
   1.6875,
   1.28125,
   0.984375,
   0.640625,
   0.4375,
   0.3203125,
   0.25,
   0.1835938,
   0.1601562,
   0.1679688,
   0.1796875,
   0.1914062,
   0.2148438,
   0.234375};
   graph = new TGraph(17,Expected_fx69,Expected_fy69);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected596469 = new TH1F("Graph_Graph_Graph_Expected596469","Graph",100,0,3280);
   Graph_Graph_Graph_Expected596469->SetMinimum(0.1441406);
   Graph_Graph_Graph_Expected596469->SetMaximum(5.071484);
   Graph_Graph_Graph_Expected596469->SetDirectory(0);
   Graph_Graph_Graph_Expected596469->SetStats(0);
   Graph_Graph_Graph_Expected596469->SetLineStyle(0);
   Graph_Graph_Graph_Expected596469->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected596469->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected596469->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected596469->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected596469->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected596469->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected596469->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected596469->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected596469->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected596469->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected596469->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected596469->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected596469->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected596469->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected596469->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected596469->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected596469->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected596469->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected596469);
   
   graph->Draw("l ");
   
   TLegend *leg = new TLegend(0.65,0.48,1.05,0.91,NULL,"brNDC");
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
   entry=leg->AddEntry("Expected1Sigma","#font[42]{datacards_multicategory_Combined_24Nov2022_Created24Nov2022 #pm 1#sigma}","fl");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Expected2Sigma","#font[42]{datacards_multicategory_Combined_24Nov2022_Created24Nov2022 #pm 2#sigma}","fl");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Expected","#font[42]{datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841}","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Expected","#font[42]{datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305}","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__42 = new TH1F("hframe_copy__42","",1000,200,3000);
   hframe_copy__42->SetMinimum(0.01);
   hframe_copy__42->SetMaximum(50);
   hframe_copy__42->SetDirectory(0);
   hframe_copy__42->SetStats(0);
   hframe_copy__42->SetLineStyle(0);
   hframe_copy__42->SetMarkerStyle(20);
   hframe_copy__42->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__42->GetXaxis()->SetLabelFont(43);
   hframe_copy__42->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__42->GetXaxis()->SetLabelSize(27);
   hframe_copy__42->GetXaxis()->SetTitleSize(33);
   hframe_copy__42->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__42->GetXaxis()->SetTitleFont(43);
   hframe_copy__42->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe_copy__42->GetYaxis()->SetLabelFont(43);
   hframe_copy__42->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__42->GetYaxis()->SetLabelSize(27);
   hframe_copy__42->GetYaxis()->SetTitleSize(33);
   hframe_copy__42->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__42->GetYaxis()->SetTitleFont(43);
   hframe_copy__42->GetZaxis()->SetLabelFont(43);
   hframe_copy__42->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__42->GetZaxis()->SetLabelSize(27);
   hframe_copy__42->GetZaxis()->SetTitleSize(33);
   hframe_copy__42->GetZaxis()->SetTitleFont(43);
   hframe_copy__42->Draw("sameaxis");
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
   limitsBr_sigmaBands_logY->Modified();
   limitsBr_sigmaBands_logY->cd();
   limitsBr_sigmaBands_logY->SetSelected(limitsBr_sigmaBands_logY);
}
