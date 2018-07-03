// Exercise 1.9: Write a program that uses a while to sum the numbers from
// 50 to 100.

#include <iostream>

int main()
{
	int somme = 0, valeur = 50;
	while(valeur <= 100){
		somme += valeur;
		++valeur;
	}
	std::cout << "La somme de 50 à 100 inclusivement est " << somme << std::endl;
	return 0;
}