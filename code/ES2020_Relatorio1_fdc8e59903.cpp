/*
ES2020 Relatório 1
fdc8e59903

Considere a estrutura a seguir:

struct Movel{
    char descricao[50];
    float peso;
    char tipo;
};

A partir desta estrutura, escreva um programa no qual o usuário cadastra n 
móveis, imprimindo ao final do cadastro um relatório informando:

Quantos móveis são do tipo 'f';
Quantos móveis tem a descrição começando com "Cadeira";
Qual a descrição do móvel mais pesado;
*/

#include <iostream>
#include<string>
using namespace std;

struct Movel{
    char descricao[50];
    float peso;
    char tipo;
};

void relatorioUm(int n){
	int contF = 0, contCadeira = 0;
	Movel m[n];
	
	for(int i = 0; i < n; i++){
		cin.getline(m[i].descricao,50);
		cin >> m[i].peso;
		cin.ignore();
		cin >> m[i].tipo;
		cin.ignore();
		
	}   	
}

int main(){
	
	cin >> int n;
	relatorioUm(n);

	return 0;
}