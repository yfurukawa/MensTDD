#ifndef COMMAND_H_
#define COMMAND_H_

#include <vector>
#include <string>

class Command {
private:
	Command();
	std::string command_;
	std::string subcommand_;
	std::vector<std::string> args_;
public:
	Command(std::string command, std::string subcommand, std::vector<std::string> args);
	virtual ~Command();
	std::string getCommandType();
	std::string getSubcommandType();
	std::vector<std::string> getArgs();
};

#endif
