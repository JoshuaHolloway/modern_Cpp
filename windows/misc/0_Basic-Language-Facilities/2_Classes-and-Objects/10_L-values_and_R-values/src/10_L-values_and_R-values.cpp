//---------------------------------------------------------
#include <iostream>
using std::cout;
using std::endl;
//---------------------------------------------------------
// Returns r-value
int Add(int x, int y)
{
	return x + y;
}
//---------------------------------------------------------
// Returns l-value
int& Transform(int& x) // This function can be on the left-hand side of an assignment statement
{					   // => We can assign a value to this function
					   //    -The value will be assigned to the return type of the transform function
	x += x;
	return x;
}
//---------------------------------------------------------
void Print(int& x) // L-value reference input
{
	cout << "Print(int&)\n" << endl;
}
////---------------------------------------------------------
void Print(const int& x) // const L-value reference input
{
	cout << "Print(const int&)\n" << endl;
}
//---------------------------------------------------------
void Print(int&& x) // R-value reference input
{
	cout << "Print(const int&&)\n" << endl;
}
//---------------------------------------------------------
int main()
{
	// L-Values:
	//	-Have a name
	//	-All variables are l-values
	//	-Can be assigned values
	//	-Some expressions return l-values
	//	-Persist beyond the expression
	//	-Functions that return by reference return l-values
	//	-L-value References:
	//		--Called an L-value reference
	//		--L-value references always need an L-value
	//		--L-value references always bind to L-values
	//			---L-values nevery bind to temporaries

	// R-Values:
	//	-Does not have a name
	//	-R-value is a temporary value
	//	-Cannot be assigned values
	//	-Some expressions return r-values
	//	-Does-not persist beyond the expression
	//	-Functions that return by value return r-values
	//	-R-value references (C++11):
	//		--Always created to a temporary
	//		--Represents a temporary value
	//		--Created with && operator 
	//			---"r-value reference operator"
	//		--Cannot point to an L-value
	//		--Cannot "bind" to L-values
	//			---Always bind to temporaries

	// x, y, & z are l-values and 5, 10, and 8 are r-values
	int x = 5;
	int y = 10;
	int z = 8;

	// Expression returns r-value
	int result = (x + y) * z;

	// Expression returns l-value
	++x = 6;

	// R-value reference:
	int &&r1 = 10;			// R-value reference to a temp
	int &&r2 = Add(3, 2);	// Add returns by value (temporary)
	// Bind to the temporary returned by Add()

	int &&r3 = 7 + 2;		// R-value reference to a temp

	/// R-value reference cannot bind to an l-value
	//int x = 0;
	//int  &&r4 = x; 
	
	/// L-value reference will always bind to an L-value
	int &r4 = Transform(x); // function returns by reference (L-value)
	//int &r5 = Add(x, y); // function returns by value (R-value)

	/// L-value reference can bind to a temp if the L-value is const
	const int &r5 = 5;

	// -The purpose of R-value references is that they allow us to detect temporaries in expressions.
	//	=> We can write functions that overload based on R-values and L-value references

	Print(x); // function-1 (L-val-ref input)
	Print(0); // function-2 (const L-val-ref input) - binds to function-2 if overloaded R-value input is not available
			  // function-3 (R-val-ref input) - binds to function-3 if both R-val-ref and const L-val-ref are both available

	// -Used to detect temporaries in expressions that use user-defined objects.
	// -Used to implement move-semantics
	//		--Provides faster method of copying temporary objects

	return 0;
}