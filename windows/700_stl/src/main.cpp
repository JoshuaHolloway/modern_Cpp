#include <vector>
#include <algorithm>
#include <iostream>

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

	auto minmax = std::minmax_element(x.begin(), x.end());

	std::cout << "minimum element: " << *minmax.first << '\n';
	std::cout << "maximum element: " << *minmax.second << '\n';

	int min_index = *minmax.first;

	x[*minmax.first] = x[*minmax.second];

	for (auto& v : x)
		--v;

	x[min_index] = 3;

	for (auto v : x)
		cout << "x = " << v << "\n";
	cout << "\n";

	getchar();
	return 0;
}