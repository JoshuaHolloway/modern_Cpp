#pragma once
class Car 
{
public:
	Car();
	Car(float amount);
	Car(float amount, int passengers);
	~Car();

	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassengers(int count);
	void Dashboard() const;
	void increment_totalCount() const;

	// All member functions that do not modify the state 
	// of the object should be qualified with const

	// Static member functions:
	// -Qualifier required only in declaration
	// -Belong to class and not objects
	// -Do not receive "this" pointer
	// -Can only access static members of the class
	static void ShowCount();

private:
	float fuel{0.f};
	float speed{0.f};
	int passengers{0};

	// Belongs to class, but no specific object
	static int totalCount;
};