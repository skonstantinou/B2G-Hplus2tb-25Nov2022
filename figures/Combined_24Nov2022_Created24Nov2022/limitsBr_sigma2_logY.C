void limitsBr_sigma2_logY()
{
//=========Macro generated from canvas: limitsBr_sigma2_logY/
//=========  (Thu Nov 24 12:43:36 2022) by ROOT version 6.12/07
   TCanvas *limitsBr_sigma2_logY = new TCanvas("limitsBr_sigma2_logY", "",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   limitsBr_sigma2_logY->SetHighLightColor(2);
   limitsBr_sigma2_logY->Range(-367.0886,-2.593662,3177.215,1.972968);
   limitsBr_sigma2_logY->SetFillColor(0);
   limitsBr_sigma2_logY->SetBorderMode(0);
   limitsBr_sigma2_logY->SetBorderSize(2);
   limitsBr_sigma2_logY->SetLogy();
   limitsBr_sigma2_logY->SetTickx(1);
   limitsBr_sigma2_logY->SetTicky(1);
   limitsBr_sigma2_logY->SetLeftMargin(0.16);
   limitsBr_sigma2_logY->SetRightMargin(0.05);
   limitsBr_sigma2_logY->SetTopMargin(0.06);
   limitsBr_sigma2_logY->SetBottomMargin(0.13);
   limitsBr_sigma2_logY->SetFrameFillStyle(0);
   limitsBr_sigma2_logY->SetFrameBorderMode(0);
   limitsBr_sigma2_logY->SetFrameFillStyle(0);
   limitsBr_sigma2_logY->SetFrameBorderMode(0);
   
   TH1F *hframe__59 = new TH1F("hframe__59","",1000,200,3000);
   hframe__59->SetMinimum(0.01);
   hframe__59->SetMaximum(50);
   hframe__59->SetDirectory(0);
   hframe__59->SetStats(0);
   hframe__59->SetLineStyle(0);
   hframe__59->SetMarkerStyle(20);
   hframe__59->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe__59->GetXaxis()->SetLabelFont(43);
   hframe__59->GetXaxis()->SetLabelOffset(0.007);
   hframe__59->GetXaxis()->SetLabelSize(27);
   hframe__59->GetXaxis()->SetTitleSize(33);
   hframe__59->GetXaxis()->SetTitleOffset(0.9);
   hframe__59->GetXaxis()->SetTitleFont(43);
   hframe__59->GetYaxis()->SetTitle("Expected #pm2#sigma");
   hframe__59->GetYaxis()->SetLabelFont(43);
   hframe__59->GetYaxis()->SetLabelOffset(0.007);
   hframe__59->GetYaxis()->SetLabelSize(27);
   hframe__59->GetYaxis()->SetTitleSize(33);
   hframe__59->GetYaxis()->SetTitleOffset(1.25);
   hframe__59->GetYaxis()->SetTitleFont(43);
   hframe__59->GetZaxis()->SetLabelFont(43);
   hframe__59->GetZaxis()->SetLabelOffset(0.007);
   hframe__59->GetZaxis()->SetLabelSize(27);
   hframe__59->GetZaxis()->SetTitleSize(33);
   hframe__59->GetZaxis()->SetTitleFont(43);
   hframe__59->Draw(" ");
   
   Double_t ExpectedMinus2Sigma_fx109[17] = {
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
   Double_t ExpectedMinus2Sigma_fy109[17] = {
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
   0.1452637};
   TGraph *graph = new TGraph(17,ExpectedMinus2Sigma_fx109,ExpectedMinus2Sigma_fy109);
   graph->SetName("ExpectedMinus2Sigma");
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
   
   TH1F *Graph_Graph_Graph_ExpectedMinus2Sigma97103109 = new TH1F("Graph_Graph_Graph_ExpectedMinus2Sigma97103109","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->SetMinimum(0.0909668);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->SetMaximum(2.984814);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma97103109->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus2Sigma97103109);
   
   graph->Draw("pl ");
   
   Double_t ExpectedMinus2Sigma_fx110[17] = {
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
   Double_t ExpectedMinus2Sigma_fy110[17] = {
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
   0.2490234};
   graph = new TGraph(17,ExpectedMinus2Sigma_fx110,ExpectedMinus2Sigma_fy110);
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
   
   TH1F *Graph_Graph_Graph_ExpectedMinus2Sigma98104110 = new TH1F("Graph_Graph_Graph_ExpectedMinus2Sigma98104110","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->SetMinimum(0.1755615);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->SetMaximum(6.846899);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma98104110->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus2Sigma98104110);
   
   graph->Draw("pl ");
   
   Double_t ExpectedMinus2Sigma_fx111[17] = {
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
   Double_t ExpectedMinus2Sigma_fy111[17] = {
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
   0.1245117};
   graph = new TGraph(17,ExpectedMinus2Sigma_fx111,ExpectedMinus2Sigma_fy111);
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
   
   TH1F *Graph_Graph_Graph_ExpectedMinus2Sigma99105111 = new TH1F("Graph_Graph_Graph_ExpectedMinus2Sigma99105111","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->SetMinimum(0.08031006);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->SetMaximum(2.852795);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->SetDirectory(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->SetStats(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedMinus2Sigma99105111->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedMinus2Sigma99105111);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus2Sigma_fx112[17] = {
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
   Double_t ExpectedPlus2Sigma_fy112[17] = {
   9.409871,
   6.471595,
   4.328877,
   3.442636,
   2.67445,
   2.051265,
   1.337225,
   0.8956226,
   0.6500486,
   0.5200389,
   0.3706439,
   0.3366117,
   0.351247,
   0.3731999,
   0.4024705,
   0.4800422,
   0.5157434};
   graph = new TGraph(17,ExpectedPlus2Sigma_fx112,ExpectedPlus2Sigma_fy112);
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
   
   TH1F *Graph_Graph_Graph_ExpectedPlus2Sigma100106112 = new TH1F("Graph_Graph_Graph_ExpectedPlus2Sigma100106112","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->SetMinimum(0.3029505);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->SetMaximum(10.3172);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma100106112->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus2Sigma100106112);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus2Sigma_fx113[17] = {
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
   Double_t ExpectedPlus2Sigma_fy113[17] = {
   22.31298,
   15.6532,
   12.02419,
   7.589431,
   5.469572,
   4.044747,
   2.676599,
   1.906809,
   1.454673,
   1.09691,
   0.8834308,
   0.686429,
   0.7013514,
   0.8460071,
   0.8157926,
   0.8014074,
   0.9012979};
   graph = new TGraph(17,ExpectedPlus2Sigma_fx113,ExpectedPlus2Sigma_fy113);
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
   
   TH1F *Graph_Graph_Graph_ExpectedPlus2Sigma101107113 = new TH1F("Graph_Graph_Graph_ExpectedPlus2Sigma101107113","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->SetMinimum(0.6177861);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->SetMaximum(24.47564);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma101107113->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus2Sigma101107113);
   
   graph->Draw("pl ");
   
   Double_t ExpectedPlus2Sigma_fx114[17] = {
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
   Double_t ExpectedPlus2Sigma_fy114[17] = {
   8.604753,
   5.967236,
   4.069815,
   3.120233,
   2.383749,
   1.831417,
   1.191875,
   0.8089494,
   0.5922665,
   0.4651217,
   0.3415738,
   0.3000234,
   0.3105788,
   0.3386485,
   0.3563949,
   0.4052269,
   0.4390587};
   graph = new TGraph(17,ExpectedPlus2Sigma_fx114,ExpectedPlus2Sigma_fy114);
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
   
   TH1F *Graph_Graph_Graph_ExpectedPlus2Sigma102108114 = new TH1F("Graph_Graph_Graph_ExpectedPlus2Sigma102108114","Graph",100,0,3280);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->SetMinimum(0.2700211);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->SetMaximum(9.435225);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->SetDirectory(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->SetStats(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->SetLineStyle(0);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->SetMarkerStyle(20);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_ExpectedPlus2Sigma102108114->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_ExpectedPlus2Sigma102108114);
   
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
   
   TH1F *hframe_copy__60 = new TH1F("hframe_copy__60","",1000,200,3000);
   hframe_copy__60->SetMinimum(0.01);
   hframe_copy__60->SetMaximum(50);
   hframe_copy__60->SetDirectory(0);
   hframe_copy__60->SetStats(0);
   hframe_copy__60->SetLineStyle(0);
   hframe_copy__60->SetMarkerStyle(20);
   hframe_copy__60->GetXaxis()->SetTitle("m_{H^{#pm}} (GeV)");
   hframe_copy__60->GetXaxis()->SetLabelFont(43);
   hframe_copy__60->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__60->GetXaxis()->SetLabelSize(27);
   hframe_copy__60->GetXaxis()->SetTitleSize(33);
   hframe_copy__60->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__60->GetXaxis()->SetTitleFont(43);
   hframe_copy__60->GetYaxis()->SetTitle("Expected #pm2#sigma");
   hframe_copy__60->GetYaxis()->SetLabelFont(43);
   hframe_copy__60->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__60->GetYaxis()->SetLabelSize(27);
   hframe_copy__60->GetYaxis()->SetTitleSize(33);
   hframe_copy__60->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy__60->GetYaxis()->SetTitleFont(43);
   hframe_copy__60->GetZaxis()->SetLabelFont(43);
   hframe_copy__60->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__60->GetZaxis()->SetLabelSize(27);
   hframe_copy__60->GetZaxis()->SetTitleSize(33);
   hframe_copy__60->GetZaxis()->SetTitleFont(43);
   hframe_copy__60->Draw("sameaxis");
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
   limitsBr_sigma2_logY->Modified();
   limitsBr_sigma2_logY->cd();
   limitsBr_sigma2_logY->SetSelected(limitsBr_sigma2_logY);
}
