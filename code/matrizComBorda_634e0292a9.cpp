/*
Matriz com Borda
634e0292a9

Faça um programa que, dado uma matriz M de dimensão n x m (n,m <= 30),
determine se todos os elementos internos da matriz são estritamente menores    
que os elementos da borda da matriz.
*/

#include <iostream>
using namespace std;

int main(){
	int matriz[30][30], n = 0, m = 0, cont = 0;
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> matriz[i][j];
		}
	}
	
	// comparação com a borda superior
	for(int k = 0; k < m; k++){
		for(int i = 1; i < n-1; i++){
			for(int j = 1; j < m-1; j++){
				if(matriz[0][k] <= matriz[i][j]){
					cont++;
				}
			}
		}
	}
	
	// comparação com a borda inferior	
	for(int l = 0; l < m; l++){	
		for(int i = 1; i < n-1; i++){
			for(int j = 1; j < m-1; j++){
				if(matriz[n-1][l] <= matriz[i][j]){
					cont++;
				}
			}
		}
	}
	
	// comparação com a borda lateral esquerda
	for(int o = 1; o < n-1; o++){
		for(int i = 1; i < n-1; i++){
			for(int j = 1; j < m-1; j++){
				if(matriz[o][0] <= matriz[i][j]){
					cont++;
				}
			}
		}
	}
	
	// comparação com a borda lateral direita
	for(int p = 1; p < n-1; p++){
		for(int i = 1; i < n-1; i++){
			for(int j = 1; j < m-1; j++){
				if(matriz[p][m-1] <= matriz[i][j]){
					cont++;
				}
			}
		}
	}
	
	if(cont == 0){
		cout << "Todos os elementos da borda são maiores que os elementos internos";
	}	else {
		cout << "Nem todos os elementos da borda são maiores que os elementos internos";
	}
	
	return 0;
}