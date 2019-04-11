#include <iostream>
#include <vector>
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
using std::cout;
using std::endl;
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void PrintValue(int value)
{
	std::cout << "Value: " << value << std::endl;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
template<typename T, T N>
void f(T(&arr)[N])
{
	cout << "array has " << N << "-elements\n";
	for (T x : arr)
		cout << x << " ";
	cout << endl; // flush ostream
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main()
{
	/// Function pointer
	void(*f_ptr_1)(int) = PrintValue;
	(*f_ptr_1)(1);

	/// Function pointer asignment with typedef
	typedef void(*f_ptr_name)(int);
	f_ptr_name f_ptr_2 = PrintValue;
	f_ptr_2(1);

	/// Function pointer as arg to function
	std::vector<int> values = { 1, 5, 4, 2, 3 };
	ForEach(values, PrintValue);

	/// Pass static-array by reference with its size known
	int arr[4] = {1, 2, 3, 4};
	f(arr);

	return 0;
}