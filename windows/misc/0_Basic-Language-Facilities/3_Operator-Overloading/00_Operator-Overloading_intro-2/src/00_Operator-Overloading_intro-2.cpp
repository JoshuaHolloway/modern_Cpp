//---------------------------------------------------------
#include "Integer.h"
//---------------------------------------------------------
ostream& operator<<(ostream& stream, const Integer& integer)
{
	stream << integer.GetValue() << endl;
	return stream;
}
//---------------------------------------------------------
/// Operator overloading:
// -Custom implementation for primitive operators
// -Allows for usage of user-defined objects in mathematical expressions
// -Overloaded as functions but provide a convenient notation
// -Implemented as member or global functions
// -Require usage of the operator keyword
// -Syntax:
//		<ret> operator <#> (<args>)
// -# represents the overloaded operator
// -argus represent the arguements of the operator
// 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
// -When operators are overloaded as global functions
//  the number of arguements that it requires will be the 
//  same as the number of operands.
//
// -If it is overloaded as a member function, then one of the 
//  operands will be passed as an implicit operand via the "this"-pointer.
// -Therefore: 
//		--a binary operator implemented as a member function
//		  will require only one explicit arguement.
//		--a unuary operator will not require any explicit arguements.
//		e.g. [global-function]:
//			Integer operator +(const Integer& lhs, const Integer& rhs)
//		e.g. [member-function]:
//			Integer Integer::operator+(const Integer&)
//
int main()
{
	Integer int1(1), int2(2);
	auto int3 = int1 + int2;
	cout << int3 << endl << endl;

	cout << "++int3 = ";
	++int3;
	cout << int3 << endl << endl;;

	cout << "int3++ = ";
	int3++;
	cout << int3 << endl << endl;

	/// Part-2: Assignment operator
	int1 = int2;
	cout << int1;

	return 0;
}