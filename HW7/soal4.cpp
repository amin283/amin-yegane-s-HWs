#include <iostream>
using namespace std;
int GCD(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return GCD(y,x % y);
    }
}
int main(){
int x,y;
cout << "Enter first number:";
cin >> x;
cout << "Enter second number :";
cin >> y;
cout << GCD(x,y);
}
