
#include <iostream>
#include <string>
#include "Magasin.h"
#include "ArticleLocal.h"
#include "ArticleImporte.h"
#include "Article.h"
int main(){
    cout<<"---------------------ARTICLE----------------------------"<<endl;
    string s="Lait";
    Article A1(12126,s,6000.0);

    string s1="Sucre";
    Article A2(12143,s1,7000.0);

    A1.afficher();
    A2.afficher(); 
    cout<<"le prix d'achat :"<<A1.prixArticle()<<endl;
    cout<<"---------------------ARTICLE IMPORTE----------------------------"<<endl;
    string d1="laitCren";
    string d2="coca";
    ArticleImporte arti1(1212,d1,250.0,300.0),arti2(122,d2,270.0,350.0);
    arti1.afficher();

    cout<<"---------------------ARTICLE LOCAL----------------------------"<<endl;
    string d3="savon";
    string d4="couscous";
    string d5="riz";
    ArticleLocal arti3(12122,d3,250.0,1800.0),arti4(33122,d4,650.0,5200.0),arti5(10002,d5,1000.0,960.3);
    arti3.afficher();

    cout<<"---------------------MAGASIN----------------------------"<<endl;
    Magasin M(100);

    M.ajouter(&arti1);
    M.ajouter(&arti2);
    M.ajouter(&arti3);
    M.ajouter(&arti4);
    M.ajouter(&arti5);

    M.afficher();
    cout<<endl;
    cout<<"le prix total des articles en stocks est :"<<M.calculprixTotal()<<endl;
    return 0;
}