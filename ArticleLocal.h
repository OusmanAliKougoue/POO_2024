#ifndef ARTICLELOCAL_H
#define ARTICLELOCAL_H
#include "Article.h"
#include <iostream>
#include <string>
using namespace std;
class ArticleLocal:public Article
{
private:
    double coutTransport;
public:
    ArticleLocal(int ref,string& desg,double prix,double cout);
    ~ArticleLocal();
    void afficher();
    double prixArticle();
};
#endif