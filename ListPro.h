#pragma once
#include <iostream>

void runList();

template<typename T>
class List
{
private:
	T* data;
	int qty;
	int size;
	//static int _num;

public:
	List(int quantity)
		:size(quantity), qty(0)
	{
		data = new T[size];
	}

	bool isEmpty()
	{
		return qty == 0;
	}
	bool isFull()
	{
		return qty == size;
	}
	List& add(const T& t)
	{
		if (qty < size)
		{
			data[qty++] = t;
			return *this;
		}
		else
		{
			std::cout << "List is full.\n";
			return *this;
		}
	}
	void dis()
	{
		if (qty != 0)
		{
			for (int i = 0; i < qty; i++)
				std::cout << data[i] << '\n';
		}

	}
	List& visit(void (*pf)(T&))
	{
		for (int i = 0; i < qty; i++)
		{
			(*pf)(data[i]);
		}
		return *this;
	}

	T& operator [](int index)
	{
		if (index >= 0 && index < size)
			return data[index];
		else
			throw std::out_of_range("Index out of range\n");
	}
};

//template<typename T>
//int List<T>::_num = 0;

void add_2(int&);
void add_2(double&);
void div_2(int&);
void div_2(double&);

