/*
Função para informar se matriz é esparsa	d42556701c

Implemente uma função que receba como parâmetro de entrada
uma matriz de números inteiros de tamanho qualquer e o seu tamanho.
A função a ser implementada deve retornar verdadeiro
caso a matriz seja esparsa ou falso caso contrário,
considerando que uma matriz é esparsa se ela possuir
mais do que 70% dos seus elementos iguais a 0.
A função main deve ler as dimensões da matriz, cada
um dos seus elementos e imprimir uma mensagem
informando se a matriz é esparsa ou não, de acordo
com a resposta da função. A matriz tem largura/altura
máximas igual a 10.
*/


#include<iostream>
using namespace std;

int mEsparsa(int matriz[10][10], int m, int n){
	int contZerosMatriz = 0;
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(matriz[i][j] == 0){
				contZerosMatriz++;
			}
		}
	}
	
	if(contZerosMatriz > m * n * 0.7){
		return true;
	} else {
		return false;
	}
}

int main()
{
	int matriz[10][10], m, n;
	
	cin >> m >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> matriz[i][j];
		}
	}
	
	if(mEsparsa(matriz, m, n) == true){
		cout << "A matriz é esparsa" << endl;
	} else {
		cout << "A matriz não é esparsa" << endl;
	}
	
	return 0;
}