#pragma once
#include"../Common.h"
#include "../entities/Visitor.h"
#include "../entities/PurchaseRequest.h"
class PaymentSystem {
private:
    double funds;

public:
    PaymentSystem(double);
    void ReceivePayment(PurchaseRequest&, Visitor&);
    double GetFunds() const;
};