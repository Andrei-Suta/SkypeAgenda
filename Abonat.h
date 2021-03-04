//
// Created by andre on 3/4/2021.
//

#ifndef SKYPEAGENDA_ABONAT_H
#define SKYPEAGENDA_ABONAT_H
#include "Persoana.h"
#include <string>
using namespace std;
class Abonat : public Persoana{
protected:
    string nr_telefon;
public:
    Abonat(int ID, string NUME, string NR_TELEFON);
    Abonat();
    string getNr_Telefon();
    void setNr_Telefon(string NR);
};
#endif //SKYPEAGENDA_ABONAT_H
