#include <iostream>
using namespace std;
// - - - - - - - - - -
void add(int a, int b)
{
	int c = a + b;
}
// - - - - - - - - - - - - - -
void add(int a, int b, int& c)
{
	c = a + b;
}
// - - - - - - - 
void EndMessage()
{
	cout << "end of program" << endl;
	getchar();
}
// - - - -
int main()
{
	void(*func_ptr_1)(int, int) = add;
	(*func_ptr_1)(1, 2);

	int c;
	void(*func_ptr_2)(int, int, int&) = add;

	getchar();
	return 0;
}