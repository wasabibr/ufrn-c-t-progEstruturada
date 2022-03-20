/*
Tabela Celsius-Farenheit
6f8f1fa143

Implemente um programa que recebe um n�mero real N e imprime uma tabela de 
equival�ncia de temperaturas em graus Celsius e Farenheit. A tabela deve 
come�ar em 0 graus Celsius e deve aumentar de acordo com a entrada N, at� 
ultrapassar 100 graus Celsius. A rela��o das temperaturas � a dada pela 
seguinte f�rmula: 9C=5(F - 32)O formato da tabela deve ser:c1-f1c2-f2c3-f3
Onde cx representa um valor em graus Celsius e fx representa um valor em 
Farenheit e cada linha deve terminar com uma quebra de linha (caractere '\n')

Nota: O caractere de quebra de linha na �ltima linha da tabela � opcional.
*/

#include<iostream>

int main()
{
	float n, cx = 0, fx = 0, contN = 0;
	
	std::cin >> n;
		
	do{
		  cx = contN;
		  fx = (9 * cx)/5 + 32;
		  std::cout << cx << " - " << fx << "\n";
		  contN = contN + n; 	
	}while(cx <= 100);
		
	return 0;
}