void limitsBr_logY()
{
//=========Macro generated from canvas: limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022/
//=========  (Thu Nov 24 12:43:28 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022 = new TCanvas("limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetHighLightColor(2);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->Range(-367.0886,-2.593662,3177.215,1.972968);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFillColor(0);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetBorderMode(0);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetBorderSize(2);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetLogy();
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetTickx(1);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetTicky(1);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetLeftMargin(0.16);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetRightMargin(0.05);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetTopMargin(0.06);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetBottomMargin(0.13);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFrameFillStyle(0);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFrameBorderMode(0);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFrameFillStyle(0);
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFrameBorderMode(0);
   
   TH1F *hframe__11 = new TH1F("hframe__11","",1000,200,3000);
   hframe__11->SetMinimum(0.01);
   hframe__11->SetMaximum(50);
   hframe__11->SetDirectory(0);
   hframe__11->SetStats(0);
   hframe__11->SetLineStyle(0);
   hframe__11->SetMarkerStyle(20);
   hframe__11->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__11->GetXaxis()->SetLabelFont(43);
   hframe__11->GetXaxis()->SetLabelOffset(0.007);
   hframe__11->GetXaxis()->SetLabelSize(27);
   hframe__11->GetXaxis()->SetTitleSize(33);
   hframe__11->GetXaxis()->SetTitleOffset(0.9);
   hframe__11->GetXaxis()->SetTitleFont(43);
   hframe__11->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe__11->GetYaxis()->SetLabelFont(43);
   hframe__11->GetYaxis()->SetLabelOffset(0.007);
   hframe__11->GetYaxis()->SetLabelSize(27);
   hframe__11->GetYaxis()->SetTitleSize(33);
   hframe__11->GetYaxis()->SetTitleOffset(1.25);
   hframe__11->GetYaxis()->SetTitleFont(43);
   hframe__11->GetZaxis()->SetLabelFont(43);
   hframe__11->GetZaxis()->SetLabelOffset(0.007);
   hframe__11->GetZaxis()->SetLabelSize(27);
   hframe__11->GetZaxis()->SetTitleSize(33);
   hframe__11->GetZaxis()->SetTitleFont(43);
   hframe__11->Draw(" ");
   
   Double_t Expected2Sigma_fx16[34] = {
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
   Double_t Expected2Sigma_fy16[34] = {
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
   TGraph *graph = new TGraph(34,Expected2Sigma_fx16,Expected2Sigma_fy16);
   graph->SetName("Expected2Sigma");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected2Sigma101316 = new TH1F("Graph_Graph_Graph_Expected2Sigma101316","Graph",100,0,3280);
   Graph_Graph_Graph_Expected2Sigma101316->SetMinimum(0.08031006);
   Graph_Graph_Graph_Expected2Sigma101316->SetMaximum(9.456304);
   Graph_Graph_Graph_Expected2Sigma101316->SetDirectory(0);
   Graph_Graph_Graph_Expected2Sigma101316->SetStats(0);
   Graph_Graph_Graph_Expected2Sigma101316->SetLineStyle(0);
   Graph_Graph_Graph_Expected2Sigma101316->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected2Sigma101316->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma101316->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma101316->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma101316->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma101316->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected2Sigma101316->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma101316->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma101316->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma101316->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma101316->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma101316->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected2Sigma101316->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma101316->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma101316->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma101316->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma101316->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma101316->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected2Sigma101316);
   
   graph->Draw("f ");
   
   Double_t Expected1Sigma_fx17[34] = {
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
   Double_t Expected1Sigma_fy17[34] = {
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
   graph = new TGraph(34,Expected1Sigma_fx17,Expected1Sigma_fy17);
   graph->SetName("Expected1Sigma");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected1Sigma111417 = new TH1F("Graph_Graph_Graph_Expected1Sigma111417","Graph",100,0,3280);
   Graph_Graph_Graph_Expected1Sigma111417->SetMinimum(0.1047272);
   Graph_Graph_Graph_Expected1Sigma111417->SetMaximum(7.103763);
   Graph_Graph_Graph_Expected1Sigma111417->SetDirectory(0);
   Graph_Graph_Graph_Expected1Sigma111417->SetStats(0);
   Graph_Graph_Graph_Expected1Sigma111417->SetLineStyle(0);
   Graph_Graph_Graph_Expected1Sigma111417->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected1Sigma111417->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma111417->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma111417->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma111417->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma111417->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected1Sigma111417->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma111417->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma111417->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma111417->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma111417->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma111417->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected1Sigma111417->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma111417->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma111417->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma111417->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma111417->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma111417->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected1Sigma111417);
   
   graph->Draw("f ");
   
   Double_t Expected_fx18[17] = {
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
   Double_t Expected_fy18[17] = {
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
   graph = new TGraph(17,Expected_fx18,Expected_fy18);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected121518 = new TH1F("Graph_Graph_Graph_Expected121518","Graph",100,0,3280);
   Graph_Graph_Graph_Expected121518->SetMinimum(0.1441406);
   Graph_Graph_Graph_Expected121518->SetMaximum(5.071484);
   Graph_Graph_Graph_Expected121518->SetDirectory(0);
   Graph_Graph_Graph_Expected121518->SetStats(0);
   Graph_Graph_Graph_Expected121518->SetLineStyle(0);
   Graph_Graph_Graph_Expected121518->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected121518->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected121518->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected121518->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected121518->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected121518->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected121518->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected121518->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected121518->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected121518->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected121518->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected121518->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected121518->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected121518->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected121518->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected121518->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected121518->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected121518->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected121518);
   
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
   
   TH1F *hframe_copy__12 = new TH1F("hframe_copy__12","",1000,200,3000);
   hframe_copy__12->SetMinimum(0.01);
   hframe_copy__12->SetMaximum(50);
   hframe_copy__12->SetDirectory(0);
   hframe_copy__12->SetStats(0);
   hframe_copy__12->SetLineStyle(0);
   hframe_copy__12->SetMarkerStyle(20);
   hframe_copy__12->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__12->GetXaxis()->SetLabelFont(43);
   hframe_copy__12->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__12->GetXaxis()->SetLabelSize(27);
   hframe_copy__12->GetXaxis()->SetTitleSize(33);
   hframe_copy__12->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__12->GetXaxis()->SetTitleFont(43);
   hframe_copy__12->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe_copy__12->GetYaxis()->SetLabelFont(43);
   hframe_copy__12->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__12->GetYaxis()->SetLabelSize(27);
   hframe_copy__12->GetYaxis()->SetTitleSize(33);
   hframe_copy__12->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__12->GetYaxis()->SetTitleFont(43);
   hframe_copy__12->GetZaxis()->SetLabelFont(43);
   hframe_copy__12->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__12->GetZaxis()->SetLabelSize(27);
   hframe_copy__12->GetZaxis()->SetTitleSize(33);
   hframe_copy__12->GetZaxis()->SetTitleFont(43);
   hframe_copy__12->Draw("sameaxis");
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
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->Modified();
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->cd();
   limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetSelected(limitsBr_logY_datacards_multicategory_Combined_24Nov2022_Created24Nov2022);
}
