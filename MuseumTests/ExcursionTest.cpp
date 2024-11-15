#include "pch.h"
#include "../../Museum/Museum/entities/Excursion.h"
#include "../../Museum/Museum/entities/Visitor.h"

TEST(ExcursionT, VisitorsCountT) {
	Excursion excursion("World war 2");
	std::vector<Visitor> visitors;
	Visitor fernando("Fernando", "Alonso", 43, 100);
	visitors.push_back(fernando);
	Visitor esteban("Esteban", "Ocon", 28, 100);
	visitors.push_back(esteban);
	Visitor leclerc("Charles", "Leclerc", 27, 200);
	visitors.push_back(leclerc);
	for (int i = 1; i <= visitors.size();i++) {
		excursion.IncreaseVisitors();
	}
	ASSERT_TRUE(excursion.GetVisitorsCount() == 3);
}