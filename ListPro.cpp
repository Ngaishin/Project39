#include "ListPro.h"

void runList()
{
	using std::cout;
	using std::endl;
	List<double> l1(5);
	cout << "createNew------------------\n";
	cout << "full: " << l1.isFull() << endl;
	cout << "empty: " << l1.isEmpty() << endl;

	cout << "add items------------------\n";
	l1.add(2.5).add(3.3).add(2).add(3).add(3);
	l1.dis();

	cout << "full: " << l1.isFull() << endl;
	cout << "empty: " << l1.isEmpty() << endl;
	cout << "calculate------------------\n";
	l1.visit(add_2).visit(div_2);
	l1[3] += 1000;
	l1.dis();
	cout << "l1[3]: " << l1[3];

}


void add_2(int& i)
{
	i += 2;
}
void div_2(int& i)
{
	i /= 2;
}
void add_2(double& i)
{
	i += 2;
}
void div_2(double& i)
{
	i /= 2;
}

