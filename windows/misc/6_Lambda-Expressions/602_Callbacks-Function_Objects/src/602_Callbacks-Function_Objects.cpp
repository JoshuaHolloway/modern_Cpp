#include <iostream>
using namespace std;
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//using Comparator = bool(*)(int, int); // alias
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
template <typename T, int N, typename Comparator>
void sort(T(&arr)[N], Comparator comp)
{
	for (int i = 0; i < N - 1; ++i)
	{
		for (int j = 0; j < N - 1; ++j)
		{
			// -We can replace the function pointer here with a function object
			//  if we are able to generalize it.
			// -This is achieved by converting the comparator into a Template type
			if (comp(arr[j], arr[j + 1]))
			{
				T temp = std::move(arr[j]);
				arr[j] = std::move(arr[j + 1]);
				arr[j + 1] = std::move(temp);
			}
		}
	}
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
bool Comp(int x, int y)
{
	return x > y;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
bool Comp1(int x, int y)
{
	return x < y;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
struct Comp_Functor
{
	bool operator()(int x, int y)
	{
		return x > y;
	}
};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
template <typename T, T N>
void print(T(&arr)[N])
{
	for (auto x : arr)
		cout << x << ' ';
	cout << endl;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main()
{
	Comp(3, 5); // Global function-call

	Comp_Functor functor;
	functor.operator()(3, 5); // Same
	functor(3, 5);			  // syntactic-sugar

	int arr[]{ 1, 6, 8, 4, 0};
	print(arr);

	// Pass in function-pointer as arg -- cannot be inlined
	sort(arr, Comp1);
	print(arr);

	// Pass in functor-object as arg -- can be inlined
	sort(arr, functor);
	print(arr);

	/// Function-Object (functor-object)
	// -Object with overloaded function call operator
	// -Call to overloaded function call operator 
	//  resembles a global function call
	// -A function object can be used as a callback instead of function pointers with templates
	// -Using a function object as a callback is more efficient than fsunction pointers.
	// -Function objects are usually implemented as structures as opposed to classes.

	/// Function Pointers vs. Function Objects:
	// Function-Pointer		
	// -Invoked through a pointer
	// -Dynamic in nature
	// -Can be specified at runtime
	// -Difficult to optimize
	//		--Call to the function is made through an address
	//		--The compiler cannot know at compile-time which function is invoked through that address.
	// -Slow
	//		--Due to its dynamic nature
	// -Cannot store state

	// Function-Objects
	// -Inoked through an object
	// -Static in nature
	// -Must be speficied at compile-times
	//		--The compiler precisely knows which function has to be invoked.
	//		--Therefore, the function calls can be inlined.
	// -Fast
	//		--Due to its static nature
	// -Can store state
	


	return 0;
}