#pragma once
#include <iostream>
using namespace std;
class Integer
{
	int* data;

public:
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	Integer()
	{
		cout << "Integer()" << endl;
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	Integer(int value)
	{
		cout << "Integer(int)" << endl;
		data = new int(value);
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	Integer(const Integer& obj)
	{
		cout << "Integer(const Integer&)" << endl;
		data = new int(*obj.data);
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	Integer(Integer&& obj)
	{
		cout << "Integer(Integer&&) "<< endl;
		data = obj.data;
		obj.data = nullptr;
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	int get_value() { return *data; }
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	void set_value(int val) { *data = val; }
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	~Integer()
	{
		cout << "~Integer()" << endl;
		delete data;
	}
};