#include "Command.h"

Command::Command() {

}

Command::Command(std::string command, std::string subcommand, std::vector<std::string> args)
: command_(command), subcommand_(subcommand), args_(args) {

}

Command::~Command() {

}

std::string Command::getCommandType() {
	return command_;
}
std::string Command::getSubcommandType() {
	return subcommand_;
}
std::vector<std::string> Command::getArgs() {
	return args_;
}
