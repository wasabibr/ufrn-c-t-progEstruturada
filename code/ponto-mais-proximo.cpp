#include<iostream>
#include<cmath>
using namespace std;

struct Ponto {
    float x, y;
};

float distancia(Ponto a, Ponto b) {
    return sqrt(pow(b.x-a.x,2) + pow(b.y-a.y,2));
}

int main() {
    Ponto p;
    cin >> p.x >> p.y;
    
    int n;
    cin >> n;
    
    Ponto prox;
    cin >> prox.x >> prox.y;
    
    float prox_d = distancia(p, prox);
    
    n--;
    
    while(n) {
        Ponto z;
        cin >> z.x >> z.y;
        float d = distancia(p, z);
        if(d < prox_d) {
            prox_d = d;
            prox = z;
        }
        n--;
    }
    
    cout << "Ponto mais perto é (" << prox.x << ", " << prox.y << ")";
    
    return 0;
}