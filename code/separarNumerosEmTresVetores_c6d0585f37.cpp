/*
Separar números em três vetores	
c6d0585f37

Implemente um programa que recebe 20 números inteiros positivos e os armazena 
em um vetor A. Depois separe os números em três vetores:a) Vetor dos números 
que são múltiplos de 3.b) Vetor dos números que são múltiplos de 4.c) Vetor 
dos números não são múltiplos, nem de 3 e nem de 4.
*/

#include <iostream>
using namespace std;

int main()
{
	int vetor[20], mult3Vetor[20], mult4Vetor[20], multNemVetor[20];
    
    for(int i = 0; i < 20; i++){
		cin >> vetor[i];
	}
	
	int j = 0, k = 0, l = 0, contJ = 0, contK = 0, contL =0;
	
	for(int i = 0; i < 20; i++){
		int aux = 0;
		aux = vetor[i];
		if(aux%4 == 0){
			mult4Vetor[j] = vetor[i];
			j++;
			contJ++;
		}
		if(aux%3 == 0){
			mult3Vetor[k] = vetor[i];
			k++;
			contK++;
		}
		 if(aux%4 != 0 && aux%3 != 0){
			multNemVetor[l] = vetor[i];
			l++;
			contL++;
		}
	}
	
	cout << "a)";	
	for(int i = 0; i < contK; i++){
		cout << mult3Vetor[i];
		if(i < contK - 1){
			cout << ",";
		} else {
			cout << endl;
		}
	}

	cout << "b)";
	for(int i = 0; i < contJ; i++){
		cout << mult4Vetor[i];
		if(i < contJ - 1){
			cout << ",";
		} else {
			cout << endl;
		}
	}

	cout << "c)";
	for(int i = 0; i < contL; i++){
		cout << multNemVetor[i];
		if(i < contL - 1){
			cout << ",";
		} else {
			cout << endl;
		}
	}

	return 0;	
}