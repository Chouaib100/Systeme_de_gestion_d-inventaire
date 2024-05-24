#include "Emplacement.h"

using namespace std;

Emplacement::Emplacement(const string& zone, int rangee, int etagere)
    : zone(zone), rangee(rangee), etagere(etagere) {}

string Emplacement::getZone() const {
    return zone;
}

void Emplacement::setZone(const string& zone) {
    this->zone = zone;
}

int Emplacement::getRangee() const {
    return rangee;
}

void Emplacement::setRangee(int rangee) {
    this->rangee = rangee;
}

int Emplacement::getEtagere() const {
    return etagere;
}

void Emplacement::setEtagere(int etagere) {
    this->etagere = etagere;
}
