/*
A dezena � par ou �mpar	
7b228b081c

Escreva um programa que leia do teclado um n�mero inteiro pertencente 
ao intervalo [100;999] e informe se o algarismo da casa das dezenas � 
par ou �mpar.
*/

#include<iostream>

int main(){
    int n;
    std::cin >> n;
    
    int dezena = (n/10) % 10;
    if(dezena % 2 == 0){
    	std::cout << "A dezena � par!";
    } else {
    	std::cout << "A dezena � �mpar!";
    }
    
    return 0;
}