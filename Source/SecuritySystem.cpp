#include"../entities/SecuritySystem.h"

    bool SecuritySystem::GetState() {
        return this->isOn;
    }

    SecuritySystem::SecuritySystem() {
        this->isOn = false;
    }

    void SecuritySystem::AddExhibit(Exponate* exhibit) {
        exhibitList.push_back(exhibit);
    }

    void SecuritySystem::AddRoom(ExhibitionRoom* room) {
        roomList.push_back(room);
    }

    void SecuritySystem::TurnOn() {
        isOn = true;
        std::cout << "Security System is ON." << std::endl;
    }

    void SecuritySystem::TurnOff() {
        isOn = false;
        std::cout << "Security System is OFF." << std::endl;
    }

    bool SecuritySystem::CheckExhibits(ExhibitionRoom& room) {
        if (!isOn) {
            std::cout << "Security System is OFF. Cannot check exhibits." << std::endl;
            return false;
        }
        bool allExhibitsInPlace = true;
        for (int i = 0; i < exhibitList.size();i++) {
            if (exhibitList[i]->GetName() != room.GetExponates()[i]->GetName()) {
                return false;
            }
        }
        if (allExhibitsInPlace) {
            return true;
        }
        else {
            return false;
        }
    }

    void SecuritySystem::TriggerAlarm() {
        std::cout << "ALARM! There is a problem with the exhibits!" << std::endl;
    }