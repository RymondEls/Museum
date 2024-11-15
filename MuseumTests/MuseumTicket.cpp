#include "pch.h"
#include <sstream>
#include "../../Museum/Museum/entities/Museumticket.h"

TEST(TicketT, DisplayCommon) {
	unsigned int ID = 1;
	MuseumTicket ticket(ID, "Common ticket");
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());
    ticket.DisplayInfo();
    std::cout.rdbuf(old);
    ASSERT_EQ(buffer.str(), "Common ticketID: 1");
}

TEST(TicketT, DisplayTour) {
    unsigned int ID = 10;
    Excursion excursion("Art of 20th century");
    MuseumTicket ticket(ID, excursion);
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());
    ticket.DisplayInfo();
    std::cout.rdbuf(old);
    ASSERT_EQ(buffer.str(), "Ticket for Art of 20th century excursionID: 10");
}