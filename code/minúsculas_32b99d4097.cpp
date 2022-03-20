/*
Minúsculas
32b99d4097

Faça um programa que lê um número n e em seguida, lê n caracteres. O programa 
deve exibir a quantidade de caracteres digitados que são letras minúsculas.
*/


#include <iostream>

using namespace std;

int main(){
    int n, cont = 0;
	char c;
    
    cin >> n;
        
    for(int i = 0; i < n; i++){
        cin >> c;
                
        if(c >= 'a' && c <= 'z'){
	        cont++;
	    }
	    
	}
	
	cout << cont;
	
	return 0;
}