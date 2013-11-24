#ifndef COMMANDEXECUTORTEST_H_
#define COMMANDEXECUTORTEST_H_

#include <gtest/gtest.h>
#include "CommandExecutorSpy.h"

class CommandExecutorTest : public ::testing::Test {
protected:
	CommandExecutorSpy* sut;
	void SetUp();
	void TearDown();

public:
	CommandExecutorTest();
	virtual ~CommandExecutorTest();

};

#endif
