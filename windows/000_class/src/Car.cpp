#include "Car.h"
#include <iostream>

int Car::totalCount = 0;

void Car::increment_totalCount() const
{
	// Use the static member variable to keep count of the
	// total number of objects created of this class
	totalCount++;
}

void Car::ShowCount()
{
	std::cout << "Total number of cars: " << totalCount << "\n";
}

Car::Car()
{
	increment_totalCount();
	std::cout << "Car()\n";
}

Car::Car(float fuel)
{
	increment_totalCount();
	this->fuel = fuel;
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
