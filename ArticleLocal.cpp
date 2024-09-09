#include "ArticleLocal.h"
 ArticleLocal::ArticleLocal(int ref,string& desg,double prix,double cout):Article(ref,desg,prix)
 {
    std::cout<<"\nAppel du constructeur pour la classe Articlelocal adr="<<this<<endl;
     coutTransport=cout;
 }
    ArticleLocal::~ArticleLocal(){
         cout<<"\nAppel du destructeur pour la classe Articlelocal adr="<<this<<endl;

    }
   
    double ArticleLocal::prixArticle(){
    double p= (Article::prixArticle()+coutTransport);
    return p;
}
 void ArticleLocal::afficher(){
        Article::afficher();
        cout<<" le cout de transport :"<<coutTransport<<endl;

    }   