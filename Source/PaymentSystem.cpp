#include "../entities/PaymentSystem.h"

    PaymentSystem::PaymentSystem(double funds) {
        this->funds = funds;
    }
    void PaymentSystem::ReceivePayment(PurchaseRequest& request, Visitor& visitor) {
        visitor.GiveMoney(request.GetCostValue());
        this->funds = this->funds + request.GetCostValue();
    }
    double PaymentSystem::GetFunds() const {
        return this->funds;
    }