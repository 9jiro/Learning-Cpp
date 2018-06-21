// /* Exercise 1.8: Indicate which, if any, of the following output statements
// *are legal:
// *std::cout << "/*";						Legal
// *std::cout << "*/";						Legal
// *std::cout << /* "/" /;					Non Legal
// *std::cout << /* "" "/*" */;				Non Legal
// *After you’ve predicted what will happen, test your answers by compiling a
// *program with each of these statements. Correct any errors you
// *encounter.
// */

#include <iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << "/";
	std::cout << "" "/*";
	return 0;
}