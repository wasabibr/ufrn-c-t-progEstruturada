/*
Triângulo de Floyd	68df506188

Faça um programa que lê um número inteiro n e imprime as n primeiras linhas 
do triangulo de Floyd. Assegure-se de que o usuário fornecerá um n positivo 
maior que 0.
*/

#include <iostream>

using namespace std;

int main(){
	int n, i = 1, cont = 1, num = 1;
	
	while(true){
		cin >> n;
		if(n > 0){
			break;
		}
	}
	
	while(cont <= n){
		cont++;
		for(i = 1; i < cont; i++){
			cout << num << " ";
			num++;
		}
		cout << "\n";
	}
	
	
	return 0;
}