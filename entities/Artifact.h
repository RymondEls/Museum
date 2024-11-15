#pragma once
#include"../Common.h"
#include"../entities/Exponate.h"
class Artifact : public Exponate {
private:
    std::string origin;
    int year;

public:
    Artifact(const std::string&, const std::string&, int);
    void SetOnRoom() override;
    void RemoveFromRoom() override;
    void DisplayInfo() override;
};