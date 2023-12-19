#include "golfPro.h"
#include <cstring>
#include <iostream>

golf::golf()
{
	setgolf();
}
golf::golf(const char* name, int hp)
{
	strcpy_s(fullname, 40, name);
	handicap = hp;
}
void golf::setgolf(const char* name, int hp)
{
	strcpy_s(fullname, 40, name);
	handicap = hp;
}

void golf::setgolf()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char name[40];
	cout << "name: ";
	cin.getline(name, 40);
	strcpy_s(fullname, 40, name);

	cout << "handicap: ";
	while (!(cin >> handicap))
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "##Incorrect input!\n->please enter integer: ";
	}
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
void golf::showgolf()
{
	std::cout << fullname << " : " << handicap << std::endl;
}