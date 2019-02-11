#include <math.h>
#include <iostream>
using std::cout;
// - - - - - - - - - - - - -
double fin_diff(double f(double), double x, double h)
{
	return (f(x + h) - f(x)) / h;
}
// - - - - - - - - - - - - -
double sin_plus_cos(double x)
{
	return sin(x) + cos(x);
}
// - - - - - - - - - - - - -
int main()
{
	cout << fin_diff(sin_plus_cos, 1., 0.001) << "\n";
	cout << fin_diff(sin_plus_cos, 0., 0.001) << "\n";
	return 0;
}