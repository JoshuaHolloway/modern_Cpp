/// Page 604
#include <string>
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
class Point
{
public:
	Point() = default;
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	~Point()
	{
		int debug = 0;
	}
private:
	int x, y;
};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
class Shape
{
public:
	Shape() = default;
	Shape(Point point, std::string str)
	{
		int debug;
	}
	~Shape()
	{
		int debug = 0;
	}
};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
class Text
{
public:
	Text(Point point, std::string str)
	{
		// do stuff...
		this->str = str;
	}
	~Text()
	{
		int debug = 0;
	}
private:
	std::string str;
};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Shape* fct()
{
	Text tt{ Point{200, 200}, "word-1"};
	// .
	// .
	// .
	Shape* p = new Shape{ Point{100, 100}, "word-2" };
	return p;
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
int main()
{
	Shape* q = fct();
	delete q;
	return 0;

}