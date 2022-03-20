/*
D�gito na posi��o (com fun��o)
1d066aa150

Implemente uma fun��o que receba como entrada dois n�meros inteiros
x e p. A fun��o a ser implementada deve retornar o d�gito na posi��o p 
do n�mero x, considerando que a posi��o
0 � o primeiro d�gito � direita do n�mero x.
Implemente tamb�m a fun��o main, que deve ler do usu�rio dois n�meros inteiros, 
denotando o n�mero de entrada e uma posi��o de interesse. A fun��o main deve 
realizar uma chamada � fun��o implementada passando como par�metros os n�meros 
lidos e imprimir na tela uma mensagem informando qual o d�gito do n�mero na 
posi��o solicitada.
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

