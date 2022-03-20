/*
A soma é par?
73f753a0b3

Escreva um programa que lê dois valores inteiros e imprime "A soma é par!" 
caso a soma dos valores lidos for par.
*/

#include<iostream>

int main(){
    int a, b, soma;
    
    std::cin >> a >> b;
    
    soma = a + b;
    
    if(soma%2 == 0){
        std::cout << "A soma é par!";
    }
    
    return 0;
}