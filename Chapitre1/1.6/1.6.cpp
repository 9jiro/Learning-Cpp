// Exercise 1.6: Explain whether the following program fragment is legal.
// std::cout << "The sum of " << v1;
// << " and " << v2;
// << " is " << v1 + v2 << std::endl;

#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;
	std::cout << "Entrez deux nombres: " << std::endl;
	std::cin >> v1 >> v2;

	//fix
	std::cout << "The sum of " << v1
	<< " and " << v2
	<< " is " << v1 + v2 << std::endl;

	return 0;	
}

