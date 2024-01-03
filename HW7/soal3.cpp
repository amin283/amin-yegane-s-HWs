#include <iostream>
using namespace std;

main(){int n,i;
    cout << "enter number : ";
    cin >> n;

    for( i=1 ; i <=n/2 ; i++){
        if(n%i == 0)
        cout << i << "\t";
    }
}
