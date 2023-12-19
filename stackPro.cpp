#include "stackPro.h"
#include <iostream>

cuStack::cuStack()
{
	ptr = 0;
}
bool cuStack::push(const customer& c)
{
	if (ptr < sSize )
	{
		cstack[ptr++] = c;
		return 1;
	}
	else
		return 0;
}
bool cuStack::pop(customer& c)
{
	if (ptr > 0)
	{
		c = cstack[--ptr];
		return 1;
	}
	else
		return 0;
}

void runStack()
{
	using std::cout;
	cuStack stk;
	customer c1{ "Hammurabi",1.1 };
	customer c2{ "Iammurabi",2.2 };
	customer c3{ "Jammurabi",3.3 };
	customer c4{ "Kammurabi",4.4 };
	customer c5{ "Lammurabi",5.5 };
	customer c6{ "Mammurabi",6.6 };
	customer c7{ "Nammurabi",7.7 };
	customer t;
	while (!stk.push(c1)) { cout << "stack is full!\n"; break; }
	while (!stk.push(c5)) { cout << "stack is full!\n"; break; }
	while (!stk.push(c3)) { cout << "stack is full!\n"; break; }
	while (!stk.push(c2)) { cout << "stack is full!\n"; break; }
	while (!stk.push(c4)) { cout << "stack is full!\n"; break; }
	while (!stk.push(c7)) { cout << "stack is full!\n"; break; }
	while (!stk.push(c6)) { cout << "stack is full!\n"; break; }

	for (int i = 0; i < 8; i++)
	{
		if (!stk.pop(t))
		{
			cout << "stack is empty!\n";
		}
		else
			cout << "pop " << i + 1 << " : " << t.fullname << " #" << t.payment << std::endl;
	}

}