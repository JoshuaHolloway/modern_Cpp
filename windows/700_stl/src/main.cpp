#include <vector>
#include <algorithm>
#include <iostream>
typedef unsigned int uint;
// ----------------------------------------------
struct Min_Max_Struct
{
	uint min_idx, min_val;
	uint max_idx, max_val;
};
// ----------------------------------------------
Min_Max_Struct f(std::vector<int> x)
{
	Min_Max_Struct min_max;
	min_max.min_val = x[0], min_max.min_idx = 0;
	for (uint i = 0; i < x.size(); ++i)
	{
		if (x[i] < min_max.min_val)
		{
			min_max.min_val = x[i];
			min_max.min_idx = i;
		}
	}

	min_max.max_val = x[0], min_max.max_idx = 0;
	for (uint i = 0; i < x.size(); ++i)
	{
		if (x[i] > min_max.max_val)
		{
			min_max.max_val = x[i];
			min_max.max_idx = i;
		}
	}
	return min_max;
}
// ------------------------------------------
int main()
{
	using std::vector;
	using std::cout;

	vector<int> x{0, 1, 2, 3};
	for (auto v : x)
		cout << "x = " << v << "\n";
	cout << "\n";


	/// Example of LRU
	// Step 1: Find min value
	// Step 2: Place cache-line corresponding to min value
	// Step 3: Make min value equal to the max-value possible and decrement all others


	for (uint i = 0; i < x.size(); i++)
	{
		auto min_max_struct = f(x);
		//cout << "min-element's index: " << Min_Max_Struct.idx << "\n";
		//cout << "min-element's value:  " << Min_Max_Struct.val << "\n";
		//cout << "max-element's index: " << max_struct.idx << "\n";
		//cout << "max-element's value:  " << max_struct.val << "\n";

		//std::cout << "Decrement all elements:\n";
		for (auto& v : x)
			--v;
		//for (auto v : x)
		//	cout << "x = " << v << "\n";
		//cout << "\n";

		//std::cout << "Minimum element becomes maximum possible.\n";
		x[min_max_struct.min_idx] = min_max_struct.max_val;

		std::cout << "After run-" << i << " final result:\n";
		for (auto v : x)
			cout << "x = " << v << "\n";
		cout << "\n";
	}

	getchar();
	return 0;
}