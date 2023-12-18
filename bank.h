#ifndef BANK_H_
#define BANK_H_

class bankacc
{
private:
	char _name[20];
	char _account[12];
	float _deposit;
public:
	bankacc();
	bankacc(const char name[], const char account[], float deposit=0);
	~bankacc();	
	void display();
	void Deposits();
	void Deposits(float money);
	void Withdrawals();
	void Withdrawals(float money);
};

#endif

