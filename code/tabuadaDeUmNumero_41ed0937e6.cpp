/*
Tabuada de um numero
41ed0937e6

Implemente um programa que recebe como entrada um número inteiro x e imprime 
na tela a tabuada para o número x, formatada como no exemplo a seguir:
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
*/

#include <iostream>

int main()
{
	int x;
	
	std::cin >> x;
	
	for(int i = 1; i < 11; i++){
		std::cout << x << " x " << i << " = " << x * i << std::endl;
	}
	
	return 0;
}