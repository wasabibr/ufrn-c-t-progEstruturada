/*
Aumento de salário
48ac9ece78

Um funcionário irá receber um aumento de acordo com o seu plano de trabalho, 
conforme a lista a seguir:Plano A: 10% de aumento;Plano B: 15% de aumento;
Plano C: 20% de aumento;Escreva um programa que lê o plano de trabalho e o 
salário atual de um funcionário, calcula e imprime o seu novo salário (com 
duas casas decimais de precisão).
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