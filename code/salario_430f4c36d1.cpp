/*
Salário
430f4c36d1

Escreva um programa que lê o número de um trabalhador (inteiro), suas horas 
trabalhadas no mês (inteiro) e o quanto ele/ela recebe por hora trabalhada 
(ponto flutuante). Seu programa deve imprimir o número do empregado(a) e o 
salário do mês. Seu programa deve imprimir o salário com um número fixo de 2 
casas decimais. Para isso utilize a biblioteca iomanip e o comando exemplificado 
abaixo:int main(){ float f1 = 123.456 ; float f2 = 1234 ; // Imprimir só 2 casas 
decimais cout << fixed << setprecision(2); cout << f1 << endl ; // Imprime 
123.46 cout << f2 << endl ; // Imprime 1234.00 return 0;}
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    int id;
    float horas, horaSal, sal;

    cin >> id >> horas >> horaSal;
    
    sal = horas * horaSal;
    
    cout << "ID: " << id << endl;
    cout << "Salario: " << sal << endl;

    return 0;
}