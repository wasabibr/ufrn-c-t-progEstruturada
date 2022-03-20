/*
Resto da divisão
9c6f161a23

Escreva um programa que leia 2 valores X e Y e que imprima todos os valores 
entre eles (X e Y não inclusos) cujo resto da divisão por 5 for igual a 2 ou 
igual a 3. Assuma que o X fornecido sempre será menor que Y.
*/

#include<iostream>

int main()
{
	int x, y, resto;
	
	std::cin >> x >> y;
	
	for (int i = x + 1; i < y; i++){
		resto = i % 5;
		if(resto == 2 || resto == 3){
			std::cout << i << std::endl;
		}
	}
	
	return 0;
}