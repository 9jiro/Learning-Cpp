// Exercise 1.4: Our program used the addition operator, +, to add two
// numbers. Write a program that uses the multiplication operator, *, to
// print the product instead.

#include <iostream>

int main()
{
	std::cout << "Entrez 2 nombres: " << std::endl;
	int nombre1 = 0, nombre2 = 0;
	std::cin >> nombre1 >> nombre2;
	std::cout << "Le produit de " << nombre1 << " par " << nombre2 << " fait " << nombre1 * nombre2 << std::endl; 
	return 0;
}