/*
Min�sculas
32b99d4097

Fa�a um programa que l� um n�mero n e em seguida, l� n caracteres. O programa 
deve exibir a quantidade de caracteres digitados que s�o letras min�sculas.
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