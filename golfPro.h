#pragma once
class golf
{
private:
	static const int len = 40;
	char fullname[len];
	int handicap;
public:
	golf();
	golf(const char* name, int hp = 0);
	void setgolf(const char* name, int hp = 0);
	void setgolf();
	void showgolf();

};

