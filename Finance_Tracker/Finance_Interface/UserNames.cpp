#include "Finance_Interface.h"



UserNames::UserNames() {
	usersList[0] = "ArcheKnight";
	usersList[1] = "Devon";
	usersList[2] = "Joel";
	usersList[3] = "Rachel";
}


UserNames::~UserNames() {}

void UserNames::addUser(std::string name) {
	usersList.push_back(name);
}

bool UserNames::findUser(std::string name) {
	for (std::string n : usersList) {
		if (name == n) {
			return true;
		}
	}
	return false;
}
