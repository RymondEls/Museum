#include "pch.h"
#include "../../Museum/Museum/entities/PaymentSystem.h"

TEST(PaymentSysT, ReceivePaymentT) {
	Visitor visitor("Robert", "Paulson", 25, 2000);
	PurchaseRequest request("Common ticket", 0, "");
	PaymentSystem system(10000.23);
	system.ReceivePayment(request, visitor);
	ASSERT_TRUE(system.GetFunds() == 10010.23);
}