/*
Criando vari�veis e imprimindo seus valores
468de2dab6

Escreva um programa em C++ que cria uma vari�vel para cada tipo b�sico
da linguagem (int, float, double, char, bool) e em seguida l� um valor
para cada uma das vari�veis criadas. Em seguida seu programa deve imprimir
a seguinte sa�da:int lido: float lido: double lido: char lido: bool lido:
*/

#include <iostream>

int main()
{
	int inteiro;
	float flutuante;
	double flutuanteDuplaPrecisao;
	char caractere;
	bool boleano;
	
	std::cin >> inteiro;
	std::cin >> flutuante;
	std::cin >> flutuanteDuplaPrecisao;
	std::cin >> caractere;
	std::cin >> boleano;
	
	std::cout << "int lido: " << inteiro << std::endl;
	std::cout << "float lido: " << flutuante << std::endl;
	std::cout << "double lido: " << flutuanteDuplaPrecisao << std::endl;
	std::cout << "char lido: " << caractere << std::endl;
	std::cout << "bool lido: " << boleano << std::endl;
	
	return 0;
}