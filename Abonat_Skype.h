//
// Created by andre on 3/4/2021.
//

#ifndef SKYPEAGENDA_ABONAT_SKYPE_H
#define SKYPEAGENDA_ABONAT_SKYPE_H
#include<iostream>
#include"Abonat.h"
#include "Persoana.h"
#include<string>
using namespace std;
class Abonat_Skype : public Abonat{
protected:
    string id_skype;
public:
    Abonat_Skype(int ID, string NUME, string NR_TELEFON, string ID_SKYPE);
    Abonat_Skype();
    string getId_Skype() const;
    void setId_Skype(string ID);
};
#endif //SKYPEAGENDA_ABONAT_SKYPE_H
