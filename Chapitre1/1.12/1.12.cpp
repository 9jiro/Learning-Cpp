// /* Exercise 1.12: What does the following for loop do? What is the final
// * value of sum?
// * int sum = 0;
// * for (int i = -100; i <= 100; ++i)
// * sum += i;
// */

// Calcul la somme de -100 à 100 inclusivement qui fait 0.

#include <iostream>

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
	{
		sum += i;
	std::cout << sum << std::endl;
	}
	return 0;
}