#ifndef MAGASIN_H
#define MAGASIN_H
#include "Article.h"
#include <iostream>
#include <string>
using namespace std;
class Magasin
{
private:
    int nbArticle;
    int nb;
    Article** tab;
public:
    Magasin(int n);
    ~Magasin();
    void ajouter(Article* a);
    void afficher();
    double calculprixTotal();
    
};
#endif