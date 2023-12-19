#pragma once
class plorg
{
private:
	char _name[20];
	int _CI;
public:
	plorg(const char name[] = "Plorga", int CI = 50);
	void mulCI(int);
	void show();

};

