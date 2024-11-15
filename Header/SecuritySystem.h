#pragma once
#include"../Common.h"
#include"../entities/Exponate.h"
#include"../entities/Exhibitionhall.h"
class SecuritySystem {
private:
    std::vector<Exponate*> exhibitList;
    std::vector<ExhibitionRoom*> roomList;
    bool isOn;

public:
    SecuritySystem();
    bool GetState();
    void AddExhibit(Exponate*);
    void AddRoom(ExhibitionRoom*);
    void TurnOn();
    void TurnOff();
    bool CheckExhibits(ExhibitionRoom&);
    void TriggerAlarm();
};
