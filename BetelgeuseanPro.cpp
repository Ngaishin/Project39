#include "BetelgeuseanPro.h"
#include <cstring>
#include <iostream>

plorg::plorg(const char name[], int CI)
{
	strcpy_s(_name, 20, name);
	_CI = CI;
}
void plorg::mulCI(int i)
{
	_CI = i;
}
void plorg::show()
{
	std::cout << "name: " << _name << "  " << _CI << "\n";
}