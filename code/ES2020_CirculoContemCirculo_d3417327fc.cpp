/*
ES2020 Círculo Contém Círculo
d3417327fc

Um círculo pode ser representado no plano pelas coordenadas de sua origem 
(x0,y0) e seu raio(r).
Defina um tipo estruturado para representar um círculo e a partir desta 
definição escreva uma função que, dados dois círculos a e b como parâmetros, 
retorna verdadeiro ou falso para a seguinte afirmação: b está contido em a.
*/
  
#include <iostream>
#include <cmath>
using namespace std; 

struct circulo{
	float x;
	float y;
	float r;
};
  
void circuloContemCirculo() 
{ 
	circulo A;
	circulo B;
	
	cin >> A.x >> A.y >> A.r;
	cin >> B.x >> B.y >> B.r;	
	                         
    int distAB = sqrt(((A.x - B.x) * (A.x - B.x)) + ((A.y - B.y) * (A.y - B.y))); 
  
    if (distAB + B.r == A.r || distAB + B.r < A.r){
		cout << "b está contido em a" << endl;
	} else {
		cout << "b não está contido em a" << endl;
	}        
} 
  
int main() 
{ 
    circuloContemCirculo(); 
  
    return 0; 
}