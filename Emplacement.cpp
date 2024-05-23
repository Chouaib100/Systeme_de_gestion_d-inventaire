class Emplacement {
private:
    char* zone;
    int rangee;
    int etagere;

public:
    Emplacement(const char* z = NULL, int r = -1, int e = -1) {
        zone = new char[strlen(z) + 1];
        strcpy(zone, z);
        rangee = r;
        etagere = e;
    }

    void afficher_emplacement() const {
        cout << "Zone: " << zone << " | Rangee: " << rangee << " | Etagere: " << etagere << endl;
    }

    char* getzone() const { return zone; }
    int getrangee() const { return rangee; }
    int getetagere() const { return etagere; }

    void setzone(char* z) {
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

    void setrangee(int r) { rangee = r; }
    void setetagere(int e) { etagere = e; }
};