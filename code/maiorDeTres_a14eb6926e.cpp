/*
Maior de três
a14eb6926e

Escreva uma função maximo que recebe três valores inteiros e retorna o maior valor
dos três. Você pode assumir que o usuário irá fornecer números distintos.
*/

#include <iostream>

using namespace std;

// função retorna maior de três valores
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