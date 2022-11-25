void limitsBr_median_logY()
{
//=========Macro generated from canvas: limitsBr_median_logY/
//=========  (Thu Nov 24 12:43:35 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_median_logY = new TCanvas("limitsBr_median_logY", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_median_logY->SetHighLightColor(2);
   limitsBr_median_logY->Range(-367.0886,-2.593662,3177.215,1.972968);
   limitsBr_median_logY->SetFillColor(0);
   limitsBr_median_logY->SetBorderMode(0);
   limitsBr_median_logY->SetBorderSize(2);
   limitsBr_median_logY->SetLogy();
   limitsBr_median_logY->SetTickx(1);
   limitsBr_median_logY->SetTicky(1);
   limitsBr_median_logY->SetLeftMargin(0.16);
   limitsBr_median_logY->SetRightMargin(0.05);
   limitsBr_median_logY->SetTopMargin(0.06);
   limitsBr_median_logY->SetBottomMargin(0.13);
   limitsBr_median_logY->SetFrameFillStyle(0);
   limitsBr_median_logY->SetFrameBorderMode(0);
   limitsBr_median_logY->SetFrameFillStyle(0);
   limitsBr_median_logY->SetFrameBorderMode(0);
   
   TH1F *hframe__47 = new TH1F("hframe__47","",1000,200,3000);
   hframe__47->SetMinimum(0.01);
   hframe__47->SetMaximum(50);
   hframe__47->SetDirectory(0);
   hframe__47->SetStats(0);
   hframe__47->SetLineStyle(0);
   hframe__47->SetMarkerStyle(20);
   hframe__47->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__47->GetXaxis()->SetLabelFont(43);
   hframe__47->GetXaxis()->SetLabelOffset(0.007);
   hframe__47->GetXaxis()->SetLabelSize(27);
   hframe__47->GetXaxis()->SetTitleSize(33);
   hframe__47->GetXaxis()->SetTitleOffset(0.9);
   hframe__47->GetXaxis()->SetTitleFont(43);
   hframe__47->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe__47->GetYaxis()->SetLabelFont(43);
   hframe__47->GetYaxis()->SetLabelOffset(0.007);
   hframe__47->GetYaxis()->SetLabelSize(27);
   hframe__47->GetYaxis()->SetTitleSize(33);
   hframe__47->GetYaxis()->SetTitleOffset(1.25);
   hframe__47->GetYaxis()->SetTitleFont(43);
   hframe__47->GetZaxis()->SetLabelFont(43);
   hframe__47->GetZaxis()->SetLabelOffset(0.007);
   hframe__47->GetZaxis()->SetLabelSize(27);
   hframe__47->GetZaxis()->SetTitleSize(33);
   hframe__47->GetZaxis()->SetTitleFont(43);
   hframe__47->Draw(" ");
   
   Double_t Expected_fx76[17] = {
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
   Double_t Expected_fy76[17] = {
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
   TGraph *graph = new TGraph(17,Expected_fx76,Expected_fy76);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999900");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#999900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(26);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Expected707376 = new TH1F("Graph_Graph_Graph_Expected707376","Graph",100,0,3280);
   Graph_Graph_Graph_Expected707376->SetMinimum(0.1617187);
   Graph_Graph_Graph_Expected707376->SetMaximum(5.619531);
   Graph_Graph_Graph_Expected707376->SetDirectory(0);
   Graph_Graph_Graph_Expected707376->SetStats(0);
   Graph_Graph_Graph_Expected707376->SetLineStyle(0);
   Graph_Graph_Graph_Expected707376->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected707376->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected707376->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected707376->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected707376->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected707376->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected707376->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected707376->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected707376->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected707376->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected707376->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected707376->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected707376->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected707376->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected707376->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected707376->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected707376->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected707376->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected707376);
   
   graph->Draw("pl ");
   
   Double_t Expected_fx77[17] = {
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
   Double_t Expected_fy77[17] = {
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
   graph = new TGraph(17,Expected_fx77,Expected_fy77);
   graph->SetName("Expected");
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
   
   TH1F *Graph_Graph_Graph_Expected717477 = new TH1F("Graph_Graph_Graph_Expected717477","Graph",100,0,3280);
   Graph_Graph_Graph_Expected717477->SetMinimum(0.3234375);
   Graph_Graph_Graph_Expected717477->SetMaximum(12.88906);
   Graph_Graph_Graph_Expected717477->SetDirectory(0);
   Graph_Graph_Graph_Expected717477->SetStats(0);
   Graph_Graph_Graph_Expected717477->SetLineStyle(0);
   Graph_Graph_Graph_Expected717477->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected717477->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected717477->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected717477->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected717477->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected717477->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected717477->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected717477->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected717477->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected717477->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected717477->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected717477->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected717477->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected717477->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected717477->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected717477->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected717477->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected717477->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected717477);
   
   graph->Draw("pl ");
   
   Double_t Expected_fx78[17] = {
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
   Double_t Expected_fy78[17] = {
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
   graph = new TGraph(17,Expected_fx78,Expected_fy78);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillStyle(3001);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(24);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Expected727578 = new TH1F("Graph_Graph_Graph_Expected727578","Graph",100,0,3280);
   Graph_Graph_Graph_Expected727578->SetMinimum(0.1441406);
   Graph_Graph_Graph_Expected727578->SetMaximum(5.071484);
   Graph_Graph_Graph_Expected727578->SetDirectory(0);
   Graph_Graph_Graph_Expected727578->SetStats(0);
   Graph_Graph_Graph_Expected727578->SetLineStyle(0);
   Graph_Graph_Graph_Expected727578->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected727578->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected727578->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected727578->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected727578->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected727578->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected727578->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected727578->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected727578->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected727578->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected727578->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected727578->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected727578->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected727578->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected727578->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected727578->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected727578->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected727578->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected727578);
   
   graph->Draw("pl ");
   
   TLegend *leg = new TLegend(0.65,0.6,1.05,0.91,NULL,"brNDC");
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
   entry=leg->AddEntry("Expected","#font[42]{datacards_multicategory_Combined_24Nov2022_Created24Nov2022}","lp");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Expected","#font[42]{datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841}","lp");

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(46);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Expected","#font[42]{datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305}","lp");

   ci = TColor::GetColor("#999900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#999900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__48 = new TH1F("hframe_copy__48","",1000,200,3000);
   hframe_copy__48->SetMinimum(0.01);
   hframe_copy__48->SetMaximum(50);
   hframe_copy__48->SetDirectory(0);
   hframe_copy__48->SetStats(0);
   hframe_copy__48->SetLineStyle(0);
   hframe_copy__48->SetMarkerStyle(20);
   hframe_copy__48->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__48->GetXaxis()->SetLabelFont(43);
   hframe_copy__48->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__48->GetXaxis()->SetLabelSize(27);
   hframe_copy__48->GetXaxis()->SetTitleSize(33);
   hframe_copy__48->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__48->GetXaxis()->SetTitleFont(43);
   hframe_copy__48->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe_copy__48->GetYaxis()->SetLabelFont(43);
   hframe_copy__48->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__48->GetYaxis()->SetLabelSize(27);
   hframe_copy__48->GetYaxis()->SetTitleSize(33);
   hframe_copy__48->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__48->GetYaxis()->SetTitleFont(43);
   hframe_copy__48->GetZaxis()->SetLabelFont(43);
   hframe_copy__48->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__48->GetZaxis()->SetLabelSize(27);
   hframe_copy__48->GetZaxis()->SetTitleSize(33);
   hframe_copy__48->GetZaxis()->SetTitleFont(43);
   hframe_copy__48->Draw("sameaxis");
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
   limitsBr_median_logY->Modified();
   limitsBr_median_logY->cd();
   limitsBr_median_logY->SetSelected(limitsBr_median_logY);
}
