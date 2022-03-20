/*
Notas SIGAA	edb356878d

Leia três números (U1, U2, U3), cada um deles com uma casa decimal, 
correspondente às três notas de um aluno da UFRN. Em seguida, calcule 
a média simples e mostre esta média acompanhada pela mensagem "Media: ". 
Seu programa deve informar a situação do aluno. Ou seja, se esta média 
for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado". 

Caso a 
média fique entre 5.0 e 6.9, imprima “Aluno aprovado por nota”. 

Se a 
média calculada for inferior a 3.0, imprima a mensagem "Aluno reprovado". 

Se a média calculada for um valor entre 3.0 e 4.9, inclusive estas, o 
programa deve imprimir a mensagem "Aluno na quarta prova". No caso do 
aluno estar na quarta prova, leia um novo valor correspondente à nota 
do obtida pelo aluno na recuperação. Calcule então a nova média, em que 
a nota da quarta prova substituirá a menor nota entre as unidades. Imprima 
então a mensagem "Media final: " acompanhada pelo valor da média final. 
Por fim, se a nova média for igual ou maior que 7.0, imprima “Aluno aprovado”. 
Caso a média final seja entre 5.0 e 6.9 e a nota na quarta prova tiver sido 
maior ou igual a 3.0, mostre "Aluno aprovado por nota". Caso contrário, 
imprima “Aluno reprovado”.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(1);
    
    float u1, u2, u3, u4, unidades, mediaSimples, novaMedia;
    
    cin >> u1 >> u2 >> u3;
    
    unidades = u1 + u2 + u3;
    mediaSimples = unidades / 3;
    
    cout << "Media: " << mediaSimples << endl;
    
    if (mediaSimples >= 7){
		cout << "Aluno aprovado";
	} else if (mediaSimples >= 5.0 && mediaSimples <= 6.9){
		cout << "Aluno aprovado por nota";
	} else if (mediaSimples < 3){
		cout << "Aluno reprovado";
	} else if (mediaSimples >= 3.0 && mediaSimples <= 4.9){
		cout << "Aluno na quarta prova" << endl;
		cin >> u4;
		float menor = u1;
		if (menor > u2){
			menor = u2;
			if (menor > u3 && u3 < u2){
				menor = u3;
			}
		} else if (menor > u3){
			menor = u3;
		}
		unidades = unidades - menor;
		novaMedia = (unidades + u4) / 3;
		cout << "Media final: " << novaMedia << endl;
		if (novaMedia >= 7){
			cout << "Aluno Aprovado";
		} else if (novaMedia >= 5.0 && novaMedia <= 6.9 && u4 >= 3){
			cout << "Aluno aprovado por nota";
		} else {
			cout << "Aluno reprovado";
		}
	}
	 
    return 0;
}