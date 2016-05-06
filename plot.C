const Double_t binning[75] = {0.5, 0.65, 0.82, 1.01, 1.22, 1.46, 1.72, 2.00, 2.31, 2.65, 3.00, 3.36, 3.73, 4.12, 4.54, 5.00, 5.49, 6.00, 6.54, 7.10, 7.69, 8.30, 8.95, 9.62, 10.3, 11.0, 11.8, 12.6, 13.4, 14.2, 15.1, 16.1, 17.0, 18.0, 19.0, 20.0, 21.1, 22.2, 23.4, 24.6, 25.9, 27.2, 28.7, 30.2, 31.8, 33.5, 35.4, 37.3, 39.4, 41.6, 44.0, 46.6, 49.3, 52.3, 55.6, 59.1, 63.0, 67.3, 72.0, 77.4, 83.4, 90.2, 98.0, 107.0, 118.0, 132.0, 149.0, 170.0, 198.0, 237.0, 290.0, 370.0, 500.0, 700.0, 1000.0};


void plot()
{

	TFile *f1=new TFile("data_tree.root","READ");
	TTree *tree=0;
	tree =(TTree*) f1->Get("Data");



	TH1F *h=new TH1F("h","energy(no cut)",74,binning);
	TH1F *h1=new TH1F("h1","energy(cut-1)",74,binning);
	TH1F *h2= new TH1F("h2","enery(cut-2)",74,binning);

	tree->Draw("energy>>h");
	tree->Draw("energy>>h1","betahval>0.5","Same");
	tree-> Draw("energy>>h2","inside_tracker==1 && trchisqx>0 && trchisqx<10 && trchisqy>0 && trchisqy<10","Same");
	gPad->SetLogy();

	h->SetLineColor(kRed);
	h1->SetLineColor(kBlue);
	h2->SetLineColor(kGreen);

	TEfficiency *eff1 = new TEfficiency( (const TH1) h1, (const TH1) h);
	TEfficiency *eff2 = new TEfficiency( (const TH1) h2, (const TH1) h);

	eff1-> Paint();
	eff2-> Paint();
	TGraphAsymmErrors *geff1 = eff1->GetPaintedGraph();
	TGraphAsymmErrors *geff2 = eff2->GetPaintedGraph();

	geff1->SetLineColor(kPink+10);
	geff2->SetLineColor(kGreen+4);


	TCanvas graf;
	TH1F *title = graf.DrawFrame(0,0,1000,1);
	geff1->Draw("P");
	geff2->Draw("P");

	title->SetTitle(" Cortes de Eficiencias ; Energia[GeV]; Eficiencia");
	graf.SetLogx();
	
   	TLegend *link = new TLegend(0.18,0.60,0.70,0.70,NULL,"brNDC");
       	TLegendEntry *entry=link->AddEntry(geff1,"BetaHval > 0.5","LPE");
    	TLegendEntry *entry=link->AddEntry(geff2,"Tracker && 0<trchisqx<10 && 0<trchisqy<10","LPE");
	link->Draw();


	graf.SaveAs("AMS-02.png");



}

