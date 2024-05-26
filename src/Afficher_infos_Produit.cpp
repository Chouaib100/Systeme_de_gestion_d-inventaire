#include "../include/Afficher_infos_Produit.h"
#include <iostream>
#include "../include/effacer_ecran.h"

using namespace std;

void Afficher_informations_Produit(const vector<Produit>& Produits) {
    int ref;
    int choixAttribut;

    cout << "Entrez la reference de Produit : ";
    cin >> ref;

    bool articleTrouve = false;
    for (const auto& article : Produits) {
        if (article.getreference() == ref) {
            articleTrouve = true;
            cout << "=============================================" << endl;
            cout << "               Article trouve" << endl;
            cout << "=============================================" << endl;
            cout << "Choisissez l'attribut à rechercher :" << endl;
            cout << "1. Designation de Produit" << endl;
            cout << "2. Prix de Produit" << endl;
            cout << "3. Quantite disponible de Produit" << endl;
            cout << "4. Zone de l'emplacement" << endl;
            cout << "5. Rangee de l'emplacement" << endl;
            cout << "6. Etagere de l'emplacement" << endl;
            cout << "7. Annuler" << endl;
            cout << "Entrez le numéro de votre choix : ";
            cin >> choixAttribut;

            switch (choixAttribut) {
                case 1:
                    effacer_ecran();
                    cout << "Designation de Produit : " << article.getrdesignation() << endl;
                    break;
                case 2:
                    effacer_ecran();
                    cout << "Prix de Produit : " << article.getprix() << " dirhams" << endl;
                    break;
                case 3:
                    effacer_ecran();
                    cout << "Quantite disponible de Produit : " << article.getquantiteDisponible() << endl;
                    break;
                case 4:
                    effacer_ecran();
                    cout << "Zone de l'emplacement : " << article.get_emplacement_zone() << endl;
                    break;
                case 5:
                    effacer_ecran();
                    cout << "Rangee de l'emplacement : " << article.get_emplacement_rangee() << endl;
                    break;
                case 6:
                    effacer_ecran();
                    cout << "Etagere de l'emplacement : " << article.get_emplacement_etagere() << endl;
                    break;
                case 7:
                    effacer_ecran();
                    cout << "Operation annulee." << endl;
                    break;
                default:
                    cout << "Choix invalide." << endl;
            }

            char choix;
            do {
                cout << "Appuyez sur 'm' pour revenir au menu principal ou 'q' pour quitter : ";
                cin >> choix;

                if (choix == 'm') {
                    effacer_ecran();
                    return;
                } else if (choix == 'q') {
                    effacer_ecran();
                    cout << "=============================================" << endl;
                    cout << "                  Au revoir !" << endl;
                    cout << "=============================================" << endl;
                    exit(0);
                }
            } while (true);
            break;
        }
    }

    if (!articleTrouve) {
        cout << "Produit non trouve." << endl;
    }
}
