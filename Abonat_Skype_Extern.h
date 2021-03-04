//
// Created by andre on 3/4/2021.
//

#ifndef SKYPEAGENDA_ABONAT_SKYPE_EXTERN_H
#define SKYPEAGENDA_ABONAT_SKYPE_EXTERN_H
include"Abonat_Skype.h"
#include<string>
using namespace std;
class Abonat_Skype_Extern : public Abonat_Skype{
protected:
    string tara;
public:
    Abonat_Skype_Extern(int ID, string NUME, string NR_TELEFON, string ID_SKYPE, string TARA);
    Abonat_Skype_Extern();
};
#endif //SKYPEAGENDA_ABONAT_SKYPE_EXTERN_H
