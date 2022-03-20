/*
Encontre a média
bf5a117498

Implemente um programa que lê um número n do usuário e em 
seguida, lê n números inteiros. O programadeve exibir a média dos valores 
digitados. Imprima o resultado com 2 casas decimais.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    
	int n;
	float num, soma = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> num;
		soma += num;
	}    
    
    cout << soma / n;
    
    
    return 0;
}
