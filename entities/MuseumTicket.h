#pragma once
#include"../Common.h"
#include"../entities/Excursion.h"
class MuseumTicket {
private:
    unsigned int id;
    std::string type;
    std::string excursion;
public:
    MuseumTicket();
    MuseumTicket(unsigned int&, Excursion&);
    MuseumTicket(unsigned int&, std::string);
    std::string GetName();
    void DisplayInfo() const;
};