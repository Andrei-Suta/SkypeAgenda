//
// Created by andre on 3/4/2021.
//

#ifndef SKYPEAGENDA_ABONAT_SKYPE_ROMANIA_H
#define SKYPEAGENDA_ABONAT_SKYPE_ROMANIA_H
#include "Abonat_Skype.h"
#include <string>
using namespace std;
class Abonat_Skype_Romania : public Abonat_Skype{
protected:
    string adresa_mail;
public:
    Abonat_Skype_Romania(int ID, string NUME, string NR_TELEFON, string ID_SKYPE, string ADRESA_MAIL);
    Abonat_Skype_Romania();
    string getAdresa_Mail() const;
    void setAdresa_Mail(string MAIL);
    Abonat_Skype_Romania(const Abonat_Skype_Romania &ab2);

};
#endif //SKYPEAGENDA_ABONAT_SKYPE_ROMANIA_H
