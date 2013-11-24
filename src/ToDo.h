#ifndef TODO_H_
#define TODO_H_

#include <string>

class ToDo {
private:
	ToDo();
	std::string name_;
	std::string contents_;
	std::string dueDate_;
	std::string registDate_;
public:
	ToDo(std::string name, std::string contents, std::string dueDate, std::string registDate);
	virtual ~ToDo();
	std::string getName();
	std::string getContents();
	std::string getDueDate();
	std::string getRegistDate();
};

#endif
