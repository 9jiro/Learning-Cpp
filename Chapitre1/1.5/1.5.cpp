#include <iostream>

int main(){
	int n1 = 0, n2 = 0;
	std::cout << "Entrez 2 nombres: " << std::endl;
	std::cin >> n1 >> n2;
	std::cout << "Le produit de ";
	std::cout << n1;
	std::cout << " par ";
	std::cout << n2;
	std::cout << " fait ";
	std::cout << n1 * n2;
	std::cout << std::endl; 
	return 0;
}