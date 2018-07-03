// Exercise 1.24: Test the previous program by giving multiple transactions
// representing multiple ISBNs. The records for each ISBN should be grouped
// together.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item livre1, livre2;
	if (std::cin >> livre1)
	{
		int compteur = 1;
		while(std::cin >> livre2)
		{
			if (livre1.isbn() == livre2.isbn())
			{
				livre1 += livre2;
				++compteur;
			}
			else{
				std::cout << livre1 << " apparaît " << compteur << " fois." << std::endl;
				livre1 = livre2; 
				compteur = 1;
			}
		}
		std::cout << livre1 << " apparaît " << compteur << " fois." << std::endl;
	}
	else{
		std::cerr << "Vous n'avez rien entré." << std::endl;
		return -1;
	}
	return 0;
}