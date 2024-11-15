#include "pch.h"
#include "../../Museum/Museum/entities/SecurityGuy.h"
#include "../../Museum/Museum/entities/Artifact.h"
#include "../../Museum/Museum/entities/Artwork.h"

TEST(SecurityGuyT, turnSysOn) {
	SecurityGuy secure("Alex", "Albon", 30, 100);
	SecuritySystem system;
	secure.ManageSecuritySystem(system, 1);
	ASSERT_TRUE(system.GetState() == true);
}

TEST(SecurityGuyT, turnSysOff) {
	SecurityGuy secure("Franco", "Colapinto", 21, 100);
	SecuritySystem system;
	secure.ManageSecuritySystem(system, 1);
	secure.ManageSecuritySystem(system, 0);
	ASSERT_TRUE(system.GetState() == false);
}

TEST(SecurityGuyT, checkExhibits) {
	Exponate* a = new Artwork("Night in the woods", "yomama", 2024);
	Exponate* b = new Artifact("Vodka bottle", "RUSSIA", 2000);
	SecuritySystem system;
	SecurityGuy ohrannik("Liam", "Lawson", 20, 100);
	ohrannik.ManageSecuritySystem(system, 1);
	ExhibitionRoom room("Basic room");
	room.AddExponate(a,system);
	room.AddExponate(b,system);
	ASSERT_TRUE(ohrannik.CheckExhibits(system, room));
}