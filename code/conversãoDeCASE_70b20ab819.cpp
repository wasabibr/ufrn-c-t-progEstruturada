/*
Convers�o de CASE
70b20ab819

Escreva um programa que l� do teclado caracteres e que converte os caracteres 
alfab�ticos mai�sculos em min�sculos e vice-versa, exibindo-os na tela. O 
programa deve ignorar caracteres n�o alfab�ticos e deve parar quando for 
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