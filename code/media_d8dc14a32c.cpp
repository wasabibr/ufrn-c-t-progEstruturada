/*
Media
d8dc14a32c

Media Escreva um programa que l� tr�s n�meros inteiros e imprime a m�dia
aritm�tica deles.
*/

#include <iostream>

int main(){
	
	double n1, n2, n3;
	
	std::cin >> n1;
	std::cin >> n2;
	std::cin >> n3;
	
	double media = (n1 + n2 + n3)/3;
	
	std::cout << media;
	
	return 0;
}