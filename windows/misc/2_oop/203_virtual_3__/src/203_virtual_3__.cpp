//---------------------------------------------------------
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
//---------------------------------------------------------
class Entity // Base-class
{
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
public:
	virtual string get_name() { return "Entity"; }
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
};
//---------------------------------------------------------
class Player : public Entity
{
private: 
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	string m_name;
public:
	Player(string name)
		: m_name(name)
	{}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	string get_name() override
	{ return m_name; }
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
};
//---------------------------------------------------------
void print_name(Entity* e)
{
	cout << e->get_name() << endl;
}
//---------------------------------------------------------
int main()
{
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	Entity* e = new Entity();
	cout << e->get_name() << endl;

	Player* p = new Player("zelda");
	cout << p->get_name() << endl;
	
	// Refer to a player as an entity
	Entity* entity = p; // Entity <- Player
	cout << entity->get_name() << '\n' << endl;
	// get_name() must be virtual to call the derived function
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	print_name(e);
	print_name(p);
	print_name(entity);

	//getchar();
	cin.get(); 

	// https://youtu.be/oIV2KchSyGQ
	return 0;
}