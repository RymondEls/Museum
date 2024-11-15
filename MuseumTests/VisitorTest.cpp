#include "pch.h"
#include "../../Museum/Museum/entitiescpp/Visitor.cpp"
#include "../../Museum/Museum/entitiescpp/Cashier.cpp"
#include "../../Museum/Museum/entitiescpp/MuseumTicket.cpp"
#include "../../Museum/Museum/entitiescpp/PurchaseRequest.cpp"
#include "../../Museum/Museum/entitiescpp/PaymentSystem.cpp"
#include "../../Museum/Museum/entitiescpp/Excursion.cpp"
#include "../../Museum/Museum/entitiescpp/SecurityGuy.cpp"
#include "../../Museum/Museum/entitiescpp/SecuritySystem.cpp"
#include "../../Museum/Museum/entitiescpp/Artwork.cpp"
#include "../../Museum/Museum/entitiescpp/Artifact.cpp"
#include "../../Museum/Museum/entitiescpp/Exhibitionhall.cpp"
#include "../../Museum/Museum/entitiescpp/Employee.cpp"
#include "../../Museum/Museum/entitiescpp/Guide.cpp"


TEST(VisitorT, ShowInfoTest) {
    Visitor visitor("Yan", "Juan", 21, 100.5);
    Excursion* tour = new Excursion("Ancient tour");
    visitor.GoOnTour(tour);
    testing::internal::CaptureStdout();
    visitor.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_FALSE(output.empty());
}

TEST(VisitorT, GiveMoneySetTicket) {
    unsigned int ID = 1;
    Visitor visitor("Max", "Verstappen", 27, 20.5);
    visitor.GiveMoney(10);
    MuseumTicket ticket(ID, "Common ticket");
    visitor.SetTicket(ticket);
    ASSERT_TRUE(visitor.GetCashValue() == 10.5);
    ASSERT_TRUE(visitor.GetTicket().GetName() == "Common ticket");
}

TEST(VisitorT, MakeRequest) {
    Visitor visitor("Lewis", "Hamilton", 38, 40);
    PurchaseRequest request = visitor.MakePurchaseRequest("Tour ticket", "Greek history");
    ASSERT_TRUE(request.GetStatus() == 0);
}

