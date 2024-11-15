#include"../entities/Artifact.h"

    Artifact::Artifact(const std::string& name, const std::string& origin, int year) {
        this->name = name;
        this->origin = origin;
        this->year = year;
        this->type = "Artifact";
        this->onRoom = false;
    }

    void Artifact::DisplayInfo() {
        std::cout << "Artifact: " << name << ", Origin: " << origin << ", Year: " << year << std::endl;
    }
    void Artifact::SetOnRoom() {
        this->onRoom = true;
    }
    void Artifact::RemoveFromRoom() {
        this->onRoom = false;
    }