#include <iostream>
using namespace std;

int main(){
    int i;
    int A[5];
    cout << "Enter five element A:";
        for(i=0; i<5; i++){
            cin >> A[i];
        }
    int j;
    int B[5];
    cout << "Enter five element B:";
        for(j=0; j<5; j++){
            cin >> B[j];
        }
        int temp;
        for(i =0;i<5 ;i++){
            temp=A[i];
            A[i]=B[i];
            B[i]=temp;
        }
            
        cout << "A  element after swap :";
        for(i=0 ; i<5 ;i++){
            cout << A[i]<< "  "<< "  ";
        }

        cout << "B  element after swap :";
        for(i=0 ; i<5 ;i++){
            cout << B[i] << "  ";
        }
}
