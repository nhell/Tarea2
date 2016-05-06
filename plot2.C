

void plot2( )
{
	TTree *data= new TTree("data","cms");
	data->ReadFile("Jpsi.csv");			

	//histogramas para cada branch
	TH1F *muon1 = new TH1F("muon1","muon1",90,50,160);
	TH1F *muon2 = new TH1F("muon2","muon2",90,50,160);
	TH1F *muonT = new TH1F("muonT","muonT",90,1.5,5.5);
	
	//Masas de las particulas considerando C=1 y aumentando la escala de los E1 y E2

	data->Draw("1000*sqrt(E1^2-px1^2-py1^2-pz1^2)>>muon1");
	data->Draw("1000*sqrt(E2^2-px2^2-py2^2-pz2^2)>>muon2");
	data->Draw("sqrt((E1+E2)^2-(px1+px2)^2-(py1+py2)^2-(pz1+pz2)^2)>>muonT");

	gStyle->SetOptStat(0);
	TCanvas graf;
	graf.Divide(2,1,0.02,0.03);
	graf.cd(1);

	muon1->SetLineColor(kBlue);
	muon2->SetLineColor(kRed);
	
	muon1 -> SetTitle("Masa reconstruida 1; Masa; eventos");
	muon2 -> SetTitle("Masa reconstruida 2; Masa; eventos");
	muon2 -> Draw();
	muon1->Draw("same");
	
	gPad -> SetLogy();

        TLegend *link = new TLegend(0.18,0.55,0.65,0.70,NULL,"brNDC");
        link->SetLineColor(0);
        link->SetFillColor(0);
        link->SetFillStyle(0);
        TLegendEntry *entry=link->AddEntry(muon1,"Muon 1","LPE");
        TLegendEntry *entry=link->AddEntry(muon2,"Muon 2","LPE");
	link->Draw();

	graf.cd(2);

	muonT->SetLineColor(kGreen+4);
	muonT -> SetTitle("Masa invariante con errores; W (GeV/c^{2} ) ; eventos");
	muonT -> Draw("E1");

	graf.SaveAs("Pregunta2.C");
        graf.SaveAs("pregunta2.png");

}
