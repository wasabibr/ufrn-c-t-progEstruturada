/*
Litros de gasolina
d7d3c3bc4e

Jo�o quer saber quantos litros de gasolina ser�o gastos 
em uma viagem (seu carro faz 12 km/L). Para isso ele pediu que voc� criasse 
um programa que fa�a esse c�lculo. A fim de resolver o problema, voc� 
precisar� ler o tempo gasto na viagem (em horas) e a velocidade m�dia do 
ve�culo (km/h) respectivamente. Com isso, voc� poder� saber a dist�ncia 
percorrida e em seguida calcular quantos litros de gasolina ser�o necess�rios. 
Seu programa dever� imprimir os resultados com um n�mero fixo de 2 casas 
decimais. Para isso utilize a biblioteca iomanip e o comando exemplificado
abaixo:int main(){ float f1 = 123.456 ; float f2 = 1234 ; // Imprimir s� 2 
casas decimais cout << fixed << setprecision(2); cout << f1 << endl ; 
// Imprime 123.46 cout << f2 << endl ; // Imprime 1234.00 return 0;}
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    float horas, velMedia, dist, quantLitros;

    cin >> horas >> velMedia;
    
    dist = horas * velMedia;
    
    quantLitros = dist/12;
    
    cout << quantLitros << endl;
 
    return 0;
}