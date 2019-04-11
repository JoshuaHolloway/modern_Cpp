/// Three ways to pass multi-dimensional arrays to function
// https://stackoverflow.com/a/8767247
// -method 1: The parameter is a 2D-array
// -method 2: The parameter is an array containing pointers
// -method 3: The parameter is a point to a point

// Also:
// -method 4: Templated reference
//---------------------------------------------------------
#include <iostream>
using std::cout;
using std::endl;
constexpr int N = 2;
//---------------------------------------------------------
/// Method 1: 2D-array
void f1(int arr[][N])
{
	for (auto x : reinterpret_cast<int(&)[sizeof(arr) / sizeof(**arr)]>(arr))
		cout << x << ' ';
	cout << endl;;
}
//---------------------------------------------------------
/// Method 2: Array containing pointers
void f2(int* a[N])
{}
//---------------------------------------------------------
/// Method 3: Pointer to a pointer

//---------------------------------------------------------
/// Method 4: Templated reference
template <typename T, T N1, T N2>
void f4(T(&arr)[N1][N2])
{
	// Range-based for-loops on mD-arrays:
	// https://stackoverflow.com/questions/24317220/range-based-for-on-multi-dimensional-array
	for (auto x : reinterpret_cast<int(&)[sizeof(arr) / sizeof(**arr)] > (arr))
		cout << x << ' ';
	cout << endl;;
}
//---------------------------------------------------------
int main()
{
	// - - - - - - - - -
	int x_2D[N][N] = 
	{ 
		{1, 2}, 
		{3, 4} 
	};
	// - - - - - - - - -
	int x_3D[N][N][N] = 
	{ 
		{
			{1, 2}, 
			{3, 4}	
		},  
		{
			{1, 2}, 
			{3, 4}
		}
	};
	// - - - - - - - - -
	

	/// Method 1:
	f1(x_2D); // WHY IS THIS WRONG?

	/// Method 2:
	int* y[N];
	for (int i = 0; i < N; ++i)
		y[i] = new int[N];

	/// Method 3:



	/// Method 4:
	f4(x_2D);


	return 0;
}