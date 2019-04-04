#include "Account.h"
#include <iostream>

// Initialize the static member
int Account::s_ANGenerator = 1e3;

Account::Account(const std::string& name, float balance)
	: m_Name(name), m_Balance(balance) { m_AccNo = ++s_ANGenerator; }
Account::~Account()
{}

const std::string Account::GetName() const { return m_Name; }

float Account::GetBalance() const { return m_Balance; }

int Account::GetAccountNo() const {	return m_AccNo; }

void Account::AccumulateInterest()
{}

void Account::Withdraw(float amount)
{
	if (amount < m_Balance)
		m_Balance -= amount;
	else
		std::cout << "Insufficient funds" << std::endl;
}

void Account::Deposit(float amount)
{}

float Account::GetInterestRate() const { return 0.0f; }