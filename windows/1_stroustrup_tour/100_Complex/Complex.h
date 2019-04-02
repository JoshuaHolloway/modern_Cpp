#pragma once
class Complex
{
public:
	Complex() : re{ 0 }, im{ 0 } 
	{}
	Complex(double r) : re{ r }, im{ 0 } 
	{}
	Complex(double r, double i) : re{ r }, im{ i }
	{}
	~Complex() = default;

	double real() const { return re; }
	double imag() const { return im; }

	void real(double re) { this->re = re; }
	void imag(double im) { this->im = im; }

	Complex& operator+=(Complex z);
	Complex& operator-=(Complex z);
	Complex& operator/=(Complex z);
	Complex& operator*=(Complex z);
private:
	double re, im;
};