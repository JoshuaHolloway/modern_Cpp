#include <iostream>
#include "page_606.h"

// Statically linked to vector.lib in 

auto main() -> int
{
	using std::cout;

	/// Page 604
	vector v(5);
	for (int i = 0; i < v.size(); ++i)
	{
		v.set(i, 1.1*i);
		cout << "v[" << i << "]==" << v.get(i) << "\n";
	}

	page606::ff();

	system("pause");
	return(0);
}