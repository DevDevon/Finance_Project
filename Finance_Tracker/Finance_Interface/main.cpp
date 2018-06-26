/*
	This project is designed to gradually upgrade into a user interface capable of keeping track of a user's financial information.
	Largely meant to keep track of income, expenses, and potentially more complex aspects of one's life.
*/

#include <iostream>
#include <string>
#include "Finance_Interface.h"

std::string firstIntro();
std::string userLogin();

UserNames UsersList;

int main() {
	//Starts with login screen. Largely insecure at first. Can sign up or sign in.
	//The user opens the program to general information and guide to navigation
	//Options for user include: add income, remove income, add expense, remove expense, add one time of either, get totals, and project future.
	//Stores files locally for now, potentially in the cloud if I get there.

	//add a user option
		//validate non-duplicate user	
		//validate correct input
		//create user's class
	//sign in option
		//check for user based on input
		//eventually use a password to verify identity

	std::string userName = firstIntro();


	userName = userLogin();
	
}

std::string firstIntro() {
	std::string fName;

	std::cout << "Hello! Please enter your username to log in, or enter \"new\" if you are a new user.\n";
	std::cin >> fName;

	

	return std::string();
}

//Asks for username and eventually a password to confirm
std::string userLogin() {
	std::string userName = "";

	std::cout << "Hello, please enter your UserName: ";
	std::cin >> userName;

	//TODO add password protection

	return userName;
}
