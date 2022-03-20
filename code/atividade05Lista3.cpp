/*
Atividade 5 da lista 3

Implemente um programa para calcular a média e o desvio-padrão das notas 
(com precisão de uma casa decimal) de uma turma de 10 alunos. O resultado 
deve ser dado com precisão de duas casas decimais. 
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    
    float vetor[10], soma = 0, media = 0, s = 0, sigma = 0;
    
    for(int i = 0; i < 10; i++){
		cin >> vetor[i];
	}
	
	for(int i= 0; i < 10; i++){
		soma = soma + vetor[i];
	}
	
	media = soma / 10.0;
	
	for(int i = 0; i < 10; i++){
        s = s + pow(vetor[i] - media,2);
    }
    sigma = sqrt(s/(10-1));
    
    cout << media << " " << sigma << endl;
    
    return 0;  
}