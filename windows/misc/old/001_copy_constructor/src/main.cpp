#include "Integer.h"
#include <iostream>

// Case 1:
void Print(Integer obj)
{
	// ...
}

// Case 2:
Integer Add(int x, int y)
{
	Integer integer(x + y);
	return integer;
}

int main()
{
	// Copy constructor is called when:
	// Case 1. An object is passed by value into a function
	// Case 2. When a function returns object by value
	// Case 3. When you manually create a copy of the variable
	// Case 4. When one object is assigned to another object

	Integer obj_1(5);
	
	// Case 3:
	Integer obj_2(obj_1); 
	// -Crashes program if custom copy constructer is not 
	//	implemented that performs deep copy due to copying 
	//	of pointers (shallow copy) in default copy constructor.

	// Case 4: 
	Integer obj_3 = obj_1;

	// Copy of pointer via shallow copy (only copy the address)
	int* p1 = new int(5);
	int* p2 = p1; // shallow copy

	// Copy vis deep copy (copy the value at the address)
	int* p3 = new int(*p1); // deep copy

	std::cout << obj_1.GetValue() << "\n";

	// "Rule of 3": How to know which kind of classes need copy constructor and assignment operator
	// -If a user has implemented any of the following functions then they should implement all of the following functions:
	// 1. Destructor
	// 2. Copy Constructor
	// 3. Copy Assignment Operator
}