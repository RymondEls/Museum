#include"../entities/Excursion.h"

    Excursion::Excursion(std::string name) {
        this->name = name;
    }
    std::string Excursion::GetName() const {
        return this->name;
    }

    int Excursion::GetVisitorsCount() const {
        return this->visitorsCount;
    }

    void Excursion::IncreaseVisitors() {
        visitorsCount++;
    }


