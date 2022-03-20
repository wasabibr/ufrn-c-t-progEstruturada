/*
Sistema de votação para uma urna eletrônica - Eleição
7bb6700272

Faça um sistema de votação para uma urna eletrônica, a qual deverá funcionar 
durante uma eleição.

Crie um tipo estruturado (Registro/Classe) para o candidato, esse tipo deverá 
ter os atributos: nome, número e quantidade de votos.

O sistema, inicialmente, deve ler a quantidade de candidatos da eleição. Em 
seguida, devem ser cadastrados os candidatos, lendo do teclado, seus atributos 
de número e nome. 

Por fim, deve ser iniciado o processo de votação onde será 
lido, da entrada padrão, uma sequencia de votos (número do candidato). 
Quando um número menor ou igual a zero for lido, a votação deve ser finalizada. 
Caso seja digitado um número inválido, este deve ser contabilizado como voto Nulo.

Como resultado, deve ser exibido o boletim de urna, indicando o percentual de 
votos, número e nome de todos os candidatos, destacando a linha do candidato 
vencedor com o texto VENCEDOR no final da linha. Exiba também a quantidade de 
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




