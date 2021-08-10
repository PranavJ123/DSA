#include<iostream>

using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    int prevSum = n + sum(n-1);
    return prevSum;
}

int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    cout<<sum(n);
}