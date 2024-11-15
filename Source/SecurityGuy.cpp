#include"../entities/SecurityGuy.h"

    SecurityGuy::SecurityGuy(std::string name, std::string surname, int age, double cash) {
        this->name = name;
        this->surname = surname;
        this->age = age;
        this->cash = cash;  
    }

    void SecurityGuy::DisplayInfo() {
        std::cout << "Security Guard Info: " << name << " " << surname << std::endl;
    }

    void SecurityGuy::ManageSecuritySystem(SecuritySystem& securitySystem, bool turnOn) {
        if (turnOn) {
            securitySystem.TurnOn();
        }
        else {
            securitySystem.TurnOff();
        }
    }

    bool SecurityGuy::CheckExhibits(SecuritySystem& securitySystem, ExhibitionRoom& room) {
        return securitySystem.CheckExhibits(room);
    }