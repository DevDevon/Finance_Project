#include "Finance_Interface.h"

double UserInfo::getTIncome() const { return tIncome; };
double UserInfo::getTExpense() const { return tExpense; };
double UserInfo::getTLeft() const { return tLeft; };

UserInfo::UserInfo() {
	userName = "";
	tIncome, tExpense, tLeft = 0;
}

UserInfo::~UserInfo() {}

//TODO pull from external file
void UserInfo::getUserInfo(std::string Name) {
	userName = Name;

	//read from file
	tIncome = sumIncome();
	tExpense = sumExpense();
	tLeft = tExpense - tIncome;
}

//sums the incomes in the vectors
double UserInfo::sumIncome() {
	double sIncome = 0;
	for (double i : iIncome) {
		tIncome += i;
	}
	return sIncome;
}

//sums the expense in the vectors
double UserInfo::sumExpense() {
	double sExpense = 0;
	for (double e : iExpense) {
		sExpense += e;
	}
	return sExpense;
}


