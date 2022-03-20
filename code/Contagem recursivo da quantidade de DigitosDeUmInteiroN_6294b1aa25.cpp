/*
Contagem recursivo da quantidade de dígitos de um inteiro n
6294b1aa25

Crie uma função recursiva que retorna a quantidade de dígitos contidos em um 
número inteiro n.
*/

#include <iostream>
using namespace std;
 
int contaDigitos(int num)
{
    if (num != 0){
		return 1 + contaDigitos(num / 10);
	}else {
		return 0;
	}
}

int main()
{
    int n;
    
    cin >> n;
    
    if (n == 0){
        cout << 1;
    } else {
        cout << contaDigitos(n);
    }
    
	return 0;
}