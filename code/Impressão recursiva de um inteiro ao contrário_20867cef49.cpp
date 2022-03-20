/*
Impress�o recursiva de um inteiro ao contr�rio	20867cef49

Crie uma fun��o recursiva que imprime os d�gitos de um n�mero inteiro n em 
ordem inversa.
*/

#include <iostream>
using namespace std; 

int aux, soma;

int inverteDigitos(int num) 
{ 
	if(num > 0){
		aux = num % 10;
		soma = soma * 10 + aux;
		inverteDigitos(num / 10);
	} else {
		return soma;
	}
} 

int main() 
{ 
    int n;
    
    cin >> n;
    
    cout << inverteDigitos(n); 
  
    return 0; 
} 