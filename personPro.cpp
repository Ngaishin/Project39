#include "personPro.h"
#include <cstring>
person::person(const std::string& ln, const char* fn)
{
	lname = ln;
	strcpy_s(fname, LIMIT, fn);
}
void person::show() const
{
	std::cout << fname << " " << lname << std::endl;
}
void person::formalShow() const
{
	std::cout << lname << " " << fname << std::endl;
}

void runPerson()
{
	using namespace std;
	person p1;
	person p2("Hammurabi");
	person p3("Claire", "Hammurabi");
	cout << "p1: ";
	p1.show();
	cout << "p2: ";
	p2.show();
	cout << "p3: ";
	p3.show();
	cout << "p1: ";
	p1.formalShow();
	cout << "p2: ";
	p2.formalShow();
	cout << "p3: ";
	p3.formalShow();
}