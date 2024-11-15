#include "../entities/MuseumTicket.h"

    MuseumTicket::MuseumTicket() {
        this->id = 0;
    }

    MuseumTicket::MuseumTicket(unsigned int& id, Excursion& excursion) {
        this->id = id;
        id++;
        this->type = "Tour ticket";
        this->excursion = excursion.GetName();
        excursion.IncreaseVisitors();

    }

    MuseumTicket::MuseumTicket(unsigned int& id, std::string type) {
        this->id = id;
        id++;
        this->type = type;
    }

    std::string MuseumTicket::GetName() {
        return this->type;
    }

    void MuseumTicket::DisplayInfo() const {
        if (type == "Tour ticket") {
            std::cout << "Ticket for " << this->excursion;
            std::cout << " excursion";
        }
        else {
            std::cout << "Common ticket";
        }
        std::cout << "ID: " << id;
    }