#include "Car.h"
#include <iostream>

int Car::totalCount = 0;

void Car::ShowCount()
{
	std::cout << "Total number of cars: " << totalCount << "\n";
}

Car::Car() : Car(0) // Constructor delegation
{
	std::cout << "Car()\n";
}

Car::Car(float fuel) : Car(fuel, 0) // Constructor delegation
{
	std::cout << "Car(fuel)\n";
}

Car::Car(float fuel, int passengers)
{
	std::cout << "Car(fuel, passengers)\n";

	++totalCount;
	this->fuel = fuel;
	speed = 0;
	passengers = 0;
}

Car::~Car()
{
	totalCount--;

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
}

void Foo(const Car &car)
{
}

void Car::AddPassengers(int passengers)
{
	this->passengers = passengers;
	Foo(*this); // Invoke member function (which has Car object as arguement) from another member function
}
