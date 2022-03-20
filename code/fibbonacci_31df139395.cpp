/*
Fibbonacci	31df139395

A seguinte sequ�ncia de n�meros 0 - 1 - 1 - 2 - 3 - 5 - 8 - 13 - 21... � 
conhecida como s�rie de Fibonacci. Nessa sequ�ncia, cada n�mero, depois 
dos 2 primeiros, � igual � soma dos 2 anteriores. Escreva um algoritmo que 
leia um inteiro N e mostre os N primeiros n�meros dessa s�rie, utilizando 
o �\n� entre eles para pular linha.
*/

#include <iostream>

int main()
{
	int n = 0, antiPenultimoNum = 0, penultimoNum = 1, numSoma = 0;
	
	std::cin >> n;
		
	if(n == 1){
		std::cout << antiPenultimoNum << "\n";
	} else if(n == 2){
		std::cout << antiPenultimoNum << "\n";
		std::cout << penultimoNum << "\n";
	} else {
		std::cout << antiPenultimoNum << "\n";
		std::cout << penultimoNum << "\n";
		for(int i = 2; i < n; i++){
			numSoma = antiPenultimoNum + penultimoNum;
			std::cout << numSoma << "\n";
			antiPenultimoNum = penultimoNum;
			penultimoNum = numSoma;
		}
			
	}
	
	return 0;
}