/*
ES2020 C�rculo Cont�m C�rculo
d3417327fc

Um c�rculo pode ser representado no plano pelas coordenadas de sua origem 
(x0,y0) e seu raio(r).
Defina um tipo estruturado para representar um c�rculo e a partir desta 
defini��o escreva uma fun��o que, dados dois c�rculos a e b como par�metros, 
retorna verdadeiro ou falso para a seguinte afirma��o: b est� contido em a.
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
		cout << "b est� contido em a" << endl;
	} else {
		cout << "b n�o est� contido em a" << endl;
	}        
} 
  
int main() 
{ 
    circuloContemCirculo(); 
  
    return 0; 
}