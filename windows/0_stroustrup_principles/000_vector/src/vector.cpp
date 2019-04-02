#include "vector.h"

vector::vector(int s)
	: sz{ s }, elem{ new double[s] }
{}

vector::~vector() { delete[] elem; }

int vector::size() const { return sz; }

double vector::get(int n) const { return elem[n]; }

void vector::set(int n, double v) { elem[n] = v; }