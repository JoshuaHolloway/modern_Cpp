#pragma once
#include "Savings.h"

#include "Account.h"
class Savings :	public Account
{
public:
	Savings(
		std::string &name,
		float balance,
		float rate);
	~Savings();

	float GetInterestRate() const;
	void AccumulateInterest();
private: 
	float m_Rate;
};