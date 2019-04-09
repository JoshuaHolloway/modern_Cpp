// - - - - - - - - - - - - - - - - - - - - - - - -
#include <iostream>
using std::cout;
using std::endl;
// - - - - - - - - - - - - - - - - - - - - - - - -
template <typename T>
T max(T x, T y)
{
	cout << typeid(T).name() << "\n" << endl; // flush ostream
	return x > y ? x : y;
}
// - - - - - - - - - - - - - - - - - - - - - - - -
template <typename T1, typename T2>
T1 max(T1 x, T2 y)
{
	cout << typeid(T1).name() << " " << typeid(T2).name() << "\n";
	cout << "returned type is: " 
		<< typeid(T1).name() << "\n" << endl; // flush ostream
	return x > y ? x : static_cast<T1>(y);
}
// - - - - - - - - - - - - - - - - - - - - - - - -
/// Explicitly instantiate function template
template char max(char x, char y);
// - - - - - - - - - - - - - - - - - - - - - - - -
auto main() -> int
{
	// Template instantiation occurs at following point:
	// (1). Instantiation of function
	// (2). Accessing functions address
	//		long(*max)(long, long) = max; // Causes template instantiation
	// (3). Explicit instantiation of function template
	// (4). Create explicity specialization of function template


	max(3, 8);
	max(3., 8.);
	max<double>(3., 1); // override compilers deduction process

	max(3, 8.);

	return 0;
}