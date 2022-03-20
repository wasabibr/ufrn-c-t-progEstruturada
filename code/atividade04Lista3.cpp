/*
Atividade 4 da lista 3: Seleciona Intervalo Crescente ou Decrescente

Implemente um programa que recebe 10 n�meros inteiros e os armazena em um 
vetor. Em seguida, o programa recebe um n�mero indeterminado de vezes, tr�s 
valores inteiros "O"(ordem), "P"(primeiro) e "U"(�ltimo). O valor "O" indica 
a ordem em que o vetor ser� escrito (�1�� normal, �2��inversa), "P" representa 
a posi��o do primeiro n�mero (de acordo com a ordem definida em "O") a ser 
escrito, enquanto "U" representa a posi��o do �ltimo. Considere que usu�rio 
entrar� com valores no intervalo 1 <= "P"<= "U"<= 10, e que o programa se 
encerra quando � dado o valor 0 (zero) para "O".
*/

#include <iostream>
using namespace std;

int main()
{
	int vetor[10], ord = 0, pri = 0, ult = 0;
    
    for(int i = 0; i < 10; i++){
		cin >> vetor[i];
	}
	
	cin >> ord >> pri >> ult;
	
	while(ord > 0){
		if(ord == 1){
			for(int i = pri - 1; i < ult; i++){
				cout << vetor[i] << " ";
			}
		}
/*		if(ord == 2){
			for(int j = ult - 1; j > pri - 2; j--){
				cout << vetor[j] << " ";
			}
		} */
		if(ord == 2){
			int aux = 10 - pri;
			pri = 10 - ult;
			ult = aux;
			for(int j = ult; j > pri - 1; j--){
				cout << vetor[j] << " ";
			}
		}
		
		cin >> ord >> pri >> ult;
	}
		
	return 0;
}