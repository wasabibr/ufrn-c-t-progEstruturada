/*
Primos gêmeos (com função)	
1f69ef7b45	 

Diz-se que um número primo nnn? é gêmeo de um número n+2n+2n+2? se este também 
for primo. Por exemplo, 3 é primo gêmeo de 5; 5 é primo gêmeio de 7; 23 não é 
primo gêmeo de 25. Implemente uma função que receba como entrada um número 
inteiro positivo e retorne verdadeiro caso o número seja primo e falso caso 
contrário. Após isto, implemente também a função main, que deve ler do usuário 
um número inteiro e imprimir uma mensagem informando se ele forma um par de 
gêmeos, de acordo com uma chamada à função implementada. Observe que, mesmo que 
a sua resposta seja dada como correta pelo sistema, a implementação e chamada 
da função como especificado deverá ser considerada para resposta completa do 
exercício.
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