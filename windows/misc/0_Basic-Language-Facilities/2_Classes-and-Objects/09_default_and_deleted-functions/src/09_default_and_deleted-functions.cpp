// -Can use default constructor with functions 
//  synthesizable by compiler:
//		--Destructor
//		--Copy Constructor
//		--Assignment Operator
// -Cand use delete to force compiler to NOT
//  generate function.
//		--delete can be used on any function.

#include "Integer.h"
int main()
{
	Integer i1;
	//Integer i2(i1);

	i1.set_value(1);
	
	/// force compiler to not allow floats
	//i1.set_value(1.f); // Compiler allows this without delete
}