#include "pch.h"
#include "../../Museum/Museum/entities/Employee.h"
#include "../../Museum/Museum/entities/Artwork.h"
#include "../../Museum/Museum/entities/Artifact.h"

TEST(EmployeeTest, SetExhibitOnHall) {
	Employee employee("Valterri", "Bottas", 30, 100);
	Artwork artwork("Black square", "Malevich", 1915);
	Artifact artifact("Russel's teapot", "England", 1952);
	employee.PlaceExponate(artwork);
	ASSERT_TRUE(artwork.GetOnRoom());
	ASSERT_FALSE(artifact.GetOnRoom());
}

TEST(EmployeeTest, SetArtworkOffHall) {
	Employee employee("Valterri", "Bottas", 30, 100);
	Artwork artwork("Black square", "Malevich", 1915);
	employee.PlaceExponate(artwork);
	ASSERT_TRUE(artwork.GetOnRoom());
	employee.RemoveExponate(artwork);
	ASSERT_FALSE(artwork.GetOnRoom());
}

TEST(EmployeeTest, SetArtifactOffHall) {
	Employee employee("Valterri", "Bottas", 30, 100);
	Artifact artifact("Russel's teapot", "England", 1952);
	employee.PlaceExponate(artifact);
	ASSERT_TRUE(artifact.GetOnRoom());
	employee.RemoveExponate(artifact);
	ASSERT_FALSE(artifact.GetOnRoom());
}