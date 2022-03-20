#include<iostream>
#define TAM 10
using namespace std;


bool ehOrtogonal(int M[TAM][TAM], int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = i+1; j < n; ++j) {
            float escalar_lin = 0;
            float escalar_col = 0;
            
            int sl1 = 0, sl2 = 0, sc1 = 0, sc2 = 0;
            
            for(int k = 0; k < n; ++k) {
                escalar_lin += M[i][k]*M[j][k];
                escalar_col += M[k][i]*M[k][j];
                
                sl1 += M[i][k];
                sl2 += M[j][k];
                sc1 += M[k][i];
                sc2 += M[k][j];
            }
            
            if(escalar_lin != 0 || escalar_col != 0) {
                return false;
            }
            
            if(sl1 == 0 || sl2 == 0 || sc1 == 0 || sc2 == 0) {
                return false;
            }
        }    
    }
    
    return true;
}

int main() {
    int M[TAM][TAM];
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> M[i][j];
        }    
    }
    
    if(ehOrtogonal(M,n)) {
        cout << "Matriz é ortogonal";
    } else {
        cout << "Matriz não é ortogonal";
    }
    
    return 0;
}