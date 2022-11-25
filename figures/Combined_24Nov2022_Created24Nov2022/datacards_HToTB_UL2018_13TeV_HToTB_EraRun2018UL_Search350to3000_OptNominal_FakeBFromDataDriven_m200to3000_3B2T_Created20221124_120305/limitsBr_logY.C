void limitsBr_logY()
{
//=========Macro generated from canvas: limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305/
//=========  (Thu Nov 24 12:43:34 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305 = new TCanvas("limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetHighLightColor(2);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->Range(-367.0886,-2.593662,3177.215,1.972968);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetFillColor(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetBorderMode(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetBorderSize(2);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetLogy();
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetTickx(1);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetTicky(1);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetLeftMargin(0.16);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetRightMargin(0.05);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetTopMargin(0.06);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetBottomMargin(0.13);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetFrameFillStyle(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetFrameBorderMode(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetFrameFillStyle(0);
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetFrameBorderMode(0);
   
   TH1F *hframe__35 = new TH1F("hframe__35","",1000,200,3000);
   hframe__35->SetMinimum(0.01);
   hframe__35->SetMaximum(50);
   hframe__35->SetDirectory(0);
   hframe__35->SetStats(0);
   hframe__35->SetLineStyle(0);
   hframe__35->SetMarkerStyle(20);
   hframe__35->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__35->GetXaxis()->SetLabelFont(43);
   hframe__35->GetXaxis()->SetLabelOffset(0.007);
   hframe__35->GetXaxis()->SetLabelSize(27);
   hframe__35->GetXaxis()->SetTitleSize(33);
   hframe__35->GetXaxis()->SetTitleOffset(0.9);
   hframe__35->GetXaxis()->SetTitleFont(43);
   hframe__35->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe__35->GetYaxis()->SetLabelFont(43);
   hframe__35->GetYaxis()->SetLabelOffset(0.007);
   hframe__35->GetYaxis()->SetLabelSize(27);
   hframe__35->GetYaxis()->SetTitleSize(33);
   hframe__35->GetYaxis()->SetTitleOffset(1.25);
   hframe__35->GetYaxis()->SetTitleFont(43);
   hframe__35->GetZaxis()->SetLabelFont(43);
   hframe__35->GetZaxis()->SetLabelOffset(0.007);
   hframe__35->GetZaxis()->SetLabelSize(27);
   hframe__35->GetZaxis()->SetTitleSize(33);
   hframe__35->GetZaxis()->SetTitleFont(43);
   hframe__35->Draw(" ");
   
   Double_t Expected2Sigma_fx52[34] = {
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
   Double_t Expected2Sigma_fy52[34] = {
   2.722656,
   1.96875,
   1.300781,
   0.9960938,
   0.8085938,
   0.6240234,
   0.4042969,
   0.2724609,
   0.1977539,
   0.1494141,
   0.1120605,
   0.1010742,
   0.1054688,
   0.1120605,
   0.1141357,
   0.1369629,
   0.1452637,
   0.5157434,
   0.4800422,
   0.4024705,
   0.3731999,
   0.351247,
   0.3366117,
   0.3706439,
   0.5200389,
   0.6500486,
   0.8956226,
   1.337225,
   2.051265,
   2.67445,
   3.442636,
   4.328877,
   6.471595,
   9.409871};
   TGraph *graph = new TGraph(34,Expected2Sigma_fx52,Expected2Sigma_fy52);
   graph->SetName("Expected2Sigma");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected2Sigma464952 = new TH1F("Graph_Graph_Graph_Expected2Sigma464952","Graph",100,0,3280);
   Graph_Graph_Graph_Expected2Sigma464952->SetMinimum(0.0909668);
   Graph_Graph_Graph_Expected2Sigma464952->SetMaximum(10.34075);
   Graph_Graph_Graph_Expected2Sigma464952->SetDirectory(0);
   Graph_Graph_Graph_Expected2Sigma464952->SetStats(0);
   Graph_Graph_Graph_Expected2Sigma464952->SetLineStyle(0);
   Graph_Graph_Graph_Expected2Sigma464952->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected2Sigma464952->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma464952->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma464952->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma464952->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma464952->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected2Sigma464952->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma464952->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma464952->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma464952->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma464952->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma464952->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected2Sigma464952->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma464952->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma464952->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma464952->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma464952->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma464952->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected2Sigma464952);
   
   graph->Draw("f ");
   
   Double_t Expected1Sigma_fx53[34] = {
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
   Double_t Expected1Sigma_fy53[34] = {
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
   0.1933289,
   0.3824309,
   0.3564671,
   0.3004814,
   0.2786282,
   0.2622383,
   0.2513117,
   0.2786282,
   0.3888732,
   0.4860914,
   0.669726,
   1.005247,
   1.533889,
   2.010494,
   2.592488,
   3.271143,
   4.83931,
   7.086133};
   graph = new TGraph(34,Expected1Sigma_fx53,Expected1Sigma_fy53);
   graph->SetName("Expected1Sigma");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected1Sigma475053 = new TH1F("Graph_Graph_Graph_Expected1Sigma475053","Graph",100,0,3280);
   Graph_Graph_Graph_Expected1Sigma475053->SetMinimum(0.1174988);
   Graph_Graph_Graph_Expected1Sigma475053->SetMaximum(7.781691);
   Graph_Graph_Graph_Expected1Sigma475053->SetDirectory(0);
   Graph_Graph_Graph_Expected1Sigma475053->SetStats(0);
   Graph_Graph_Graph_Expected1Sigma475053->SetLineStyle(0);
   Graph_Graph_Graph_Expected1Sigma475053->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected1Sigma475053->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma475053->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma475053->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma475053->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma475053->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected1Sigma475053->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma475053->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma475053->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma475053->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma475053->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma475053->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected1Sigma475053->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma475053->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma475053->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma475053->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma475053->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma475053->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected1Sigma475053);
   
   graph->Draw("f ");
   
   Double_t Expected_fx54[17] = {
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
   Double_t Expected_fy54[17] = {
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
   graph = new TGraph(17,Expected_fx54,Expected_fy54);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected485154 = new TH1F("Graph_Graph_Graph_Expected485154","Graph",100,0,3280);
   Graph_Graph_Graph_Expected485154->SetMinimum(0.1617187);
   Graph_Graph_Graph_Expected485154->SetMaximum(5.619531);
   Graph_Graph_Graph_Expected485154->SetDirectory(0);
   Graph_Graph_Graph_Expected485154->SetStats(0);
   Graph_Graph_Graph_Expected485154->SetLineStyle(0);
   Graph_Graph_Graph_Expected485154->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected485154->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected485154->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected485154->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected485154->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected485154->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected485154->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected485154->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected485154->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected485154->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected485154->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected485154->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected485154->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected485154->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected485154->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected485154->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected485154->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected485154->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected485154);
   
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
   
   TH1F *hframe_copy__36 = new TH1F("hframe_copy__36","",1000,200,3000);
   hframe_copy__36->SetMinimum(0.01);
   hframe_copy__36->SetMaximum(50);
   hframe_copy__36->SetDirectory(0);
   hframe_copy__36->SetStats(0);
   hframe_copy__36->SetLineStyle(0);
   hframe_copy__36->SetMarkerStyle(20);
   hframe_copy__36->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__36->GetXaxis()->SetLabelFont(43);
   hframe_copy__36->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__36->GetXaxis()->SetLabelSize(27);
   hframe_copy__36->GetXaxis()->SetTitleSize(33);
   hframe_copy__36->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__36->GetXaxis()->SetTitleFont(43);
   hframe_copy__36->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe_copy__36->GetYaxis()->SetLabelFont(43);
   hframe_copy__36->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__36->GetYaxis()->SetLabelSize(27);
   hframe_copy__36->GetYaxis()->SetTitleSize(33);
   hframe_copy__36->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__36->GetYaxis()->SetTitleFont(43);
   hframe_copy__36->GetZaxis()->SetLabelFont(43);
   hframe_copy__36->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__36->GetZaxis()->SetLabelSize(27);
   hframe_copy__36->GetZaxis()->SetTitleSize(33);
   hframe_copy__36->GetZaxis()->SetTitleFont(43);
   hframe_copy__36->Draw("sameaxis");
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
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->Modified();
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->cd();
   limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305->SetSelected(limitsBr_logY_datacards_HToTB_UL2018_13TeV_HToTB_EraRun2018UL_Search350to3000_OptNominal_FakeBFromDataDriven_m200to3000_3B2T_Created20221124_120305);
}
