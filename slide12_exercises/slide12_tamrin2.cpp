#include <iostream>
using namespace std;

int pow(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a*pow(a, b-1);
    }
}


int main(){
    int x,y;
    cin>> x;
    cin>>y;
    cout << pow(x,y);
    return 0;
}
