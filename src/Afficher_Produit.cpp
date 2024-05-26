#include "../include/Afficher_Produit.h"
#include <iostream>
#include "../include/effacer_ecran.h"

using namespace std;

void Afficher_Produit(const vector<Produit>& Produits) {
    char choix;

    cout << "=============================================" << endl;
    cout << "               Produits disponibles" << endl;
    cout << "=============================================" << endl;
    for (const auto& article : Produits) {
        article.afficher_article();
        cout << endl;
    }

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
}
