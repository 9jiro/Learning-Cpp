// Exercise 1.23: Write a program that reads several transactions and
// counts how many transactions occur for each ISBN.

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