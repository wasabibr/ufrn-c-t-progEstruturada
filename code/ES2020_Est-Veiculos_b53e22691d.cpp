/*
ES2020 Est - Ve�culos
b53e22691d

Defina um tipo estruturado para representar um ve�culo, descrito pelos 
seguintes dados:

Modelo;
Marca;
Ano de Fabrica��o;
Pre�o;
Escreva um programa no qual o usu�rio informa os dados de dois ve�culos, 
sendo impresso ao final o modelo e marca do ve�culo mais antigo. Caso ambos 
os ve�culos tenham sido fabricados no mesmo ano, informe a marca e o modelo
do ve�culo mais barato.
*/

#include <iostream>
#include<string>
using namespace std;
#define MAX 2

struct veiculo_t {
	char modelo[100];
	char marca[100];
	int anoFabricacao;
	int preco;
} veiculo[MAX];

void recebeDados(){
	for(int i = 0; i < MAX; i++){
		cin.getline(veiculo[i].modelo,100);
		cin.getline(veiculo[i].marca,100);
		cin >> veiculo[i].anoFabricacao;
		cin.ignore();
		cin >> veiculo[i].preco;
		cin.ignore();
	}
}

void imprimeDados(int j){
    cout << veiculo[j].marca << " " << veiculo[j].modelo << endl;	        
}

void escolheMaisAntigoOuMaisBarato(){
	if(veiculo[0].anoFabricacao < veiculo[1].anoFabricacao){
		imprimeDados(0);
	} else if(veiculo[0].anoFabricacao > veiculo[1].anoFabricacao){
		imprimeDados(1);
	} else {
		if(veiculo[0].preco < veiculo[1].preco){
			imprimeDados(0);
		} else{
			imprimeDados(1);
		}
	}
}

int main(){
	
	recebeDados();
	escolheMaisAntigoOuMaisBarato();

	return 0;
}