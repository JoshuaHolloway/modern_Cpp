//=========================================================
#include <iostream>
// Function is executed during compile-time
#define function(expression)  \
  {                           \
    std::cout << expression;  \
  }
//=========================================================
auto main() -> int
{
	// -Will not step into function at run-time
	// -Function has already been executed.
	function("josh");
}