#include <string>
using std::string;
//---------
struct Link
{
	string value;
	Link* prev;
	Link* succ;
	Link(const string& v, 
		Link* p = nullptr, 
		Link* s = nullptr)
		: value{ v }, prev{ p }, succ{ s }
	{}
};
//--------
auto main() -> int
{
	Link* gods = new Link{"Thor"};
	gods = new Link{ "Odin", nullptr, gods };
	gods->succ->prev = gods;
	return(0);
}