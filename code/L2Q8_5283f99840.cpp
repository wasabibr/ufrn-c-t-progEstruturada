/*
L2Q8	5283f99840

Escreva um programa que recebe um número de 3 dígitos no formato ABC e o 
reescreve no formato CBA.
*/

#include <iostream>
using namespace std;

int main(){
    int num, U, D, C;
    
    cin >> num;
    
    U = num - (num/10)*10;
    D = ((num - (num/100)*100) - U)/10;
    C = ((num/100)*100)/100; 
    
    cout << U << D << C;
    
    return 0;
}