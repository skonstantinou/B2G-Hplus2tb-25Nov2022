void MVAOutputM350()
{
//=========Macro generated from canvas: MVAOutputM350/MVAOutputM350
//=========  (Fri Nov 18 13:27:23 2022) by ROOT version 6.20/02
   TCanvas *MVAOutputM350 = new TCanvas("MVAOutputM350", "MVAOutputM350",1,1,600,726);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVAOutputM350->SetHighLightColor(2);
   MVAOutputM350->Range(0,0,1,1);
   MVAOutputM350->SetFillColor(0);
   MVAOutputM350->SetBorderMode(0);
   MVAOutputM350->SetBorderSize(2);
   MVAOutputM350->SetTickx(1);
   MVAOutputM350->SetTicky(1);
   MVAOutputM350->SetLeftMargin(0.16);
   MVAOutputM350->SetRightMargin(0.05);
   MVAOutputM350->SetTopMargin(0.06);
   MVAOutputM350->SetBottomMargin(0.13);
   MVAOutputM350->SetFrameFillStyle(0);
   MVAOutputM350->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVAOutputM350_2
   TPad *MVAOutputM350_2 = new TPad("MVAOutputM350_2", "MVAOutputM350_2",0,0,1,0.304);
   MVAOutputM350_2->Draw();
   MVAOutputM350_2->cd();
   MVAOutputM350_2->Range(-0.204557,-0.428,1.073924,1.7);
   MVAOutputM350_2->SetFillColor(0);
   MVAOutputM350_2->SetFillStyle(4000);
   MVAOutputM350_2->SetBorderMode(0);
   MVAOutputM350_2->SetBorderSize(2);
   MVAOutputM350_2->SetTickx(1);
   MVAOutputM350_2->SetTicky(1);
   MVAOutputM350_2->SetLeftMargin(0.16);
   MVAOutputM350_2->SetRightMargin(0.05);
   MVAOutputM350_2->SetTopMargin(0);
   MVAOutputM350_2->SetBottomMargin(0.3421053);
   MVAOutputM350_2->SetFrameFillStyle(0);
   MVAOutputM350_2->SetFrameBorderMode(0);
   MVAOutputM350_2->SetFrameFillStyle(0);
   MVAOutputM350_2->SetFrameBorderMode(0);
   
   TH1F *hframe__99 = new TH1F("hframe__99","",1000,0,1.01);
   hframe__99->SetMinimum(0.3);
   hframe__99->SetMaximum(1.7);
   hframe__99->SetDirectory(0);
   hframe__99->SetStats(0);
   hframe__99->SetLineStyle(0);
   hframe__99->SetMarkerStyle(20);
   hframe__99->GetXaxis()->SetTitle("DNN Output");
   hframe__99->GetXaxis()->SetLabelFont(43);
   hframe__99->GetXaxis()->SetLabelOffset(0.007);
   hframe__99->GetXaxis()->SetLabelSize(27);
   hframe__99->GetXaxis()->SetTitleSize(33);
   hframe__99->GetXaxis()->SetTitleOffset(2.960526);
   hframe__99->GetXaxis()->SetTitleFont(43);
   hframe__99->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe__99->GetYaxis()->SetNdivisions(505);
   hframe__99->GetYaxis()->SetLabelFont(43);
   hframe__99->GetYaxis()->SetLabelOffset(0.007);
   hframe__99->GetYaxis()->SetLabelSize(21);
   hframe__99->GetYaxis()->SetTitleSize(33);
   hframe__99->GetYaxis()->SetTitleOffset(1.5625);
   hframe__99->GetYaxis()->SetTitleFont(43);
   hframe__99->GetZaxis()->SetLabelFont(43);
   hframe__99->GetZaxis()->SetLabelOffset(0.007);
   hframe__99->GetZaxis()->SetLabelSize(27);
   hframe__99->GetZaxis()->SetTitleSize(33);
   hframe__99->GetZaxis()->SetTitleOffset(1);
   hframe__99->GetZaxis()->SetTitleFont(43);
   hframe__99->Draw(" ");
   
   Double_t BackgroundStatSystError_fx3057[18] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925};
   Double_t BackgroundStatSystError_fy3057[18] = {
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
   Double_t BackgroundStatSystError_felx3057[18] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fely3057[18] = {
   0.05169868,
   0.04117227,
   0.03291454,
   0.02648893,
   0.02257354,
   0.0205567,
   0.01943244,
   0.01919467,
   0.01961248,
   0.02052357,
   0.02136745,
   0.02375129,
   0.02595485,
   0.03000514,
   0.03714776,
   0.05062586,
   0.08420701,
   0.2459707};
   Double_t BackgroundStatSystError_fehx3057[18] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatSystError_fehy3057[18] = {
   0.05169868,
   0.04117227,
   0.03291454,
   0.02648893,
   0.02257354,
   0.0205567,
   0.01943244,
   0.01919467,
   0.01961248,
   0.02052357,
   0.02136745,
   0.02375129,
   0.02595485,
   0.03000514,
   0.03714776,
   0.05062586,
   0.08420701,
   0.2459707};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,BackgroundStatSystError_fx3057,BackgroundStatSystError_fy3057,BackgroundStatSystError_felx3057,BackgroundStatSystError_fehx3057,BackgroundStatSystError_fely3057,BackgroundStatSystError_fehy3057);
   grae->SetName("BackgroundStatSystError");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1224;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError304930533057 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError304930533057","Graph",100,0,1.045);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMinimum(0.7048352);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMaximum(1.295165);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetStats(0);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatSystError304930533057);
   
   grae->Draw("ep ");
   
   Double_t BackgroundStatError_fx3058[19] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BackgroundStatError_fy3058[19] = {
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
   Double_t BackgroundStatError_felx3058[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fely3058[19] = {
   0.05169868,
   0.04117227,
   0.03291454,
   0.02648893,
   0.02257354,
   0.0205567,
   0.01943244,
   0.01919467,
   0.01961248,
   0.02052357,
   0.02136745,
   0.02375129,
   0.02595485,
   0.03000514,
   0.03714776,
   0.05062586,
   0.08420701,
   0.2459707,
   0};
   Double_t BackgroundStatError_fehx3058[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BackgroundStatError_fehy3058[19] = {
   0.05169868,
   0.04117227,
   0.03291454,
   0.02648893,
   0.02257354,
   0.0205567,
   0.01943244,
   0.01919467,
   0.01961248,
   0.02052357,
   0.02136745,
   0.02375129,
   0.02595485,
   0.03000514,
   0.03714776,
   0.05062586,
   0.08420701,
   0.2459707,
   0};
   grae = new TGraphAsymmErrors(19,BackgroundStatError_fx3058,BackgroundStatError_fy3058,BackgroundStatError_felx3058,BackgroundStatError_fehx3058,BackgroundStatError_fely3058,BackgroundStatError_fehy3058);
   grae->SetName("BackgroundStatError");
   grae->SetTitle("Graph");

   ci = 1223;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BackgroundStatError305030543058 = new TH1F("Graph_Graph_Graph_BackgroundStatError305030543058","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMinimum(0.7048352);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMaximum(1.295165);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetDirectory(0);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetStats(0);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetLineStyle(0);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMarkerStyle(20);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BackgroundStatError305030543058->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BackgroundStatError305030543058);
   
   grae->Draw("ep ");
   
   Double_t Graph0_fx15[2] = {
   0,
   1.01};
   Double_t Graph0_fy15[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx15,Graph0_fy15);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0131415 = new TH1F("Graph_Graph_Graph_Graph0131415","Graph",100,0,1.111);
   Graph_Graph_Graph_Graph0131415->SetMinimum(0.9);
   Graph_Graph_Graph_Graph0131415->SetMaximum(2.1);
   Graph_Graph_Graph_Graph0131415->SetDirectory(0);
   Graph_Graph_Graph_Graph0131415->SetStats(0);
   Graph_Graph_Graph_Graph0131415->SetLineStyle(0);
   Graph_Graph_Graph_Graph0131415->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph0131415->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph0131415->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph0131415->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph_Graph_Graph0131415);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3059[18] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925};
   Double_t Graph1_fy3059[18] = {
   1.061586,
   0.8939939,
   0.8914773,
   1.024944,
   1.07252,
   1.019959,
   1.000871,
   0.9758405,
   0.9734711,
   0.9952673,
   0.9262212,
   0.9603369,
   0.937801,
   0.9310866,
   0.9605206,
   0.9765253,
   1.001121,
   1.266462};
   Double_t Graph1_felx3059[18] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fely3059[18] = {
   0.06621993,
   0.04799211,
   0.03808202,
   0.0331838,
   0.02940896,
   0.02575784,
   0.02407722,
   0.02347507,
   0.0239943,
   0.0251343,
   0.02524598,
   0.02831879,
   0.03070223,
   0.03506675,
   0.04361499,
   0.0595398,
   0.0976994,
   0.3269991};
   Double_t Graph1_fehx3059[18] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t Graph1_fehy3059[18] = {
   0.06621993,
   0.04799211,
   0.03808202,
   0.0331838,
   0.02940896,
   0.02575784,
   0.02407722,
   0.02347507,
   0.0239943,
   0.0251343,
   0.02524598,
   0.02831879,
   0.03070223,
   0.03506675,
   0.04361499,
   0.0595398,
   0.0976994,
   0.3269991};
   grae = new TGraphAsymmErrors(18,Graph1_fx3059,Graph1_fy3059,Graph1_felx3059,Graph1_fehx3059,Graph1_fely3059,Graph1_fehy3059);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1305130553059 = new TH1F("Graph_Graph_Graph_Graph1305130553059","Graph",100,0,1.045);
   Graph_Graph_Graph_Graph1305130553059->SetMinimum(0.7712559);
   Graph_Graph_Graph_Graph1305130553059->SetMaximum(1.668207);
   Graph_Graph_Graph_Graph1305130553059->SetDirectory(0);
   Graph_Graph_Graph_Graph1305130553059->SetStats(0);
   Graph_Graph_Graph_Graph1305130553059->SetLineStyle(0);
   Graph_Graph_Graph_Graph1305130553059->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_Graph1305130553059->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetTitle("Data/MC");
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_Graph1305130553059->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph1305130553059->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_Graph1305130553059);
   
   grae->Draw("ep ");
   
   TH1F *hframe_copy__100 = new TH1F("hframe_copy__100","",1000,0,1.01);
   hframe_copy__100->SetMinimum(0.3);
   hframe_copy__100->SetMaximum(1.7);
   hframe_copy__100->SetDirectory(0);
   hframe_copy__100->SetStats(0);
   hframe_copy__100->SetLineStyle(0);
   hframe_copy__100->SetMarkerStyle(20);
   hframe_copy__100->GetXaxis()->SetTitle("DNN Output");
   hframe_copy__100->GetXaxis()->SetLabelFont(43);
   hframe_copy__100->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__100->GetXaxis()->SetLabelSize(27);
   hframe_copy__100->GetXaxis()->SetTitleSize(33);
   hframe_copy__100->GetXaxis()->SetTitleOffset(2.960526);
   hframe_copy__100->GetXaxis()->SetTitleFont(43);
   hframe_copy__100->GetYaxis()->SetTitle("Data/Bkg. ");
   hframe_copy__100->GetYaxis()->SetNdivisions(505);
   hframe_copy__100->GetYaxis()->SetLabelFont(43);
   hframe_copy__100->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__100->GetYaxis()->SetLabelSize(21);
   hframe_copy__100->GetYaxis()->SetTitleSize(33);
   hframe_copy__100->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__100->GetYaxis()->SetTitleFont(43);
   hframe_copy__100->GetZaxis()->SetLabelFont(43);
   hframe_copy__100->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__100->GetZaxis()->SetLabelSize(27);
   hframe_copy__100->GetZaxis()->SetTitleSize(33);
   hframe_copy__100->GetZaxis()->SetTitleOffset(1);
   hframe_copy__100->GetZaxis()->SetTitleFont(43);
   hframe_copy__100->Draw("sameaxis");
   MVAOutputM350_2->Modified();
   MVAOutputM350->cd();
  
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
   MVAOutputM350->cd();
  
// ------------>Primitives in pad: MVAOutputM350_1
   TPad *MVAOutputM350_1 = new TPad("MVAOutputM350_1", "MVAOutputM350_1",0,0.2897959,1,1);
   MVAOutputM350_1->Draw();
   MVAOutputM350_1->cd();
   MVAOutputM350_1->Range(-0.204557,-2.167369,1.073924,6.201077);
   MVAOutputM350_1->SetFillColor(0);
   MVAOutputM350_1->SetFillStyle(4000);
   MVAOutputM350_1->SetBorderMode(0);
   MVAOutputM350_1->SetBorderSize(2);
   MVAOutputM350_1->SetLogy();
   MVAOutputM350_1->SetTickx(1);
   MVAOutputM350_1->SetTicky(1);
   MVAOutputM350_1->SetLeftMargin(0.16);
   MVAOutputM350_1->SetRightMargin(0.05);
   MVAOutputM350_1->SetTopMargin(0.06);
   MVAOutputM350_1->SetBottomMargin(0.02);
   MVAOutputM350_1->SetFrameFillStyle(0);
   MVAOutputM350_1->SetFrameBorderMode(0);
   MVAOutputM350_1->SetFrameFillStyle(0);
   MVAOutputM350_1->SetFrameBorderMode(0);
   
   TH1F *hframe__101 = new TH1F("hframe__101","",1000,0,1.01);
   hframe__101->SetMinimum(0.01);
   hframe__101->SetMaximum(500000);
   hframe__101->SetDirectory(0);
   hframe__101->SetStats(0);
   hframe__101->SetLineStyle(0);
   hframe__101->SetMarkerStyle(20);
   hframe__101->GetXaxis()->SetLabelFont(43);
   hframe__101->GetXaxis()->SetLabelOffset(0.007);
   hframe__101->GetXaxis()->SetLabelSize(0);
   hframe__101->GetXaxis()->SetTitleSize(0);
   hframe__101->GetXaxis()->SetTitleOffset(0.9);
   hframe__101->GetXaxis()->SetTitleFont(43);
   hframe__101->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe__101->GetYaxis()->SetLabelFont(43);
   hframe__101->GetYaxis()->SetLabelOffset(0.007);
   hframe__101->GetYaxis()->SetLabelSize(27);
   hframe__101->GetYaxis()->SetTitleSize(33);
   hframe__101->GetYaxis()->SetTitleOffset(1.5625);
   hframe__101->GetYaxis()->SetTitleFont(43);
   hframe__101->GetZaxis()->SetLabelFont(43);
   hframe__101->GetZaxis()->SetLabelOffset(0.007);
   hframe__101->GetZaxis()->SetLabelSize(27);
   hframe__101->GetZaxis()->SetTitleSize(33);
   hframe__101->GetZaxis()->SetTitleOffset(1);
   hframe__101->GetZaxis()->SetTitleFont(43);
   hframe__101->Draw(" ");
   
   THStack *StackedMCstackHist = new THStack();
   StackedMCstackHist->SetName("StackedMCstackHist");
   StackedMCstackHist->SetTitle("StackedMCstackHist");
   Double_t xAxis85[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *StackedMCstackHist_stack_13_stack_14_stack_15 = new TH1F("StackedMCstackHist_stack_13_stack_14_stack_15","StackedMCstackHist",19, xAxis85);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMinimum(14.16625);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMaximum(56665);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetDirectory(0);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetStats(0);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetLineStyle(0);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMarkerStyle(20);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetTitleOffset(0.9);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetXaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetTitleOffset(1.25);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetYaxis()->SetTitleFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetLabelFont(43);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetLabelOffset(0.007);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetLabelSize(27);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetTitleSize(33);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetTitleOffset(1);
   StackedMCstackHist_stack_13_stack_14_stack_15->GetZaxis()->SetTitleFont(43);
   StackedMCstackHist->SetHistogram(StackedMCstackHist_stack_13_stack_14_stack_15);
   
   Double_t xAxis86[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *tEWttX_stack_1_stack_1_stack_1 = new TH1F("tEWttX_stack_1_stack_1_stack_1","h_SR_MVAOutputM350Inclusive",19, xAxis86);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,60.75027);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,205.8786);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,331.9403);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,510.1366);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,670.5417);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,790.6218);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,841.3061);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,1021.592);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,891.2297);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,773.2792);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,744.5246);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,512.5599);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,608.3529);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,330.9506);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,230.3245);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,95.39449);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,81.45287);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,4.80473);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,10.03897);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,27.0071);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,35.63337);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,44.75181);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,48.68341);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,55.81092);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,56.06801);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,79.10144);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,71.00953);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,60.80627);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,62.77143);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,44.74091);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,73.92779);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,37.44055);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,38.04726);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,17.31616);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,16.42946);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,2.408068);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(1780.727);
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
   Double_t xAxis87[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *TT_stack_2_stack_2_stack_2 = new TH1F("TT_stack_2_stack_2_stack_2","h_SR_MVAOutputM350Inclusive",19, xAxis87);
   TT_stack_2_stack_2_stack_2->SetBinContent(1,1409.237);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,4283.06);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,6732.238);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,10570.2);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,15229.46);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,18806.85);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,21020.3);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,21765.51);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,21402.33);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,20049.79);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,17986.06);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,15210.65);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,12456.98);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,9367.131);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,6039.677);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,3228.402);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,1010.394);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,136.63);
   TT_stack_2_stack_2_stack_2->SetBinError(1,28.65657);
   TT_stack_2_stack_2_stack_2->SetBinError(2,70.92358);
   TT_stack_2_stack_2_stack_2->SetBinError(3,88.88926);
   TT_stack_2_stack_2_stack_2->SetBinError(4,111.3635);
   TT_stack_2_stack_2_stack_2->SetBinError(5,133.5298);
   TT_stack_2_stack_2_stack_2->SetBinError(6,148.624);
   TT_stack_2_stack_2_stack_2->SetBinError(7,157.0383);
   TT_stack_2_stack_2_stack_2->SetBinError(8,160.0338);
   TT_stack_2_stack_2_stack_2->SetBinError(9,158.6381);
   TT_stack_2_stack_2_stack_2->SetBinError(10,153.594);
   TT_stack_2_stack_2_stack_2->SetBinError(11,145.8832);
   TT_stack_2_stack_2_stack_2->SetBinError(12,134.0723);
   TT_stack_2_stack_2_stack_2->SetBinError(13,121.5576);
   TT_stack_2_stack_2_stack_2->SetBinError(14,105.295);
   TT_stack_2_stack_2_stack_2->SetBinError(15,84.40725);
   TT_stack_2_stack_2_stack_2->SetBinError(16,61.65299);
   TT_stack_2_stack_2_stack_2->SetBinError(17,34.42468);
   TT_stack_2_stack_2_stack_2->SetBinError(18,12.99756);
   TT_stack_2_stack_2_stack_2->SetEntries(176191.3);
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
   Double_t xAxis88[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *BkgSummISRmIInclusive_stack_3_stack_3_stack_3 = new TH1F("BkgSummISRmIInclusive_stack_3_stack_3_stack_3","h_CR3_MVAOutputM350Inclusive",19, xAxis88);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,950.9181);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,3273.978);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,5230.021);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,7535.308);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,8901.399);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,11148.87);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,12668.3);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,12628.52);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,11523.57);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,10686.06);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,10333.75);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,8226.719);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,6832.276);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,5445.516);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,3828.689);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,2185.533);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1005.802);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,95.44571);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,121.4185);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,310.4762);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,393.1629);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,478.2797);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,541.5145);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,611.7801);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,649.9514);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,655.9331);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,640.0592);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,625.2248);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,600.3806);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,551.0025);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,496.4557);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,440.4289);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,363.539);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,271.4634);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,172.469);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,56.74635);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3608.551);
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
   Double_t xAxis89[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *ChargedHiggs_HplusTBHplusToTB_M_800__102 = new TH1F("ChargedHiggs_HplusTBHplusToTB_M_800__102","h_SR_MVAOutputM350Inclusive",19, xAxis89);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(1,8.363213);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(2,16.00041);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(3,25.42853);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(4,27.83133);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(5,83.68826);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(6,86.8336);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(7,59.15905);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(8,56.70733);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(9,80.46081);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(10,48.06044);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(11,70.47916);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(12,28.49981);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(13,27.62601);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(14,21.83411);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(15,-2.088892);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(16,7.1061);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(17,0.3627517);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(18,-0.3519432);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(1,2.584744);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(2,6.435401);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(3,8.376797);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(4,10.10674);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(5,12.46151);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(6,14.32131);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(7,14.2574);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(8,14.22022);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(9,13.23635);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(10,11.98041);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(11,11.19707);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(12,9.870388);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(13,8.237627);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(14,6.896004);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(15,5.452609);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(16,3.71675);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(17,2.242106);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(18,0.895518);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetEntries(246.5523);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetDirectory(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetFillColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetFillStyle(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetLineColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetLineStyle(6);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetLineWidth(4);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetMarkerColor(93);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetMarkerStyle(22);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetMarkerSize(0);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetXaxis()->SetRange(1,200);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetXaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetXaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetXaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetYaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetYaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetZaxis()->SetLabelFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetZaxis()->SetTitleOffset(1);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->GetZaxis()->SetTitleFont(42);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->Draw("HIST same");
   
   Double_t BkgSum-SR-Inclusive_sum_errors_fx3060[19] = {
   0.05,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t BkgSum-SR-Inclusive_sum_errors_fy3060[19] = {
   2420.906,
   7762.917,
   12294.2,
   18615.64,
   24801.4,
   30746.35,
   34529.91,
   35415.62,
   33817.13,
   31509.12,
   29064.33,
   23949.93,
   19897.61,
   15143.6,
   10098.69,
   5509.33,
   2097.649,
   236.8804,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_felx3060[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fely3060[19] = {
   125.1576,
   319.6169,
   404.658,
   493.1085,
   559.8555,
   632.0434,
   671.0003,
   679.7912,
   663.2377,
   646.6796,
   621.0306,
   568.8417,
   516.4396,
   454.3858,
   375.1437,
   278.9146,
   176.6367,
   58.26563,
   0};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehx3060[19] = {
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t BkgSum-SR-Inclusive_sum_errors_fehy3060[19] = {
   125.1576,
   319.6169,
   404.658,
   493.1085,
   559.8555,
   632.0434,
   671.0003,
   679.7912,
   663.2377,
   646.6796,
   621.0306,
   568.8417,
   516.4396,
   454.3858,
   375.1437,
   278.9146,
   176.6367,
   58.26563,
   0};
   grae = new TGraphAsymmErrors(19,BkgSum-SR-Inclusive_sum_errors_fx3060,BkgSum-SR-Inclusive_sum_errors_fy3060,BkgSum-SR-Inclusive_sum_errors_felx3060,BkgSum-SR-Inclusive_sum_errors_fehx3060,BkgSum-SR-Inclusive_sum_errors_fely3060,BkgSum-SR-Inclusive_sum_errors_fehy3060);
   grae->SetName("BkgSum-SR-Inclusive_sum_errors");
   grae->SetTitle("Graph");

   ci = 1222;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   grae->SetFillColor(ci);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060 = new TH1F("Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060","Graph",100,0,1.1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMinimum(39.70496);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMaximum(39704.96);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetDirectory(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetStats(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetLineStyle(0);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMarkerStyle(20);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetLabelFont(43);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetLabelSize(27);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetTitleSize(33);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_Graph_BkgSum-SR-Inclusive_sum_errors305230563060);
   
   grae->Draw("e2 ");
   Double_t xAxis90[20] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1}; 
   
   TH1F *Data__103 = new TH1F("Data__103","h_SR_MVAOutputM350Inclusive",19, xAxis90);
   Data__103->SetBinContent(1,2570);
   Data__103->SetBinContent(2,6940);
   Data__103->SetBinContent(3,10960);
   Data__103->SetBinContent(4,19080);
   Data__103->SetBinContent(5,26600);
   Data__103->SetBinContent(6,31360);
   Data__103->SetBinContent(7,34560);
   Data__103->SetBinContent(8,34560);
   Data__103->SetBinContent(9,32920);
   Data__103->SetBinContent(10,31360);
   Data__103->SetBinContent(11,26920);
   Data__103->SetBinContent(12,23000);
   Data__103->SetBinContent(13,18660);
   Data__103->SetBinContent(14,14100);
   Data__103->SetBinContent(15,9700);
   Data__103->SetBinContent(16,5380);
   Data__103->SetBinContent(17,2100);
   Data__103->SetBinContent(18,300);
   Data__103->SetBinError(1,160.3122);
   Data__103->SetBinError(2,372.5587);
   Data__103->SetBinError(3,468.188);
   Data__103->SetBinError(4,617.7378);
   Data__103->SetBinError(5,729.3833);
   Data__103->SetBinError(6,791.9596);
   Data__103->SetBinError(7,831.3844);
   Data__103->SetBinError(8,831.3844);
   Data__103->SetBinError(9,811.4185);
   Data__103->SetBinError(10,791.9596);
   Data__103->SetBinError(11,733.7575);
   Data__103->SetBinError(12,678.233);
   Data__103->SetBinError(13,610.901);
   Data__103->SetBinError(14,531.0367);
   Data__103->SetBinError(15,440.4543);
   Data__103->SetBinError(16,328.0244);
   Data__103->SetBinError(17,204.939);
   Data__103->SetBinError(18,77.45967);
   Data__103->SetEntries(16618);
   Data__103->SetDirectory(0);
   Data__103->SetFillStyle(3001);
   Data__103->SetLineWidth(2);
   Data__103->SetMarkerStyle(20);
   Data__103->SetMarkerSize(1.2);
   Data__103->GetXaxis()->SetRange(1,200);
   Data__103->GetXaxis()->SetLabelFont(42);
   Data__103->GetXaxis()->SetTitleOffset(1);
   Data__103->GetXaxis()->SetTitleFont(42);
   Data__103->GetYaxis()->SetLabelFont(42);
   Data__103->GetYaxis()->SetTitleFont(42);
   Data__103->GetZaxis()->SetLabelFont(42);
   Data__103->GetZaxis()->SetTitleOffset(1);
   Data__103->GetZaxis()->SetTitleFont(42);
   Data__103->Draw("EP same");
   
   TLegend *leg = new TLegend(0.39,0.76,0.92,0.91,NULL,"brNDC");
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

   ci = 1222;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 1222;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy__104 = new TH1F("hframe_copy__104","",1000,0,1.01);
   hframe_copy__104->SetMinimum(0.01);
   hframe_copy__104->SetMaximum(500000);
   hframe_copy__104->SetDirectory(0);
   hframe_copy__104->SetStats(0);
   hframe_copy__104->SetLineStyle(0);
   hframe_copy__104->SetMarkerStyle(20);
   hframe_copy__104->GetXaxis()->SetLabelFont(43);
   hframe_copy__104->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__104->GetXaxis()->SetLabelSize(0);
   hframe_copy__104->GetXaxis()->SetTitleSize(0);
   hframe_copy__104->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__104->GetXaxis()->SetTitleFont(43);
   hframe_copy__104->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__104->GetYaxis()->SetLabelFont(43);
   hframe_copy__104->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__104->GetYaxis()->SetLabelSize(27);
   hframe_copy__104->GetYaxis()->SetTitleSize(33);
   hframe_copy__104->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__104->GetYaxis()->SetTitleFont(43);
   hframe_copy__104->GetZaxis()->SetLabelFont(43);
   hframe_copy__104->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__104->GetZaxis()->SetLabelSize(27);
   hframe_copy__104->GetZaxis()->SetTitleSize(33);
   hframe_copy__104->GetZaxis()->SetTitleOffset(1);
   hframe_copy__104->GetZaxis()->SetTitleFont(43);
   hframe_copy__104->Draw("sameaxis");
   
   TH1F *hframe_copy__105 = new TH1F("hframe_copy__105","",1000,0,1.01);
   hframe_copy__105->SetMinimum(0.01);
   hframe_copy__105->SetMaximum(500000);
   hframe_copy__105->SetDirectory(0);
   hframe_copy__105->SetStats(0);
   hframe_copy__105->SetLineStyle(0);
   hframe_copy__105->SetMarkerStyle(20);
   hframe_copy__105->GetXaxis()->SetLabelFont(43);
   hframe_copy__105->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy__105->GetXaxis()->SetLabelSize(0);
   hframe_copy__105->GetXaxis()->SetTitleSize(0);
   hframe_copy__105->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy__105->GetXaxis()->SetTitleFont(43);
   hframe_copy__105->GetYaxis()->SetTitle("< Events / 0.05-0.10  >");
   hframe_copy__105->GetYaxis()->SetLabelFont(43);
   hframe_copy__105->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy__105->GetYaxis()->SetLabelSize(27);
   hframe_copy__105->GetYaxis()->SetTitleSize(33);
   hframe_copy__105->GetYaxis()->SetTitleOffset(1.5625);
   hframe_copy__105->GetYaxis()->SetTitleFont(43);
   hframe_copy__105->GetZaxis()->SetLabelFont(43);
   hframe_copy__105->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy__105->GetZaxis()->SetLabelSize(27);
   hframe_copy__105->GetZaxis()->SetTitleSize(33);
   hframe_copy__105->GetZaxis()->SetTitleOffset(1);
   hframe_copy__105->GetZaxis()->SetTitleFont(43);
   hframe_copy__105->Draw("sameaxis");
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
   MVAOutputM350_1->Modified();
   MVAOutputM350->cd();
   MVAOutputM350->Modified();
   MVAOutputM350->cd();
   MVAOutputM350->SetSelected(MVAOutputM350);
}
