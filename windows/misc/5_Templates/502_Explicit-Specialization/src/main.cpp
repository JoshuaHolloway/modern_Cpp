#include <iostream>
using namespace std;
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
/// Primare Template
template<typename T>
T max(T x, T y)
{
	cout << typeid(T).name() << endl;
	return x > y ? x : y;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
/// Explicit-Instantiation
template char max(char x, char y);
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
/// Explicit-Specialization
template<> const char * max(const char* x, const char* y)
{
	cout << "max<const char*>()" << endl;
	return strcmp(x, y) > 0 ? x : y;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main()
{
	const char *b{ "B" }; // ASCII 'B' = 11
	const char *a{ "A" }; // ASCII 'A' = 10

	auto s = max(a, b);
	cout << s << endl;

	// -We desire to compare the values at the addresses
	//  as opposed to the addresses themselves.
	// -We can use Explicit Specialization to do this.

	/// Explicit Specialization
	// -What is it?
	//		--Teplate specialized for a particular type
	// -Why use it?
	//		--Because the algorithm we implemented was 
	//		  designed for a type other than we want to use
	// -Allows us to:
	//		--Provide correct semantics for some datatype
	//		--Possibly implement an algorithm more 
	//		  efficiently for a specific type.
	// -Explicitly specialized functions must be defined 
	//  in a .cpp file.
	//		--Because explicitly specializedez functions 
	//		  are already instantiated.
	//		--Therefore, if you define them in a header file 
	//		  it causes violation of one-definition rule.
	// -The primary template definition should occur before
	//  specialization

	return 0;
}