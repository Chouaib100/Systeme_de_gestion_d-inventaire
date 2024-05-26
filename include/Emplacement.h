class Emplacement {
private:
    char* zone;
    int rangee;
    int etagere;

public:
    Emplacement(const char* z = NULL, int r = -1, int e = -1);

    void afficher_emplacement() const ;

    char* getzone() const ;
    int getrangee() const ;
    int getetagere() const ;

    void setzone(char* z);

    void setrangee(int r) ;
    void setetagere(int e) ;
};