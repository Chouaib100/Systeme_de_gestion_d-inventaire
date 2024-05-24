#ifndef EMPLACEMENT_H
#define EMPLACEMENT_H

#include <string>

using namespace std;

class Emplacement {
private:
    string zone;
    int rangee;
    int etagere;

public:
    Emplacement(const string& zone = "", int rangee = 0, int etagere = 0);

    string getZone() const;
    void setZone(const string& zone);

    int getRangee() const;
    void setRangee(int rangee);

    int getEtagere() const;
    void setEtagere(int etagere);
};

#endif // EMPLACEMENT_H
