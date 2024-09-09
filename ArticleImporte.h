#ifndef ARTICLEIMPORTE_H
#define ARTICLEIMPORTE_H
#include "Article.h"
#include <iostream>
#include <string>
using namespace std;
class ArticleImporte :public Article
{
private:
    double taxe;
public:
    ArticleImporte(int ref,string& desg,double prix,double tax);
    ~ArticleImporte();
    void afficher();
    double prixArticle();
    
};
#endif