#ifndef PRODUIT_H
#define PRODUIT_H


#include <iostream>
#include <cstring>
#include <vector>
#include "Emplacement.h"

class Produit {
private:
    int reference;
    char* designation;
    int prix;
    int quantiteDisponible;
    Emplacement emplacement;

public:
    Produit(int ref = -1, const char* d = NULL, int p = -1, const char* z = NULL, int r = -1, int qu = -1, int e = -1);
    void afficher_article() const;
    int getreference() const;
    char* getrdesignation() const;
    int getprix() const;
    int getquantiteDisponible() const;
    char* get_emplacement_zone() const;
    int get_emplacement_rangee() const;
    int get_emplacement_etagere() const;
    void setreference(int ref);
    void setdesignation(const char* d);
    void setprix(int p);
    void setquantiteDisponible(int qu);
    void set_emplacement_zone(const char* z);
    void set_emplacement_rangee(int r);
    void set_emplacement_etagere(int e);
};

#endif
