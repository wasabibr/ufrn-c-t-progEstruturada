/*
Atividade 1 da lista 3: Substituição no vetor

Faça um programa que leia um vetor X[6]. Substitua a seguir, todos os valores 
nulos e negativos existentes no vetor X por 1. Em seguida mostre o vetor X.
*/

#include <iostream>
using namespace std;

int main()
{
	int vetor[6];
    
    for(int i = 0; i < 6; i++){
		cin >> vetor[i];
		if(vetor[i] < 1){
			vetor[i] = 1;
		}
	}
	
	for(int i = 0; i < 6; i++){
		cout << vetor[i];
		if(i < 5){
			cout << ",";
		}
	}
	
	return 0;
}