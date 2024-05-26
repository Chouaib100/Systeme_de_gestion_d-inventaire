#include "Produit.h"

using namespace std;

Produit::Produit(int ref, const char* d, int p, const char* z, int r, int qu, int e)
    : emplacement(z, r, e) {
    reference = ref;
    designation = new char[strlen(d) + 1];
    strcpy(designation, d);
    prix = p;
    quantiteDisponible = qu;
}

void Produit::afficher_article() const {
    cout << "  Reference: " << reference << endl;
    cout << "  Designation: " << designation << endl;
    cout << "  Prix: " << prix << " dirhams" << endl;
    cout << "  Quantite disponible: " << quantiteDisponible << endl;
    cout << "  Emplacement: \n";
    emplacement.afficher_emplacement();
}

int Produit::getreference() const { return reference; }
char* Produit::getrdesignation() const { return designation; }
int Produit::getprix() const { return prix; }
int Produit::getquantiteDisponible() const { return quantiteDisponible; }
char* Produit::get_emplacement_zone() const { return emplacement.getzone(); }
int Produit::get_emplacement_rangee() const { return emplacement.getrangee(); }
int Produit::get_emplacement_etagere() const { return emplacement.getetagere(); }

void Produit::setreference(int ref) { reference = ref; }

void Produit::setdesignation(const char* d) {
    delete[] designation;
    designation = new char[strlen(d) + 1];
    strcpy(designation, d);
}

void Produit::setprix(int p) { prix = p; }
void Produit::setquantiteDisponible(int qu) { quantiteDisponible = qu; }
void Produit::set_emplacement_zone(const char* z) { emplacement.setzone(z); }
void Produit::set_emplacement_rangee(int r) { emplacement.setrangee(r); }
void Produit::set_emplacement_etagere(int e) { emplacement.setetagere(e); }
