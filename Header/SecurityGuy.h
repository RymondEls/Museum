#pragma once
#include "../entities/Human.h"
#include"../entities/SecuritySystem.h"
#include"../entities/Exhibitionhall.h"
class SecurityGuy : public Human {
public:
    SecurityGuy(std::string, std::string, int, double);
    void DisplayInfo() override;
    void ManageSecuritySystem(SecuritySystem&, bool);
    bool CheckExhibits(SecuritySystem&, ExhibitionRoom&);
};