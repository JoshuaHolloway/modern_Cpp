#include <iostream>
#include <string>
using namespace std;
//---------------------------------------------------------
struct Vector2
{
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	float x, y;
	// - - - - - - - - - - - - - - - - - - - - - - - - - - 
	Vector2(float x, float y)
		: x(x), y(y)
	{}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	Vector2 add(float x, float y)
	{
		Vector2 vec(0, 0);
		vec.x = this->x + x;
		vec.y = this->y + y;
		return vec;
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	Vector2 add(const Vector2& vec)
	{
		return Vector2{vec.x + x, vec.y + y};
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	Vector2 operator+(const Vector2& vec)
	{
		return add(vec);
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
	Vector2 operator*(const Vector2& vec)
	{
		return Vector2{vec.x * x, vec.y * y};
	}
	// - - - - - - - - - - - - - - - - - - - - - - - - - -
};
//---------------------------------------------------------
ostream& operator<<(ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y;
	return stream;
}
//---------------------------------------------------------
int main()
{
	Vector2 vec1(1, 2);
	Vector2 vec2(2, 3);

	// Vector2 add-function v1
	Vector2 vec3_v1= vec1.add(vec2.x, vec2.y);
	cout << vec3_v1 << endl;

	// Vector2 add-function v2
	Vector2 vec3_v2 = vec1.add(vec2);
	cout << vec3_v2 << endl;

	// Vector2 add-function v3
	Vector2 vec3_v3 = vec1 + vec2;
	cout << vec3_v3 << endl;

	return 0;
}