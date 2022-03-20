/*
Soma simples 2
f6a2fc49a3

Faça um programa que leia dois inteiros e imprima a soma dos valores lidos.
*/

#include <iostream>

int main(){
	int num1, num2, soma;
	
	std::cin >> num1;
	std::cin >> num2;
	
	soma = num1 + num2;
	
	std::cout << soma;
	
	return 0;
}