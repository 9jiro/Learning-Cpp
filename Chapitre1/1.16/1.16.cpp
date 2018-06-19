#include <iostream>

int main(){
	std::cout << "Entrez les nombres que vous souhaitez additionner: ";
	int sum=0, value=0;
	while(std::cin >> value)
	{
		sum +=value;
	}
	std::cout << "La somme est " << sum << std::endl;
	return 0;
}