#pragma once
#include"../Common.h"
#include"../entities/Excursion.h"
class PurchaseRequest {
private:
    bool status;
    std::string type;
    double cost = 0;
    std::string excursion = "";
public:
    PurchaseRequest(std::string, bool, std::string);
    double GetCostValue() const;
    std::string GetType() const;
    bool GetStatus() const;
    std::string ShowStatus() const;
    void ChangeStatus(bool status);
};
