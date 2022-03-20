/*
Primos g�meos (com fun��o)	
1f69ef7b45	 

Diz-se que um n�mero primo nnn? � g�meo de um n�mero n+2n+2n+2? se este tamb�m 
for primo. Por exemplo, 3 � primo g�meo de 5; 5 � primo g�meio de 7; 23 n�o � 
primo g�meo de 25. Implemente uma fun��o que receba como entrada um n�mero 
inteiro positivo e retorne verdadeiro caso o n�mero seja primo e falso caso 
contr�rio. Ap�s isto, implemente tamb�m a fun��o main, que deve ler do usu�rio 
um n�mero inteiro e imprimir uma mensagem informando se ele forma um par de 
g�meos, de acordo com uma chamada � fun��o implementada. Observe que, mesmo que 
a sua resposta seja dada como correta pelo sistema, a implementa��o e chamada 
da fun��o como especificado dever� ser considerada para resposta completa do 
exerc�cio.
*/

#include<iostream>
using namespace std;

int primoGemeo(int n)
{
	int contaP = 0, contaPG = 0, pG = 0;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		if(n%i == 0){
			contaP++;
		}
	}
	for(int i = 1; i <= n+2; i++){
		if((n+2)%i == 0){
			contaPG++;
		}
	}
	if (contaP == 2 && contaPG == 2){
		pG = 1;
	} else {
		pG = 0;
	}
	
	return pG;
}

int main()
{
	int num;
  
	if (primoGemeo(num) == 1){
		cout << "Numero forma par de gemeos";
	} else {
		cout << "Numero nao forma par de gemeos";
	}
  
	return 0;
}