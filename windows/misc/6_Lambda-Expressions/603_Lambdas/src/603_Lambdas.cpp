#include <iostream>
using namespace std;

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
	// Follow the lambda with () to invoke it
	[]() {cout << "josh\n"; }();

	// Naming the lambda-expression
	auto lambda = []() { cout << "josh\n"; };

	// Requiring return type (mixing types)
	auto sum = [](int a, double b) -> float { return a + b; };

	// @ ~7min.

	return 0;
}