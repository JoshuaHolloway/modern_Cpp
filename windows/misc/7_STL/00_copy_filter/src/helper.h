#pragma once
//-------------------------------------------------------------------
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
//-------------------------------------------------------------------
using std::copy;
using std::ostreambuf_iterator;
using std::cout;
using std::endl;
using std::vector;
using std::string;
//-------------------------------------------------------------------
template <class Container>
void write_to_cout(const Container& container, const char* delimiter = " ")
{
	copy(container.begin(), container.end(),
		std::ostream_iterator<Container::value_type>(cout, delimiter));
}