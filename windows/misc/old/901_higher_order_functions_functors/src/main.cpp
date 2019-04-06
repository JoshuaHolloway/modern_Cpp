#include <math.h>
#include <iostream>
using std::cout;
// - - - - - - - - - - - - -
double sin_plus_cos(double x)
{
	return sin(x) + cos(x);
}
// - - - - - - - - - - - - -
struct sc_f
{
	double operator() (double x) const
	{
		return sin(x) + cos(x);
	}
};
// - - - - - - - - - - - - -
class psc_f
{
public:
	psc_f(double alpha) : alpha(alpha) {}
	double operator() (double x) const
	{
		return sin(alpha * x) + cos(x);
	}
private:
	double alpha;
};
// - - - - - - - - - - - - - - - -
template <typename F, typename T>
T inline fin_diff(F f, const T& x, const T& h)
{
	return (f(x + h) - f(x)) / h;
}
// - - - - - - - - - - - - - - - -
auto main() -> int
{
	psc_f psc_o(1.0);
	cout << fin_diff(psc_o, 1., 0.001) << "\n";
	cout << fin_diff(psc_f(2.0), 1., 0.001) << "\n";
	cout << fin_diff(sin_plus_cos, 0., 0.001) << "\n";

	return(0);
}