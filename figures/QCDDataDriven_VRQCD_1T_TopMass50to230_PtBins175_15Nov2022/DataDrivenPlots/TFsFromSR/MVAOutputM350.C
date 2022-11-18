void MVAOutputM350()
{
//=========Macro generated from canvas: MVAOutputM350/MVAOutputM350
//=========  (Fri Nov 18 13:27:39 2022) by ROOT version 6.20/02
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
   
   Double_t BackgroundStatSystError_fx3057[19] = {
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
   Double_t BackgroundStatSystError_fy3057[19] = {
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
   Double_t BackgroundStatSystError_felx3057[19] = {
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
   Double_t BackgroundStatSystError_fely3057[19] = {
   0.0677445,
   0.06640258,
   0.0585817,
   0.05136036,
   0.04877682,
   0.04933632,
   0.04901108,
   0.04866797,
   0.05120143,
   0.0517205,
   0.05589596,
   0.06076624,
   0.0678382,
   0.09185945,
   0.1091558,
   0.1551229,
   0.1837726,
   0.5388753,
   1};
   Double_t BackgroundStatSystError_fehx3057[19] = {
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
   Double_t BackgroundStatSystError_fehy3057[19] = {
   0.0677445,
   0.06640258,
   0.0585817,
   0.05136036,
   0.04877682,
   0.04933632,
   0.04901108,
   0.04866797,
   0.05120143,
   0.0517205,
   0.05589596,
   0.06076624,
   0.0678382,
   0.09185945,
   0.1091558,
   0.1551229,
   0.1837726,
   0.5388753,
   1};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,BackgroundStatSystError_fx3057,BackgroundStatSystError_fy3057,BackgroundStatSystError_felx3057,BackgroundStatSystError_fehx3057,BackgroundStatSystError_fely3057,BackgroundStatSystError_fehy3057);
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
   
   TH1F *Graph_Graph_Graph_BackgroundStatSystError304930533057 = new TH1F("Graph_Graph_Graph_BackgroundStatSystError304930533057","Graph",100,0,1.1);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMinimum(-0.2);
   Graph_Graph_Graph_BackgroundStatSystError304930533057->SetMaximum(2.2);
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
   0.0677445,
   0.06640258,
   0.0585817,
   0.05136036,
   0.04877682,
   0.04933632,
   0.04901108,
   0.04866797,
   0.05120143,
   0.0517205,
   0.05589596,
   0.06076624,
   0.0678382,
   0.09185945,
   0.1091558,
   0.1551229,
   0.1837726,
   0.5388753,
   1};
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
   0.0677445,
   0.06640258,
   0.0585817,
   0.05136036,
   0.04877682,
   0.04933632,
   0.04901108,
   0.04866797,
   0.05120143,
   0.0517205,
   0.05589596,
   0.06076624,
   0.0678382,
   0.09185945,
   0.1091558,
   0.1551229,
   0.1837726,
   0.5388753,
   1};
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
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMinimum(-0.2);
   Graph_Graph_Graph_BackgroundStatError305030543058->SetMaximum(2.2);
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
   0.992031,
   0.9103075,
   0.9430227,
   0.9959946,
   0.9284606,
   1.043363,
   1.027822,
   0.9830152,
   1.047528,
   1.050019,
   1.075891,
   1.004596,
   0.9890475,
   1.272614,
   1.240109,
   1.45794,
   0.7666009,
   0.939581};
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
   0.04935539,
   0.04682117,
   0.04175775,
   0.03775308,
   0.03462574,
   0.03721551,
   0.03684919,
   0.0353566,
   0.03837846,
   0.03875692,
   0.04286451,
   0.04497192,
   0.04963887,
   0.07646394,
   0.08996698,
   0.1359536,
   0.1169055,
   0.3835823};
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
   0.04935539,
   0.04682117,
   0.04175775,
   0.03775308,
   0.03462574,
   0.03721551,
   0.03684919,
   0.0353566,
   0.03837846,
   0.03875692,
   0.04286451,
   0.04497192,
   0.04963887,
   0.07646394,
   0.08996698,
   0.1359536,
   0.1169055,
   0.3835823};
   grae = new TGraphAsymmErrors(18,Graph1_fx3059,Graph1_fy3059,Graph1_felx3059,Graph1_fehx3059,Graph1_fely3059,Graph1_fehy3059);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(3001);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1305130553059 = new TH1F("Graph_Graph_Graph_Graph1305130553059","Graph",100,0,1.045);
   Graph_Graph_Graph_Graph1305130553059->SetMinimum(0.4522091);
   Graph_Graph_Graph_Graph1305130553059->SetMaximum(1.697683);
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
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMinimum(6.290849);
   StackedMCstackHist_stack_13_stack_14_stack_15->SetMaximum(25163.4);
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
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(1,57.9087);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(2,77.61466);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(3,130.5845);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(4,240.9673);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(5,224.0435);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(6,289.9104);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(7,152.9283);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(8,154.3138);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(9,163.0189);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(10,160.4955);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(11,171.0215);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(12,138.4797);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(13,79.88679);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(14,94.87498);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(15,41.38052);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(16,39.88935);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(17,3.152043);
   tEWttX_stack_1_stack_1_stack_1->SetBinContent(18,6.899149);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(1,9.772074);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(2,17.88075);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(3,20.38301);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(4,52.78358);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(5,28.4597);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(6,52.19362);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(7,21.315);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(8,21.74208);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(9,24.57274);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(10,35.94438);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(11,40.53708);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(12,25.9953);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(13,18.31173);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(14,29.69717);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(15,13.89917);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(16,14.46118);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(17,2.266554);
   tEWttX_stack_1_stack_1_stack_1->SetBinError(18,4.988246);
   tEWttX_stack_1_stack_1_stack_1->SetEntries(355.8345);
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
   TT_stack_2_stack_2_stack_2->SetBinContent(1,616.2449);
   TT_stack_2_stack_2_stack_2->SetBinContent(2,1378.031);
   TT_stack_2_stack_2_stack_2->SetBinContent(3,1590.271);
   TT_stack_2_stack_2_stack_2->SetBinContent(4,2027.018);
   TT_stack_2_stack_2_stack_2->SetBinContent(5,2261.707);
   TT_stack_2_stack_2_stack_2->SetBinContent(6,2374.813);
   TT_stack_2_stack_2_stack_2->SetBinContent(7,2649.048);
   TT_stack_2_stack_2_stack_2->SetBinContent(8,2393.785);
   TT_stack_2_stack_2_stack_2->SetBinContent(9,2307.499);
   TT_stack_2_stack_2_stack_2->SetBinContent(10,2221.338);
   TT_stack_2_stack_2_stack_2->SetBinContent(11,2094.338);
   TT_stack_2_stack_2_stack_2->SetBinContent(12,1683.419);
   TT_stack_2_stack_2_stack_2->SetBinContent(13,1298.149);
   TT_stack_2_stack_2_stack_2->SetBinContent(14,897.3416);
   TT_stack_2_stack_2_stack_2->SetBinContent(15,570.2669);
   TT_stack_2_stack_2_stack_2->SetBinContent(16,237.5339);
   TT_stack_2_stack_2_stack_2->SetBinContent(17,95.26399);
   TT_stack_2_stack_2_stack_2->SetBinContent(18,13.75866);
   TT_stack_2_stack_2_stack_2->SetBinContent(19,1.258568);
   TT_stack_2_stack_2_stack_2->SetBinError(1,19.46956);
   TT_stack_2_stack_2_stack_2->SetBinError(2,40.95458);
   TT_stack_2_stack_2_stack_2->SetBinError(3,43.89309);
   TT_stack_2_stack_2_stack_2->SetBinError(4,49.97687);
   TT_stack_2_stack_2_stack_2->SetBinError(5,52.11783);
   TT_stack_2_stack_2_stack_2->SetBinError(6,53.95545);
   TT_stack_2_stack_2_stack_2->SetBinError(7,57.02618);
   TT_stack_2_stack_2_stack_2->SetBinError(8,54.01209);
   TT_stack_2_stack_2_stack_2->SetBinError(9,53.27869);
   TT_stack_2_stack_2_stack_2->SetBinError(10,52.23988);
   TT_stack_2_stack_2_stack_2->SetBinError(11,51.0685);
   TT_stack_2_stack_2_stack_2->SetBinError(12,45.65202);
   TT_stack_2_stack_2_stack_2->SetBinError(13,40.30413);
   TT_stack_2_stack_2_stack_2->SetBinError(14,33.29145);
   TT_stack_2_stack_2_stack_2->SetBinError(15,26.61106);
   TT_stack_2_stack_2_stack_2->SetBinError(16,17.21908);
   TT_stack_2_stack_2_stack_2->SetBinError(17,11.14487);
   TT_stack_2_stack_2_stack_2->SetBinError(18,3.882235);
   TT_stack_2_stack_2_stack_2->SetBinError(19,1.258568);
   TT_stack_2_stack_2_stack_2->SetEntries(22010.62);
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
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(1,3398.3);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(2,6849.24);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(3,9095.426);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(4,11707.99);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(5,13002.25);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(6,12401.95);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(7,12336.84);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(8,13179.02);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(9,11753.44);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(10,11598.86);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(11,9445.867);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(12,8112.438);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(13,6649.89);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(14,3361.029);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(15,2452.599);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(16,1300.145);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(17,1023.419);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinContent(18,107.0587);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(1,275.0249);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(2,549.6522);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(3,631.7854);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(4,714.1214);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(5,753.118);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(6,739.5338);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(7,739.4679);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(8,763.1894);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(9,725.9199);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(10,720.3028);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(11,651.355);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(12,601.382);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(13,542.7978);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(14,397.3905);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(15,333.1301);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(16,243.6817);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(17,205.8487);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetBinError(18,68.53239);
   BkgSummISRmIInclusive_stack_3_stack_3_stack_3->SetEntries(3146.941);
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
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(1,3.399162);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(2,12.04814);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(3,10.55042);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(4,8.248387);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(5,10.2469);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(6,15.58191);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(7,13.62513);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(8,13.44548);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(9,14.19329);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(10,4.150855);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(11,6.941779);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(12,4.282963);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(13,-1.430207);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(14,-1.786553);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(15,1.827858);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(16,-0.555169);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinContent(17,0.9076095);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(1,2.868264);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(2,5.67738);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(3,5.27462);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(4,5.796112);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(5,6.017698);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(6,6.085864);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(7,5.541242);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(8,5.447021);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(9,4.939013);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(10,4.152236);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(11,3.576829);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(12,3.298914);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(13,2.610897);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(14,2.179334);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(15,1.348968);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(16,1.067892);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetBinError(17,0.6417918);
   ChargedHiggs_HplusTBHplusToTB_M_800__102->SetEntries(42.37947);
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
   4072.453,
   8304.886,
   10816.28,
   13975.98,
   15488,
   15066.67,
   15138.81,
   15727.12,
   14223.96,
   13980.7,
   11711.23,
   9934.337,
   8027.926,
   4353.246,
   3064.246,
   1577.568,
   1121.835,
   127.7165,
   1.258568};
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
   275.8863,
   551.4658,
   633.6362,
   717.8113,
   755.4555,
   743.3341,
   741.9697,
   765.4071,
   728.2871,
   723.0886,
   654.6102,
   603.6723,
   544.6,
   399.8868,
   334.4802,
   244.717,
   206.1626,
   68.82327,
   1.258568};
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
   275.8863,
   551.4658,
   633.6362,
   717.8113,
   755.4555,
   743.3341,
   741.9697,
   765.4071,
   728.2871,
   723.0886,
   654.6102,
   603.6723,
   544.6,
   399.8868,
   334.4802,
   244.717,
   206.1626,
   68.82327,
   1.258568};
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
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMinimum(0.3775705);
   Graph_Graph_Graph_BkgSummISRmIInclusive_sum_errors305230563060->SetMaximum(18141.74);
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
   Data__103->SetBinContent(1,4040);
   Data__103->SetBinContent(2,7560);
   Data__103->SetBinContent(3,10200);
   Data__103->SetBinContent(4,13920);
   Data__103->SetBinContent(5,14380);
   Data__103->SetBinContent(6,15720);
   Data__103->SetBinContent(7,15560);
   Data__103->SetBinContent(8,15460);
   Data__103->SetBinContent(9,14900);
   Data__103->SetBinContent(10,14680);
   Data__103->SetBinContent(11,12600);
   Data__103->SetBinContent(12,9980);
   Data__103->SetBinContent(13,7940);
   Data__103->SetBinContent(14,5540);
   Data__103->SetBinContent(15,3800);
   Data__103->SetBinContent(16,2300);
   Data__103->SetBinContent(17,860);
   Data__103->SetBinContent(18,120);
   Data__103->SetBinError(1,200.9975);
   Data__103->SetBinError(2,388.8444);
   Data__103->SetBinError(3,451.6636);
   Data__103->SetBinError(4,527.6362);
   Data__103->SetBinError(5,536.2835);
   Data__103->SetBinError(6,560.7138);
   Data__103->SetBinError(7,557.853);
   Data__103->SetBinError(8,556.0576);
   Data__103->SetBinError(9,545.8938);
   Data__103->SetBinError(10,541.8487);
   Data__103->SetBinError(11,501.996);
   Data__103->SetBinError(12,446.7662);
   Data__103->SetBinError(13,398.4972);
   Data__103->SetBinError(14,332.8663);
   Data__103->SetBinError(15,275.681);
   Data__103->SetBinError(16,214.4761);
   Data__103->SetBinError(17,131.1488);
   Data__103->SetBinError(18,48.98979);
   Data__103->SetEntries(8580.218);
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
