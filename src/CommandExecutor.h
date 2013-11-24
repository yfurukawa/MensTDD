#ifndef COMMANDEXECUTOR_H_
#define COMMANDEXECUTOR_H_

#include "ToDoList.h"

class Command;

class CommandExecutor {
protected:
	ToDoList list_;
public:
	CommandExecutor();
	virtual ~CommandExecutor();
	void run(const Command& command);
};

#endif
