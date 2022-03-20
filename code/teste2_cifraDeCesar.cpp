#include<iostream>
 
using namespace std;
 
int main()
{
	char message[100], ch;
	int i, key, num = 0;
	
	cin >> num;
	
	cin.ignore();
	
	cout << "Enter a message to decrypt: ";
	cin.getline(message, 100);
	cout << "Enter key: ";
	cin >> key;
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		//testando
		ch = ch - key;
		message[i] = ch;
		
/*		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch > 'a'){
				ch = ch + 'Z' - 'A' + 1;
			}
		
			message[i] = ch;
		}
*/
	}
	
	cout << "Decrypted message: " << message;
	cout << num;
	
	return 0;
}