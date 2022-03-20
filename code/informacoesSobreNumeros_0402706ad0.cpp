/*
Informa��es sobre n�meros
0402706ad0

Escreva um programa que solicita v�rios n�meros naturais ao usu�rio e exibe 
o resultado das seguintes op��es:
(a) A multiplica��o dos n�meros digitados
(b) Quantos n�meros foram digitados
(c) Quantos n�meros digitados s�o �mpares
(d) A m�dia dos n�meros pares

	O programa deve parar de solicitar n�meros caso o usu�rio digite o valor 0.
*/

#include <iostream>

using namespace std;

int main(){
    int num, contNum = 0, contImpar = 0, contPar = 0;
    float numMult = 1, somaPar = 0, mediaPar = 0; 
    
	do{
		cin >> num;
    	if(num != 0){
			numMult *= num;
			contNum++;
		if(num%2 != 0){
			contImpar++;
		}
		if(num%2 == 0){
			somaPar += num;
			contPar++;
		}
	}  	
	}while(num !=0);
    	
    mediaPar = somaPar / contPar;
    
    if(contPar == 0){
        mediaPar = 0;
    }
    
    cout << "Multiplicacao dos numeros digitados: " << numMult << endl;
    cout << "Total de numeros digitados: " << contNum << endl;
    cout << "Total de impares digitados: " << contImpar << endl;
    cout << "Media dos numeros pares: " << mediaPar << endl;
    
    return 0;
}