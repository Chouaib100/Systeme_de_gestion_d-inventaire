#include "../include/Emplacement.h"
    Emplacement::Emplacement(const char* z = NULL, int r = -1, int e = -1) {
        zone = new char[strlen(z) + 1];
        strcpy(zone, z);
        rangee = r;
        etagere = e;
    }

    void Emplacement::afficher_emplacement() const {
        cout << "Zone: " << zone << " | Rangee: " << rangee << " | Etagere: " << etagere << endl;
    }

    char* Emplacement::getzone() const { return zone; }
    int Emplacement::getrangee() const { return rangee; }
    int Emplacement::getetagere() const { return etagere; }

    void Emplacement::setzone(char* z) {
        if (z == NULL) {
            delete[] zone;
            zone = new char[strlen(z) + 1];
            strcpy(zone, z);
        }
        else {
            zone = new char[strlen(z) + 1];
            strcpy(zone, z);
        }
    }

    void Emplacement::setrangee(int r) { rangee = r; }
    void Emplacement::setetagere(int e) { etagere = e; }
