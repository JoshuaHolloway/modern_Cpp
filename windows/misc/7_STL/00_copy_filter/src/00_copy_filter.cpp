//-------------------------------------------------------------------
#include "helper.h"
//-------------------------------------------------------------------
int main()
{
	// init test containers
	vector<string> a =
	{ "zero", "one", "two", "three", "four",
		"five", "six", "seven", "eight", "nine" };

	vector<string> b = 
	{ "0" ,"1" ,"2" ,"3" "4" ,"5" ,"6" ,"7", "8", "9" };

	// write initial states
	write_to_cout(a);
	cout << endl;
	write_to_cout(b);
	cout << "\n" << endl;

	// test algorithm
	std::copy(a.begin() + 3, a.end() + 7, b.begin() + 6);

	// write result
	write_to_cout(b);

	while (true);
	//https://youtu.be/Fw1AKu1s_aE
	return 0;
}