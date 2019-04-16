#pragma once
#include <iostream>
class Integer {
	int data{0};
public:
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	Integer() = default;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	Integer(int value)
	{
		data = value;
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	//Integer(const Integer& a) = default;
	Integer(const Integer& a) = delete;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	void set_value(int val)
	{
		data = val;
	}
	void set_value(float val) = delete;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
};