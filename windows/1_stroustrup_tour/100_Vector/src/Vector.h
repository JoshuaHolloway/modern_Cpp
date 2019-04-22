#pragma once
#include <initializer_list>
class Vector
{
public:
	Vector() = default;						// default-constructor
	Vector(int s);							// parameterized-constructor
	Vector(std::initializer_list<double>);
	~Vector() { delete elem; };				// destructor

	// Copy-constructor
	Vector(const Vector& a);

	// Copy-assignment
	Vector& operator=(const Vector& a);


	double& operator[](int i);
	const double& operator[](int i) const;

	int size() const;
	void push_back(double);

private:
	double* elem;
	int sz;
};