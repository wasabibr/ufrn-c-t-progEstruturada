/*
Pirâmide de números recursiva
a3db4a50a7

Crie uma função que imprime uma pirâmide conforme o exemplo abaixo de forma recursiva, onde o maior valor n é fornecido como argumento. Para n=5 temos:

?1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include <iostream>
using namespace std;

int imprimeLinha(int caractere, int num) 
{ 
    if (num == 0){
		return caractere;
	} 
	cout << imprimeOrdemInversa(num - 1) << " "; 
    imprimeLinha(imprimeOrdemInversa(num - 1) + 1, num - 1); 
} 
  
void imprimeOrdemInversa(int num) 
{  
    if (num <= 0) { 
        return; 
    } 
    else { 
        cout << num << " "; 
        imprimeOrdemInversa(num - 1); 
    } 
} 
  
// driver function 
int main() 
{ 
    int n = 0;
    
    cin >> n;
    
    pattern(n, 1, 1); 
}