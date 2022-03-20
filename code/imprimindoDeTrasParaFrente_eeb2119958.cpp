/*
Imprimindo de trás para frente
eeb2119958


*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char frase[200];
	int tam = 0, max = 0, maxE = 0;
	
//	cin >> maxE;
	cin.getline(frase,200);
	cin >> max;

	tam = strlen(frase);

	for(int i = tam-1; i >= 0; --i){
		cout << frase[i];
	}
	
	return 0;
}