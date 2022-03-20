/*
Atividade 2 da lista 3: Rotação de bits

Em eletrônica digital, a rotação de bits é uma operação bastante importante. 
Ela consiste em rotacionar um vetor de 8 bits por N posições. A cada rotação, 
cada elemento do vetor é rotacionado para a direita, com o último elemento 
assumindo a primeira posição no novo vetor. Implemente um programa para 
executar essa operação. O usuário deve inserir o vetor e em seguida informar 
o número de rotações desejadas.
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