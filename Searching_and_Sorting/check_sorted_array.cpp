#include<iostream>
using namespace std;

bool arraySortedOrNot(int arr[], int n){
        if(n ==0 || n==1 ){
            return true;
        }
        for(int i=0;i<n;i++){
            if(arr[i-1]>arr[i]){
                return false;
            }
        }
        return true;
}

int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    if(arraySortedOrNot(arr,size)){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    
}