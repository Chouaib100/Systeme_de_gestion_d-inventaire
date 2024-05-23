void Trier_Produits_par_prix_decroissant(vector<Produit>& Produits) {

    char choix;
    for (size_t i = 0; i < Produits.size() - 1; ++i) {
        size_t max_index = i;
        for (size_t j = i + 1; j < Produits.size(); ++j) {
            if (Produits[j].getprix() > Produits[max_index].getprix()) {
                max_index = j;
            }
        }
        if (max_index != i) {
            swap(Produits[i], Produits[max_index]);
        }
    }


    effacer_ecran();
    cout << "=============================================" << endl;
    cout << "             Produit triés par prix" << endl;
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
        }
        else if (choix == 'q') {
            effacer_ecran();
            cout << "=============================================" << endl;
            cout << "                  Au revoir !" << endl;
            cout << "=============================================" << endl;
            exit(0);
        }
    } while (true);
}