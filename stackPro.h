#pragma once

struct customer
{
	char fullname[35];
	double payment;
};

class cuStack
{
private:
	enum {sSize=6};
	customer cstack[sSize];
	int ptr;
public:
	cuStack();
	bool push(const customer & c);
	bool pop(customer& c);
};

void runStack();

