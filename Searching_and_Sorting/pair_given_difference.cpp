#include<iostream>
#include<math.h>
using namespace std;

bool findPair(int arr[],int size,int N){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(abs(arr[i]-arr[j])==N){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[5]={90, 70, 20, 80, 50};
    int N = 45;
    int size =5;
    if(findPair(arr,size,N)){
        cout<<"1";
    }
    else{
        cout<<"-1";
    }
}