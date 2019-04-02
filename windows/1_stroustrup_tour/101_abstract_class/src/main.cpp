//#include "Container.h"
#include "Vector.h"
#include <iostream>
// - - - - - - -
class Container
{
public:
	//virtual double& operator[](int i);
	virtual int size() const = 0;
	virtual ~Container() {}
private:
	Vector v;
};
// - - - - - - - - - - - - - - - - - - - -
class Vector_container : public Container
{
public:
	Vector_container()
	{
		int debug = 0;
	}
	Vector_container(int s) : v(s) {};
	~Vector_container() = default;

//	double& operator[](int i) override { return v[i]; }
	int size() const override { return v.size(); }
private:
	Vector v;
};
// - - - -
void use(Container& c)
{
	const int sz = c.size();
	for (int i = 0; i != sz; ++i)
		//std::cout << c[i] << " ";
	std::cout << "\n";
}
// - - - -
int main()
{
	//Container c; // error: there can be no objects of an abstract class
	Container* p = new Vector_container(10);
	//use(*p);
	//Container* p = new Vector_container;
	return 0;
}