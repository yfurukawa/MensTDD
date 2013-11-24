#include "ToDoList.h"
#include "ToDo.h"

ToDoList::ToDoList() {

}

ToDoList::~ToDoList() {
	for(auto todo : issues_)
	{
		delete todo;
	}
}

void ToDoList::add(ToDo* todo) {
	issues_.push_back(todo);
}

int ToDoList::getNumberOfIssues() {
	return issues_.size();
}

ToDo* ToDoList::showLastToDo() {
	return issues_.back();
}
