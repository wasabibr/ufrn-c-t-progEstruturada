/*
Raízes de uma equação do segundo grau	8e343b47c3

Faça um programa que receba os coeficientes a b e c de uma equação de
segundo grau e verifique se a equação possui raízes. Caso ela possua,
mostre quais são, caso contrário infomr "Nao possui raizes". Não aceite
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