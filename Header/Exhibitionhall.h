#pragma once
#include"../Common.h"
#include"../entities/Exponate.h"
#include"../entities/SecuritySystem.h"
class SecuritySystem;
class ExhibitionRoom {
private:
    std::string type;
    std::vector<Exponate*> exponates;

public:
    ExhibitionRoom(const std::string&);
    void AddExponate(Exponate*, SecuritySystem&);
    void DisplayExponates();
    const std::vector<Exponate*>& GetExponates() const;
};