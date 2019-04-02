#pragma once
class vector
{
private:
	int sz;
	double* elem;

public:
	vector() = default;
	vector(int s);
	~vector();

	int size() const;
	double get(int n) const;
	void set(int n, double v);
};