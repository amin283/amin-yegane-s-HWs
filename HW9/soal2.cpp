#include <iostream>
using namespace std;
int main(){
    int i,j,n,temp;
    n=10;
    int A[10]={10,15,20,35,40,45,50,55,60,65};
        for(i=0 ; i<n-1; i++){
        for(j=0 ; j<(n-1); j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
    }
    }
    cout << "Array after sort";
    for(i=0; i<n ; i++)
    cout << " "<< A[i];
    
    cout << "the second min element is :";
    cout << A[1];
}
