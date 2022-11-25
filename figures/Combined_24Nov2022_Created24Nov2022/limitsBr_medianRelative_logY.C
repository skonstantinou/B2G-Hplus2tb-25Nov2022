void limitsBr_medianRelative_logY()
{
//=========Macro generated from canvas: limitsBr_medianRelative_logY/
//=========  (Thu Nov 24 12:43:36 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_medianRelative_logY = new TCanvas("limitsBr_medianRelative_logY", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_medianRelative_logY->SetHighLightColor(2);
   limitsBr_medianRelative_logY->Range(-367.0886,-0.6185185,3177.215,10.67778);
   limitsBr_medianRelative_logY->SetFillColor(0);
   limitsBr_medianRelative_logY->SetBorderMode(0);
   limitsBr_medianRelative_logY->SetBorderSize(2);
   limitsBr_medianRelative_logY->SetTickx(1);
   limitsBr_medianRelative_logY->SetTicky(1);
   limitsBr_medianRelative_logY->SetLeftMargin(0.16);
   limitsBr_medianRelative_logY->SetRightMargin(0.05);
   limitsBr_medianRelative_logY->SetTopMargin(0.06);
   limitsBr_medianRelative_logY->SetBottomMargin(0.13);
   limitsBr_medianRelative_logY->SetFrameFillStyle(0);
   limitsBr_medianRelative_logY->SetFrameBorderMode(0);
   limitsBr_medianRelative_logY->SetFrameFillStyle(0);
   limitsBr_medianRelative_logY->SetFrameBorderMode(0);
   
   TH1F *hframe__65 = new TH1F("hframe__65","",1000,200,3000);
   hframe__65->SetMinimum(0.85);
   hframe__65->SetMaximum(10);
   hframe__65->SetDirectory(0);
   hframe__65->SetStats(0);
   hframe__65->SetLineStyle(0);
   hframe__65->SetMarkerStyle(20);
   hframe__65->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__65->GetXaxis()->SetLabelFont(43);
   hframe__65->GetXaxis()->SetLabelOffset(0.007);
   hframe__65->GetXaxis()->SetLabelSize(27);
   hframe__65->GetXaxis()->SetTitleSize(33);
   hframe__65->GetXaxis()->SetTitleOffset(0.9);
   hframe__65->GetXaxis()->SetTitleFont(43);
   hframe__65->GetYaxis()->SetTitle("95% CL upper limit ratio");
   hframe__65->GetYaxis()->SetLabelFont(43);
   hframe__65->GetYaxis()->SetLabelOffset(0.007);
   hframe__65->GetYaxis()->SetLabelSize(27);
   hframe__65->GetYaxis()->SetTitleSize(33);
   hframe__65->GetYaxis()->SetTitleOffset(1.25);
   hframe__65->GetYaxis()->SetTitleFont(43);
   hframe__65->GetZaxis()->SetLabelFont(43);
   hframe__65->GetZaxis()->SetLabelOffset(0.007);
   hframe__65->GetZaxis()->SetLabelSize(27);
   hframe__65->GetZaxis()->SetTitleSize(33);
   hframe__65->GetZaxis()->SetTitleFont(43);
   hframe__65->Draw(" ");
   TBox *box = new TBox(200,0.95,3000,1.05);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(3001);
   box->Draw();
   
   Double_t Expected_fx121[17] = {
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
   Double_t Expected_fy121[17] = {
   1.108108,
   1.076923,
   1.057143,
   1.111111,
   1.121951,
   1.126984,
   1.121951,
   1.107143,
   1.097561,
   1.125,
   1.085106,
   1.121951,
   1.116279,
   1.108696,
   1.122449,
   1.2,
   1.166667};
   TGraph *graph = new TGraph(17,Expected_fx121,Expected_fy121);
   graph->SetName("Expected");
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
   
   TH1F *Graph_Graph_Graph_Expected115118121 = new TH1F("Graph_Graph_Graph_Expected115118121","Graph",100,0,3280);
   Graph_Graph_Graph_Expected115118121->SetMinimum(1.042857);
   Graph_Graph_Graph_Expected115118121->SetMaximum(1.214286);
   Graph_Graph_Graph_Expected115118121->SetDirectory(0);
   Graph_Graph_Graph_Expected115118121->SetStats(0);
   Graph_Graph_Graph_Expected115118121->SetLineStyle(0);
   Graph_Graph_Graph_Expected115118121->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected115118121->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected115118121->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected115118121->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected115118121->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected115118121->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected115118121->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected115118121->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected115118121->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected115118121->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected115118121->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected115118121->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected115118121->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected115118121->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected115118121->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected115118121->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected115118121->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected115118121->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected115118121);
   
   graph->Draw("pl ");
   
   Double_t Expected_fx122[17] = {
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
   Double_t Expected_fy122[17] = {
   2.540541,
   2.538462,
   2.914286,
   2.37037,
   2.292683,
   2.222222,
   2.243902,
   2.357143,
   2.439024,
   2.3125,
   2.553191,
   2.243902,
   2.186047,
   2.434783,
   2.204082,
   1.927273,
   2};
   graph = new TGraph(17,Expected_fx122,Expected_fy122);
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
   
   TH1F *Graph_Graph_Graph_Expected116119122 = new TH1F("Graph_Graph_Graph_Expected116119122","Graph",100,0,3280);
   Graph_Graph_Graph_Expected116119122->SetMinimum(1.828571);
   Graph_Graph_Graph_Expected116119122->SetMaximum(3.012987);
   Graph_Graph_Graph_Expected116119122->SetDirectory(0);
   Graph_Graph_Graph_Expected116119122->SetStats(0);
   Graph_Graph_Graph_Expected116119122->SetLineStyle(0);
   Graph_Graph_Graph_Expected116119122->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected116119122->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected116119122->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected116119122->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected116119122->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected116119122->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected116119122->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected116119122->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected116119122->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected116119122->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected116119122->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected116119122->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected116119122->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected116119122->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected116119122->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected116119122->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected116119122->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected116119122->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected116119122);
   
   graph->Draw("pl ");
   
   Double_t Expected_fx123[17] = {
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
   Double_t Expected_fy123[17] = {
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
   graph = new TGraph(17,Expected_fx123,Expected_fy123);
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
   
   TH1F *Graph_Graph_Graph_Expected117120123 = new TH1F("Graph_Graph_Graph_Expected117120123","Graph",100,0,3280);
   Graph_Graph_Graph_Expected117120123->SetMinimum(0.9);
   Graph_Graph_Graph_Expected117120123->SetMaximum(2.1);
   Graph_Graph_Graph_Expected117120123->SetDirectory(0);
   Graph_Graph_Graph_Expected117120123->SetStats(0);
   Graph_Graph_Graph_Expected117120123->SetLineStyle(0);
   Graph_Graph_Graph_Expected117120123->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected117120123->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected117120123->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected117120123->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected117120123->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected117120123->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected117120123->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected117120123->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected117120123->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected117120123->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected117120123->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected117120123->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected117120123->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected117120123->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected117120123->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected117120123->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected117120123->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected117120123->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected117120123);
   
   graph->Draw("pl ");
   
   TLegend *leg = new TLegend(0.69,0.6,1.09,0.91,NULL,"brNDC");
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
   
   TH1F *hframe_copy__66 = new TH1F("hframe_copy__66","",1000,200,3000);
   hframe_copy__66->SetMinimum(0.85);
   hframe_copy__66->SetMaximum(10);
   hframe_copy__66->SetDirectory(0);
   hframe_copy__66->SetStats(0);
   hframe_copy__66->SetLineStyle(0);
   hframe_copy__66->SetMarkerStyle(20);
   hframe_copy__66->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__66->GetXaxis()->SetLabelFont(43);
   hframe_copy__66->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__66->GetXaxis()->SetLabelSize(27);
   hframe_copy__66->GetXaxis()->SetTitleSize(33);
   hframe_copy__66->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__66->GetXaxis()->SetTitleFont(43);
   hframe_copy__66->GetYaxis()->SetTitle("95% CL upper limit ratio");
   hframe_copy__66->GetYaxis()->SetLabelFont(43);
   hframe_copy__66->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__66->GetYaxis()->SetLabelSize(27);
   hframe_copy__66->GetYaxis()->SetTitleSize(33);
   hframe_copy__66->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__66->GetYaxis()->SetTitleFont(43);
   hframe_copy__66->GetZaxis()->SetLabelFont(43);
   hframe_copy__66->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__66->GetZaxis()->SetLabelSize(27);
   hframe_copy__66->GetZaxis()->SetTitleSize(33);
   hframe_copy__66->GetZaxis()->SetTitleFont(43);
   hframe_copy__66->Draw("sameaxis");
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
   limitsBr_medianRelative_logY->Modified();
   limitsBr_medianRelative_logY->cd();
   limitsBr_medianRelative_logY->SetSelected(limitsBr_medianRelative_logY);
}
