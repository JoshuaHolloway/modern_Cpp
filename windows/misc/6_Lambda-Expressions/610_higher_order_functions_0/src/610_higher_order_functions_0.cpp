#include "610_higher_order_functions_0.h"
#include <iostream>
using std::cout;
using std::endl;
//---------------------------------------------------------
int main()
{
	// (d/dx) (sin(x)+cos(x)) = (cos(x) - sin(x))

	cout << fin_diff(sin_plus_cos, 1., 1e-6) << '\n';
	cout << fin_diff(sin_plus_cos, 0., 1e-6) << '\n';
	return 0;
}