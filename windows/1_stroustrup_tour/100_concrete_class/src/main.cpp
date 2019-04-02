#include "Vector.h"
#include <istream>
//--------
Vector read(std::istream& is)
{
	Vector v;
	for (double d; is >> d;)
		v.push_back(d);
	return v;
}
//--------
int main()
{
	Vector vector(2);

	return 0;
}