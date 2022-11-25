void limitsBr_logY()
{
//=========Macro generated from canvas: limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841/
//=========  (Thu Nov 24 12:43:31 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841 = new TCanvas("limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetHighLightColor(2);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->Range(-367.0886,-2.593662,3177.215,1.972968);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetFillColor(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetBorderMode(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetBorderSize(2);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetLogy();
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetTickx(1);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetTicky(1);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetLeftMargin(0.16);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetRightMargin(0.05);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetTopMargin(0.06);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetBottomMargin(0.13);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetFrameFillStyle(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetFrameBorderMode(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetFrameFillStyle(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetFrameBorderMode(0);
   
   TH1F *hframe__23 = new TH1F("hframe__23","",1000,200,3000);
   hframe__23->SetMinimum(0.01);
   hframe__23->SetMaximum(50);
   hframe__23->SetDirectory(0);
   hframe__23->SetStats(0);
   hframe__23->SetLineStyle(0);
   hframe__23->SetMarkerStyle(20);
   hframe__23->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__23->GetXaxis()->SetLabelFont(43);
   hframe__23->GetXaxis()->SetLabelOffset(0.007);
   hframe__23->GetXaxis()->SetLabelSize(27);
   hframe__23->GetXaxis()->SetTitleSize(33);
   hframe__23->GetXaxis()->SetTitleOffset(0.9);
   hframe__23->GetXaxis()->SetTitleFont(43);
   hframe__23->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe__23->GetYaxis()->SetLabelFont(43);
   hframe__23->GetYaxis()->SetLabelOffset(0.007);
   hframe__23->GetYaxis()->SetLabelSize(27);
   hframe__23->GetYaxis()->SetTitleSize(33);
   hframe__23->GetYaxis()->SetTitleOffset(1.25);
   hframe__23->GetYaxis()->SetTitleFont(43);
   hframe__23->GetZaxis()->SetLabelFont(43);
   hframe__23->GetZaxis()->SetLabelOffset(0.007);
   hframe__23->GetZaxis()->SetLabelSize(27);
   hframe__23->GetZaxis()->SetTitleSize(33);
   hframe__23->GetZaxis()->SetTitleFont(43);
   hframe__23->Draw(" ");
   
   Double_t Expected2Sigma_fx34[34] = {
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
   Double_t Expected2Sigma_fy34[34] = {
   6.242188,
   4.640625,
   3.585938,
   2.25,
   1.560547,
   1.162109,
   0.7636719,
   0.5478516,
   0.4150391,
   0.3251953,
   0.2636719,
   0.2021484,
   0.1950684,
   0.2460938,
   0.2373047,
   0.2199707,
   0.2490234,
   0.9012979,
   0.8014074,
   0.8157926,
   0.8460071,
   0.7013514,
   0.686429,
   0.8834308,
   1.09691,
   1.454673,
   1.906809,
   2.676599,
   4.044747,
   5.469572,
   7.589431,
   12.02419,
   15.6532,
   22.31298};
   TGraph *graph = new TGraph(34,Expected2Sigma_fx34,Expected2Sigma_fy34);
   graph->SetName("Expected2Sigma");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected2Sigma283134 = new TH1F("Graph_Graph_Graph_Expected2Sigma283134","Graph",100,0,3280);
   Graph_Graph_Graph_Expected2Sigma283134->SetMinimum(0.1755615);
   Graph_Graph_Graph_Expected2Sigma283134->SetMaximum(24.52477);
   Graph_Graph_Graph_Expected2Sigma283134->SetDirectory(0);
   Graph_Graph_Graph_Expected2Sigma283134->SetStats(0);
   Graph_Graph_Graph_Expected2Sigma283134->SetLineStyle(0);
   Graph_Graph_Graph_Expected2Sigma283134->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected2Sigma283134->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma283134->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma283134->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma283134->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma283134->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected2Sigma283134->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma283134->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma283134->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma283134->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma283134->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma283134->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected2Sigma283134->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma283134->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma283134->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma283134->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma283134->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma283134->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected2Sigma283134);
   
   graph->Draw("f ");
   
   Double_t Expected1Sigma_fx35[34] = {
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
   Double_t Expected1Sigma_fy35[34] = {
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
   0.3314209,
   0.6630696,
   0.5857115,
   0.6034891,
   0.6258405,
   0.5194045,
   0.5083534,
   0.6630696,
   0.8177858,
   1.080203,
   1.425868,
   1.987574,
   3.024569,
   4.061564,
   5.658194,
   8.916102,
   11.67002,
   16.4336};
   graph = new TGraph(34,Expected1Sigma_fx35,Expected1Sigma_fy35);
   graph->SetName("Expected1Sigma");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected1Sigma293235 = new TH1F("Graph_Graph_Graph_Expected1Sigma293235","Graph",100,0,3280);
   Graph_Graph_Graph_Expected1Sigma293235->SetMinimum(0.2336517);
   Graph_Graph_Graph_Expected1Sigma293235->SetMaximum(18.051);
   Graph_Graph_Graph_Expected1Sigma293235->SetDirectory(0);
   Graph_Graph_Graph_Expected1Sigma293235->SetStats(0);
   Graph_Graph_Graph_Expected1Sigma293235->SetLineStyle(0);
   Graph_Graph_Graph_Expected1Sigma293235->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected1Sigma293235->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma293235->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma293235->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma293235->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma293235->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected1Sigma293235->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma293235->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma293235->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma293235->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma293235->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma293235->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected1Sigma293235->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma293235->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma293235->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma293235->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma293235->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma293235->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected1Sigma293235);
   
   graph->Draw("f ");
   
   Double_t Expected_fx36[17] = {
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
   Double_t Expected_fy36[17] = {
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
   graph = new TGraph(17,Expected_fx36,Expected_fy36);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected303336 = new TH1F("Graph_Graph_Graph_Expected303336","Graph",100,0,3280);
   Graph_Graph_Graph_Expected303336->SetMinimum(0.3234375);
   Graph_Graph_Graph_Expected303336->SetMaximum(12.88906);
   Graph_Graph_Graph_Expected303336->SetDirectory(0);
   Graph_Graph_Graph_Expected303336->SetStats(0);
   Graph_Graph_Graph_Expected303336->SetLineStyle(0);
   Graph_Graph_Graph_Expected303336->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected303336->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected303336->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected303336->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected303336->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected303336->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected303336->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected303336->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected303336->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected303336->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected303336->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected303336->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected303336->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected303336->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected303336->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected303336->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected303336->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected303336->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected303336);
   
   graph->Draw("l ");
   
   TLegend *leg = new TLegend(0.63,0.6,1.03,0.81,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(4000);
   TLegendEntry *entry=leg->AddEntry("NULL","#font[42]{95% CL upper limits}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Expected","#font[42]{Median expected}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Expected1Sigma_forLegend","#font[42]{68% expected}","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Expected2Sigma_forLegend","#font[42]{95% expected}","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__24 = new TH1F("hframe_copy__24","",1000,200,3000);
   hframe_copy__24->SetMinimum(0.01);
   hframe_copy__24->SetMaximum(50);
   hframe_copy__24->SetDirectory(0);
   hframe_copy__24->SetStats(0);
   hframe_copy__24->SetLineStyle(0);
   hframe_copy__24->SetMarkerStyle(20);
   hframe_copy__24->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__24->GetXaxis()->SetLabelFont(43);
   hframe_copy__24->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__24->GetXaxis()->SetLabelSize(27);
   hframe_copy__24->GetXaxis()->SetTitleSize(33);
   hframe_copy__24->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__24->GetXaxis()->SetTitleFont(43);
   hframe_copy__24->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe_copy__24->GetYaxis()->SetLabelFont(43);
   hframe_copy__24->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__24->GetYaxis()->SetLabelSize(27);
   hframe_copy__24->GetYaxis()->SetTitleSize(33);
   hframe_copy__24->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__24->GetYaxis()->SetTitleFont(43);
   hframe_copy__24->GetZaxis()->SetLabelFont(43);
   hframe_copy__24->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__24->GetZaxis()->SetLabelSize(27);
   hframe_copy__24->GetZaxis()->SetTitleSize(33);
   hframe_copy__24->GetZaxis()->SetTitleFont(43);
   hframe_copy__24->Draw("sameaxis");
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
      tex = new TLatex(0.63,0.88,"pp #rightarrow t(b)H^{#pm} #rightarrow t(b)");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(20);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.63,0.84,"fully hadronic final state");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(20);
   tex->SetLineWidth(2);
   tex->Draw();
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->Modified();
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->cd();
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841->SetSelected(limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B1T_Created20221124_113841);
}
