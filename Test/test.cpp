#include "pch.h"
#include "../../Class Inheritance main/Class Inheritance/Fish.cpp"

TEST(TestFish, TestMainClass) {
	Aquatic_Inhabitants fish("eat",2500,"habitat");
	EXPECT_EQ(fish.get_eat(),"eat");
	EXPECT_EQ(fish.get_size(), 2500);
	EXPECT_EQ(fish.get_habitat(), "habitat");
	//EXPECT_TRUE(true);
}

TEST(TestFish, TestDolphin) {
	Dolphin dolf("Class",1);
	EXPECT_EQ(dolf.get_ñlass(), "Class");
	EXPECT_EQ(dolf.get_echo(), 1);
}

TEST(TestFish, TestShark) {
	Shark Shark("Class", 1);
	EXPECT_EQ(Shark.get_class1(), "Class");
	EXPECT_EQ(Shark.get_pain(), 1);
}