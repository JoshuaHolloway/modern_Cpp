#include "Complex.h"

Complex& Complex::operator+=(Complex z)
{
	re += z.re;
	im += z.im;
	return *this;
}

Complex& Complex::operator-=(Complex z)
{
	re -= z.re;
	im -= z.im;
	return *this;
}
