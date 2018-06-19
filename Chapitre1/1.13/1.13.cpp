#include <iostream>

int main(){


	//exercice 1.9 avec for
	int v1=0;
	for (int i = 50; i <= 100; ++i)
	{
		v1+=i;
	}
	std::cout << v1 << std::endl;

	//exercice 1.10 avec for
	for (int i = 10; i >= 0; --i)
	{
		std::cout << i << std::endl;
	}
	return 0;
}