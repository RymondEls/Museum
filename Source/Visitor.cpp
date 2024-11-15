#include "../entities/Visitor.h"

    Visitor::Visitor(std::string name, std::string surname, int age, double cash) {
        this->name = name;
        this->surname = surname;
        this->age = age;
        this->cash = cash;
        this->isOnTour = 0;
        this->currentTour = nullptr;
    }

    PurchaseRequest Visitor::MakePurchaseRequest(std::string ticketType, std::string excursion) {
        PurchaseRequest request(ticketType, 0, excursion);
        return request;
    }
    void Visitor::GiveMoney(double ammount) {
        this->cash = this->cash - ammount;
    }

    void Visitor::SetTicket(MuseumTicket& ticket) {
        this->currentTicket = ticket;
    }

    void Visitor::GoOnTour(Excursion* tour) {
        this->isOnTour = true;
        currentTour = tour;
    }

    MuseumTicket Visitor::GetTicket() {
        return this->currentTicket;
    }

    void Visitor::DisplayInfo() {
        {
            std::cout << "Visitor Info: " << name << " " << surname << std::endl;
            std::cout << "Cash: " << cash << std::endl;
            if (this->isOnTour) {
                std::cout << "On Tour: ";
                currentTour->GetName(); std::cout << std::endl;
            }
            std::cout << std::endl;
        }
    }