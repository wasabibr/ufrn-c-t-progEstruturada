/*
Criando variáveis e imprimindo seus valores
468de2dab6

Escreva um programa em C++ que cria uma variável para cada tipo básico
da linguagem (int, float, double, char, bool) e em seguida lê um valor
para cada uma das variáveis criadas. Em seguida seu programa deve imprimir
a seguinte saída:int lido: float lido: double lido: char lido: bool lido:
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