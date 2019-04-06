#include <iostream>
class Integer
{
	int m_Value{0};
public:
	// Default keyword can be used with functions
	// that can be synthesized by the compiler:
	//	-Constructor
	//	-Copy Constructor
	//	-Assignment Operator
	Integer() = default;

	Integer(int value)
	{
		m_Value = value;
	}

	// If it is desired to have the class to not have a
	// compiler generated copy constructor then use the
	// keyword delete
	Integer(const Integer&) = delete;

	// delete can be used on any kind of function

	void SetValue(int value)
	{
		m_Value = value;
	}

	// The compiler will allow a float as the 
	//	arguement without the following line
	void SetValue(float) = delete;
};

int main()
{
	Integer i1;		// Default constructor
	Integer i2(9);	// Parameterized constructor
	//Integer i3(i2); // Error due "delete" keyword
	i1.SetValue(6);
	//i1.SetValue(42.4f); // Error due to float type

	return(0);
}