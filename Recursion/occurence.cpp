#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int i , int key){
    if(i==n){
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr,n,i+1,key);
}

int lastOcc(int arr[],int n,int i,int key){
    if(i == 0){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return lastOcc(arr,n,i-1,key);
}

int main(){
    int arr[5] = {2,1,3,4,2};
    // cout<<firstOcc(arr,5,0,2);
    cout<<lastOcc(arr,5,4,2);
}