#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

nt main() 
{

    vector<Produit> Produits;
    
    Produits.push_back(Produit(1, "Ordinateur portable", 5000, "Zone A", 1, 20, 2));
    Produits.push_back(Produit(2, "Smartphone", 2000, "Zone B", 2, 30, 3));
    Produits.push_back(Produit(3, "Tablette", 600, "Zone C", 1, 10, 1));
    Produits.push_back(Produit(4, "Casque audio", 300, "Zone D", 3, 18, 4));

    executer_menu(Produits);

    return 0;
}
