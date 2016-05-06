void plot1()
{

	TFile *f1=new TFile("data_tree.root","READ");
	TTree *tree=0;
	tree =(TTree*) f1->Get("Data");

	TH2F *h3 = new TH2F("h3","energy vs TOF(chargetof); tof; energy (GeV)",30,0,30,600,0,6000);
	
	tree -> Draw("energy:chargetof>>h3","chargetof>0");
	
	TH1D *h4 = h3 -> ProfileX();

	TCanvas graf;
	graf.Divide(1,2);
	graf.cd(1);

	h3 -> SetMarkerStyle(7);
	h3 -> SetMarkerSize(0.55);
	h3 -> SetMarkerColor(kBlue);
	h3 -> Draw();
	
	gPad -> SetLogy();
	
	graf.cd(2);
	h4 -> Draw();

	graf.SaveAs("ams-tof.png");


}


