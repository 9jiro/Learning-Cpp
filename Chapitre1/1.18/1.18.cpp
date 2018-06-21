// Exercise 1.18: Compile and run the program from this section giving it
// only equal values as input. Run it again giving it values in which no number
// is repeated.

#include <iostream>

int main()
{
	int valeurActuelle = 0, valeur = 0;
	if (std::cin >> valeurActuelle)
	{
		int compteur = 1;
		while(std::cin >> valeur)
		{
			if(valeur == valeurActuelle)
			{
				compteur++;
			}
			else{
				std::cout << valeurActuelle << " apparaît " << compteur << " fois." << std::endl;
				valeurActuelle = valeur;
				compteur = 1;
			}
		}
		std::cout << valeurActuelle << " apparaît " << compteur << " fois." << std::endl;
	}

	return 0;
}