// extend prj 202_virtual to take derived class as arguement to function
#include <iostream>
using std::cout;
using std::endl;
// - - - -
class Base
{
public:
	virtual void print()
	{ cout << "prrint base class\n" << endl; }

	void show()
	{ cout << "show base class\n" << endl; }
};
// - - - -
class Derived : public Base
{
public:
	void print()
	{ cout << "print derived class\n" << endl; }

	void show()
	{ cout << "show derived class\n" << endl; }
};
// - - - -
void f(Base* ptr)
{
	ptr->print();

	ptr->show();
}
// - - - -
int main()
{
	Base x;
	Derived y;

	// Pass in pointer to object of Base-class
	f(&x);

	// Pass in pointer to object of Derived-class
	f(&y);
	
	const int CHUNK_SIZE = 512;
	const int* const ptr  = &CHUNK_SIZE;

	return 0;
}