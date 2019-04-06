#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

//template<class Container>
//void write_to_cout(const Container& container, const char* delimeter = " ")
//{
//	std::copy( container.begin(), container.end(),
//		std::ostreambuf_iterator<Container::value_type>( std::cout, delimeter ));
//}

namespace josh
{
	/// https://en.cppreference.com/w/cpp/algorithm/copy
	template<class InputIt, class OutputIt>
	OutputIt copy(InputIt first, InputIt last,
		OutputIt d_first)
	{
		while (first != last) {
			*d_first++ = *first++;
		}
		return d_first;
	}


	template<class InputIt, class OutputIt, class UnaryPredicate>
	OutputIt copy_if(InputIt first, InputIt last,
		OutputIt d_first, UnaryPredicate pred)
	{
		while (first != last) {
			if (pred(*first))
				*d_first++ = *first;
			first++;
		}
		return d_first;
	}
}


auto main() -> int
{
	using std::copy;
	using std::vector;
	using std::string;
	using std::cout;
	using std::endl;

	// init test containers
	vector<string> a = {"zero","one","two","three","four","five","six","seven","eight","nine" };
	vector<string> b = { "0","1","2","3","4","5","6","7","8","9"};

	// write initial states
	//write_to_cout( a );
	for (auto v : a)
		cout << "a:\t" << v << "\n";
	cout << "\n" << endl;

	for (auto v : b)
		cout << "b:\t" << v << "\n";
	cout << "\n" << endl;

	// test algorithm
	josh::copy(a.begin() + 3, a.begin() + 7, b.begin() + 6);


	for (auto v : a)
		cout << "a:\t" << v << "\n";
	cout << "\n" << endl;

	for (auto v : b)
		cout << "b:\t" << v << "\n";
	cout << "\n" << endl;



	// write result
	//write_to_cout( b );

	system("pause");
	return(0);
}