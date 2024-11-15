#include "pch.h"
#include "../../Museum/Museum/entities/Cashier.h"

TEST(CashierT, DisplayTest) {
	Cashier cashier("Key", "Mag", 25, 100);
    testing::internal::CaptureStdout();
    cashier.DisplayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_FALSE(output.empty());
}

TEST(CashierT, CheckRequestT) {
    Cashier cashier("Niko", "Hulk", 30, 100);
    Visitor visitor("Yan", "Juan", 21, 100.5);
    PurchaseRequest request("Common ticket", 0, "");
    bool checkResult = cashier.CheckRequest(request, visitor);
    ASSERT_TRUE(checkResult);
}

TEST(CashierT, CheckRequestF) {
    Cashier cashier("Niko", "Hulk", 30, 100);
    Visitor visitor("Yan", "Juan", 21, 9.5);
    PurchaseRequest request("Common ticket", 0, "");
    bool checkResult = cashier.CheckRequest(request, visitor);
    ASSERT_FALSE(checkResult);
}

TEST(CashierT, MakeGiveTicketCommon) {
    unsigned int ID = 1;
    Cashier cashier("Yuki", "Tsunoda", 23, 100);
    Visitor visitor("Yan", "Juan", 21, 9.5);
    PurchaseRequest request("Common ticket", 0, "");
    MuseumTicket ticket = cashier.MakeTicket(ID, request);
    cashier.GiveTicket(ticket, visitor);
    ASSERT_TRUE(visitor.GetTicket().GetName() == "Common ticket");
}

TEST(CashierT, MakeTicketTour) {
    unsigned int ID = 1;
    Cashier cashier("Yuki", "Tsunoda", 23, 100);
    Excursion excursion("German castles");
    MuseumTicket ticket = cashier.MakeTicket(ID, excursion);
    ASSERT_TRUE(ticket.GetName() == "Tour ticket");
}