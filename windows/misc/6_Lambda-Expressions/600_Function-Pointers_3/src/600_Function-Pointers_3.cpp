// Function pointers
#include <iostream>
#include <vector>
using namespace std;
//---------------------------------------------------------
void print()
{
	cout << "Hello" << endl;
}
//---------------------------------------------------------
void print(int val)
{
	cout << val << ' ';
}
//---------------------------------------------------------
void for_each(vector<int> vec, void(*f_ptr)(int))
{
	for (auto x : vec)
		(*f_ptr)(x);
	cout << endl;
}
//---------------------------------------------------------
void for_each_2(vector<int> vec, void f(int))
{
	for (auto x : vec)
		f(x);
	cout << endl;
}
//---------------------------------------------------------
int main()
{
	// https://youtu.be/p4sDgQ-jao4

	/// Call a function via a function pointer
	// Method 1: Direct
	void(*f_ptr)() = print;
	(*f_ptr)();

	// Method 2: Alias
	typedef void(*f_ptr_typedef)();
	f_ptr_typedef f_ptr2 = print;
	f_ptr();

	/// Pass a function as a parameter to another function
	// Method 1:
	vector<int> vec{ 1, 2, 3, 4 };
	for_each(vec, print);

	// Method 2:
	for_each_2(vec, print);

	// Method 3: Lambda
	for_each(vec, [](int val){ cout << val << ' ';});



	return 0;
}