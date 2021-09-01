#include<iostream>
#include<math.h>
using namespace std;

int countSquares(int N) {
        int a = sqrt(N);
        if(a*a == N){
            return a-1;
        }else{
            return a;
        }
    }

int main(){
    int size,key;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to find square root:";
    cin>>key;

    cout<<countSquares(key);
}