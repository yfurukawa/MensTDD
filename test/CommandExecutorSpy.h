/*
 * CommandExecutorSpy.h
 *
 *  Created on: 2013/11/24
 *      Author: furukawayoshihiro
 */

#ifndef COMMANDEXECUTORSPY_H_
#define COMMANDEXECUTORSPY_H_

#include "CommandExecutor.h"

class CommandExecutorSpy: public CommandExecutor {
public:
	CommandExecutorSpy();
	virtual ~CommandExecutorSpy();
	int getNumberOfIssues() { return list_.getNumberOfIssues(); }
};

#endif /* COMMANDEXECUTORSPY_H_ */
