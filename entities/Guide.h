#pragma once
#include "../entities/Human.h"
#include "../entities/Excursion.h"
#include "../entities/MuseumTicket.h"
class Guide : public Human {
private:
    bool isOnTour;
    Excursion* currentTour;

public:
    void StartTour(Excursion*);
    void EndTour();
    void DisplayInfo() override;
};
