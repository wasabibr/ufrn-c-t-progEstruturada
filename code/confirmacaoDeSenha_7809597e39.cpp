/*
Confirma��o de senha
7809597e39

Implemente um programa que leia uma senha alfanum�rica e que pe�a ao usu�rio 
para digitar a confirma��o da senha. O programa deve exibir uma mensagem se 
houve coincid�ncia ou n�o entre a senha e a confirma��o digitadas.
*/

#include<iostream>
#include<cstring>
#define TAM 20;
using namespace std;

int main()
{
	char senha1[20];
	char senha2[20];
	
	cin.getline(senha1, 20);
	cin.getline(senha2, 20);
	
	if(strcmp(senha1, senha2) == 0){
		cout << "As senhas correspondem";
	} else {
		cout << "As senhas nao correspondem";
	}
	
	return 0;
}
