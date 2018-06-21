// Exercise 1.11: Write a program that prompts the user for two integers.
// Print each number in the range specified by those two integers.

#include <iostream>

int main()
{
	std::cout << "Entrez 2 nombres: " << std::endl;
	int valeur1 = 0, valeur2 = 0;
	std::cin >> valeur1 >> valeur2;
	while(valeur1 <= valeur2){
		std::cout << valeur1 << std::endl;
		valeur1++;
	}
	return 0;
}