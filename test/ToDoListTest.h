#ifndef TODOLISTTEST_H_
#define TODOLISTTEST_H_

#include <gtest/gtest.h>
#include "ToDoList.h"

class ToDoListTest : public ::testing::Test {
protected:
	ToDoList* sut;
	void SetUp();
	void TearDown();

public:
	ToDoListTest();
	virtual ~ToDoListTest();

};

#endif
