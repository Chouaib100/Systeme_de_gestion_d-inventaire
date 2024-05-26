#include "../include/Creer_Produit.h"
#include <iostream>
#include "../include/effacer_ecran.h"

using namespace std;

void Creer_Produit(vector<Produit>& Produits) {
    int reference, prix, quantiteDisponible, emplacementRangee, emplacementEtagere;
    char designation[100], emplacementZone[100];

    effacer_ecran();
    cout << "=============================================" << endl;
    cout << "            Ajouter un nouveau produit" << endl;
    cout << "=============================================" << endl;

    cout << "Entrez la référence du produit : ";
    cin >> reference;
    cin.ignore();
    cout << "Entrez la désignation du produit : ";
    cin.getline(designation, 100);
    cout << "Entrez le prix du produit : ";
    cin >> prix;
    cout << "Entrez la quantité disponible : ";
    cin >> quantiteDisponible;
    cin.ignore();
    cout << "Entrez la zone de l'emplacement : ";
    cin.getline(emplacementZone, 100);
    cout << "Entrez la rangée de l'emplacement : ";
    cin >> emplacementRangee;
    cout << "Entrez l'étagère de l'emplacement : ";
    cin >> emplacementEtagere;

    Produit nouveauProduit(reference, designation, prix, emplacementZone, emplacementRangee, emplacementEtagere, quantiteDisponible);
    Produits.push_back(nouveauProduit);

    effacer_ecran();
    cout << "Produit ajouté avec succès." << endl;
}
