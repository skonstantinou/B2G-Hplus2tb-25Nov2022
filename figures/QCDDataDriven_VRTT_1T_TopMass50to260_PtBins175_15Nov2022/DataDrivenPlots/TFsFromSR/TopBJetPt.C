void TopBJetPt()
{
//=========Macro generated from canvas: TopBJetPt/TopBJetPt
//=========  (Fri Nov 18 13:27:55 2022) by ROOT version 6.20/02
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
   0.01885957,
   0.01248075,
   0.01386523,
   0.01600301,
   0.01881139,
   0.02373304,
   0.02993558,
   0.03873941,
   0.05115013,
   0.0618317,
   0.07694003,
   0.08011018,
   0.1175154,
   0.2032582,
   0.228143,
   0.3206947};
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
   0.01885957,
   0.01248075,
   0.01386523,
   0.01600301,
   0.01881139,
   0.02373304,
   0.02993558,
   0.03873941,
   0.05115013,
   0.0618317,
   0.07694003,
   0.08011018,
   0.1175154,
   0.2032582,
   0.228143,
   0.3206947};
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
   Graph_Graph_Graph_BackgroundStatSystError331333173321->SetMinimum(0.6151664);
   Graph_Graph_Graph_BackgroundStatSystError331333173321->SetMaximum(1.384834);
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
   0.01885957,
   0,
   0.01248075,
   0.01386523,
   0.01600301,
   0.01881139,
   0,
   0.02373304,
   0.02993558,
   0.03873941,
   0.05115013,
   0,
   0.0618317,
   0.07694003,
   0.08011018,
   0.1175154,
   0.2032582,
   0.228143,
   0.3206947};
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
   0.01885957,
   0,
   0.01248075,
   0.01386523,
   0.01600301,
   0.01881139,
   0,
   0.02373304,
   0.02993558,
   0.03873941,
   0.05115013,
   0,
   0.0618317,
   0.07694003,
   0.08011018,
   0.1175154,
   0.2032582,
   0.228143,
   0.3206947};
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
   Graph_Graph_Graph_BackgroundStatError331433183322->SetMinimum(0.6151664);
   Graph_Graph_Graph_BackgroundStatError331433183322->SetMaximum(1.384834);
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
   0.9795773,
   0.9719006,
   0.9509335,
   0.9913273,
   0.9948287,
   0.981904,
   1.065775,
   1.110211,
   0.9411812,
   0.8732905,
   0.8874399,
   1.035115,
   1.045635,
   0.9137123,
   0.4180321,
   0.7826334};
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
   0.02235569,
   0.01504699,
   0.01695934,
   0.0197949,
   0.02321099,
   0.0290306,
   0.03803913,
   0.05030848,
   0.05964493,
   0.06947526,
   0.092522,
   0.1005393,
   0.1464182,
   0.2216078,
   0.1706609,
   0.3195087};
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
   0.02235569,
   0.01504699,
   0.01695934,
   0.0197949,
   0.02321099,
   0.0290306,
   0.03803913,
   0.05030848,
   0.05964493,
   0.06947526,
   0.092522,
   0.1005393,
   0.1464182,
   0.2216078,
   0.1706609,
   0.3195087};
   grae = new TGraphAsymmErrors(16,Graph1_fx3323,Graph1_fy3323,Graph1_felx3323,Graph1_fehx3323,Graph1_fely3323,Graph1_fehy3323);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1331533193323 = new TH1F("Graph_Graph_Graph_Graph1331533193323","Graph",100,0,658);
   Graph_Graph_Graph_Graph1331533193323->SetMinimum(0.152903);
   Graph_Graph_Graph_Graph1331533193323->SetMaximum(1.286522);
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
   TopBJetPt_1->Range(-73.41772,-2.112656,635.443,3.520145);
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
   hframe__563->SetMaximum(1521.168);
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
   StackedMCstackHist_stack_79_stack_80_stack_81->SetMinimum(0.0858524);
   StackedMCstackHist_stack_79_stack_80_stack_81->SetMaximum(343.4096);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,2.362252);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,4.947299);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,4.204126);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,3.233312);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,2.293131);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,1.934073);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,0.9441656);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,0.6865304);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,0.4349893);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,0.235079);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,0.2534834);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,0.07853098);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,0.04586186);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,0.008274942);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(19,0.0115966);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(20,0.005375198);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,0.1839767);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,0.2619806);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,0.2224078);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,0.2133488);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,0.1491125);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,0.1480141);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,0.09381908);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,0.07469854);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,0.05838891);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,0.05141319);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,0.04477713);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,0.01931116);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,0.01161619);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,0.005160383);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(19,0.006766313);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(20,0.002953996);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1775.799);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(2,51.70213);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,128.5096);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,109.4857);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,83.0412);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,58.26675);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,36.54304);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,21.6689);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,12.3776);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,6.944594);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,4.417504);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,2.858955);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,1.088049);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,0.4377151);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,0.1674369);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,0.06361165);
   TT_stack_2_stack_2_stack_2->SetBinContent(20,0.01554555);
   TT_stack_2_stack_2_stack_2->SetBinError(2,0.3842423);
   TT_stack_2_stack_2_stack_2->SetBinError(4,0.6165442);
   TT_stack_2_stack_2_stack_2->SetBinError(5,0.5698188);
   TT_stack_2_stack_2_stack_2->SetBinError(6,0.4958014);
   TT_stack_2_stack_2_stack_2->SetBinError(7,0.4144064);
   TT_stack_2_stack_2_stack_2->SetBinError(9,0.3275095);
   TT_stack_2_stack_2_stack_2->SetBinError(10,0.2517631);
   TT_stack_2_stack_2_stack_2->SetBinError(11,0.190347);
   TT_stack_2_stack_2_stack_2->SetBinError(12,0.1425163);
   TT_stack_2_stack_2_stack_2->SetBinError(14,0.1127446);
   TT_stack_2_stack_2_stack_2->SetBinError(15,0.09115645);
   TT_stack_2_stack_2_stack_2->SetBinError(16,0.03542181);
   TT_stack_2_stack_2_stack_2->SetBinError(17,0.02245168);
   TT_stack_2_stack_2_stack_2->SetBinError(18,0.01369449);
   TT_stack_2_stack_2_stack_2->SetBinError(19,0.008402748);
   TT_stack_2_stack_2_stack_2->SetBinError(20,0.002903884);
   TT_stack_2_stack_2_stack_2->SetEntries(176219.5);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,43.93707);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,81.17411);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,51.62142);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,40.22256);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,31.76758);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,19.77705);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,14.21461);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,8.868627);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,5.848475);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,4.393662);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2.071012);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,0.8815013);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,0.4919067);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,0.1963965);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(19,0.2118511);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(20,0.05574349);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,1.798498);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,2.59364);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,2.208951);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,1.951049);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,1.68004);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,1.335017);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,1.069217);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,0.8246903);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,0.6588553);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,0.5454465);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,0.3856666);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,0.1590348);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,0.1118125);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,0.07420477);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(19,0.06459587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(20,0.02423435);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3594.541);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(2,0.1843568);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(4,0.3347551);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(5,0.2446239);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(6,0.170169);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(7,0.1498097);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(9,0.1554189);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(10,0.07934348);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(11,0.1134551);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(12,0.08040435);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(14,0.02697073);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(15,0.04398363);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(16,0.01485132);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(17,0.001710474);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(18,0.002989799);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(19,0.001025866);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinContent(20,0.0002347948);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(2,0.02590314);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(4,0.04312113);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(5,0.04162443);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(6,0.03762983);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(7,0.03560342);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(9,0.03081323);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(10,0.02761111);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(11,0.0250453);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(12,0.02072568);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(14,0.01797964);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(15,0.01551927);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(16,0.006801403);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(17,0.003544396);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(18,0.002534537);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(19,0.001576139);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetBinError(20,0.0002347948);
   ChargedHiggs_HplusTBHplusToTB_M_800__564->SetEntries(248.6815);
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
   98.00145,
   0,
   214.631,
   165.3112,
   126.4971,
   92.32745,
   0,
   58.25417,
   36.82767,
   21.93276,
   13.22806,
   0,
   9.046246,
   5.18345,
   2.048082,
   0.9754837,
   0.3721084,
   0.2870593,
   0.07666425};
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
   1.848265,
   0,
   2.678755,
   2.292079,
   2.024334,
   1.736808,
   0,
   1.382548,
   1.102458,
   0.8496622,
   0.6766169,
   0,
   0.5593447,
   0.3988148,
   0.1640722,
   0.1146344,
   0.07563409,
   0.06549057,
   0.02458582};
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
   1.848265,
   0,
   2.678755,
   2.292079,
   2.024334,
   1.736808,
   0,
   1.382548,
   1.102458,
   0.8496622,
   0.6766169,
   0,
   0.5593447,
   0.3988148,
   0.1640722,
   0.1146344,
   0.07563409,
   0.06549057,
   0.02458582};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->SetMinimum(0.2390407);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors331633203324->SetMaximum(239.0407);
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
   Data__565->SetBinContent(2,96);
   Data__565->SetBinContent(4,208.6);
   Data__565->SetBinContent(5,157.2);
   Data__565->SetBinContent(6,125.4);
   Data__565->SetBinContent(7,91.85);
   Data__565->SetBinContent(9,57.2);
   Data__565->SetBinContent(10,39.25);
   Data__565->SetBinContent(11,24.35);
   Data__565->SetBinContent(12,12.45);
   Data__565->SetBinContent(14,7.9);
   Data__565->SetBinContent(15,4.6);
   Data__565->SetBinContent(16,2.12);
   Data__565->SetBinContent(17,1.02);
   Data__565->SetBinContent(18,0.34);
   Data__565->SetBinContent(19,0.12);
   Data__565->SetBinContent(20,0.06);
   Data__565->SetBinError(2,2.19089);
   Data__565->SetBinError(4,3.229551);
   Data__565->SetBinError(5,2.803569);
   Data__565->SetBinError(6,2.503997);
   Data__565->SetBinError(7,2.143012);
   Data__565->SetBinError(9,1.691153);
   Data__565->SetBinError(10,1.400893);
   Data__565->SetBinError(11,1.103404);
   Data__565->SetBinError(12,0.7889867);
   Data__565->SetBinError(14,0.6284903);
   Data__565->SetBinError(15,0.4795832);
   Data__565->SetBinError(16,0.2059126);
   Data__565->SetBinError(17,0.1428286);
   Data__565->SetBinError(18,0.08246211);
   Data__565->SetBinError(19,0.04898979);
   Data__565->SetBinError(20,0.0244949);
   Data__565->SetEntries(16613.48);
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
   hframe_copy__566->SetMaximum(1521.168);
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
   hframe_copy__567->SetMaximum(1521.168);
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
