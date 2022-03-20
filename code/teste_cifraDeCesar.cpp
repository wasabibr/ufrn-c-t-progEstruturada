#include <iostream>
#include <cstring>
using namespace std;

/*
char cifraCesar(char texto[51], int senha){
	int tam = 0, j = 0;
	char textoDECOD[51];
//	alfa[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
//	'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
	
	tam = strlen(texto);
	
	for(int i = 0; i < tam; i++){
		if(i-senha <= 0 && i-senha < 26){
			textoDECOD[j] = texto[i] - senha;
			j++;
		} else {
			
		}
	}	
	
	return texteDECOD;
}


int main(){
	int numTestes, senha = 0; 
	char texto[51];
	
//	cin >> numTestes;
	
	for(int i = 0; i < 2; i++){
		cin.getline(texto,51);
		cin >> senha;
		cifraCesar(texto, senha);
		cout << endl;
	}
	
	return 0;
}
*/



int main()
{
	int numTestes, senha = 0; 
	char texto[51];
	
	for(int i = 0; i < 2; i++){
		cin.getline(texto,51);
		cin >> senha;
		cout << "oi" << endl;
	}
	
	return 0;
}