/*
Somat�rio recursivo de 1 a n
67ac2f5dd8

Crie uma fun��o recursiva que receba um n�mero inteiro positivo n e calcule o 
somat�rio dos n�meros de 1 a n.
*/

#include<iostream>
using namespace std;

int somatorio(int num)
{
    if(num != 0){
   	   return num + somatorio(num - 1);
	} else {
   	   return 0;
	}

}

int main()
{
    int n;

    cin >> n;

    cout << somatorio(n);

    return 0;
}