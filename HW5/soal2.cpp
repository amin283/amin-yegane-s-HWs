#include <iostream>
using namespace std;
// vowel words (A  E  I  O  U)
main(){
	char letter;
	char A,E,I,O,U;
	cout << "enter letter ( Upper case ):";
    cin >> letter;
    
    switch (letter){
    	case 'A':
    		cout << "VOWEL";
    		break;
    	case 'E':
    		cout << "VOWEL";
    		break;
    		
    	case 'I':
    		cout << "VOWEL";
    		break;
    		
    	case 'O':
    		cout << "VOWEL";
    		break;
    		
    	case 'U':
    		cout << "VOWEL";
    		break;
    		
    	default:
    		cout << letter << " not VOWEL";
	}
}
