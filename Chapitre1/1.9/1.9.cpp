#include <iostream>

int main()
{
	int somme = 0, valeur = 50;
	while(valeur <= 100)
	{
		somme += valeur;
		valeur++;
	}
	std::cout << "La somme de 50 à 100 inclusive est " << somme;
	return 0;
}