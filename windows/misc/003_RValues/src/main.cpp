#include <iostream>

// Returns r-value
int Add(int x, int y)
{
	return x + y;
}

// Returns l-value
int& Transform(int& x) // This function can be on the left-hand side of an assignment statement
{
	x *= x;
	return x;
}

int main()
{
	// L-Values:
	//	-Have a name
	//	-All variables are l-values
	//	-Can be assigned values
	//	-Some expressions return l-values
	//	-L-values persist beyond the expression
	//	-Functions that return by reference return l-values
	//	-Reference to l-values (called an l-value reference)

	// R-Values:
	//	-Does not have a name
	//	-R-value s a temporary value
	//	-Cannot be assigned values
	//	-Some expressions return r-values
	//	-Does not persist beyond the expression
	//	-Functions that return by value return r-values
	//	-R-value reference to r-value (called an r-value reference)

	// x, y, & z are l-values and 5,10, and 8 are r-values
	int x = 5;
	int y = 10;
	int z = 8;

	// Expression returns r-value
	int result = (x + y) * z;

	// Expression returns l-value
	++x = 6;

	// R-value reference:
	int &&r1 = 10;

	int &&r2 = Add(3, 2);

	//int x = 0;
	//int  &&r3 = x; // R-value reference cannot bind to an l-value


	return 0;
}