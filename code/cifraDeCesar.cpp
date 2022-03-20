/*
Funções - cifra de César

Júlio César usava um sistema de criptografia, agora conhecido como Cifra de 
César, que trocava cada letra pelo equivalente em duas posições à Esquerda 
no alfabeto (por exemplo, 'C' vira 'A', 'T' vira 'R', etc.). 
Ao começo do alfabeto nós voltamos para o fim, isto é 'A' vira 'Y'. Nós podemos, 
é claro, tentar trocar as letras com quaisquer número de posições.

Entrada
1)A entrada contém vários casos de teste. 
2)A primeira linha de entrada contém um inteiro N que indica a quantidade 
de casos de teste. 
3)Cada caso de teste é composto por duas linhas. 
4)A primeira linha contém uma string com até 50 caracteres maiúsculos 
('A'-'Z'), que é a sentença após ela ter sido codificada através desta 
Cifra de César modificada.
5)A segunda linha contém um número que varia de 0 a 25 e que representa 
quantas posições cada letra foi deslocada para a direita.

Saída
Para cada caso de teste de entrada, imprima uma linha de saída com o texto 
decodificado (transformado novamente para o texto original) conforme as regras 
acima e o exemplo abaixo.



Atenção: você deverá utilizar obrigatoriamente funções para a resolução do 
exercício.

Fonte: https://www.urionlinejudge.com.br/repository/UOJ_1253.html 
*/

#include <iostream>
using namespace std;

void cifraCesar(char texto[51], int senha){
	char ch;
		
	for(int i = 0; texto[i] != '\0'; ++i){	
		ch = texto[i];
		ch = ch - senha;
		
		if(ch < 'A'){
			ch = ch + 'Z' - 'A' + 1;
		}
		
		texto[i] = ch;
		
	}
	cout << texto << endl;

}

int main(){
	int numTestes = 0, senha = 0, i; 
	char texto[51];
	
	cin >> numTestes;
	
	cin.ignore();
	
	for(i = 0; i < numTestes; i++){
		cin.getline(texto,51);
		cin >> senha;
		cin.ignore();
		cifraCesar(texto, senha);
	}
	
	return 0;
}