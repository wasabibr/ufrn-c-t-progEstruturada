/*
Maior de Tr�s
56625ec41b

Escreva uma fun��o maximo que recebe tr�s valores inteiros e retorna o maior valor
dos tr�s. Voc� pode assumir que o usu�rio ir� fornecer n�meros distintos.
*/

#include <iostream>
#include <cmath>

using namespace std;

// fun��o retorna maior de tr�s valores
int acheMaior (int x, int y, int z)
{
  int maior;

  maior = x;

  if (y > maior)
    {
      maior = y;
    }

  if (z > maior)
    {
      maior = z;
    }

  return maior;
}

int main()
{
  int a, b, c, maior_tres;

  cin >> a >> b >> c;

  maior_tres = acheMaior(a,b,c);

  cout << maior_tres;
  
  return 0;
}