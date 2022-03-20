/*
A dezena é par ou ímpar	
7b228b081c

Escreva um programa que leia do teclado um número inteiro pertencente 
ao intervalo [100;999] e informe se o algarismo da casa das dezenas é 
par ou ímpar.
*/

#include<iostream>

int main(){
    int n;
    std::cin >> n;
    
    int dezena = (n/10) % 10;
    if(dezena % 2 == 0){
    	std::cout << "A dezena é par!";
    } else {
    	std::cout << "A dezena é ímpar!";
    }
    
    return 0;
}