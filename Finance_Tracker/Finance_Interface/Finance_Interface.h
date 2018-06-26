#pragma once
#include <string>
#include <vector>

class UserInfo
{
public:
	UserInfo();
	~UserInfo();

	double getTIncome() const;
	double getTExpense() const;
	double getTLeft() const;

	void getUserInfo(std::string userName);

private:
	double sumIncome();
	double sumExpense();

	std::string userName;
	double tIncome, tExpense, tLeft;
	std::vector<double> iIncome, iExpense;
	std::vector<std::string> dIncome, dExpense;
};

class UserNames
{
public:
	UserNames();
	~UserNames();

	void addUser(std::string);
	bool findUser(std::string);

private:
	std::vector<std::string> usersList;
};
