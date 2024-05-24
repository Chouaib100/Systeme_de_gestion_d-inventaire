#ifndef EXECUTER_MENU_H
#define EXECUTER_MENU_H

#include <vector>
#include "Produit.h"
#include "Creer_Produit.h"
#include "Afficher_infos_Produit.h"
#include "Modifier_Produit.h"
#include "Afficher_Produit.h"
#include "Supprimer_Produit.h"
#include "Trier_Produit.h"
#include "quantite_nulle.h"
#include "effacer_ecran.h"
#include "Afficher_menu.h"

using namespace std;

void executer_menu(vector<Produit>& Produits);

#endif
