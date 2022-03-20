/*
Fun��es - cifra de C�sar

J�lio C�sar usava um sistema de criptografia, agora conhecido como Cifra de 
C�sar, que trocava cada letra pelo equivalente em duas posi��es � Esquerda 
no alfabeto (por exemplo, 'C' vira 'A', 'T' vira 'R', etc.). 
Ao come�o do alfabeto n�s voltamos para o fim, isto � 'A' vira 'Y'. N�s podemos, 
� claro, tentar trocar as letras com quaisquer n�mero de posi��es.

Entrada
1)A entrada cont�m v�rios casos de teste. 
2)A primeira linha de entrada cont�m um inteiro N que indica a quantidade 
de casos de teste. 
3)Cada caso de teste � composto por duas linhas. 
4)A primeira linha cont�m uma string com at� 50 caracteres mai�sculos 
('A'-'Z'), que � a senten�a ap�s ela ter sido codificada atrav�s desta 
Cifra de C�sar modificada.
5)A segunda linha cont�m um n�mero que varia de 0 a 25 e que representa 
quantas posi��es cada letra foi deslocada para a direita.

Sa�da
Para cada caso de teste de entrada, imprima uma linha de sa�da com o texto 
decodificado (transformado novamente para o texto original) conforme as regras 
acima e o exemplo abaixo.



Aten��o: voc� dever� utilizar obrigatoriamente fun��es para a resolu��o do 
exerc�cio.

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