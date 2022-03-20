/*
Ra�zes de uma equa��o do segundo grau	8e343b47c3

Fa�a um programa que receba os coeficientes a b e c de uma equa��o de
segundo grau e verifique se a equa��o possui ra�zes. Caso ela possua,
mostre quais s�o, caso contr�rio infomr "Nao possui raizes". N�o aceite
coeficientes nulos.
*/

#include<iostream>
#include<cmath>

int main(){
	float a, b, c;
	double x1, x2, delta;
	
	std::cin >> a;
	while(a == 0)
	{
		std::cin >> a;
	}
	std::cin >> b;
	while(b == 0)
	{
		std::cin >> b;
	}
	std::cin >> c;
	while(c == 0)
	{
		std::cin >> c;
	}
	
	delta = pow(b,2) - (4 * a * c);
	
	x1 = (-b + sqrt(delta)/(2*a);
	x2 = (-b - sqrt(delta)/(2*a);
	
	if(delta < 0){
		std::cout << "Nao possui raizes";
	} else if(delta == 0){
		std::cout << "X1: " << x1 << std::endl;;
		std::cout << "X2: " << x2;
	} else {
		std::cout << "X1: " << x1 << std::endl;;
		std::cout << "X2: " << x2;
	}
		
	return 0;
}