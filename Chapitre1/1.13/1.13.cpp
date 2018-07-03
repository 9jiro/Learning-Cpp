// Exercise 1.13: Rewrite the first two exercises from § 1.4.1 (p. 13) using
// for loops.

#include <iostream>

int main()
{
// Exercise 1.9: Write a program that uses a while to sum the numbers from
// 50 to 100.

// Refait avec for loop.
	int somme = 0;
	for (int valeur = 50; valeur <= 100; ++valeur)
	{
		somme += valeur;
	}
	std::cout << somme << std::endl;

// Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
// there is a decrement operator (--) that subtracts 1. Use the decrement
// operator to write a while that prints the numbers from ten down to zero.

// Refait avec for loop.
	for (int i = 10; i >= 0; --i)
	{
		std::cout << i << std::endl;
	}
	return 0;
}