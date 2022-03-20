/*
Contagem recursiva de dígitos
b3ecdb285c

Escreva uma função recursiva que recebe um número inteiro e um dígito (0-9) 
como argumentos e retorna a quantidade de vezes que o dígito ocorre no número.
•    funcao(8,8) deve retornar 1
•    funcao(717,7) deve retornar 2
*/

#include <iostream>
using namespace std;
 
int contaDigitosD(int num, int d) {
	int digito;
	digito = num % 10;
    if (num == 0) {
        return 0; 
	} 
    if (digito == d){
		return 1 + contaDigitosD(num / 10, d);
	} 
         
    return contaDigitosD(num / 10, d); 
} 

int main()
{
    int n = 0, k = 0;
    
    cin >> n >> k;
    
    cout << contaDigitosD(n, k);
        
	return 0;
}