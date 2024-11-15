#include"../entities/Exhibitionhall.h"


    ExhibitionRoom::ExhibitionRoom(const std::string& type) {
        this->type = type;
    }

    void ExhibitionRoom::AddExponate(Exponate* exponate, SecuritySystem& system) {
        exponates.push_back(exponate);
        system.AddExhibit(exponate);
    }

    void ExhibitionRoom::DisplayExponates() {
        for (int i = 0;i = exponates.size();i++) {
            exponates[i]->DisplayInfo();
        }
    }

    const std::vector<Exponate*>& ExhibitionRoom::GetExponates() const {
        return exponates;
    }