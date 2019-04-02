#include <iostream>

int main()
{
	using std::cout;

	// Pointer examples:
	int x = 10;		// You need & to get a pointer
	int* p = &x;	//
	*p = 7;
	cout << "x = " << x << "\n";	// Prints 7
	cout << "&x = " << &x << "\n";	// Prints address of x
	cout << "p  = " << p << "\n";	// Prints address of x
	cout << "&p = " << &p << "\n";	// Prints address of pointer to x
	cout << "*p = " << *p << "\n\n";	// Prints 7
	int x2 = *p;	// read x through p
	int* p2 = &x2;	// get pointer to another int
	p2 = p;			// p2 and p both point to x
	p = &x2;		// make p point to another object

	// Corresponding Reference examples:
	int y = 10;
	int& r = y;	// The & is in the type, not in the initialization
	cout << "&y = " << &y << "\n";
	cout << "r = " << r << "\n";
	cout << "&r = " << &r << "\n";
	r = 7;			// assign to y thorugh r (no * needed)
	int y2 = r;		// read y through r (no * needed)
	int& r2 = y2;	// get a reference to another int
	r2 = r;			// r2 = 7
	//r = &y2;

	system("pause");
	return 0;
}