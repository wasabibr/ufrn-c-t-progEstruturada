/*
Pares até 20
9938e137cb

Utilizando estruturas de repetição, faça um programa que mostre os números
pares entre 1 e 20, inclusive o 20.
*/

#include<iostream>

int main()
{
	for(int i = 1; i < 21; i++){
		if(i%2 == 0){
			std::cout << i << "\n";
		}		
	}
	return 0;
}