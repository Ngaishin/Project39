#include "bank.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bankacc::bankacc()
{
	strcpy_s(_name, 5, "None");
	strcpy_s(_account, 5, "None");
	_deposit = 0;
}
bankacc::bankacc(const char name[], const char account[], float deposit)
{
	strcpy_s(_name, 20, name);
	strcpy_s(_account, 12, account);
	_deposit = deposit;
}

bankacc::~bankacc()
{
	std::cout << "destructor done.";
}

void bankacc::display()
{
	std::cout << "\n=============\n";
	cout << "name: " << _name;
	cout << "\naccount: " << _account << endl;
	cout << "deposit: " << _deposit << endl;
	std::cout << "=============\n";
}
void bankacc::Deposits()
{
	float money;
	cout << "\aEnter deposit amount: ";
	while (!(cin >> money))
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Incorrect input!\ntry again: ";
	}
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	_deposit += money;
}

void bankacc::Deposits(float money)
{
	_deposit += money;
}

void bankacc::Withdrawals()
{
	float money;
	cout << "\aEnter the withdrawal amount: ";
	while (!(cin >> money) or (money > _deposit))
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Incorrect input or no enough money!\ntry again: ";
	}
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	_deposit -= money;
}
void bankacc::Withdrawals(float money)
{
	if (money <= _deposit)
		_deposit -= money;
	else
		cout << "No enough money!\n";
}