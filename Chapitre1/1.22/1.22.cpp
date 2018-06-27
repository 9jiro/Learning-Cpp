// Exercise 1.22: Write a program that reads several transactions for the
// same ISBN. Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item livre, vente;
	if (std::cin >> livre)
	{
		while(std::cin >> vente)
		{
			if (livre.isbn() == vente.isbn())
				{
					livre += vente;
				}
			else{
					std::cout << livre << std::endl;
					livre = vente;
				}	
			
		}
		std::cout << livre << std::endl;
	}
	return 0;
}