#pragma once
#include"../Common.h"
class Excursion {
private:
    std::string name;
    int visitorsCount=0;

public:
    Excursion(std::string);
    Excursion() = default;
    std::string GetName() const;
    int GetVisitorsCount() const;
    void IncreaseVisitors();
};