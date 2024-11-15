#pragma once
#include "../entities/Human.h"
#include "../entities/Excursion.h"
#include "../entities/PurchaseRequest.h"
#include "../entities/MuseumTicket.h"
class Visitor : public Human {
private:
    bool isOnTour;
    Excursion* currentTour;
    MuseumTicket currentTicket;
public:
    Visitor(std::string, std::string, int, double);
    PurchaseRequest MakePurchaseRequest(std::string, std::string);
    void GiveMoney(double);
    void SetTicket(MuseumTicket&);
    MuseumTicket GetTicket();
    void GoOnTour(Excursion* tour);
    void DisplayInfo() override;
};