#pragma once
#include <initializer_list>
class Vector
{
public:
	Vector() = default;
	Vector(int s);
	Vector(std::initializer_list<double>);
	~Vector();

	double& operator[](int i);
	int size() const;

	void push_back(double);

private:
	double* elem;
	int sz;
};