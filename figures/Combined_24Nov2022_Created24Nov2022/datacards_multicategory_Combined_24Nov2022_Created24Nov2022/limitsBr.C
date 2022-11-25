void limitsBr()
{
//=========Macro generated from canvas: limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022/
//=========  (Thu Nov 24 12:43:27 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022 = new TCanvas("limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetHighLightColor(2);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->Range(-367.0886,-8.013086,3177.215,53.70296);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFillColor(0);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetBorderMode(0);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetBorderSize(2);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetTickx(1);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetTicky(1);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetLeftMargin(0.16);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetRightMargin(0.05);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetTopMargin(0.06);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetBottomMargin(0.13);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFrameFillStyle(0);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFrameBorderMode(0);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFrameFillStyle(0);
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetFrameBorderMode(0);
   
   TH1F *hframe__5 = new TH1F("hframe__5","",1000,200,3000);
   hframe__5->SetMinimum(0.01);
   hframe__5->SetMaximum(50);
   hframe__5->SetDirectory(0);
   hframe__5->SetStats(0);
   hframe__5->SetLineStyle(0);
   hframe__5->SetMarkerStyle(20);
   hframe__5->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__5->GetXaxis()->SetLabelFont(43);
   hframe__5->GetXaxis()->SetLabelOffset(0.007);
   hframe__5->GetXaxis()->SetLabelSize(27);
   hframe__5->GetXaxis()->SetTitleSize(33);
   hframe__5->GetXaxis()->SetTitleOffset(0.9);
   hframe__5->GetXaxis()->SetTitleFont(43);
   hframe__5->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe__5->GetYaxis()->SetLabelFont(43);
   hframe__5->GetYaxis()->SetLabelOffset(0.007);
   hframe__5->GetYaxis()->SetLabelSize(27);
   hframe__5->GetYaxis()->SetTitleSize(33);
   hframe__5->GetYaxis()->SetTitleOffset(1.25);
   hframe__5->GetYaxis()->SetTitleFont(43);
   hframe__5->GetZaxis()->SetLabelFont(43);
   hframe__5->GetZaxis()->SetLabelOffset(0.007);
   hframe__5->GetZaxis()->SetLabelSize(27);
   hframe__5->GetZaxis()->SetTitleSize(33);
   hframe__5->GetZaxis()->SetTitleFont(43);
   hframe__5->Draw(" ");
   
   Double_t Expected2Sigma_fx7[34] = {
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
   Double_t Expected2Sigma_fy7[34] = {
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
   TGraph *graph = new TGraph(34,Expected2Sigma_fx7,Expected2Sigma_fy7);
   graph->SetName("Expected2Sigma");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected2Sigma147 = new TH1F("Graph_Graph_Graph_Expected2Sigma147","Graph",100,0,3280);
   Graph_Graph_Graph_Expected2Sigma147->SetMinimum(0.08031006);
   Graph_Graph_Graph_Expected2Sigma147->SetMaximum(9.456304);
   Graph_Graph_Graph_Expected2Sigma147->SetDirectory(0);
   Graph_Graph_Graph_Expected2Sigma147->SetStats(0);
   Graph_Graph_Graph_Expected2Sigma147->SetLineStyle(0);
   Graph_Graph_Graph_Expected2Sigma147->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected2Sigma147->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma147->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma147->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma147->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma147->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected2Sigma147->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma147->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma147->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma147->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma147->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma147->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected2Sigma147->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected2Sigma147->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected2Sigma147->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected2Sigma147->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected2Sigma147->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected2Sigma147->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected2Sigma147);
   
   graph->Draw("f ");
   
   Double_t Expected1Sigma_fx8[34] = {
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
   Double_t Expected1Sigma_fy8[34] = {
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
   graph = new TGraph(34,Expected1Sigma_fx8,Expected1Sigma_fy8);
   graph->SetName("Expected1Sigma");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected1Sigma258 = new TH1F("Graph_Graph_Graph_Expected1Sigma258","Graph",100,0,3280);
   Graph_Graph_Graph_Expected1Sigma258->SetMinimum(0.1047272);
   Graph_Graph_Graph_Expected1Sigma258->SetMaximum(7.103763);
   Graph_Graph_Graph_Expected1Sigma258->SetDirectory(0);
   Graph_Graph_Graph_Expected1Sigma258->SetStats(0);
   Graph_Graph_Graph_Expected1Sigma258->SetLineStyle(0);
   Graph_Graph_Graph_Expected1Sigma258->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected1Sigma258->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma258->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma258->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma258->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma258->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected1Sigma258->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma258->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma258->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma258->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma258->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma258->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected1Sigma258->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected1Sigma258->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected1Sigma258->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected1Sigma258->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected1Sigma258->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected1Sigma258->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected1Sigma258);
   
   graph->Draw("f ");
   
   Double_t Expected_fx9[17] = {
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
   Double_t Expected_fy9[17] = {
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
   graph = new TGraph(17,Expected_fx9,Expected_fy9);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Expected369 = new TH1F("Graph_Graph_Graph_Expected369","Graph",100,0,3280);
   Graph_Graph_Graph_Expected369->SetMinimum(0.1441406);
   Graph_Graph_Graph_Expected369->SetMaximum(5.071484);
   Graph_Graph_Graph_Expected369->SetDirectory(0);
   Graph_Graph_Graph_Expected369->SetStats(0);
   Graph_Graph_Graph_Expected369->SetLineStyle(0);
   Graph_Graph_Graph_Expected369->SetMarkerStyle(20);
   Graph_Graph_Graph_Expected369->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected369->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected369->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected369->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected369->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Expected369->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected369->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected369->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected369->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected369->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected369->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Expected369->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Expected369->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Expected369->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Expected369->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Expected369->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Expected369->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Expected369);
   
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
   
   TH1F *hframe_copy__6 = new TH1F("hframe_copy__6","",1000,200,3000);
   hframe_copy__6->SetMinimum(0.01);
   hframe_copy__6->SetMaximum(50);
   hframe_copy__6->SetDirectory(0);
   hframe_copy__6->SetStats(0);
   hframe_copy__6->SetLineStyle(0);
   hframe_copy__6->SetMarkerStyle(20);
   hframe_copy__6->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__6->GetXaxis()->SetLabelFont(43);
   hframe_copy__6->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__6->GetXaxis()->SetLabelSize(27);
   hframe_copy__6->GetXaxis()->SetTitleSize(33);
   hframe_copy__6->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__6->GetXaxis()->SetTitleFont(43);
   hframe_copy__6->GetYaxis()->SetTitle("#sigma_{H^{#pm}} #bf{#it{#Beta}} (H^{#pm} #rightarrow tb) (pb)");
   hframe_copy__6->GetYaxis()->SetLabelFont(43);
   hframe_copy__6->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__6->GetYaxis()->SetLabelSize(27);
   hframe_copy__6->GetYaxis()->SetTitleSize(33);
   hframe_copy__6->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__6->GetYaxis()->SetTitleFont(43);
   hframe_copy__6->GetZaxis()->SetLabelFont(43);
   hframe_copy__6->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__6->GetZaxis()->SetLabelSize(27);
   hframe_copy__6->GetZaxis()->SetTitleSize(33);
   hframe_copy__6->GetZaxis()->SetTitleFont(43);
   hframe_copy__6->Draw("sameaxis");
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
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->Modified();
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->cd();
   limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022->SetSelected(limitsBr_datacards_multicategory_Combined_24Nov2022_Created24Nov2022);
}
