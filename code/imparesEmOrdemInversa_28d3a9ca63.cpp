/*
�mpares em ordem inversa
28d3a9ca63

Crie um programa que l� um n�mero natural n e imprime todos os n�meros 
�mpares de 0 at� n em ordem decrescente. Aceite apenas n positivo e maior 
que 0.
*/

#include <iostream>

using namespace std;

int main(){
	int n;
	
	do{
		cin >> n;
	} while (n <= 0);

	for(int i = n; i >= 1; i--){
		if(i%2 != 0){
			cout << i << " ";
		}
	}	
	
	return 0;
}