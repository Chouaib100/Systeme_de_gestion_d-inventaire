
void Creer_Produit(vector<Produit>& Produits) {
    char choix;
    do {
        int ref, prix, quantite, rangee, etagere;
        char designation[100], zone[100];
        effacer_ecran();
        cout << "=============================================" << endl;
        cout << "               Ajouter Produits" << endl;
        cout << "=============================================" << endl;

        cout << "Entrez la référence de Produits : ";
        cin >> ref;


        bool referenceExistante = false;
        for (const auto& article : Produits) {
            if (article.getreference() == ref) {
                referenceExistante = true;
                break;
            }
        }

        if (referenceExistante) {
            cout << "La référence existe déjà. Veuillez en choisir une autre." << endl;
            cout << "Voulez-vous ajouter un autre Produits ? (o/n) : ";
            cin >> choix;
            if (choix != 'o' && choix != 'O') {
                effacer_ecran();
                return;
            }
            continue;
        }

        cout << "Entrez la désignation de Produit : ";
        cin.ignore();
        cin.getline(designation, 100);

        cout << "Entrez le prix de Produit : ";
        cin >> prix;

        cout << "Entrez la quantité disponible de Produit : ";
        cin >> quantite;

        cout << "Entrez la zone de l'emplacement : ";
        cin.ignore();
        cin.getline(zone, 100);

        cout << "Entrez la rangée de l'emplacement : ";
        cin >> rangee;

        cout << "Entrez l'étagère de l'emplacement : ";
        cin >> etagere;

        Produit nouvel_article(ref, designation, prix, zone, rangee, quantite, etagere);

        Produits.push_back(nouvel_article);

        cout << "Article ajouté avec succès !" << endl;

        cout << "Voulez-vous ajouter un autre Produit ? (o/n) : ";
        cin >> choix;
    } while (choix == 'o' || choix == 'O');

    effacer_ecran();
}