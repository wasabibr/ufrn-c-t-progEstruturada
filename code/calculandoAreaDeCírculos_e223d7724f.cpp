/*
Calculando �rea de c�rculos
e223d7724f

Escreva um programa que declara uma vari�vel PI que deve ser iniciada 
com o valor 3.1415. Seu programa tamb�m deve declarar uma vari�vel r. 
Leia um valor real para a vari�vel r e em seguida imprima na sa�da padr�o 
a �rea do c�rculo determinada pelo valor de r. No c�lculo use a vari�vel 
PI declarada.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double r, PI = 3.1415, a;
    
    cin >> r;
    
    a = PI * pow(r,2);
    
    cout << a;
    
    return 0;
}