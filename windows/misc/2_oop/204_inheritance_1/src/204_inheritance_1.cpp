//---------------------------------------------------------
#include <iostream>
using std::cout;
using std::endl;
//---------------------------------------------------------
class Entity
{
public:
	float x, y;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - 
	void move(float x, float y)
	{
		this->x += x;
		this->y += y;
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - - 

	// - - - - - - - - - - - - - - - - - - - - - - - - - - 
};
//---------------------------------------------------------
class Player : public Entity
{
public:
	const char* name;

	void print_name()
	{
		cout << "Entity" << endl;
	}
};
//---------------------------------------------------------
int main()
{
	Player player;
	player.print_name();
	player.move(5, 5);
	player.x = 1;

	// https://youtu.be/X8nYM8wdNRE
	return 0;
}
//---------------------------------------------------------