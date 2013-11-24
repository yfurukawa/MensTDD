#ifndef TODOLIST_H_
#define TODOLIST_H_

#include <vector>

class ToDo;

class ToDoList {
public:
	ToDoList();
	virtual ~ToDoList();
	void add(ToDo* todo);
	int getNumberOfIssues();
private:
	std::vector<ToDo*> issues_;
};

#endif
