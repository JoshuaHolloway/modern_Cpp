#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
using Comparator = bool(*)(int, int);
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
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
template<typename T, int size>
void sort(T(&arr)[size])
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
template <typename T, int size>
void print(const T(&arr)[size])
{
	for (auto v : arr)
		cout << v << " ";
	cout << endl;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
bool less_than(int x, int y) // predicate
{
	return x > y;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
bool greater_than(int x, int y) // predicate
{
	return x > y;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main()
{
	int arr[]{ 1, 6, 8, 4, 0 };
	int arr_2[5];
	std::copy(std::begin(arr), std::end(arr), std::begin(arr_2));

	print(arr);

	sort(arr);
	print(arr);

	//sort(arr_2, greater_than);
	print(arr);
	
	getchar();
	return 0;
}