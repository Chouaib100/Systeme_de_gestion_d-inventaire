void Afficher_Produit_quantite_nulle(const vector<Produit>& Produits) {
    bool aucun_article_trouve = true;

    cout << "=============================================" << endl;
    cout << "        Articles en rupture de stock" << endl;
    cout << "=============================================" << endl;
    for (const auto& article : Produits) {
        if (article.getquantiteDisponible() == 0) {
            aucun_article_trouve = false;
            article.afficher_article();
            cout << endl;
        }
    }

    if (aucun_article_trouve) {
        cout << "Aucun article en rupture de stock n'a été trouvé." << endl;
    }

    char choix;
    cout << "Appuyez sur 'm' pour revenir au menu principal ou 'q' pour quitter : ";
    cin >> choix;

    while (choix != 'm' && choix != 'q') {
        cout << "Choix invalide. Veuillez entrer 'm' pour revenir au menu principal ou 'q' pour quitter : ";
        cin >> choix;
    }

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
}