/*
Raízes de uma equação de segundo grau	1f16f4a563

Faça um programa que recebe os coeficientes a, b e c de uma equação de segundo 
grau e calcula suas raízes.

f(x) = a * x ^ 2 + b * x + c
*/

#include<iostream>
#include<cmath>

int main(){
	int a, b, c;
	int x1, x2, delta;
	
	std::cin >> a;
	while(a == 0)
	{
		std::cin >> a;
	}
	std::cin >> b;

	std::cin >> c;
	
	delta = pow(b,2) - (4 * a * c);
	
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
	
	if(delta == 0){
		std::cout << x1 << " " << x2 << std::endl;
	} else {
		std::cout << x1 << " " << x2 << std::endl;
	}
		
	return 0;
}

