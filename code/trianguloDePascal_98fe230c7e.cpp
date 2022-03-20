/*
Tri�ngulo de Pascal
98fe230c7e

Fa�a um programa para imprimir o triangulo de Pascal:
11 11 2 11 3 3 11 4 6 4 11 5 10 10 5 1...Onde o k-�simo elemento da n-�sima 
linha � o coeficiente binomial C(n, k) = n!/((k!)*(n-k)!), o n�mero de 
combina��es de n elementos com tamanho k.
*/

#include <iostream>
using namespace std;

int main(){
	int n, coeficiente = 0;
	
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			if(i==0 || j==0){
				coeficiente = 1;
			} else {
				coeficiente = coeficiente * (i - j + 1) / j;
			}
			cout << coeficiente << " ";
		}
		cout << endl;
	}	
	
	return 0;
}