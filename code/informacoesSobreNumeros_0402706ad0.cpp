/*
Informações sobre números
0402706ad0

Escreva um programa que solicita vários números naturais ao usuário e exibe 
o resultado das seguintes opções:
(a) A multiplicação dos números digitados
(b) Quantos números foram digitados
(c) Quantos números digitados são ímpares
(d) A média dos números pares

	O programa deve parar de solicitar números caso o usuário digite o valor 0.
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