#pragma once
#include"../Common.h"
#include"../entities/Exponate.h"
class Artwork : public Exponate {
private:
    std::string author;
    int year;

public:
    Artwork(const std::string&, const std::string&, int);
    void SetOnRoom() override;
    void RemoveFromRoom() override;
    void DisplayInfo() override;
};