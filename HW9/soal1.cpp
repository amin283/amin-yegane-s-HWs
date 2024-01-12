#include <iostream>
using namespace std;

int main(){
    int A[10]={10,15,17,20,24,36,44,55,56};
    int number,i;
    cout << "enter the number: ";
    cin >> number;      //number 16
    for(i=8; i>=0 && A[i]>number; i--){
            A[i+1]=A[i];
        }
        A[i+1]= number;

    for (i = 0; i < 10; i++) {
        cout << A[i] << "  ";
    }
}
