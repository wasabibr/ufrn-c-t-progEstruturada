/*
Atividade 3 da lista 3: Duplicatas

Implemente um programa para contar o número de elementos que aparecem pelo
menos duas vezes em um vetor. Seu programa deve solicitar o número de elementos 
que o vetor possui e, em seguida, solicitar os elementos que compõe o vetor. 
Considere que o tamanho máximo do vetor é 100.
*/

#include <iostream>
using namespace std;

int main()
{
	int n = 0, cont = 0, repete = 0;
	
	cin >> n;
	
	char vetor[n], auxVetor[n];

	for(int i = 0; i < n; i++){
		cin >> vetor[i];
		auxVetor[i] = vetor[i];
	}
		
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(vetor[i] == auxVetor[j]){
				cont++;
				auxVetor[j] = ' ';
				if(cont == 2){
					repete++;
				}			
			}
		}
		cont = 0;
	}
	
	cout << repete;
		
	return 0;
}
	
	