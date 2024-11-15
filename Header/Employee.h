#pragma once
#include "../entities/Human.h"
#include "../entities/Exponate.h"
class Employee : public Human {
private:
    bool isOnHall;
public:
    Employee(std::string name, std::string surname, int age, double cash);
    void RemoveExponate(Exponate& exponate);
    void PlaceExponate(Exponate& exponate);
    void DisplayInfo() override;
};