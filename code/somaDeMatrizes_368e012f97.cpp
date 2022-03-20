/*
Soma de matrizes
368e012f97	

Escreva um programa para somar duas matrizes A e B. A primeira linha da 
entrada de seu programa é constituída de dois valores inteiros, 
correspondentes respectivamente ao número de linhas L e número de colunas C 
das matrizes. As L linhas seguintes definem as linhas das matrizes A, 
contendo, cada uma C valores inteiros. Em seguida, haverá as L linhas da 
matriz B, cada uma contendo também C valores inteiros. A saída do programa 
deve ser a matriz L x C resultante da soma de A e B.

Obs: L e C são menores ou igual a 20.
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
	
	// impressão da matriz soma
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			cout << matrizA[i][j] + matrizB[i][j] << " ";
		}
		cout << endl;
	}	
	
	return 0;
}