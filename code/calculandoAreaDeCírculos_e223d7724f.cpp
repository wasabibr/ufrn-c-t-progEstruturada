/*
Calculando área de círculos
e223d7724f

Escreva um programa que declara uma variável PI que deve ser iniciada 
com o valor 3.1415. Seu programa também deve declarar uma variável r. 
Leia um valor real para a variável r e em seguida imprima na saída padrão 
a área do círculo determinada pelo valor de r. No cálculo use a variável 
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