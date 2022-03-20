/*
É primo com cinco algarismos?
62a50db3b8

Faça um programa que verifica se um número inteiro lido é primo e formado por 
cinco algarismos. 1 não é primo.
*/

#include <iostream>

using namespace std;

int main(){
	int n, contN = 0;
	
	cin >> n;
	
	if(n>9999 && n<100000){
		for(int i = 1; i <= n; i++){
			if(n%i == 0){
				contN++;
			}
		}
		if (contN == 2){
			cout << "Sim" << endl;
		} else {
			cout << "Não" << endl;
		}
	} else {
		cout << "Não" << endl;
	}
		
	return 0;
}