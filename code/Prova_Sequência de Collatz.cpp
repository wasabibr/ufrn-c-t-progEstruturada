#include <iostream> 
using namespace std; 
  
void imprimiSeqDeCollatz(int n) 
{ 
    while (n != 1) 
    { 
        cout << n << " "; 
        if (n & 1){
			n = 3*n + 1;
		} else {
			n = n/2;
		}              
    } 
    cout << n; 
} 
  

int main() 
{ 
	int num;
    
    cin >> num;
    
	imprimiSeqDeCollatz(num); 
    
	return 0; 
} 