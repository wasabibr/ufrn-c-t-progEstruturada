/*
Conversão de graus Celsius para graus Fahrenheit
389877964c

Escreva que um programa que tem como entrada um valor real que representa
uma medição de temperatura em graus Celsius. Seu programa deve apresentar
como saída a conversão do valor lido para a escola de temperatura Fahrenheit.

F = 1.8 * C + 32;
*/

#include <iostream>

int main()
{
	float c, f;
	
	std::cin >> c;
	
	f = 1.8 * c + 32;
	
	std::cout << f;
	
	return 0;
}