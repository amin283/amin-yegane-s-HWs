#include <iostream>
using namespace std;
// exponent function
int power(int a , int b){
    int p=1;
    for(int i=1; i<=b ; i++){
        p=p*a;
    }
    return p;
}
//factorial function
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }}

    main(){
        float sinX ,cosX ,tanX,x;
        cin >> x;
        sinX = (x)-(power(x,3)/fact(3))+(power(x,5)/(fact(5)))-(power(x,7))/fact(7);
        cosX= (1)-(power(x,2)/fact(2))+(power(x,2)/fact(4))-(power(x,6)/fact(6));
        tanX= sinX/cosX;
        cout << tanX;
    }
