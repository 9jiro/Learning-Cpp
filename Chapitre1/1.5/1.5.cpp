// Exercise 1.5: We wrote the output in one large statement. Rewrite the
// program to use a separate statement to print each operand.

#include <iostream>

int main()
{
	int nombre1 = 0, nombre2 = 0;
	std::cout << "Entrez 2 nombres: " << std::endl;
	std::cin >> nombre1 >> nombre2;
	std::cout << "Le produit de ";
	std::cout << nombre1;
	std::cout << " par ";
	std::cout << nombre2;
	std::cout << " fait ";
	std::cout << nombre1 * nombre2;
	std::cout << std::endl; 
	return 0;
}