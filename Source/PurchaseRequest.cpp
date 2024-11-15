#include"../entities/PurchaseRequest.h"

    PurchaseRequest::PurchaseRequest(std::string type, bool status, std::string excursion) {
        this->type = type;
        this->status = status;
        if (type == "Tour ticket") {
            this->cost = 20.0;
            this->excursion = excursion;
        }
        else {
            this->cost = 10.0;
        }
    }

    double PurchaseRequest::GetCostValue() const {
        return this->cost;
    }

    std::string PurchaseRequest::GetType() const {
        return this->type;
    }

    bool PurchaseRequest::GetStatus() const {
        return this->status;
    }

    std::string PurchaseRequest::ShowStatus() const {
        if (this->status) {
            return "Validated";
        }
        return "Declined.";
    }

    void PurchaseRequest::ChangeStatus(bool status) {
        this->status = status;
    }