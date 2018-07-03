// Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1
// (p. 13) that printed a range of numbers so that it handles input in which
// the first number is smaller than the second.

// Exercise 1.11
// Remade

#include <iostream>

int main()
{
	std::cout << "Entrez 2 nombres: " << std::endl;
	int valeur1 = 0, valeur2 = 0;
	std::cin >> valeur1 >> valeur2;
	if (valeur1 <= valeur2)
	{
		while(valeur1 <= valeur2){
			std::cout << valeur1 << std::endl;
			++valeur1;
		}
	}
	else{
		while(valeur1 >= valeur2){
			std::cout << valeur1 << std::endl;
			--valeur1;
		}
	}		
	return 0;
}