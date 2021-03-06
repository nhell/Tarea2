{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Fri May  6 09:42:33 2016) by ROOT version5.34/24
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->Range(0,0,1,1);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_n2_1
   TPad *c1_n2_1 = new TPad("c1_n2_1", "c1_n2_1",0.02,0.03,0.48,0.97);
   c1_n2_1->Draw();
   c1_n2_1->cd();
   c1_n2_1->Range(0,0,1,1);
   c1_n2_1->SetFillColor(0);
   c1_n2_1->SetBorderMode(0);
   c1_n2_1->SetBorderSize(2);
   c1_n2_1->SetLogy();
   c1_n2_1->SetFrameBorderMode(0);
   
   TH1F *muon2 = new TH1F("muon2","Masa reconstruida 2",90,50,160);
   muon2->SetBinContent(27,1);
   muon2->SetBinContent(32,1);
   muon2->SetBinContent(34,1);
   muon2->SetBinContent(35,2);
   muon2->SetBinContent(38,3);
   muon2->SetBinContent(39,2);
   muon2->SetBinContent(40,9);
   muon2->SetBinContent(41,9);
   muon2->SetBinContent(42,10);
   muon2->SetBinContent(43,11);
   muon2->SetBinContent(44,10);
   muon2->SetBinContent(45,11);
   muon2->SetBinContent(46,1857);
   muon2->SetBinContent(47,28);
   muon2->SetBinContent(48,9);
   muon2->SetBinContent(49,15);
   muon2->SetBinContent(50,10);
   muon2->SetBinContent(51,4);
   muon2->SetBinContent(52,1);
   muon2->SetBinContent(53,1);
   muon2->SetBinContent(54,2);
   muon2->SetBinContent(56,1);
   muon2->SetBinContent(58,1);
   muon2->SetBinContent(64,1);
   muon2->SetEntries(2000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   muon2->SetLineColor(ci);
   muon2->GetXaxis()->SetTitle(" Masa");
   muon2->GetXaxis()->SetLabelFont(42);
   muon2->GetXaxis()->SetLabelSize(0.035);
   muon2->GetXaxis()->SetTitleSize(0.035);
   muon2->GetXaxis()->SetTitleFont(42);
   muon2->GetYaxis()->SetTitle(" eventos");
   muon2->GetYaxis()->SetLabelFont(42);
   muon2->GetYaxis()->SetLabelSize(0.035);
   muon2->GetYaxis()->SetTitleSize(0.035);
   muon2->GetYaxis()->SetTitleFont(42);
   muon2->GetZaxis()->SetLabelFont(42);
   muon2->GetZaxis()->SetLabelSize(0.035);
   muon2->GetZaxis()->SetTitleSize(0.035);
   muon2->GetZaxis()->SetTitleFont(42);
   muon2->Draw("");
   
   TH1F *muon1 = new TH1F("muon1","Masa reconstruida 1",90,50,160);
   muon1->SetBinContent(17,1);
   muon1->SetBinContent(19,1);
   muon1->SetBinContent(20,1);
   muon1->SetBinContent(26,2);
   muon1->SetBinContent(28,1);
   muon1->SetBinContent(29,1);
   muon1->SetBinContent(31,2);
   muon1->SetBinContent(32,2);
   muon1->SetBinContent(33,2);
   muon1->SetBinContent(34,4);
   muon1->SetBinContent(35,6);
   muon1->SetBinContent(36,7);
   muon1->SetBinContent(37,9);
   muon1->SetBinContent(38,10);
   muon1->SetBinContent(39,23);
   muon1->SetBinContent(40,27);
   muon1->SetBinContent(41,37);
   muon1->SetBinContent(42,41);
   muon1->SetBinContent(43,66);
   muon1->SetBinContent(44,61);
   muon1->SetBinContent(45,99);
   muon1->SetBinContent(46,1193);
   muon1->SetBinContent(47,98);
   muon1->SetBinContent(48,78);
   muon1->SetBinContent(49,58);
   muon1->SetBinContent(50,55);
   muon1->SetBinContent(51,34);
   muon1->SetBinContent(52,35);
   muon1->SetBinContent(53,22);
   muon1->SetBinContent(54,7);
   muon1->SetBinContent(55,5);
   muon1->SetBinContent(56,2);
   muon1->SetBinContent(57,3);
   muon1->SetBinContent(59,3);
   muon1->SetBinContent(60,2);
   muon1->SetBinContent(61,1);
   muon1->SetBinContent(66,1);
   muon1->SetEntries(2000);

   ci = TColor::GetColor("#0000ff");
   muon1->SetLineColor(ci);
   muon1->GetXaxis()->SetTitle(" Masa");
   muon1->GetXaxis()->SetLabelFont(42);
   muon1->GetXaxis()->SetLabelSize(0.035);
   muon1->GetXaxis()->SetTitleSize(0.035);
   muon1->GetXaxis()->SetTitleFont(42);
   muon1->GetYaxis()->SetTitle(" eventos");
   muon1->GetYaxis()->SetLabelFont(42);
   muon1->GetYaxis()->SetLabelSize(0.035);
   muon1->GetYaxis()->SetTitleSize(0.035);
   muon1->GetYaxis()->SetTitleFont(42);
   muon1->GetZaxis()->SetLabelFont(42);
   muon1->GetZaxis()->SetLabelSize(0.035);
   muon1->GetZaxis()->SetTitleSize(0.035);
   muon1->GetZaxis()->SetTitleFont(42);
   muon1->Draw("same");
   
   TLegend *leg = new TLegend(-2.353437e-185,-2.353437e-185,-2.353437e-185,-2.353437e-185,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("muon1","Muon 1","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("muon2","Muon 2","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c1_n2_1->Modified();
   c1_n2->cd();
  
// ------------>Primitives in pad: c1_n2_2
   c1_n2_2 = new TPad("c1_n2_2", "c1_n2_2",0.52,0.03,0.98,0.97);
   c1_n2_2->Draw();
   c1_n2_2->cd();
   c1_n2_2->Range(0,0,1,1);
   c1_n2_2->SetFillColor(0);
   c1_n2_2->SetBorderMode(0);
   c1_n2_2->SetBorderSize(2);
   c1_n2_2->SetFrameBorderMode(0);
   
   TH1F *muonT = new TH1F("muonT","Masa invariante con errores",90,1.5,5.5);
   muonT->SetBinContent(12,45);
   muonT->SetBinContent(13,53);
   muonT->SetBinContent(14,66);
   muonT->SetBinContent(15,67);
   muonT->SetBinContent(16,52);
   muonT->SetBinContent(17,72);
   muonT->SetBinContent(18,50);
   muonT->SetBinContent(19,60);
   muonT->SetBinContent(20,47);
   muonT->SetBinContent(21,36);
   muonT->SetBinContent(22,62);
   muonT->SetBinContent(23,65);
   muonT->SetBinContent(24,60);
   muonT->SetBinContent(25,54);
   muonT->SetBinContent(26,56);
   muonT->SetBinContent(27,43);
   muonT->SetBinContent(28,50);
   muonT->SetBinContent(29,45);
   muonT->SetBinContent(30,37);
   muonT->SetBinContent(31,49);
   muonT->SetBinContent(32,41);
   muonT->SetBinContent(33,41);
   muonT->SetBinContent(34,37);
   muonT->SetBinContent(35,53);
   muonT->SetBinContent(36,78);
   muonT->SetBinContent(37,66);
   muonT->SetBinContent(38,44);
   muonT->SetBinContent(39,35);
   muonT->SetBinContent(40,19);
   muonT->SetBinContent(41,26);
   muonT->SetBinContent(42,25);
   muonT->SetBinContent(43,20);
   muonT->SetBinContent(44,23);
   muonT->SetBinContent(45,22);
   muonT->SetBinContent(46,23);
   muonT->SetBinContent(47,16);
   muonT->SetBinContent(48,29);
   muonT->SetBinContent(49,21);
   muonT->SetBinContent(50,22);
   muonT->SetBinContent(51,17);
   muonT->SetBinContent(52,14);
   muonT->SetBinContent(53,8);
   muonT->SetBinContent(54,20);
   muonT->SetBinContent(55,14);
   muonT->SetBinContent(56,11);
   muonT->SetBinContent(57,12);
   muonT->SetBinContent(58,12);
   muonT->SetBinContent(59,10);
   muonT->SetBinContent(60,7);
   muonT->SetBinContent(61,11);
   muonT->SetBinContent(62,10);
   muonT->SetBinContent(63,8);
   muonT->SetBinContent(64,8);
   muonT->SetBinContent(65,11);
   muonT->SetBinContent(66,14);
   muonT->SetBinContent(67,5);
   muonT->SetBinContent(68,9);
   muonT->SetBinContent(69,17);
   muonT->SetBinContent(70,8);
   muonT->SetBinContent(71,11);
   muonT->SetBinContent(72,4);
   muonT->SetBinContent(73,10);
   muonT->SetBinContent(74,6);
   muonT->SetBinContent(75,7);
   muonT->SetBinContent(76,2);
   muonT->SetBinContent(77,9);
   muonT->SetBinContent(78,8);
   muonT->SetBinContent(79,7);
   muonT->SetEntries(2000);

   ci = TColor::GetColor("#003300");
   muonT->SetLineColor(ci);
   muonT->GetXaxis()->SetTitle(" W (GeV/c^{2} ) ");
   muonT->GetXaxis()->SetLabelFont(42);
   muonT->GetXaxis()->SetLabelSize(0.035);
   muonT->GetXaxis()->SetTitleSize(0.035);
   muonT->GetXaxis()->SetTitleFont(42);
   muonT->GetYaxis()->SetTitle(" eventos");
   muonT->GetYaxis()->SetLabelFont(42);
   muonT->GetYaxis()->SetLabelSize(0.035);
   muonT->GetYaxis()->SetTitleSize(0.035);
   muonT->GetYaxis()->SetTitleFont(42);
   muonT->GetZaxis()->SetLabelFont(42);
   muonT->GetZaxis()->SetLabelSize(0.035);
   muonT->GetZaxis()->SetTitleSize(0.035);
   muonT->GetZaxis()->SetTitleFont(42);
   muonT->Draw("E1");
   c1_n2_2->Modified();
   c1_n2->cd();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
