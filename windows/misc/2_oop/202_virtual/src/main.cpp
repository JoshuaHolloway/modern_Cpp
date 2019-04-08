#include <iostream>
using std::cout;
using std::endl;
// - - - -
class base
{
public:
	virtual void print()
	{ cout << "prrint base class\n" << endl; }

	void show()
	{ cout << "show base class\n" << endl; }
};
// - - - -
class derived : public base
{
public:
	void print()
	{ cout << "print derived class\n" << endl; }

	void show()
	{ cout << "show derived class\n" << endl; }
};
// - - - -
int main()
{
	base* bptr;
	
	derived d;
	bptr = &d;

	// virtual function, binded at runtime
	bptr->print();

	// non-virtual function, binded at compile time
	bptr->show();

	return 0;
}