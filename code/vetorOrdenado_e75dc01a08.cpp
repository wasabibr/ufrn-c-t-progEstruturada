/*
Vetor Ordenado?
e75dc01a08

Escreva uma função f que recebe um array de inteiros v e o seu número de 
elementos 2 <= n <= 30.

A função f deve retornar 1 se os elementos de v estão ordenados em ordem 
crescente, 2 se eles estão ordenados em ordem descrescente e 0 caso eles 
não estejam ordenados.

Faça a leitura/escrita dos dados na função principal (main).
*/

#include<iostream>
using namespace std;

int ordemVetor(int n, int vet[30]){
	int contC = 0, contD = 0, cont = 0, j = 1;
	
	for(int i = 0; i < n-1; i++){
//		for(int j = 1; j < n; j++){
			if(vet[i] < vet[j]){
				contC++;
				cout << "contC: " << contC << endl;
			}	
			if(vet[i] > vet[j]){
				contD++;
				cout << "contD: " << contD << endl;
			}
			j++;
//		}	  		
	}

	if(contC == n-1 && contD < n-1){
		cont = 1;
	}
	if(contD == n-1 && contC < n-1){
		cont = 2;
	} 
	if(contC < n-1 && contD < n-1){
		cont = 0;
	}
	
	return cont;
}

int main(){
	
	int vetor[30], num;
	
	cin >> num;
	
	for(int i = 0; i < num; i++){
		cin >> vetor[i];
	}
	
	if (ordemVetor(num, vetor) == 1){
		cout << "Ordem Crescente";
	}
	if (ordemVetor(num, vetor) == 2){
		cout << "Ordem Decrescente";
	}
	if (ordemVetor(num, vetor) == 0){
		cout << "Sem Ordem";
	}
  
	return 0;
}