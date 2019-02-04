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
	void Dashboard();

private:
	float fuel{0.f};
	float speed{0.f};
	int passengers{0};
};