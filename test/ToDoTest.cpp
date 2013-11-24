#include "ToDoTest.h"

ToDoTest::ToDoTest() {

}

ToDoTest::~ToDoTest() {

}

void ToDoTest::SetUp() {
	//sut = new ToDo();
}

void ToDoTest::TearDown() {
	delete sut;
}

TEST_F (ToDoTest, MakeOneInstance) {
	sut = new ToDo("ToDo1", "Do Something", "2013-12-01", "2013-11-24");
	EXPECT_EQ("ToDo1", sut->getName());
	EXPECT_EQ("Do Something", sut->getContents());
	EXPECT_EQ("2013-12-01", sut->getDueDate());
	EXPECT_EQ("2013-11-24", sut->getRegistDate());
}
