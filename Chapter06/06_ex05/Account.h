#include <iostream>
using namespace std;

class Account {
private:
	double balance;
public:
	explicit Account( double balance );
	double getBalance() const;
	void deposit(double amount);
	void withdraw(double amount);
};
