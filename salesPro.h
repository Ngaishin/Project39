#pragma once
namespace SALES
{
	class sales
	{
	private:
		static const int q = 4;
		double _sales[q];
		double _average;
		double _max;
		double _min;
	public:
		sales();
		sales(const double a[], int n = 0);
		void showSales();
	};
}

