// Exercise 1.16: Write your own version of a program that prints the sum of
// a set of integers read from cin.

#include <iostream>

int main()
{
	std::cout << "Entrez les nombres que vous souhaitez additionner: " << std::endl;
	int somme = 0, valeur = 0;
	while(std::cin >> valeur){
		somme += valeur;
	}
	std::cout << "La somme des valeurs données fait " << somme;
	return 0; 
}