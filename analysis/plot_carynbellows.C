void plot_carynbellows(int b = 70){
   //Tfile
  //TString filename="/volatile/halla/moller12gev/palatchi/remoll_bellows_beam_100M/remoll_bellows_beam_100M_100kEv";

  TString filename = "__carynplots.root";
  TFile *_file0 = TFile::Open(Form("det%d%s",b,filename.Data()));
  TDirectory *d = _file0->GetDirectory("QA");
    TCanvas *c1 = new TCanvas("c1","c1",0,0,1600,850);
    c1->Divide(4,2);
    vector<string> hNms = {"hE","hphi","hthetaP","hradius",
			   "hE_ecut","hphi_ecut","hthetaP_ecut","hradius_ecut"};

    int logx[] = {1,0,0,0,
		1,0,0,0};
    int logy[] = {1,0,1,1,
		1,0,1,1};

    TExec* ex1 = new TExec("ex1","gStyle->SetOptStat(1111);");
    ex1->Draw();
    //    gStyle->SetOptStat("eMRoui");
    TH1D *h;
    for(int i=0;i<hNms.size();i++){
      c1->cd(1+i);
      c1->cd(1+i)->SetLogx(logx[i]);
      c1->cd(1+i)->SetLogy(logy[i]);
      h=(TH1D*)d->Get(hNms[i].c_str());
      h->Draw();
       }

    //2D plots
    //    gStyle->SetOptStat(0);
    TExec* ex2 = new TExec("ex2","gStyle->SetOptStat(0);");
    TCanvas *c2a = new TCanvas("c2a","c2a",0,0,1600,650);
    ex2->Draw();
    c2a->Divide(4,2);
    vector<string> hNms2a = {"hetheta","hetheta_cut15","hethetaVSz","hethetaVSz_cut15",
"hetheta_ecut","hetheta_cut15ecut","hethetaVSz_ecut","hethetaVSz_cut15ecut"    };
    int logx2a[] = {0,0,0,0,
		0,0,0,0};
    int logy2a[] = {0,0,0,0,
		0,0,0,0};
    int logz2a[] = {0,0,1,1,
		0,0,1,1};


    TH2D *h2a;
    for(int i=0;i<hNms2a.size();i++){
      c2a->cd(1+i);
      c2a->cd(1+i)->SetLogx(logx2a[i]);
      c2a->cd(1+i)->SetLogy(logy2a[i]);
      c2a->cd(1+i)->SetLogz(logz2a[i]);
      h2a=(TH2D*)d->Get(hNms2a[i].c_str());
      h2a->Draw("colz");
      h2a->GetYaxis()->SetTitleOffset(1.5);
       }

    //    gStyle->SetOptStat(0);

    TCanvas *c2b = new TCanvas("c2b","c2b",0,0,1600,650);
    c2b->Divide(4,2);
    ex2->Draw();
    vector<string> hNms2b = {"hzfront","hzback","hrin","hrout",
			     "hzfront_ecut","hzback_ecut","hrin_ecut","hrout_ecut"};
    int logx2b[] = {0,0,0,0,
		0,0,0,0};
    int logy2b[] = {0,0,0,0,
		0,0,0,0};

    TH2D *h2b;
    for(int i=0;i<hNms2b.size();i++){
      c2b->cd(1+i);
      c2b->cd(1+i)->SetLogx(logx2b[i]);
      c2b->cd(1+i)->SetLogy(logy2b[i]);
      h2b=(TH2D*)d->Get(hNms2b[i].c_str());
      h2b->Draw("colz");
      h2b->GetYaxis()->SetTitleOffset(1);
       }


  
  //TH1D *h = (TH1D*)fin->Get(hNms[i].c_str());
  //h->SetLineWidth(1);
  //h->GetYaxis()->SetRangeUser(1,1500);
  //h->DrawCopy("h");
  //gPad->SetGridx(1);
  //gPad->SetLogx(1);

  //QA tree
  //    TTree *QA = (TTree*)_file0->Get("QA");
  //Canvas
    // c1->cd();
    // QA->cd();
    // hE->Draw();
    // c1->SetLogy();
    // c1->SetLogx();

    // c1->SetLogx(0);

    // c1->SetLogy(0);
    // hphi->Draw();

    // hthetaP->Draw();
    // c1->SetLogy();

    // hradius->Draw();

    // c1->Logy(0);
    // hetheta->Draw("colz");
    // c1->Logx();
    // c1->Logy();

    // c1->Logx(0);
    // c1->Logy(0);
    // hzfront->Draw("colz");

    // hzback->Draw("colz");

    // hrin->Draw("colz");

    // hrout->Draw("colz");

    
    //      TH1D* hE = (TH1D*)gDirectory->FindObject("hE");
    //	hE->Draw();


  //hE->Draw()??
    //_file0->cd("QA");
    //     QA->Get("hE");
    //  _file0->Get("hE");
    //       qa->FindObject("hE");
    //TH1D* h =   (TH1D*)qa->Get("hE");
     //     QA->Draw("hE");
    //    _file0->Draw("hE");
     // qa->Draw("h");
    //    qa->h.Draw();
    //       c1->SetLogy();
    //       c1->SetLogx();
  //savePDF

}
