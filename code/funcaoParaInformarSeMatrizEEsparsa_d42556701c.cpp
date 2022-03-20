/*
Fun��o para informar se matriz � esparsa	d42556701c

Implemente uma fun��o que receba como par�metro de entrada
uma matriz de n�meros inteiros de tamanho qualquer e o seu tamanho.
A fun��o a ser implementada deve retornar verdadeiro
caso a matriz seja esparsa ou falso caso contr�rio,
considerando que uma matriz � esparsa se ela possuir
mais do que 70% dos seus elementos iguais a 0.
A fun��o main deve ler as dimens�es da matriz, cada
um dos seus elementos e imprimir uma mensagem
informando se a matriz � esparsa ou n�o, de acordo
com a resposta da fun��o. A matriz tem largura/altura
m�ximas igual a 10.
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
		cout << "A matriz � esparsa" << endl;
	} else {
		cout << "A matriz n�o � esparsa" << endl;
	}
	
	return 0;
}