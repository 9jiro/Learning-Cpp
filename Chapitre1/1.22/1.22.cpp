// Exercise 1.22: Write a program that reads several transactions for the
// same ISBN. Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item livre1, livre2;
	if (std::cin >> livre1)
	{
		while(std::cin >> livre2){
			if (livre1.isbn() == livre2.isbn())
			{
				livre1 += livre2; 
			}
			else{
				std::cout << livre1 << std::endl;
				livre1 = livre2;
			}
		}
		std::cout << livre1 << std::endl;
	}
	
	return 0;
}

