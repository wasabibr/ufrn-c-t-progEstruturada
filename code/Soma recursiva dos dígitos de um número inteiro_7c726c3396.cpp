/*
Soma recursiva dos dígitos de um número inteiro
7c726c3396

Crie uma função recursiva que retorna a soma dos dígitos de um número inteiro n.
*/

#include <iostream>
using namespace std;  
  
int somaDigito(int num)  
{  
    if (num != 0){
		return (num % 10 + somaDigito(num / 10));
	} else {
		return 0;
	}       
}  
   
int main()  
{  
    int n = 0;  
    
    cin >> n;
    
	cout << somaDigito(n);
	  
    return 0;  
}