/*
Produtório dos divisores
0200437593

Escreva um programa que calcula e exibe o produtório dos divisores positivos 
de um número inteiro lido. Aceite apenas valores positivos maiores que 0.
*/

#include <iostream>

using namespace std;

int main()
{
	int prodNum = 1;
	int num = 0; 
	
	do{
	    cin >> num;
	} while(num <= 0);
	
	for(int i = 1; i < num + 1; i++){
		if (num%i == 0){
			prodNum *= i;
		}
	}
	
	cout << prodNum;
		
	return 0;
}