#include "Car.h"
#include <iostream>

Car::Car()
{
	std::cout << "Car()\n";
}

Car::Car(float amount)
{
	fuel = amount;
}

Car::~Car()
{
	std::cout << "~Car()\n";
}

void Car::FillFuel(float amount)
{
	fuel = amount;
}

void Car::Accelerate()
{
	this->speed++;
	this->fuel -= 0.5f;
}

void Car::Brake()
{
	speed = 0;
}

void Car::Dashboard() const
{
	std::cout << "Fuel: " << fuel << "\n";
	std::cout << "Press enter to continue...\n>";
	getchar();
}

void Foo(const Car &car)
{
}

void Car::AddPassengers(int passengers)
{
	this->passengers = passengers;
	Foo(*this); // Invoke member function (which has Car object as arguement) from another member function
}
