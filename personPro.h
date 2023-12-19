#pragma once
#include <iostream>
class person
{
private:
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
public:
	person() { lname = "", fname[0] = '\0'; }
	person(const std::string& ln, const char* fn = "Heyyou");
	void show() const;
	void formalShow() const;
};

void runPerson();

