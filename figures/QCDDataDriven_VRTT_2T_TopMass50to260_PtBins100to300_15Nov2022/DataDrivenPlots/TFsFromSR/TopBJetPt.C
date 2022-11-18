void TopBJetPt()
{
//=========Macro generated from canvas: TopBJetPt/TopBJetPt
//=========  (Fri Nov 18 13:28:25 2022) by ROOT version 6.20/02
   TCanvas *TopBJetPt = new TCanvas("TopBJetPt", "TopBJetPt",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   TopBJetPt->SetHighLightColor(2);
   TopBJetPt->Range(0,0,1,1);
   TopBJetPt->SetFillColor(0);
   TopBJetPt->SetBorderMode(0);
   TopBJetPt->SetBorderSize(2);
   TopBJetPt->SetTickx(1);
   TopBJetPt->SetTicky(1);
   TopBJetPt->SetLeftMargin(0.16);
   TopBJetPt->SetRightMargin(0.05);
   TopBJetPt->SetTopMargin(0.06);
   TopBJetPt->SetBottomMargin(0.13);
   TopBJetPt->SetFrameFillStyle(0);
   TopBJetPt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopBJetPt_2
   TPad *TopBJetPt_2 = new TPad("TopBJetPt_2", "TopBJetPt_2",0,0,1,0.304);
   TopBJetPt_2->Draw();
   TopBJetPt_2->cd();
   TopBJetPt_2->Range(-73.41772,-0.428,635.443,1.7);
   TopBJetPt_2->SetFillColor(0);
   TopBJetPt_2->SetFillStyle(4000);
   TopBJetPt_2->SetBorderMode(0);
   TopBJetPt_2->SetBorderSize(2);
   TopBJetPt_2->SetTickx(1);
   TopBJetPt_2->SetTicky(1);
   TopBJetPt_2->SetLeftMargin(0.16);
   TopBJetPt_2->SetRightMargin(0.05);
   TopBJetPt_2->SetTopMargin(0);
   TopBJetPt_2->SetBottomMargin(0.3421053);
   TopBJetPt_2->SetFrameFillStyle(0);
   TopBJetPt_2->SetFrameBorderMode(0);
   TopBJetPt_2->SetFrameFillStyle(0);
   TopBJetPt_2->SetFrameBorderMode(0);
   
   TH1F *hframe__561 = new TH1F("hframe__561","",1000,40,600);
   hframe__561->SetMinimum(0.3);
   hframe__561->SetMaximum(1.7);
   hframe__561->SetDirectory(0);
   hframe__561->SetStats(0);
   hframe__561->SetLineStyle(0);
   hframe__561->SetMarkerStyle(20);
   hframe__561->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe__561->GetXaxis()->SetLabelFont(43);
   hframe__561->GetXaxis()->SetLabelOffset(0.007);
   hframe__561->GetXaxis()->SetLabelSize(27);
   hframe__561->GetXaxis()->SetTitleSize(33);
   hframe__561->GetXaxis()->SetTitleOffset(2.960526);
   hframe__561->GetXaxis()->SetTitleFont(43);
   hframe__561->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__561->GetYaxis()->SetNdivisions(505);
   hframe__561->GetYaxis()->SetLabelFont(43);
   hframe__561->GetYaxis()->SetLabelOffset(0.007);
   hframe__561->GetYaxis()->SetLabelSize(21);
   hframe__561->GetYaxis()->SetTitleSize(33);
   hframe__561->GetYaxis()->SetTitleOffset(1.5625);
   hframe__561->GetYaxis()->SetTitleFont(43);
   hframe__561->GetZaxis()->SetLabelFont(43);
   hframe__561->GetZaxis()->SetLabelOffset(0.007);
   hframe__561->GetZaxis()->SetLabelSize(27);
   hframe__561->GetZaxis()->SetTitleSize(33);
   hframe__561->GetZaxis()->SetTitleOffset(1);
   hframe__561->GetZaxis()->SetTitleFont(43);
   hframe__561->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3321[16] = {
   30,
   70,
   90,
   110,
   130,
   170,
   190,
   210,
   230,
   270,
   290,
   325,
   375,
   425,
   475,
   550};
   Double_t BackgroundStatSystError_fy3321[16] = {
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
   Double_t BackgroundStatSystError_felx3321[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50};
   Double_t BackgroundStatSystError_fely3321[16] = {
   0.01087081,
   0.006744412,
   0.006934395,
   0.007568861,
   0.008555191,
   0.009895569,
   0.01182464,
   0.0144419,
   0.01758471,
   0.02205582,
   0.02708447,
   0.02618316,
   0.04031287,
   0.06486042,
   0.1128741,
   0.1539754};
   Double_t BackgroundStatSystError_fehx3321[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50};
   Double_t BackgroundStatSystError_fehy3321[16] = {
   0.01087081,
   0.006744412,
   0.006934395,
   0.007568861,
   0.008555191,
   0.009895569,
   0.01182464,
   0.0144419,
   0.01758471,
   0.02205582,
   0.02708447,
   0.02618316,
   0.04031287,
   0.06486042,
   0.1128741,
   0.1539754};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,BackgroundStatSystError_fx3321,BackgroundStatSystError_fy3321,BackgroundStatSystError_felx3321,BackgroundStatSystError_fehx3321,BackgroundStatSystError_fely3321,BackgroundStatSystError_fehy3321);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1290;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError331333173321 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError331333173321","Graph",100,0,658);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->SetMinimum(0.8152295);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->SetMaximum(1.184771);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError331333173321);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3322[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   325,
   375,
   425,
   475,
   550};
   Double_t BackgroundStatError_fy3322[20] = {
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
   Double_t BackgroundStatError_felx3322[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50};
   Double_t BackgroundStatError_fely3322[20] = {
   0,
   0.01087081,
   0,
   0.006744412,
   0.006934395,
   0.007568861,
   0.008555191,
   0,
   0.009895569,
   0.01182464,
   0.0144419,
   0.01758471,
   0,
   0.02205582,
   0.02708447,
   0.02618316,
   0.04031287,
   0.06486042,
   0.1128741,
   0.1539754};
   Double_t BackgroundStatError_fehx3322[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50};
   Double_t BackgroundStatError_fehy3322[20] = {
   0,
   0.01087081,
   0,
   0.006744412,
   0.006934395,
   0.007568861,
   0.008555191,
   0,
   0.009895569,
   0.01182464,
   0.0144419,
   0.01758471,
   0,
   0.02205582,
   0.02708447,
   0.02618316,
   0.04031287,
   0.06486042,
   0.1128741,
   0.1539754};
   grae = new TGraphAsymmErrors(20,BackgroundStatError_fx3322,BackgroundStatError_fy3322,BackgroundStatError_felx3322,BackgroundStatError_fehx3322,BackgroundStatError_fely3322,BackgroundStatError_fehy3322);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1289;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError331433183322 = new TH1F("Graph_Graph_Graph_BackgroundStatError331433183322","Graph",100,0,660);
   Graph_Graph_Graph_BackgroundStatError331433183322->SetMinimum(0.8152295);
   Graph_Graph_Graph_BackgroundStatError331433183322->SetMaximum(1.184771);
   Graph_Graph_Graph_BackgroundStatError331433183322->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError331433183322->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError331433183322->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError331433183322->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError331433183322->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError331433183322->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError331433183322);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx81[2] = {
   40,
   600};
   Double_t Graph0_fy81[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx81,Graph0_fy81);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0798081 = new TH1F("Graph_Graph_Graph_Graph0798081","Graph",100,0,656);
   Graph_Graph_Graph_Graph0798081->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0798081->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0798081->SetDirectory(0);
   Graph_Graph_Graph_Graph0798081->SetStats(0);
   Graph_Graph_Graph_Graph0798081->SetLineStyle(0);
   Graph_Graph_Graph_Graph0798081->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0798081->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0798081->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0798081->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0798081->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0798081->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0798081->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0798081->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0798081->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0798081->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0798081->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0798081->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0798081->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0798081->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0798081->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0798081->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0798081->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0798081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0798081->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0798081);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3323[16] = {
   30,
   70,
   90,
   110,
   130,
   170,
   190,
   210,
   230,
   270,
   290,
   325,
   375,
   425,
   475,
   550};
   Double_t Graph1_fy3323[16] = {
   0.9475376,
   0.944223,
   0.9409564,
   0.935316,
   0.9342322,
   0.9141794,
   0.9776537,
   0.9379037,
   1.043085,
   0.8690385,
   0.9057653,
   1.037821,
   1.045812,
   1.207835,
   1.056168,
   0.9415467};
   Double_t Graph1_felx3323[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50};
   Double_t Graph1_fely3323[16] = {
   0.01519224,
   0.009805909,
   0.01054132,
   0.01143012,
   0.01314647,
   0.0149265,
   0.01902035,
   0.02249099,
   0.02968152,
   0.03266046,
   0.04117115,
   0.0427264,
   0.06173231,
   0.1084667,
   0.1629703,
   0.2431063};
   Double_t Graph1_fehx3323[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50};
   Double_t Graph1_fehy3323[16] = {
   0.01519224,
   0.009805909,
   0.01054132,
   0.01143012,
   0.01314647,
   0.0149265,
   0.01902035,
   0.02249099,
   0.02968152,
   0.03266046,
   0.04117115,
   0.0427264,
   0.06173231,
   0.1084667,
   0.1629703,
   0.2431063};
   grae = new TGraphAsymmErrors(16,Graph1_fx3323,Graph1_fy3323,Graph1_felx3323,Graph1_fehx3323,Graph1_fely3323,Graph1_fehy3323);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1331533193323 = new TH1F("Graph_Graph_Graph_Graph1331533193323","Graph",100,0,658);
   Graph_Graph_Graph_Graph1331533193323->SetMinimum(0.6366543);
   Graph_Graph_Graph_Graph1331533193323->SetMaximum(1.378087);
   Graph_Graph_Graph_Graph1331533193323->SetDirectory(0);
   Graph_Graph_Graph_Graph1331533193323->SetStats(0);
   Graph_Graph_Graph_Graph1331533193323->SetLineStyle(0);
   Graph_Graph_Graph_Graph1331533193323->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1331533193323->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1331533193323->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1331533193323->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1331533193323->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1331533193323->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1331533193323->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1331533193323->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1331533193323->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1331533193323->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1331533193323->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1331533193323->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1331533193323->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1331533193323->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1331533193323->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1331533193323->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1331533193323->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1331533193323->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1331533193323->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1331533193323->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1331533193323);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__562 = new TH1F("hframe_copy__562","",1000,40,600);
   hframe_copy__562->SetMinimum(0.3);
   hframe_copy__562->SetMaximum(1.7);
   hframe_copy__562->SetDirectory(0);
   hframe_copy__562->SetStats(0);
   hframe_copy__562->SetLineStyle(0);
   hframe_copy__562->SetMarkerStyle(20);
   hframe_copy__562->GetXaxis()->SetTitle("p_{T} (GeV)");
   hframe_copy__562->GetXaxis()->SetLabelFont(43);
   hframe_copy__562->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__562->GetXaxis()->SetLabelSize(27);
   hframe_copy__562->GetXaxis()->SetTitleSize(33);
   hframe_copy__562->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__562->GetXaxis()->SetTitleFont(43);
   hframe_copy__562->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__562->GetYaxis()->SetNdivisions(505);
   hframe_copy__562->GetYaxis()->SetLabelFont(43);
   hframe_copy__562->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__562->GetYaxis()->SetLabelSize(21);
   hframe_copy__562->GetYaxis()->SetTitleSize(33);
   hframe_copy__562->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__562->GetYaxis()->SetTitleFont(43);
   hframe_copy__562->GetZaxis()->SetLabelFont(43);
   hframe_copy__562->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__562->GetZaxis()->SetLabelSize(27);
   hframe_copy__562->GetZaxis()->SetTitleSize(33);
   hframe_copy__562->GetZaxis()->SetTitleOffset(1);
   hframe_copy__562->GetZaxis()->SetTitleFont(43);
   hframe_copy__562->Draw("sameaxis");
   TopBJetPt_2->Modified();
   TopBJetPt->cd();
  
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
   TopBJetPt->cd();
  
// ------------>Primitives in pad: TopBJetPt_1
   TPad *TopBJetPt_1 = new TPad("TopBJetPt_1", "TopBJetPt_1",0,0.2897959,1,1);
   TopBJetPt_1->Draw();
   TopBJetPt_1->cd();
   TopBJetPt_1->Range(-73.41772,-2.120415,635.443,3.900331);
   TopBJetPt_1->SetFillColor(0);
   TopBJetPt_1->SetFillStyle(4000);
   TopBJetPt_1->SetBorderMode(0);
   TopBJetPt_1->SetBorderSize(2);
   TopBJetPt_1->SetLogy();
   TopBJetPt_1->SetTickx(1);
   TopBJetPt_1->SetTicky(1);
   TopBJetPt_1->SetLeftMargin(0.16);
   TopBJetPt_1->SetRightMargin(0.05);
   TopBJetPt_1->SetTopMargin(0.06);
   TopBJetPt_1->SetBottomMargin(0.02);
   TopBJetPt_1->SetFrameFillStyle(0);
   TopBJetPt_1->SetFrameBorderMode(0);
   TopBJetPt_1->SetFrameFillStyle(0);
   TopBJetPt_1->SetFrameBorderMode(0);
   
   TH1F *hframe__563 = new TH1F("hframe__563","",1000,40,600);
   hframe__563->SetMinimum(0.01);
   hframe__563->SetMaximum(3460.08);
   hframe__563->SetDirectory(0);
   hframe__563->SetStats(0);
   hframe__563->SetLineStyle(0);
   hframe__563->SetMarkerStyle(20);
   hframe__563->GetXaxis()->SetLabelFont(43);
   hframe__563->GetXaxis()->SetLabelOffset(0.007);
   hframe__563->GetXaxis()->SetLabelSize(0);
   hframe__563->GetXaxis()->SetTitleSize(0);
   hframe__563->GetXaxis()->SetTitleOffset(0.9);
   hframe__563->GetXaxis()->SetTitleFont(43);
   hframe__563->GetYaxis()->SetTitle("< Events / 20-100 GeV >");
   hframe__563->GetYaxis()->SetLabelFont(43);
   hframe__563->GetYaxis()->SetLabelOffset(0.007);
   hframe__563->GetYaxis()->SetLabelSize(27);
   hframe__563->GetYaxis()->SetTitleSize(33);
   hframe__563->GetYaxis()->SetTitleOffset(1.5625);
   hframe__563->GetYaxis()->SetTitleFont(43);
   hframe__563->GetZaxis()->SetLabelFont(43);
   hframe__563->GetZaxis()->SetLabelOffset(0.007);
   hframe__563->GetZaxis()->SetLabelSize(27);
   hframe__563->GetZaxis()->SetTitleSize(33);
   hframe__563->GetZaxis()->SetTitleOffset(1);
   hframe__563->GetZaxis()->SetTitleFont(43);
   hframe__563->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis337[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 450, 500, 600}; 
   
   TH1F *StackedMCstackHist_stack_79_stack_80_stack_81 = new TH1F("StackedMCstackHist_stack_79_stack_80_stack_81","StackedMCstackHist",20, xAxis337);
   StackedMCstackHist_stack_79_stack_80_stack_81->SetMinimum(0.1963943);
   StackedMCstackHist_stack_79_stack_80_stack_81->SetMaximum(785.5771);
   StackedMCstackHist_stack_79_stack_80_stack_81->SetDirectory(0);
   StackedMCstackHist_stack_79_stack_80_stack_81->SetStats(0);
   StackedMCstackHist_stack_79_stack_80_stack_81->SetLineStyle(0);
   StackedMCstackHist_stack_79_stack_80_stack_81->SetMarkerStyle(20);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_79_stack_80_stack_81->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_79_stack_80_stack_81);
   
   Double_t xAxis338[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 450, 500, 600}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_TopBJetPtInclusive",20, xAxis338);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,5.048429);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,11.65385);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,10.52458);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,8.257874);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,6.570024);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,5.068748);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,3.576829);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,2.588369);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,1.825238);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,1.364199);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.86283);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.4033462);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.1482356);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.09711037);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.03513209);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.005246333);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.230208);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.3838649);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.3337946);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.3246532);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.2703143);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.245807);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.1942204);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.1646025);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.1342533);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.115336);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.09682833);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.0407745);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.02771144);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.01875201);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.01161061);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.002809813);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(5109.219);
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
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,160);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   tEWttX_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(tEWttX_stack_1_stack_1_stack_1,"");
   Double_t xAxis339[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 450, 500, 600}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_TopBJetPtInclusive",20, xAxis339);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,152.0007);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,395.1586);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,357.6502);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,298.1585);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,229.1319);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,167.8396);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,113.0535);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,74.75114);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,49.15837);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,32.09569);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,21.34665);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,9.245166);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,3.965634);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,1.562233);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.5762403);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.1449085);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.6383214);
   TT_stack_2_stack_2_stack_2->SetBinError(4,1.044591);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.9946224);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.908877);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.7970081);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.6808866);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.5587665);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.4525725);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.3664043);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.2941825);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.2397299);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.09989216);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.06518087);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.04036554);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.02428062);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.008607517);
   TT_stack_2_stack_2_stack_2->SetEntries(695213.9);
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
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetRange(1,160);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   TT_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   StackedMCstackHist->Add(TT_stack_2_stack_2_stack_2,"");
   Double_t xAxis340[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 450, 500, 600}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_TopBJetPtInclusive",20, xAxis340);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,48.2197);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,84.17324);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,55.22419);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,51.53748);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,34.57346);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,32.24828);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,18.48907);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,15.36722);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,8.2158);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,7.274786);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,4.508257);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1.721468);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1.374691);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.3939182);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.1839556);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.009157502);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,2.125764);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,3.1188);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,2.74217);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,2.531574);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,2.153658);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.896694);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.484192);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,1.249253);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.9650982);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.8410366);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.6758719);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.2774626);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.2096171);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.1255176);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.08564255);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.02279793);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3115.594);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->GetXaxis()->SetRange(1,160);
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
   Double_t xAxis341[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 450, 500, 600}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__564 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__564","h_SR_TopBJetPtInclusive",20, xAxis341);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(2,0.2272972);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(4,0.7272965);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(5,0.6909156);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(6,0.5645498);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(7,0.5302712);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(9,0.5460778);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(10,0.4607763);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(11,0.4069144);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(12,0.3095465);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(14,0.2015531);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(15,0.1841628);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(16,0.100829);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(17,0.04788351);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(18,0.03460957);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(19,0.007857713);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(20,0.001389707);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(2,0.04248038);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(4,0.06926413);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(5,0.06669934);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(6,0.0629519);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(7,0.05975435);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(9,0.05512134);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(10,0.05314986);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(11,0.04671946);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(12,0.04192553);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(14,0.03850455);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(15,0.0341244);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(16,0.0160704);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(17,0.01084305);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(18,0.006536417);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(19,0.003482388);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(20,0.00111354);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetEntries(807.8604);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->GetXaxis()->SetRange(1,160);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3324[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   325,
   375,
   425,
   475,
   550};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3324[20] = {
   0,
   205.2689,
   0,
   490.9857,
   423.399,
   357.9539,
   270.2754,
   0,
   205.1567,
   135.1194,
   92.70674,
   59.19941,
   0,
   40.73468,
   26.71774,
   11.36998,
   5.48856,
   2.053261,
   0.795328,
   0.1593123};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3324[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3324[20] = {
   0,
   2.23144,
   0,
   3.31141,
   2.936016,
   2.709303,
   2.312258,
   0,
   2.030142,
   1.597738,
   1.338861,
   1.041005,
   0,
   0.8984366,
   0.7236359,
   0.297702,
   0.2212596,
   0.1331754,
   0.08977194,
   0.02453019};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3324[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   25,
   25,
   25,
   25,
   50};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3324[20] = {
   0,
   2.23144,
   0,
   3.31141,
   2.936016,
   2.709303,
   2.312258,
   0,
   2.030142,
   1.597738,
   1.338861,
   1.041005,
   0,
   0.8984366,
   0.7236359,
   0.297702,
   0.2212596,
   0.1331754,
   0.08977194,
   0.02453019};
   grae = new TGraphAsymmErrors(20,BkgSum-SR-Inclusive_sum_errors_fx3324,BkgSum-SR-Inclusive_sum_errors_fy3324,BkgSum-SR-Inclusive_sum_errors_felx3324,BkgSum-SR-Inclusive_sum_errors_fehx3324,BkgSum-SR-Inclusive_sum_errors_fely3324,BkgSum-SR-Inclusive_sum_errors_fehy3324);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1288;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324","Graph",100,0,660);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->SetMinimum(0.5437268);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->SetMaximum(543.7268);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors331633203324);
   
   grae->Draw("e2 ");
   Double_t xAxis342[21] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 350, 400, 450, 500, 600}; 
   
   TH1F *Data__565 = new TH1F("Data__565","h_SR_TopBJetPtInclusive",20, xAxis342);
   Data__565->SetBinContent(2,194.5);
   Data__565->SetBinContent(4,463.6);
   Data__565->SetBinContent(5,398.4);
   Data__565->SetBinContent(6,334.8);
   Data__565->SetBinContent(7,252.5);
   Data__565->SetBinContent(9,187.55);
   Data__565->SetBinContent(10,132.1);
   Data__565->SetBinContent(11,86.95);
   Data__565->SetBinContent(12,61.75);
   Data__565->SetBinContent(14,35.4);
   Data__565->SetBinContent(15,24.2);
   Data__565->SetBinContent(16,11.8);
   Data__565->SetBinContent(17,5.74);
   Data__565->SetBinContent(18,2.48);
   Data__565->SetBinContent(19,0.84);
   Data__565->SetBinContent(20,0.15);
   Data__565->SetBinError(2,3.118493);
   Data__565->SetBinError(4,4.814561);
   Data__565->SetBinError(5,4.463183);
   Data__565->SetBinError(6,4.091455);
   Data__565->SetBinError(7,3.553168);
   Data__565->SetBinError(9,3.06227);
   Data__565->SetBinError(10,2.570019);
   Data__565->SetBinError(11,2.085066);
   Data__565->SetBinError(12,1.757128);
   Data__565->SetBinError(14,1.330413);
   Data__565->SetBinError(15,1.1);
   Data__565->SetBinError(16,0.4857983);
   Data__565->SetBinError(17,0.3388215);
   Data__565->SetBinError(18,0.2227106);
   Data__565->SetBinError(19,0.1296148);
   Data__565->SetBinError(20,0.03872983);
   Data__565->SetEntries(44109.38);
   Data__565->SetDirectory(0);
   Data__565->SetFillStyle(3001);
   Data__565->SetLineWidth(2);
   Data__565->SetMarkerStyle(20);
   Data__565->SetMarkerSize(1.2);
   Data__565->GetXaxis()->SetRange(1,160);
   Data__565->GetXaxis()->SetLabelFont(42);
   Data__565->GetXaxis()->SetTitleOffset(1);
   Data__565->GetXaxis()->SetTitleFont(42);
   Data__565->GetYaxis()->SetLabelFont(42);
   Data__565->GetYaxis()->SetTitleFont(42);
   Data__565->GetZaxis()->SetLabelFont(42);
   Data__565->GetZaxis()->SetTitleOffset(1);
   Data__565->GetZaxis()->SetTitleFont(42);
   Data__565->Draw("EP same");
   
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

   ci = 1288;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1288;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__566 = new TH1F("hframe_copy__566","",1000,40,600);
   hframe_copy__566->SetMinimum(0.01);
   hframe_copy__566->SetMaximum(3460.08);
   hframe_copy__566->SetDirectory(0);
   hframe_copy__566->SetStats(0);
   hframe_copy__566->SetLineStyle(0);
   hframe_copy__566->SetMarkerStyle(20);
   hframe_copy__566->GetXaxis()->SetLabelFont(43);
   hframe_copy__566->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__566->GetXaxis()->SetLabelSize(0);
   hframe_copy__566->GetXaxis()->SetTitleSize(0);
   hframe_copy__566->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__566->GetXaxis()->SetTitleFont(43);
   hframe_copy__566->GetYaxis()->SetTitle("< Events / 20-100 GeV >");
   hframe_copy__566->GetYaxis()->SetLabelFont(43);
   hframe_copy__566->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__566->GetYaxis()->SetLabelSize(27);
   hframe_copy__566->GetYaxis()->SetTitleSize(33);
   hframe_copy__566->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__566->GetYaxis()->SetTitleFont(43);
   hframe_copy__566->GetZaxis()->SetLabelFont(43);
   hframe_copy__566->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__566->GetZaxis()->SetLabelSize(27);
   hframe_copy__566->GetZaxis()->SetTitleSize(33);
   hframe_copy__566->GetZaxis()->SetTitleOffset(1);
   hframe_copy__566->GetZaxis()->SetTitleFont(43);
   hframe_copy__566->Draw("sameaxis");
   
   TH1F *hframe_copy__567 = new TH1F("hframe_copy__567","",1000,40,600);
   hframe_copy__567->SetMinimum(0.01);
   hframe_copy__567->SetMaximum(3460.08);
   hframe_copy__567->SetDirectory(0);
   hframe_copy__567->SetStats(0);
   hframe_copy__567->SetLineStyle(0);
   hframe_copy__567->SetMarkerStyle(20);
   hframe_copy__567->GetXaxis()->SetLabelFont(43);
   hframe_copy__567->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__567->GetXaxis()->SetLabelSize(0);
   hframe_copy__567->GetXaxis()->SetTitleSize(0);
   hframe_copy__567->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__567->GetXaxis()->SetTitleFont(43);
   hframe_copy__567->GetYaxis()->SetTitle("< Events / 20-100 GeV >");
   hframe_copy__567->GetYaxis()->SetLabelFont(43);
   hframe_copy__567->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__567->GetYaxis()->SetLabelSize(27);
   hframe_copy__567->GetYaxis()->SetTitleSize(33);
   hframe_copy__567->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__567->GetYaxis()->SetTitleFont(43);
   hframe_copy__567->GetZaxis()->SetLabelFont(43);
   hframe_copy__567->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__567->GetZaxis()->SetLabelSize(27);
   hframe_copy__567->GetZaxis()->SetTitleSize(33);
   hframe_copy__567->GetZaxis()->SetTitleOffset(1);
   hframe_copy__567->GetZaxis()->SetTitleFont(43);
   hframe_copy__567->Draw("sameaxis");
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
   TopBJetPt_1->Modified();
   TopBJetPt->cd();
   TopBJetPt->Modified();
   TopBJetPt->cd();
   TopBJetPt->SetSelected(TopBJetPt);
}
