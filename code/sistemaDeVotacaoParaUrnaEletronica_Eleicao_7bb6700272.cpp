/*
Sistema de vota��o para uma urna eletr�nica - Elei��o
7bb6700272

Fa�a um sistema de vota��o para uma urna eletr�nica, a qual dever� funcionar 
durante uma elei��o.

Crie um tipo estruturado (Registro/Classe) para o candidato, esse tipo dever� 
ter os atributos: nome, n�mero e quantidade de votos.

O sistema, inicialmente, deve ler a quantidade de candidatos da elei��o. Em 
seguida, devem ser cadastrados os candidatos, lendo do teclado, seus atributos 
de n�mero e nome. 

Por fim, deve ser iniciado o processo de vota��o onde ser� 
lido, da entrada padr�o, uma sequencia de votos (n�mero do candidato). 
Quando um n�mero menor ou igual a zero for lido, a vota��o deve ser finalizada. 
Caso seja digitado um n�mero inv�lido, este deve ser contabilizado como voto Nulo.

Como resultado, deve ser exibido o boletim de urna, indicando o percentual de 
votos, n�mero e nome de todos os candidatos, destacando a linha do candidato 
vencedor com o texto VENCEDOR no final da linha. Exiba tamb�m a quantidade de 
votos Nulos. O percentual deve ser exibido com 2 casas decimais.
*/

#include <iostream>
#include<string>
using namespace std;

struct registroClasse{
    char nome[100];
    int numero;
    float quantVotos;
} rC[30];

struct nulo{
	float quantVotos;
}

void cadastraCand(int num){
	for(int i = 0; i < num; i++){
		cin >> rC[i].numero;
		cin.ignore();
		cin.getline(rC[i].nome,100);
	}	
}

int votacao(int num){
	int contTotal = 0, contVal = 0;
	while(int v > 0){
		cin >> v;
		if(v < 1){
			break;
		}
		contTotal++;
		for(int i = 0; i < num; i++){
			if(v == rC[i].numero){ 
				rC[i].quantVotos = rC[i].quantVotos + v;
				contVal++;
			}
		}			
	}
	nulo.quantVotos = ContTotal - contVal;
	
	return (contTotal);
}

void boletimUrna(int num){
    for(int i = 0; i < votacao(); i++)
    {
        cout <<;
    }
}
}




