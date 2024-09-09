#include "ArticleImporte.h"
ArticleImporte::ArticleImporte(int ref,string& desg,double prix,double tax):Article(ref,desg,prix)
{
    cout<<"\nAppel du constructeur pour la classe ArticleImporte adr="<<this<<endl;
    taxe=tax;
}

ArticleImporte::~ArticleImporte()
{
    cout<<"\nAppel du destructeur pour la classe ArticleImporte adr="<<this<<endl;
}
double ArticleImporte::prixArticle(){
    double p= (Article::prixArticle()+0.4*taxe);
    return p;
}
void ArticleImporte::afficher(){
    Article::afficher();
    cout<<"la taxe :"<<taxe<<endl;
}

