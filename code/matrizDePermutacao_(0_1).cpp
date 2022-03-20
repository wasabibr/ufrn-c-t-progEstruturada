/*
Matriz de permutação (0/1) 

Uma matriz quadrada é chamada matriz de permutação se seus elementos são 
apenas 0’s e 1’s e se em cada linha e coluna da matriz existe um único valor 1.  
Escreva um programa que verifica se uma dada matriz quadrada é de permutação ou 
não.

A primeira linha da entrada deve ser um único valor inteiro N com o tamanho da 
matriz quadrada. Em seguida, as N linhas seguintes conterão N valores inteiros, 
correspondentes aos valores da matriz. Seu programa deve enviar para a saída 
padrão 0, se a matriz não for matriz de permutação, ou 1, se for.

Obs: N será sempre menor ou igual a 20.
*/

#include <iostream>
using namespace std;

int main(){
	int matriz[20][20], n = 0, cont1 = 0, cont0 = 0, cont = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(matriz[i][j] == 1){
				cont1++;
			}
			if(matriz[i][j] == 0){
				cont0++;
			}
		}
		if(cont1 == 1 && cont0 == (n - 1)){
			cont++;
		}
		cont1 = 0;
		cont0 = 0;
	}
	
	if(cont == n){
		cout << "1";
	}	else {
		cout << "0";
	}
	
	return 0;
}