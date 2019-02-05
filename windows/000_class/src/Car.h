#pragma once
class Car 
{
public:
	Car();
	Car(float amount);
	~Car();

	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassengers(int count);
	void Dashboard() const;

	// All member functions that do not modify the state of the object
	// should be qualified with const

private:
	float fuel{0.f};
	float speed{0.f};
	int passengers{0};
};