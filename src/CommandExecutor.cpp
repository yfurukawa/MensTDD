#include "CommandExecutor.h"

CommandExecutor::CommandExecutor() {

}

CommandExecutor::~CommandExecutor() {

}

void CommandExecutor::run(const Command& command) {
	list_.push_back(new ToDo(command.getArgs()))
}
