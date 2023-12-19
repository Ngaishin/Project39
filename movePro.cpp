#include "movePro.h"
#include <iostream>

int Move:: i=1;
Move::Move(double a, double b)
	:x(a), y(b)
{
	num = i;
	i++;
	std::cout << "constructor: " << num << std::endl;
}
Move::~Move()
{
	std::cout << "destructor: " << num << std::endl;
}
void Move::showmove() const
{
	std::cout << '(' << x << ',' << y << ')' << std::endl;
}
Move Move::moveAdd(const Move& m) const
{
	Move tem{ x + m.x,y + m.y };
	return tem;
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
void runMove()
{
	Move m1;
	Move m2(1, 2);
	m1.showmove();
	m1 = m1.moveAdd(m2).moveAdd(m2).moveAdd(m2).moveAdd(m2).moveAdd(m2);
	m1.showmove();
	m1.reset();
	m2.showmove();
}
