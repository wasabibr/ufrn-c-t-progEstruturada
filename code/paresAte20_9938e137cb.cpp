/*
Pares at� 20
9938e137cb

Utilizando estruturas de repeti��o, fa�a um programa que mostre os n�meros
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