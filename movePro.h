#pragma once
class Move
{
private:
	double x;
	double y;
	int num;
	static int i;
public:
	Move(double a = 0, double b = 0);
	~Move();
	void showmove() const;
	Move moveAdd(const Move& m) const;
	void reset(double a = 0, double b = 0);
};

void runMove();

