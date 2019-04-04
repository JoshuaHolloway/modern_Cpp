#include "Account.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	Account acc("Bob", 1e3);
	cout << " Initial balance: " <<
		acc.GetBalance() << endl;

	acc.Deposit(200);
	acc.Withdraw(380);
	cout << "Balance: " <<
		acc.GetBalance() << endl;

	system("pause");
	return 0;
}