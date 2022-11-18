void cosW_tH_tA()
{
//=========Macro generated from canvas: cosW_tH_tA/cosW_tH_tA
//=========  (Fri Nov 18 13:33:22 2022) by ROOT version 6.20/02
   TCanvas *cosW_tH_tA = new TCanvas("cosW_tH_tA", "cosW_tH_tA",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cosW_tH_tA->SetHighLightColor(2);
   cosW_tH_tA->Range(0,0,1,1);
   cosW_tH_tA->SetFillColor(0);
   cosW_tH_tA->SetBorderMode(0);
   cosW_tH_tA->SetBorderSize(2);
   cosW_tH_tA->SetTickx(1);
   cosW_tH_tA->SetTicky(1);
   cosW_tH_tA->SetLeftMargin(0.16);
   cosW_tH_tA->SetRightMargin(0.05);
   cosW_tH_tA->SetTopMargin(0.06);
   cosW_tH_tA->SetBottomMargin(0.13);
   cosW_tH_tA->SetFrameFillStyle(0);
   cosW_tH_tA->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: cosW_tH_tA_2
   TPad *cosW_tH_tA_2 = new TPad("cosW_tH_tA_2", "cosW_tH_tA_2",0,0,1,0.304);
   cosW_tH_tA_2->Draw();
   cosW_tH_tA_2->cd();
   cosW_tH_tA_2->Range(-1.405063,-0.428,1.126582,1.7);
   cosW_tH_tA_2->SetFillColor(0);
   cosW_tH_tA_2->SetFillStyle(4000);
   cosW_tH_tA_2->SetBorderMode(0);
   cosW_tH_tA_2->SetBorderSize(2);
   cosW_tH_tA_2->SetTickx(1);
   cosW_tH_tA_2->SetTicky(1);
   cosW_tH_tA_2->SetLeftMargin(0.16);
   cosW_tH_tA_2->SetRightMargin(0.05);
   cosW_tH_tA_2->SetTopMargin(0);
   cosW_tH_tA_2->SetBottomMargin(0.3421053);
   cosW_tH_tA_2->SetFrameFillStyle(0);
   cosW_tH_tA_2->SetFrameBorderMode(0);
   cosW_tH_tA_2->SetFrameFillStyle(0);
   cosW_tH_tA_2->SetFrameBorderMode(0);
   
   TH1F *hframe__1065 = new TH1F("hframe__1065","",1000,-1,1);
   hframe__1065->SetMinimum(0.3);
   hframe__1065->SetMaximum(1.7);
   hframe__1065->SetDirectory(0);
   hframe__1065->SetStats(0);
   hframe__1065->SetLineStyle(0);
   hframe__1065->SetMarkerStyle(20);
   hframe__1065->GetXaxis()->SetTitle("cosW_tH_tA");
   hframe__1065->GetXaxis()->SetNdivisions(8);
   hframe__1065->GetXaxis()->SetLabelFont(43);
   hframe__1065->GetXaxis()->SetLabelOffset(0.007);
   hframe__1065->GetXaxis()->SetLabelSize(27);
   hframe__1065->GetXaxis()->SetTitleSize(33);
   hframe__1065->GetXaxis()->SetTitleOffset(2.960526);
   hframe__1065->GetXaxis()->SetTitleFont(43);
   hframe__1065->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__1065->GetYaxis()->SetNdivisions(505);
   hframe__1065->GetYaxis()->SetLabelFont(43);
   hframe__1065->GetYaxis()->SetLabelOffset(0.007);
   hframe__1065->GetYaxis()->SetLabelSize(21);
   hframe__1065->GetYaxis()->SetTitleSize(33);
   hframe__1065->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1065->GetYaxis()->SetTitleFont(43);
   hframe__1065->GetZaxis()->SetLabelFont(43);
   hframe__1065->GetZaxis()->SetLabelOffset(0.007);
   hframe__1065->GetZaxis()->SetLabelSize(27);
   hframe__1065->GetZaxis()->SetTitleSize(33);
   hframe__1065->GetZaxis()->SetTitleOffset(1);
   hframe__1065->GetZaxis()->SetTitleFont(43);
   hframe__1065->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3651[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t BackgroundStatSystError_fy3651[20] = {
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
   1,
   1,
   1,
   1};
   Double_t BackgroundStatSystError_felx3651[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fely3651[20] = {
   0.01793377,
   0.02262276,
   0.02759601,
   0.03199049,
   0.03473082,
   0.03676294,
   0.04084038,
   0.03918806,
   0.04340327,
   0.04558479,
   0.0468927,
   0.04731568,
   0.04933896,
   0.04671801,
   0.0515531,
   0.05102947,
   0.0483658,
   0.04817577,
   0.04851853,
   0.05139221};
   Double_t BackgroundStatSystError_fehx3651[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatSystError_fehy3651[20] = {
   0.01793377,
   0.02262276,
   0.02759601,
   0.03199049,
   0.03473082,
   0.03676294,
   0.04084038,
   0.03918806,
   0.04340327,
   0.04558479,
   0.0468927,
   0.04731568,
   0.04933896,
   0.04671801,
   0.0515531,
   0.05102947,
   0.0483658,
   0.04817577,
   0.04851853,
   0.05139221};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,BackgroundStatSystError_fx3651,BackgroundStatSystError_fy3651,BackgroundStatSystError_felx3651,BackgroundStatSystError_fehx3651,BackgroundStatSystError_fely3651,BackgroundStatSystError_fehy3651);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1376;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError364336473651 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError364336473651","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMinimum(0.9381363);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMaximum(1.061864);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError364336473651->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError364336473651);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3652[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t BackgroundStatError_fy3652[20] = {
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
   1,
   1,
   1,
   1};
   Double_t BackgroundStatError_felx3652[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatError_fely3652[20] = {
   0.01793377,
   0.02262276,
   0.02759601,
   0.03199049,
   0.03473082,
   0.03676294,
   0.04084038,
   0.03918806,
   0.04340327,
   0.04558479,
   0.0468927,
   0.04731568,
   0.04933896,
   0.04671801,
   0.0515531,
   0.05102947,
   0.0483658,
   0.04817577,
   0.04851853,
   0.05139221};
   Double_t BackgroundStatError_fehx3652[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BackgroundStatError_fehy3652[20] = {
   0.01793377,
   0.02262276,
   0.02759601,
   0.03199049,
   0.03473082,
   0.03676294,
   0.04084038,
   0.03918806,
   0.04340327,
   0.04558479,
   0.0468927,
   0.04731568,
   0.04933896,
   0.04671801,
   0.0515531,
   0.05102947,
   0.0483658,
   0.04817577,
   0.04851853,
   0.05139221};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3652,BackgroundStatError_fy3652,BackgroundStatError_felx3652,BackgroundStatError_fehx3652,BackgroundStatError_fely3652,BackgroundStatError_fehy3652);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1375;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError364436483652 = new TH1F("Graph_Graph_Graph_BackgroundStatError364436483652","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMinimum(0.9381363);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMaximum(1.061864);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError364436483652->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError364436483652->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError364436483652);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx153[2] = {
   -1,
   1};
   Double_t Graph0_fy153[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx153,Graph0_fy153);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0151152153 = new TH1F("Graph_Graph_Graph_Graph0151152153","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_Graph0151152153->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0151152153->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0151152153->SetDirectory(0);
   Graph_Graph_Graph_Graph0151152153->SetStats(0);
   Graph_Graph_Graph_Graph0151152153->SetLineStyle(0);
   Graph_Graph_Graph_Graph0151152153->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0151152153->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0151152153->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0151152153->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0151152153);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3653[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t Graph1_fy3653[20] = {
   1.02663,
   0.9691463,
   0.9425391,
   1.015397,
   0.9395151,
   0.971369,
   1.096057,
   0.8914058,
   0.9270464,
   1.045493,
   1.113114,
   1.068069,
   0.9611046,
   0.8012117,
   1.143321,
   1.065562,
   1.024815,
   1.029692,
   1.133891,
   1.070488};
   Double_t Graph1_felx3653[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fely3653[20] = {
   0.02077075,
   0.02482544,
   0.02985051,
   0.03617201,
   0.03670989,
   0.04005858,
   0.04639981,
   0.03954974,
   0.04370139,
   0.0495611,
   0.051564,
   0.05091818,
   0.04879269,
   0.04258392,
   0.0578943,
   0.05395685,
   0.04971081,
   0.04988875,
   0.05357132,
   0.05299707};
   Double_t Graph1_fehx3653[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph1_fehy3653[20] = {
   0.02077075,
   0.02482544,
   0.02985051,
   0.03617201,
   0.03670989,
   0.04005858,
   0.04639981,
   0.03954974,
   0.04370139,
   0.0495611,
   0.051564,
   0.05091818,
   0.04879269,
   0.04258392,
   0.0578943,
   0.05395685,
   0.04971081,
   0.04988875,
   0.05357132,
   0.05299707};
   grae = new TGraphAsymmErrors(20,Graph1_fx3653,Graph1_fy3653,Graph1_felx3653,Graph1_fehx3653,Graph1_fely3653,Graph1_fehy3653);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1364536493653 = new TH1F("Graph_Graph_Graph_Graph1364536493653","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_Graph1364536493653->SetMinimum(0.7143691);
   Graph_Graph_Graph_Graph1364536493653->SetMaximum(1.245474);
   Graph_Graph_Graph_Graph1364536493653->SetDirectory(0);
   Graph_Graph_Graph_Graph1364536493653->SetStats(0);
   Graph_Graph_Graph_Graph1364536493653->SetLineStyle(0);
   Graph_Graph_Graph_Graph1364536493653->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1364536493653->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1364536493653->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1364536493653->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1364536493653);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__1066 = new TH1F("hframe_copy__1066","",1000,-1,1);
   hframe_copy__1066->SetMinimum(0.3);
   hframe_copy__1066->SetMaximum(1.7);
   hframe_copy__1066->SetDirectory(0);
   hframe_copy__1066->SetStats(0);
   hframe_copy__1066->SetLineStyle(0);
   hframe_copy__1066->SetMarkerStyle(20);
   hframe_copy__1066->GetXaxis()->SetTitle("cosW_tH_tA");
   hframe_copy__1066->GetXaxis()->SetNdivisions(8);
   hframe_copy__1066->GetXaxis()->SetLabelFont(43);
   hframe_copy__1066->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1066->GetXaxis()->SetLabelSize(27);
   hframe_copy__1066->GetXaxis()->SetTitleSize(33);
   hframe_copy__1066->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__1066->GetXaxis()->SetTitleFont(43);
   hframe_copy__1066->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__1066->GetYaxis()->SetNdivisions(505);
   hframe_copy__1066->GetYaxis()->SetLabelFont(43);
   hframe_copy__1066->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1066->GetYaxis()->SetLabelSize(21);
   hframe_copy__1066->GetYaxis()->SetTitleSize(33);
   hframe_copy__1066->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1066->GetYaxis()->SetTitleFont(43);
   hframe_copy__1066->GetZaxis()->SetLabelFont(43);
   hframe_copy__1066->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1066->GetZaxis()->SetLabelSize(27);
   hframe_copy__1066->GetZaxis()->SetTitleSize(33);
   hframe_copy__1066->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1066->GetZaxis()->SetTitleFont(43);
   hframe_copy__1066->Draw("sameaxis");
   cosW_tH_tA_2->Modified();
   cosW_tH_tA->cd();
  
// ------------>Primitives in pad: coverpad
   TPad *coverpad = new TPad("coverpad", "coverpad",0.065,0.285,0.158,0.33);
   coverpad->Draw();
   coverpad->cd();
   coverpad->Range(0,0,1,1);
   coverpad->SetFillColor(0);
   coverpad->SetBorderMode(0);
   coverpad->SetBorderSize(2);
   coverpad->SetTickx(1);
   coverpad->SetTicky(1);
   coverpad->SetLeftMargin(0.16);
   coverpad->SetRightMargin(0.05);
   coverpad->SetTopMargin(0.06);
   coverpad->SetBottomMargin(0.13);
   coverpad->SetFrameFillStyle(0);
   coverpad->SetFrameBorderMode(0);
   coverpad->Modified();
   cosW_tH_tA->cd();
  
// ------------>Primitives in pad: cosW_tH_tA_1
   TPad *cosW_tH_tA_1 = new TPad("cosW_tH_tA_1", "cosW_tH_tA_1",0,0.2897959,1,1);
   cosW_tH_tA_1->Draw();
   cosW_tH_tA_1->cd();
   cosW_tH_tA_1->Range(-1.405063,-2.1355,1.126582,4.639523);
   cosW_tH_tA_1->SetFillColor(0);
   cosW_tH_tA_1->SetFillStyle(4000);
   cosW_tH_tA_1->SetBorderMode(0);
   cosW_tH_tA_1->SetBorderSize(2);
   cosW_tH_tA_1->SetLogy();
   cosW_tH_tA_1->SetTickx(1);
   cosW_tH_tA_1->SetTicky(1);
   cosW_tH_tA_1->SetLeftMargin(0.16);
   cosW_tH_tA_1->SetRightMargin(0.05);
   cosW_tH_tA_1->SetTopMargin(0.06);
   cosW_tH_tA_1->SetBottomMargin(0.02);
   cosW_tH_tA_1->SetFrameFillStyle(0);
   cosW_tH_tA_1->SetFrameBorderMode(0);
   cosW_tH_tA_1->SetFrameFillStyle(0);
   cosW_tH_tA_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1067 = new TH1F("hframe__1067","",1000,-1,1);
   hframe__1067->SetMinimum(0.01);
   hframe__1067->SetMaximum(17101);
   hframe__1067->SetDirectory(0);
   hframe__1067->SetStats(0);
   hframe__1067->SetLineStyle(0);
   hframe__1067->SetMarkerStyle(20);
   hframe__1067->GetXaxis()->SetNdivisions(8);
   hframe__1067->GetXaxis()->SetLabelFont(43);
   hframe__1067->GetXaxis()->SetLabelOffset(0.007);
   hframe__1067->GetXaxis()->SetLabelSize(0);
   hframe__1067->GetXaxis()->SetTitleSize(0);
   hframe__1067->GetXaxis()->SetTitleOffset(0.9);
   hframe__1067->GetXaxis()->SetTitleFont(43);
   hframe__1067->GetYaxis()->SetTitle("Events / 0.10");
   hframe__1067->GetYaxis()->SetLabelFont(43);
   hframe__1067->GetYaxis()->SetLabelOffset(0.007);
   hframe__1067->GetYaxis()->SetLabelSize(27);
   hframe__1067->GetYaxis()->SetTitleSize(33);
   hframe__1067->GetYaxis()->SetTitleOffset(1.5625);
   hframe__1067->GetYaxis()->SetTitleFont(43);
   hframe__1067->GetZaxis()->SetLabelFont(43);
   hframe__1067->GetZaxis()->SetLabelOffset(0.007);
   hframe__1067->GetZaxis()->SetLabelSize(27);
   hframe__1067->GetZaxis()->SetTitleSize(33);
   hframe__1067->GetZaxis()->SetTitleOffset(1);
   hframe__1067->GetZaxis()->SetTitleFont(43);
   hframe__1067->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   
   TH1F *StackedMCstackHist_stack_151_stack_152_stack_153 = new TH1F("StackedMCstackHist_stack_151_stack_152_stack_153","StackedMCstackHist",20,-1,1);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMinimum(1.565577);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMaximum(3712.933);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetDirectory(0);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetStats(0);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetLineStyle(0);
   StackedMCstackHist_stack_151_stack_152_stack_153->SetMarkerStyle(20);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetNdivisions(8);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_151_stack_152_stack_153->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_151_stack_152_stack_153);
   
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_cosW_tH_tAInclusive",20,-1,1);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,58.87916);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,42.46901);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,24.80801);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,18.52193);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,15.29774);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,15.01254);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,13.23404);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,11.16977);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,11.69604);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,9.873232);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,8.524998);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,6.385568);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,6.304016);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,5.429049);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,6.218248);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,6.88618);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,5.023311);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,6.291084);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,5.923732);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,7.515255);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,3.655476);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,2.895724);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,2.06458);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,1.968745);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,2.284432);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,1.714474);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,1.458116);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,1.352454);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,1.537979);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,2.074946);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,2.102535);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,1.101227);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,1.083481);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.9651902);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.9718989);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,1.138043);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.8471444);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,1.090899);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.924607);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,1.967624);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(45451);
   tEWttX_stack_1_stack_1_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#4c7eff");
   tEWttX_stack_1_stack_1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#4c7eff");
   tEWttX_stack_1_stack_1_stack_1->SetLineColor(ci);
   tEWttX_stack_1_stack_1_stack_1->SetLineWidth(2);

   ci = TColor::GetColor("#4c7eff");
   tEWttX_stack_1_stack_1_stack_1->SetMarkerColor(ci);
   tEWttX_stack_1_stack_1_stack_1->SetMarkerStyle(25);
   tEWttX_stack_1_stack_1_stack_1->SetMarkerSize(1.2);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,200);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_cosW_tH_tAInclusive",20,-1,1);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,935.9534);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,566.1559);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,359.6808);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,264.2652);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,209.7214);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,183.9966);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,155.5686);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,148.0538);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,133.5184);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,115.5619);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,103.8554);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,99.59816);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,91.43841);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,86.07777);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,84.77837);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,78.92242);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,82.39742);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,83.51311);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,89.30278);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,87.102);
   TT_stack_2_stack_2_stack_2->SetBinError(1,7.415831);
   TT_stack_2_stack_2_stack_2->SetBinError(2,5.79859);
   TT_stack_2_stack_2_stack_2->SetBinError(3,4.621481);
   TT_stack_2_stack_2_stack_2->SetBinError(4,3.95729);
   TT_stack_2_stack_2_stack_2->SetBinError(5,3.52587);
   TT_stack_2_stack_2_stack_2->SetBinError(6,3.298642);
   TT_stack_2_stack_2_stack_2->SetBinError(7,3.024285);
   TT_stack_2_stack_2_stack_2->SetBinError(8,2.96229);
   TT_stack_2_stack_2_stack_2->SetBinError(9,2.81056);
   TT_stack_2_stack_2_stack_2->SetBinError(10,2.604601);
   TT_stack_2_stack_2_stack_2->SetBinError(11,2.467639);
   TT_stack_2_stack_2_stack_2->SetBinError(12,2.424723);
   TT_stack_2_stack_2_stack_2->SetBinError(13,2.327352);
   TT_stack_2_stack_2_stack_2->SetBinError(14,2.25854);
   TT_stack_2_stack_2_stack_2->SetBinError(15,2.240676);
   TT_stack_2_stack_2_stack_2->SetBinError(16,2.149207);
   TT_stack_2_stack_2_stack_2->SetBinError(17,2.207847);
   TT_stack_2_stack_2_stack_2->SetBinError(18,2.221532);
   TT_stack_2_stack_2_stack_2->SetBinError(19,2.29257);
   TT_stack_2_stack_2_stack_2->SetBinError(20,2.275512);
   TT_stack_2_stack_2_stack_2->SetEntries(70981);
   TT_stack_2_stack_2_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#993399");
   TT_stack_2_stack_2_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#993399");
   TT_stack_2_stack_2_stack_2->SetLineColor(ci);
   TT_stack_2_stack_2_stack_2->SetLineWidth(2);

   ci = TColor::GetColor("#993399");
   TT_stack_2_stack_2_stack_2->SetMarkerColor(ci);
   TT_stack_2_stack_2_stack_2->SetMarkerStyle(21);
   TT_stack_2_stack_2_stack_2->SetMarkerSize(1.2);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,200);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_cosW_tH_tAInclusive",20,-1,1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,1384.799);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,963.893);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,673.2922);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,493.2642);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,472.1491);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,406.3222);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,340.2948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,410.6627);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,340.1982);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,300.2015);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,306.265);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,305.9748);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,305.9597);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,350.324);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,250.115);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,280.1953);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,327.2884);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,323.9117);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,299.8731);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,286.5172);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,41.8672);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,34.97928);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,28.74834);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,24.42964);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,23.84596);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,21.94104);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,20.51887);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,22.09405);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,20.82347);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,19.11465);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,19.36188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,19.30932);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,19.75211);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,20.4948);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,17.41493);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,18.51798);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,19.91785);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,19.77682);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,19.0096);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,19.35496);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(7515.688);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#ffcd4c");
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffcd4c");
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetLineColor(ci);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetLineWidth(2);

   ci = TColor::GetColor("#ffcd4c");
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetMarkerColor(ci);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetMarkerStyle(22);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetMarkerSize(1.2);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,200);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetLabelFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetTitleOffset(1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetTitleFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetYaxis()->SetLabelFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetYaxis()->SetTitleFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetZaxis()->SetLabelFont(42);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetZaxis()->SetTitleOffset(1);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(BkgSum-SR-Inclusive_stack_3_stack_3_stack_3,"");
   StackedMCstackHist->Draw("hist same");
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__1068 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__1068","h_SR_cosW_tH_tAInclusive",20,-1,1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(1,7.021388);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(2,3.017483);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(3,1.357637);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(4,1.669937);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(5,0.8638361);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(6,0.6842328);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(7,0.9429325);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(8,0.4447359);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(9,0.1227926);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(10,0.7802682);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(11,0.8771436);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(12,0.624264);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(13,0.5257822);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(14,0.4959075);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(15,0.306556);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(16,0.3551798);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(17,0.3866254);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(18,0.0465113);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(19,0.1497867);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinContent(20,0.5878212);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(1,0.93535);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(2,0.7068802);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(3,0.5180663);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(4,0.4188629);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(5,0.3687395);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(6,0.3524338);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(7,0.3128441);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(8,0.2819794);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(9,0.315682);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(10,0.3178554);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(11,0.2949634);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(12,0.2804791);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(13,0.2700265);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(14,0.261892);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(15,0.2809737);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(16,0.2749945);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(17,0.2488581);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(18,0.2480167);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(19,0.2294113);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetBinError(20,0.1875319);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetEntries(4205);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__1068->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3654[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3654[20] = {
   2379.631,
   1572.518,
   1057.781,
   776.0513,
   697.1682,
   605.3312,
   509.0974,
   569.8864,
   485.4126,
   425.6367,
   418.6454,
   411.9585,
   403.7021,
   441.8308,
   341.1116,
   366.0039,
   414.7092,
   413.7159,
   395.0996,
   381.1344};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3654[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3654[20] = {
   42.67575,
   35.5747,
   29.19054,
   24.82626,
   24.21322,
   22.25376,
   20.79173,
   22.33274,
   21.0685,
   19.40256,
   19.63141,
   19.49209,
   19.91825,
   20.64145,
   17.58536,
   18.67699,
   20.05774,
   19.93108,
   19.16965,
   19.58734};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3654[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3654[20] = {
   42.67575,
   35.5747,
   29.19054,
   24.82626,
   24.21322,
   22.25376,
   20.79173,
   22.33274,
   21.0685,
   19.40256,
   19.63141,
   19.49209,
   19.91825,
   20.64145,
   17.58536,
   18.67699,
   20.05774,
   19.93108,
   19.16965,
   19.58734};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3654,BkgSum-SR-Inclusive_sum_errors_fy3654,BkgSum-SR-Inclusive_sum_errors_felx3654,BkgSum-SR-Inclusive_sum_errors_fehx3654,BkgSum-SR-Inclusive_sum_errors_fely3654,BkgSum-SR-Inclusive_sum_errors_fehy3654);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1374;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654","Graph",100,-1.2,1.2);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMinimum(113.6482);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMaximum(2632.185);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetNdivisions(8);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors364636503654->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors364636503654);
   
   grae->Draw("e2 ");
   
   TH1F *Data__1069 = new TH1F("Data__1069","h_SR_cosW_tH_tAInclusive",20,-1,1);
   Data__1069->SetBinContent(1,2443);
   Data__1069->SetBinContent(2,1524);
   Data__1069->SetBinContent(3,997);
   Data__1069->SetBinContent(4,788);
   Data__1069->SetBinContent(5,655);
   Data__1069->SetBinContent(6,588);
   Data__1069->SetBinContent(7,558);
   Data__1069->SetBinContent(8,508);
   Data__1069->SetBinContent(9,450);
   Data__1069->SetBinContent(10,445);
   Data__1069->SetBinContent(11,466);
   Data__1069->SetBinContent(12,440);
   Data__1069->SetBinContent(13,388);
   Data__1069->SetBinContent(14,354);
   Data__1069->SetBinContent(15,390);
   Data__1069->SetBinContent(16,390);
   Data__1069->SetBinContent(17,425);
   Data__1069->SetBinContent(18,426);
   Data__1069->SetBinContent(19,448);
   Data__1069->SetBinContent(20,408);
   Data__1069->SetBinError(1,49.42671);
   Data__1069->SetBinError(2,39.03844);
   Data__1069->SetBinError(3,31.57531);
   Data__1069->SetBinError(4,28.07134);
   Data__1069->SetBinError(5,25.59297);
   Data__1069->SetBinError(6,24.24871);
   Data__1069->SetBinError(7,23.62202);
   Data__1069->SetBinError(8,22.53886);
   Data__1069->SetBinError(9,21.2132);
   Data__1069->SetBinError(10,21.09502);
   Data__1069->SetBinError(11,21.58703);
   Data__1069->SetBinError(12,20.97618);
   Data__1069->SetBinError(13,19.69772);
   Data__1069->SetBinError(14,18.81489);
   Data__1069->SetBinError(15,19.74842);
   Data__1069->SetBinError(16,19.74842);
   Data__1069->SetBinError(17,20.61553);
   Data__1069->SetBinError(18,20.63977);
   Data__1069->SetBinError(19,21.16601);
   Data__1069->SetBinError(20,20.19901);
   Data__1069->SetEntries(13095);
   Data__1069->SetDirectory(0);
   Data__1069->SetFillStyle(3001);
   Data__1069->SetLineWidth(2);
   Data__1069->SetMarkerStyle(20);
   Data__1069->SetMarkerSize(1.2);
   Data__1069->GetXaxis()->SetRange(1,200);
   Data__1069->GetXaxis()->SetLabelFont(42);
   Data__1069->GetXaxis()->SetTitleOffset(1);
   Data__1069->GetXaxis()->SetTitleFont(42);
   Data__1069->GetYaxis()->SetLabelFont(42);
   Data__1069->GetYaxis()->SetTitleFont(42);
   Data__1069->GetZaxis()->SetLabelFont(42);
   Data__1069->GetZaxis()->SetTitleOffset(1);
   Data__1069->GetZaxis()->SetTitleFont(42);
   Data__1069->Draw("EP same");
   
   TLegend *leg = new TLegend(0.65,0.51,0.85,0.91,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(4000);
   TLegendEntry *entry=leg->AddEntry("Data","Data","peL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ChargedHiggs_HplusTBHplusToTB_M_800","H^{#pm} (0.8 TeV, 1 pb)","L");
   entry->SetLineColor(93);
   entry->SetLineStyle(6);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("BkgSum-SR-Inclusive_forLegend","QCD multijet","F");

   ci = TColor::GetColor("#ffcd4c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcd4c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TT_forLegend","t#bar{t}","F");

   ci = TColor::GetColor("#993399");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#993399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("tEWttX_forLegend","t, t#bar{t} + X, EW","F");

   ci = TColor::GetColor("#4c7eff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#4c7eff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("BkgSum-SR-Inclusive_sum_errors_forLegend","Bkg. stat.","F");

   ci = 1374;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1374;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__1070 = new TH1F("hframe_copy__1070","",1000,-1,1);
   hframe_copy__1070->SetMinimum(0.01);
   hframe_copy__1070->SetMaximum(17101);
   hframe_copy__1070->SetDirectory(0);
   hframe_copy__1070->SetStats(0);
   hframe_copy__1070->SetLineStyle(0);
   hframe_copy__1070->SetMarkerStyle(20);
   hframe_copy__1070->GetXaxis()->SetNdivisions(8);
   hframe_copy__1070->GetXaxis()->SetLabelFont(43);
   hframe_copy__1070->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1070->GetXaxis()->SetLabelSize(0);
   hframe_copy__1070->GetXaxis()->SetTitleSize(0);
   hframe_copy__1070->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1070->GetXaxis()->SetTitleFont(43);
   hframe_copy__1070->GetYaxis()->SetTitle("Events / 0.10");
   hframe_copy__1070->GetYaxis()->SetLabelFont(43);
   hframe_copy__1070->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1070->GetYaxis()->SetLabelSize(27);
   hframe_copy__1070->GetYaxis()->SetTitleSize(33);
   hframe_copy__1070->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1070->GetYaxis()->SetTitleFont(43);
   hframe_copy__1070->GetZaxis()->SetLabelFont(43);
   hframe_copy__1070->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1070->GetZaxis()->SetLabelSize(27);
   hframe_copy__1070->GetZaxis()->SetTitleSize(33);
   hframe_copy__1070->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1070->GetZaxis()->SetTitleFont(43);
   hframe_copy__1070->Draw("sameaxis");
   
   TH1F *hframe_copy__1071 = new TH1F("hframe_copy__1071","",1000,-1,1);
   hframe_copy__1071->SetMinimum(0.01);
   hframe_copy__1071->SetMaximum(17101);
   hframe_copy__1071->SetDirectory(0);
   hframe_copy__1071->SetStats(0);
   hframe_copy__1071->SetLineStyle(0);
   hframe_copy__1071->SetMarkerStyle(20);
   hframe_copy__1071->GetXaxis()->SetNdivisions(8);
   hframe_copy__1071->GetXaxis()->SetLabelFont(43);
   hframe_copy__1071->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__1071->GetXaxis()->SetLabelSize(0);
   hframe_copy__1071->GetXaxis()->SetTitleSize(0);
   hframe_copy__1071->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__1071->GetXaxis()->SetTitleFont(43);
   hframe_copy__1071->GetYaxis()->SetTitle("Events / 0.10");
   hframe_copy__1071->GetYaxis()->SetLabelFont(43);
   hframe_copy__1071->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__1071->GetYaxis()->SetLabelSize(27);
   hframe_copy__1071->GetYaxis()->SetTitleSize(33);
   hframe_copy__1071->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__1071->GetYaxis()->SetTitleFont(43);
   hframe_copy__1071->GetZaxis()->SetLabelFont(43);
   hframe_copy__1071->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__1071->GetZaxis()->SetLabelSize(27);
   hframe_copy__1071->GetZaxis()->SetTitleSize(33);
   hframe_copy__1071->GetZaxis()->SetTitleOffset(1);
   hframe_copy__1071->GetZaxis()->SetTitleFont(43);
   hframe_copy__1071->Draw("sameaxis");
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
   cosW_tH_tA_1->Modified();
   cosW_tH_tA->cd();
   cosW_tH_tA->Modified();
   cosW_tH_tA->cd();
   cosW_tH_tA->SetSelected(cosW_tH_tA);
}
