int Afficher_menu() {
    int choix;
    cout << "=============================================" << endl;
    cout << "           Menu Principal" << endl;
    cout << "=============================================" << endl;
    cout << "1. Ajouter un Produit" << endl;
    cout << "2. Chercher des informations sur un Produit" << endl;
    cout << "3. Modifier un Produit" << endl;
    cout << "4. Afficher tous les Produits" << endl;
    cout << "5. Supprimer un Produit" << endl;
    cout << "6. Trier les Produits" << endl;
    cout << "7. Produit en rupture de stock" << endl;
    cout << "8. Quitter" << endl;
    cout << "=============================================" << endl;
    cout << "Entrez le numéro de votre choix : ";
    cin >> choix;
    return choix;
}