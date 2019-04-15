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
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	bool operator+(const Integer& integer)
	{
		return *m_pInt == *integer.m_pInt;
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	Integer& operator==(const Integer& integer)
	{
		// Must handle change of memory address

		// Step 0: Check for self-assignment
		if(this == &integer)

		// Step 1: Remove knowledge of current address
		delete m_pInt;

		// Step 2: Allocate space for new pointer-to-int
		//         Simultaneously copy data into newly 
		//         allocated space via copy constructor
		m_pInt = new int(*integer.m_pInt);

		// Step 3: 
		return *this;
	}

	// TODO: Rule of 5 (operator overloading - part II)
};
//---------------------------------------------------------