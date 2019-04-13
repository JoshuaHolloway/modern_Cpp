#pragma once
#include <iostream>
using namespace std;
//---------------------------------------------------------
class Integer
{
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	int* m_pInt;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
public:
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	/// Constructors
	//Default constructor
	Integer();
	//Parameterized constructor
	Integer(int value);
	//Copy constructor
	Integer(const Integer &obj);
	//Move constructor
	Integer(Integer &&obj);
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	int GetValue()const;
	void SetValue(int value);
	//~Integer();
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	Integer operator+(const Integer& a) const
	{
		Integer temp;
		*temp.m_pInt = *m_pInt + *a.m_pInt;
		return temp;
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	Integer& operator++(); // pre-increment operator
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	Integer operator++(int); // post-increment operator
};
//---------------------------------------------------------