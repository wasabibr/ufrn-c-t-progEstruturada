/*
Função Máximo3
d6c14a41cb

Escreva uma função maximo que recebe três valores inteiros e retorna o maior
valor dos três.
*/

#include <iostream>
#include <cmath>

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

  cout << "Maior = " << maior_tres << endl;
  
  return 0;
}