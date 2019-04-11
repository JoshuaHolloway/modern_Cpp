#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
/// Typedef of function-pointer for easier use
//using f_ptr_name = void(*)(int);
//typedef void(*f_ptr_name)(int);
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
using Comparator = bool(*)(int, int);
//typedef bool(*Comparator)(int, int);
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
template<typename T, int size>
void Sort(T(&arr)[size], Comparator comp)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			// Function pointer passed into function
			// determines behavier here
			if (comp(arr[j], arr[j + 1]))
			{
				// -if T is a user-defined type there 
				//  are multiple copies here without 
				//  using move-semantics
				T temp = std::move(arr[j]);
				arr[j] = std::move(arr[j + 1]);
				arr[j + 1] = std::move(temp);			}
		}
	}
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
/// -Explicit-insantiation (not-required)
constexpr int N{5};
template void Sort(int(&)[N], Comparator);
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
template <typename T, int size>
void print(const T(&arr)[size])
{
	for (auto v : arr)
		cout << v << " ";
	cout << endl;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
/// Predicate: Function that returns boolean-value
bool less_than(int x, int y) { return x > y; }  // pPredicate
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
bool greater_than(int x, int y) { return x > y; } // Predicate
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main()
{
	// Create toy-array
	const int arr[]{ 1, 6, 8, 4, 0 };
	print(arr);

	// Make mutable copies
	int arr_1[5], arr_2[5];
	std::copy(std::begin(arr), std::end(arr), arr_1);
	std::copy(std::begin(arr), std::end(arr), arr_2);

	// Pass in function-pointer as predicate
	Sort(arr_1, greater_than);
	print(arr_1);
	
	// Repeat with lambda
	Sort(arr_2, [](int x, int y) { return x > y; });
	print(arr_2);

	/// Draw-backs with using function-pointer as arg
	// Drawback 1:
	//  -Sort is a function-template so it is instantiated at compile time
	//  -However, the invocation of the Comparator function through 
	//   the use of a function-pointer makes it such that we only
	//   know the exact function-pointer to dereference at run-time.
	//	 	--Therefore, the compiler cannot optimize this function.
	//  -Solution is to apply explicit-instantiation or to use Functors.
	//
	// Drawback 2:
	//  -Function-pointers point to global-functions.
	//  -Global-functions cannot have state.
	//  -Solution (again) is Functors.



	getchar();
	return 0;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -