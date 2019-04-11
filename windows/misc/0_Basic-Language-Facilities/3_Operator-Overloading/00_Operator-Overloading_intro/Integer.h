#pragma once
#include <iostream>
//---------------------------------------------------------
class Integer
{
	int* m_pInt;

public:
	Integer();
	Integer(int value);
	Integer(const Integer& obj);
	//Integer(Integer &&obj);
	int get_value() const;
	void set_value(int value);

	~Integer();
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	Integer operator +(const Integer& a) const
	{
		Integer temp;
		*temp.m_pInt = *m_pInt + *a.m_pInt;
		return Integer();
	}
};

