/*
Imprimir na ordem inversa
515081a915

Faça um programa que cria e recebe um vetor A do tipo inteiro com 10 elementos, 
depois armazena os elementos de A no vetor B (de 10 elementos) na ordem inversa. 
No final imprimir o vetor B separado por espaços.
*/

#include <iostream>
using namespace std;

int main()
{
	int vetor[10], inverteVetor[10];
    
    for(int i = 0; i < 10; i++){
		cin >> vetor[i];
	}
		
	for(int i = 0; i < 10; i++){
			inverteVetor[9-i] = vetor[i];

	}
	
	for(int i = 0; i < 10; i++){
		cout << inverteVetor[i] << " ";
	}
	
	return 0;
}