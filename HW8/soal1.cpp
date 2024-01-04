#include <iostream>
using namespace std;
int max(int A[10]){
  
    int max=A[0];
        for(int i=0 ; i<10; i++){
            if(A[i]>max){
        max=A[i];
    }
}
return max;
}

int min(int A[10]){
    
    int min=A[0];
        for(int i=0 ; i<10; i++){
            if(A[i]<min){
        min=A[i];
    }
}
return min;
}


int main(){
    int A[10];
    int i, average;
    cout << "Enter 10 element:";
        for(i=0 ; i<10; i++)
            cin >> A[i];
    average = (min(A)+max(A))/2;
        cout << "average min max numbers is:"<< average;
    return 0;
}
