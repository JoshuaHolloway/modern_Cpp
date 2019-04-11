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
struct Comp2
{
	bool operator()(int x, int y)
	{
		return x > y;
	}
};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main()
{
	
	Comp(3, 5); // Global function-call

	Comp2 comp;
	comp(3, 5); // Member function-call



	int arr[]{ 1, 6, 8, 4, 0};
	for (auto x : arr)
		cout << x << " ";
	cout << endl;

	sort(arr, Comp1);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;

	return 0;
}