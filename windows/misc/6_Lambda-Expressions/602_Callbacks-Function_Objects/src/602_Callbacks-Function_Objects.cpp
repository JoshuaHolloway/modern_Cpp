#include <iostream>
using namespace std;
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
using Comparator = bool(*)(int, int);
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
template <typename T, int N>
void sort(T(&arr)[N], Comparator comp)
{

}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//template<typename T, T N>
//void f1(const T(&arr)[N])
//{
//	cout << "Number of elements: ";
//	Print(N);
//
//	for (T x : arr)
//		cout << x << " ";
//	cout << endl; // flush ostream
//}
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
int main()
{
	int arr[]{ 1, 6, 8, 4, 0};
	for (auto x : arr)
		cout << x << " ";

	//sort(arr, Comp1);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;

	return 0;
}