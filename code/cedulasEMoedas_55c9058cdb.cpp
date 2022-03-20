/*
Cédulas e moedas
55c9058cdb

Leia um valor real com duas casas decimais. Este valor representa um valor 
monetário. A seguir, calcule o menor número de notas e moedas possíveis no 
qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 
10, 5 e 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A 
seguir mostre a relação de notas necessárias, imprimindo na mesma formatação 
dos exemplos, a quantidade seguida de um espaço e a mensagem “nota(s) de x” 
ou “moeda(s) de x”, sendo ‘x’ as notas de valor descrito acima. Lembre-se de 
utilizar o “\n” para quebrar as linhas.
*/

#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
	double valorTotal;
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, m1 = 0, m050 = 0, m025 = 0, m010 = 0, m005 = 0, m001 = 0;
	
	cin >> valorTotal;
	
	n100 = valorTotal/100;
	n50 = (valorTotal - (n100*100))/50;
	n20 = (valorTotal - (n100*100) - (n50*50))/20;
	n10 = (valorTotal - (n100*100) - (n50*50) - (n20*20))/10;
	n5 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10))/5;
	n2 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) - (n5*5))/2;
	m1 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) - (n5*5) - (n2*2));
	m050 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) - (n5*5) - (n2*2) - (m1))/0.5;
	m025 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) - (n5*5) - (n2*2) - (m1) - (m050*0.5))/0.25;
	m010 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) - (n5*5) - (n2*2) - (m1) - (m050*0.5) - (m025*0.25))/0.1;
	m005 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) - (n5*5) - (n2*2) - (m1) - (m050*0.5) - (m025*0.25) - (m010*0.1))/0.05;
	m001 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) - (n5*5) - (n2*2) - (m1) - (m050*0.5) - (m025*0.25) - (m010*0.1) - (m005*0.05))/0.01;
		
	cout << n100 << " nota(s) de 100" << endl;
	cout << n50 << " nota(s) de 50" << endl;
	cout << n20 << " nota(s) de 20" << endl;
	cout << n10 << " nota(s) de 10" << endl;
	cout << n5 << " nota(s) de 5" << endl;
	cout << n2 << " nota(s) de 2" << endl;
	cout << m1 << " moeda(s) de 1" << endl;
	cout << m050 << " moeda(s) de 0.50" << endl;
	cout << m025 << " moeda(s) de 0.25" << endl;
	cout << m010 << " moeda(s) de 0.10" << endl;
	cout << m005 << " moeda(s) de 0.05" << endl;
	cout << m001 << " moeda(s) de 0.01";
	
	return 0;
}