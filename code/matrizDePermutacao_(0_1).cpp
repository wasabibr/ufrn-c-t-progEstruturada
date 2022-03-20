/*
Matriz de permuta��o (0/1) 

Uma matriz quadrada � chamada matriz de permuta��o se seus elementos s�o 
apenas 0�s e 1�s e se em cada linha e coluna da matriz existe um �nico valor 1.  
Escreva um programa que verifica se uma dada matriz quadrada � de permuta��o ou 
n�o.

A primeira linha da entrada deve ser um �nico valor inteiro N com o tamanho da 
matriz quadrada. Em seguida, as N linhas seguintes conter�o N valores inteiros, 
correspondentes aos valores da matriz. Seu programa deve enviar para a sa�da 
padr�o 0, se a matriz n�o for matriz de permuta��o, ou 1, se for.

Obs: N ser� sempre menor ou igual a 20.
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