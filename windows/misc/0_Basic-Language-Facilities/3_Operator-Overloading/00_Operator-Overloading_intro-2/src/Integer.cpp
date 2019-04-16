#include "Integer.h"
// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
/// Default-Constructor
Integer::Integer() {
	std::cout << "Integer()" << std::endl;
	m_pInt = new int(0);
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
/// Parameterized-Constructor
Integer::Integer(int value) {
	std::cout << "Integer(int)" << std::endl;
	m_pInt = new int(value);
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - -
/// Copy-Constructor
Integer::Integer(const Integer & obj) {
	std::cout << "Integer(const Integer&)" << std::endl;
	m_pInt = new int(*obj.m_pInt);
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
/// Move-Constructor
Integer::Integer(Integer && obj) 
{
	std::cout << "Integer(int&&)" << std::endl;
	m_pInt = obj.m_pInt;
	obj.m_pInt = nullptr;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
int Integer::GetValue() const {
	return *m_pInt;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void Integer::SetValue(int value) {
	*m_pInt = value;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Integer& Integer::operator++()
{
	++(*m_pInt);
	return *(this);
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Integer Integer::operator++(int val)
{
	/// Post-increment:
	// -Value is returned, then it is incremented.
	// -To simulate this desired behavior, we first 
	//  create a temporary variable and copy into it.
	Integer temp(*this); // copy-constructor

	// Increment and return the old value
	++(m_pInt);

	// Cannot return by reference since temp is a local-variable
	return temp;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - 