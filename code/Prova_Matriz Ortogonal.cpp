#include <iostream> 
using namespace std; 
  
bool verificaMatrizOrtogonal(int matriz[10][10], int n){ 
	int matrizTransposta[n][n], matrizProduto[n][n];
	
	for (int i = 0; i < n; i++){
	    for (int j = 0; j < n; j++){
	    	matrizTransposta[i][j] = matriz[j][i]; 
		}
	}
	
	for (int i = 0; i < n; i++){ 
	    for (int j = 0; j < n; j++){ 
		    int somatorio = 0; 
		    for (int k = 0; k < n; k++){ 
		        somatorio = somatorio + (matriz[i][k] * matriz[j][k]); 
		    } 
		    matrizProduto[i][j] = somatorio; 
	    } 
	} 
	  
	for (int i = 0; i < n; i++){ 
	    for (int j = 0; j < n; j++){ 
		    if (i != j && somatorio != 0){
				return false;
			}
			if (i == j && somatorio != 1){
				return false;
			}  
	    } 
	}
	return true; 
} 
  
  
int main(){ 
  
	int mat[10][10], n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}
	
	if (verificaMatrizOrtogonal(mat, n)){
		cout << "Matriz é ortogonal";
	} else {
		cout << "Matriz não é ortogonal";
	}
 	     
	return 0; 
} 