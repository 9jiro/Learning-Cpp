// Exercise 1.7: Compile a program that has incorrectly nested comments.

#include <iostream>

int main()
{
	std::cout << "Salut !";
/*	std::cout << "Salut !";
*/	std::cout << "Salut !";
*/
	return 0;
}