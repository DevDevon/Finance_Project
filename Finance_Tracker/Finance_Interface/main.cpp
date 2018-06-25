/*
	This project is designed to gradually upgrade into a user interface capable of keeping track of a user's financial information.
	Largely meant to keep track of income, expenses, and potentially more complex aspects of one's life.
*/

#include <iostream>
#include <string>

std::string userLogin();

int main() {
	//Starts with login screen. Largely insecure at first.
	//The user opens the program to general information and guide to navigation
	//Options for user include: add income, remove income, add expense, remove expense, add one time of either, get totals, and project future.
	//Stores files locally for now, potentially in the cloud if I get there.
	std::cout << 
	userLogin();
}