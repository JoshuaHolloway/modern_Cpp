#pragma once
#include <cmath>
//---------------------------------------------------------
double fin_diff(double f(double), double x, double h)
{
	return (f(x + h) - f(x)) / h;
}
//---------------------------------------------------------
double sin_plus_cos(double x)
{
	return sin(x) + cos(x);
}
//---------------------------------------------------------