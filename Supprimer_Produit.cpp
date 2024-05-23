void Supprimer_Produit(vector<Produit>& Produits) {
    effacer_ecran();
    cout << "=============================================" << endl;
    cout << "             Supprimer un Produits !" << endl;
    cout << "=============================================" << endl;

    int ref;
    cout << "Entrez la référence de Produit à supprimer : ";
    cin >> ref;

    int index = -1;
    for (size_t i = 0; i < Produits.size(); ++i) {
        if (Produits[i].getreference() == ref) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        Produits.erase(Produits.begin() + index);
        cout << "Produit supprimé avec succès !" << endl;
    }
    else {
        cout << "Produit non trouvé." << endl;
    }

    char choix;
    do {
        cout << "Appuyez sur 'm' pour revenir au menu principal, 'q' pour quitter, ou 'r' pour essayer de supprimer un autre Produits : ";
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
            Supprimer_Produit(Produits);
        }
        else {
            cout << "Choix invalide. Veuillez entrer 'm', 'q' ou 'r' : ";
        }
    } while (true);
}