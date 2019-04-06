#include "Integer.h"

Integer::Integer()
{
	// allocate memory for int and store zero
	m_pInt = new int(0);
}

Integer::Integer(int value)
{
	m_pInt = new int(value);
}

Integer::Integer(const Integer& obj)
{
	// Deep copy: Store value at addres in the new object
	m_pInt = new int(*obj.m_pInt);
}

Integer::~Integer()
{
	delete m_pInt;
}

int Integer::GetValue() const
{
	// Return value at address
	return *m_pInt;
}

void Integer::SetValue(int value)
{
	// Assign value
	*m_pInt = value;
}
