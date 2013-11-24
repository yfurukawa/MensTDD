#include "ToDo.h"

ToDo::ToDo() {

}

ToDo::ToDo(std::string name, std::string contents, std::string dueDate,
		std::string registDate) : name_(name), contents_(contents), dueDate_(dueDate), registDate_(registDate) {
}

ToDo::~ToDo() {

}

std::string ToDo::getName() {
	return name_;
}

std::string ToDo::getContents() {
	return contents_;
}

std::string ToDo::getDueDate() {
	return dueDate_;
}

std::string ToDo::getRegistDate() {
	return registDate_;
}
