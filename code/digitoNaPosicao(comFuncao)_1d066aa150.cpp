/*
Dígito na posição (com função)
1d066aa150

Implemente uma função que receba como entrada dois números inteiros
x e p. A função a ser implementada deve retornar o dígito na posição p 
do número x, considerando que a posição
0 é o primeiro dígito à direita do número x.
Implemente também a função main, que deve ler do usuário dois números inteiros, 
denotando o número de entrada e uma posição de interesse. A função main deve 
realizar uma chamada à função implementada passando como parâmetros os números 
lidos e imprimir na tela uma mensagem informando qual o dígito do número na 
posição solicitada.
*/

#include <iostream>
#include <cmath>
using namespace std;

int retornaDigPosicao(int x, int p){
	int xP_i, xP;
	float xP_f, num;
	
    cin >> x >> p;
    num = x;
    
	xP_i = num / pow(10,(p + 1));
	xP_f = num / pow(10,(p + 1));
	xP = (xP_f - xP_i) * 10;
	
    return xP;
}

int main()
{
  int pos, num, numPos;

  numPos = retornaDigPosicao(num, pos);

  cout << "O digito na posicao solicitada e " << numPos;
  
  return 0;
}

