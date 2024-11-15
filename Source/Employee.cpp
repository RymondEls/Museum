#include "../entities/Employee.h"

    Employee::Employee(std::string name, std::string surname, int age, double cash) {
        this->name = name;
        this->surname = surname;
        this->age = age;
        this->cash = cash;
        this->isOnHall = false;
    }

    void Employee::RemoveExponate(Exponate& exponate) {
        exponate.RemoveFromRoom();
    }

    void Employee::PlaceExponate(Exponate& exponate) {
        exponate.SetOnRoom();
    }

    void Employee::DisplayInfo() {
        std::cout << "Room Worker Info: " << name << " " << surname << std::endl;
    }