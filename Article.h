#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream> 
#include <string>
using namespace std;
class Article
{
private:
   int reference;
   string designation;
   double prixAchat;
public:
    Article(int ref,string& desg,double prix);
    virtual ~Article();
    virtual void afficher();
    virtual double prixArticle();
   
};
#endif