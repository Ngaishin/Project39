#include "salesPro.h"
#include <iostream>

namespace SALES
{

	sales::sales()
	{
		using namespace std;
		float total;
		cout << "1 quarter sales: ";
		while (!(cin >> _sales[0]))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Try again: ";
		}
		_max = _min = total = _sales[0];
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		for (int i = 1; i < q; i++)
		{
			cout << i + 1 << " quarter sales: ";
			while (!(cin >> _sales[i]))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Try again: ";
			}
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			_max = _max > _sales[i] ? _max : _sales[i];
			_min = _min < _sales[i] ? _min : _sales[i];
			total += _sales[i];
		}
		_average = total / q;
	}

	sales::sales(const double a[], int n)
	{
		float total;
		total = _sales[0] = _max = _min = a[0];
		for (int i = 1; i < n; i++)
		{
			_sales[i] = a[i];
			_max = _max > _sales[i] ? _max : _sales[i];
			_min = _min < _sales[i] ? _min : _sales[i];
			total += _sales[i];
		}
		_average = total / n;
	}

	void sales::showSales()
	{
		using std::cout;
		cout << "sales:\n";
		for (int i = 0; i < q; i++)
		{
			cout << _sales[i] << " || ";
		}
		cout << "\nmax: " << _max;
		cout << "\nmin: " << _min;
		cout << "\naverage: " << _average << "\n";
	}

}