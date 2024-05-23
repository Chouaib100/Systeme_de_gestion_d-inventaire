void Modifier_Produit(vector<Produit>& Produits) {
    effacer_ecran();
    cout << "=============================================" << endl;
    cout << "             Modifier un Produit !" << endl;
    cout << "=============================================" << endl;

    int ref;
    int choixAttribut;
    int nouvel_attribut;
    char nouvelle_designation[100];
    char nouvelle_zone[100];

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


            default:
                cout << "Choix invalide." << endl;
                char choix;
                do {
                    cout << "Appuyez sur 'm' pour revenir au menu principal, 'q' pour quitter, ou 'r' pour modifier un autre Produits : ";
                    cin >> choix;

                    if (choix == 'm') {
                        effacer_ecran();
                        return;
                    }
                    else if (choix == 'q') {
                        effacer_ecran();
                        cout << "=============================================" << endl;
                        cout << "                  Au revoir !" << endl;
                        cout << "=============================================" << endl;
                        exit(0);
                    }
                    else if (choix == 'r') {
                        effacer_ecran();
                        Modifier_Produit(Produits);
                    }
                    else {
                        cout << "Choix invalide. Veuillez entrer 'm', 'q' ou 'r' : ";
                    }
                } while (true);
            }
            effacer_ecran();
            return;
        }
    }

    if (!articleTrouve) {
        cout << "Article non trouvé." << endl;
    }
}