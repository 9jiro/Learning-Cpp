#include <iostream>

int main(){
	std::cout << "Entrez 2 nombres: " << std::endl;
	int valeur1 = 0, valeur2 = 0;
	std::cin >> valeur1 >> valeur2;
	while(valeur1 < valeur2-1){
		valeur1++;
		std::cout << valeur1 << std::endl;
	}
}