//------------------------------------------------------------
#include <iostream>
using namespace std;
//------------------------------------------------------------
template <typename T>
struct Anonomous {
	int operator()(T x, T y) const
	{
		return x + y;
	}
};
//------------------------------------------------------------
int main()
{
	/// Lambda-expressions:
	// -Defines an anonymous function-object
	// -Syntactic shortcut for a function-object
	// -Can be passed as an arguement that accepts a function-pointer
	// -Can accept parameters and return values
	// -Behaves like a normal function when invoked
	// -Replaces function objects
	// -Internally, implemented as a nameless function-object
	//		--The body of the anonomous classes overloaded
	//		  () operator will have the body of the lambda

	/// Syntax:
	// [<capture-list>](<args>)<mutable> 
	// <excp-specification> -> <return-type>
	// {<body>};
	
	// [] is the lambda-introducer
	// (<args>)				Optional arguement-list	
	// <mutable>			Mutable-Specification	(optional)
	// <excp-specification>	Exception-Specification (optional)
	// <return-type>		Trailing return-type	(optional)
	// {}					Body
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Follow the lambda with () to invoke it
	[]() {cout << "invoked-lambda!\n\n"; }();
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Naming the lambda-expression
	auto lambda = []() { cout << "josh\n"; };
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Requiring return type (mixing types)
	auto fn = [](int a, double b) -> float { return a + b; };
	cout << fn(1, 2) << endl;
	cout << typeid(fn).name() << endl;
	// -MSVC has implemented their lambda as a class.
	// -Other compilers may have a different implementation.
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	/// Lambda's are implemented as a function-object
	// Possible implementation by the compiler
	struct Unamed {
		int operator()(int x, int y) const
		{
			return x + y;
		}
	};
	
	Unamed functor; // Create instance of un-named object:
	cout << functor(1, 2) << endl;
	cout << typeid(functor).name() << endl;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	/// Polymorphic-Lambda (generic-lambda) [C++14]
	Anonomous<int> poly_lambda;
	cout << poly_lambda(1, 2) << endl;
	cout << typeid(poly_lambda).name() << endl;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	/// If lambda-does not throw exception then you can specify noexcept
	auto lambda_2 = [](int a) noexcept -> int
	{
		return a;
	};
	cout << lambda_2(1) << endl;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	/// Enable exception throwing ability
	auto lambda_3 = [](int a) noexcept(false) -> int
	{
		return a;
	};
	cout << lambda_3(1) << endl;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	return 0;
}
//------------------------------------------------------------