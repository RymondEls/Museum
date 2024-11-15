#pragma once
#include "../entities/Human.h"
#include "../entities/Excursion.h"
#include "../entities/Visitor.h"
#include "../entities/PurchaseRequest.h"
#include "../entities/MuseumTicket.h"
class Cashier : public Human {
public:
    Cashier(std::string, std::string, int, double);
    bool CheckRequest(PurchaseRequest&, Visitor&);
    bool CheckEnoughMoney(double, Visitor&);
    MuseumTicket MakeTicket(unsigned int&, PurchaseRequest&);
    MuseumTicket MakeTicket(unsigned int&, Excursion&);
    void GiveTicket(MuseumTicket&, Visitor&);
    void DisplayInfo() override;
};