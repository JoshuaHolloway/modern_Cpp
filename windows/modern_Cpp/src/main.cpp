#include <iostream>
struct Point
{
	int x;
	int y;
};

void DrawLine(int x1, int y1, int x2, int y2)
{
	// Do stuff with point
}

void DrawLine(Point begin, Point end)
{
	// So stuff with point
}

int main()
{
	Point point1;
	Point point2;
	DrawLine(point1, point2);

	return 0;
}