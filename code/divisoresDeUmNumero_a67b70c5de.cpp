/*
Divisores de um número	
a67b70c5de

Faça um programa que lê um número inteiro e imprime todos os seus divisores.
*/

#include <iostream>
using namespace std;

int main(){
    int num, cont = 1, res;
    
    cin >> num;
    
    while(cont <= num){
        res = num / cont;
        if(res * cont == num)
            cout << cont << " ";
        cont++;
    }
      
    return 0;
}