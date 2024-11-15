#include"../entities/Artwork.h"

    

    Artwork::Artwork(const std::string& name, const std::string& author, int year) {
        this->name = name;
        this->author = author;
        this->year = year;
        this->type = "Artwork";
        this->onRoom = false;
    }

    void Artwork::DisplayInfo() {
        std::cout << "Artwork: " << name << ", Author: " << author << ", Year: " << year << std::endl;
    }
    void Artwork::SetOnRoom() {
        this->onRoom = true;
    }
    void Artwork::RemoveFromRoom() {
        this->onRoom = false;
    }