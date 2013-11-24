#include <vector>
#include "CommandExecutorTest.h"
#include "../src/Command.h"

CommandExecutorTest::CommandExecutorTest() {

}

CommandExecutorTest::~CommandExecutorTest() {

}

void CommandExecutorTest::SetUp() {
	sut = new CommandExecutorSpy();
}

void CommandExecutorTest::TearDown() {
	delete sut;
}

TEST_F (CommandExecutorTest, run) {
	std::vector<std::string> args;
	args.push_back("ToDo1");
	args.push_back("Contents");
	args.push_back("2013-12-01");

	Command command("add", "", args);

	sut->run(command);
	EXPECT_EQ(1, sut->getNumberOfIssues());
}
