#include "../entities/Guide.h"

    void Guide::StartTour(Excursion* tour) {
        isOnTour = true;
        currentTour = tour;
    }

    void Guide::EndTour() {
        isOnTour = false;
        delete currentTour;
    }

    void Guide::DisplayInfo() {
        {
            std::cout << "Guide Info: " << name << " " << surname;
            if (this->isOnTour) {
                std::cout << "On Tour: ";
                currentTour->GetName(); std::cout << std::endl;
            }
        }
    }
