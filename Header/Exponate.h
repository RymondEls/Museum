#pragma once
#include"../Common.h"
class Exponate {
protected:
    std::string name;
    std::string type;
    bool onRoom;

public:
    bool GetOnRoom() const {
        return this->onRoom;
    }
    virtual void DisplayInfo() = 0;
    virtual void SetOnRoom() = 0;
    virtual void RemoveFromRoom() = 0;
    virtual ~Exponate() = default;
    std::string GetName() const {
        return name;
    }
};