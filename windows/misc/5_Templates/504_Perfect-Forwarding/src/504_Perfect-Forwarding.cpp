#include "Integer.h"
#include <iostream>
#include <string>
// - - - - - - - - - - - - - - - - - - - - - - - - - -
class Employee
{
	string name;
	int id;
public:
	Employee(string name, const Integer& integer)
		: name(name),
		id(integer.get_data())
	{}
};
// - - - - - - - - - - - - - - - - - - - - - - - - - -
auto main() -> int
{
	Employee emp{"josh", 100}
}