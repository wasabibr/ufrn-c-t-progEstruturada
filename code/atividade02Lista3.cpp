/*
Atividade 2 da lista 3: Rota��o de bits

Em eletr�nica digital, a rota��o de bits � uma opera��o bastante importante. 
Ela consiste em rotacionar um vetor de 8 bits por N posi��es. A cada rota��o, 
cada elemento do vetor � rotacionado para a direita, com o �ltimo elemento 
assumindo a primeira posi��o no novo vetor. Implemente um programa para 
executar essa opera��o. O usu�rio deve inserir o vetor e em seguida informar 
o n�mero de rota��es desejadas.
*/

#include <iostream>
using namespace std;

int main()
{
	int vetor[8], rotaVetor[8], numRota = 0;
    
    for(int i = 0; i < 8; i++){
		cin >> vetor[i];
	}
	
	cin >> numRota;
	
	for(int r = 0; r < numRota; r++){
		rotaVetor[0] = vetor[7];
		for(int i = 0; i < 7; i++){
			rotaVetor[i+1] = vetor[i];
		}
		for(int j = 0; j < 8; j++){
			vetor[j] = rotaVetor[j];
		}
	}
	
	for(int i = 0; i < 8; i++){
		cout << vetor[i];
	}
	
	return 0;
}