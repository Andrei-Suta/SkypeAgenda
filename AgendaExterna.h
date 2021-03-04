//
// Created by andre on 3/4/2021.
//

#ifndef SKYPEAGENDA_AGENDAEXTERNA_H
#define SKYPEAGENDA_AGENDAEXTERNA_H
#include "Abonat_Skype_Extern.h"
#include <vector>
class AgendaExtern{
public:
    vector<Abonat_Skype_Extern> agendae;
    int size;
    AgendaExtern();
    ~AgendaExtern();
    AgendaExtern(const AgendaExtern &a2);
    AgendaExtern&operator=(const AgendaExtern& agendaa);
    AgendaExtern&operator[](int x);
};

#endif //SKYPEAGENDA_AGENDAEXTERNA_H
