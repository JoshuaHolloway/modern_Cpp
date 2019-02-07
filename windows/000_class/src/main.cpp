#include "Car.h"
#include <iostream>

int main()
{
	Car::ShowCount();
	const Car car(5);
	car.Dashboard();

	Car c1, c2;
	Car::ShowCount();

	getchar();
	return 0;
}