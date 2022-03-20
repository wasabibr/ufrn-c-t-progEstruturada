/*
Litros de gasolina
d7d3c3bc4e

João quer saber quantos litros de gasolina serão gastos 
em uma viagem (seu carro faz 12 km/L). Para isso ele pediu que você criasse 
um programa que faça esse cálculo. A fim de resolver o problema, você 
precisará ler o tempo gasto na viagem (em horas) e a velocidade média do 
veículo (km/h) respectivamente. Com isso, você poderá saber a distância 
percorrida e em seguida calcular quantos litros de gasolina serão necessários. 
Seu programa deverá imprimir os resultados com um número fixo de 2 casas 
decimais. Para isso utilize a biblioteca iomanip e o comando exemplificado
abaixo:int main(){ float f1 = 123.456 ; float f2 = 1234 ; // Imprimir só 2 
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