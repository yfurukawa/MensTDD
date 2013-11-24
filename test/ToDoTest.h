#ifndef TODOTEST_H_
#define TODOTEST_H_

#include <gtest/gtest.h>
#include "ToDo.h"

class ToDoTest : public ::testing::Test {
protected:
	ToDo* sut;
	void SetUp();
	void TearDown();

public:
	ToDoTest();
	virtual ~ToDoTest();

};

#endif
