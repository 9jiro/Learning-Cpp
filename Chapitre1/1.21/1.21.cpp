// Exercise 1.21: Write a program that reads two Sales_item objects that
// have the same ISBN and produces their sum.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item livre1, livre2;
	std::cin >> livre1 >> livre2;
	
	if (livre1 == livre2)
	{
		std::cout << livre1 + livre2 << std::endl;
	}
	else
		std::cout << livre1 << livre2 << std::endl;

	return 0;
}