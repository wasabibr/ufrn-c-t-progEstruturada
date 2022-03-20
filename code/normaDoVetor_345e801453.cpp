/*
Norma do vetor
345e801453

Escreva um programa que lê as coordenadas a e b de um vetor no plano, calcula
e imprime a norma do vetor lido.

u = sqrt(pow(a,2)+pow(b,2));
*/

#include<iostream>
#include<cmath>

int main()
{
	double u;
	float a, b;
	
	std::cin >> a;
	std::cin >> b;
	
	u = sqrt(pow(a,2)+pow(b,2));
	
	std::cout << u;
	
	return 0;
}
