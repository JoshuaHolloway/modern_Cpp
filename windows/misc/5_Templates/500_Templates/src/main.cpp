// - - - - - - - - - - - - 
#include <iostream>
using namespace std;
// - - - - - - - - - - - - 
int max(int x, int y)
{
	return x > y ? x : y;
}
// - - - - - - - - - - - - 
int max(float x, float y)
{
	return x > y ? x : y;
}
// - - - - - - - - - - - - 
template <typename T>
int max_templated(T x, T y)
{
	return x > y ? x : y;
}
// - - - - - - - - - - - - 
int main()
{
	cout << max(3, 8) <<  endl;
	cout << max(3.f, 8.f) <<  endl;
	
	/// error - no double def.
	//cout << max(3.0, 8.0) <<  endl; 

	cout << max_templated(3, 8) << endl;
	cout << max_templated(3.f, 8.f) << endl;
	cout << max_templated(3.0, 8.0) << endl;

	//josh

	return 0;
}