#include "Modifier_Produit.h"
#include <iostream>
#include "effacer_ecran.h"

using namespace std;

void Modifier_Produit(vector<Produit>& Produits) {
    int ref;
    int choixAttribut;
    int nouvel_attribut;
    char nouvelle_designation[100];
    char nouvelle_zone[100];

    effacer_ecran();
    cout << "=============================================" << endl;
    cout << "             Modifier un Produit !" << endl;
    cout << "=============================================" << endl;

    cout << "Entrez la référence de Produit à modifier : ";
    cin >> ref;
    effacer_ecran();

    bool articleTrouve = false;
    for (auto& article : Produits) {
        if (article.getreference() == ref) {
            articleTrouve = true;
            cout << "===================================================" << endl;
            cout << " Article trouvé. Choisissez l'attribut à modifier" << endl;
            cout << "===================================================" << endl;
            cout << "1. Designation de Produit" << endl;
            cout << "2. Prix de Produit" << endl;
            cout << "3. Quantite disponible de Produit" << endl;
            cout << "4. Zone de l'emplacement" << endl;
            cout << "5. Rangee de l'emplacement" << endl;
            cout << "6. Etagere de l'emplacement" << endl;
            cout << "Entrez le numéro correspondant à votre choix : ";
            cin >> choixAttribut;

            switch (choixAttribut) {
                case 1:
                    cout << "Entrez la nouvelle désignation du produit : ";
                    cin.ignore();
                    cin.getline(nouvelle_designation, 100);
                    article.setdesignation(nouvelle_designation);
                    break;
                case 2:
                    cout << "Entrez le nouveau prix du produit : ";
                    cin >> nouvel_attribut;
                    article.setprix(nouvel_attribut);
                    break;
                case 3:
                    cout << "Entrez la nouvelle quantité disponible : ";
                    cin >> nouvel_attribut;
                    article.setquantiteDisponible(nouvel_attribut);
                    break;
                case 4:
                    cout << "Entrez la nouvelle zone de l'emplacement : ";
                    cin.ignore();
                    cin.getline(nouvelle_zone, 100);
                    article.set_emplacement_zone(nouvelle_zone);
                    break;
                case 5:
                    cout << "Entrez la nouvelle rangée de l'emplacement : ";
                    cin >> nouvel_attribut;
                    article.set_emplacement_rangee(nouvel_attribut);
                    break;
                case 6:
                    cout << "Entrez la nouvelle étagère de l'emplacement : ";
                    cin >> nouvel_attribut;
                    article.set_emplacement_etagere(nouvel_attribut);
                    break;
                default:
                    cout << "Choix invalide." << endl;
                    break;
            }

            effacer_ecran();
            cout << "Produit modifié avec succès." << endl;
            return;
        }
    }

    if (!articleTrouve) {
        cout << "Article non trouvé." << endl;
    }
}
