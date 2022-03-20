/*
Matriz Transposta
5e2606dc91

Escreva  um programa que recebe o número de linhas  l e colunas c, onde l,
c < 30, de uma matriz A e cria uma matriz B, que é a matriz transposta de
A. O seu programa deve imprimir a matriz resultante B.
*/

#include <iostream>
using namespace std;

int main(){
	int matrizA[30][30], matrizB[30][30], l = 0, c = 0;
	
	cin >> l >> c;
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			cin >> matrizA[i][j];
		}
	}
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			matrizB[j][i] = matrizA[i][j];
		}
	}	
	
	cout << "Transposta" << endl;
	
	for(int i = 0; i < c; i++){
		for(int j = 0; j < l; j++){
			cout << matrizB[i][j] << " ";
		}
		cout << endl;
	}	
	
	return 0;
}