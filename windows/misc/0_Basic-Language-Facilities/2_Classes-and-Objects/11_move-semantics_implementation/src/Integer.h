#pragma once
#include <iostream>
class Integer {
	int *data;
public:
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	/// Default-Constructor
	Integer()
	{
		data = new int(0);
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	Integer(int val) 
	{ 
		data = new int(val); 
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	/// Copy-Constructor (deep-copy)
	Integer(const Integer& obj) // input: const L-val-ref
	{
		data = new int(*obj.data);
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	/// Move-Constructor (shallow-copy)
	Integer(Integer&& obj) // input: R-val-ref
	{
		// Step 1: Copy the address
		data = obj.data;

		// Step 2: point old pointer to null
		obj.data = nullptr;
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	/// Destructor
	~Integer()
	{
		delete data;
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	/// Overloaded add
	Integer& operator+(const Integer& integer)
	{
		Integer temp(*integer.data);
		return temp;
	}
};