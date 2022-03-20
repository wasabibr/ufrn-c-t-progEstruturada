/*
Conversão de CASE
70b20ab819

Escreva um programa que lê do teclado caracteres e que converte os caracteres 
alfabéticos maiúsculos em minúsculos e vice-versa, exibindo-os na tela. O 
programa deve ignorar caracteres não alfabéticos e deve parar quando for 
digitado o caractere @.
*/

#include <iostream>

using namespace std;

int main(){
    char c, converte;
    
    while(true){
        cin >> c;
        if(c == '@'){
        	break;
		}
                
        if(c >= 'a' && c <= 'z'){
	        converte = c - 32;
	        cout << converte << " ";
	    }
	    else if(c >= 'A' && c <= 'Z'){
	        converte = c + 32;
	        cout << converte << " ";
    	}
    }
    
    return 0;
}