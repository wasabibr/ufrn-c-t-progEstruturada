/*
Notas
11be7b32bb

Neste problema você irá ler um valor inteiro e calcular o MENOR número 
possível de notas em que este valor pode ser decomposto. As possíveis notas 
são 100, 50, 20, 10, 5, 2 e a moeda de 1 real. Imprima a lista de notas e 
moedas em que ele foi decomposto.
*/

#include<iostream>

int main(){
	int valorTotal, n100, n50, n20, n10, n5, n2, m1;
	
	std::cin >> valorTotal;
	
	n100 = valorTotal/100;
	n50 = (valorTotal - (n100*100))/50;
	n20 = (valorTotal - (n100*100) - (n50*50))/20;
	n10 = (valorTotal - (n100*100) - (n50*50) - (n20*20))/10;
	n5 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10))/5;
	n2 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) -(n5*5))/2;
	m1 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) -(n5*5) - (n2*2));
		
	
	std::cout << n100 << " nota(s) de 100" << std::endl;
	std::cout << n50 << " nota(s) de 50" << std::endl;
	std::cout << n20 << " nota(s) de 20" << std::endl;
	std::cout << n10 << " nota(s) de 10" << std::endl;
	std::cout << n5 << " nota(s) de 5" << std::endl;
	std::cout << n2 << " nota(s) de 2" << std::endl;
	std::cout << m1 << " moeda de 1" << std::endl;
	
	return 0;
}