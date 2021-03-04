//
// Created by andre on 3/4/2021.
//

#ifndef SKYPEAGENDA_AGENDA_H
#define SKYPEAGENDA_AGENDA_H
#include "Abonat_Skype_Romania.h"
#include <vector>
class Agenda{
public:
    vector<Abonat_Skype_Romania> agenda;
    int size;
    Agenda();
    ~Agenda();
    Agenda(const Agenda &a2);
    Agenda&operator=(const Agenda& agendaa);
    Agenda&operator[](int x);
};
#endif //SKYPEAGENDA_AGENDA_H
