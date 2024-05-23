void executer_menu(vector<Produit>& Produits) {
    int choix;
    do {
        choix = Afficher_menu();
        switch (choix) {
        case 1:
            Creer_Produit(Produits);
            break;
        case 2:
            Afficher_informations_Produit(Produits);
            break;
        case 3:
            effacer_ecran();
            Modifier_Produit(Produits);
            break;
        case 4:
            effacer_ecran();
            Afficher_Produit(Produits);
            break;
        case 5:
            effacer_ecran();
            Supprimer_Produit(Produits);
            break;
        case 6:
            Trier_Produits_par_prix_decroissant(Produits);
            break;
        case 7:
            effacer_ecran();
            Afficher_Produit_quantite_nulle(Produits);
            break;
        case 8:
            effacer_ecran();
            cout << "=============================================" << endl;
            cout << "                  Au revoir !" << endl;
            cout << "=============================================" << endl;
            break;
        default:
            cout << "Choix invalide. Veuillez entrer un nombre entre 1 et 7." << endl;
        }
    } while (choix != 8);
}