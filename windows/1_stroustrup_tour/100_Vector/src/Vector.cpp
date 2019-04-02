#include "Vector.h"
#include <algorithm>
// - - - - - - - - - - - - - - - - -
Vector::Vector(int s) 
	: sz(s), elem{ new double[s] }
{
	for (int i = 0; i < s; ++i)
		elem[i] = 0;
}
// - - - - - - - - - - - - - - - - - - - - - - - -
Vector::Vector(std::initializer_list<double> lst)
	: elem{ new double[lst.size()] },
	  sz{static_cast<int>(lst.size())}
{
	std::copy(lst.begin(), lst.end(), elem);
}
// - - - - - - - - - - - - - - - - -
Vector::~Vector() { delete[] elem; }
// - - - - - - - - - - - - - - - - - - -
int Vector::size() const { return sz; }
// - - - - - - - - - - - - - - 
void Vector::push_back(double)
{
	// Page 139
}