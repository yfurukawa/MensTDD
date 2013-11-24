#include "CommandTest.h"
#include <vector>

CommandTest::CommandTest() {

}

CommandTest::~CommandTest() {

}

void CommandTest::SetUp() {
	//sut = new Command();
}

void CommandTest::TearDown() {
	delete sut;
}

TEST_F (CommandTest, MakeAddCommand) {
	std::vector<std::string> args;
	args.push_back("ToDo1");
	args.push_back("Contents");
	args.push_back("2013-12-01");

	sut = new Command("add", "", args );
	EXPECT_EQ("add", sut->getCommandType());
	EXPECT_EQ("", sut->getSubcommandType());
	EXPECT_EQ(3, sut->getArgs().size());

}
