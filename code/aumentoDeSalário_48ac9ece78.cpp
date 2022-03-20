/*
Aumento de sal�rio
48ac9ece78

Um funcion�rio ir� receber um aumento de acordo com o seu plano de trabalho, 
conforme a lista a seguir:Plano A: 10% de aumento;Plano B: 15% de aumento;
Plano C: 20% de aumento;Escreva um programa que l� o plano de trabalho e o 
sal�rio atual de um funcion�rio, calcula e imprime o seu novo sal�rio (com 
duas casas decimais de precis�o).
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    char plan;
    double sal;
    
    cin >> plan >> sal;
    
    switch (plan){
        case 'A':
            cout << "R$ " << sal*1.1;
            break;
        case 'B':
            cout << "R$ " << sal*1.15;
            break;
        default: 
            cout << "R$ " << sal*1.2;
            break;
    }
    return 0;
}