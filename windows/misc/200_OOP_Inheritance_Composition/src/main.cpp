#include <iostream>
using std::cout;
using std::endl;
class Animal
{
public:
	void Eat() { cout << "Animal eating" << endl; }
	void Run() { cout << "Animal running" << endl; }
	void Speak() { cout << "Animal speaking" << endl; }
};
//=======================
class Dog : public Animal
{
public:
	void Eat()	{ cout << "Dog eating meat" << endl; }
	void Speak() { cout << "Dog speaking chinese" << endl; }
};
//========
int main()
{
	Dog d;
	d.Eat();
	d.Run();
	d.Speak();
	system("pause");
	return 0;
}