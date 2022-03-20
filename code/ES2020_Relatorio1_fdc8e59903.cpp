/*
ES2020 Relat�rio 1
fdc8e59903

Considere a estrutura a seguir:

struct Movel{
    char descricao[50];
    float peso;
    char tipo;
};

A partir desta estrutura, escreva um programa no qual o usu�rio cadastra n 
m�veis, imprimindo ao final do cadastro um relat�rio informando:

Quantos m�veis s�o do tipo 'f';
Quantos m�veis tem a descri��o come�ando com "Cadeira";
Qual a descri��o do m�vel mais pesado;
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