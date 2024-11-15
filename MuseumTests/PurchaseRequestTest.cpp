#include "pch.h"
#include "../../Museum/Museum/entities/PurchaseRequest.h"

TEST(PurchaseRequestT, ShowStatusT) {
	PurchaseRequest request("Tour ticket", 0, "");
    std::string status = request.ShowStatus();
    ASSERT_TRUE(status == "Declined.");
}

TEST(PurchaseRequestT, ShowStatusF) {
    PurchaseRequest request("Tour ticket", 0, "");
    request.ChangeStatus(1);
    std::string status = request.ShowStatus();
    ASSERT_TRUE(status == "Validated");
}