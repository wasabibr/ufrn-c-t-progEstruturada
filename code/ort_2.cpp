#include <iostream> 
using namespace std; 
  
 
  
bool isOrthogonal(int a[10][10], int n)  
{ 
 
  
// Find transpose 
int trans[n][n]; 
for (int i = 0; i < n; i++) 
    for (int j = 0; j < n; j++) 
    trans[i][j] = a[j][i]; 
  
// Find product of a[][]  
// and its transpose 
int prod[n][n]; 
for (int i = 0; i < n; i++)  
{ 
    for (int j = 0; j < n; j++)  
    { 
  
    int sum = 0; 
    for (int k = 0; k < n; k++)  
    { 
  
        // Since we are multiplying with 
        // transpose of itself. We use 
        sum = sum + (a[i][k] * a[j][k]); 
    } 
  
    prod[i][j] = sum; 
    } 
} 
  
// Check if product is identity matrix 
for (int i = 0; i < n; i++)  
{ 
    for (int j = 0; j < n; j++)  
    { 
    if (i != j && prod[i][j] != 0) 
        return false; 
    if (i == j && prod[i][j] != 1) 
        return false; 
    } 
} 
  
return true; 
} 
  
// Driver Code 
int main()  
{ 
  
	int mat[10][10], n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}

 
if (isOrthogonal(mat, n)) 
    cout << "Yes"; 
else
    cout << "No"; 
return 0; 
} 