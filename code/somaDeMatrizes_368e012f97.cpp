/*
Soma de matrizes
368e012f97	

Escreva um programa para somar duas matrizes A e B. A primeira linha da 
entrada de seu programa � constitu�da de dois valores inteiros, 
correspondentes respectivamente ao n�mero de linhas L e n�mero de colunas C 
das matrizes. As L linhas seguintes definem as linhas das matrizes A, 
contendo, cada uma C valores inteiros. Em seguida, haver� as L linhas da 
matriz B, cada uma contendo tamb�m C valores inteiros. A sa�da do programa 
deve ser a matriz L x C resultante da soma de A e B.

Obs: L e C s�o menores ou igual a 20.
*/

#include <iostream>
using namespace std;

int main(){
	int matrizA[20][20], matrizB[20][20], l = 0, c = 0;
	
	cin >> l >> c;
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			cin >> matrizA[i][j];
		}
	}
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			cin >> matrizB[i][j];
		}
	}
	
	// impress�o da matriz soma
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			cout << matrizA[i][j] + matrizB[i][j] << " ";
		}
		cout << endl;
	}	
	
	return 0;
}