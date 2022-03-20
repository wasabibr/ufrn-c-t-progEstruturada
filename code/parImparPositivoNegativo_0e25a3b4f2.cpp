/*
Par/Ímpar - Positivo/Negativo	
0e25a3b4f2

Escreva um programa que leia um número inteiro e imprima uma das seguintes 
mensagens de acordo com o valor lido: "O numero digitado e PAR e POSITIVO!", 
"O numero digitado e PAR e NEGATIVO!", "O numero digitado e IMPAR e POSITIVO!", 
"O numero digitado e IMPAR e NEGATIVO!", "O numero digitado e ZERO".
*/

#include <iostream>
using namespace std;

int main(){
	int num;
	
	cin >> num;
	
	cout << "O numero digitado e ";

	if(num < 0 || num > 0){	
		if(num%2 == 0){
			cout << "PAR e ";
		} else {
			cout << "IMPAR e ";
		}
		if(num < 0){
			cout << "NEGATIVO";
		} else {
			cout << "POSITIVO";
		}
	} else {
		cout << "ZERO" << endl;
	}
	
	return 0;
}