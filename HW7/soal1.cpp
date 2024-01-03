#include <iostream>
using namespace std;

main(){
    int m,n,p=1;
    
        cout << "Enter number 'n' and pow: ";
        cin >> m;
        cin >> n;
        do{
        p=(p*m);
        n=n-1;

    }
    while(n!=0);
    cout << p;

}
