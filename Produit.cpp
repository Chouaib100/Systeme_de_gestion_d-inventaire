#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


class Produit {
private:
    int reference;
    char* designation;
    int prix;
    int quantiteDisponible;
    Emplacement emplacement;

public:
    Produit(int ref = -1, const char* d = NULL, int p = -1, const char* z = NULL, int r = -1, int qu = -1, int e = -1)
        : emplacement(z, r, e) {
        reference = ref;
        designation = new char[strlen(d) + 1];
        strcpy(designation, d);
        prix = p;
        quantiteDisponible = qu;
    }

    void afficher_article() const {
        cout << "  Reference: " << reference << endl;
        cout << "  Designation: " << designation << endl;
        cout << "  Prix: " << prix << " dirhams" << endl;
        cout << "  Quantite disponible: " << quantiteDisponible << endl;
        cout << "  Emplacement: \n";
        emplacement.afficher_emplacement();
    }

    int getreference() const { return reference; }
    char* getrdesignation() const { return designation; }
    int getprix() const { return prix; }
    int getquantiteDisponible() const { return quantiteDisponible; }
    char* get_emplacement_zone() const { return emplacement.getzone(); }
    int get_emplacement_rangee() const { return emplacement.getrangee(); }
    int get_emplacement_etagere() const { return emplacement.getetagere(); }

    void setreference(int ref) { reference = ref; }

    void setdesignation(char* d) {
        if (d == NULL) {
            delete[] designation;
            designation = new char[strlen(d) + 1];
            strcpy(designation, d);
        }
        else {
            designation = new char[strlen(d) + 1];
            strcpy(designation, d);
        }
    }

    void setprix(int p) { prix = p; }

    void setquantiteDisponible(int qu) { quantiteDisponible = qu; }

    void set_emplacement_zone(char* z) { emplacement.setzone(z); }
    void set_emplacement_rangee(int r) { emplacement.setrangee(r); }
    void set_emplacement_etagere(int e) { emplacement.setetagere(e); }
};