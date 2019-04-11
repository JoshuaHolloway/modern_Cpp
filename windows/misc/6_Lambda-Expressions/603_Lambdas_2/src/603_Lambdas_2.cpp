#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;
//---------------------------------------------------------
void print(int val) { cout << val << ' '; }
//---------------------------------------------------------
//void ForEach(const std::vector<int>& values, void(*func)(int))
void ForEach(const std::vector<int>& vec, const function<void(int)>& f)
{
	for (int x : vec)
		f(x);
}
//---------------------------------------------------------
int main()
{
	// https://youtu.be/mWgmBBz0y8c

	std::vector<int> vec = { 1, 5, 4, 2, 3};
	
	// Custom function
	auto lambda_1 = [](int val) { cout << val << ' ';  };
	ForEach(vec, lambda_1);
	cout << endl;

	// std::find_if
	auto lambda_2 = [](int value) {	return value > 1; };
	auto itterator = find_if(vec.begin(), vec.end(),  lambda_2);
	cout << *itterator++ << endl;
	cout << *itterator++ << endl;
	cout << *itterator++ << endl;



	return 0;
}