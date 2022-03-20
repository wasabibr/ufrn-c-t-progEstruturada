/*
Media
d8dc14a32c

Media Escreva um programa que lê três números inteiros e imprime a média
aritmética deles.
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