#include "Magasin.h"
Magasin::Magasin(int n){
    cout<<"\nAppel du constructeur pour la classe Magasin adr="<<this<<endl;
    nbArticle=n;
    nb=0;
    tab=new Article*[nbArticle];

}
    Magasin::~Magasin(){
        cout<<"\nAppel du destructeur pour la classe Magasin adr="<<this<<endl;
        if(tab)
        delete [] tab;

    }
    void Magasin::ajouter(Article* a){
        if(nb< nbArticle){
            tab[nb++]=a;
        }
        else{
            cout<<"le magasin est plein !"<<endl;
        }

    }
    void Magasin::afficher(){
        for(int i= 0; i < nb; i++){
            tab[i]->afficher();
            cout<<"le prix :"<<tab[i]->prixArticle();
            cout<<endl;
        }

    }
    double Magasin::calculprixTotal(){
        double pT=0.0;
        for(int i= 0; i < nb; i++){
            pT+=tab[i]->prixArticle();
        }
        return pT;
    }
    