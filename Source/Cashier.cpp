#include "../entities/Cashier.h"

    Cashier::Cashier(std::string name, std::string surname, int age, double cash) {
        this->name = name;
        this->surname = surname;
        this->age = age;
        this->cash = cash;
    }
    bool Cashier::CheckRequest(PurchaseRequest& request, Visitor& visitor) {
        if (CheckEnoughMoney(request.GetCostValue(), visitor)) {
            request.ChangeStatus(true);
        }
        else {
            request.ChangeStatus(false);
        }
        return request.GetStatus();
    }
    bool Cashier::CheckEnoughMoney(double value, Visitor& visitor) {
        if (value > visitor.GetCashValue()) {
            return false;
        }
        return true;
    }

    MuseumTicket Cashier::MakeTicket(unsigned int& ID, PurchaseRequest& request) {
        MuseumTicket ticket(ID, request.GetType());
        return ticket;
    }

    MuseumTicket Cashier::MakeTicket(unsigned int& ID, Excursion& excursion) {
        MuseumTicket ticket(ID, excursion);
        return ticket;
    }

    void Cashier::GiveTicket(MuseumTicket& ticket, Visitor& visitor) {
        visitor.SetTicket(ticket);
    }

    void Cashier::DisplayInfo() {
        std::cout << "Cashier Info: " << name << " " << surname << std::endl;
        std::cout << "Cash: " << cash << std::endl << std::endl;
    }
