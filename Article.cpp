#include "Article.h"
Article::Article(int ref,string& desg,double prix)
{
    cout<<"\nAppel du constructeur pour la classe Article adr="<<this<<endl;
    reference=ref;
    designation=desg;
    prixAchat=prix;
}

Article::~Article()
{
    cout<<"\nAppel du destructeur pour la classe Article adr="<<this<<endl;
}
void Article::afficher(){
    cout<<"numero de reference :"<<reference<<endl;
    cout<<" designation :"<<designation<<endl;
    cout<<" le prix d'achat :"<<prixAchat<<endl;
}
double Article::prixArticle(){
    return prixAchat;
}
