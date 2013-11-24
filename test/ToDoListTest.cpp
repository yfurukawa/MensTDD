#include "ToDoListTest.h"
#include "../src/ToDo.h"

ToDoListTest::ToDoListTest() {

}

ToDoListTest::~ToDoListTest() {

}

void ToDoListTest::SetUp() {
	sut = new ToDoList();
}

void ToDoListTest::TearDown() {
	delete sut;
}

TEST_F (ToDoListTest, AddAToDo) {
	sut->add(new ToDo("ToDo1", "Do Something", "2013-12-01", "2013-11-24"));
	EXPECT_EQ(1, sut->getNumberOfIssues());
}

TEST_F (ToDoListTest, AddTwoToDo) {
	sut->add(new ToDo("ToDo1", "Do Something", "2013-12-01", "2013-11-24"));
	sut->add(new ToDo("ToDo2", "Do Something", "2013-12-01", "2013-11-24"));
	EXPECT_EQ(2, sut->getNumberOfIssues());
}

